#pragma once
#include "Client.h"
#include "Stock.h"
#include "Employee.h"
#include "Order.h"
#include "Stats.h"

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
    private: Client^ bClient;
    private:Employee^ bEmployé;
    private:Employee^ DB_Employee;
    private: Client^ DB_Client;





	private: System::Windows::Forms::TableLayoutPanel^ tableInterface;
	private: System::Windows::Forms::TableLayoutPanel^ tableFonction;

	private: System::Windows::Forms::TabControl^ TabMod;
	private: System::Windows::Forms::TabPage^ tabFirst;


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








































private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::Button^ CommandAjoutB;
private: System::Windows::Forms::Button^ CommandSupprB;
private: System::Windows::Forms::Button^ CommandRechercheB;



private: System::Windows::Forms::Button^ CommandModB;


private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
private: System::Windows::Forms::TabPage^ tabStats;









































private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel19;
private: System::Windows::Forms::Button^ EmployéRecherche;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel20;
private: System::Windows::Forms::Button^ EmployéSuppr;
private: System::Windows::Forms::Button^ EmployéModif;
private: System::Windows::Forms::Button^ EmployéAjout;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel21;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel22;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel23;
private: System::Windows::Forms::TextBox^ EmployéLastName;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel24;
private: System::Windows::Forms::TextBox^ EmployéFirstName;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel25;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel26;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel27;
private: System::Windows::Forms::TextBox^ EmployéAdresCity;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel28;
private: System::Windows::Forms::TextBox^ EmployéAdressStreet;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel29;
private: System::Windows::Forms::TextBox^ EmployéAdressNumber;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel30;
private: System::Windows::Forms::TextBox^ EmployéAdressInfo;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;




private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::Label^ label1;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel32;
private: System::Windows::Forms::TextBox^ EmployéId;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TabPage^ tabClient;
private: System::Windows::Forms::TableLayoutPanel^ TableClientFonc;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::Button^ ClientRecherche;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::Button^ Clientsuppr;
private: System::Windows::Forms::Button^ ClientModif;
private: System::Windows::Forms::Button^ ClientAjout;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel31;
private: System::Windows::Forms::TextBox^ ClientLastName;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
private: System::Windows::Forms::TextBox^ ClientFirstName;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ ClientId;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel18;



private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
private: System::Windows::Forms::TextBox^ ClientAdressStreet;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
private: System::Windows::Forms::TextBox^ ClientAdressNumber;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel17;
private: System::Windows::Forms::TextBox^ ClientAdressInfo;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ Firstlabel;

