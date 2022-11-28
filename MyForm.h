#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:





	private: System::Windows::Forms::DataGridView^ DataView;
	private: System::Windows::Forms::TabPage^ tabStat;
	private: System::Windows::Forms::TabPage^ tabStock;
	private: System::Windows::Forms::TabPage^ tabCommand;
	private: System::Windows::Forms::TabPage^ tabEmployé;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::Button^ button1;
	protected private: System::Windows::Forms::TabControl^ tabControl1;
	private:








	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->DataView = (gcnew System::Windows::Forms::DataGridView());
			this->tabStat = (gcnew System::Windows::Forms::TabPage());
			this->tabStock = (gcnew System::Windows::Forms::TabPage());
			this->tabCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataView))->BeginInit();
			this->tabEmployé->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// DataView
			// 
			this->DataView->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->DataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataView->GridColor = System::Drawing::SystemColors::Control;
			this->DataView->Location = System::Drawing::Point(563, 3);
			this->DataView->Name = L"DataView";
			this->DataView->RowHeadersWidth = 62;
			this->DataView->RowTemplate->Height = 28;
			this->DataView->Size = System::Drawing::Size(502, 731);
			this->DataView->TabIndex = 1;
			// 
			// tabStat
			// 
			this->tabStat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabStat.BackgroundImage")));
			this->tabStat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabStat->Location = System::Drawing::Point(104, 4);
			this->tabStat->Name = L"tabStat";
			this->tabStat->Padding = System::Windows::Forms::Padding(3);
			this->tabStat->Size = System::Drawing::Size(442, 723);
			this->tabStat->TabIndex = 4;
			this->tabStat->Text = L"Stats";
			this->tabStat->UseVisualStyleBackColor = true;
			this->tabStat->Click += gcnew System::EventHandler(this, &MyForm::tabStat_Click);
			// 
			// tabStock
			// 
			this->tabStock->BackColor = System::Drawing::Color::Black;
			this->tabStock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabStock.BackgroundImage")));
			this->tabStock->Location = System::Drawing::Point(104, 4);
			this->tabStock->Name = L"tabStock";
			this->tabStock->Padding = System::Windows::Forms::Padding(3);
			this->tabStock->Size = System::Drawing::Size(442, 723);
			this->tabStock->TabIndex = 3;
			this->tabStock->Text = L"Stock";
			// 
			// tabCommand
			// 
			this->tabCommand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabCommand.BackgroundImage")));
			this->tabCommand->Location = System::Drawing::Point(104, 4);
			this->tabCommand->Name = L"tabCommand";
			this->tabCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabCommand->Size = System::Drawing::Size(442, 723);
			this->tabCommand->TabIndex = 2;
			this->tabCommand->Text = L"Commande";
			this->tabCommand->UseVisualStyleBackColor = true;
			// 
			// tabEmployé
			// 
			this->tabEmployé->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabEmployé.BackgroundImage")));
			this->tabEmployé->Controls->Add(this->button2);
			this->tabEmployé->Location = System::Drawing::Point(104, 4);
			this->tabEmployé->Name = L"tabEmployé";
			this->tabEmployé->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployé->Size = System::Drawing::Size(442, 723);
			this->tabEmployé->TabIndex = 1;
			this->tabEmployé->Text = L"Employé";
			this->tabEmployé->UseVisualStyleBackColor = true;
			this->tabEmployé->Click += gcnew System::EventHandler(this, &MyForm::tabEmployé_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(17, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// tabClient
			// 
			this->tabClient->Controls->Add(this->button1);
			this->tabClient->Location = System::Drawing::Point(104, 4);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(442, 723);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			this->tabClient->UseVisualStyleBackColor = true;
			this->tabClient->Click += gcnew System::EventHandler(this, &MyForm::tabClient_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(175, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->tabControl1->Controls->Add(this->tabClient);
			this->tabControl1->Controls->Add(this->tabEmployé);
			this->tabControl1->Controls->Add(this->tabCommand);
			this->tabControl1->Controls->Add(this->tabStock);
			this->tabControl1->Controls->Add(this->tabStat);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->tabControl1->ItemSize = System::Drawing::Size(143, 100);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(550, 731);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1068, 736);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->DataView);
			this->Enabled = false;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1094, 796);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataView))->EndInit();
			this->tabEmployé->ResumeLayout(false);
			this->tabClient->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tabStat_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabEmployé_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
