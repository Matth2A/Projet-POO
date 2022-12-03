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
	private: System::Windows::Forms::Label^ MarqueLabel;

	private: System::Windows::Forms::TableLayoutPanel^ Buttons;

	private: System::Windows::Forms::Button^ ClientB;
	private: System::Windows::Forms::Button^ EmplyéB;
	private: System::Windows::Forms::Button^ CommandeB;
	private: System::Windows::Forms::Button^ StockB;
	private: System::Windows::Forms::Button^ StatsB;
	private: System::Windows::Forms::TabControl^ StatControl;
	private: System::Windows::Forms::TabPage^ ModifStat;
	private: System::Windows::Forms::TabPage^ SupprStat;
	private: System::Windows::Forms::TabPage^ RechercheStat;





















	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ StatLabel;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TabControl^ StockControl;

	private: System::Windows::Forms::TabPage^ AjoutStock;

	private: System::Windows::Forms::TabPage^ ModifStock;


	private: System::Windows::Forms::TabPage^ StockSuppr;

	private: System::Windows::Forms::TabPage^ RechercheStock;

	private: System::Windows::Forms::Label^ labelStocks;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TabControl^ ClientControl;

	private: System::Windows::Forms::TabPage^ ClientAjout;
	private: System::Windows::Forms::TabPage^ ModifClient;
	private: System::Windows::Forms::TabPage^ SupprClient;
	private: System::Windows::Forms::TabPage^ RechercheClient;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::TabControl^ PersonnelControl;
private: System::Windows::Forms::TabPage^ AjoutPersonnel;
private: System::Windows::Forms::TabPage^ ModifPersonnel;
private: System::Windows::Forms::TabPage^ SupprPersonnel;
private: System::Windows::Forms::TabPage^ RecherchePersonnel;






	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::TabControl^ CommandControl;
private: System::Windows::Forms::TabPage^ AjoutCommande;
private: System::Windows::Forms::TabPage^ ModifControl;
private: System::Windows::Forms::TabPage^ SupprControle;
private: System::Windows::Forms::TabPage^ RechercheControl;






	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TabPage^ StatCiffAffa;
private: System::Windows::Forms::TableLayoutPanel^ AJoutClientTab;

