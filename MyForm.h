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
    private: Order^ DB_Order;





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
private: System::Windows::Forms::DataGridView^ StockData;

private: System::Windows::Forms::DateTimePicker^ EmployeeBirth;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel36;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel37;


private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel39;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ OrderAdd;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel40;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel41;


private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel42;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ Order_discount;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel43;


private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel44;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ Order_ID;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel45;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel46;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel47;
private: System::Windows::Forms::TextBox^ Order_Rue;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel48;
private: System::Windows::Forms::TextBox^ Order_HouseNum;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel49;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ Order_City;
private: System::Windows::Forms::TextBox^ Order_Code_Postal;


private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel50;
private: System::Windows::Forms::TextBox^ Order_info_supp;

private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel51;
private: System::Windows::Forms::TextBox^ Order_IDClient;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::Label^ label1;






private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel53;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel54;
private: System::Windows::Forms::TextBox^ Stat_Month;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel55;
private: System::Windows::Forms::Label^ label34;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel56;
private: System::Windows::Forms::TextBox^ Stat_TVA;

private: System::Windows::Forms::Label^ label35;
























private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel57;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ Stat_MargeCommerciale;






private: System::Windows::Forms::DataGridView^ CommandData;
private: System::Windows::Forms::TextBox^ EmployeeSuperiorId;

