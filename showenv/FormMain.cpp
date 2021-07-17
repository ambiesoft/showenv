#include "stdafx.h"

#include "FormMain.h"

namespace Ambiesoft {
	namespace showenv {
		using namespace System::Collections::Generic;
		using namespace System::Text;
		using namespace System::Reflection;

		ref class KVComparer : public System::Collections::Generic::IComparer<KeyValuePair<String^, String^>>
		{
			initonly FormMain::SORTBY sortby_;
			initonly bool rev_;
		public:
			KVComparer(FormMain::SORTBY sortby, bool rev):
				sortby_(sortby),
				rev_(rev){}
			virtual int Compare(KeyValuePair<String^, String^> x, KeyValuePair<String^, String^> y)
			{
				int ret;
				switch (sortby_)
				{
				case FormMain::SORTBY::KEY:
					ret = x.Key->CompareTo(y.Key);
					break;
				case FormMain::SORTBY::VALUE:
					ret = x.Value->CompareTo(y.Value);
					break;
				default:
					ret = 0;
					break;
				}

				return rev_ ? -ret : ret;
			}
		};

		void FormMain::ShowEnv(SORTBY sortby)
		{
			{
				List<KeyValuePair<String^, String^>> kvs;
				for each (DictionaryEntry ^ e in Environment::GetEnvironmentVariables())
				{
					kvs.Add(KeyValuePair<String^, String^>(e->Key->ToString(), e->Value->ToString()));
				}

				if (sortby != SORTBY::NONE)
					kvs.Sort(gcnew KVComparer(sortby, ToggleRev()));

				StringBuilder sb;
				//for each (KeyValuePair<String^,String^>^ kv in kvs);
				//{
				//	kv->Key;
				//	sb.AppendLine(kv.Key + "=" + kv.Value);
				//}
				for (int i = 0; i < kvs.Count; ++i)
				{
					sb.AppendLine(kvs[i].Key + "=" + kvs[i].Value);
				}
				txtEnvironment->Text = sb.ToString();
				this->Text = String::Format(L"EnvCount={0} | {1}",
					kvs.Count, Application::ProductName);
			}

			{
				System::Text::StringBuilder sb;
				sb.AppendLine("System::Globalization::CultureInfo::CurrentCulture=" +
					System::Globalization::CultureInfo::CurrentCulture->DisplayName);
				sb.AppendLine("System::Globalization::CultureInfo::CurrentUICulture=" +
					System::Globalization::CultureInfo::CurrentUICulture->DisplayName);

				sb.AppendLine("GetACP()=" + GetACP());
				txtCulture->Text = sb.ToString();
			}
		}
		System::Void FormMain::FormMain_Load(System::Object^ sender, System::EventArgs^ e)
		{
			ShowEnv(SORTBY::NONE);
		}

		System::Void FormMain::tsmiSortByKey_Click(System::Object^ sender, System::EventArgs^ e)
		{
			ShowEnv(SORTBY::KEY);
		}
		System::Void FormMain::tsmiSortByValue_Click(System::Object^ sender, System::EventArgs^ e)
		{
			ShowEnv(SORTBY::VALUE);
		}
		System::Void FormMain::tsmiAbout_Click(System::Object^ sender, System::EventArgs^ e)
		{
			
			JR::Utils::GUI::Forms::FlexibleMessageBox::Show(
				this,
				String::Format(L"{0} v{1}\r\n\r\n{2}",
					Application::ProductName,
					AmbLib::getAssemblyVersion(Assembly::GetExecutingAssembly(), 3),
					L"https://ambiesoft.github.io/webjumper/?target=showenv"),
				Application::ProductName,
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
			
		}
		System::Void FormMain::tsmiCopy_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				txtEnvironment->Copy();
			}
			catch (Exception^ ex)
			{
				CppUtils::Alert(ex);
			}
		}
		System::Void FormMain::tsmiSelectAll_Click(System::Object^ sender, System::EventArgs^ e)
		{
			txtEnvironment->SelectAll();
		}

	}
}