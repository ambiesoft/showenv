#pragma once

namespace Ambiesoft {
	namespace showenv {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for FormMain
		///
		/// WARNING: If you change the name of this class, you will need to change the
		///          'Resource File Name' property for the managed resource compiler tool
		///          associated with all .resx files this class depends on.  Otherwise,
		///          the designers will not be able to interact properly with localized
		///          resources associated with this form.
		/// </summary>
		public ref class FormMain : public System::Windows::Forms::Form
		{
		public:
			FormMain(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~FormMain()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::TabControl^ tab;
		protected:
		private: System::Windows::Forms::TabPage^ tpEnvironment;
		private: System::Windows::Forms::TabPage^ tpCulture;
		private: System::Windows::Forms::TextBox^ txtEnvironment;
		private: System::Windows::Forms::TextBox^ txtCulture;
		private: System::Windows::Forms::MenuStrip^ msMain;

		private: System::Windows::Forms::ToolStripMenuItem^ tsmiSortByKey;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiSortByValue;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiHelp;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiAbout;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiEdit;

		private: System::Windows::Forms::ToolStripMenuItem^ tsmiCopy;
		private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiSelectAll;


		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
				this->tab = (gcnew System::Windows::Forms::TabControl());
				this->tpEnvironment = (gcnew System::Windows::Forms::TabPage());
				this->txtEnvironment = (gcnew System::Windows::Forms::TextBox());
				this->tpCulture = (gcnew System::Windows::Forms::TabPage());
				this->txtCulture = (gcnew System::Windows::Forms::TextBox());
				this->msMain = (gcnew System::Windows::Forms::MenuStrip());
				this->tsmiEdit = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiCopy = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
				this->tsmiSelectAll = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiSortByKey = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiSortByValue = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tab->SuspendLayout();
				this->tpEnvironment->SuspendLayout();
				this->tpCulture->SuspendLayout();
				this->msMain->SuspendLayout();
				this->SuspendLayout();
				// 
				// tab
				// 
				resources->ApplyResources(this->tab, L"tab");
				this->tab->Controls->Add(this->tpEnvironment);
				this->tab->Controls->Add(this->tpCulture);
				this->tab->Name = L"tab";
				this->tab->SelectedIndex = 0;
				// 
				// tpEnvironment
				// 
				resources->ApplyResources(this->tpEnvironment, L"tpEnvironment");
				this->tpEnvironment->Controls->Add(this->txtEnvironment);
				this->tpEnvironment->Name = L"tpEnvironment";
				this->tpEnvironment->UseVisualStyleBackColor = true;
				// 
				// txtEnvironment
				// 
				resources->ApplyResources(this->txtEnvironment, L"txtEnvironment");
				this->txtEnvironment->HideSelection = false;
				this->txtEnvironment->Name = L"txtEnvironment";
				this->txtEnvironment->ReadOnly = true;
				// 
				// tpCulture
				// 
				resources->ApplyResources(this->tpCulture, L"tpCulture");
				this->tpCulture->Controls->Add(this->txtCulture);
				this->tpCulture->Name = L"tpCulture";
				this->tpCulture->UseVisualStyleBackColor = true;
				// 
				// txtCulture
				// 
				resources->ApplyResources(this->txtCulture, L"txtCulture");
				this->txtCulture->Name = L"txtCulture";
				this->txtCulture->ReadOnly = true;
				// 
				// msMain
				// 
				resources->ApplyResources(this->msMain, L"msMain");
				this->msMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->tsmiEdit, this->tsmiSortByKey,
						this->tsmiSortByValue, this->tsmiHelp
				});
				this->msMain->Name = L"msMain";
				// 
				// tsmiEdit
				// 
				resources->ApplyResources(this->tsmiEdit, L"tsmiEdit");
				this->tsmiEdit->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->tsmiCopy, this->toolStripSeparator4,
						this->tsmiSelectAll
				});
				this->tsmiEdit->Name = L"tsmiEdit";
				// 
				// tsmiCopy
				// 
				resources->ApplyResources(this->tsmiCopy, L"tsmiCopy");
				this->tsmiCopy->Name = L"tsmiCopy";
				this->tsmiCopy->Click += gcnew System::EventHandler(this, &FormMain::tsmiCopy_Click);
				// 
				// toolStripSeparator4
				// 
				resources->ApplyResources(this->toolStripSeparator4, L"toolStripSeparator4");
				this->toolStripSeparator4->Name = L"toolStripSeparator4";
				// 
				// tsmiSelectAll
				// 
				resources->ApplyResources(this->tsmiSelectAll, L"tsmiSelectAll");
				this->tsmiSelectAll->Name = L"tsmiSelectAll";
				this->tsmiSelectAll->Click += gcnew System::EventHandler(this, &FormMain::tsmiSelectAll_Click);
				// 
				// tsmiSortByKey
				// 
				resources->ApplyResources(this->tsmiSortByKey, L"tsmiSortByKey");
				this->tsmiSortByKey->Name = L"tsmiSortByKey";
				this->tsmiSortByKey->Click += gcnew System::EventHandler(this, &FormMain::tsmiSortByKey_Click);
				// 
				// tsmiSortByValue
				// 
				resources->ApplyResources(this->tsmiSortByValue, L"tsmiSortByValue");
				this->tsmiSortByValue->Name = L"tsmiSortByValue";
				this->tsmiSortByValue->Click += gcnew System::EventHandler(this, &FormMain::tsmiSortByValue_Click);
				// 
				// tsmiHelp
				// 
				resources->ApplyResources(this->tsmiHelp, L"tsmiHelp");
				this->tsmiHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsmiAbout });
				this->tsmiHelp->Name = L"tsmiHelp";
				// 
				// tsmiAbout
				// 
				resources->ApplyResources(this->tsmiAbout, L"tsmiAbout");
				this->tsmiAbout->Name = L"tsmiAbout";
				this->tsmiAbout->Click += gcnew System::EventHandler(this, &FormMain::tsmiAbout_Click);
				// 
				// FormMain
				// 
				resources->ApplyResources(this, L"$this");
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
				this->Controls->Add(this->tab);
				this->Controls->Add(this->msMain);
				this->Name = L"FormMain";
				this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
				this->tab->ResumeLayout(false);
				this->tpEnvironment->ResumeLayout(false);
				this->tpEnvironment->PerformLayout();
				this->tpCulture->ResumeLayout(false);
				this->tpCulture->PerformLayout();
				this->msMain->ResumeLayout(false);
				this->msMain->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion

			bool rev_ = true;
		public:
			enum class SORTBY {
				NONE,
				KEY,
				VALUE,
			};
			void ShowEnv(SORTBY sortby);
			
			bool ToggleRev() {
				rev_ = !rev_;
				return rev_;
			}
		private:
			System::Void FormMain_Load(System::Object^ sender, System::EventArgs^ e);
			System::Void tsmiSortByKey_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void tsmiSortByValue_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void tsmiAbout_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void tsmiCopy_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void tsmiSelectAll_Click(System::Object^ sender, System::EventArgs^ e);

};
	}
}