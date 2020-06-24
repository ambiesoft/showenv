#include "stdafx.h"

#include "FormMain.h"

namespace showenv {

	System::Void FormMain::FormMain_Load(System::Object^  sender, System::EventArgs^  e)
	{
		{
			System::Text::StringBuilder sb;
			for each(DictionaryEntry^ e in System::Environment::GetEnvironmentVariables())
			{
				sb.AppendLine(e->Key  + "=" + e->Value);
			}
			txtEnvironment->Text = sb.ToString();
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
}