private: System::Windows::Forms::TableLayoutPanel^ FirtstTable;
private: System::Windows::Forms::Label^ LabelRight;
private: System::Windows::Forms::PictureBox^ FirstPicture;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel16;
private: System::Windows::Forms::Label^ Clientpostadress;
private: System::Windows::Forms::Label^ Clientville;
private: System::Windows::Forms::TextBox^ ClientCity;
private: System::Windows::Forms::TextBox^ ClientPost;
private: System::Windows::Forms::DateTimePicker^ ClientTime;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel33;
private: System::Windows::Forms::DataGridView^ ClientData;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel34;
private: System::Windows::Forms::DataGridView^ EmployeData;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel35;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DateTimePicker^ EmployeeBirth;































































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
            this->tableInterface = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableFonction = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Buttons = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ClientB = (gcnew System::Windows::Forms::Button());
            this->EmplyéB = (gcnew System::Windows::Forms::Button());
            this->CommandeB = (gcnew System::Windows::Forms::Button());
            this->StockB = (gcnew System::Windows::Forms::Button());
            this->StatsB = (gcnew System::Windows::Forms::Button());
            this->TabMod = (gcnew System::Windows::Forms::TabControl());
            this->tabFirst = (gcnew System::Windows::Forms::TabPage());
            this->FirtstTable = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->LabelRight = (gcnew System::Windows::Forms::Label());
            this->Firstlabel = (gcnew System::Windows::Forms::Label());
            this->FirstPicture = (gcnew System::Windows::Forms::PictureBox());
            this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel34 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel19 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéRecherche = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel20 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéSuppr = (gcnew System::Windows::Forms::Button());
            this->EmployéModif = (gcnew System::Windows::Forms::Button());
            this->EmployéAjout = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel21 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel32 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéId = (gcnew System::Windows::Forms::TextBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel22 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployeeBirth = (gcnew System::Windows::Forms::DateTimePicker());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel23 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéFirstName = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel24 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéLastName = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel25 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel26 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel27 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéAdresCity = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel28 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéAdressStreet = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel29 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéAdressNumber = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel30 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéAdressInfo = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->EmployeData = (gcnew System::Windows::Forms::DataGridView());
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
            this->tableLayoutPanel35 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->StockLabel = (gcnew System::Windows::Forms::Label());
            this->tabStats = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tabClient = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel33 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->TableClientFonc = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ClientRecherche = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Clientsuppr = (gcnew System::Windows::Forms::Button());
            this->ClientModif = (gcnew System::Windows::Forms::Button());
            this->ClientAjout = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel31 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ClientLastName = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->ClientTime = (gcnew System::Windows::Forms::DateTimePicker());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ClientFirstName = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->ClientId = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel18 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ClientAdressStreet = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ClientAdressNumber = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel16 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Clientpostadress = (gcnew System::Windows::Forms::Label());
            this->Clientville = (gcnew System::Windows::Forms::Label());
            this->ClientCity = (gcnew System::Windows::Forms::TextBox());
            this->ClientPost = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel17 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ClientAdressInfo = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->ClientData = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->MarqueLabel = (gcnew System::Windows::Forms::Label());
            this->tableInterface->SuspendLayout();
            this->tableFonction->SuspendLayout();
            this->Buttons->SuspendLayout();
            this->TabMod->SuspendLayout();
            this->tabFirst->SuspendLayout();
            this->FirtstTable->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPicture))->BeginInit();
            this->tabEmployé->SuspendLayout();
            this->tableLayoutPanel34->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel19->SuspendLayout();
            this->tableLayoutPanel20->SuspendLayout();
            this->tableLayoutPanel21->SuspendLayout();
            this->tableLayoutPanel32->SuspendLayout();
            this->tableLayoutPanel22->SuspendLayout();
            this->tableLayoutPanel23->SuspendLayout();
            this->tableLayoutPanel24->SuspendLayout();
            this->tableLayoutPanel25->SuspendLayout();
            this->tableLayoutPanel26->SuspendLayout();
            this->tableLayoutPanel27->SuspendLayout();
            this->tableLayoutPanel28->SuspendLayout();
            this->tableLayoutPanel29->SuspendLayout();
            this->tableLayoutPanel30->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EmployeData))->BeginInit();
            this->tabCommande->SuspendLayout();
            this->TableCommand->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tabStocks->SuspendLayout();
            this->tableLayoutPanel35->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tableLayoutPanel2->SuspendLayout();
            this->tabStats->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->tabClient->SuspendLayout();
            this->tableLayoutPanel33->SuspendLayout();
            this->TableClientFonc->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel10->SuspendLayout();
            this->tableLayoutPanel31->SuspendLayout();
            this->tableLayoutPanel12->SuspendLayout();
            this->tableLayoutPanel9->SuspendLayout();
            this->tableLayoutPanel11->SuspendLayout();
            this->tableLayoutPanel13->SuspendLayout();
            this->tableLayoutPanel18->SuspendLayout();
            this->tableLayoutPanel15->SuspendLayout();
            this->tableLayoutPanel14->SuspendLayout();
            this->tableLayoutPanel16->SuspendLayout();
            this->tableLayoutPanel17->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientData))->BeginInit();
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
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
            this->tableInterface->Size = System::Drawing::Size(1047, 762);
            this->tableInterface->TabIndex = 1;
            // 
            // tableFonction
            // 
            this->tableFonction->ColumnCount = 2;
            this->tableFonction->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableFonction->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                90)));
            this->tableFonction->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                18)));
            this->tableFonction->Controls->Add(this->Buttons, 0, 0);
            this->tableFonction->Controls->Add(this->TabMod, 1, 0);
            this->tableFonction->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableFonction->Location = System::Drawing::Point(0, 0);
            this->tableFonction->Margin = System::Windows::Forms::Padding(0);
            this->tableFonction->Name = L"tableFonction";
            this->tableFonction->RowCount = 1;
            this->tableFonction->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableFonction->Size = System::Drawing::Size(1047, 685);
            this->tableFonction->TabIndex = 2;
            // 
            // Buttons
            // 
            this->Buttons->ColumnCount = 1;
            this->Buttons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->Buttons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 18)));
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
            this->Buttons->Size = System::Drawing::Size(102, 683);
            this->Buttons->TabIndex = 2;
            // 
            // ClientB
            // 
            this->ClientB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ClientB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ClientB->Location = System::Drawing::Point(1, 1);
            this->ClientB->Margin = System::Windows::Forms::Padding(1);
            this->ClientB->Name = L"ClientB";
            this->ClientB->Size = System::Drawing::Size(100, 134);
            this->ClientB->TabIndex = 0;
            this->ClientB->Text = L"Client";
            this->ClientB->UseVisualStyleBackColor = true;
            this->ClientB->Click += gcnew System::EventHandler(this, &MyForm::ClientB_Click);
            // 
            // EmplyéB
            // 
            this->EmplyéB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmplyéB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->EmplyéB->Location = System::Drawing::Point(1, 137);
            this->EmplyéB->Margin = System::Windows::Forms::Padding(1);
            this->EmplyéB->Name = L"EmplyéB";
            this->EmplyéB->Size = System::Drawing::Size(100, 134);
            this->EmplyéB->TabIndex = 1;
            this->EmplyéB->Text = L"Personnel";
            this->EmplyéB->UseVisualStyleBackColor = true;
            this->EmplyéB->Click += gcnew System::EventHandler(this, &MyForm::EmplyéB_Click);
            // 
            // CommandeB
            // 
            this->CommandeB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->CommandeB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->CommandeB->Location = System::Drawing::Point(1, 273);
            this->CommandeB->Margin = System::Windows::Forms::Padding(1);
            this->CommandeB->Name = L"CommandeB";
            this->CommandeB->Size = System::Drawing::Size(100, 134);
            this->CommandeB->TabIndex = 2;
            this->CommandeB->Text = L"Commande";
            this->CommandeB->UseVisualStyleBackColor = true;
            this->CommandeB->Click += gcnew System::EventHandler(this, &MyForm::CommandeB_Click);
            // 
            // StockB
            // 
            this->StockB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StockB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StockB->Location = System::Drawing::Point(1, 409);
            this->StockB->Margin = System::Windows::Forms::Padding(1);
            this->StockB->Name = L"StockB";
            this->StockB->Size = System::Drawing::Size(100, 134);
            this->StockB->TabIndex = 3;
            this->StockB->Text = L"Stocks";
            this->StockB->UseVisualStyleBackColor = true;
            this->StockB->Click += gcnew System::EventHandler(this, &MyForm::StockB_Click);
            // 
            // StatsB
            // 
            this->StatsB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StatsB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StatsB->Location = System::Drawing::Point(1, 545);
            this->StatsB->Margin = System::Windows::Forms::Padding(1);
            this->StatsB->Name = L"StatsB";
            this->StatsB->Size = System::Drawing::Size(100, 137);
            this->StatsB->TabIndex = 4;
            this->StatsB->Text = L"Stats";
            this->StatsB->UseVisualStyleBackColor = true;
            this->StatsB->Click += gcnew System::EventHandler(this, &MyForm::StatsB_Click);
            // 
            // TabMod
            // 
            this->TabMod->Controls->Add(this->tabFirst);
            this->TabMod->Controls->Add(this->tabEmployé);
            this->TabMod->Controls->Add(this->tabCommande);
            this->TabMod->Controls->Add(this->tabStocks);
            this->TabMod->Controls->Add(this->tabStats);
            this->TabMod->Controls->Add(this->tabClient);
            this->TabMod->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TabMod->Font = (gcnew System::Drawing::Font(L"Cooper Black", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TabMod->ItemSize = System::Drawing::Size(20, 20);
            this->TabMod->Location = System::Drawing::Point(105, 1);
            this->TabMod->Margin = System::Windows::Forms::Padding(1);
            this->TabMod->Multiline = true;
            this->TabMod->Name = L"TabMod";
            this->TabMod->SelectedIndex = 0;
            this->TabMod->Size = System::Drawing::Size(941, 683);
            this->TabMod->TabIndex = 5;
            // 
            // tabFirst
            // 
            this->tabFirst->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabFirst->Controls->Add(this->FirtstTable);
            this->tabFirst->Location = System::Drawing::Point(4, 24);
            this->tabFirst->Margin = System::Windows::Forms::Padding(0);
            this->tabFirst->Name = L"tabFirst";
            this->tabFirst->Size = System::Drawing::Size(933, 655);
            this->tabFirst->TabIndex = 1;
            this->tabFirst->Text = L"Personnel";
            // 
            // FirtstTable
            // 
            this->FirtstTable->ColumnCount = 1;
            this->FirtstTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->FirtstTable->Controls->Add(this->LabelRight, 0, 2);
            this->FirtstTable->Controls->Add(this->Firstlabel, 0, 0);
            this->FirtstTable->Controls->Add(this->FirstPicture, 0, 1);
            this->FirtstTable->Dock = System::Windows::Forms::DockStyle::Fill;
            this->FirtstTable->Location = System::Drawing::Point(0, 0);
            this->FirtstTable->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->FirtstTable->Name = L"FirtstTable";
            this->FirtstTable->RowCount = 3;
            this->FirtstTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->FirtstTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->FirtstTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->FirtstTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
            this->FirtstTable->Size = System::Drawing::Size(933, 655);
            this->FirtstTable->TabIndex = 3;
            // 
            // LabelRight
            // 
            this->LabelRight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->LabelRight->AutoSize = true;
            this->LabelRight->Font = (gcnew System::Drawing::Font(L"Corbel", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->LabelRight->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->LabelRight->Location = System::Drawing::Point(766, 631);
            this->LabelRight->Name = L"LabelRight";
            this->LabelRight->Size = System::Drawing::Size(164, 24);
            this->LabelRight->TabIndex = 4;
            this->LabelRight->Text = L"All Right Reserved";
            // 
            // Firstlabel
            // 
            this->Firstlabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Firstlabel->Font = (gcnew System::Drawing::Font(L"Corbel", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Firstlabel->Location = System::Drawing::Point(3, 0);
            this->Firstlabel->Name = L"Firstlabel";
            this->Firstlabel->Size = System::Drawing::Size(927, 163);
            this->Firstlabel->TabIndex = 0;
            this->Firstlabel->Text = L"Logiciel de Gestion de l\'entreprise Elèct-tonic";
            this->Firstlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // FirstPicture
            // 
            this->FirstPicture->Dock = System::Windows::Forms::DockStyle::Fill;
            this->FirstPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FirstPicture.Image")));
            this->FirstPicture->Location = System::Drawing::Point(3, 165);
            this->FirstPicture->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->FirstPicture->Name = L"FirstPicture";
            this->FirstPicture->Size = System::Drawing::Size(927, 323);
            this->FirstPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->FirstPicture->TabIndex = 2;
            this->FirstPicture->TabStop = false;
            // 
            // tabEmployé
            // 
            this->tabEmployé->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabEmployé->Controls->Add(this->tableLayoutPanel34);
            this->tabEmployé->ForeColor = System::Drawing::Color::Black;
            this->tabEmployé->Location = System::Drawing::Point(4, 24);
            this->tabEmployé->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabEmployé->Name = L"tabEmployé";
            this->tabEmployé->Size = System::Drawing::Size(933, 655);
            this->tabEmployé->TabIndex = 2;
            this->tabEmployé->Text = L"Commande";
            // 
            // tableLayoutPanel34
            // 
            this->tableLayoutPanel34->ColumnCount = 2;
            this->tableLayoutPanel34->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel34->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel34->Controls->Add(this->tableLayoutPanel6, 0, 0);
            this->tableLayoutPanel34->Controls->Add(this->EmployeData, 1, 0);
            this->tableLayoutPanel34->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel34->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel34->Name = L"tableLayoutPanel34";
            this->tableLayoutPanel34->RowCount = 1;
            this->tableLayoutPanel34->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel34->Size = System::Drawing::Size(933, 655);
            this->tableLayoutPanel34->TabIndex = 6;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->ColumnCount = 1;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel6->Controls->Add(this->label4, 0, 0);
            this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel19, 0, 3);
            this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel21, 0, 1);
            this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel25, 0, 2);
            this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 4;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(466, 655);
            this->tableLayoutPanel6->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(3, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(460, 32);
            this->label4->TabIndex = 2;
            this->label4->Text = L"Personnel";
            // 
            // tableLayoutPanel19
            // 
            this->tableLayoutPanel19->ColumnCount = 2;
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel19->Controls->Add(this->EmployéRecherche, 0, 0);
            this->tableLayoutPanel19->Controls->Add(this->tableLayoutPanel20, 1, 0);
            this->tableLayoutPanel19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel19->Location = System::Drawing::Point(3, 525);
            this->tableLayoutPanel19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
            this->tableLayoutPanel19->RowCount = 1;
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                128)));
            this->tableLayoutPanel19->Size = System::Drawing::Size(460, 128);
            this->tableLayoutPanel19->TabIndex = 4;
            // 
            // EmployéRecherche
            // 
            this->EmployéRecherche->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->EmployéRecherche->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployéRecherche->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->EmployéRecherche->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployéRecherche->Location = System::Drawing::Point(0, 0);
            this->EmployéRecherche->Margin = System::Windows::Forms::Padding(0);
            this->EmployéRecherche->Name = L"EmployéRecherche";
            this->EmployéRecherche->Size = System::Drawing::Size(230, 128);
            this->EmployéRecherche->TabIndex = 2;
            this->EmployéRecherche->Text = L"Rechercher";
            this->EmployéRecherche->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanel20
            // 
            this->tableLayoutPanel20->ColumnCount = 1;
            this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel20->Controls->Add(this->EmployéSuppr, 0, 2);
            this->tableLayoutPanel20->Controls->Add(this->EmployéModif, 0, 1);
            this->tableLayoutPanel20->Controls->Add(this->EmployéAjout, 0, 0);
            this->tableLayoutPanel20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel20->Location = System::Drawing::Point(230, 0);
            this->tableLayoutPanel20->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel20->Name = L"tableLayoutPanel20";
            this->tableLayoutPanel20->RowCount = 3;
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel20->Size = System::Drawing::Size(230, 128);
            this->tableLayoutPanel20->TabIndex = 3;
            // 
            // EmployéSuppr
            // 
            this->EmployéSuppr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->EmployéSuppr->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployéSuppr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->EmployéSuppr->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployéSuppr->Location = System::Drawing::Point(0, 84);
            this->EmployéSuppr->Margin = System::Windows::Forms::Padding(0);
            this->EmployéSuppr->Name = L"EmployéSuppr";
            this->EmployéSuppr->Size = System::Drawing::Size(230, 44);
            this->EmployéSuppr->TabIndex = 3;
            this->EmployéSuppr->Text = L"Supprimer";
            this->EmployéSuppr->UseVisualStyleBackColor = false;
            // 
            // EmployéModif
            // 
            this->EmployéModif->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->EmployéModif->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployéModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->EmployéModif->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployéModif->Location = System::Drawing::Point(0, 42);
            this->EmployéModif->Margin = System::Windows::Forms::Padding(0);
            this->EmployéModif->Name = L"EmployéModif";
            this->EmployéModif->Size = System::Drawing::Size(230, 42);
            this->EmployéModif->TabIndex = 1;
            this->EmployéModif->Text = L"Modifier";
            this->EmployéModif->UseVisualStyleBackColor = false;
            // 
            // EmployéAjout
            // 
            this->EmployéAjout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->EmployéAjout->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployéAjout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->EmployéAjout->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployéAjout->Location = System::Drawing::Point(0, 0);
            this->EmployéAjout->Margin = System::Windows::Forms::Padding(0);
            this->EmployéAjout->Name = L"EmployéAjout";
            this->EmployéAjout->Size = System::Drawing::Size(230, 42);
            this->EmployéAjout->TabIndex = 0;
            this->EmployéAjout->Text = L"Ajouter";
            this->EmployéAjout->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanel21
            // 
            this->tableLayoutPanel21->ColumnCount = 1;
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel21->Controls->Add(this->tableLayoutPanel32, 0, 0);
            this->tableLayoutPanel21->Controls->Add(this->tableLayoutPanel22, 0, 3);
            this->tableLayoutPanel21->Controls->Add(this->tableLayoutPanel23, 0, 2);
            this->tableLayoutPanel21->Controls->Add(this->tableLayoutPanel24, 0, 1);
            this->tableLayoutPanel21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel21->Location = System::Drawing::Point(3, 34);
            this->tableLayoutPanel21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel21->Name = L"tableLayoutPanel21";
            this->tableLayoutPanel21->RowCount = 4;
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->Size = System::Drawing::Size(460, 225);
            this->tableLayoutPanel21->TabIndex = 7;
            // 
            // tableLayoutPanel32
            // 
            this->tableLayoutPanel32->ColumnCount = 1;
            this->tableLayoutPanel32->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel32->Controls->Add(this->EmployéId, 0, 1);
            this->tableLayoutPanel32->Controls->Add(this->label21, 0, 0);
            this->tableLayoutPanel32->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel32->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel32->Name = L"tableLayoutPanel32";
            this->tableLayoutPanel32->RowCount = 2;
            this->tableLayoutPanel32->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel32->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel32->Size = System::Drawing::Size(454, 52);
            this->tableLayoutPanel32->TabIndex = 9;
            // 
            // EmployéId
            // 
            this->EmployéId->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéId->Location = System::Drawing::Point(3, 28);
            this->EmployéId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéId->Name = L"EmployéId";
            this->EmployéId->Size = System::Drawing::Size(247, 24);
            this->EmployéId->TabIndex = 5;
            // 
            // label21
            // 
            this->label21->AllowDrop = true;
            this->label21->AutoSize = true;
            this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label21->Location = System::Drawing::Point(3, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(448, 26);
            this->label21->TabIndex = 6;
            this->label21->Text = L"Identifiant";
            this->label21->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel22
            // 
            this->tableLayoutPanel22->ColumnCount = 1;
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel22->Controls->Add(this->EmployeeBirth, 0, 1);
            this->tableLayoutPanel22->Controls->Add(this->label12, 0, 0);
            this->tableLayoutPanel22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel22->Location = System::Drawing::Point(3, 170);
            this->tableLayoutPanel22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel22->Name = L"tableLayoutPanel22";
            this->tableLayoutPanel22->RowCount = 2;
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel22->Size = System::Drawing::Size(454, 53);
            this->tableLayoutPanel22->TabIndex = 8;
            // 
            // EmployeeBirth
            // 
            this->EmployeeBirth->CustomFormat = L"yyyy-MM-dd";
            this->EmployeeBirth->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->EmployeeBirth->Location = System::Drawing::Point(3, 28);
            this->EmployeeBirth->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployeeBirth->Name = L"EmployeeBirth";
            this->EmployeeBirth->Size = System::Drawing::Size(247, 29);
            this->EmployeeBirth->TabIndex = 8;
            this->EmployeeBirth->Value = System::DateTime(2022, 12, 5, 17, 37, 37, 0);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Location = System::Drawing::Point(3, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(448, 26);
            this->label12->TabIndex = 6;
            this->label12->Text = L"Date De Naissance";
            this->label12->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel23
            // 
            this->tableLayoutPanel23->ColumnCount = 1;
            this->tableLayoutPanel23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel23->Controls->Add(this->EmployéFirstName, 0, 1);
            this->tableLayoutPanel23->Controls->Add(this->label13, 0, 0);
            this->tableLayoutPanel23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel23->Location = System::Drawing::Point(3, 114);
            this->tableLayoutPanel23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel23->Name = L"tableLayoutPanel23";
            this->tableLayoutPanel23->RowCount = 2;
            this->tableLayoutPanel23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel23->Size = System::Drawing::Size(454, 52);
            this->tableLayoutPanel23->TabIndex = 6;
            // 
            // EmployéFirstName
            // 
            this->EmployéFirstName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéFirstName->Location = System::Drawing::Point(3, 28);
            this->EmployéFirstName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéFirstName->Name = L"EmployéFirstName";
            this->EmployéFirstName->Size = System::Drawing::Size(247, 24);
            this->EmployéFirstName->TabIndex = 5;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Location = System::Drawing::Point(3, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(448, 26);
            this->label13->TabIndex = 6;
            this->label13->Text = L"Prénom";
            this->label13->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel24
            // 
            this->tableLayoutPanel24->ColumnCount = 1;
            this->tableLayoutPanel24->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel24->Controls->Add(this->EmployéLastName, 0, 1);
            this->tableLayoutPanel24->Controls->Add(this->label14, 0, 0);
            this->tableLayoutPanel24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel24->Location = System::Drawing::Point(3, 58);
            this->tableLayoutPanel24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel24->Name = L"tableLayoutPanel24";
            this->tableLayoutPanel24->RowCount = 2;
            this->tableLayoutPanel24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel24->Size = System::Drawing::Size(454, 52);
            this->tableLayoutPanel24->TabIndex = 7;
            // 
            // EmployéLastName
            // 
            this->EmployéLastName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéLastName->Location = System::Drawing::Point(3, 28);
            this->EmployéLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéLastName->Name = L"EmployéLastName";
            this->EmployéLastName->Size = System::Drawing::Size(247, 24);
            this->EmployéLastName->TabIndex = 5;
            // 
            // label14
            // 
            this->label14->AllowDrop = true;
            this->label14->AutoSize = true;
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Location = System::Drawing::Point(3, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(448, 26);
            this->label14->TabIndex = 6;
            this->label14->Text = L"Nom";
            this->label14->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel25
            // 
            this->tableLayoutPanel25->ColumnCount = 1;
            this->tableLayoutPanel25->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel25->Controls->Add(this->tableLayoutPanel26, 0, 1);
            this->tableLayoutPanel25->Controls->Add(this->tableLayoutPanel30, 0, 2);
            this->tableLayoutPanel25->Controls->Add(this->label19, 0, 0);
            this->tableLayoutPanel25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel25->Location = System::Drawing::Point(3, 263);
            this->tableLayoutPanel25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel25->Name = L"tableLayoutPanel25";
            this->tableLayoutPanel25->RowCount = 3;
            this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 66.66666F)));
            this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
            this->tableLayoutPanel25->Size = System::Drawing::Size(460, 258);
            this->tableLayoutPanel25->TabIndex = 8;
            // 
            // tableLayoutPanel26
            // 
            this->tableLayoutPanel26->ColumnCount = 1;
            this->tableLayoutPanel26->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel26->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                18)));
            this->tableLayoutPanel26->Controls->Add(this->tableLayoutPanel27, 0, 2);
            this->tableLayoutPanel26->Controls->Add(this->tableLayoutPanel28, 0, 1);
            this->tableLayoutPanel26->Controls->Add(this->tableLayoutPanel29, 0, 0);
            this->tableLayoutPanel26->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel26->Location = System::Drawing::Point(3, 30);
            this->tableLayoutPanel26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel26->Name = L"tableLayoutPanel26";
            this->tableLayoutPanel26->RowCount = 3;
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel26->Size = System::Drawing::Size(454, 168);
            this->tableLayoutPanel26->TabIndex = 13;
            // 
            // tableLayoutPanel27
            // 
            this->tableLayoutPanel27->ColumnCount = 1;
            this->tableLayoutPanel27->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel27->Controls->Add(this->EmployéAdresCity, 0, 1);
            this->tableLayoutPanel27->Controls->Add(this->label15, 0, 0);
            this->tableLayoutPanel27->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel27->Location = System::Drawing::Point(3, 114);
            this->tableLayoutPanel27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel27->Name = L"tableLayoutPanel27";
            this->tableLayoutPanel27->RowCount = 2;
            this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel27->Size = System::Drawing::Size(448, 52);
            this->tableLayoutPanel27->TabIndex = 11;
            // 
            // EmployéAdresCity
            // 
            this->EmployéAdresCity->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdresCity->Location = System::Drawing::Point(3, 28);
            this->EmployéAdresCity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéAdresCity->Name = L"EmployéAdresCity";
            this->EmployéAdresCity->Size = System::Drawing::Size(239, 24);
            this->EmployéAdresCity->TabIndex = 5;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Location = System::Drawing::Point(3, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(442, 26);
            this->label15->TabIndex = 6;
            this->label15->Text = L"Ville";
            this->label15->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel28
            // 
            this->tableLayoutPanel28->ColumnCount = 1;
            this->tableLayoutPanel28->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel28->Controls->Add(this->EmployéAdressStreet, 0, 1);
            this->tableLayoutPanel28->Controls->Add(this->label16, 0, 0);
            this->tableLayoutPanel28->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel28->Location = System::Drawing::Point(3, 58);
            this->tableLayoutPanel28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel28->Name = L"tableLayoutPanel28";
            this->tableLayoutPanel28->RowCount = 2;
            this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel28->Size = System::Drawing::Size(448, 52);
            this->tableLayoutPanel28->TabIndex = 10;
            // 
            // EmployéAdressStreet
            // 
            this->EmployéAdressStreet->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdressStreet->Location = System::Drawing::Point(3, 28);
            this->EmployéAdressStreet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéAdressStreet->Name = L"EmployéAdressStreet";
            this->EmployéAdressStreet->Size = System::Drawing::Size(240, 24);
            this->EmployéAdressStreet->TabIndex = 5;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label16->Location = System::Drawing::Point(3, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(442, 26);
            this->label16->TabIndex = 6;
            this->label16->Text = L"Rue";
            this->label16->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel29
            // 
            this->tableLayoutPanel29->ColumnCount = 1;
            this->tableLayoutPanel29->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel29->Controls->Add(this->EmployéAdressNumber, 0, 1);
            this->tableLayoutPanel29->Controls->Add(this->label17, 0, 0);
            this->tableLayoutPanel29->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel29->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel29->Name = L"tableLayoutPanel29";
            this->tableLayoutPanel29->RowCount = 2;
            this->tableLayoutPanel29->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel29->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel29->Size = System::Drawing::Size(448, 52);
            this->tableLayoutPanel29->TabIndex = 9;
            // 
            // EmployéAdressNumber
            // 
            this->EmployéAdressNumber->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdressNumber->Location = System::Drawing::Point(3, 28);
            this->EmployéAdressNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéAdressNumber->Name = L"EmployéAdressNumber";
            this->EmployéAdressNumber->Size = System::Drawing::Size(247, 24);
            this->EmployéAdressNumber->TabIndex = 5;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label17->Location = System::Drawing::Point(3, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(442, 26);
            this->label17->TabIndex = 6;
            this->label17->Text = L"Numéro de Maison";
            this->label17->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel30
            // 
            this->tableLayoutPanel30->ColumnCount = 1;
            this->tableLayoutPanel30->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel30->Controls->Add(this->EmployéAdressInfo, 0, 1);
            this->tableLayoutPanel30->Controls->Add(this->label18, 0, 0);
            this->tableLayoutPanel30->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel30->Location = System::Drawing::Point(3, 202);
            this->tableLayoutPanel30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel30->Name = L"tableLayoutPanel30";
            this->tableLayoutPanel30->RowCount = 2;
            this->tableLayoutPanel30->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel30->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel30->Size = System::Drawing::Size(454, 54);
            this->tableLayoutPanel30->TabIndex = 12;
            // 
            // EmployéAdressInfo
            // 
            this->EmployéAdressInfo->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdressInfo->Location = System::Drawing::Point(3, 29);
            this->EmployéAdressInfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéAdressInfo->Name = L"EmployéAdressInfo";
            this->EmployéAdressInfo->Size = System::Drawing::Size(394, 24);
            this->EmployéAdressInfo->TabIndex = 5;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label18->Location = System::Drawing::Point(3, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(448, 27);
            this->label18->TabIndex = 6;
            this->label18->Text = L"Information complémentaire";
            this->label18->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(3, 0);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(86, 21);
            this->label19->TabIndex = 14;
            this->label19->Text = L"Adresse";
            // 
            // EmployeData
            // 
            this->EmployeData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->EmployeData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->EmployeData->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployeData->Location = System::Drawing::Point(469, 2);
            this->EmployeData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployeData->Name = L"EmployeData";
            this->EmployeData->RowHeadersWidth = 62;
            this->EmployeData->RowTemplate->Height = 28;
            this->EmployeData->Size = System::Drawing::Size(461, 651);
            this->EmployeData->TabIndex = 6;
            // 
            // tabCommande
            // 
            this->tabCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabCommande->Controls->Add(this->TableCommand);
            this->tabCommande->Location = System::Drawing::Point(4, 24);
            this->tabCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabCommande->Name = L"tabCommande";
            this->tabCommande->Size = System::Drawing::Size(933, 655);
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
            this->TableCommand->Size = System::Drawing::Size(933, 655);
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
            this->labelStocks->Size = System::Drawing::Size(927, 32);
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
            this->tableLayoutPanel8->Location = System::Drawing::Point(3, 525);
            this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 1;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 128)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(927, 128);
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
            this->CommandRechercheB->Size = System::Drawing::Size(463, 128);
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
            this->tableLayoutPanel7->Location = System::Drawing::Point(463, 0);
            this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 3;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(464, 128);
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
            this->CommandSupprB->Location = System::Drawing::Point(0, 84);
            this->CommandSupprB->Margin = System::Windows::Forms::Padding(0);
            this->CommandSupprB->Name = L"CommandSupprB";
            this->CommandSupprB->Size = System::Drawing::Size(464, 44);
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
            this->CommandModB->Location = System::Drawing::Point(0, 42);
            this->CommandModB->Margin = System::Windows::Forms::Padding(0);
            this->CommandModB->Name = L"CommandModB";
            this->CommandModB->Size = System::Drawing::Size(464, 42);
            this->CommandModB->TabIndex = 1;
            this->CommandModB->Text = L"Modifier";
            this->CommandModB->UseVisualStyleBackColor = false;
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
            this->CommandAjoutB->Size = System::Drawing::Size(464, 42);
            this->CommandAjoutB->TabIndex = 0;
            this->CommandAjoutB->Text = L"Ajouter";
            this->CommandAjoutB->UseVisualStyleBackColor = false;
            // 
            // tabStocks
            // 
            this->tabStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabStocks->Controls->Add(this->tableLayoutPanel35);
            this->tabStocks->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabStocks->Location = System::Drawing::Point(4, 24);
            this->tabStocks->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabStocks->Name = L"tabStocks";
            this->tabStocks->Size = System::Drawing::Size(933, 655);
            this->tabStocks->TabIndex = 4;
            this->tabStocks->Text = L"Stats";
            // 
            // tableLayoutPanel35
            // 
            this->tableLayoutPanel35->ColumnCount = 2;
            this->tableLayoutPanel35->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel35->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel35->Controls->Add(this->dataGridView1, 1, 0);
            this->tableLayoutPanel35->Controls->Add(this->tableLayoutPanel2, 0, 0);
            this->tableLayoutPanel35->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel35->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel35->Name = L"tableLayoutPanel35";
            this->tableLayoutPanel35->RowCount = 1;
            this->tableLayoutPanel35->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel35->Size = System::Drawing::Size(933, 655);
            this->tableLayoutPanel35->TabIndex = 3;
            // 
            // dataGridView1
            // 
            this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(469, 2);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(461, 651);
            this->dataGridView1->TabIndex = 4;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 1;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->StockLabel, 0, 0);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 2;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(460, 651);
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
            this->StockLabel->Size = System::Drawing::Size(454, 32);
            this->StockLabel->TabIndex = 2;
            this->StockLabel->Text = L"Stocks";
            // 
            // tabStats
            // 
            this->tabStats->Controls->Add(this->tableLayoutPanel3);
            this->tabStats->Location = System::Drawing::Point(4, 24);
            this->tabStats->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabStats->Name = L"tabStats";
            this->tabStats->Size = System::Drawing::Size(933, 655);
            this->tabStats->TabIndex = 5;
            this->tabStats->Text = L"tabPage1";
            this->tabStats->UseVisualStyleBackColor = true;
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
            this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 2;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(933, 655);
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
            this->label1->Size = System::Drawing::Size(927, 32);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Statistiques";
            // 
            // tabClient
            // 
            this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabClient->Controls->Add(this->tableLayoutPanel33);
            this->tabClient->Location = System::Drawing::Point(4, 24);
            this->tabClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabClient->Name = L"tabClient";
            this->tabClient->Size = System::Drawing::Size(933, 655);
            this->tabClient->TabIndex = 6;
            this->tabClient->Text = L"tabPage1";
            // 
            // tableLayoutPanel33
            // 
            this->tableLayoutPanel33->ColumnCount = 2;
            this->tableLayoutPanel33->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel33->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel33->Controls->Add(this->TableClientFonc, 0, 0);
            this->tableLayoutPanel33->Controls->Add(this->ClientData, 1, 0);
            this->tableLayoutPanel33->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel33->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel33->Name = L"tableLayoutPanel33";
            this->tableLayoutPanel33->RowCount = 1;
            this->tableLayoutPanel33->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel33->Size = System::Drawing::Size(933, 655);
            this->tableLayoutPanel33->TabIndex = 6;
            // 
            // TableClientFonc
            // 
            this->TableClientFonc->ColumnCount = 1;
            this->TableClientFonc->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->TableClientFonc->Controls->Add(this->label2, 0, 0);
            this->TableClientFonc->Controls->Add(this->tableLayoutPanel4, 0, 3);
            this->TableClientFonc->Controls->Add(this->tableLayoutPanel10, 0, 1);
            this->TableClientFonc->Controls->Add(this->tableLayoutPanel13, 0, 2);
            this->TableClientFonc->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TableClientFonc->Location = System::Drawing::Point(0, 0);
            this->TableClientFonc->Margin = System::Windows::Forms::Padding(0);
            this->TableClientFonc->Name = L"TableClientFonc";
            this->TableClientFonc->RowCount = 4;
            this->TableClientFonc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
            this->TableClientFonc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35)));
            this->TableClientFonc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
            this->TableClientFonc->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->TableClientFonc->Size = System::Drawing::Size(466, 655);
            this->TableClientFonc->TabIndex = 5;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(3, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(460, 32);
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
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 525);
            this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 128)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(460, 128);
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
            this->ClientRecherche->Size = System::Drawing::Size(230, 128);
            this->ClientRecherche->TabIndex = 2;
            this->ClientRecherche->Text = L"Rechercher";
            this->ClientRecherche->UseVisualStyleBackColor = false;
            this->ClientRecherche->Click += gcnew System::EventHandler(this, &MyForm::ClientRecherche_Click);
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
            this->tableLayoutPanel5->Location = System::Drawing::Point(230, 0);
            this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 3;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(230, 128);
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
            this->Clientsuppr->Location = System::Drawing::Point(0, 84);
            this->Clientsuppr->Margin = System::Windows::Forms::Padding(0);
            this->Clientsuppr->Name = L"Clientsuppr";
            this->Clientsuppr->Size = System::Drawing::Size(230, 44);
            this->Clientsuppr->TabIndex = 3;
            this->Clientsuppr->Text = L"Supprimer";
            this->Clientsuppr->UseVisualStyleBackColor = false;
            this->Clientsuppr->Click += gcnew System::EventHandler(this, &MyForm::ClientSuppr_Click);
            // 
            // ClientModif
            // 
            this->ClientModif->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->ClientModif->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ClientModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->ClientModif->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClientModif->Location = System::Drawing::Point(0, 42);
            this->ClientModif->Margin = System::Windows::Forms::Padding(0);
            this->ClientModif->Name = L"ClientModif";
            this->ClientModif->Size = System::Drawing::Size(230, 42);
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
            this->ClientAjout->Size = System::Drawing::Size(230, 42);
            this->ClientAjout->TabIndex = 0;
            this->ClientAjout->Text = L"Ajouter";
            this->ClientAjout->UseVisualStyleBackColor = false;
            this->ClientAjout->Click += gcnew System::EventHandler(this, &MyForm::ClientAjout_Click);
            // 
            // tableLayoutPanel10
            // 
            this->tableLayoutPanel10->ColumnCount = 1;
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel10->Controls->Add(this->tableLayoutPanel31, 0, 1);
            this->tableLayoutPanel10->Controls->Add(this->tableLayoutPanel12, 0, 3);
            this->tableLayoutPanel10->Controls->Add(this->tableLayoutPanel9, 0, 2);
            this->tableLayoutPanel10->Controls->Add(this->tableLayoutPanel11, 0, 0);
            this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel10->Location = System::Drawing::Point(3, 34);
            this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 4;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(460, 225);
            this->tableLayoutPanel10->TabIndex = 7;
            // 
            // tableLayoutPanel31
            // 
            this->tableLayoutPanel31->ColumnCount = 1;
            this->tableLayoutPanel31->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel31->Controls->Add(this->ClientLastName, 0, 1);
            this->tableLayoutPanel31->Controls->Add(this->label20, 0, 0);
            this->tableLayoutPanel31->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel31->Location = System::Drawing::Point(3, 58);
            this->tableLayoutPanel31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel31->Name = L"tableLayoutPanel31";
            this->tableLayoutPanel31->RowCount = 2;
            this->tableLayoutPanel31->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel31->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel31->Size = System::Drawing::Size(454, 52);
            this->tableLayoutPanel31->TabIndex = 8;
            // 
            // ClientLastName
            // 
            this->ClientLastName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientLastName->Location = System::Drawing::Point(3, 28);
            this->ClientLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientLastName->Name = L"ClientLastName";
            this->ClientLastName->Size = System::Drawing::Size(247, 24);
            this->ClientLastName->TabIndex = 5;
            // 
            // label20
            // 
            this->label20->AllowDrop = true;
            this->label20->AutoSize = true;
            this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label20->Location = System::Drawing::Point(3, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(448, 26);
            this->label20->TabIndex = 6;
            this->label20->Text = L"Nom";
            this->label20->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel12
            // 
            this->tableLayoutPanel12->ColumnCount = 1;
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel12->Controls->Add(this->label6, 0, 0);
            this->tableLayoutPanel12->Controls->Add(this->ClientTime, 0, 1);
            this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel12->Location = System::Drawing::Point(3, 170);
            this->tableLayoutPanel12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 2;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(454, 53);
            this->tableLayoutPanel12->TabIndex = 8;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label6->Location = System::Drawing::Point(3, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(448, 26);
            this->label6->TabIndex = 6;
            this->label6->Text = L"Date De Naissance";
            this->label6->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // ClientTime
            // 
            this->ClientTime->CustomFormat = L"yyyy-MM-dd";
            this->ClientTime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->ClientTime->Location = System::Drawing::Point(3, 28);
            this->ClientTime->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientTime->Name = L"ClientTime";
            this->ClientTime->Size = System::Drawing::Size(250, 29);
            this->ClientTime->TabIndex = 7;
            this->ClientTime->Value = System::DateTime(2022, 12, 5, 17, 37, 37, 0);
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->ColumnCount = 1;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel9->Controls->Add(this->ClientFirstName, 0, 1);
            this->tableLayoutPanel9->Controls->Add(this->label3, 0, 0);
            this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel9->Location = System::Drawing::Point(3, 114);
            this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 2;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(454, 52);
            this->tableLayoutPanel9->TabIndex = 6;
            // 
            // ClientFirstName
            // 
            this->ClientFirstName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientFirstName->Location = System::Drawing::Point(3, 28);
            this->ClientFirstName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientFirstName->Name = L"ClientFirstName";
            this->ClientFirstName->Size = System::Drawing::Size(247, 24);
            this->ClientFirstName->TabIndex = 5;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label3->Location = System::Drawing::Point(3, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(448, 26);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Prénom";
            this->label3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel11
            // 
            this->tableLayoutPanel11->ColumnCount = 1;
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel11->Controls->Add(this->label5, 0, 0);
            this->tableLayoutPanel11->Controls->Add(this->ClientId, 0, 1);
            this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel11->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
            this->tableLayoutPanel11->RowCount = 2;
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel11->Size = System::Drawing::Size(454, 52);
            this->tableLayoutPanel11->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AllowDrop = true;
            this->label5->AutoSize = true;
            this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label5->Location = System::Drawing::Point(3, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(448, 26);
            this->label5->TabIndex = 6;
            this->label5->Text = L"Identifiant";
            this->label5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // ClientId
            // 
            this->ClientId->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClientId->Location = System::Drawing::Point(3, 28);
            this->ClientId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientId->Name = L"ClientId";
            this->ClientId->Size = System::Drawing::Size(247, 24);
            this->ClientId->TabIndex = 5;
            this->ClientId->TextChanged += gcnew System::EventHandler(this, &MyForm::ClientId_TextChanged);
            // 
            // tableLayoutPanel13
            // 
            this->tableLayoutPanel13->ColumnCount = 1;
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel13->Controls->Add(this->tableLayoutPanel18, 0, 1);
            this->tableLayoutPanel13->Controls->Add(this->tableLayoutPanel17, 0, 2);
            this->tableLayoutPanel13->Controls->Add(this->label11, 0, 0);
            this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel13->Location = System::Drawing::Point(3, 263);
            this->tableLayoutPanel13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 3;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 66.66666F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(460, 258);
            this->tableLayoutPanel13->TabIndex = 8;
            // 
            // tableLayoutPanel18
            // 
            this->tableLayoutPanel18->ColumnCount = 1;
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                18)));
            this->tableLayoutPanel18->Controls->Add(this->tableLayoutPanel15, 0, 1);
            this->tableLayoutPanel18->Controls->Add(this->tableLayoutPanel14, 0, 0);
            this->tableLayoutPanel18->Controls->Add(this->tableLayoutPanel16, 0, 2);
            this->tableLayoutPanel18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel18->Location = System::Drawing::Point(3, 30);
            this->tableLayoutPanel18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
            this->tableLayoutPanel18->RowCount = 3;
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel18->Size = System::Drawing::Size(454, 168);
            this->tableLayoutPanel18->TabIndex = 13;
            // 
            // tableLayoutPanel15
            // 
            this->tableLayoutPanel15->ColumnCount = 1;
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel15->Controls->Add(this->ClientAdressStreet, 0, 1);
            this->tableLayoutPanel15->Controls->Add(this->label8, 0, 0);
            this->tableLayoutPanel15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel15->Location = System::Drawing::Point(3, 58);
            this->tableLayoutPanel15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 3;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(448, 52);
            this->tableLayoutPanel15->TabIndex = 10;
            // 
            // ClientAdressStreet
            // 
            this->ClientAdressStreet->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientAdressStreet->Location = System::Drawing::Point(3, 20);
            this->ClientAdressStreet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientAdressStreet->Name = L"ClientAdressStreet";
            this->ClientAdressStreet->Size = System::Drawing::Size(240, 24);
            this->ClientAdressStreet->TabIndex = 5;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label8->Location = System::Drawing::Point(3, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(442, 18);
            this->label8->TabIndex = 6;
            this->label8->Text = L"Rue";
            this->label8->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel14
            // 
            this->tableLayoutPanel14->ColumnCount = 1;
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel14->Controls->Add(this->ClientAdressNumber, 0, 1);
            this->tableLayoutPanel14->Controls->Add(this->label7, 0, 0);
            this->tableLayoutPanel14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel14->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 2;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(448, 52);
            this->tableLayoutPanel14->TabIndex = 9;
            // 
            // ClientAdressNumber
            // 
            this->ClientAdressNumber->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientAdressNumber->Location = System::Drawing::Point(3, 28);
            this->ClientAdressNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientAdressNumber->Name = L"ClientAdressNumber";
            this->ClientAdressNumber->Size = System::Drawing::Size(247, 24);
            this->ClientAdressNumber->TabIndex = 5;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label7->Location = System::Drawing::Point(3, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(442, 26);
            this->label7->TabIndex = 6;
            this->label7->Text = L"Numéro de Maison";
            this->label7->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel16
            // 
            this->tableLayoutPanel16->ColumnCount = 2;
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel16->Controls->Add(this->Clientpostadress, 1, 0);
            this->tableLayoutPanel16->Controls->Add(this->Clientville, 0, 0);
            this->tableLayoutPanel16->Controls->Add(this->ClientCity, 0, 1);
            this->tableLayoutPanel16->Controls->Add(this->ClientPost, 1, 1);
            this->tableLayoutPanel16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel16->Location = System::Drawing::Point(3, 114);
            this->tableLayoutPanel16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
            this->tableLayoutPanel16->RowCount = 2;
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel16->Size = System::Drawing::Size(448, 52);
            this->tableLayoutPanel16->TabIndex = 11;
            // 
            // Clientpostadress
            // 
            this->Clientpostadress->AutoSize = true;
            this->Clientpostadress->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Clientpostadress->Location = System::Drawing::Point(227, 0);
            this->Clientpostadress->Name = L"Clientpostadress";
            this->Clientpostadress->Size = System::Drawing::Size(218, 26);
            this->Clientpostadress->TabIndex = 7;
            this->Clientpostadress->Text = L"Code Postal";
            this->Clientpostadress->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // Clientville
            // 
            this->Clientville->AutoSize = true;
            this->Clientville->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Clientville->Location = System::Drawing::Point(3, 0);
            this->Clientville->Name = L"Clientville";
            this->Clientville->Size = System::Drawing::Size(218, 26);
            this->Clientville->TabIndex = 7;
            this->Clientville->Text = L"Ville";
            this->Clientville->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // ClientCity
            // 
            this->ClientCity->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientCity->Location = System::Drawing::Point(3, 28);
            this->ClientCity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientCity->Name = L"ClientCity";
            this->ClientCity->Size = System::Drawing::Size(192, 24);
            this->ClientCity->TabIndex = 7;
            // 
            // ClientPost
            // 
            this->ClientPost->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientPost->Location = System::Drawing::Point(227, 28);
            this->ClientPost->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientPost->Name = L"ClientPost";
            this->ClientPost->Size = System::Drawing::Size(192, 24);
            this->ClientPost->TabIndex = 8;
            // 
            // tableLayoutPanel17
            // 
            this->tableLayoutPanel17->ColumnCount = 1;
            this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel17->Controls->Add(this->ClientAdressInfo, 0, 1);
            this->tableLayoutPanel17->Controls->Add(this->label10, 0, 0);
            this->tableLayoutPanel17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel17->Location = System::Drawing::Point(3, 202);
            this->tableLayoutPanel17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel17->Name = L"tableLayoutPanel17";
            this->tableLayoutPanel17->RowCount = 2;
            this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel17->Size = System::Drawing::Size(454, 54);
            this->tableLayoutPanel17->TabIndex = 12;
            // 
            // ClientAdressInfo
            // 
            this->ClientAdressInfo->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientAdressInfo->Location = System::Drawing::Point(3, 29);
            this->ClientAdressInfo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientAdressInfo->Name = L"ClientAdressInfo";
            this->ClientAdressInfo->Size = System::Drawing::Size(394, 24);
            this->ClientAdressInfo->TabIndex = 5;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label10->Location = System::Drawing::Point(3, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(448, 27);
            this->label10->TabIndex = 6;
            this->label10->Text = L"Information complémentaire";
            this->label10->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(3, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(86, 21);
            this->label11->TabIndex = 14;
            this->label11->Text = L"Adresse";
            // 
            // ClientData
            // 
            this->ClientData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->ClientData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->ClientData->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ClientData->Location = System::Drawing::Point(469, 2);
            this->ClientData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientData->Name = L"ClientData";
            this->ClientData->RowHeadersWidth = 62;
            this->ClientData->RowTemplate->Height = 28;
            this->ClientData->Size = System::Drawing::Size(461, 651);
            this->ClientData->TabIndex = 6;
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
            this->tableLayoutPanel1->Location = System::Drawing::Point(3, 687);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 1;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1041, 73);
            this->tableLayoutPanel1->TabIndex = 3;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(3, 2);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(150, 69);
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
            this->MarqueLabel->Location = System::Drawing::Point(159, 0);
            this->MarqueLabel->Name = L"MarqueLabel";
            this->MarqueLabel->Size = System::Drawing::Size(879, 73);
            this->MarqueLabel->TabIndex = 1;
            this->MarqueLabel->Text = L"Elèc-tonique.inc";
            this->MarqueLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(202)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->ClientSize = System::Drawing::Size(1047, 762);
            this->Controls->Add(this->tableInterface);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->MinimumSize = System::Drawing::Size(891, 809);
            this->Name = L"MyForm";
            this->Text = L"DataBase Manager";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tableInterface->ResumeLayout(false);
            this->tableFonction->ResumeLayout(false);
            this->Buttons->ResumeLayout(false);
            this->TabMod->ResumeLayout(false);
            this->tabFirst->ResumeLayout(false);
            this->FirtstTable->ResumeLayout(false);
            this->FirtstTable->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstPicture))->EndInit();
            this->tabEmployé->ResumeLayout(false);
            this->tableLayoutPanel34->ResumeLayout(false);
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel19->ResumeLayout(false);
            this->tableLayoutPanel20->ResumeLayout(false);
            this->tableLayoutPanel21->ResumeLayout(false);
            this->tableLayoutPanel32->ResumeLayout(false);
            this->tableLayoutPanel32->PerformLayout();
            this->tableLayoutPanel22->ResumeLayout(false);
            this->tableLayoutPanel22->PerformLayout();
            this->tableLayoutPanel23->ResumeLayout(false);
            this->tableLayoutPanel23->PerformLayout();
            this->tableLayoutPanel24->ResumeLayout(false);
            this->tableLayoutPanel24->PerformLayout();
            this->tableLayoutPanel25->ResumeLayout(false);
            this->tableLayoutPanel25->PerformLayout();
            this->tableLayoutPanel26->ResumeLayout(false);
            this->tableLayoutPanel27->ResumeLayout(false);
            this->tableLayoutPanel27->PerformLayout();
            this->tableLayoutPanel28->ResumeLayout(false);
            this->tableLayoutPanel28->PerformLayout();
            this->tableLayoutPanel29->ResumeLayout(false);
            this->tableLayoutPanel29->PerformLayout();
            this->tableLayoutPanel30->ResumeLayout(false);
            this->tableLayoutPanel30->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EmployeData))->EndInit();
            this->tabCommande->ResumeLayout(false);
            this->TableCommand->ResumeLayout(false);
            this->TableCommand->PerformLayout();
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tabStocks->ResumeLayout(false);
            this->tableLayoutPanel35->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tabStats->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->tabClient->ResumeLayout(false);
            this->tableLayoutPanel33->ResumeLayout(false);
            this->TableClientFonc->ResumeLayout(false);
            this->TableClientFonc->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanel31->ResumeLayout(false);
            this->tableLayoutPanel31->PerformLayout();
            this->tableLayoutPanel12->ResumeLayout(false);
            this->tableLayoutPanel12->PerformLayout();
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanel9->PerformLayout();
            this->tableLayoutPanel11->ResumeLayout(false);
            this->tableLayoutPanel11->PerformLayout();
            this->tableLayoutPanel13->ResumeLayout(false);
            this->tableLayoutPanel13->PerformLayout();
            this->tableLayoutPanel18->ResumeLayout(false);
            this->tableLayoutPanel15->ResumeLayout(false);
            this->tableLayoutPanel15->PerformLayout();
            this->tableLayoutPanel14->ResumeLayout(false);
            this->tableLayoutPanel14->PerformLayout();
            this->tableLayoutPanel16->ResumeLayout(false);
            this->tableLayoutPanel16->PerformLayout();
            this->tableLayoutPanel17->ResumeLayout(false);
            this->tableLayoutPanel17->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientData))->EndInit();
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

        DB_Client = gcnew Client();

        this->ClientData->Refresh();
        this->ClientData->DataSource = this->DB_Client->Returninfos();
        //this->ClientData->DataMember = "Client";
	}
	private: System::Void EmplyéB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TabMod->SelectedTab = tabEmployé;
        DB_Employee = gcnew Employee();
        this->EmployeData->Refresh();
        this->EmployeData->DataSource = this->DB_Employee->Returninfos();
	}
    private: System::Void ClientAjout_Click(System::Object^ sender, System::EventArgs^ e) {
        this->DB_Client->create(ClientFirstName->Text,ClientLastName->Text,ClientTime->Text, ClientAdressNumber->Text, ClientAdressStreet->Text, ClientAdressInfo->Text, ClientCity->Text , ClientPost->Text);
    }
    private: System::Void ClientSuppr_Click(System::Object^ sender, System::EventArgs^ e) {
        this->DB_Client->Delete(ClientId->Text);
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
private: System::Void ClientRecherche_Click(System::Object^ sender, System::EventArgs^ e) {
    this->ClientData->DataSource = this->bClient->Returninfos();

}
private: System::Void ClientId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    /*System::Data::DataSet^ result = DB_Client->ID_find(5);
    this->ClientFirstName->Text = result->Tables[0]->Rows[0]["first_name"]->ToString();*/
}
};
}