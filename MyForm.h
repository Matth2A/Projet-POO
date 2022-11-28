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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::TabPage^ tabEmployé;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TabPage^ tabCommande;
	private: System::Windows::Forms::TabPage^ tabStocks;
	private: System::Windows::Forms::TabPage^ tabStats;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->tabEmployé = (gcnew System::Windows::Forms::TabPage());
			this->tabCommande = (gcnew System::Windows::Forms::TabPage());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(592, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(424, 731);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tabControl1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(592, 731);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->tabControl1->Controls->Add(this->tabClient);
			this->tabControl1->Controls->Add(this->tabEmployé);
			this->tabControl1->Controls->Add(this->tabCommande);
			this->tabControl1->Controls->Add(this->tabStocks);
			this->tabControl1->Controls->Add(this->tabStats);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(592, 731);
			this->tabControl1->TabIndex = 0;
			// 
			// tabClient
			// 
			this->tabClient->Location = System::Drawing::Point(28, 4);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(560, 723);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			this->tabClient->UseVisualStyleBackColor = true;
			// 
			// tabEmployé
			// 
			this->tabEmployé->Location = System::Drawing::Point(28, 4);
			this->tabEmployé->Name = L"tabEmployé";
			this->tabEmployé->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployé->Size = System::Drawing::Size(440, 690);
			this->tabEmployé->TabIndex = 1;
			this->tabEmployé->Text = L"Employé";
			this->tabEmployé->UseVisualStyleBackColor = true;
			// 
			// tabCommande
			// 
			this->tabCommande->Location = System::Drawing::Point(28, 4);
			this->tabCommande->Name = L"tabCommande";
			this->tabCommande->Size = System::Drawing::Size(440, 690);
			this->tabCommande->TabIndex = 2;
			this->tabCommande->Text = L"Commande";
			this->tabCommande->UseVisualStyleBackColor = true;
			// 
			// tabStocks
			// 
			this->tabStocks->Location = System::Drawing::Point(28, 4);
			this->tabStocks->Name = L"tabStocks";
			this->tabStocks->Size = System::Drawing::Size(440, 690);
			this->tabStocks->TabIndex = 3;
			this->tabStocks->Text = L"Stocks";
			this->tabStocks->UseVisualStyleBackColor = true;
			// 
			// tabStats
			// 
			this->tabStats->Location = System::Drawing::Point(28, 4);
			this->tabStats->Name = L"tabStats";
			this->tabStats->Size = System::Drawing::Size(440, 690);
			this->tabStats->TabIndex = 4;
			this->tabStats->Text = L"Statistiques";
			this->tabStats->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(424, 731);
			this->dataGridView1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 731);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"DataBase Manager";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
