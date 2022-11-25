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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::TabPage^ tabEmployé;
	private: System::Windows::Forms::TabPage^ tabCommand;
	private: System::Windows::Forms::TabPage^ tabStock;
	private: System::Windows::Forms::TabPage^ tabStat;
	private: System::Windows::Forms::DataGridView^ DataView;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
			this->tabCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabStock = (gcnew System::Windows::Forms::TabPage());
			this->tabStat = (gcnew System::Windows::Forms::TabPage());
			this->DataView = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataView))->BeginInit();
			this->SuspendLayout();
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
			this->tabControl1->Location = System::Drawing::Point(2, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(472, 729);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// tabClient
			// 
			this->tabClient->Location = System::Drawing::Point(28, 4);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(440, 721);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			this->tabClient->UseVisualStyleBackColor = true;
			// 
			// tabEmployé
			// 
			this->tabEmployé->Location = System::Drawing::Point(28, 4);
			this->tabEmployé->Name = L"tabEmployé";
			this->tabEmployé->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployé->Size = System::Drawing::Size(440, 721);
			this->tabEmployé->TabIndex = 1;
			this->tabEmployé->Text = L"Employé";
			this->tabEmployé->UseVisualStyleBackColor = true;
			// 
			// tabCommand
			// 
			this->tabCommand->Location = System::Drawing::Point(28, 4);
			this->tabCommand->Name = L"tabCommand";
			this->tabCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabCommand->Size = System::Drawing::Size(440, 721);
			this->tabCommand->TabIndex = 2;
			this->tabCommand->Text = L"Commande";
			this->tabCommand->UseVisualStyleBackColor = true;
			// 
			// tabStock
			// 
			this->tabStock->Location = System::Drawing::Point(28, 4);
			this->tabStock->Name = L"tabStock";
			this->tabStock->Padding = System::Windows::Forms::Padding(3);
			this->tabStock->Size = System::Drawing::Size(440, 721);
			this->tabStock->TabIndex = 3;
			this->tabStock->Text = L"Stock";
			this->tabStock->UseVisualStyleBackColor = true;
			// 
			// tabStat
			// 
			this->tabStat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabStat->Location = System::Drawing::Point(28, 4);
			this->tabStat->Name = L"tabStat";
			this->tabStat->Padding = System::Windows::Forms::Padding(3);
			this->tabStat->Size = System::Drawing::Size(440, 721);
			this->tabStat->TabIndex = 4;
			this->tabStat->Text = L"Stats";
			this->tabStat->UseVisualStyleBackColor = true;
			// 
			// DataView
			// 
			this->DataView->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->DataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataView->Location = System::Drawing::Point(480, 9);
			this->DataView->Name = L"DataView";
			this->DataView->RowHeadersWidth = 62;
			this->DataView->RowTemplate->Height = 28;
			this->DataView->Size = System::Drawing::Size(576, 717);
			this->DataView->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->ClientSize = System::Drawing::Size(1068, 736);
			this->Controls->Add(this->DataView);
			this->Controls->Add(this->tabControl1);
			this->Enabled = false;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
