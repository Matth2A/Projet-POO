#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::TabControl^ tabControl;
	protected:
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::TabPage^ tabEmployé;
	private: System::Windows::Forms::TabPage^ tabCommande;
	private: System::Windows::Forms::TabPage^ tabStocks;
	private: System::Windows::Forms::TabPage^ tabStats;
	private: System::Windows::Forms::DataGridView^ data;
	private: System::Windows::Forms::TableLayoutPanel^ tableInterface;
	private: System::Windows::Forms::TableLayoutPanel^ tableFonction;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ statB;

	private: System::Windows::Forms::Button^ stocksB;

	private: System::Windows::Forms::Button^ commandeB;

	private: System::Windows::Forms::Button^ personelB;
	private: System::Windows::Forms::Button^ ClientB;



	protected:

	protected:



















	protected:


















	protected:



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
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
			this->tabCommande = (gcnew System::Windows::Forms::TabPage());
			this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->tableInterface = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableFonction = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ClientB = (gcnew System::Windows::Forms::Button());
			this->personelB = (gcnew System::Windows::Forms::Button());
			this->commandeB = (gcnew System::Windows::Forms::Button());
			this->stocksB = (gcnew System::Windows::Forms::Button());
			this->statB = (gcnew System::Windows::Forms::Button());
			this->tabControl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->tableInterface->SuspendLayout();
			this->tableFonction->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabClient);
			this->tabControl->Controls->Add(this->tabEmployé);
			this->tabControl->Controls->Add(this->tabCommande);
			this->tabControl->Controls->Add(this->tabStocks);
			this->tabControl->Controls->Add(this->tabStats);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl->Location = System::Drawing::Point(120, 3);
			this->tabControl->Multiline = true;
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(580, 743);
			this->tabControl->TabIndex = 0;
			// 
			// tabStats
			// 
			this->tabStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->tabStats->Location = System::Drawing::Point(4, 35);
			this->tabStats->Name = L"tabStats";
			this->tabStats->Size = System::Drawing::Size(572, 704);
			this->tabStats->TabIndex = 4;
			this->tabStats->Text = L"Statistiques";
			// 
			// tabStocks
			// 
			this->tabStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->tabStocks->Location = System::Drawing::Point(4, 35);
			this->tabStocks->Name = L"tabStocks";
			this->tabStocks->Size = System::Drawing::Size(572, 704);
			this->tabStocks->TabIndex = 3;
			this->tabStocks->Text = L"Stocks";
			this->tabStocks->Click += gcnew System::EventHandler(this, &MyForm::tabStocks_Click);
			// 
			// tabCommande
			// 
			this->tabCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->tabCommande->Location = System::Drawing::Point(4, 35);
			this->tabCommande->Name = L"tabCommande";
			this->tabCommande->Size = System::Drawing::Size(572, 704);
			this->tabCommande->TabIndex = 2;
			this->tabCommande->Text = L"Commande";
			// 
			// tabEmployé
			// 
			this->tabEmployé->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->tabEmployé->Location = System::Drawing::Point(4, 35);
			this->tabEmployé->Name = L"tabEmployé";
			this->tabEmployé->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployé->Size = System::Drawing::Size(572, 704);
			this->tabEmployé->TabIndex = 1;
			this->tabEmployé->Text = L"Employé";
			// 
			// tabClient
			// 
			this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->tabClient->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabClient->Location = System::Drawing::Point(4, 35);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(572, 704);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			// 
			// data
			// 
			this->data->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->data->ColumnHeadersHeight = 34;
			this->data->Dock = System::Windows::Forms::DockStyle::Fill;
			this->data->Location = System::Drawing::Point(706, 3);
			this->data->Name = L"data";
			this->data->RowHeadersWidth = 62;
			this->data->RowTemplate->Height = 28;
			this->data->Size = System::Drawing::Size(463, 743);
			this->data->TabIndex = 0;
			this->data->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// tableInterface
			// 
			this->tableInterface->ColumnCount = 1;
			this->tableInterface->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableInterface->Controls->Add(this->tableFonction, 0, 0);
			this->tableInterface->Controls->Add(this->panel1, 0, 1);
			this->tableInterface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableInterface->Location = System::Drawing::Point(0, 0);
			this->tableInterface->Name = L"tableInterface";
			this->tableInterface->RowCount = 2;
			this->tableInterface->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableInterface->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableInterface->Size = System::Drawing::Size(1178, 839);
			this->tableInterface->TabIndex = 1;
			// 
			// tableFonction
			// 
			this->tableFonction->ColumnCount = 3;
			this->tableFonction->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableFonction->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableFonction->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableFonction->Controls->Add(this->data, 2, 0);
			this->tableFonction->Controls->Add(this->tabControl, 1, 0);
			this->tableFonction->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableFonction->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableFonction->Location = System::Drawing::Point(3, 3);
			this->tableFonction->Name = L"tableFonction";
			this->tableFonction->RowCount = 1;
			this->tableFonction->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableFonction->Size = System::Drawing::Size(1172, 749);
			this->tableFonction->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Cyan;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 758);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1172, 78);
			this->panel1->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->statB, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->stocksB, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->commandeB, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->personelB, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->ClientB, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(111, 743);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// ClientB
			// 
			this->ClientB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ClientB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ClientB->Location = System::Drawing::Point(3, 3);
			this->ClientB->Name = L"ClientB";
			this->ClientB->Size = System::Drawing::Size(105, 142);
			this->ClientB->TabIndex = 0;
			this->ClientB->Text = L"Client";
			this->ClientB->UseVisualStyleBackColor = true;
			// 
			// personelB
			// 
			this->personelB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->personelB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->personelB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->personelB->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->personelB->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->personelB->Location = System::Drawing::Point(3, 151);
			this->personelB->Name = L"personelB";
			this->personelB->Size = System::Drawing::Size(105, 142);
			this->personelB->TabIndex = 1;
			this->personelB->Text = L"Personnel";
			this->personelB->UseVisualStyleBackColor = true;
			// 
			// commandeB
			// 
			this->commandeB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->commandeB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->commandeB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->commandeB->Location = System::Drawing::Point(3, 299);
			this->commandeB->Name = L"commandeB";
			this->commandeB->Size = System::Drawing::Size(105, 142);
			this->commandeB->TabIndex = 2;
			this->commandeB->Text = L"Commande";
			this->commandeB->UseVisualStyleBackColor = true;
			// 
			// stocksB
			// 
			this->stocksB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->stocksB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stocksB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stocksB->Location = System::Drawing::Point(3, 447);
			this->stocksB->Name = L"stocksB";
			this->stocksB->Size = System::Drawing::Size(105, 142);
			this->stocksB->TabIndex = 3;
			this->stocksB->Text = L"Stocks";
			this->stocksB->UseVisualStyleBackColor = true;
			// 
			// statB
			// 
			this->statB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->statB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->statB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->statB->Location = System::Drawing::Point(3, 595);
			this->statB->Name = L"statB";
			this->statB->Size = System::Drawing::Size(105, 145);
			this->statB->TabIndex = 4;
			this->statB->Text = L"Statistiques";
			this->statB->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->ClientSize = System::Drawing::Size(1178, 839);
			this->Controls->Add(this->tableInterface);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1200, 895);
			this->Name = L"MyForm";
			this->Text = L"DataBase Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->tableInterface->ResumeLayout(false);
			this->tableFonction->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tabStocks_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