private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ EmployeePostCode;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::DateTimePicker^ EmployeeHire;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::DateTimePicker^ OrderIssueDate;
private: System::Windows::Forms::DateTimePicker^ OrderDeliveryDate;



















































































































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
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->EmployeeSuperiorId = (gcnew System::Windows::Forms::TextBox());
            this->EmployéId = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel22 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->EmployeeHire = (gcnew System::Windows::Forms::DateTimePicker());
            this->EmployeeBirth = (gcnew System::Windows::Forms::DateTimePicker());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel23 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéFirstName = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel24 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->EmployéLastName = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel25 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel26 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel27 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->EmployeePostCode = (gcnew System::Windows::Forms::TextBox());
            this->EmployéAdresCity = (gcnew System::Windows::Forms::TextBox());
            this->label38 = (gcnew System::Windows::Forms::Label());
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
            this->tableLayoutPanel36 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel39 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->OrderAdd = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel40 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel41 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->OrderIssueDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel42 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->Order_discount = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel43 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->OrderDeliveryDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel44 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->Order_ID = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel51 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Order_IDClient = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel45 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel46 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel47 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Order_Rue = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel48 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Order_HouseNum = (gcnew System::Windows::Forms::TextBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel49 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->Order_City = (gcnew System::Windows::Forms::TextBox());
            this->Order_Code_Postal = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel50 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Order_info_supp = (gcnew System::Windows::Forms::TextBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->CommandData = (gcnew System::Windows::Forms::DataGridView());
            this->tabStocks = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel35 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->StockData = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->StockLabel = (gcnew System::Windows::Forms::Label());
            this->tabStats = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel37 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel53 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel54 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Stat_Month = (gcnew System::Windows::Forms::TextBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel55 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->Stat_MargeCommerciale = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel56 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->Stat_TVA = (gcnew System::Windows::Forms::TextBox());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel57 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
            this->tableLayoutPanel36->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tableLayoutPanel39->SuspendLayout();
            this->tableLayoutPanel40->SuspendLayout();
            this->tableLayoutPanel41->SuspendLayout();
            this->tableLayoutPanel42->SuspendLayout();
            this->tableLayoutPanel43->SuspendLayout();
            this->tableLayoutPanel44->SuspendLayout();
            this->tableLayoutPanel51->SuspendLayout();
            this->tableLayoutPanel45->SuspendLayout();
            this->tableLayoutPanel46->SuspendLayout();
            this->tableLayoutPanel47->SuspendLayout();
            this->tableLayoutPanel48->SuspendLayout();
            this->tableLayoutPanel49->SuspendLayout();
            this->tableLayoutPanel50->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CommandData))->BeginInit();
            this->tabStocks->SuspendLayout();
            this->tableLayoutPanel35->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StockData))->BeginInit();
            this->tableLayoutPanel2->SuspendLayout();
            this->tabStats->SuspendLayout();
            this->tableLayoutPanel37->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->tableLayoutPanel53->SuspendLayout();
            this->tableLayoutPanel54->SuspendLayout();
            this->tableLayoutPanel55->SuspendLayout();
            this->tableLayoutPanel56->SuspendLayout();
            this->tableLayoutPanel57->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
            this->tableInterface->Size = System::Drawing::Size(1710, 840);
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
            this->tableFonction->Size = System::Drawing::Size(1710, 756);
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
            this->Buttons->Size = System::Drawing::Size(169, 754);
            this->Buttons->TabIndex = 2;
            // 
            // ClientB
            // 
            this->ClientB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ClientB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ClientB->Location = System::Drawing::Point(1, 1);
            this->ClientB->Margin = System::Windows::Forms::Padding(1);
            this->ClientB->Name = L"ClientB";
            this->ClientB->Size = System::Drawing::Size(167, 148);
            this->ClientB->TabIndex = 0;
            this->ClientB->Text = L"Client";
            this->ClientB->UseVisualStyleBackColor = true;
            this->ClientB->Click += gcnew System::EventHandler(this, &MyForm::ClientB_Click);
            // 
            // EmplyéB
            // 
            this->EmplyéB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmplyéB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->EmplyéB->Location = System::Drawing::Point(1, 151);
            this->EmplyéB->Margin = System::Windows::Forms::Padding(1);
            this->EmplyéB->Name = L"EmplyéB";
            this->EmplyéB->Size = System::Drawing::Size(167, 148);
            this->EmplyéB->TabIndex = 1;
            this->EmplyéB->Text = L"Personnel";
            this->EmplyéB->UseVisualStyleBackColor = true;
            this->EmplyéB->Click += gcnew System::EventHandler(this, &MyForm::EmplyéB_Click);
            // 
            // CommandeB
            // 
            this->CommandeB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->CommandeB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->CommandeB->Location = System::Drawing::Point(1, 301);
            this->CommandeB->Margin = System::Windows::Forms::Padding(1);
            this->CommandeB->Name = L"CommandeB";
            this->CommandeB->Size = System::Drawing::Size(167, 148);
            this->CommandeB->TabIndex = 2;
            this->CommandeB->Text = L"Commande";
            this->CommandeB->UseVisualStyleBackColor = true;
            this->CommandeB->Click += gcnew System::EventHandler(this, &MyForm::CommandeB_Click);
            // 
            // StockB
            // 
            this->StockB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StockB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StockB->Location = System::Drawing::Point(1, 451);
            this->StockB->Margin = System::Windows::Forms::Padding(1);
            this->StockB->Name = L"StockB";
            this->StockB->Size = System::Drawing::Size(167, 148);
            this->StockB->TabIndex = 3;
            this->StockB->Text = L"Stocks";
            this->StockB->UseVisualStyleBackColor = true;
            this->StockB->Click += gcnew System::EventHandler(this, &MyForm::StockB_Click);
            // 
            // StatsB
            // 
            this->StatsB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StatsB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StatsB->Location = System::Drawing::Point(1, 601);
            this->StatsB->Margin = System::Windows::Forms::Padding(1);
            this->StatsB->Name = L"StatsB";
            this->StatsB->Size = System::Drawing::Size(167, 152);
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
            this->TabMod->Location = System::Drawing::Point(172, 1);
            this->TabMod->Margin = System::Windows::Forms::Padding(1);
            this->TabMod->Multiline = true;
            this->TabMod->Name = L"TabMod";
            this->TabMod->SelectedIndex = 0;
            this->TabMod->Size = System::Drawing::Size(1537, 754);
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
            this->tabFirst->Size = System::Drawing::Size(1529, 726);
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
            this->FirtstTable->Size = System::Drawing::Size(1529, 726);
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
            this->LabelRight->Location = System::Drawing::Point(1362, 702);
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
            this->Firstlabel->Size = System::Drawing::Size(1523, 181);
            this->Firstlabel->TabIndex = 0;
            this->Firstlabel->Text = L"Logiciel de Gestion de l\'entreprise Elèct-tonic";
            this->Firstlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // FirstPicture
            // 
            this->FirstPicture->Dock = System::Windows::Forms::DockStyle::Fill;
            this->FirstPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FirstPicture.Image")));
            this->FirstPicture->Location = System::Drawing::Point(3, 183);
            this->FirstPicture->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->FirstPicture->Name = L"FirstPicture";
            this->FirstPicture->Size = System::Drawing::Size(1523, 359);
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
            this->tabEmployé->Size = System::Drawing::Size(1529, 726);
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
            this->tableLayoutPanel34->Size = System::Drawing::Size(1529, 726);
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
            this->tableLayoutPanel6->Size = System::Drawing::Size(764, 726);
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
            this->label4->Size = System::Drawing::Size(758, 36);
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
            this->tableLayoutPanel19->Location = System::Drawing::Point(3, 582);
            this->tableLayoutPanel19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
            this->tableLayoutPanel19->RowCount = 1;
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                142)));
            this->tableLayoutPanel19->Size = System::Drawing::Size(758, 142);
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
            this->EmployéRecherche->Size = System::Drawing::Size(379, 142);
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
            this->tableLayoutPanel20->Location = System::Drawing::Point(379, 0);
            this->tableLayoutPanel20->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel20->Name = L"tableLayoutPanel20";
            this->tableLayoutPanel20->RowCount = 3;
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel20->Size = System::Drawing::Size(379, 142);
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
            this->EmployéSuppr->Location = System::Drawing::Point(0, 94);
            this->EmployéSuppr->Margin = System::Windows::Forms::Padding(0);
            this->EmployéSuppr->Name = L"EmployéSuppr";
            this->EmployéSuppr->Size = System::Drawing::Size(379, 48);
            this->EmployéSuppr->TabIndex = 3;
            this->EmployéSuppr->Text = L"Supprimer";
            this->EmployéSuppr->UseVisualStyleBackColor = false;
            this->EmployéSuppr->Click += gcnew System::EventHandler(this, &MyForm::EmployéSuppr_Click);
            // 
            // EmployéModif
            // 
            this->EmployéModif->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->EmployéModif->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployéModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->EmployéModif->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployéModif->Location = System::Drawing::Point(0, 47);
            this->EmployéModif->Margin = System::Windows::Forms::Padding(0);
            this->EmployéModif->Name = L"EmployéModif";
            this->EmployéModif->Size = System::Drawing::Size(379, 47);
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
            this->EmployéAjout->Size = System::Drawing::Size(379, 47);
            this->EmployéAjout->TabIndex = 0;
            this->EmployéAjout->Text = L"Ajouter";
            this->EmployéAjout->UseVisualStyleBackColor = false;
            this->EmployéAjout->Click += gcnew System::EventHandler(this, &MyForm::EmployéAjout_Click);
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
            this->tableLayoutPanel21->Location = System::Drawing::Point(3, 38);
            this->tableLayoutPanel21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel21->Name = L"tableLayoutPanel21";
            this->tableLayoutPanel21->RowCount = 4;
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel21->Size = System::Drawing::Size(758, 250);
            this->tableLayoutPanel21->TabIndex = 7;
            // 
            // tableLayoutPanel32
            // 
            this->tableLayoutPanel32->ColumnCount = 2;
            this->tableLayoutPanel32->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel32->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel32->Controls->Add(this->label21, 0, 0);
            this->tableLayoutPanel32->Controls->Add(this->EmployeeSuperiorId, 1, 1);
            this->tableLayoutPanel32->Controls->Add(this->EmployéId, 0, 1);
            this->tableLayoutPanel32->Controls->Add(this->label37, 1, 0);
            this->tableLayoutPanel32->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel32->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel32->Name = L"tableLayoutPanel32";
            this->tableLayoutPanel32->RowCount = 2;
            this->tableLayoutPanel32->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel32->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel32->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel32->Size = System::Drawing::Size(752, 58);
            this->tableLayoutPanel32->TabIndex = 9;
            // 
            // label21
            // 
            this->label21->AllowDrop = true;
            this->label21->AutoSize = true;
            this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label21->Location = System::Drawing::Point(3, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(370, 29);
            this->label21->TabIndex = 6;
            this->label21->Text = L"Identifiant";
            this->label21->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // EmployeeSuperiorId
            // 
            this->EmployeeSuperiorId->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployeeSuperiorId->Location = System::Drawing::Point(379, 31);
            this->EmployeeSuperiorId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployeeSuperiorId->Name = L"EmployeeSuperiorId";
            this->EmployeeSuperiorId->Size = System::Drawing::Size(247, 24);
            this->EmployeeSuperiorId->TabIndex = 7;
            // 
            // EmployéId
            // 
            this->EmployéId->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéId->Location = System::Drawing::Point(3, 31);
            this->EmployéId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéId->Name = L"EmployéId";
            this->EmployéId->Size = System::Drawing::Size(247, 24);
            this->EmployéId->TabIndex = 5;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Location = System::Drawing::Point(379, 0);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(250, 21);
            this->label37->TabIndex = 8;
            this->label37->Text = L"Identifiant du Supérieur";
            // 
            // tableLayoutPanel22
            // 
            this->tableLayoutPanel22->ColumnCount = 2;
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel22->Controls->Add(this->label12, 0, 0);
            this->tableLayoutPanel22->Controls->Add(this->EmployeeHire, 1, 1);
            this->tableLayoutPanel22->Controls->Add(this->EmployeeBirth, 0, 1);
            this->tableLayoutPanel22->Controls->Add(this->label39, 1, 0);
            this->tableLayoutPanel22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel22->Location = System::Drawing::Point(3, 188);
            this->tableLayoutPanel22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel22->Name = L"tableLayoutPanel22";
            this->tableLayoutPanel22->RowCount = 2;
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel22->Size = System::Drawing::Size(752, 60);
            this->tableLayoutPanel22->TabIndex = 8;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Location = System::Drawing::Point(3, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(370, 30);
            this->label12->TabIndex = 6;
            this->label12->Text = L"Date De Naissance";
            this->label12->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // EmployeeHire
            // 
            this->EmployeeHire->CustomFormat = L"yyyy-MM-dd";
            this->EmployeeHire->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->EmployeeHire->Location = System::Drawing::Point(379, 32);
            this->EmployeeHire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployeeHire->Name = L"EmployeeHire";
            this->EmployeeHire->Size = System::Drawing::Size(247, 29);
            this->EmployeeHire->TabIndex = 9;
            this->EmployeeHire->Value = System::DateTime(2022, 12, 5, 17, 37, 37, 0);
            // 
            // EmployeeBirth
            // 
            this->EmployeeBirth->CustomFormat = L"yyyy-MM-dd";
            this->EmployeeBirth->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->EmployeeBirth->Location = System::Drawing::Point(3, 32);
            this->EmployeeBirth->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployeeBirth->Name = L"EmployeeBirth";
            this->EmployeeBirth->Size = System::Drawing::Size(247, 29);
            this->EmployeeBirth->TabIndex = 8;
            this->EmployeeBirth->Value = System::DateTime(2022, 12, 5, 17, 37, 37, 0);
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label39->Location = System::Drawing::Point(379, 0);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(370, 30);
            this->label39->TabIndex = 10;
            this->label39->Text = L"Date d\'Embauche";
            // 
            // tableLayoutPanel23
            // 
            this->tableLayoutPanel23->ColumnCount = 1;
            this->tableLayoutPanel23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel23->Controls->Add(this->EmployéFirstName, 0, 1);
            this->tableLayoutPanel23->Controls->Add(this->label13, 0, 0);
            this->tableLayoutPanel23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel23->Location = System::Drawing::Point(3, 126);
            this->tableLayoutPanel23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel23->Name = L"tableLayoutPanel23";
            this->tableLayoutPanel23->RowCount = 2;
            this->tableLayoutPanel23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel23->Size = System::Drawing::Size(752, 58);
            this->tableLayoutPanel23->TabIndex = 6;
            // 
            // EmployéFirstName
            // 
            this->EmployéFirstName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéFirstName->Location = System::Drawing::Point(3, 31);
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
            this->label13->Size = System::Drawing::Size(746, 29);
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
            this->tableLayoutPanel24->Location = System::Drawing::Point(3, 64);
            this->tableLayoutPanel24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel24->Name = L"tableLayoutPanel24";
            this->tableLayoutPanel24->RowCount = 2;
            this->tableLayoutPanel24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel24->Size = System::Drawing::Size(752, 58);
            this->tableLayoutPanel24->TabIndex = 7;
            // 
            // EmployéLastName
            // 
            this->EmployéLastName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéLastName->Location = System::Drawing::Point(3, 31);
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
            this->label14->Size = System::Drawing::Size(746, 29);
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
            this->tableLayoutPanel25->Location = System::Drawing::Point(3, 292);
            this->tableLayoutPanel25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel25->Name = L"tableLayoutPanel25";
            this->tableLayoutPanel25->RowCount = 3;
            this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 66.66666F)));
            this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
            this->tableLayoutPanel25->Size = System::Drawing::Size(758, 286);
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
            this->tableLayoutPanel26->Location = System::Drawing::Point(3, 33);
            this->tableLayoutPanel26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel26->Name = L"tableLayoutPanel26";
            this->tableLayoutPanel26->RowCount = 3;
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel26->Size = System::Drawing::Size(752, 186);
            this->tableLayoutPanel26->TabIndex = 13;
            // 
            // tableLayoutPanel27
            // 
            this->tableLayoutPanel27->ColumnCount = 2;
            this->tableLayoutPanel27->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel27->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel27->Controls->Add(this->label15, 0, 0);
            this->tableLayoutPanel27->Controls->Add(this->EmployeePostCode, 1, 1);
            this->tableLayoutPanel27->Controls->Add(this->EmployéAdresCity, 0, 1);
            this->tableLayoutPanel27->Controls->Add(this->label38, 1, 0);
            this->tableLayoutPanel27->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel27->Location = System::Drawing::Point(3, 126);
            this->tableLayoutPanel27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel27->Name = L"tableLayoutPanel27";
            this->tableLayoutPanel27->RowCount = 2;
            this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel27->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel27->TabIndex = 11;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Location = System::Drawing::Point(3, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(367, 29);
            this->label15->TabIndex = 6;
            this->label15->Text = L"Ville";
            this->label15->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // EmployeePostCode
            // 
            this->EmployeePostCode->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployeePostCode->Location = System::Drawing::Point(376, 31);
            this->EmployeePostCode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployeePostCode->Name = L"EmployeePostCode";
            this->EmployeePostCode->Size = System::Drawing::Size(239, 24);
            this->EmployeePostCode->TabIndex = 7;
            // 
            // EmployéAdresCity
            // 
            this->EmployéAdresCity->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdresCity->Location = System::Drawing::Point(3, 31);
            this->EmployéAdresCity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployéAdresCity->Name = L"EmployéAdresCity";
            this->EmployéAdresCity->Size = System::Drawing::Size(239, 24);
            this->EmployéAdresCity->TabIndex = 5;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Location = System::Drawing::Point(376, 0);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(122, 21);
            this->label38->TabIndex = 8;
            this->label38->Text = L"Code Postal";
            // 
            // tableLayoutPanel28
            // 
            this->tableLayoutPanel28->ColumnCount = 1;
            this->tableLayoutPanel28->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel28->Controls->Add(this->EmployéAdressStreet, 0, 1);
            this->tableLayoutPanel28->Controls->Add(this->label16, 0, 0);
            this->tableLayoutPanel28->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel28->Location = System::Drawing::Point(3, 64);
            this->tableLayoutPanel28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel28->Name = L"tableLayoutPanel28";
            this->tableLayoutPanel28->RowCount = 2;
            this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel28->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel28->TabIndex = 10;
            // 
            // EmployéAdressStreet
            // 
            this->EmployéAdressStreet->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdressStreet->Location = System::Drawing::Point(3, 31);
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
            this->label16->Size = System::Drawing::Size(740, 29);
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
            this->tableLayoutPanel29->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel29->TabIndex = 9;
            // 
            // EmployéAdressNumber
            // 
            this->EmployéAdressNumber->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdressNumber->Location = System::Drawing::Point(3, 31);
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
            this->label17->Size = System::Drawing::Size(740, 29);
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
            this->tableLayoutPanel30->Location = System::Drawing::Point(3, 223);
            this->tableLayoutPanel30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel30->Name = L"tableLayoutPanel30";
            this->tableLayoutPanel30->RowCount = 2;
            this->tableLayoutPanel30->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel30->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel30->Size = System::Drawing::Size(752, 61);
            this->tableLayoutPanel30->TabIndex = 12;
            // 
            // EmployéAdressInfo
            // 
            this->EmployéAdressInfo->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->EmployéAdressInfo->Location = System::Drawing::Point(3, 32);
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
            this->label18->Size = System::Drawing::Size(746, 30);
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
            this->EmployeData->Location = System::Drawing::Point(767, 2);
            this->EmployeData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->EmployeData->Name = L"EmployeData";
            this->EmployeData->RowHeadersWidth = 62;
            this->EmployeData->RowTemplate->Height = 28;
            this->EmployeData->Size = System::Drawing::Size(759, 722);
            this->EmployeData->TabIndex = 6;
            // 
            // tabCommande
            // 
            this->tabCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabCommande->Controls->Add(this->tableLayoutPanel36);
            this->tabCommande->Location = System::Drawing::Point(4, 24);
            this->tabCommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabCommande->Name = L"tabCommande";
            this->tabCommande->Size = System::Drawing::Size(1529, 726);
            this->tabCommande->TabIndex = 3;
            this->tabCommande->Text = L"Stocks";
            // 
            // tableLayoutPanel36
            // 
            this->tableLayoutPanel36->ColumnCount = 2;
            this->tableLayoutPanel36->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel36->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel36->Controls->Add(this->tableLayoutPanel7, 0, 0);
            this->tableLayoutPanel36->Controls->Add(this->CommandData, 1, 0);
            this->tableLayoutPanel36->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel36->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel36->Name = L"tableLayoutPanel36";
            this->tableLayoutPanel36->RowCount = 1;
            this->tableLayoutPanel36->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel36->Size = System::Drawing::Size(1529, 726);
            this->tableLayoutPanel36->TabIndex = 4;
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->ColumnCount = 1;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel7->Controls->Add(this->label9, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel8, 0, 3);
            this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel40, 0, 1);
            this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel45, 0, 2);
            this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel7->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 4;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(764, 726);
            this->tableLayoutPanel7->TabIndex = 6;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label9->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(3, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(758, 36);
            this->label9->TabIndex = 2;
            this->label9->Text = L"Commande";
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click_2);
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->ColumnCount = 2;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel8->Controls->Add(this->button1, 0, 0);
            this->tableLayoutPanel8->Controls->Add(this->tableLayoutPanel39, 1, 0);
            this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel8->Location = System::Drawing::Point(3, 582);
            this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 1;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 142)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(758, 142);
            this->tableLayoutPanel8->TabIndex = 4;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(0, 0);
            this->button1->Margin = System::Windows::Forms::Padding(0);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(379, 142);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Rechercher";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanel39
            // 
            this->tableLayoutPanel39->ColumnCount = 1;
            this->tableLayoutPanel39->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel39->Controls->Add(this->button2, 0, 2);
            this->tableLayoutPanel39->Controls->Add(this->button3, 0, 1);
            this->tableLayoutPanel39->Controls->Add(this->OrderAdd, 0, 0);
            this->tableLayoutPanel39->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel39->Location = System::Drawing::Point(379, 0);
            this->tableLayoutPanel39->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel39->Name = L"tableLayoutPanel39";
            this->tableLayoutPanel39->RowCount = 3;
            this->tableLayoutPanel39->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel39->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel39->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel39->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel39->Size = System::Drawing::Size(379, 142);
            this->tableLayoutPanel39->TabIndex = 3;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(0, 94);
            this->button2->Margin = System::Windows::Forms::Padding(0);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(379, 48);
            this->button2->TabIndex = 3;
            this->button2->Text = L"Supprimer";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(0, 47);
            this->button3->Margin = System::Windows::Forms::Padding(0);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(379, 47);
            this->button3->TabIndex = 1;
            this->button3->Text = L"Modifier";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // OrderAdd
            // 
            this->OrderAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)));
            this->OrderAdd->Dock = System::Windows::Forms::DockStyle::Fill;
            this->OrderAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->OrderAdd->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->OrderAdd->Location = System::Drawing::Point(0, 0);
            this->OrderAdd->Margin = System::Windows::Forms::Padding(0);
            this->OrderAdd->Name = L"OrderAdd";
            this->OrderAdd->Size = System::Drawing::Size(379, 47);
            this->OrderAdd->TabIndex = 0;
            this->OrderAdd->Text = L"Ajouter";
            this->OrderAdd->UseVisualStyleBackColor = false;
            this->OrderAdd->Click += gcnew System::EventHandler(this, &MyForm::OrderAdd_Click);
            // 
            // tableLayoutPanel40
            // 
            this->tableLayoutPanel40->ColumnCount = 1;
            this->tableLayoutPanel40->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel40->Controls->Add(this->tableLayoutPanel41, 0, 1);
            this->tableLayoutPanel40->Controls->Add(this->tableLayoutPanel42, 0, 3);
            this->tableLayoutPanel40->Controls->Add(this->tableLayoutPanel43, 0, 2);
            this->tableLayoutPanel40->Controls->Add(this->tableLayoutPanel44, 0, 0);
            this->tableLayoutPanel40->Controls->Add(this->tableLayoutPanel51, 0, 4);
            this->tableLayoutPanel40->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel40->Location = System::Drawing::Point(3, 38);
            this->tableLayoutPanel40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel40->Name = L"tableLayoutPanel40";
            this->tableLayoutPanel40->RowCount = 5;
            this->tableLayoutPanel40->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.83333F)));
            this->tableLayoutPanel40->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.83333F)));
            this->tableLayoutPanel40->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.83333F)));
            this->tableLayoutPanel40->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.83333F)));
            this->tableLayoutPanel40->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel40->Size = System::Drawing::Size(758, 250);
            this->tableLayoutPanel40->TabIndex = 7;
            this->tableLayoutPanel40->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel40_Paint);
            // 
            // tableLayoutPanel41
            // 
            this->tableLayoutPanel41->ColumnCount = 1;
            this->tableLayoutPanel41->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel41->Controls->Add(this->OrderIssueDate, 0, 1);
            this->tableLayoutPanel41->Controls->Add(this->label22, 0, 0);
            this->tableLayoutPanel41->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel41->Location = System::Drawing::Point(3, 54);
            this->tableLayoutPanel41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel41->Name = L"tableLayoutPanel41";
            this->tableLayoutPanel41->RowCount = 2;
            this->tableLayoutPanel41->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel41->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel41->Size = System::Drawing::Size(752, 48);
            this->tableLayoutPanel41->TabIndex = 8;
            // 
            // OrderIssueDate
            // 
            this->OrderIssueDate->CustomFormat = L"yyyy-MM-dd";
            this->OrderIssueDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->OrderIssueDate->Location = System::Drawing::Point(3, 26);
            this->OrderIssueDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->OrderIssueDate->Name = L"OrderIssueDate";
            this->OrderIssueDate->Size = System::Drawing::Size(247, 29);
            this->OrderIssueDate->TabIndex = 9;
            this->OrderIssueDate->Value = System::DateTime(2022, 12, 5, 17, 37, 37, 0);
            // 
            // label22
            // 
            this->label22->AllowDrop = true;
            this->label22->AutoSize = true;
            this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label22->Location = System::Drawing::Point(3, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(746, 24);
            this->label22->TabIndex = 6;
            this->label22->Text = L"Date création commande";
            this->label22->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel42
            // 
            this->tableLayoutPanel42->ColumnCount = 1;
            this->tableLayoutPanel42->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel42->Controls->Add(this->label23, 0, 0);
            this->tableLayoutPanel42->Controls->Add(this->Order_discount, 0, 1);
            this->tableLayoutPanel42->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel42->Location = System::Drawing::Point(3, 158);
            this->tableLayoutPanel42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel42->Name = L"tableLayoutPanel42";
            this->tableLayoutPanel42->RowCount = 2;
            this->tableLayoutPanel42->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel42->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel42->Size = System::Drawing::Size(752, 48);
            this->tableLayoutPanel42->TabIndex = 8;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label23->Location = System::Drawing::Point(3, 0);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(746, 24);
            this->label23->TabIndex = 6;
            this->label23->Text = L"Remise";
            this->label23->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // Order_discount
            // 
            this->Order_discount->Location = System::Drawing::Point(3, 26);
            this->Order_discount->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_discount->Name = L"Order_discount";
            this->Order_discount->Size = System::Drawing::Size(450, 29);
            this->Order_discount->TabIndex = 7;
            // 
            // tableLayoutPanel43
            // 
            this->tableLayoutPanel43->ColumnCount = 1;
            this->tableLayoutPanel43->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel43->Controls->Add(this->OrderDeliveryDate, 0, 1);
            this->tableLayoutPanel43->Controls->Add(this->label24, 0, 0);
            this->tableLayoutPanel43->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel43->Location = System::Drawing::Point(3, 106);
            this->tableLayoutPanel43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel43->Name = L"tableLayoutPanel43";
            this->tableLayoutPanel43->RowCount = 2;
            this->tableLayoutPanel43->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel43->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel43->Size = System::Drawing::Size(752, 48);
            this->tableLayoutPanel43->TabIndex = 6;
            // 
            // OrderDeliveryDate
            // 
            this->OrderDeliveryDate->CustomFormat = L"yyyy-MM-dd";
            this->OrderDeliveryDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->OrderDeliveryDate->Location = System::Drawing::Point(3, 26);
            this->OrderDeliveryDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->OrderDeliveryDate->Name = L"OrderDeliveryDate";
            this->OrderDeliveryDate->Size = System::Drawing::Size(247, 29);
            this->OrderDeliveryDate->TabIndex = 9;
            this->OrderDeliveryDate->Value = System::DateTime(2022, 12, 5, 17, 37, 37, 0);
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label24->Location = System::Drawing::Point(3, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(746, 24);
            this->label24->TabIndex = 6;
            this->label24->Text = L"Date de livraison prévue";
            this->label24->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel44
            // 
            this->tableLayoutPanel44->ColumnCount = 1;
            this->tableLayoutPanel44->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel44->Controls->Add(this->label25, 0, 0);
            this->tableLayoutPanel44->Controls->Add(this->Order_ID, 0, 1);
            this->tableLayoutPanel44->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel44->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel44->Name = L"tableLayoutPanel44";
            this->tableLayoutPanel44->RowCount = 2;
            this->tableLayoutPanel44->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel44->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel44->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel44->Size = System::Drawing::Size(752, 48);
            this->tableLayoutPanel44->TabIndex = 7;
            // 
            // label25
            // 
            this->label25->AllowDrop = true;
            this->label25->AutoSize = true;
            this->label25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label25->Location = System::Drawing::Point(3, 0);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(746, 24);
            this->label25->TabIndex = 6;
            this->label25->Text = L"Identifiant";
            this->label25->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // Order_ID
            // 
            this->Order_ID->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Order_ID->Location = System::Drawing::Point(3, 26);
            this->Order_ID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_ID->Name = L"Order_ID";
            this->Order_ID->Size = System::Drawing::Size(450, 24);
            this->Order_ID->TabIndex = 5;
            // 
            // tableLayoutPanel51
            // 
            this->tableLayoutPanel51->ColumnCount = 1;
            this->tableLayoutPanel51->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel51->Controls->Add(this->Order_IDClient, 0, 1);
            this->tableLayoutPanel51->Controls->Add(this->label32, 0, 0);
            this->tableLayoutPanel51->Location = System::Drawing::Point(3, 210);
            this->tableLayoutPanel51->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel51->Name = L"tableLayoutPanel51";
            this->tableLayoutPanel51->RowCount = 2;
            this->tableLayoutPanel51->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel51->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel51->Size = System::Drawing::Size(455, 35);
            this->tableLayoutPanel51->TabIndex = 9;
            // 
            // Order_IDClient
            // 
            this->Order_IDClient->Location = System::Drawing::Point(3, 19);
            this->Order_IDClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_IDClient->Name = L"Order_IDClient";
            this->Order_IDClient->Size = System::Drawing::Size(449, 29);
            this->Order_IDClient->TabIndex = 0;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Location = System::Drawing::Point(3, 0);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(98, 17);
            this->label32->TabIndex = 1;
            this->label32->Text = L"ID Client";
            // 
            // tableLayoutPanel45
            // 
            this->tableLayoutPanel45->ColumnCount = 1;
            this->tableLayoutPanel45->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel45->Controls->Add(this->tableLayoutPanel46, 0, 1);
            this->tableLayoutPanel45->Controls->Add(this->tableLayoutPanel50, 0, 2);
            this->tableLayoutPanel45->Controls->Add(this->label31, 0, 0);
            this->tableLayoutPanel45->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel45->Location = System::Drawing::Point(3, 292);
            this->tableLayoutPanel45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel45->Name = L"tableLayoutPanel45";
            this->tableLayoutPanel45->RowCount = 3;
            this->tableLayoutPanel45->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->tableLayoutPanel45->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 66.66666F)));
            this->tableLayoutPanel45->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
            this->tableLayoutPanel45->Size = System::Drawing::Size(758, 286);
            this->tableLayoutPanel45->TabIndex = 8;
            // 
            // tableLayoutPanel46
            // 
            this->tableLayoutPanel46->ColumnCount = 1;
            this->tableLayoutPanel46->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel46->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                18)));
            this->tableLayoutPanel46->Controls->Add(this->tableLayoutPanel47, 0, 1);
            this->tableLayoutPanel46->Controls->Add(this->tableLayoutPanel48, 0, 0);
            this->tableLayoutPanel46->Controls->Add(this->tableLayoutPanel49, 0, 2);
            this->tableLayoutPanel46->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel46->Location = System::Drawing::Point(3, 33);
            this->tableLayoutPanel46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel46->Name = L"tableLayoutPanel46";
            this->tableLayoutPanel46->RowCount = 3;
            this->tableLayoutPanel46->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel46->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel46->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel46->Size = System::Drawing::Size(752, 186);
            this->tableLayoutPanel46->TabIndex = 13;
            // 
            // tableLayoutPanel47
            // 
            this->tableLayoutPanel47->ColumnCount = 1;
            this->tableLayoutPanel47->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel47->Controls->Add(this->Order_Rue, 0, 1);
            this->tableLayoutPanel47->Controls->Add(this->label26, 0, 0);
            this->tableLayoutPanel47->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel47->Location = System::Drawing::Point(3, 64);
            this->tableLayoutPanel47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel47->Name = L"tableLayoutPanel47";
            this->tableLayoutPanel47->RowCount = 3;
            this->tableLayoutPanel47->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel47->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel47->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel47->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel47->TabIndex = 10;
            // 
            // Order_Rue
            // 
            this->Order_Rue->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->Order_Rue->Location = System::Drawing::Point(3, 23);
            this->Order_Rue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_Rue->Name = L"Order_Rue";
            this->Order_Rue->Size = System::Drawing::Size(445, 24);
            this->Order_Rue->TabIndex = 5;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label26->Location = System::Drawing::Point(3, 0);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(740, 21);
            this->label26->TabIndex = 6;
            this->label26->Text = L"Rue";
            this->label26->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel48
            // 
            this->tableLayoutPanel48->ColumnCount = 1;
            this->tableLayoutPanel48->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel48->Controls->Add(this->Order_HouseNum, 0, 1);
            this->tableLayoutPanel48->Controls->Add(this->label27, 0, 0);
            this->tableLayoutPanel48->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel48->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel48->Name = L"tableLayoutPanel48";
            this->tableLayoutPanel48->RowCount = 2;
            this->tableLayoutPanel48->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel48->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel48->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel48->TabIndex = 9;
            // 
            // Order_HouseNum
            // 
            this->Order_HouseNum->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->Order_HouseNum->Location = System::Drawing::Point(3, 31);
            this->Order_HouseNum->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_HouseNum->Name = L"Order_HouseNum";
            this->Order_HouseNum->Size = System::Drawing::Size(445, 24);
            this->Order_HouseNum->TabIndex = 5;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label27->Location = System::Drawing::Point(3, 0);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(740, 29);
            this->label27->TabIndex = 6;
            this->label27->Text = L"Numéro de Maison";
            this->label27->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel49
            // 
            this->tableLayoutPanel49->ColumnCount = 2;
            this->tableLayoutPanel49->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel49->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel49->Controls->Add(this->label28, 1, 0);
            this->tableLayoutPanel49->Controls->Add(this->label29, 0, 0);
            this->tableLayoutPanel49->Controls->Add(this->Order_City, 0, 1);
            this->tableLayoutPanel49->Controls->Add(this->Order_Code_Postal, 1, 1);
            this->tableLayoutPanel49->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel49->Location = System::Drawing::Point(3, 126);
            this->tableLayoutPanel49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel49->Name = L"tableLayoutPanel49";
            this->tableLayoutPanel49->RowCount = 2;
            this->tableLayoutPanel49->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel49->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel49->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel49->TabIndex = 11;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label28->Location = System::Drawing::Point(376, 0);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(367, 29);
            this->label28->TabIndex = 7;
            this->label28->Text = L"Code Postal";
            this->label28->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label29->Location = System::Drawing::Point(3, 0);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(367, 29);
            this->label29->TabIndex = 7;
            this->label29->Text = L"Ville";
            this->label29->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // Order_City
            // 
            this->Order_City->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->Order_City->Location = System::Drawing::Point(3, 31);
            this->Order_City->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_City->Name = L"Order_City";
            this->Order_City->Size = System::Drawing::Size(192, 24);
            this->Order_City->TabIndex = 7;
            // 
            // Order_Code_Postal
            // 
            this->Order_Code_Postal->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->Order_Code_Postal->Location = System::Drawing::Point(376, 31);
            this->Order_Code_Postal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_Code_Postal->Name = L"Order_Code_Postal";
            this->Order_Code_Postal->Size = System::Drawing::Size(192, 24);
            this->Order_Code_Postal->TabIndex = 8;
            // 
            // tableLayoutPanel50
            // 
            this->tableLayoutPanel50->ColumnCount = 1;
            this->tableLayoutPanel50->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel50->Controls->Add(this->Order_info_supp, 0, 1);
            this->tableLayoutPanel50->Controls->Add(this->label30, 0, 0);
            this->tableLayoutPanel50->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel50->Location = System::Drawing::Point(3, 223);
            this->tableLayoutPanel50->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel50->Name = L"tableLayoutPanel50";
            this->tableLayoutPanel50->RowCount = 2;
            this->tableLayoutPanel50->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel50->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel50->Size = System::Drawing::Size(752, 61);
            this->tableLayoutPanel50->TabIndex = 12;
            // 
            // Order_info_supp
            // 
            this->Order_info_supp->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->Order_info_supp->Location = System::Drawing::Point(3, 32);
            this->Order_info_supp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Order_info_supp->Name = L"Order_info_supp";
            this->Order_info_supp->Size = System::Drawing::Size(394, 24);
            this->Order_info_supp->TabIndex = 5;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label30->Location = System::Drawing::Point(3, 0);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(746, 30);
            this->label30->TabIndex = 6;
            this->label30->Text = L"Information complémentaire";
            this->label30->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Location = System::Drawing::Point(3, 0);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(86, 21);
            this->label31->TabIndex = 14;
            this->label31->Text = L"Adresse";
            // 
            // CommandData
            // 
            this->CommandData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->CommandData->Dock = System::Windows::Forms::DockStyle::Fill;
            this->CommandData->Location = System::Drawing::Point(767, 2);
            this->CommandData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->CommandData->Name = L"CommandData";
            this->CommandData->RowHeadersWidth = 62;
            this->CommandData->RowTemplate->Height = 28;
            this->CommandData->Size = System::Drawing::Size(759, 722);
            this->CommandData->TabIndex = 5;
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
            this->tabStocks->Size = System::Drawing::Size(1529, 726);
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
            this->tableLayoutPanel35->Controls->Add(this->StockData, 1, 0);
            this->tableLayoutPanel35->Controls->Add(this->tableLayoutPanel2, 0, 0);
            this->tableLayoutPanel35->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel35->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel35->Name = L"tableLayoutPanel35";
            this->tableLayoutPanel35->RowCount = 1;
            this->tableLayoutPanel35->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel35->Size = System::Drawing::Size(1529, 726);
            this->tableLayoutPanel35->TabIndex = 3;
            // 
            // StockData
            // 
            this->StockData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->StockData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->StockData->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StockData->Location = System::Drawing::Point(767, 2);
            this->StockData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->StockData->Name = L"StockData";
            this->StockData->RowHeadersWidth = 62;
            this->StockData->RowTemplate->Height = 28;
            this->StockData->Size = System::Drawing::Size(759, 722);
            this->StockData->TabIndex = 4;
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
            this->tableLayoutPanel2->Size = System::Drawing::Size(758, 722);
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
            this->StockLabel->Size = System::Drawing::Size(752, 36);
            this->StockLabel->TabIndex = 2;
            this->StockLabel->Text = L"Stocks";
            // 
            // tabStats
            // 
            this->tabStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabStats->Controls->Add(this->tableLayoutPanel37);
            this->tabStats->Location = System::Drawing::Point(4, 24);
            this->tabStats->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabStats->Name = L"tabStats";
            this->tabStats->Size = System::Drawing::Size(1529, 726);
            this->tabStats->TabIndex = 5;
            this->tabStats->Text = L"tabPage1";
            // 
            // tableLayoutPanel37
            // 
            this->tableLayoutPanel37->ColumnCount = 2;
            this->tableLayoutPanel37->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel37->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel37->Controls->Add(this->tableLayoutPanel3, 0, 0);
            this->tableLayoutPanel37->Controls->Add(this->dataGridView1, 1, 0);
            this->tableLayoutPanel37->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel37->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel37->Name = L"tableLayoutPanel37";
            this->tableLayoutPanel37->RowCount = 1;
            this->tableLayoutPanel37->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel37->Size = System::Drawing::Size(1529, 726);
            this->tableLayoutPanel37->TabIndex = 4;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel53, 0, 1);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 4;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.849315F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.04109F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.0137F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 41.09589F)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(764, 726);
            this->tableLayoutPanel3->TabIndex = 6;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(3, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(758, 49);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Statistique";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // tableLayoutPanel53
            // 
            this->tableLayoutPanel53->ColumnCount = 1;
            this->tableLayoutPanel53->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel53->Controls->Add(this->tableLayoutPanel54, 0, 1);
            this->tableLayoutPanel53->Controls->Add(this->tableLayoutPanel55, 0, 3);
            this->tableLayoutPanel53->Controls->Add(this->tableLayoutPanel56, 0, 2);
            this->tableLayoutPanel53->Controls->Add(this->tableLayoutPanel57, 0, 0);
            this->tableLayoutPanel53->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel53->Location = System::Drawing::Point(3, 51);
            this->tableLayoutPanel53->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel53->Name = L"tableLayoutPanel53";
            this->tableLayoutPanel53->RowCount = 4;
            this->tableLayoutPanel53->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel53->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel53->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel53->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel53->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel53->Size = System::Drawing::Size(758, 279);
            this->tableLayoutPanel53->TabIndex = 7;
            // 
            // tableLayoutPanel54
            // 
            this->tableLayoutPanel54->ColumnCount = 1;
            this->tableLayoutPanel54->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel54->Controls->Add(this->Stat_Month, 0, 1);
            this->tableLayoutPanel54->Controls->Add(this->label33, 0, 0);
            this->tableLayoutPanel54->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel54->Location = System::Drawing::Point(3, 71);
            this->tableLayoutPanel54->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel54->Name = L"tableLayoutPanel54";
            this->tableLayoutPanel54->RowCount = 2;
            this->tableLayoutPanel54->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel54->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel54->Size = System::Drawing::Size(752, 65);
            this->tableLayoutPanel54->TabIndex = 8;
            // 
            // Stat_Month
            // 
            this->Stat_Month->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->Stat_Month->Location = System::Drawing::Point(3, 34);
            this->Stat_Month->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Stat_Month->Name = L"Stat_Month";
            this->Stat_Month->Size = System::Drawing::Size(247, 24);
            this->Stat_Month->TabIndex = 5;
            // 
            // label33
            // 
            this->label33->AllowDrop = true;
            this->label33->AutoSize = true;
            this->label33->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label33->Location = System::Drawing::Point(3, 0);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(746, 32);
            this->label33->TabIndex = 6;
            this->label33->Text = L"Mois";
            this->label33->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel55
            // 
            this->tableLayoutPanel55->ColumnCount = 1;
            this->tableLayoutPanel55->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel55->Controls->Add(this->label34, 0, 0);
            this->tableLayoutPanel55->Controls->Add(this->Stat_MargeCommerciale, 0, 1);
            this->tableLayoutPanel55->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel55->Location = System::Drawing::Point(3, 209);
            this->tableLayoutPanel55->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel55->Name = L"tableLayoutPanel55";
            this->tableLayoutPanel55->RowCount = 2;
            this->tableLayoutPanel55->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel55->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel55->Size = System::Drawing::Size(752, 68);
            this->tableLayoutPanel55->TabIndex = 8;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label34->Location = System::Drawing::Point(3, 0);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(746, 34);
            this->label34->TabIndex = 6;
            this->label34->Text = L"MargeCommerciale";
            this->label34->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // Stat_MargeCommerciale
            // 
            this->Stat_MargeCommerciale->Location = System::Drawing::Point(3, 36);
            this->Stat_MargeCommerciale->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Stat_MargeCommerciale->Name = L"Stat_MargeCommerciale";
            this->Stat_MargeCommerciale->Size = System::Drawing::Size(450, 29);
            this->Stat_MargeCommerciale->TabIndex = 7;
            // 
            // tableLayoutPanel56
            // 
            this->tableLayoutPanel56->ColumnCount = 1;
            this->tableLayoutPanel56->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel56->Controls->Add(this->Stat_TVA, 0, 1);
            this->tableLayoutPanel56->Controls->Add(this->label35, 0, 0);
            this->tableLayoutPanel56->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel56->Location = System::Drawing::Point(3, 140);
            this->tableLayoutPanel56->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel56->Name = L"tableLayoutPanel56";
            this->tableLayoutPanel56->RowCount = 2;
            this->tableLayoutPanel56->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel56->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel56->Size = System::Drawing::Size(752, 65);
            this->tableLayoutPanel56->TabIndex = 6;
            // 
            // Stat_TVA
            // 
            this->Stat_TVA->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->Stat_TVA->Location = System::Drawing::Point(3, 34);
            this->Stat_TVA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Stat_TVA->Name = L"Stat_TVA";
            this->Stat_TVA->Size = System::Drawing::Size(247, 24);
            this->Stat_TVA->TabIndex = 5;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label35->Location = System::Drawing::Point(3, 0);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(746, 32);
            this->label35->TabIndex = 6;
            this->label35->Text = L"TVA";
            this->label35->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // tableLayoutPanel57
            // 
            this->tableLayoutPanel57->ColumnCount = 1;
            this->tableLayoutPanel57->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel57->Controls->Add(this->label36, 0, 0);
            this->tableLayoutPanel57->Controls->Add(this->textBox3, 0, 1);
            this->tableLayoutPanel57->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel57->Location = System::Drawing::Point(3, 2);
            this->tableLayoutPanel57->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel57->Name = L"tableLayoutPanel57";
            this->tableLayoutPanel57->RowCount = 2;
            this->tableLayoutPanel57->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel57->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel57->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel57->Size = System::Drawing::Size(752, 65);
            this->tableLayoutPanel57->TabIndex = 7;
            // 
            // label36
            // 
            this->label36->AllowDrop = true;
            this->label36->AutoSize = true;
            this->label36->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label36->Location = System::Drawing::Point(3, 0);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(746, 32);
            this->label36->TabIndex = 6;
            this->label36->Text = L"Identifiant Client";
            this->label36->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(3, 34);
            this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(247, 24);
            this->textBox3->TabIndex = 5;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(767, 2);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(759, 722);
            this->dataGridView1->TabIndex = 4;
            // 
            // tabClient
            // 
            this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
                static_cast<System::Int32>(static_cast<System::Byte>(195)));
            this->tabClient->Controls->Add(this->tableLayoutPanel33);
            this->tabClient->Location = System::Drawing::Point(4, 24);
            this->tabClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabClient->Name = L"tabClient";
            this->tabClient->Size = System::Drawing::Size(1529, 726);
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
            this->tableLayoutPanel33->Size = System::Drawing::Size(1529, 726);
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
            this->TableClientFonc->Size = System::Drawing::Size(764, 726);
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
            this->label2->Size = System::Drawing::Size(758, 36);
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
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 582);
            this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 142)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(758, 142);
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
            this->ClientRecherche->Size = System::Drawing::Size(379, 142);
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
            this->tableLayoutPanel5->Location = System::Drawing::Point(379, 0);
            this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 3;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(379, 142);
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
            this->Clientsuppr->Location = System::Drawing::Point(0, 94);
            this->Clientsuppr->Margin = System::Windows::Forms::Padding(0);
            this->Clientsuppr->Name = L"Clientsuppr";
            this->Clientsuppr->Size = System::Drawing::Size(379, 48);
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
            this->ClientModif->Location = System::Drawing::Point(0, 47);
            this->ClientModif->Margin = System::Windows::Forms::Padding(0);
            this->ClientModif->Name = L"ClientModif";
            this->ClientModif->Size = System::Drawing::Size(379, 47);
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
            this->ClientAjout->Size = System::Drawing::Size(379, 47);
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
            this->tableLayoutPanel10->Location = System::Drawing::Point(3, 38);
            this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 4;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(758, 250);
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
            this->tableLayoutPanel31->Location = System::Drawing::Point(3, 64);
            this->tableLayoutPanel31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel31->Name = L"tableLayoutPanel31";
            this->tableLayoutPanel31->RowCount = 2;
            this->tableLayoutPanel31->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel31->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel31->Size = System::Drawing::Size(752, 58);
            this->tableLayoutPanel31->TabIndex = 8;
            // 
            // ClientLastName
            // 
            this->ClientLastName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientLastName->Location = System::Drawing::Point(3, 31);
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
            this->label20->Size = System::Drawing::Size(746, 29);
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
            this->tableLayoutPanel12->Location = System::Drawing::Point(3, 188);
            this->tableLayoutPanel12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 2;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(752, 60);
            this->tableLayoutPanel12->TabIndex = 8;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label6->Location = System::Drawing::Point(3, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(746, 30);
            this->label6->TabIndex = 6;
            this->label6->Text = L"Date De Naissance";
            this->label6->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // ClientTime
            // 
            this->ClientTime->CustomFormat = L"yyyy-MM-dd";
            this->ClientTime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->ClientTime->Location = System::Drawing::Point(3, 32);
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
            this->tableLayoutPanel9->Location = System::Drawing::Point(3, 126);
            this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 2;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(752, 58);
            this->tableLayoutPanel9->TabIndex = 6;
            // 
            // ClientFirstName
            // 
            this->ClientFirstName->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientFirstName->Location = System::Drawing::Point(3, 31);
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
            this->label3->Size = System::Drawing::Size(746, 29);
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
            this->tableLayoutPanel11->Size = System::Drawing::Size(752, 58);
            this->tableLayoutPanel11->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AllowDrop = true;
            this->label5->AutoSize = true;
            this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label5->Location = System::Drawing::Point(3, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(746, 29);
            this->label5->TabIndex = 6;
            this->label5->Text = L"Identifiant";
            this->label5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // ClientId
            // 
            this->ClientId->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClientId->Location = System::Drawing::Point(3, 31);
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
            this->tableLayoutPanel13->Location = System::Drawing::Point(3, 292);
            this->tableLayoutPanel13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 3;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 66.66666F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(758, 286);
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
            this->tableLayoutPanel18->Location = System::Drawing::Point(3, 33);
            this->tableLayoutPanel18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
            this->tableLayoutPanel18->RowCount = 3;
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel18->Size = System::Drawing::Size(752, 186);
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
            this->tableLayoutPanel15->Location = System::Drawing::Point(3, 64);
            this->tableLayoutPanel15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 3;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                16)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel15->TabIndex = 10;
            // 
            // ClientAdressStreet
            // 
            this->ClientAdressStreet->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientAdressStreet->Location = System::Drawing::Point(3, 23);
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
            this->label8->Size = System::Drawing::Size(740, 21);
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
            this->tableLayoutPanel14->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel14->TabIndex = 9;
            // 
            // ClientAdressNumber
            // 
            this->ClientAdressNumber->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientAdressNumber->Location = System::Drawing::Point(3, 31);
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
            this->label7->Size = System::Drawing::Size(740, 29);
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
            this->tableLayoutPanel16->Location = System::Drawing::Point(3, 126);
            this->tableLayoutPanel16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
            this->tableLayoutPanel16->RowCount = 2;
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel16->Size = System::Drawing::Size(746, 58);
            this->tableLayoutPanel16->TabIndex = 11;
            // 
            // Clientpostadress
            // 
            this->Clientpostadress->AutoSize = true;
            this->Clientpostadress->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Clientpostadress->Location = System::Drawing::Point(376, 0);
            this->Clientpostadress->Name = L"Clientpostadress";
            this->Clientpostadress->Size = System::Drawing::Size(367, 29);
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
            this->Clientville->Size = System::Drawing::Size(367, 29);
            this->Clientville->TabIndex = 7;
            this->Clientville->Text = L"Ville";
            this->Clientville->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // ClientCity
            // 
            this->ClientCity->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientCity->Location = System::Drawing::Point(3, 31);
            this->ClientCity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientCity->Name = L"ClientCity";
            this->ClientCity->Size = System::Drawing::Size(192, 24);
            this->ClientCity->TabIndex = 7;
            // 
            // ClientPost
            // 
            this->ClientPost->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientPost->Location = System::Drawing::Point(376, 31);
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
            this->tableLayoutPanel17->Location = System::Drawing::Point(3, 223);
            this->tableLayoutPanel17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel17->Name = L"tableLayoutPanel17";
            this->tableLayoutPanel17->RowCount = 2;
            this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel17->Size = System::Drawing::Size(752, 61);
            this->tableLayoutPanel17->TabIndex = 12;
            // 
            // ClientAdressInfo
            // 
            this->ClientAdressInfo->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 9));
            this->ClientAdressInfo->Location = System::Drawing::Point(3, 32);
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
            this->label10->Size = System::Drawing::Size(746, 30);
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
            this->ClientData->Location = System::Drawing::Point(767, 2);
            this->ClientData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->ClientData->Name = L"ClientData";
            this->ClientData->RowHeadersWidth = 62;
            this->ClientData->RowTemplate->Height = 28;
            this->ClientData->Size = System::Drawing::Size(759, 722);
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
            this->tableLayoutPanel1->Location = System::Drawing::Point(3, 758);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 1;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1704, 80);
            this->tableLayoutPanel1->TabIndex = 3;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(3, 2);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(249, 76);
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
            this->MarqueLabel->Location = System::Drawing::Point(258, 0);
            this->MarqueLabel->Name = L"MarqueLabel";
            this->MarqueLabel->Size = System::Drawing::Size(1443, 80);
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
            this->ClientSize = System::Drawing::Size(1710, 840);
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
            this->tableLayoutPanel36->ResumeLayout(false);
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanel39->ResumeLayout(false);
            this->tableLayoutPanel40->ResumeLayout(false);
            this->tableLayoutPanel41->ResumeLayout(false);
            this->tableLayoutPanel41->PerformLayout();
            this->tableLayoutPanel42->ResumeLayout(false);
            this->tableLayoutPanel42->PerformLayout();
            this->tableLayoutPanel43->ResumeLayout(false);
            this->tableLayoutPanel43->PerformLayout();
            this->tableLayoutPanel44->ResumeLayout(false);
            this->tableLayoutPanel44->PerformLayout();
            this->tableLayoutPanel51->ResumeLayout(false);
            this->tableLayoutPanel51->PerformLayout();
            this->tableLayoutPanel45->ResumeLayout(false);
            this->tableLayoutPanel45->PerformLayout();
            this->tableLayoutPanel46->ResumeLayout(false);
            this->tableLayoutPanel47->ResumeLayout(false);
            this->tableLayoutPanel47->PerformLayout();
            this->tableLayoutPanel48->ResumeLayout(false);
            this->tableLayoutPanel48->PerformLayout();
            this->tableLayoutPanel49->ResumeLayout(false);
            this->tableLayoutPanel49->PerformLayout();
            this->tableLayoutPanel50->ResumeLayout(false);
            this->tableLayoutPanel50->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CommandData))->EndInit();
            this->tabStocks->ResumeLayout(false);
            this->tableLayoutPanel35->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StockData))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tabStats->ResumeLayout(false);
            this->tableLayoutPanel37->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->tableLayoutPanel53->ResumeLayout(false);
            this->tableLayoutPanel54->ResumeLayout(false);
            this->tableLayoutPanel54->PerformLayout();
            this->tableLayoutPanel55->ResumeLayout(false);
            this->tableLayoutPanel55->PerformLayout();
            this->tableLayoutPanel56->ResumeLayout(false);
            this->tableLayoutPanel56->PerformLayout();
            this->tableLayoutPanel57->ResumeLayout(false);
            this->tableLayoutPanel57->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
        this->DB_Client->set_ID_C(System::Convert::ToInt64(ClientId->Text));
        this->DB_Client->Delete();
    }
	private: System::Void CommandeB_Click(System::Object^ sender, System::EventArgs^ e) {
        DB_Order = gcnew Order();
		this->TabMod->SelectedTab = tabCommande;
        DB_Order->create(Order_HouseNum->Text, Order_Rue->Text, Order_info_supp->Text, Order_City->Text, Order_Code_Postal->Text, Order_HouseNum->Text, Order_Rue->Text, Order_info_supp->Text, Order_City->Text, Order_Code_Postal->Text, OrderIssueDate->Text, OrderDeliveryDate->Text, System::Convert::ToInt64(Order_discount->Text), System::Convert::ToInt64(Order_IDClient->Text));
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
private: System::Void tableLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel39_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void TableCommand_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label9_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel40_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EmployéAjout_Click(System::Object^ sender, System::EventArgs^ e) {
    this->DB_Employee->create(EmployéFirstName->Text,EmployéLastName->Text,EmployeeBirth->Text,EmployéAdressNumber->Text,EmployéAdressStreet->Text,EmployéAdressInfo->Text,EmployéAdresCity->Text,EmployeePostCode->Text,EmployeeSuperiorId->Text,EmployeeHire->Text);
}
private: System::Void EmployéSuppr_Click(System::Object^ sender, System::EventArgs^ e) {
    this->DB_Employee->set_ID_E(System::Convert::ToInt64(EmployéId->Text));
    this->DB_Employee->Delete();
}
private: System::Void OrderAdd_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}