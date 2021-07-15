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
		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiSortByKey;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiSortByValue;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiHelp;
		private: System::Windows::Forms::ToolStripMenuItem^ tsmiAbout;


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
				this->tab = (gcnew System::Windows::Forms::TabControl());
				this->tpEnvironment = (gcnew System::Windows::Forms::TabPage());
				this->txtEnvironment = (gcnew System::Windows::Forms::TextBox());
				this->tpCulture = (gcnew System::Windows::Forms::TabPage());
				this->txtCulture = (gcnew System::Windows::Forms::TextBox());
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->tsmiSortByKey = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiSortByValue = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tsmiAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->tab->SuspendLayout();
				this->tpEnvironment->SuspendLayout();
				this->tpCulture->SuspendLayout();
				this->menuStrip1->SuspendLayout();
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
				this->tab->Size = System::Drawing::Size(713, 504);
				this->tab->TabIndex = 0;
				// 
				// tpEnvironment
				// 
				this->tpEnvironment->Controls->Add(this->txtEnvironment);
				this->tpEnvironment->Location = System::Drawing::Point(4, 24);
				this->tpEnvironment->Name = L"tpEnvironment";
				this->tpEnvironment->Padding = System::Windows::Forms::Padding(3);
				this->tpEnvironment->Size = System::Drawing::Size(705, 476);
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
				this->txtEnvironment->Size = System::Drawing::Size(699, 470);
				this->txtEnvironment->TabIndex = 1;
				this->txtEnvironment->WordWrap = false;
				// 
				// tpCulture
				// 
				this->tpCulture->Controls->Add(this->txtCulture);
				this->tpCulture->Location = System::Drawing::Point(4, 22);
				this->tpCulture->Name = L"tpCulture";
				this->tpCulture->Padding = System::Windows::Forms::Padding(3);
				this->tpCulture->Size = System::Drawing::Size(705, 502);
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
				this->txtCulture->Size = System::Drawing::Size(699, 496);
				this->txtCulture->TabIndex = 0;
				this->txtCulture->WordWrap = false;
				// 
				// menuStrip1
				// 
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->tsmiSortByKey, this->tsmiSortByValue,
						this->tsmiHelp
				});
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(713, 24);
				this->menuStrip1->TabIndex = 1;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// tsmiSortByKey
				// 
				this->tsmiSortByKey->Name = L"tsmiSortByKey";
				this->tsmiSortByKey->Size = System::Drawing::Size(78, 20);
				this->tsmiSortByKey->Text = L"&Sort by Key";
				this->tsmiSortByKey->Click += gcnew System::EventHandler(this, &FormMain::tsmiSortByKey_Click);
				// 
				// tsmiSortByValue
				// 
				this->tsmiSortByValue->Name = L"tsmiSortByValue";
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
				this->tsmiAbout->Size = System::Drawing::Size(180, 22);
				this->tsmiAbout->Text = L"&About";
				this->tsmiAbout->Click += gcnew System::EventHandler(this, &FormMain::tsmiAbout_Click);
				// 
				// FormMain
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
				this->ClientSize = System::Drawing::Size(713, 528);
				this->Controls->Add(this->tab);
				this->Controls->Add(this->menuStrip1);
				this->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Name = L"FormMain";
				this->Text = L"showenv";
				this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
				this->tab->ResumeLayout(false);
				this->tpEnvironment->ResumeLayout(false);
				this->tpEnvironment->PerformLayout();
				this->tpCulture->ResumeLayout(false);
				this->tpCulture->PerformLayout();
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
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

		};
	}
}