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
				this->tab->Controls->Add(this->tpEnvironment);
				this->tab->Controls->Add(this->tpCulture);
				this->tab->Dock = System::Windows::Forms::DockStyle::Fill;
				this->tab->Location = System::Drawing::Point(0, 24);
				this->tab->Name = L"tab";
				this->tab->SelectedIndex = 0;
				this->tab->Size = System::Drawing::Size(511, 433);
				this->tab->TabIndex = 0;
				// 
				// tpEnvironment
				// 
				this->tpEnvironment->Controls->Add(this->txtEnvironment);
				this->tpEnvironment->Location = System::Drawing::Point(4, 24);
				this->tpEnvironment->Name = L"tpEnvironment";
				this->tpEnvironment->Padding = System::Windows::Forms::Padding(3);
				this->tpEnvironment->Size = System::Drawing::Size(503, 405);
				this->tpEnvironment->TabIndex = 0;
				this->tpEnvironment->Text = L"Environment";
				this->tpEnvironment->UseVisualStyleBackColor = true;
				// 
				// txtEnvironment
				// 
				this->txtEnvironment->Dock = System::Windows::Forms::DockStyle::Fill;
				this->txtEnvironment->Location = System::Drawing::Point(3, 3);
				this->txtEnvironment->Multiline = true;
				this->txtEnvironment->Name = L"txtEnvironment";
				this->txtEnvironment->ReadOnly = true;
				this->txtEnvironment->ScrollBars = System::Windows::Forms::ScrollBars::Both;
				this->txtEnvironment->Size = System::Drawing::Size(497, 399);
				this->txtEnvironment->TabIndex = 1;
				this->txtEnvironment->WordWrap = false;
				// 
				// tpCulture
				// 
				this->tpCulture->Controls->Add(this->txtCulture);
				this->tpCulture->Location = System::Drawing::Point(4, 24);
				this->tpCulture->Name = L"tpCulture";
				this->tpCulture->Padding = System::Windows::Forms::Padding(3);
				this->tpCulture->Size = System::Drawing::Size(705, 476);
				this->tpCulture->TabIndex = 1;
				this->tpCulture->Text = L"Culture";
				this->tpCulture->UseVisualStyleBackColor = true;
				// 
				// txtCulture
				// 
				this->txtCulture->Dock = System::Windows::Forms::DockStyle::Fill;
				this->txtCulture->Location = System::Drawing::Point(3, 3);
				this->txtCulture->Multiline = true;
				this->txtCulture->Name = L"txtCulture";
				this->txtCulture->ReadOnly = true;
				this->txtCulture->Size = System::Drawing::Size(699, 470);
				this->txtCulture->TabIndex = 0;
				this->txtCulture->WordWrap = false;
				// 
				// msMain
				// 
				this->msMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->tsmiEdit, this->tsmiSortByKey,
						this->tsmiSortByValue, this->tsmiHelp
				});
				this->msMain->Location = System::Drawing::Point(0, 0);
				this->msMain->Name = L"msMain";
				this->msMain->Size = System::Drawing::Size(511, 24);
				this->msMain->TabIndex = 1;
				this->msMain->Text = L"menuStrip1";
				// 
				// tsmiEdit
				// 
				this->tsmiEdit->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->tsmiCopy, this->toolStripSeparator4,
						this->tsmiSelectAll
				});
				this->tsmiEdit->Name = L"tsmiEdit";
				this->tsmiEdit->Size = System::Drawing::Size(39, 20);
				this->tsmiEdit->Text = L"&Edit";
				// 
				// tsmiCopy
				// 
				this->tsmiCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsmiCopy.Image")));
				this->tsmiCopy->ImageTransparentColor = System::Drawing::Color::Magenta;
				this->tsmiCopy->Name = L"tsmiCopy";
				this->tsmiCopy->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
				this->tsmiCopy->Size = System::Drawing::Size(180, 22);
				this->tsmiCopy->Text = L"&Copy";
				this->tsmiCopy->Click += gcnew System::EventHandler(this, &FormMain::tsmiCopy_Click);
				// 
				// toolStripSeparator4
				// 
				this->toolStripSeparator4->Name = L"toolStripSeparator4";
				this->toolStripSeparator4->Size = System::Drawing::Size(177, 6);
				// 
				// tsmiSelectAll
				// 
				this->tsmiSelectAll->Name = L"tsmiSelectAll";
				this->tsmiSelectAll->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
				this->tsmiSelectAll->Size = System::Drawing::Size(180, 22);
				this->tsmiSelectAll->Text = L"Select &All";
				this->tsmiSelectAll->Click += gcnew System::EventHandler(this, &FormMain::tsmiSelectAll_Click);
				// 
				// tsmiSortByKey
				// 
				this->tsmiSortByKey->Name = L"tsmiSortByKey";
				this->tsmiSortByKey->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
				this->tsmiSortByKey->Size = System::Drawing::Size(78, 20);
				this->tsmiSortByKey->Text = L"&Sort by Key";
				this->tsmiSortByKey->Click += gcnew System::EventHandler(this, &FormMain::tsmiSortByKey_Click);
				// 
				// tsmiSortByValue
				// 
				this->tsmiSortByValue->Name = L"tsmiSortByValue";
				this->tsmiSortByValue->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
				this->tsmiSortByValue->Size = System::Drawing::Size(87, 20);
				this->tsmiSortByValue->Text = L"Sort by &Value";
				this->tsmiSortByValue->Click += gcnew System::EventHandler(this, &FormMain::tsmiSortByValue_Click);
				// 
				// tsmiHelp
				// 
				this->tsmiHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsmiAbout });
				this->tsmiHelp->Name = L"tsmiHelp";
				this->tsmiHelp->Size = System::Drawing::Size(44, 20);
				this->tsmiHelp->Text = L"&Help";
				// 
				// tsmiAbout
				// 
				this->tsmiAbout->Name = L"tsmiAbout";
				this->tsmiAbout->Size = System::Drawing::Size(107, 22);
				this->tsmiAbout->Text = L"&About";
				this->tsmiAbout->Click += gcnew System::EventHandler(this, &FormMain::tsmiAbout_Click);
				// 
				// FormMain
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
				this->ClientSize = System::Drawing::Size(511, 457);
				this->Controls->Add(this->tab);
				this->Controls->Add(this->msMain);
				this->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->MinimumSize = System::Drawing::Size(302, 193);
				this->Name = L"FormMain";
				this->Text = L"showenv";
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