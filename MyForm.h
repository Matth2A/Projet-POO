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
	private: System::Windows::Forms::TabControl^ tabCClient;

	private: System::Windows::Forms::TabPage^ tabCAjout;
	private: System::Windows::Forms::TabPage^ tabCModif;
	private: System::Windows::Forms::TabPage^ tabCSupprime;
	private: System::Windows::Forms::TabPage^ tabCRecherche;
	private: System::Windows::Forms::TabControl^ tabDeClient;
	private: System::Windows::Forms::TabPage^ tabPAjout;
	private: System::Windows::Forms::TabPage^ tabAModif;
	private: System::Windows::Forms::TabPage^ tabASupprimer;
	private: System::Windows::Forms::TabPage^ tabARecherche;
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
			this->tabCClient = (gcnew System::Windows::Forms::TabControl());
			this->tabCAjout = (gcnew System::Windows::Forms::TabPage());
			this->tabCModif = (gcnew System::Windows::Forms::TabPage());
			this->tabCSupprime = (gcnew System::Windows::Forms::TabPage());
			this->tabCRecherche = (gcnew System::Windows::Forms::TabPage());
			this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
			this->tabDeClient = (gcnew System::Windows::Forms::TabControl());
			this->tabPAjout = (gcnew System::Windows::Forms::TabPage());
			this->tabAModif = (gcnew System::Windows::Forms::TabPage());
			this->tabASupprimer = (gcnew System::Windows::Forms::TabPage());
			this->tabARecherche = (gcnew System::Windows::Forms::TabPage());
			this->tabCommande = (gcnew System::Windows::Forms::TabPage());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
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
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->labelStocks = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->tableInterface->SuspendLayout();
			this->tableFonction->SuspendLayout();
			this->Buttons->SuspendLayout();
			this->TabMod->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->tabCClient->SuspendLayout();
			this->tabEmployé->SuspendLayout();
			this->tabDeClient->SuspendLayout();
			this->tabStocks->SuspendLayout();
			this->tabStats->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			this->tabControl2->SuspendLayout();
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
			this->tabClient->Controls->Add(this->tabCClient);
			this->tabClient->Location = System::Drawing::Point(4, 5);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tabClient->Size = System::Drawing::Size(579, 838);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			// 
			// tabCClient
			// 
			this->tabCClient->Controls->Add(this->tabCAjout);
			this->tabCClient->Controls->Add(this->tabCModif);
			this->tabCClient->Controls->Add(this->tabCSupprime);
			this->tabCClient->Controls->Add(this->tabCRecherche);
			this->tabCClient->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabCClient->Location = System::Drawing::Point(3, 3);
			this->tabCClient->Name = L"tabCClient";
			this->tabCClient->SelectedIndex = 0;
			this->tabCClient->Size = System::Drawing::Size(573, 832);
			this->tabCClient->TabIndex = 0;
			// 
			// tabCAjout
			// 
			this->tabCAjout->Location = System::Drawing::Point(4, 34);
			this->tabCAjout->Name = L"tabCAjout";
			this->tabCAjout->Padding = System::Windows::Forms::Padding(3);
			this->tabCAjout->Size = System::Drawing::Size(565, 794);
			this->tabCAjout->TabIndex = 0;
			this->tabCAjout->Text = L"Ajout";
			this->tabCAjout->UseVisualStyleBackColor = true;
			// 
			// tabCModif
			// 
			this->tabCModif->Location = System::Drawing::Point(4, 34);
			this->tabCModif->Name = L"tabCModif";
			this->tabCModif->Padding = System::Windows::Forms::Padding(3);
			this->tabCModif->Size = System::Drawing::Size(565, 794);
			this->tabCModif->TabIndex = 1;
			this->tabCModif->Text = L"Modification";
			this->tabCModif->UseVisualStyleBackColor = true;
			// 
			// tabCSupprime
			// 
			this->tabCSupprime->Location = System::Drawing::Point(4, 34);
			this->tabCSupprime->Name = L"tabCSupprime";
			this->tabCSupprime->Padding = System::Windows::Forms::Padding(3);
			this->tabCSupprime->Size = System::Drawing::Size(565, 794);
			this->tabCSupprime->TabIndex = 2;
			this->tabCSupprime->Text = L"Supprimer";
			this->tabCSupprime->UseVisualStyleBackColor = true;
			// 
			// tabCRecherche
			// 
			this->tabCRecherche->Location = System::Drawing::Point(4, 34);
			this->tabCRecherche->Name = L"tabCRecherche";
			this->tabCRecherche->Padding = System::Windows::Forms::Padding(3);
			this->tabCRecherche->Size = System::Drawing::Size(565, 794);
			this->tabCRecherche->TabIndex = 3;
			this->tabCRecherche->Text = L"Recherche";
			this->tabCRecherche->UseVisualStyleBackColor = true;
			// 
			// tabEmployé
			// 
			this->tabEmployé->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->tabEmployé->Controls->Add(this->tabDeClient);
			this->tabEmployé->Location = System::Drawing::Point(4, 5);
			this->tabEmployé->Name = L"tabEmployé";
			this->tabEmployé->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployé->Size = System::Drawing::Size(579, 838);
			this->tabEmployé->TabIndex = 1;
			this->tabEmployé->Text = L"Personnel";
			// 
			// tabDeClient
			// 
			this->tabDeClient->Controls->Add(this->tabPAjout);
			this->tabDeClient->Controls->Add(this->tabAModif);
			this->tabDeClient->Controls->Add(this->tabASupprimer);
			this->tabDeClient->Controls->Add(this->tabARecherche);
			this->tabDeClient->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabDeClient->Location = System::Drawing::Point(3, 3);
			this->tabDeClient->Name = L"tabDeClient";
			this->tabDeClient->SelectedIndex = 0;
			this->tabDeClient->Size = System::Drawing::Size(573, 832);
			this->tabDeClient->TabIndex = 1;
			// 
			// tabPAjout
			// 
			this->tabPAjout->Location = System::Drawing::Point(4, 34);
			this->tabPAjout->Name = L"tabPAjout";
			this->tabPAjout->Padding = System::Windows::Forms::Padding(3);
			this->tabPAjout->Size = System::Drawing::Size(565, 794);
			this->tabPAjout->TabIndex = 0;
			this->tabPAjout->Text = L"Ajout";
			this->tabPAjout->UseVisualStyleBackColor = true;
			// 
			// tabAModif
			// 
			this->tabAModif->Location = System::Drawing::Point(4, 34);
			this->tabAModif->Name = L"tabAModif";
			this->tabAModif->Padding = System::Windows::Forms::Padding(3);
			this->tabAModif->Size = System::Drawing::Size(565, 794);
			this->tabAModif->TabIndex = 1;
			this->tabAModif->Text = L"Modification";
			this->tabAModif->UseVisualStyleBackColor = true;
			// 
			// tabASupprimer
			// 
			this->tabASupprimer->Location = System::Drawing::Point(4, 34);
			this->tabASupprimer->Name = L"tabASupprimer";
			this->tabASupprimer->Padding = System::Windows::Forms::Padding(3);
			this->tabASupprimer->Size = System::Drawing::Size(565, 794);
			this->tabASupprimer->TabIndex = 2;
			this->tabASupprimer->Text = L"Supprimer";
			this->tabASupprimer->UseVisualStyleBackColor = true;
			// 
			// tabARecherche
			// 
			this->tabARecherche->Location = System::Drawing::Point(4, 34);
			this->tabARecherche->Name = L"tabARecherche";
			this->tabARecherche->Padding = System::Windows::Forms::Padding(3);
			this->tabARecherche->Size = System::Drawing::Size(565, 794);
			this->tabARecherche->TabIndex = 3;
			this->tabARecherche->Text = L"Recherche";
			this->tabARecherche->UseVisualStyleBackColor = true;
			// 
			// tabCommande
			// 
			this->tabCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
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
			this->tabControl1->Location = System::Drawing::Point(3, 44);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(573, 791);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 35);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(565, 752);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ajout";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 35);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(565, 752);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modification";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 35);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(565, 752);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Supprimer";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 35);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(565, 752);
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
			this->tabCClient->ResumeLayout(false);
			this->tabEmployé->ResumeLayout(false);
			this->tabDeClient->ResumeLayout(false);
			this->tabStocks->ResumeLayout(false);
			this->tabStats->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tabControl2->ResumeLayout(false);
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