private: System::Windows::Forms::TextBox^ txtClientAjoutPrénom;
private: System::Windows::Forms::TextBox^ txtClientAjoutBirthDate;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ txtClientAjoutNom;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;


























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
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ClientControl = (gcnew System::Windows::Forms::TabControl());
			this->ClientAjout = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->AJoutClientTab = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txtClientAjoutPrénom = (gcnew System::Windows::Forms::TextBox());
			this->txtClientAjoutBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtClientAjoutNom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ModifClient = (gcnew System::Windows::Forms::TabPage());
			this->SupprClient = (gcnew System::Windows::Forms::TabPage());
			this->RechercheClient = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->PersonnelControl = (gcnew System::Windows::Forms::TabControl());
			this->AjoutPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->ModifPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->SupprPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->RecherchePersonnel = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabCommande = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CommandControl = (gcnew System::Windows::Forms::TabControl());
			this->AjoutCommande = (gcnew System::Windows::Forms::TabPage());
			this->ModifControl = (gcnew System::Windows::Forms::TabPage());
			this->SupprControle = (gcnew System::Windows::Forms::TabPage());
			this->RechercheControl = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->StockControl = (gcnew System::Windows::Forms::TabControl());
			this->AjoutStock = (gcnew System::Windows::Forms::TabPage());
			this->ModifStock = (gcnew System::Windows::Forms::TabPage());
			this->StockSuppr = (gcnew System::Windows::Forms::TabPage());
			this->RechercheStock = (gcnew System::Windows::Forms::TabPage());
			this->labelStocks = (gcnew System::Windows::Forms::Label());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->StatControl = (gcnew System::Windows::Forms::TabControl());
			this->StatCiffAffa = (gcnew System::Windows::Forms::TabPage());
			this->ModifStat = (gcnew System::Windows::Forms::TabPage());
			this->SupprStat = (gcnew System::Windows::Forms::TabPage());
			this->RechercheStat = (gcnew System::Windows::Forms::TabPage());
			this->StatLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MarqueLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->tableInterface->SuspendLayout();
			this->tableFonction->SuspendLayout();
			this->Buttons->SuspendLayout();
			this->TabMod->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->ClientControl->SuspendLayout();
			this->ClientAjout->SuspendLayout();
			this->AJoutClientTab->SuspendLayout();
			this->tabEmployé->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->PersonnelControl->SuspendLayout();
			this->tabCommande->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->CommandControl->SuspendLayout();
			this->tabStocks->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->StockControl->SuspendLayout();
			this->tabStats->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->StatControl->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->ClientControl, 0, 1);
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
			// ClientControl
			// 
			this->ClientControl->Controls->Add(this->ClientAjout);
			this->ClientControl->Controls->Add(this->ModifClient);
			this->ClientControl->Controls->Add(this->SupprClient);
			this->ClientControl->Controls->Add(this->RechercheClient);
			this->ClientControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientControl->Location = System::Drawing::Point(3, 44);
			this->ClientControl->Name = L"ClientControl";
			this->ClientControl->SelectedIndex = 0;
			this->ClientControl->Size = System::Drawing::Size(567, 785);
			this->ClientControl->TabIndex = 1;
			// 
			// ClientAjout
			// 
			this->ClientAjout->Controls->Add(this->tableLayoutPanel7);
			this->ClientAjout->Controls->Add(this->AJoutClientTab);
			this->ClientAjout->Controls->Add(this->button1);
			this->ClientAjout->Location = System::Drawing::Point(4, 34);
			this->ClientAjout->Name = L"ClientAjout";
			this->ClientAjout->Padding = System::Windows::Forms::Padding(3);
			this->ClientAjout->Size = System::Drawing::Size(559, 747);
			this->ClientAjout->TabIndex = 0;
			this->ClientAjout->Text = L"Ajout";
			this->ClientAjout->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Location = System::Drawing::Point(74, 370);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(200, 100);
			this->tableLayoutPanel7->TabIndex = 4;
			// 
			// AJoutClientTab
			// 
			this->AJoutClientTab->ColumnCount = 3;
			this->AJoutClientTab->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->AJoutClientTab->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->AJoutClientTab->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->AJoutClientTab->Controls->Add(this->txtClientAjoutPrénom, 1, 1);
			this->AJoutClientTab->Controls->Add(this->txtClientAjoutBirthDate, 0, 1);
			this->AJoutClientTab->Controls->Add(this->label6, 1, 0);
			this->AJoutClientTab->Controls->Add(this->label5, 0, 0);
			this->AJoutClientTab->Controls->Add(this->txtClientAjoutNom, 2, 1);
			this->AJoutClientTab->Controls->Add(this->label1, 2, 0);
			this->AJoutClientTab->Location = System::Drawing::Point(0, 173);
			this->AJoutClientTab->Name = L"AJoutClientTab";
			this->AJoutClientTab->RowCount = 2;
			this->AJoutClientTab->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->AJoutClientTab->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->AJoutClientTab->Size = System::Drawing::Size(559, 100);
			this->AJoutClientTab->TabIndex = 3;
			// 
			// txtClientAjoutPrénom
			// 
			this->txtClientAjoutPrénom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtClientAjoutPrénom->Location = System::Drawing::Point(190, 53);
			this->txtClientAjoutPrénom->Name = L"txtClientAjoutPrénom";
			this->txtClientAjoutPrénom->Size = System::Drawing::Size(180, 33);
			this->txtClientAjoutPrénom->TabIndex = 6;
			// 
			// txtClientAjoutBirthDate
			// 
			this->txtClientAjoutBirthDate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtClientAjoutBirthDate->Location = System::Drawing::Point(376, 53);
			this->txtClientAjoutBirthDate->Name = L"txtClientAjoutBirthDate";
			this->txtClientAjoutBirthDate->Size = System::Drawing::Size(180, 33);
			this->txtClientAjoutBirthDate->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(190, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 50);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Prénom";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AllowDrop = true;
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(376, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 50);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Date de Naissance";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtClientAjoutNom
			// 
			this->txtClientAjoutNom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtClientAjoutNom->Location = System::Drawing::Point(3, 53);
			this->txtClientAjoutNom->Name = L"txtClientAjoutNom";
			this->txtClientAjoutNom->Size = System::Drawing::Size(181, 33);
			this->txtClientAjoutNom->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(372, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// ModifClient
			// 
			this->ModifClient->Location = System::Drawing::Point(4, 34);
			this->ModifClient->Name = L"ModifClient";
			this->ModifClient->Padding = System::Windows::Forms::Padding(3);
			this->ModifClient->Size = System::Drawing::Size(559, 747);
			this->ModifClient->TabIndex = 1;
			this->ModifClient->Text = L"Modifier";
			this->ModifClient->UseVisualStyleBackColor = true;
			// 
			// SupprClient
			// 
			this->SupprClient->Location = System::Drawing::Point(4, 34);
			this->SupprClient->Name = L"SupprClient";
			this->SupprClient->Padding = System::Windows::Forms::Padding(3);
			this->SupprClient->Size = System::Drawing::Size(559, 747);
			this->SupprClient->TabIndex = 2;
			this->SupprClient->Text = L"Supprimer";
			this->SupprClient->UseVisualStyleBackColor = true;
			// 
			// RechercheClient
			// 
			this->RechercheClient->Location = System::Drawing::Point(4, 34);
			this->RechercheClient->Name = L"RechercheClient";
			this->RechercheClient->Padding = System::Windows::Forms::Padding(3);
			this->RechercheClient->Size = System::Drawing::Size(559, 747);
			this->RechercheClient->TabIndex = 3;
			this->RechercheClient->Text = L"Recherche";
			this->RechercheClient->UseVisualStyleBackColor = true;
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
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel5->Controls->Add(this->PersonnelControl, 0, 1);
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
			// PersonnelControl
			// 
			this->PersonnelControl->Controls->Add(this->AjoutPersonnel);
			this->PersonnelControl->Controls->Add(this->ModifPersonnel);
			this->PersonnelControl->Controls->Add(this->SupprPersonnel);
			this->PersonnelControl->Controls->Add(this->RecherchePersonnel);
			this->PersonnelControl->Location = System::Drawing::Point(3, 44);
			this->PersonnelControl->Name = L"PersonnelControl";
			this->PersonnelControl->SelectedIndex = 0;
			this->PersonnelControl->Size = System::Drawing::Size(567, 785);
			this->PersonnelControl->TabIndex = 1;
			// 
			// AjoutPersonnel
			// 
			this->AjoutPersonnel->Location = System::Drawing::Point(4, 34);
			this->AjoutPersonnel->Name = L"AjoutPersonnel";
			this->AjoutPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->AjoutPersonnel->Size = System::Drawing::Size(559, 747);
			this->AjoutPersonnel->TabIndex = 0;
			this->AjoutPersonnel->Text = L"Ajout";
			this->AjoutPersonnel->UseVisualStyleBackColor = true;
			// 
			// ModifPersonnel
			// 
			this->ModifPersonnel->Location = System::Drawing::Point(4, 34);
			this->ModifPersonnel->Name = L"ModifPersonnel";
			this->ModifPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->ModifPersonnel->Size = System::Drawing::Size(559, 747);
			this->ModifPersonnel->TabIndex = 1;
			this->ModifPersonnel->Text = L"Modification";
			this->ModifPersonnel->UseVisualStyleBackColor = true;
			// 
			// SupprPersonnel
			// 
			this->SupprPersonnel->Location = System::Drawing::Point(4, 34);
			this->SupprPersonnel->Name = L"SupprPersonnel";
			this->SupprPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->SupprPersonnel->Size = System::Drawing::Size(559, 747);
			this->SupprPersonnel->TabIndex = 2;
			this->SupprPersonnel->Text = L"Supprimer";
			this->SupprPersonnel->UseVisualStyleBackColor = true;
			// 
			// RecherchePersonnel
			// 
			this->RecherchePersonnel->Location = System::Drawing::Point(4, 34);
			this->RecherchePersonnel->Name = L"RecherchePersonnel";
			this->RecherchePersonnel->Padding = System::Windows::Forms::Padding(3);
			this->RecherchePersonnel->Size = System::Drawing::Size(559, 747);
			this->RecherchePersonnel->TabIndex = 3;
			this->RecherchePersonnel->Text = L"Recherche";
			this->RecherchePersonnel->UseVisualStyleBackColor = true;
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
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->CommandControl, 0, 1);
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
			// CommandControl
			// 
			this->CommandControl->Controls->Add(this->AjoutCommande);
			this->CommandControl->Controls->Add(this->ModifControl);
			this->CommandControl->Controls->Add(this->SupprControle);
			this->CommandControl->Controls->Add(this->RechercheControl);
			this->CommandControl->Location = System::Drawing::Point(3, 44);
			this->CommandControl->Name = L"CommandControl";
			this->CommandControl->SelectedIndex = 0;
			this->CommandControl->Size = System::Drawing::Size(573, 791);
			this->CommandControl->TabIndex = 1;
			// 
			// AjoutCommande
			// 
			this->AjoutCommande->Location = System::Drawing::Point(4, 34);
			this->AjoutCommande->Name = L"AjoutCommande";
			this->AjoutCommande->Padding = System::Windows::Forms::Padding(3);
			this->AjoutCommande->Size = System::Drawing::Size(565, 753);
			this->AjoutCommande->TabIndex = 0;
			this->AjoutCommande->Text = L"Ajout";
			this->AjoutCommande->UseVisualStyleBackColor = true;
			// 
			// ModifControl
			// 
			this->ModifControl->Location = System::Drawing::Point(4, 34);
			this->ModifControl->Name = L"ModifControl";
			this->ModifControl->Padding = System::Windows::Forms::Padding(3);
			this->ModifControl->Size = System::Drawing::Size(565, 753);
			this->ModifControl->TabIndex = 1;
			this->ModifControl->Text = L"Modification";
			this->ModifControl->UseVisualStyleBackColor = true;
			// 
			// SupprControle
			// 
			this->SupprControle->Location = System::Drawing::Point(4, 34);
			this->SupprControle->Name = L"SupprControle";
			this->SupprControle->Padding = System::Windows::Forms::Padding(3);
			this->SupprControle->Size = System::Drawing::Size(565, 753);
			this->SupprControle->TabIndex = 2;
			this->SupprControle->Text = L"Supprimer";
			this->SupprControle->UseVisualStyleBackColor = true;
			// 
			// RechercheControl
			// 
			this->RechercheControl->Location = System::Drawing::Point(4, 34);
			this->RechercheControl->Name = L"RechercheControl";
			this->RechercheControl->Padding = System::Windows::Forms::Padding(3);
			this->RechercheControl->Size = System::Drawing::Size(565, 753);
			this->RechercheControl->TabIndex = 3;
			this->RechercheControl->Text = L"Recherche";
			this->RechercheControl->UseVisualStyleBackColor = true;
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
			this->tableLayoutPanel3->Controls->Add(this->StockControl, 0, 1);
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
			// StockControl
			// 
			this->StockControl->Controls->Add(this->AjoutStock);
			this->StockControl->Controls->Add(this->ModifStock);
			this->StockControl->Controls->Add(this->StockSuppr);
			this->StockControl->Controls->Add(this->RechercheStock);
			this->StockControl->Location = System::Drawing::Point(3, 44);
			this->StockControl->Name = L"StockControl";
			this->StockControl->SelectedIndex = 0;
			this->StockControl->Size = System::Drawing::Size(573, 791);
			this->StockControl->TabIndex = 1;
			// 
			// AjoutStock
			// 
			this->AjoutStock->Location = System::Drawing::Point(4, 34);
			this->AjoutStock->Name = L"AjoutStock";
			this->AjoutStock->Padding = System::Windows::Forms::Padding(3);
			this->AjoutStock->Size = System::Drawing::Size(565, 753);
			this->AjoutStock->TabIndex = 0;
			this->AjoutStock->Text = L"Ajout";
			this->AjoutStock->UseVisualStyleBackColor = true;
			// 
			// ModifStock
			// 
			this->ModifStock->Location = System::Drawing::Point(4, 34);
			this->ModifStock->Name = L"ModifStock";
			this->ModifStock->Padding = System::Windows::Forms::Padding(3);
			this->ModifStock->Size = System::Drawing::Size(565, 753);
			this->ModifStock->TabIndex = 1;
			this->ModifStock->Text = L"Modification";
			this->ModifStock->UseVisualStyleBackColor = true;
			// 
			// StockSuppr
			// 
			this->StockSuppr->Location = System::Drawing::Point(4, 34);
			this->StockSuppr->Name = L"StockSuppr";
			this->StockSuppr->Padding = System::Windows::Forms::Padding(3);
			this->StockSuppr->Size = System::Drawing::Size(565, 753);
			this->StockSuppr->TabIndex = 2;
			this->StockSuppr->Text = L"Supprimer";
			this->StockSuppr->UseVisualStyleBackColor = true;
			// 
			// RechercheStock
			// 
			this->RechercheStock->Location = System::Drawing::Point(4, 34);
			this->RechercheStock->Name = L"RechercheStock";
			this->RechercheStock->Padding = System::Windows::Forms::Padding(3);
			this->RechercheStock->Size = System::Drawing::Size(565, 753);
			this->RechercheStock->TabIndex = 3;
			this->RechercheStock->Text = L"Recherche";
			this->RechercheStock->UseVisualStyleBackColor = true;
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
			this->tableLayoutPanel2->Controls->Add(this->StatControl, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->StatLabel, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(579, 838);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// StatControl
			// 
			this->StatControl->Controls->Add(this->StatCiffAffa);
			this->StatControl->Controls->Add(this->ModifStat);
			this->StatControl->Controls->Add(this->SupprStat);
			this->StatControl->Controls->Add(this->RechercheStat);
			this->StatControl->Font = (gcnew System::Drawing::Font(L"Cooper Black", 11));
			this->StatControl->Location = System::Drawing::Point(3, 44);
			this->StatControl->Name = L"StatControl";
			this->StatControl->SelectedIndex = 0;
			this->StatControl->Size = System::Drawing::Size(573, 791);
			this->StatControl->TabIndex = 1;
			// 
			// StatCiffAffa
			// 
			this->StatCiffAffa->Location = System::Drawing::Point(4, 34);
			this->StatCiffAffa->Name = L"StatCiffAffa";
			this->StatCiffAffa->Padding = System::Windows::Forms::Padding(3);
			this->StatCiffAffa->Size = System::Drawing::Size(565, 753);
			this->StatCiffAffa->TabIndex = 0;
			this->StatCiffAffa->Text = L"Chiffre d\'affaire";
			this->StatCiffAffa->UseVisualStyleBackColor = true;
			// 
			// ModifStat
			// 
			this->ModifStat->Location = System::Drawing::Point(4, 34);
			this->ModifStat->Name = L"ModifStat";
			this->ModifStat->Padding = System::Windows::Forms::Padding(3);
			this->ModifStat->Size = System::Drawing::Size(565, 753);
			this->ModifStat->TabIndex = 1;
			this->ModifStat->Text = L"Modification";
			this->ModifStat->UseVisualStyleBackColor = true;
			// 
			// SupprStat
			// 
			this->SupprStat->Location = System::Drawing::Point(4, 34);
			this->SupprStat->Name = L"SupprStat";
			this->SupprStat->Padding = System::Windows::Forms::Padding(3);
			this->SupprStat->Size = System::Drawing::Size(565, 753);
			this->SupprStat->TabIndex = 2;
			this->SupprStat->Text = L"Suppr";
			this->SupprStat->UseVisualStyleBackColor = true;
			// 
			// RechercheStat
			// 
			this->RechercheStat->Location = System::Drawing::Point(4, 34);
			this->RechercheStat->Name = L"RechercheStat";
			this->RechercheStat->Padding = System::Windows::Forms::Padding(3);
			this->RechercheStat->Size = System::Drawing::Size(565, 753);
			this->RechercheStat->TabIndex = 3;
			this->RechercheStat->Text = L"Recherche";
			this->RechercheStat->UseVisualStyleBackColor = true;
			// 
			// StatLabel
			// 
			this->StatLabel->AutoSize = true;
			this->StatLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StatLabel->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StatLabel->Location = System::Drawing::Point(3, 0);
			this->StatLabel->Name = L"StatLabel";
			this->StatLabel->Size = System::Drawing::Size(573, 41);
			this->StatLabel->TabIndex = 2;
			this->StatLabel->Text = L"Statistiques";
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
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ClientControl->ResumeLayout(false);
			this->ClientAjout->ResumeLayout(false);
			this->AJoutClientTab->ResumeLayout(false);
			this->AJoutClientTab->PerformLayout();
			this->tabEmployé->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->PersonnelControl->ResumeLayout(false);
			this->tabCommande->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->CommandControl->ResumeLayout(false);
			this->tabStocks->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->StockControl->ResumeLayout(false);
			this->tabStats->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->StatControl->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
};
}