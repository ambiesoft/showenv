#pragma once


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
	private: System::Windows::Forms::TabControl^  tab;
	protected: 
	private: System::Windows::Forms::TabPage^  tpEnvironment;
	private: System::Windows::Forms::TabPage^  tpCulture;
	private: System::Windows::Forms::TextBox^  txtEnvironment;
	private: System::Windows::Forms::TextBox^  txtCulture;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->tab->SuspendLayout();
			this->tpEnvironment->SuspendLayout();
			this->tpCulture->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab
			// 
			this->tab->Controls->Add(this->tpEnvironment);
			this->tab->Controls->Add(this->tpCulture);
			this->tab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tab->Location = System::Drawing::Point(0, 0);
			this->tab->Name = L"tab";
			this->tab->SelectedIndex = 0;
			this->tab->Size = System::Drawing::Size(611, 458);
			this->tab->TabIndex = 0;
			// 
			// tpEnvironment
			// 
			this->tpEnvironment->Controls->Add(this->txtEnvironment);
			this->tpEnvironment->Location = System::Drawing::Point(4, 22);
			this->tpEnvironment->Name = L"tpEnvironment";
			this->tpEnvironment->Padding = System::Windows::Forms::Padding(3);
			this->tpEnvironment->Size = System::Drawing::Size(603, 432);
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
			this->txtEnvironment->Size = System::Drawing::Size(597, 426);
			this->txtEnvironment->TabIndex = 1;
			this->txtEnvironment->WordWrap = false;
			// 
			// tpCulture
			// 
			this->tpCulture->Controls->Add(this->txtCulture);
			this->tpCulture->Location = System::Drawing::Point(4, 22);
			this->tpCulture->Name = L"tpCulture";
			this->tpCulture->Padding = System::Windows::Forms::Padding(3);
			this->tpCulture->Size = System::Drawing::Size(603, 432);
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
			this->txtCulture->Size = System::Drawing::Size(597, 426);
			this->txtCulture->TabIndex = 0;
			this->txtCulture->WordWrap = false;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 458);
			this->Controls->Add(this->tab);
			this->Name = L"FormMain";
			this->Text = L"showenv";
			this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
			this->tab->ResumeLayout(false);
			this->tpEnvironment->ResumeLayout(false);
			this->tpEnvironment->PerformLayout();
			this->tpCulture->ResumeLayout(false);
			this->tpCulture->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormMain_Load(System::Object^  sender, System::EventArgs^  e);

};
}

