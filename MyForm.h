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









	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ MarqueLabel;

	private: System::Windows::Forms::TableLayoutPanel^ Buttons;

	private: System::Windows::Forms::Button^ ClientB;
	private: System::Windows::Forms::Button^ EmplyéB;
	private: System::Windows::Forms::Button^ CommandeB;
	private: System::Windows::Forms::Button^ StockB;
	private: System::Windows::Forms::Button^ StatsB;

























	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ StockLabel;
	private: System::Windows::Forms::TableLayoutPanel^ TableCommand;
















	private: System::Windows::Forms::Label^ labelStocks;



























	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;











	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::Button^ CommandAjoutB;
private: System::Windows::Forms::Button^ CommandSupprB;
private: System::Windows::Forms::Button^ CommandRechercheB;



private: System::Windows::Forms::Button^ CommandModB;


private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
private: System::Windows::Forms::TabPage^ tabStats;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TableLayoutPanel^ TableStock;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::Button^ ClientRecherche;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::Button^ Clientsuppr;
private: System::Windows::Forms::Button^ ClientModif;
private: System::Windows::Forms::Button^ ClientAjout;




















































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
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabCommande = (gcnew System::Windows::Forms::TabPage());
			this->TableCommand = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelStocks = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CommandRechercheB = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CommandSupprB = (gcnew System::Windows::Forms::Button());
			this->CommandModB = (gcnew System::Windows::Forms::Button());
			this->CommandAjoutB = (gcnew System::Windows::Forms::Button());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->StockLabel = (gcnew System::Windows::Forms::Label());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MarqueLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TableStock = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ClientRecherche = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Clientsuppr = (gcnew System::Windows::Forms::Button());
			this->ClientModif = (gcnew System::Windows::Forms::Button());
			this->ClientAjout = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->tableInterface->SuspendLayout();
			this->tableFonction->SuspendLayout();
			this->Buttons->SuspendLayout();
			this->TabMod->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->tabEmployé->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tabCommande->SuspendLayout();
			this->TableCommand->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tabStocks->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabStats->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			this->TableStock->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
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
			this->TabMod->TabIndex = 5;
			// 
			// tabClient
			// 
			this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabClient->Controls->Add(this->TableStock);
			this->tabClient->Location = System::Drawing::Point(4, 5);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(579, 838);
			this->tabClient->TabIndex = 1;
			this->tabClient->Text = L"Personnel";
			// 
			// tabEmployé
			// 
			this->tabEmployé->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabEmployé->Controls->Add(this->tableLayoutPanel6);
			this->tabEmployé->ForeColor = System::Drawing::Color::Black;
			this->tabEmployé->Location = System::Drawing::Point(4, 5);
			this->tabEmployé->Name = L"tabEmployé";
			this->tabEmployé->Size = System::Drawing::Size(579, 838);
			this->tabEmployé->TabIndex = 2;
			this->tabEmployé->Text = L"Commande";
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
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
			this->label4->Text = L"Employés";
			// 
			// tabCommande
			// 
			this->tabCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabCommande->Controls->Add(this->TableCommand);
			this->tabCommande->Location = System::Drawing::Point(4, 5);
			this->tabCommande->Name = L"tabCommande";
			this->tabCommande->Size = System::Drawing::Size(579, 838);
			this->tabCommande->TabIndex = 3;
			this->tabCommande->Text = L"Stocks";
			// 
			// TableCommand
			// 
			this->TableCommand->ColumnCount = 1;
			this->TableCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->TableCommand->Controls->Add(this->labelStocks, 0, 0);
			this->TableCommand->Controls->Add(this->tableLayoutPanel8, 0, 3);
			this->TableCommand->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TableCommand->Location = System::Drawing::Point(0, 0);
			this->TableCommand->Margin = System::Windows::Forms::Padding(0);
			this->TableCommand->Name = L"TableCommand";
			this->TableCommand->RowCount = 4;
			this->TableCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->TableCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->TableCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->TableCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableCommand->Size = System::Drawing::Size(579, 838);
			this->TableCommand->TabIndex = 3;
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
			this->labelStocks->Text = L"Commandes";
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->Controls->Add(this->CommandRechercheB, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->tableLayoutPanel7, 1, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 672);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 163)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(573, 163);
			this->tableLayoutPanel8->TabIndex = 4;
			// 
			// CommandRechercheB
			// 
			this->CommandRechercheB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->CommandRechercheB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CommandRechercheB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CommandRechercheB->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CommandRechercheB->Location = System::Drawing::Point(0, 0);
			this->CommandRechercheB->Margin = System::Windows::Forms::Padding(0);
			this->CommandRechercheB->Name = L"CommandRechercheB";
			this->CommandRechercheB->Size = System::Drawing::Size(286, 163);
			this->CommandRechercheB->TabIndex = 2;
			this->CommandRechercheB->Text = L"Rechercher";
			this->CommandRechercheB->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel7->Controls->Add(this->CommandSupprB, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->CommandModB, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->CommandAjoutB, 0, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(286, 0);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 3;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(287, 163);
			this->tableLayoutPanel7->TabIndex = 3;
			// 
			// CommandSupprB
			// 
			this->CommandSupprB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->CommandSupprB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CommandSupprB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CommandSupprB->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CommandSupprB->Location = System::Drawing::Point(0, 108);
			this->CommandSupprB->Margin = System::Windows::Forms::Padding(0);
			this->CommandSupprB->Name = L"CommandSupprB";
			this->CommandSupprB->Size = System::Drawing::Size(287, 55);
			this->CommandSupprB->TabIndex = 3;
			this->CommandSupprB->Text = L"Supprimer";
			this->CommandSupprB->UseVisualStyleBackColor = false;
			// 
			// CommandModB
			// 
			this->CommandModB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->CommandModB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CommandModB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CommandModB->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CommandModB->Location = System::Drawing::Point(0, 54);
			this->CommandModB->Margin = System::Windows::Forms::Padding(0);
			this->CommandModB->Name = L"CommandModB";
			this->CommandModB->Size = System::Drawing::Size(287, 54);
			this->CommandModB->TabIndex = 1;
			this->CommandModB->Text = L"Modifier";
			this->CommandModB->UseVisualStyleBackColor = false;
			this->CommandModB->Click += gcnew System::EventHandler(this, &MyForm::StockModB_Click);
			// 
			// CommandAjoutB
			// 
			this->CommandAjoutB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->CommandAjoutB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CommandAjoutB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CommandAjoutB->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CommandAjoutB->Location = System::Drawing::Point(0, 0);
			this->CommandAjoutB->Margin = System::Windows::Forms::Padding(0);
			this->CommandAjoutB->Name = L"CommandAjoutB";
			this->CommandAjoutB->Size = System::Drawing::Size(287, 54);
			this->CommandAjoutB->TabIndex = 0;
			this->CommandAjoutB->Text = L"Ajouter";
			this->CommandAjoutB->UseVisualStyleBackColor = false;
			// 
			// tabStocks
			// 
			this->tabStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabStocks->Controls->Add(this->tableLayoutPanel2);
			this->tabStocks->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabStocks->Location = System::Drawing::Point(4, 5);
			this->tabStocks->Name = L"tabStocks";
			this->tabStocks->Size = System::Drawing::Size(579, 838);
			this->tabStocks->TabIndex = 4;
			this->tabStocks->Text = L"Stats";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->StockLabel, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(579, 838);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// StockLabel
			// 
			this->StockLabel->AutoSize = true;
			this->StockLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StockLabel->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StockLabel->Location = System::Drawing::Point(3, 0);
			this->StockLabel->Name = L"StockLabel";
			this->StockLabel->Size = System::Drawing::Size(573, 41);
			this->StockLabel->TabIndex = 2;
			this->StockLabel->Text = L"Stocks";
			// 
			// tabStats
			// 
			this->tabStats->Controls->Add(this->tableLayoutPanel3);
			this->tabStats->Location = System::Drawing::Point(4, 5);
			this->tabStats->Name = L"tabStats";
			this->tabStats->Size = System::Drawing::Size(579, 838);
			this->tabStats->TabIndex = 5;
			this->tabStats->Text = L"tabPage1";
			this->tabStats->UseVisualStyleBackColor = true;
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
			this->tableLayoutPanel1->Controls->Add(this->MarqueLabel, 1, 0);
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
			// MarqueLabel
			// 
			this->MarqueLabel->AutoSize = true;
			this->MarqueLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MarqueLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MarqueLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MarqueLabel->Location = System::Drawing::Point(178, 0);
			this->MarqueLabel->Name = L"MarqueLabel";
			this->MarqueLabel->Size = System::Drawing::Size(991, 89);
			this->MarqueLabel->TabIndex = 1;
			this->MarqueLabel->Text = L"Elèc-tonique.inc";
			this->MarqueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(579, 838);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(573, 41);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Statistiques";
			// 
			// TableStock
			// 
			this->TableStock->ColumnCount = 1;
			this->TableStock->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->TableStock->Controls->Add(this->label2, 0, 0);
			this->TableStock->Controls->Add(this->tableLayoutPanel4, 0, 3);
			this->TableStock->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TableStock->Location = System::Drawing::Point(3, 3);
			this->TableStock->Margin = System::Windows::Forms::Padding(0);
			this->TableStock->Name = L"TableStock";
			this->TableStock->RowCount = 4;
			this->TableStock->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->TableStock->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->TableStock->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->TableStock->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableStock->Size = System::Drawing::Size(573, 832);
			this->TableStock->TabIndex = 4;
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
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->ClientRecherche, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 1, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 667);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 163)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(567, 162);
			this->tableLayoutPanel4->TabIndex = 4;
			// 
			// ClientRecherche
			// 
			this->ClientRecherche->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->ClientRecherche->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientRecherche->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClientRecherche->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClientRecherche->Location = System::Drawing::Point(0, 0);
			this->ClientRecherche->Margin = System::Windows::Forms::Padding(0);
			this->ClientRecherche->Name = L"ClientRecherche";
			this->ClientRecherche->Size = System::Drawing::Size(283, 162);
			this->ClientRecherche->TabIndex = 2;
			this->ClientRecherche->Text = L"Rechercher";
			this->ClientRecherche->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel5->Controls->Add(this->Clientsuppr, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->ClientModif, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->ClientAjout, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(283, 0);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 3;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(284, 162);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// Clientsuppr
			// 
			this->Clientsuppr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->Clientsuppr->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Clientsuppr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clientsuppr->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clientsuppr->Location = System::Drawing::Point(0, 108);
			this->Clientsuppr->Margin = System::Windows::Forms::Padding(0);
			this->Clientsuppr->Name = L"Clientsuppr";
			this->Clientsuppr->Size = System::Drawing::Size(284, 54);
			this->Clientsuppr->TabIndex = 3;
			this->Clientsuppr->Text = L"Supprimer";
			this->Clientsuppr->UseVisualStyleBackColor = false;
			// 
			// ClientModif
			// 
			this->ClientModif->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->ClientModif->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClientModif->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClientModif->Location = System::Drawing::Point(0, 54);
			this->ClientModif->Margin = System::Windows::Forms::Padding(0);
			this->ClientModif->Name = L"ClientModif";
			this->ClientModif->Size = System::Drawing::Size(284, 54);
			this->ClientModif->TabIndex = 1;
			this->ClientModif->Text = L"Modifier";
			this->ClientModif->UseVisualStyleBackColor = false;
			// 
			// ClientAjout
			// 
			this->ClientAjout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->ClientAjout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientAjout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClientAjout->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClientAjout->Location = System::Drawing::Point(0, 0);
			this->ClientAjout->Margin = System::Windows::Forms::Padding(0);
			this->ClientAjout->Name = L"ClientAjout";
			this->ClientAjout->Size = System::Drawing::Size(284, 54);
			this->ClientAjout->TabIndex = 0;
			this->ClientAjout->Text = L"Ajouter";
			this->ClientAjout->UseVisualStyleBackColor = false;
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
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tabCommande->ResumeLayout(false);
			this->TableCommand->ResumeLayout(false);
			this->TableCommand->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tabStocks->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabStats->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->TableStock->ResumeLayout(false);
			this->TableStock->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	//Permet de faire disparaître les bouton tab des différents modes
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
private: System::Void StockModB_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}