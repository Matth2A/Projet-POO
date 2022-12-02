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

	protected:





	private: System::Windows::Forms::DataGridView^ data;
	private: System::Windows::Forms::TableLayoutPanel^ tableInterface;
	private: System::Windows::Forms::TableLayoutPanel^ tableFonction;

	private: System::Windows::Forms::TabControl^ TabMod;
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::TabPage^ tabEmployé;
	private: System::Windows::Forms::TabPage^ tabCommande;
	private: System::Windows::Forms::TabPage^ tabStocks;
	private: System::Windows::Forms::TabPage^ tabStats;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ Buttons;

	private: System::Windows::Forms::Button^ ClientB;
	private: System::Windows::Forms::Button^ EmplyéB;
	private: System::Windows::Forms::Button^ CommandeB;
	private: System::Windows::Forms::Button^ StockB;
	private: System::Windows::Forms::Button^ StatsB;











	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ NomTab;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Label^ labelStocks;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TabControl^ tabControl4;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::TabPage^ tabPage14;
	private: System::Windows::Forms::TabPage^ tabPage15;
	private: System::Windows::Forms::TabPage^ tabPage16;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TabControl^ tabControl5;
	private: System::Windows::Forms::TabPage^ tabPage17;
	private: System::Windows::Forms::TabPage^ tabPage18;
	private: System::Windows::Forms::TabPage^ tabPage19;
	private: System::Windows::Forms::TabPage^ tabPage20;
	private: System::Windows::Forms::Label^ label4;


























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
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->tableInterface = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableFonction = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Buttons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ClientB = (gcnew System::Windows::Forms::Button());
			this->EmplyéB = (gcnew System::Windows::Forms::Button());
			this->CommandeB = (gcnew System::Windows::Forms::Button());
			this->StockB = (gcnew System::Windows::Forms::Button());
			this->StatsB = (gcnew System::Windows::Forms::Button());
			this->TabMod = (gcnew System::Windows::Forms::TabControl());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
			this->tabCommande = (gcnew System::Windows::Forms::TabPage());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->labelStocks = (gcnew System::Windows::Forms::Label());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->NomTab = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->tableInterface->SuspendLayout();
			this->tableFonction->SuspendLayout();
			this->Buttons->SuspendLayout();
			this->TabMod->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->tabEmployé->SuspendLayout();
			this->tabCommande->SuspendLayout();
			this->tabStocks->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabStats->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->SuspendLayout();
			// 
			// data
			// 
			this->data->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->data->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->data->ColumnHeadersHeight = 34;
			this->data->Dock = System::Windows::Forms::DockStyle::Fill;
			this->data->Location = System::Drawing::Point(707, 1);
			this->data->Margin = System::Windows::Forms::Padding(1);
			this->data->Name = L"data";
			this->data->RowHeadersWidth = 62;
			this->data->RowTemplate->Height = 28;
			this->data->Size = System::Drawing::Size(470, 847);
			this->data->TabIndex = 0;
			// 
			// tableInterface
			// 
			this->tableInterface->ColumnCount = 1;
			this->tableInterface->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableInterface->Controls->Add(this->tableFonction, 0, 0);
			this->tableInterface->Controls->Add(this->tableLayoutPanel1, 0, 1);
			this->tableInterface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableInterface->Location = System::Drawing::Point(0, 0);
			this->tableInterface->Margin = System::Windows::Forms::Padding(0);
			this->tableInterface->Name = L"tableInterface";
			this->tableInterface->RowCount = 2;
			this->tableInterface->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableInterface->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableInterface->Size = System::Drawing::Size(1178, 944);
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
			this->tableFonction->Controls->Add(this->Buttons, 0, 0);
			this->tableFonction->Controls->Add(this->TabMod, 1, 0);
			this->tableFonction->Controls->Add(this->data, 2, 0);
			this->tableFonction->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableFonction->Location = System::Drawing::Point(0, 0);
			this->tableFonction->Margin = System::Windows::Forms::Padding(0);
			this->tableFonction->Name = L"tableFonction";
			this->tableFonction->RowCount = 1;
			this->tableFonction->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableFonction->Size = System::Drawing::Size(1178, 849);
			this->tableFonction->TabIndex = 2;
			// 
			// Buttons
			// 
			this->Buttons->ColumnCount = 1;
			this->Buttons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->Buttons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->Buttons->Controls->Add(this->ClientB, 0, 0);
			this->Buttons->Controls->Add(this->EmplyéB, 0, 1);
			this->Buttons->Controls->Add(this->CommandeB, 0, 2);
			this->Buttons->Controls->Add(this->StockB, 0, 3);
			this->Buttons->Controls->Add(this->StatsB, 0, 4);
			this->Buttons->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Buttons->Location = System::Drawing::Point(1, 1);
			this->Buttons->Margin = System::Windows::Forms::Padding(1);
			this->Buttons->Name = L"Buttons";
			this->Buttons->RowCount = 5;
			this->Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->Buttons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->Buttons->Size = System::Drawing::Size(115, 847);
			this->Buttons->TabIndex = 2;
			// 
			// ClientB
			// 
			this->ClientB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ClientB->Location = System::Drawing::Point(1, 1);
			this->ClientB->Margin = System::Windows::Forms::Padding(1);
			this->ClientB->Name = L"ClientB";
			this->ClientB->Size = System::Drawing::Size(113, 167);
			this->ClientB->TabIndex = 0;
			this->ClientB->Text = L"Client";
			this->ClientB->UseVisualStyleBackColor = true;
			this->ClientB->Click += gcnew System::EventHandler(this, &MyForm::ClientB_Click);
			// 
			// EmplyéB
			// 
			this->EmplyéB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EmplyéB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EmplyéB->Location = System::Drawing::Point(1, 170);
			this->EmplyéB->Margin = System::Windows::Forms::Padding(1);
			this->EmplyéB->Name = L"EmplyéB";
			this->EmplyéB->Size = System::Drawing::Size(113, 167);
			this->EmplyéB->TabIndex = 1;
			this->EmplyéB->Text = L"Personnel";
			this->EmplyéB->UseVisualStyleBackColor = true;
			this->EmplyéB->Click += gcnew System::EventHandler(this, &MyForm::EmplyéB_Click);
			// 
			// CommandeB
			// 
			this->CommandeB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CommandeB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CommandeB->Location = System::Drawing::Point(1, 339);
			this->CommandeB->Margin = System::Windows::Forms::Padding(1);
			this->CommandeB->Name = L"CommandeB";
			this->CommandeB->Size = System::Drawing::Size(113, 167);
			this->CommandeB->TabIndex = 2;
			this->CommandeB->Text = L"Commande";
			this->CommandeB->UseVisualStyleBackColor = true;
			this->CommandeB->Click += gcnew System::EventHandler(this, &MyForm::CommandeB_Click);
			// 
			// StockB
			// 
			this->StockB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StockB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StockB->Location = System::Drawing::Point(1, 508);
			this->StockB->Margin = System::Windows::Forms::Padding(1);
			this->StockB->Name = L"StockB";
			this->StockB->Size = System::Drawing::Size(113, 167);
			this->StockB->TabIndex = 3;
			this->StockB->Text = L"Stocks";
			this->StockB->UseVisualStyleBackColor = true;
			this->StockB->Click += gcnew System::EventHandler(this, &MyForm::StockB_Click);
			// 
			// StatsB
			// 
			this->StatsB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StatsB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StatsB->Location = System::Drawing::Point(1, 677);
			this->StatsB->Margin = System::Windows::Forms::Padding(1);
			this->StatsB->Name = L"StatsB";
			this->StatsB->Size = System::Drawing::Size(113, 169);
			this->StatsB->TabIndex = 4;
			this->StatsB->Text = L"Stats";
			this->StatsB->UseVisualStyleBackColor = true;
			this->StatsB->Click += gcnew System::EventHandler(this, &MyForm::StatsB_Click);
			// 
			// TabMod
			// 
			this->TabMod->Controls->Add(this->tabClient);
			this->TabMod->Controls->Add(this->tabEmployé);
			this->TabMod->Controls->Add(this->tabCommande);
			this->TabMod->Controls->Add(this->tabStocks);
			this->TabMod->Controls->Add(this->tabStats);
			this->TabMod->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TabMod->Font = (gcnew System::Drawing::Font(L"Cooper Black", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TabMod->ItemSize = System::Drawing::Size(1, 1);
			this->TabMod->Location = System::Drawing::Point(118, 1);
			this->TabMod->Margin = System::Windows::Forms::Padding(1);
			this->TabMod->Multiline = true;
			this->TabMod->Name = L"TabMod";
			this->TabMod->SelectedIndex = 0;
			this->TabMod->Size = System::Drawing::Size(587, 847);
			this->TabMod->TabIndex = 1;
			// 
			// tabClient
			// 
			this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabClient->Controls->Add(this->tableLayoutPanel4);
			this->tabClient->Location = System::Drawing::Point(4, 5);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tabClient->Size = System::Drawing::Size(579, 838);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			// 
			// tabEmployé
			// 
			this->tabEmployé->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabEmployé->Controls->Add(this->tableLayoutPanel5);
			this->tabEmployé->Location = System::Drawing::Point(4, 5);
			this->tabEmployé->Name = L"tabEmployé";
			this->tabEmployé->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployé->Size = System::Drawing::Size(579, 838);
			this->tabEmployé->TabIndex = 1;
			this->tabEmployé->Text = L"Personnel";
			// 
			// tabCommande
			// 
			this->tabCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabCommande->Controls->Add(this->tableLayoutPanel6);
			this->tabCommande->ForeColor = System::Drawing::Color::Black;
			this->tabCommande->Location = System::Drawing::Point(4, 5);
			this->tabCommande->Name = L"tabCommande";
			this->tabCommande->Size = System::Drawing::Size(579, 838);
			this->tabCommande->TabIndex = 2;
			this->tabCommande->Text = L"Commande";
			// 
			// tabStocks
			// 
			this->tabStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabStocks->Controls->Add(this->tableLayoutPanel3);
			this->tabStocks->Location = System::Drawing::Point(4, 5);
			this->tabStocks->Name = L"tabStocks";
			this->tabStocks->Size = System::Drawing::Size(579, 838);
			this->tabStocks->TabIndex = 3;
			this->tabStocks->Text = L"Stocks";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->tabControl2, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->labelStocks, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(579, 838);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Location = System::Drawing::Point(3, 44);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(573, 791);
			this->tabControl2->TabIndex = 1;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 34);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(565, 753);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Ajout";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 34);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(565, 753);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Modification";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 34);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(565, 753);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Supprimer";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 34);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(565, 753);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"Recherche";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// labelStocks
			// 
			this->labelStocks->AutoSize = true;
			this->labelStocks->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelStocks->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelStocks->Location = System::Drawing::Point(3, 0);
			this->labelStocks->Name = L"labelStocks";
			this->labelStocks->Size = System::Drawing::Size(573, 41);
			this->labelStocks->TabIndex = 2;
			this->labelStocks->Text = L"Stocks";
			// 
			// tabStats
			// 
			this->tabStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabStats->Controls->Add(this->tableLayoutPanel2);
			this->tabStats->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabStats->Location = System::Drawing::Point(4, 5);
			this->tabStats->Name = L"tabStats";
			this->tabStats->Size = System::Drawing::Size(579, 838);
			this->tabStats->TabIndex = 4;
			this->tabStats->Text = L"Stats";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tabControl1, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->NomTab, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(579, 838);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 11));
			this->tabControl1->Location = System::Drawing::Point(3, 44);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(573, 791);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(565, 753);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ajout";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(565, 753);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modification";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 34);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(565, 753);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Supprimer";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 34);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(565, 753);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Recherche";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// NomTab
			// 
			this->NomTab->AutoSize = true;
			this->NomTab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NomTab->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomTab->Location = System::Drawing::Point(3, 0);
			this->NomTab->Name = L"NomTab";
			this->NomTab->Size = System::Drawing::Size(573, 41);
			this->NomTab->TabIndex = 2;
			this->NomTab->Text = L"Statistiques";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				85)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 852);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1172, 89);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(169, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(178, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(991, 89);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Elèc-tonique.inc";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->tabControl3, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(573, 832);
			this->tableLayoutPanel4->TabIndex = 4;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Location = System::Drawing::Point(3, 44);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(567, 785);
			this->tabControl3->TabIndex = 1;
			// 
			// tabPage9
			// 
			this->tabPage9->Location = System::Drawing::Point(4, 34);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(559, 747);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"Ajout";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tabPage10
			// 
			this->tabPage10->Location = System::Drawing::Point(4, 34);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(565, 753);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Modification";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(4, 34);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(565, 753);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Supprimer";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// tabPage12
			// 
			this->tabPage12->Location = System::Drawing::Point(4, 34);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(565, 753);
			this->tabPage12->TabIndex = 3;
			this->tabPage12->Text = L"Recherche";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(567, 41);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Client";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel5->Controls->Add(this->tabControl4, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(573, 832);
			this->tableLayoutPanel5->TabIndex = 4;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage13);
			this->tabControl4->Controls->Add(this->tabPage14);
			this->tabControl4->Controls->Add(this->tabPage15);
			this->tabControl4->Controls->Add(this->tabPage16);
			this->tabControl4->Location = System::Drawing::Point(3, 44);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(567, 785);
			this->tabControl4->TabIndex = 1;
			// 
			// tabPage13
			// 
			this->tabPage13->Location = System::Drawing::Point(4, 34);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(559, 747);
			this->tabPage13->TabIndex = 0;
			this->tabPage13->Text = L"Ajout";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// tabPage14
			// 
			this->tabPage14->Location = System::Drawing::Point(4, 34);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(565, 753);
			this->tabPage14->TabIndex = 1;
			this->tabPage14->Text = L"Modification";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabPage15
			// 
			this->tabPage15->Location = System::Drawing::Point(4, 34);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(565, 753);
			this->tabPage15->TabIndex = 2;
			this->tabPage15->Text = L"Supprimer";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// tabPage16
			// 
			this->tabPage16->Location = System::Drawing::Point(4, 34);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(565, 753);
			this->tabPage16->TabIndex = 3;
			this->tabPage16->Text = L"Recherche";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(567, 41);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Personnel";
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->tabControl5, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(579, 838);
			this->tableLayoutPanel6->TabIndex = 4;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage17);
			this->tabControl5->Controls->Add(this->tabPage18);
			this->tabControl5->Controls->Add(this->tabPage19);
			this->tabControl5->Controls->Add(this->tabPage20);
			this->tabControl5->Location = System::Drawing::Point(3, 44);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(573, 791);
			this->tabControl5->TabIndex = 1;
			// 
			// tabPage17
			// 
			this->tabPage17->Location = System::Drawing::Point(4, 34);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Padding = System::Windows::Forms::Padding(3);
			this->tabPage17->Size = System::Drawing::Size(565, 753);
			this->tabPage17->TabIndex = 0;
			this->tabPage17->Text = L"Ajout";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// tabPage18
			// 
			this->tabPage18->Location = System::Drawing::Point(4, 34);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(565, 753);
			this->tabPage18->TabIndex = 1;
			this->tabPage18->Text = L"Modification";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// tabPage19
			// 
			this->tabPage19->Location = System::Drawing::Point(4, 34);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(565, 753);
			this->tabPage19->TabIndex = 2;
			this->tabPage19->Text = L"Supprimer";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// tabPage20
			// 
			this->tabPage20->Location = System::Drawing::Point(4, 34);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Padding = System::Windows::Forms::Padding(3);
			this->tabPage20->Size = System::Drawing::Size(565, 753);
			this->tabPage20->TabIndex = 3;
			this->tabPage20->Text = L"Recherche";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(573, 41);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Commande";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(202)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1178, 944);
			this->Controls->Add(this->tableInterface);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1200, 1000);
			this->Name = L"MyForm";
			this->Text = L"DataBase Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->tableInterface->ResumeLayout(false);
			this->tableFonction->ResumeLayout(false);
			this->Buttons->ResumeLayout(false);
			this->TabMod->ResumeLayout(false);
			this->tabClient->ResumeLayout(false);
			this->tabEmployé->ResumeLayout(false);
			this->tabCommande->ResumeLayout(false);
			this->tabStocks->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabStats->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tabControl4->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tabControl5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->TabMod->SizeMode = TabSizeMode::Fixed;
		this->TabMod->ItemSize = System::Drawing::Size(0, 1);
		this->TabMod->Appearance = TabAppearance::Buttons;
	}
	//Changement de tab grace au boutons
	private: System::Void ClientB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TabMod->SelectedTab = tabClient;
	}
	private: System::Void EmplyéB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TabMod->SelectedTab = tabEmployé;
	}
	private: System::Void CommandeB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TabMod->SelectedTab = tabCommande;
	}
	private: System::Void StockB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TabMod->SelectedTab = tabStocks;
	}
	private: System::Void StatsB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TabMod->SelectedTab = tabStats;
	}
};
}
