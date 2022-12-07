#pragma once
#include "Connection.h"
#include "SqlServices.h"
#include "Clients.h"
#include "Employee.h"
#include <stdexcept>
#include <sstream>

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;
	using namespace System::Globalization;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelHotbar;



	private: System::Windows::Forms::Button^ StatsButton;
	private: System::Windows::Forms::Button^ StocksButton;
	private: System::Windows::Forms::Button^ EmployesButton;
	private: System::Windows::Forms::Button^ CommandesButton;
	private: System::Windows::Forms::Button^ ClientButton;





	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPaneljspcekec�le2;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2jspcekec�;


	private: System::Windows::Forms::Button^ SupprimerClientButton;
	private: System::Windows::Forms::Button^ AjouterClientButton;
	private: System::Windows::Forms::Button^ ModifierClientButton;
	

private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TabControl^ tabAffichage;
private: System::Windows::Forms::TabPage^ tabCommandes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::CheckBox^ checkBox2;


















private: System::Windows::Forms::TabPage^ tabClient;


private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelClient;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailClient;
private: System::Windows::Forms::Label^ labelBirthDateClient;

private: System::Windows::Forms::Label^ labelPrenomClient;

private: System::Windows::Forms::TextBox^ textBoxPr�nomClient;
private: System::Windows::Forms::TextBox^ textBoxCodePostal;

private: System::Windows::Forms::Label^ labelCodePostalClient;




private: System::Windows::Forms::TextBox^ textBoxNomClient;

private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirthDate;
private: System::Windows::Forms::Label^ labelNumDeRueClient;
private: System::Windows::Forms::Label^ labelNomDeRueClient;


private: System::Windows::Forms::TextBox^ textBoxNumRue;
private: System::Windows::Forms::TextBox^ textBoxNomRue;
private: System::Windows::Forms::Label^ labelNomClient;







private: System::Windows::Forms::TabPage^ tabEmployes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelEmployes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailEmployes;
private: System::Windows::Forms::Label^ labelPrenomEmployes;

private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ labelDateEmbaucheEmployes;

private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ labelNomEmployes;
private: System::Windows::Forms::Label^ labelSuperieurEmployes;


private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ labelAdressePostaleEmployes;

private: System::Windows::Forms::DateTimePicker^ dateTimePickerHiring;




private: System::Windows::Forms::TabPage^ tabStocks;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelStocks;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailStocks;
private: System::Windows::Forms::Label^ labelDesignationStocks;

private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ labelQuantiteStocks;

private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ labelReferenceProduitStocks;

private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ labelPrixStocks;
private: System::Windows::Forms::Label^ labelTauxTvaStocks;


private: System::Windows::Forms::Label^ labelSeuilReaprovisionnementStocks;

private: System::Windows::Forms::TextBox^ textBox18;




private: System::Windows::Forms::TabPage^ tabStats;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::Label^ label22;




private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;

private: System::Windows::Forms::Button^ button5;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ labelEtageClient;
private: System::Windows::Forms::Label^ labelVilleClient;



private: System::Windows::Forms::TextBox^ textBoxEtage;
private: System::Windows::Forms::TextBox^ textBoxVille;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ button4;

    ;
private: System::Windows::Forms::Label^ labelClientId;
private: System::Windows::Forms::TextBox^ textBoxClientId;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ Month;
private: System::Windows::Forms::TextBox^ Year;
private: System::Windows::Forms::TextBox^ Id;



private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
private: System::Windows::Forms::Button^ buttonSeuilR;
private: System::Windows::Forms::Button^ buttonPanier;
private: System::Windows::Forms::Button^ buttonC;
private: System::Windows::Forms::Button^ buttonAchatsClient;




private: System::Windows::Forms::Button^ buttonArticlesLesPlusVendus;
private: System::Windows::Forms::Button^ buttonArticlesLesMoinsVendus;
private: System::Windows::Forms::Button^ buttonValeurCommercialeStock;
private: System::Windows::Forms::Button^ buttonValeurAchatStock;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel16;
private: System::Windows::Forms::Button^ buttonCreateCommande;
private: System::Windows::Forms::TabPage^ tabCreationCommande;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBoxDeliveryDateNewOrder;
private: System::Windows::Forms::TextBox^ textBoxNumberAdrDeliveryNewOrder;



private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBoxIdCommandNewOrder;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirthDateNewOrder;



private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBoxEmissonDateNewOrder;
private: System::Windows::Forms::TextBox^ textBoxStreetNameAdrDeliveryNewOrder;


private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBoxCityDeliveryNewOrder;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBoxPostalCodeDeliveryNewOrder;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBoxNumberAdrFactNewOrder;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBoxCommandReferenceNewOrder;
private: System::Windows::Forms::TextBox^ textBoxFloorDeliveryNewOrder;
private: System::Windows::Forms::TextBox^ textBoxStreetNameFactNewOrder;



private: System::Windows::Forms::TextBox^ textBoxLastNameClientNewOrder;
private: System::Windows::Forms::TextBox^ textBoxPaymentMethodNewOrder;
private: System::Windows::Forms::TextBox^ textBoxFloorFactNewOrder;



private: System::Windows::Forms::TextBox^ textBoxFirstNameClientNewOrder;
private: System::Windows::Forms::TextBox^ textBoxPaymentDateNewOrder;
private: System::Windows::Forms::TextBox^ textBoxPriceNewOrder;
private: System::Windows::Forms::TextBox^ textBoxCityFactNewOrder;




private: System::Windows::Forms::TextBox^ textBoxPostalCodeFactNewOrder;

private: System::Windows::Forms::TextBox^ textBoxQuantityNewOrder;
private: System::Windows::Forms::TextBox^ textBoxDesignationNewOrder;


private: System::Windows::Forms::Label^ label26;



































	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->tableLayoutPanelHotbar = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->StatsButton = (gcnew System::Windows::Forms::Button());
            this->ClientButton = (gcnew System::Windows::Forms::Button());
            this->StocksButton = (gcnew System::Windows::Forms::Button());
            this->EmployesButton = (gcnew System::Windows::Forms::Button());
            this->CommandesButton = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPaneljspcekec�le2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel2jspcekec� = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->SupprimerClientButton = (gcnew System::Windows::Forms::Button());
            this->AjouterClientButton = (gcnew System::Windows::Forms::Button());
            this->ModifierClientButton = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tabAffichage = (gcnew System::Windows::Forms::TabControl());
            this->tabClient = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanelClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->labelClientId = (gcnew System::Windows::Forms::Label());
            this->labelBirthDateClient = (gcnew System::Windows::Forms::Label());
            this->labelPrenomClient = (gcnew System::Windows::Forms::Label());
            this->textBoxPr�nomClient = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
            this->labelCodePostalClient = (gcnew System::Windows::Forms::Label());
            this->textBoxNomClient = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePickerBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->labelNumDeRueClient = (gcnew System::Windows::Forms::Label());
            this->labelNomDeRueClient = (gcnew System::Windows::Forms::Label());
            this->textBoxNumRue = (gcnew System::Windows::Forms::TextBox());
            this->textBoxNomRue = (gcnew System::Windows::Forms::TextBox());
            this->labelNomClient = (gcnew System::Windows::Forms::Label());
            this->textBoxClientId = (gcnew System::Windows::Forms::TextBox());
            this->labelEtageClient = (gcnew System::Windows::Forms::Label());
            this->textBoxEtage = (gcnew System::Windows::Forms::TextBox());
            this->labelVilleClient = (gcnew System::Windows::Forms::Label());
            this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
            this->tabCommandes = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanel16 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->buttonCreateCommande = (gcnew System::Windows::Forms::Button());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->tabEmployes = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->labelPrenomEmployes = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->labelDateEmbaucheEmployes = (gcnew System::Windows::Forms::Label());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->labelNomEmployes = (gcnew System::Windows::Forms::Label());
            this->labelSuperieurEmployes = (gcnew System::Windows::Forms::Label());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->labelAdressePostaleEmployes = (gcnew System::Windows::Forms::Label());
            this->dateTimePickerHiring = (gcnew System::Windows::Forms::DateTimePicker());
            this->tabStocks = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->labelDesignationStocks = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->labelQuantiteStocks = (gcnew System::Windows::Forms::Label());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->labelReferenceProduitStocks = (gcnew System::Windows::Forms::Label());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->labelPrixStocks = (gcnew System::Windows::Forms::Label());
            this->labelTauxTvaStocks = (gcnew System::Windows::Forms::Label());
            this->labelSeuilReaprovisionnementStocks = (gcnew System::Windows::Forms::Label());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->tabStats = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->Month = (gcnew System::Windows::Forms::TextBox());
            this->Year = (gcnew System::Windows::Forms::TextBox());
            this->Id = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->buttonSeuilR = (gcnew System::Windows::Forms::Button());
            this->buttonPanier = (gcnew System::Windows::Forms::Button());
            this->buttonC = (gcnew System::Windows::Forms::Button());
            this->buttonAchatsClient = (gcnew System::Windows::Forms::Button());
            this->buttonArticlesLesPlusVendus = (gcnew System::Windows::Forms::Button());
            this->buttonArticlesLesMoinsVendus = (gcnew System::Windows::Forms::Button());
            this->buttonValeurCommercialeStock = (gcnew System::Windows::Forms::Button());
            this->buttonValeurAchatStock = (gcnew System::Windows::Forms::Button());
            this->tabCreationCommande = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBoxDeliveryDateNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxIdCommandNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBoxEmissonDateNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBoxCityDeliveryNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBoxPostalCodeDeliveryNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBoxNumberAdrFactNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->textBoxCommandReferenceNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxStreetNameFactNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxLastNameClientNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxFloorFactNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCityFactNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxPostalCodeFactNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxQuantityNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxDesignationNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBoxPaymentDateNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->textBoxPriceNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->textBoxPaymentMethodNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->textBoxFloorDeliveryNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBoxStreetNameAdrDeliveryNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->textBoxFirstNameClientNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePickerBirthDateNewOrder = (gcnew System::Windows::Forms::DateTimePicker());
            this->textBoxNumberAdrDeliveryNewOrder = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanelHotbar->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tabAffichage->SuspendLayout();
            this->tabClient->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tableLayoutPanelClient->SuspendLayout();
            this->tableLayoutPanel10->SuspendLayout();
            this->tableLayoutPanelDetailClient->SuspendLayout();
            this->tabCommandes->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->tableLayoutPanel16->SuspendLayout();
            this->tabEmployes->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->tableLayoutPanelEmployes->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tableLayoutPanelDetailEmployes->SuspendLayout();
            this->tabStocks->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->tableLayoutPanelStocks->SuspendLayout();
            this->tableLayoutPanel9->SuspendLayout();
            this->tableLayoutPanelDetailStocks->SuspendLayout();
            this->tabStats->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
            this->tableLayoutPanel11->SuspendLayout();
            this->tableLayoutPanel13->SuspendLayout();
            this->tableLayoutPanel14->SuspendLayout();
            this->tabCreationCommande->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel12->SuspendLayout();
            this->tableLayoutPanel15->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanelHotbar
            // 
            this->tableLayoutPanelHotbar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
            this->tableLayoutPanelHotbar->ColumnCount = 6;
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                3)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->Controls->Add(this->StatsButton, 5, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->ClientButton, 1, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->StocksButton, 4, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->EmployesButton, 3, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->CommandesButton, 2, 0);
            this->tableLayoutPanelHotbar->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanelHotbar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tableLayoutPanelHotbar->Location = System::Drawing::Point(0, 59);
            this->tableLayoutPanelHotbar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelHotbar->Name = L"tableLayoutPanelHotbar";
            this->tableLayoutPanelHotbar->RowCount = 1;
            this->tableLayoutPanelHotbar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelHotbar->Size = System::Drawing::Size(1924, 62);
            this->tableLayoutPanelHotbar->TabIndex = 9;
            // 
            // StatsButton
            // 
            this->StatsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->StatsButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->StatsButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StatsButton->FlatAppearance->BorderSize = 0;
            this->StatsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StatsButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StatsButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->StatsButton->Location = System::Drawing::Point(1541, 2);
            this->StatsButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->StatsButton->Name = L"StatsButton";
            this->StatsButton->Size = System::Drawing::Size(381, 58);
            this->StatsButton->TabIndex = 4;
            this->StatsButton->Text = L"Stats";
            this->StatsButton->UseVisualStyleBackColor = false;
            this->StatsButton->Click += gcnew System::EventHandler(this, &MyForm::StatsButton_Click);
            // 
            // ClientButton
            // 
            this->ClientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->ClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ClientButton->FlatAppearance->BorderSize = 0;
            this->ClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClientButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ClientButton->Location = System::Drawing::Point(5, 2);
            this->ClientButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->ClientButton->Name = L"ClientButton";
            this->ClientButton->Size = System::Drawing::Size(380, 58);
            this->ClientButton->TabIndex = 0;
            this->ClientButton->Text = L"Client";
            this->ClientButton->UseVisualStyleBackColor = false;
            this->ClientButton->Click += gcnew System::EventHandler(this, &MyForm::ClientButton_Click);
            // 
            // StocksButton
            // 
            this->StocksButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->StocksButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->StocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StocksButton->FlatAppearance->BorderSize = 0;
            this->StocksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StocksButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StocksButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->StocksButton->Location = System::Drawing::Point(1157, 2);
            this->StocksButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->StocksButton->Name = L"StocksButton";
            this->StocksButton->Size = System::Drawing::Size(380, 58);
            this->StocksButton->TabIndex = 3;
            this->StocksButton->Text = L"Stocks";
            this->StocksButton->UseVisualStyleBackColor = false;
            this->StocksButton->Click += gcnew System::EventHandler(this, &MyForm::StocksButton_Click);
            // 
            // EmployesButton
            // 
            this->EmployesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->EmployesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->EmployesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployesButton->FlatAppearance->BorderSize = 0;
            this->EmployesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->EmployesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->EmployesButton->Location = System::Drawing::Point(773, 2);
            this->EmployesButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->EmployesButton->Name = L"EmployesButton";
            this->EmployesButton->Size = System::Drawing::Size(380, 58);
            this->EmployesButton->TabIndex = 2;
            this->EmployesButton->Text = L"Employes";
            this->EmployesButton->UseVisualStyleBackColor = false;
            this->EmployesButton->Click += gcnew System::EventHandler(this, &MyForm::EmployesButton_Click);
            // 
            // CommandesButton
            // 
            this->CommandesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->CommandesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->CommandesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->CommandesButton->FlatAppearance->BorderSize = 0;
            this->CommandesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->CommandesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CommandesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->CommandesButton->Location = System::Drawing::Point(389, 2);
            this->CommandesButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->CommandesButton->Name = L"CommandesButton";
            this->CommandesButton->Size = System::Drawing::Size(380, 58);
            this->CommandesButton->TabIndex = 1;
            this->CommandesButton->Text = L"Commandes";
            this->CommandesButton->UseVisualStyleBackColor = false;
            this->CommandesButton->Click += gcnew System::EventHandler(this, &MyForm::CommandesButton_Click);
            // 
            // tableLayoutPaneljspcekec�le2
            // 
            this->tableLayoutPaneljspcekec�le2->ColumnCount = 5;
            this->tableLayoutPaneljspcekec�le2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekec�le2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekec�le2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekec�le2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekec�le2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekec�le2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPaneljspcekec�le2->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPaneljspcekec�le2->Name = L"tableLayoutPaneljspcekec�le2";
            this->tableLayoutPaneljspcekec�le2->RowCount = 1;
            this->tableLayoutPaneljspcekec�le2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPaneljspcekec�le2->Size = System::Drawing::Size(934, 94);
            this->tableLayoutPaneljspcekec�le2->TabIndex = 1;
            // 
            // textBox5
            // 
            this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox5->Location = System::Drawing::Point(747, 3);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(184, 31);
            this->textBox5->TabIndex = 4;
            // 
            // textBox4
            // 
            this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox4->Location = System::Drawing::Point(561, 3);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(180, 31);
            this->textBox4->TabIndex = 3;
            // 
            // textBox3
            // 
            this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox3->Location = System::Drawing::Point(375, 3);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(180, 31);
            this->textBox3->TabIndex = 2;
            // 
            // textBox2
            // 
            this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox2->Location = System::Drawing::Point(189, 3);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(180, 31);
            this->textBox2->TabIndex = 1;
            // 
            // textBox1
            // 
            this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox1->Location = System::Drawing::Point(3, 3);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(180, 31);
            this->textBox1->TabIndex = 0;
            // 
            // tableLayoutPanel2jspcekec�
            // 
            this->tableLayoutPanel2jspcekec�->ColumnCount = 1;
            this->tableLayoutPanel2jspcekec�->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2jspcekec�->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2jspcekec�->Location = System::Drawing::Point(943, 3);
            this->tableLayoutPanel2jspcekec�->Name = L"tableLayoutPanel2jspcekec�";
            this->tableLayoutPanel2jspcekec�->RowCount = 3;
            this->tableLayoutPanel2jspcekec�->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2jspcekec�->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33334F)));
            this->tableLayoutPanel2jspcekec�->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2jspcekec�->Size = System::Drawing::Size(230, 94);
            this->tableLayoutPanel2jspcekec�->TabIndex = 0;
            // 
            // SupprimerClientButton
            // 
            this->SupprimerClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->SupprimerClientButton->Location = System::Drawing::Point(3, 65);
            this->SupprimerClientButton->Name = L"SupprimerClientButton";
            this->SupprimerClientButton->Size = System::Drawing::Size(224, 26);
            this->SupprimerClientButton->TabIndex = 4;
            this->SupprimerClientButton->Text = L"Supprimer";
            this->SupprimerClientButton->UseVisualStyleBackColor = true;
            // 
            // AjouterClientButton
            // 
            this->AjouterClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->AjouterClientButton->Location = System::Drawing::Point(3, 3);
            this->AjouterClientButton->Name = L"AjouterClientButton";
            this->AjouterClientButton->Size = System::Drawing::Size(224, 25);
            this->AjouterClientButton->TabIndex = 2;
            this->AjouterClientButton->Text = L"Ajouter";
            this->AjouterClientButton->UseVisualStyleBackColor = true;
            // 
            // ModifierClientButton
            // 
            this->ModifierClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ModifierClientButton->Location = System::Drawing::Point(3, 34);
            this->ModifierClientButton->Name = L"ModifierClientButton";
            this->ModifierClientButton->Size = System::Drawing::Size(224, 25);
            this->ModifierClientButton->TabIndex = 5;
            this->ModifierClientButton->Text = L"Modifier";
            this->ModifierClientButton->UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)));
            this->panel1->Controls->Add(this->tabAffichage);
            this->panel1->Controls->Add(this->tableLayoutPanelHotbar);
            this->panel1->Controls->Add(this->tableLayoutPanel6);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1924, 905);
            this->panel1->TabIndex = 9;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // tabAffichage
            // 
            this->tabAffichage->Appearance = System::Windows::Forms::TabAppearance::Buttons;
            this->tabAffichage->Controls->Add(this->tabClient);
            this->tabAffichage->Controls->Add(this->tabCommandes);
            this->tabAffichage->Controls->Add(this->tabEmployes);
            this->tabAffichage->Controls->Add(this->tabStocks);
            this->tabAffichage->Controls->Add(this->tabStats);
            this->tabAffichage->Controls->Add(this->tabCreationCommande);
            this->tabAffichage->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabAffichage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabAffichage->ImeMode = System::Windows::Forms::ImeMode::Off;
            this->tabAffichage->ItemSize = System::Drawing::Size(71, 25);
            this->tabAffichage->Location = System::Drawing::Point(0, 121);
            this->tabAffichage->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabAffichage->Name = L"tabAffichage";
            this->tabAffichage->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->tabAffichage->SelectedIndex = 0;
            this->tabAffichage->Size = System::Drawing::Size(1924, 784);
            this->tabAffichage->TabIndex = 8;
            // 
            // tabClient
            // 
            this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)));
            this->tabClient->Controls->Add(this->tableLayoutPanel1);
            this->tabClient->Controls->Add(this->tableLayoutPanelClient);
            this->tabClient->Location = System::Drawing::Point(4, 29);
            this->tabClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabClient->Name = L"tabClient";
            this->tabClient->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tabClient->Size = System::Drawing::Size(1916, 751);
            this->tabClient->TabIndex = 0;
            this->tabClient->Text = L"Client";
            this->tabClient->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel1->ColumnCount = 3;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 1, 1);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(2, 2);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 3;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1912, 530);
            this->tableLayoutPanel1->TabIndex = 6;
            this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint_1);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(102, 49);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1708, 432);
            this->dataGridView1->TabIndex = 4;
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
            // 
            // tableLayoutPanelClient
            // 
            this->tableLayoutPanelClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tableLayoutPanelClient->ColumnCount = 2;
            this->tableLayoutPanelClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanelClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelClient->Controls->Add(this->tableLayoutPanel10, 0, 0);
            this->tableLayoutPanelClient->Controls->Add(this->tableLayoutPanelDetailClient, 0, 0);
            this->tableLayoutPanelClient->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelClient->Location = System::Drawing::Point(2, 532);
            this->tableLayoutPanelClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanelClient->Name = L"tableLayoutPanelClient";
            this->tableLayoutPanelClient->RowCount = 1;
            this->tableLayoutPanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelClient->Size = System::Drawing::Size(1912, 217);
            this->tableLayoutPanelClient->TabIndex = 5;
            this->tableLayoutPanelClient->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanelClient_Paint);
            // 
            // tableLayoutPanel10
            // 
            this->tableLayoutPanel10->ColumnCount = 1;
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel10->Controls->Add(this->button3, 0, 1);
            this->tableLayoutPanel10->Controls->Add(this->button6, 0, 0);
            this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel10->Location = System::Drawing::Point(1532, 3);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 2;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                12)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(377, 211);
            this->tableLayoutPanel10->TabIndex = 3;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button3->Location = System::Drawing::Point(4, 110);
            this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(369, 96);
            this->button3->TabIndex = 5;
            this->button3->Text = L"Modifier";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button6->Location = System::Drawing::Point(4, 5);
            this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(369, 95);
            this->button6->TabIndex = 2;
            this->button6->Text = L"Ajouter";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // tableLayoutPanelDetailClient
            // 
            this->tableLayoutPanelDetailClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailClient->ColumnCount = 9;
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                51)));
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelClientId, 0, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelBirthDateClient, 3, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelPrenomClient, 3, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxPr�nomClient, 4, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxCodePostal, 1, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelCodePostalClient, 0, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNomClient, 1, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->dateTimePickerBirthDate, 4, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelNumDeRueClient, 6, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelNomDeRueClient, 6, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNumRue, 7, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNomRue, 7, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelNomClient, 0, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxClientId, 1, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelEtageClient, 3, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxEtage, 4, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelVilleClient, 6, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxVille, 7, 3);
            this->tableLayoutPanelDetailClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailClient->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanelDetailClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelDetailClient->Name = L"tableLayoutPanelDetailClient";
            this->tableLayoutPanelDetailClient->RowCount = 5;
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailClient->Size = System::Drawing::Size(1521, 207);
            this->tableLayoutPanelDetailClient->TabIndex = 2;
            this->tableLayoutPanelDetailClient->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel15_Paint);
            // 
            // labelClientId
            // 
            this->labelClientId->AutoSize = true;
            this->labelClientId->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelClientId->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelClientId->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelClientId->Location = System::Drawing::Point(2, 127);
            this->labelClientId->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelClientId->Name = L"labelClientId";
            this->labelClientId->Size = System::Drawing::Size(151, 48);
            this->labelClientId->TabIndex = 27;
            this->labelClientId->Text = L"Client ID :";
            // 
            // labelBirthDateClient
            // 
            this->labelBirthDateClient->AutoSize = true;
            this->labelBirthDateClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelBirthDateClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelBirthDateClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelBirthDateClient->Location = System::Drawing::Point(480, 79);
            this->labelBirthDateClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelBirthDateClient->Name = L"labelBirthDateClient";
            this->labelBirthDateClient->Size = System::Drawing::Size(215, 48);
            this->labelBirthDateClient->TabIndex = 17;
            this->labelBirthDateClient->Text = L"Date de naissance :";
            // 
            // labelPrenomClient
            // 
            this->labelPrenomClient->AutoSize = true;
            this->labelPrenomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelPrenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPrenomClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelPrenomClient->Location = System::Drawing::Point(480, 31);
            this->labelPrenomClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelPrenomClient->Name = L"labelPrenomClient";
            this->labelPrenomClient->Size = System::Drawing::Size(215, 48);
            this->labelPrenomClient->TabIndex = 16;
            this->labelPrenomClient->Text = L"Pr�nom :";
            // 
            // textBoxPr�nomClient
            // 
            this->textBoxPr�nomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPr�nomClient->Location = System::Drawing::Point(699, 33);
            this->textBoxPr�nomClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxPr�nomClient->Name = L"textBoxPr�nomClient";
            this->textBoxPr�nomClient->Size = System::Drawing::Size(289, 31);
            this->textBoxPr�nomClient->TabIndex = 14;
            // 
            // textBoxCodePostal
            // 
            this->textBoxCodePostal->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxCodePostal->Location = System::Drawing::Point(157, 81);
            this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxCodePostal->Name = L"textBoxCodePostal";
            this->textBoxCodePostal->Size = System::Drawing::Size(289, 31);
            this->textBoxCodePostal->TabIndex = 11;
            // 
            // labelCodePostalClient
            // 
            this->labelCodePostalClient->AutoSize = true;
            this->labelCodePostalClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelCodePostalClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelCodePostalClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelCodePostalClient->Location = System::Drawing::Point(2, 79);
            this->labelCodePostalClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelCodePostalClient->Name = L"labelCodePostalClient";
            this->labelCodePostalClient->Size = System::Drawing::Size(151, 48);
            this->labelCodePostalClient->TabIndex = 10;
            this->labelCodePostalClient->Text = L"Code postal :";
            this->labelCodePostalClient->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // textBoxNomClient
            // 
            this->textBoxNomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNomClient->Location = System::Drawing::Point(157, 33);
            this->textBoxNomClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNomClient->Name = L"textBoxNomClient";
            this->textBoxNomClient->Size = System::Drawing::Size(289, 31);
            this->textBoxNomClient->TabIndex = 2;
            // 
            // dateTimePickerBirthDate
            // 
            this->dateTimePickerBirthDate->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerBirthDate->Location = System::Drawing::Point(699, 81);
            this->dateTimePickerBirthDate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dateTimePickerBirthDate->Name = L"dateTimePickerBirthDate";
            this->dateTimePickerBirthDate->Size = System::Drawing::Size(289, 31);
            this->dateTimePickerBirthDate->TabIndex = 18;
            // 
            // labelNumDeRueClient
            // 
            this->labelNumDeRueClient->AutoSize = true;
            this->labelNumDeRueClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNumDeRueClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNumDeRueClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNumDeRueClient->Location = System::Drawing::Point(1022, 31);
            this->labelNumDeRueClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelNumDeRueClient->Name = L"labelNumDeRueClient";
            this->labelNumDeRueClient->Size = System::Drawing::Size(152, 48);
            this->labelNumDeRueClient->TabIndex = 19;
            this->labelNumDeRueClient->Text = L"Num de rue :";
            // 
            // labelNomDeRueClient
            // 
            this->labelNomDeRueClient->AutoSize = true;
            this->labelNomDeRueClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNomDeRueClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNomDeRueClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNomDeRueClient->Location = System::Drawing::Point(1022, 79);
            this->labelNomDeRueClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelNomDeRueClient->Name = L"labelNomDeRueClient";
            this->labelNomDeRueClient->Size = System::Drawing::Size(152, 48);
            this->labelNomDeRueClient->TabIndex = 20;
            this->labelNomDeRueClient->Text = L"Nom de rue :";
            // 
            // textBoxNumRue
            // 
            this->textBoxNumRue->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNumRue->Location = System::Drawing::Point(1178, 33);
            this->textBoxNumRue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNumRue->Name = L"textBoxNumRue";
            this->textBoxNumRue->Size = System::Drawing::Size(289, 31);
            this->textBoxNumRue->TabIndex = 21;
            // 
            // textBoxNomRue
            // 
            this->textBoxNomRue->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNomRue->Location = System::Drawing::Point(1178, 81);
            this->textBoxNomRue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNomRue->Name = L"textBoxNomRue";
            this->textBoxNomRue->Size = System::Drawing::Size(289, 31);
            this->textBoxNomRue->TabIndex = 22;
            // 
            // labelNomClient
            // 
            this->labelNomClient->AutoSize = true;
            this->labelNomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNomClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNomClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNomClient->Location = System::Drawing::Point(4, 31);
            this->labelNomClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelNomClient->Name = L"labelNomClient";
            this->labelNomClient->Size = System::Drawing::Size(147, 48);
            this->labelNomClient->TabIndex = 6;
            this->labelNomClient->Text = L"Nom :";
            this->labelNomClient->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // textBoxClientId
            // 
            this->textBoxClientId->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxClientId->Location = System::Drawing::Point(157, 129);
            this->textBoxClientId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxClientId->Name = L"textBoxClientId";
            this->textBoxClientId->Size = System::Drawing::Size(289, 31);
            this->textBoxClientId->TabIndex = 28;
            // 
            // labelEtageClient
            // 
            this->labelEtageClient->AutoSize = true;
            this->labelEtageClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelEtageClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelEtageClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelEtageClient->Location = System::Drawing::Point(480, 127);
            this->labelEtageClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelEtageClient->Name = L"labelEtageClient";
            this->labelEtageClient->Size = System::Drawing::Size(215, 48);
            this->labelEtageClient->TabIndex = 23;
            this->labelEtageClient->Text = L"Etage :";
            // 
            // textBoxEtage
            // 
            this->textBoxEtage->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxEtage->Location = System::Drawing::Point(699, 129);
            this->textBoxEtage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxEtage->Name = L"textBoxEtage";
            this->textBoxEtage->Size = System::Drawing::Size(289, 31);
            this->textBoxEtage->TabIndex = 25;
            // 
            // labelVilleClient
            // 
            this->labelVilleClient->AutoSize = true;
            this->labelVilleClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelVilleClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelVilleClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelVilleClient->Location = System::Drawing::Point(1022, 127);
            this->labelVilleClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelVilleClient->Name = L"labelVilleClient";
            this->labelVilleClient->Size = System::Drawing::Size(152, 48);
            this->labelVilleClient->TabIndex = 24;
            this->labelVilleClient->Text = L" Ville :";
            // 
            // textBoxVille
            // 
            this->textBoxVille->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxVille->Location = System::Drawing::Point(1178, 129);
            this->textBoxVille->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxVille->Name = L"textBoxVille";
            this->textBoxVille->Size = System::Drawing::Size(289, 31);
            this->textBoxVille->TabIndex = 26;
            // 
            // tabCommandes
            // 
            this->tabCommandes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabCommandes->Controls->Add(this->tableLayoutPanel2);
            this->tabCommandes->Controls->Add(this->checkBox2);
            this->tabCommandes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabCommandes->Location = System::Drawing::Point(4, 29);
            this->tabCommandes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabCommandes->Name = L"tabCommandes";
            this->tabCommandes->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tabCommandes->Size = System::Drawing::Size(1916, 751);
            this->tabCommandes->TabIndex = 1;
            this->tabCommandes->Text = L"Commandes";
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel2->ColumnCount = 3;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->dataGridView2, 1, 1);
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel16, 1, 2);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(2, 2);
            this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 3;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 148)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(1912, 747);
            this->tableLayoutPanel2->TabIndex = 8;
            // 
            // dataGridView2
            // 
            this->dataGridView2->AllowUserToAddRows = false;
            this->dataGridView2->AllowUserToDeleteRows = false;
            this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView2->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView2->Location = System::Drawing::Point(102, 61);
            this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->ReadOnly = true;
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(1708, 536);
            this->dataGridView2->TabIndex = 5;
            // 
            // tableLayoutPanel16
            // 
            this->tableLayoutPanel16->ColumnCount = 3;
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel16->Controls->Add(this->buttonCreateCommande, 1, 0);
            this->tableLayoutPanel16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel16->Location = System::Drawing::Point(104, 604);
            this->tableLayoutPanel16->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
            this->tableLayoutPanel16->RowCount = 1;
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                139)));
            this->tableLayoutPanel16->Size = System::Drawing::Size(1704, 138);
            this->tableLayoutPanel16->TabIndex = 6;
            // 
            // buttonCreateCommande
            // 
            this->buttonCreateCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->buttonCreateCommande->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonCreateCommande->Dock = System::Windows::Forms::DockStyle::Fill;
            this->buttonCreateCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonCreateCommande->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->buttonCreateCommande->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->buttonCreateCommande->Location = System::Drawing::Point(572, 5);
            this->buttonCreateCommande->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->buttonCreateCommande->Name = L"buttonCreateCommande";
            this->buttonCreateCommande->Size = System::Drawing::Size(560, 128);
            this->buttonCreateCommande->TabIndex = 3;
            this->buttonCreateCommande->Text = L"Nouvelle commande";
            this->buttonCreateCommande->UseVisualStyleBackColor = false;
            this->buttonCreateCommande->Click += gcnew System::EventHandler(this, &MyForm::buttonCreateCommande_Click);
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(716, 283);
            this->checkBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(151, 30);
            this->checkBox2->TabIndex = 6;
            this->checkBox2->Text = L"checkBox2";
            this->checkBox2->UseVisualStyleBackColor = true;
            // 
            // tabEmployes
            // 
            this->tabEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabEmployes->Controls->Add(this->tableLayoutPanel3);
            this->tabEmployes->Controls->Add(this->checkBox3);
            this->tabEmployes->Controls->Add(this->tableLayoutPanelEmployes);
            this->tabEmployes->Location = System::Drawing::Point(4, 29);
            this->tabEmployes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabEmployes->Name = L"tabEmployes";
            this->tabEmployes->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tabEmployes->Size = System::Drawing::Size(1916, 751);
            this->tabEmployes->TabIndex = 2;
            this->tabEmployes->Text = L"Employes";
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel3->ColumnCount = 3;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->dataGridView3, 1, 1);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(2, 2);
            this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 3;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(1912, 530);
            this->tableLayoutPanel3->TabIndex = 9;
            this->tableLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel3_Paint);
            // 
            // dataGridView3
            // 
            this->dataGridView3->AllowUserToAddRows = false;
            this->dataGridView3->AllowUserToDeleteRows = false;
            this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView3->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView3->Location = System::Drawing::Point(102, 49);
            this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->ReadOnly = true;
            this->dataGridView3->RowHeadersWidth = 51;
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->Size = System::Drawing::Size(1708, 467);
            this->dataGridView3->TabIndex = 5;
            // 
            // checkBox3
            // 
            this->checkBox3->AutoSize = true;
            this->checkBox3->Location = System::Drawing::Point(774, 256);
            this->checkBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->checkBox3->Name = L"checkBox3";
            this->checkBox3->Size = System::Drawing::Size(151, 30);
            this->checkBox3->TabIndex = 6;
            this->checkBox3->Text = L"checkBox3";
            this->checkBox3->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanelEmployes
            // 
            this->tableLayoutPanelEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelEmployes->ColumnCount = 2;
            this->tableLayoutPanelEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanelEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelEmployes->Controls->Add(this->tableLayoutPanel8, 0, 0);
            this->tableLayoutPanelEmployes->Controls->Add(this->tableLayoutPanelDetailEmployes, 0, 0);
            this->tableLayoutPanelEmployes->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelEmployes->Location = System::Drawing::Point(2, 532);
            this->tableLayoutPanelEmployes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanelEmployes->Name = L"tableLayoutPanelEmployes";
            this->tableLayoutPanelEmployes->RowCount = 1;
            this->tableLayoutPanelEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelEmployes->Size = System::Drawing::Size(1912, 217);
            this->tableLayoutPanelEmployes->TabIndex = 8;
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->ColumnCount = 1;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel8->Controls->Add(this->button4, 0, 1);
            this->tableLayoutPanel8->Controls->Add(this->button5, 0, 0);
            this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel8->Location = System::Drawing::Point(1531, 2);
            this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 2;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(379, 213);
            this->tableLayoutPanel8->TabIndex = 3;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button4->Location = System::Drawing::Point(2, 108);
            this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(375, 103);
            this->button4->TabIndex = 5;
            this->button4->Text = L"Modifier";
            this->button4->UseVisualStyleBackColor = false;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button5->Location = System::Drawing::Point(2, 2);
            this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(375, 102);
            this->button5->TabIndex = 2;
            this->button5->Text = L"Ajouter";
            this->button5->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanelDetailEmployes
            // 
            this->tableLayoutPanelDetailEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailEmployes->ColumnCount = 8;
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelPrenomEmployes, 3, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox6, 4, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelDateEmbaucheEmployes, 0, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox11, 1, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelNomEmployes, 0, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelSuperieurEmployes, 3, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox15, 4, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox8, 7, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelAdressePostaleEmployes, 6, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->dateTimePickerHiring, 1, 2);
            this->tableLayoutPanelDetailEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailEmployes->ForeColor = System::Drawing::Color::Black;
            this->tableLayoutPanelDetailEmployes->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanelDetailEmployes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelDetailEmployes->Name = L"tableLayoutPanelDetailEmployes";
            this->tableLayoutPanelDetailEmployes->RowCount = 3;
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailEmployes->Size = System::Drawing::Size(1521, 207);
            this->tableLayoutPanelDetailEmployes->TabIndex = 2;
            // 
            // labelPrenomEmployes
            // 
            this->labelPrenomEmployes->AutoSize = true;
            this->labelPrenomEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelPrenomEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelPrenomEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelPrenomEmployes->Location = System::Drawing::Point(528, 31);
            this->labelPrenomEmployes->Name = L"labelPrenomEmployes";
            this->labelPrenomEmployes->Size = System::Drawing::Size(124, 88);
            this->labelPrenomEmployes->TabIndex = 16;
            this->labelPrenomEmployes->Text = L"Pr�nom :";
            // 
            // textBox6
            // 
            this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox6->Location = System::Drawing::Point(658, 34);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(272, 31);
            this->textBox6->TabIndex = 14;
            // 
            // labelDateEmbaucheEmployes
            // 
            this->labelDateEmbaucheEmployes->AutoSize = true;
            this->labelDateEmbaucheEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelDateEmbaucheEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelDateEmbaucheEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelDateEmbaucheEmployes->Location = System::Drawing::Point(3, 119);
            this->labelDateEmbaucheEmployes->Name = L"labelDateEmbaucheEmployes";
            this->labelDateEmbaucheEmployes->Size = System::Drawing::Size(211, 88);
            this->labelDateEmbaucheEmployes->TabIndex = 10;
            this->labelDateEmbaucheEmployes->Text = L"Date d\'embauche :";
            // 
            // textBox11
            // 
            this->textBox11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox11->Location = System::Drawing::Point(221, 36);
            this->textBox11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(270, 31);
            this->textBox11->TabIndex = 2;
            // 
            // labelNomEmployes
            // 
            this->labelNomEmployes->AutoSize = true;
            this->labelNomEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNomEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->labelNomEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNomEmployes->Location = System::Drawing::Point(4, 31);
            this->labelNomEmployes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelNomEmployes->Name = L"labelNomEmployes";
            this->labelNomEmployes->Size = System::Drawing::Size(209, 88);
            this->labelNomEmployes->TabIndex = 6;
            this->labelNomEmployes->Text = L"Nom :";
            // 
            // labelSuperieurEmployes
            // 
            this->labelSuperieurEmployes->AutoSize = true;
            this->labelSuperieurEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelSuperieurEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelSuperieurEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelSuperieurEmployes->Location = System::Drawing::Point(527, 119);
            this->labelSuperieurEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelSuperieurEmployes->Name = L"labelSuperieurEmployes";
            this->labelSuperieurEmployes->Size = System::Drawing::Size(126, 88);
            this->labelSuperieurEmployes->TabIndex = 17;
            this->labelSuperieurEmployes->Text = L"Sup�rieur :";
            // 
            // textBox15
            // 
            this->textBox15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox15->Location = System::Drawing::Point(658, 122);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(272, 31);
            this->textBox15->TabIndex = 18;
            // 
            // textBox8
            // 
            this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox8->Location = System::Drawing::Point(1244, 34);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(274, 31);
            this->textBox8->TabIndex = 19;
            // 
            // labelAdressePostaleEmployes
            // 
            this->labelAdressePostaleEmployes->AutoSize = true;
            this->labelAdressePostaleEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelAdressePostaleEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelAdressePostaleEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelAdressePostaleEmployes->Location = System::Drawing::Point(966, 31);
            this->labelAdressePostaleEmployes->Name = L"labelAdressePostaleEmployes";
            this->labelAdressePostaleEmployes->Size = System::Drawing::Size(272, 88);
            this->labelAdressePostaleEmployes->TabIndex = 20;
            this->labelAdressePostaleEmployes->Text = L"Adresse postale :";
            // 
            // dateTimePickerHiring
            // 
            this->dateTimePickerHiring->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerHiring->Location = System::Drawing::Point(219, 121);
            this->dateTimePickerHiring->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dateTimePickerHiring->Name = L"dateTimePickerHiring";
            this->dateTimePickerHiring->Size = System::Drawing::Size(139, 31);
            this->dateTimePickerHiring->TabIndex = 21;
            // 
            // tabStocks
            // 
            this->tabStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabStocks->Controls->Add(this->tableLayoutPanel4);
            this->tabStocks->Controls->Add(this->checkBox4);
            this->tabStocks->Controls->Add(this->tableLayoutPanelStocks);
            this->tabStocks->Location = System::Drawing::Point(4, 29);
            this->tabStocks->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabStocks->Name = L"tabStocks";
            this->tabStocks->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tabStocks->Size = System::Drawing::Size(1916, 751);
            this->tabStocks->TabIndex = 3;
            this->tabStocks->Text = L"Stocks";
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel4->ColumnCount = 3;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel4->Controls->Add(this->dataGridView4, 1, 1);
            this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel4->Location = System::Drawing::Point(2, 2);
            this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 3;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(1912, 530);
            this->tableLayoutPanel4->TabIndex = 9;
            // 
            // dataGridView4
            // 
            this->dataGridView4->AllowUserToAddRows = false;
            this->dataGridView4->AllowUserToDeleteRows = false;
            this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView4->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView4->Location = System::Drawing::Point(102, 49);
            this->dataGridView4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->ReadOnly = true;
            this->dataGridView4->RowHeadersWidth = 51;
            this->dataGridView4->RowTemplate->Height = 24;
            this->dataGridView4->Size = System::Drawing::Size(1708, 449);
            this->dataGridView4->TabIndex = 5;
            // 
            // checkBox4
            // 
            this->checkBox4->AutoSize = true;
            this->checkBox4->Location = System::Drawing::Point(752, 270);
            this->checkBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->checkBox4->Name = L"checkBox4";
            this->checkBox4->Size = System::Drawing::Size(151, 30);
            this->checkBox4->TabIndex = 6;
            this->checkBox4->Text = L"checkBox4";
            this->checkBox4->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanelStocks
            // 
            this->tableLayoutPanelStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
            this->tableLayoutPanelStocks->ColumnCount = 2;
            this->tableLayoutPanelStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanelStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelStocks->Controls->Add(this->tableLayoutPanel9, 0, 0);
            this->tableLayoutPanelStocks->Controls->Add(this->tableLayoutPanelDetailStocks, 0, 0);
            this->tableLayoutPanelStocks->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelStocks->Location = System::Drawing::Point(2, 532);
            this->tableLayoutPanelStocks->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanelStocks->Name = L"tableLayoutPanelStocks";
            this->tableLayoutPanelStocks->RowCount = 1;
            this->tableLayoutPanelStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelStocks->Size = System::Drawing::Size(1912, 217);
            this->tableLayoutPanelStocks->TabIndex = 8;
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->ColumnCount = 1;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel9->Controls->Add(this->button7, 0, 1);
            this->tableLayoutPanel9->Controls->Add(this->button8, 0, 0);
            this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel9->Location = System::Drawing::Point(1531, 2);
            this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 2;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(379, 213);
            this->tableLayoutPanel9->TabIndex = 3;
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button7->Location = System::Drawing::Point(2, 108);
            this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(375, 103);
            this->button7->TabIndex = 5;
            this->button7->Text = L"Modifier";
            this->button7->UseVisualStyleBackColor = false;
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button8->Location = System::Drawing::Point(2, 2);
            this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(375, 102);
            this->button8->TabIndex = 2;
            this->button8->Text = L"Ajouter";
            this->button8->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanelDetailStocks
            // 
            this->tableLayoutPanelDetailStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailStocks->ColumnCount = 8;
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                40)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                40)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelDesignationStocks, 3, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox12, 4, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox13, 1, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelQuantiteStocks, 0, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox14, 1, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelReferenceProduitStocks, 0, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox16, 7, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox17, 7, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelPrixStocks, 6, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelTauxTvaStocks, 6, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelSeuilReaprovisionnementStocks, 3, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox18, 4, 2);
            this->tableLayoutPanelDetailStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailStocks->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanelDetailStocks->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelDetailStocks->Name = L"tableLayoutPanelDetailStocks";
            this->tableLayoutPanelDetailStocks->RowCount = 3;
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailStocks->Size = System::Drawing::Size(1521, 207);
            this->tableLayoutPanelDetailStocks->TabIndex = 2;
            // 
            // labelDesignationStocks
            // 
            this->labelDesignationStocks->AutoSize = true;
            this->labelDesignationStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelDesignationStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelDesignationStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelDesignationStocks->Location = System::Drawing::Point(510, 31);
            this->labelDesignationStocks->Name = L"labelDesignationStocks";
            this->labelDesignationStocks->Size = System::Drawing::Size(327, 88);
            this->labelDesignationStocks->TabIndex = 16;
            this->labelDesignationStocks->Text = L"D�signation :";
            // 
            // textBox12
            // 
            this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox12->Location = System::Drawing::Point(843, 34);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(240, 31);
            this->textBox12->TabIndex = 14;
            // 
            // textBox13
            // 
            this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox13->Location = System::Drawing::Point(223, 121);
            this->textBox13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(242, 31);
            this->textBox13->TabIndex = 11;
            // 
            // labelQuantiteStocks
            // 
            this->labelQuantiteStocks->AutoSize = true;
            this->labelQuantiteStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelQuantiteStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelQuantiteStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelQuantiteStocks->Location = System::Drawing::Point(3, 119);
            this->labelQuantiteStocks->Name = L"labelQuantiteStocks";
            this->labelQuantiteStocks->Size = System::Drawing::Size(215, 88);
            this->labelQuantiteStocks->TabIndex = 10;
            this->labelQuantiteStocks->Text = L"Quantit� :";
            // 
            // textBox14
            // 
            this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox14->Location = System::Drawing::Point(225, 36);
            this->textBox14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(238, 31);
            this->textBox14->TabIndex = 2;
            // 
            // labelReferenceProduitStocks
            // 
            this->labelReferenceProduitStocks->AutoSize = true;
            this->labelReferenceProduitStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelReferenceProduitStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelReferenceProduitStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelReferenceProduitStocks->Location = System::Drawing::Point(4, 31);
            this->labelReferenceProduitStocks->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelReferenceProduitStocks->Name = L"labelReferenceProduitStocks";
            this->labelReferenceProduitStocks->Size = System::Drawing::Size(213, 88);
            this->labelReferenceProduitStocks->TabIndex = 6;
            this->labelReferenceProduitStocks->Text = L"R�f�rence produit :";
            // 
            // textBox16
            // 
            this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox16->Location = System::Drawing::Point(1277, 34);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(241, 31);
            this->textBox16->TabIndex = 17;
            // 
            // textBox17
            // 
            this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox17->Location = System::Drawing::Point(1277, 122);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(241, 31);
            this->textBox17->TabIndex = 18;
            // 
            // labelPrixStocks
            // 
            this->labelPrixStocks->AutoSize = true;
            this->labelPrixStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelPrixStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelPrixStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelPrixStocks->Location = System::Drawing::Point(1130, 31);
            this->labelPrixStocks->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelPrixStocks->Name = L"labelPrixStocks";
            this->labelPrixStocks->Size = System::Drawing::Size(140, 88);
            this->labelPrixStocks->TabIndex = 19;
            this->labelPrixStocks->Text = L"Prix :";
            // 
            // labelTauxTvaStocks
            // 
            this->labelTauxTvaStocks->AutoSize = true;
            this->labelTauxTvaStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelTauxTvaStocks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->labelTauxTvaStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelTauxTvaStocks->Location = System::Drawing::Point(1129, 119);
            this->labelTauxTvaStocks->Name = L"labelTauxTvaStocks";
            this->labelTauxTvaStocks->Size = System::Drawing::Size(142, 88);
            this->labelTauxTvaStocks->TabIndex = 20;
            this->labelTauxTvaStocks->Text = L"Taux de Tva :";
            // 
            // labelSeuilReaprovisionnementStocks
            // 
            this->labelSeuilReaprovisionnementStocks->AutoSize = true;
            this->labelSeuilReaprovisionnementStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelSeuilReaprovisionnementStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelSeuilReaprovisionnementStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelSeuilReaprovisionnementStocks->Location = System::Drawing::Point(510, 119);
            this->labelSeuilReaprovisionnementStocks->Name = L"labelSeuilReaprovisionnementStocks";
            this->labelSeuilReaprovisionnementStocks->Size = System::Drawing::Size(327, 88);
            this->labelSeuilReaprovisionnementStocks->TabIndex = 21;
            this->labelSeuilReaprovisionnementStocks->Text = L"Seuil de r�aprovisionnement :";
            // 
            // textBox18
            // 
            this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox18->Location = System::Drawing::Point(843, 122);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(240, 31);
            this->textBox18->TabIndex = 22;
            // 
            // tabStats
            // 
            this->tabStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabStats->Controls->Add(this->tableLayoutPanel5);
            this->tabStats->Location = System::Drawing::Point(4, 29);
            this->tabStats->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabStats->Name = L"tabStats";
            this->tabStats->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tabStats->Size = System::Drawing::Size(1916, 751);
            this->tabStats->TabIndex = 4;
            this->tabStats->Text = L"Stats";
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel5->ColumnCount = 3;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                60)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                60)));
            this->tableLayoutPanel5->Controls->Add(this->dataGridView6, 1, 1);
            this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel11, 1, 2);
            this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel5->Location = System::Drawing::Point(2, 2);
            this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 3;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 67.13615F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 32.86385F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(1912, 747);
            this->tableLayoutPanel5->TabIndex = 9;
            this->tableLayoutPanel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel5_Paint_1);
            // 
            // dataGridView6
            // 
            this->dataGridView6->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView6->Location = System::Drawing::Point(63, 44);
            this->dataGridView6->Name = L"dataGridView6";
            this->dataGridView6->RowHeadersWidth = 51;
            this->dataGridView6->RowTemplate->Height = 24;
            this->dataGridView6->Size = System::Drawing::Size(1312, 280);
            this->dataGridView6->TabIndex = 5;
            // 
            // tableLayoutPanel11
            // 
            this->tableLayoutPanel11->ColumnCount = 1;
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel11->Controls->Add(this->tableLayoutPanel13, 0, 0);
            this->tableLayoutPanel11->Controls->Add(this->tableLayoutPanel14, 0, 1);
            this->tableLayoutPanel11->Location = System::Drawing::Point(63, 517);
            this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
            this->tableLayoutPanel11->RowCount = 2;
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel11->Size = System::Drawing::Size(1312, 131);
            this->tableLayoutPanel11->TabIndex = 6;
            // 
            // tableLayoutPanel13
            // 
            this->tableLayoutPanel13->ColumnCount = 6;
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel13->Controls->Add(this->label3, 4, 0);
            this->tableLayoutPanel13->Controls->Add(this->label2, 2, 0);
            this->tableLayoutPanel13->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel13->Controls->Add(this->Month, 1, 0);
            this->tableLayoutPanel13->Controls->Add(this->Year, 3, 0);
            this->tableLayoutPanel13->Controls->Add(this->Id, 5, 0);
            this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel13->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 1;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(1306, 59);
            this->tableLayoutPanel13->TabIndex = 0;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label3->Location = System::Drawing::Point(871, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(211, 59);
            this->label3->TabIndex = 9;
            this->label3->Text = L"Id_Client :";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label2->Location = System::Drawing::Point(437, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(211, 59);
            this->label2->TabIndex = 8;
            this->label2->Text = L"Ann�es du chiffre d\'affaire:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label1->Location = System::Drawing::Point(3, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(211, 59);
            this->label1->TabIndex = 7;
            this->label1->Text = L"Mois du chiffre d\'affaire:";
            // 
            // Month
            // 
            this->Month->Location = System::Drawing::Point(220, 3);
            this->Month->Name = L"Month";
            this->Month->Size = System::Drawing::Size(210, 31);
            this->Month->TabIndex = 0;
            // 
            // Year
            // 
            this->Year->Location = System::Drawing::Point(654, 3);
            this->Year->Name = L"Year";
            this->Year->Size = System::Drawing::Size(210, 31);
            this->Year->TabIndex = 1;
            // 
            // Id
            // 
            this->Id->Location = System::Drawing::Point(1088, 3);
            this->Id->Name = L"Id";
            this->Id->Size = System::Drawing::Size(211, 31);
            this->Id->TabIndex = 2;
            // 
            // tableLayoutPanel14
            // 
            this->tableLayoutPanel14->ColumnCount = 8;
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel14->Controls->Add(this->buttonSeuilR, 0, 0);
            this->tableLayoutPanel14->Controls->Add(this->buttonPanier, 1, 0);
            this->tableLayoutPanel14->Controls->Add(this->buttonC, 2, 0);
            this->tableLayoutPanel14->Controls->Add(this->buttonAchatsClient, 3, 0);
            this->tableLayoutPanel14->Controls->Add(this->buttonArticlesLesPlusVendus, 4, 0);
            this->tableLayoutPanel14->Controls->Add(this->buttonArticlesLesMoinsVendus, 5, 0);
            this->tableLayoutPanel14->Controls->Add(this->buttonValeurCommercialeStock, 6, 0);
            this->tableLayoutPanel14->Controls->Add(this->buttonValeurAchatStock, 7, 0);
            this->tableLayoutPanel14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel14->Location = System::Drawing::Point(3, 68);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(1306, 60);
            this->tableLayoutPanel14->TabIndex = 1;
            // 
            // buttonSeuilR
            // 
            this->buttonSeuilR->Location = System::Drawing::Point(3, 3);
            this->buttonSeuilR->Name = L"buttonSeuilR";
            this->buttonSeuilR->Size = System::Drawing::Size(156, 53);
            this->buttonSeuilR->TabIndex = 0;
            this->buttonSeuilR->Text = L"seuil de r�approvisionnement";
            this->buttonSeuilR->UseVisualStyleBackColor = true;
            this->buttonSeuilR->Click += gcnew System::EventHandler(this, &MyForm::buttonSeuilR_Click);
            // 
            // buttonPanier
            // 
            this->buttonPanier->Location = System::Drawing::Point(166, 3);
            this->buttonPanier->Name = L"buttonPanier";
            this->buttonPanier->Size = System::Drawing::Size(156, 53);
            this->buttonPanier->TabIndex = 1;
            this->buttonPanier->Text = L"panier moyen ";
            this->buttonPanier->UseVisualStyleBackColor = true;
            this->buttonPanier->Click += gcnew System::EventHandler(this, &MyForm::buttonPanier_Click);
            // 
            // buttonC
            // 
            this->buttonC->Location = System::Drawing::Point(329, 3);
            this->buttonC->Name = L"buttonC";
            this->buttonC->Size = System::Drawing::Size(156, 53);
            this->buttonC->TabIndex = 2;
            this->buttonC->Text = L"chiffre d�affaire ";
            this->buttonC->UseVisualStyleBackColor = true;
            this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
            // 
            // buttonAchatsClient
            // 
            this->buttonAchatsClient->Location = System::Drawing::Point(492, 3);
            this->buttonAchatsClient->Name = L"buttonAchatsClient";
            this->buttonAchatsClient->Size = System::Drawing::Size(156, 53);
            this->buttonAchatsClient->TabIndex = 3;
            this->buttonAchatsClient->Text = L"montant total des achats pour un client";
            this->buttonAchatsClient->UseVisualStyleBackColor = true;
            this->buttonAchatsClient->Click += gcnew System::EventHandler(this, &MyForm::buttonAchatsClient_Click);
            // 
            // buttonArticlesLesPlusVendus
            // 
            this->buttonArticlesLesPlusVendus->Location = System::Drawing::Point(655, 3);
            this->buttonArticlesLesPlusVendus->Name = L"buttonArticlesLesPlusVendus";
            this->buttonArticlesLesPlusVendus->Size = System::Drawing::Size(156, 53);
            this->buttonArticlesLesPlusVendus->TabIndex = 4;
            this->buttonArticlesLesPlusVendus->Text = L"articles les plus vendus";
            this->buttonArticlesLesPlusVendus->UseVisualStyleBackColor = true;
            this->buttonArticlesLesPlusVendus->Click += gcnew System::EventHandler(this, &MyForm::buttonArticlesLesPlusVendus_Click);
            // 
            // buttonArticlesLesMoinsVendus
            // 
            this->buttonArticlesLesMoinsVendus->Location = System::Drawing::Point(818, 3);
            this->buttonArticlesLesMoinsVendus->Name = L"buttonArticlesLesMoinsVendus";
            this->buttonArticlesLesMoinsVendus->Size = System::Drawing::Size(156, 53);
            this->buttonArticlesLesMoinsVendus->TabIndex = 5;
            this->buttonArticlesLesMoinsVendus->Text = L"articles les moins vendus";
            this->buttonArticlesLesMoinsVendus->UseVisualStyleBackColor = true;
            this->buttonArticlesLesMoinsVendus->Click += gcnew System::EventHandler(this, &MyForm::buttonArticlesLesMoinsVendus_Click);
            // 
            // buttonValeurCommercialeStock
            // 
            this->buttonValeurCommercialeStock->Location = System::Drawing::Point(981, 3);
            this->buttonValeurCommercialeStock->Name = L"buttonValeurCommercialeStock";
            this->buttonValeurCommercialeStock->Size = System::Drawing::Size(156, 53);
            this->buttonValeurCommercialeStock->TabIndex = 6;
            this->buttonValeurCommercialeStock->Text = L"valeur commerciale du stock";
            this->buttonValeurCommercialeStock->UseVisualStyleBackColor = true;
            this->buttonValeurCommercialeStock->Click += gcnew System::EventHandler(this, &MyForm::buttonValeurCommercialeStock_Click);
            // 
            // buttonValeurAchatStock
            // 
            this->buttonValeurAchatStock->Location = System::Drawing::Point(1144, 3);
            this->buttonValeurAchatStock->Name = L"buttonValeurAchatStock";
            this->buttonValeurAchatStock->Size = System::Drawing::Size(159, 53);
            this->buttonValeurAchatStock->TabIndex = 7;
            this->buttonValeurAchatStock->Text = L"valeur d�achat du stock";
            this->buttonValeurAchatStock->UseVisualStyleBackColor = true;
            this->buttonValeurAchatStock->Click += gcnew System::EventHandler(this, &MyForm::buttonValeurAchatStock_Click);
            // 
            // tabCreationCommande
            // 
            this->tabCreationCommande->Controls->Add(this->tableLayoutPanel7);
            this->tabCreationCommande->Location = System::Drawing::Point(4, 29);
            this->tabCreationCommande->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabCreationCommande->Name = L"tabCreationCommande";
            this->tabCreationCommande->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabCreationCommande->Size = System::Drawing::Size(1916, 751);
            this->tabCreationCommande->TabIndex = 5;
            this->tabCreationCommande->Text = L"Cr�ation commande";
            this->tabCreationCommande->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tableLayoutPanel7->ColumnCount = 2;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                93.69582F)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                6.304176F)));
            this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel12, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel15, 0, 0);
            this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanel7->Location = System::Drawing::Point(4, 21);
            this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(1908, 725);
            this->tableLayoutPanel7->TabIndex = 6;
            this->tableLayoutPanel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel7_Paint_1);
            // 
            // tableLayoutPanel12
            // 
            this->tableLayoutPanel12->ColumnCount = 1;
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel12->Controls->Add(this->button1, 0, 1);
            this->tableLayoutPanel12->Controls->Add(this->button2, 0, 0);
            this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel12->Location = System::Drawing::Point(1790, 3);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 2;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                12)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(115, 719);
            this->tableLayoutPanel12->TabIndex = 3;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button1->Location = System::Drawing::Point(4, 364);
            this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(107, 350);
            this->button1->TabIndex = 5;
            this->button1->Text = L"Modifier";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button2->Location = System::Drawing::Point(4, 5);
            this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(107, 349);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Ajouter";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanel15
            // 
            this->tableLayoutPanel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel15->ColumnCount = 15;
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanel15->Controls->Add(this->label4, 0, 3);
            this->tableLayoutPanel15->Controls->Add(this->label6, 3, 1);
            this->tableLayoutPanel15->Controls->Add(this->textBoxDeliveryDateNewOrder, 4, 1);
            this->tableLayoutPanel15->Controls->Add(this->textBoxIdCommandNewOrder, 1, 1);
            this->tableLayoutPanel15->Controls->Add(this->label8, 6, 1);
            this->tableLayoutPanel15->Controls->Add(this->textBoxEmissonDateNewOrder, 7, 1);
            this->tableLayoutPanel15->Controls->Add(this->label10, 0, 1);
            this->tableLayoutPanel15->Controls->Add(this->textBoxCityDeliveryNewOrder, 1, 3);
            this->tableLayoutPanel15->Controls->Add(this->label11, 3, 3);
            this->tableLayoutPanel15->Controls->Add(this->textBoxPostalCodeDeliveryNewOrder, 4, 3);
            this->tableLayoutPanel15->Controls->Add(this->label12, 6, 3);
            this->tableLayoutPanel15->Controls->Add(this->textBoxNumberAdrFactNewOrder, 7, 3);
            this->tableLayoutPanel15->Controls->Add(this->label13, 9, 1);
            this->tableLayoutPanel15->Controls->Add(this->label15, 9, 3);
            this->tableLayoutPanel15->Controls->Add(this->label16, 0, 4);
            this->tableLayoutPanel15->Controls->Add(this->label17, 3, 4);
            this->tableLayoutPanel15->Controls->Add(this->label18, 6, 4);
            this->tableLayoutPanel15->Controls->Add(this->label19, 12, 1);
            this->tableLayoutPanel15->Controls->Add(this->label21, 12, 3);
            this->tableLayoutPanel15->Controls->Add(this->textBoxCommandReferenceNewOrder, 10, 1);
            this->tableLayoutPanel15->Controls->Add(this->textBoxStreetNameFactNewOrder, 10, 3);
            this->tableLayoutPanel15->Controls->Add(this->textBoxLastNameClientNewOrder, 13, 1);
            this->tableLayoutPanel15->Controls->Add(this->textBoxFloorFactNewOrder, 13, 3);
            this->tableLayoutPanel15->Controls->Add(this->textBoxCityFactNewOrder, 1, 4);
            this->tableLayoutPanel15->Controls->Add(this->textBoxPostalCodeFactNewOrder, 4, 4);
            this->tableLayoutPanel15->Controls->Add(this->textBoxQuantityNewOrder, 7, 4);
            this->tableLayoutPanel15->Controls->Add(this->textBoxDesignationNewOrder, 10, 4);
            this->tableLayoutPanel15->Controls->Add(this->label26, 9, 4);
            this->tableLayoutPanel15->Controls->Add(this->label24, 12, 4);
            this->tableLayoutPanel15->Controls->Add(this->textBoxPaymentDateNewOrder, 13, 4);
            this->tableLayoutPanel15->Controls->Add(this->label25, 0, 5);
            this->tableLayoutPanel15->Controls->Add(this->textBoxPriceNewOrder, 1, 5);
            this->tableLayoutPanel15->Controls->Add(this->label20, 3, 5);
            this->tableLayoutPanel15->Controls->Add(this->textBoxPaymentMethodNewOrder, 4, 5);
            this->tableLayoutPanel15->Controls->Add(this->textBoxFloorDeliveryNewOrder, 13, 2);
            this->tableLayoutPanel15->Controls->Add(this->label14, 12, 2);
            this->tableLayoutPanel15->Controls->Add(this->textBoxStreetNameAdrDeliveryNewOrder, 10, 2);
            this->tableLayoutPanel15->Controls->Add(this->label9, 9, 2);
            this->tableLayoutPanel15->Controls->Add(this->label5, 6, 2);
            this->tableLayoutPanel15->Controls->Add(this->label7, 3, 2);
            this->tableLayoutPanel15->Controls->Add(this->label23, 0, 2);
            this->tableLayoutPanel15->Controls->Add(this->textBoxFirstNameClientNewOrder, 1, 2);
            this->tableLayoutPanel15->Controls->Add(this->dateTimePickerBirthDateNewOrder, 4, 2);
            this->tableLayoutPanel15->Controls->Add(this->textBoxNumberAdrDeliveryNewOrder, 7, 2);
            this->tableLayoutPanel15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel15->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanel15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 7;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(1779, 715);
            this->tableLayoutPanel15->TabIndex = 2;
            this->tableLayoutPanel15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel15_Paint_1);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label4->Location = System::Drawing::Point(2, 291);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(236, 130);
            this->label4->TabIndex = 27;
            this->label4->Text = L"Ville LIVRAISON:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label6->Location = System::Drawing::Point(301, 31);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(302, 130);
            this->label6->TabIndex = 16;
            this->label6->Text = L"Date de livraison :";
            // 
            // textBoxDeliveryDateNewOrder
            // 
            this->textBoxDeliveryDateNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxDeliveryDateNewOrder->Location = System::Drawing::Point(607, 33);
            this->textBoxDeliveryDateNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxDeliveryDateNewOrder->Name = L"textBoxDeliveryDateNewOrder";
            this->textBoxDeliveryDateNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxDeliveryDateNewOrder->TabIndex = 14;
            // 
            // textBoxIdCommandNewOrder
            // 
            this->textBoxIdCommandNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxIdCommandNewOrder->Location = System::Drawing::Point(242, 33);
            this->textBoxIdCommandNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxIdCommandNewOrder->Name = L"textBoxIdCommandNewOrder";
            this->textBoxIdCommandNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxIdCommandNewOrder->TabIndex = 2;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label8->Location = System::Drawing::Point(666, 31);
            this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(355, 130);
            this->label8->TabIndex = 19;
            this->label8->Text = L"Date Emission :";
            // 
            // textBoxEmissonDateNewOrder
            // 
            this->textBoxEmissonDateNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxEmissonDateNewOrder->Location = System::Drawing::Point(1025, 33);
            this->textBoxEmissonDateNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxEmissonDateNewOrder->Name = L"textBoxEmissonDateNewOrder";
            this->textBoxEmissonDateNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxEmissonDateNewOrder->TabIndex = 21;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label10->Location = System::Drawing::Point(4, 31);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(232, 130);
            this->label10->TabIndex = 6;
            this->label10->Text = L"Id commande :";
            // 
            // textBoxCityDeliveryNewOrder
            // 
            this->textBoxCityDeliveryNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxCityDeliveryNewOrder->Location = System::Drawing::Point(242, 293);
            this->textBoxCityDeliveryNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxCityDeliveryNewOrder->Name = L"textBoxCityDeliveryNewOrder";
            this->textBoxCityDeliveryNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxCityDeliveryNewOrder->TabIndex = 28;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label11->Location = System::Drawing::Point(301, 291);
            this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(302, 130);
            this->label11->TabIndex = 23;
            this->label11->Text = L"Code postal LIVRAISON :";
            // 
            // textBoxPostalCodeDeliveryNewOrder
            // 
            this->textBoxPostalCodeDeliveryNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPostalCodeDeliveryNewOrder->Location = System::Drawing::Point(607, 293);
            this->textBoxPostalCodeDeliveryNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxPostalCodeDeliveryNewOrder->Name = L"textBoxPostalCodeDeliveryNewOrder";
            this->textBoxPostalCodeDeliveryNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxPostalCodeDeliveryNewOrder->TabIndex = 25;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label12->Location = System::Drawing::Point(666, 291);
            this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(355, 130);
            this->label12->TabIndex = 24;
            this->label12->Text = L" Num�ro de rue FACTURATION :";
            // 
            // textBoxNumberAdrFactNewOrder
            // 
            this->textBoxNumberAdrFactNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNumberAdrFactNewOrder->Location = System::Drawing::Point(1025, 293);
            this->textBoxNumberAdrFactNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNumberAdrFactNewOrder->Name = L"textBoxNumberAdrFactNewOrder";
            this->textBoxNumberAdrFactNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxNumberAdrFactNewOrder->TabIndex = 26;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label13->Location = System::Drawing::Point(1086, 31);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(314, 130);
            this->label13->TabIndex = 29;
            this->label13->Text = L"Reference commande :";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label15->Location = System::Drawing::Point(1086, 291);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(314, 130);
            this->label15->TabIndex = 31;
            this->label15->Text = L"Nom de rue FACTURATION :";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label16->Location = System::Drawing::Point(4, 421);
            this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(232, 130);
            this->label16->TabIndex = 32;
            this->label16->Text = L"Ville FACTURATION :";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label17->Location = System::Drawing::Point(303, 421);
            this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(298, 130);
            this->label17->TabIndex = 33;
            this->label17->Text = L"Code postal FATURATION :";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label18->Location = System::Drawing::Point(668, 421);
            this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(351, 130);
            this->label18->TabIndex = 34;
            this->label18->Text = L"Quantit� :";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label19->Location = System::Drawing::Point(1467, 31);
            this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(245, 130);
            this->label19->TabIndex = 35;
            this->label19->Text = L"Nom Client :";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label21->Location = System::Drawing::Point(1467, 291);
            this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(245, 130);
            this->label21->TabIndex = 37;
            this->label21->Text = L"Etage FACTURATION :";
            // 
            // textBoxCommandReferenceNewOrder
            // 
            this->textBoxCommandReferenceNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxCommandReferenceNewOrder->Location = System::Drawing::Point(1408, 36);
            this->textBoxCommandReferenceNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxCommandReferenceNewOrder->Name = L"textBoxCommandReferenceNewOrder";
            this->textBoxCommandReferenceNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxCommandReferenceNewOrder->TabIndex = 41;
            // 
            // textBoxStreetNameFactNewOrder
            // 
            this->textBoxStreetNameFactNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxStreetNameFactNewOrder->Location = System::Drawing::Point(1408, 296);
            this->textBoxStreetNameFactNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxStreetNameFactNewOrder->Name = L"textBoxStreetNameFactNewOrder";
            this->textBoxStreetNameFactNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxStreetNameFactNewOrder->TabIndex = 43;
            // 
            // textBoxLastNameClientNewOrder
            // 
            this->textBoxLastNameClientNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxLastNameClientNewOrder->Location = System::Drawing::Point(1720, 36);
            this->textBoxLastNameClientNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxLastNameClientNewOrder->Name = L"textBoxLastNameClientNewOrder";
            this->textBoxLastNameClientNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxLastNameClientNewOrder->TabIndex = 44;
            // 
            // textBoxFloorFactNewOrder
            // 
            this->textBoxFloorFactNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxFloorFactNewOrder->Location = System::Drawing::Point(1720, 296);
            this->textBoxFloorFactNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxFloorFactNewOrder->Name = L"textBoxFloorFactNewOrder";
            this->textBoxFloorFactNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxFloorFactNewOrder->TabIndex = 46;
            // 
            // textBoxCityFactNewOrder
            // 
            this->textBoxCityFactNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxCityFactNewOrder->Location = System::Drawing::Point(244, 426);
            this->textBoxCityFactNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxCityFactNewOrder->Name = L"textBoxCityFactNewOrder";
            this->textBoxCityFactNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxCityFactNewOrder->TabIndex = 50;
            // 
            // textBoxPostalCodeFactNewOrder
            // 
            this->textBoxPostalCodeFactNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPostalCodeFactNewOrder->Location = System::Drawing::Point(609, 426);
            this->textBoxPostalCodeFactNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxPostalCodeFactNewOrder->Name = L"textBoxPostalCodeFactNewOrder";
            this->textBoxPostalCodeFactNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxPostalCodeFactNewOrder->TabIndex = 51;
            // 
            // textBoxQuantityNewOrder
            // 
            this->textBoxQuantityNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxQuantityNewOrder->Location = System::Drawing::Point(1027, 426);
            this->textBoxQuantityNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxQuantityNewOrder->Name = L"textBoxQuantityNewOrder";
            this->textBoxQuantityNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxQuantityNewOrder->TabIndex = 52;
            // 
            // textBoxDesignationNewOrder
            // 
            this->textBoxDesignationNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxDesignationNewOrder->Location = System::Drawing::Point(1408, 426);
            this->textBoxDesignationNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxDesignationNewOrder->Name = L"textBoxDesignationNewOrder";
            this->textBoxDesignationNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxDesignationNewOrder->TabIndex = 53;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label26->Location = System::Drawing::Point(1086, 421);
            this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(314, 130);
            this->label26->TabIndex = 54;
            this->label26->Text = L"D�signation :";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label24->Location = System::Drawing::Point(1467, 421);
            this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(245, 130);
            this->label24->TabIndex = 39;
            this->label24->Text = L"Date de Paiement :";
            // 
            // textBoxPaymentDateNewOrder
            // 
            this->textBoxPaymentDateNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPaymentDateNewOrder->Location = System::Drawing::Point(1720, 426);
            this->textBoxPaymentDateNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxPaymentDateNewOrder->Name = L"textBoxPaymentDateNewOrder";
            this->textBoxPaymentDateNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxPaymentDateNewOrder->TabIndex = 48;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label25->Location = System::Drawing::Point(4, 551);
            this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(232, 130);
            this->label25->TabIndex = 40;
            this->label25->Text = L"Prix :";
            // 
            // textBoxPriceNewOrder
            // 
            this->textBoxPriceNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPriceNewOrder->Location = System::Drawing::Point(244, 556);
            this->textBoxPriceNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxPriceNewOrder->Name = L"textBoxPriceNewOrder";
            this->textBoxPriceNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxPriceNewOrder->TabIndex = 49;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label20->Location = System::Drawing::Point(303, 551);
            this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(298, 130);
            this->label20->TabIndex = 36;
            this->label20->Text = L"M�thode de paiement :";
            // 
            // textBoxPaymentMethodNewOrder
            // 
            this->textBoxPaymentMethodNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPaymentMethodNewOrder->Location = System::Drawing::Point(609, 556);
            this->textBoxPaymentMethodNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxPaymentMethodNewOrder->Name = L"textBoxPaymentMethodNewOrder";
            this->textBoxPaymentMethodNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxPaymentMethodNewOrder->TabIndex = 45;
            // 
            // textBoxFloorDeliveryNewOrder
            // 
            this->textBoxFloorDeliveryNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxFloorDeliveryNewOrder->Location = System::Drawing::Point(1720, 166);
            this->textBoxFloorDeliveryNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxFloorDeliveryNewOrder->Name = L"textBoxFloorDeliveryNewOrder";
            this->textBoxFloorDeliveryNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxFloorDeliveryNewOrder->TabIndex = 42;
            this->textBoxFloorDeliveryNewOrder->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label14->Location = System::Drawing::Point(1467, 161);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(245, 130);
            this->label14->TabIndex = 30;
            this->label14->Text = L"Etage LIVRAISON :";
            // 
            // textBoxStreetNameAdrDeliveryNewOrder
            // 
            this->textBoxStreetNameAdrDeliveryNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxStreetNameAdrDeliveryNewOrder->Location = System::Drawing::Point(1406, 163);
            this->textBoxStreetNameAdrDeliveryNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxStreetNameAdrDeliveryNewOrder->Name = L"textBoxStreetNameAdrDeliveryNewOrder";
            this->textBoxStreetNameAdrDeliveryNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxStreetNameAdrDeliveryNewOrder->TabIndex = 22;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label9->Location = System::Drawing::Point(1084, 161);
            this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(318, 130);
            this->label9->TabIndex = 20;
            this->label9->Text = L"Nom de rue LIVRAISON :";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label5->Location = System::Drawing::Point(666, 161);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(355, 130);
            this->label5->TabIndex = 17;
            this->label5->Text = L"Num�ro de rue LIVRAISON :";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label7->Location = System::Drawing::Point(301, 161);
            this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(302, 130);
            this->label7->TabIndex = 10;
            this->label7->Text = L"Date de naissance :";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label23->Location = System::Drawing::Point(4, 161);
            this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(232, 130);
            this->label23->TabIndex = 38;
            this->label23->Text = L"Pr�nom client :";
            // 
            // textBoxFirstNameClientNewOrder
            // 
            this->textBoxFirstNameClientNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxFirstNameClientNewOrder->Location = System::Drawing::Point(244, 166);
            this->textBoxFirstNameClientNewOrder->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxFirstNameClientNewOrder->Name = L"textBoxFirstNameClientNewOrder";
            this->textBoxFirstNameClientNewOrder->Size = System::Drawing::Size(21, 31);
            this->textBoxFirstNameClientNewOrder->TabIndex = 47;
            // 
            // dateTimePickerBirthDateNewOrder
            // 
            this->dateTimePickerBirthDateNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerBirthDateNewOrder->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerBirthDateNewOrder->Location = System::Drawing::Point(607, 163);
            this->dateTimePickerBirthDateNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dateTimePickerBirthDateNewOrder->Name = L"dateTimePickerBirthDateNewOrder";
            this->dateTimePickerBirthDateNewOrder->Size = System::Drawing::Size(25, 31);
            this->dateTimePickerBirthDateNewOrder->TabIndex = 18;
            // 
            // textBoxNumberAdrDeliveryNewOrder
            // 
            this->textBoxNumberAdrDeliveryNewOrder->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNumberAdrDeliveryNewOrder->Location = System::Drawing::Point(1025, 163);
            this->textBoxNumberAdrDeliveryNewOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNumberAdrDeliveryNewOrder->Name = L"textBoxNumberAdrDeliveryNewOrder";
            this->textBoxNumberAdrDeliveryNewOrder->Size = System::Drawing::Size(25, 31);
            this->textBoxNumberAdrDeliveryNewOrder->TabIndex = 11;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->ColumnCount = 7;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                38)));
            this->tableLayoutPanel6->Controls->Add(this->label22, 3, 0);
            this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(1924, 59);
            this->tableLayoutPanel6->TabIndex = 10;
            this->tableLayoutPanel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel6_Paint);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label22.Image")));
            this->label22->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label22->Location = System::Drawing::Point(772, 0);
            this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(360, 59);
            this->label22->TabIndex = 1;
            this->label22->Text = L"x";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1924, 905);
            this->Controls->Add(this->panel1);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
            this->tableLayoutPanelHotbar->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->tabAffichage->ResumeLayout(false);
            this->tabClient->ResumeLayout(false);
            this->tableLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tableLayoutPanelClient->ResumeLayout(false);
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->PerformLayout();
            this->tabCommandes->ResumeLayout(false);
            this->tabCommandes->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->tableLayoutPanel16->ResumeLayout(false);
            this->tabEmployes->ResumeLayout(false);
            this->tabEmployes->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->tableLayoutPanelEmployes->ResumeLayout(false);
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanelDetailEmployes->ResumeLayout(false);
            this->tableLayoutPanelDetailEmployes->PerformLayout();
            this->tabStocks->ResumeLayout(false);
            this->tabStocks->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->tableLayoutPanelStocks->ResumeLayout(false);
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanelDetailStocks->ResumeLayout(false);
            this->tableLayoutPanelDetailStocks->PerformLayout();
            this->tabStats->ResumeLayout(false);
            this->tableLayoutPanel5->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
            this->tableLayoutPanel11->ResumeLayout(false);
            this->tableLayoutPanel13->ResumeLayout(false);
            this->tableLayoutPanel13->PerformLayout();
            this->tableLayoutPanel14->ResumeLayout(false);
            this->tabCreationCommande->ResumeLayout(false);
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel12->ResumeLayout(false);
            this->tableLayoutPanel15->ResumeLayout(false);
            this->tableLayoutPanel15->PerformLayout();
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->ResumeLayout(false);

        }

#pragma endregion
		
	// chargement de la page
    private: System::Void updateForms() {
        SqlServices^ DB = gcnew SqlServices();
        DB->ConnectDB();
        this->dataGridView1->DataSource = DB->ExecuteSQL("Select Client.Id_Client , Last_Client , First_Client , Birth_Date , Number_Adr , Street_Adr,Floor , City_Name, Post_Code FROM[projetPOO].[dbo].[Client] join[projetPOO].[dbo].[Live_InC] ON Live_InC.Id_Client = Client.Id_Client join[projetPOO].[dbo].[Address] ON Address.Id_Adr = Live_InC.Id_Adr join[projetPOO].[dbo].[residence_cities] ON residence_cities.Id_City = Address.Id_City");
        this->dataGridView2->DataSource = DB->ExecuteSQL("Select Commands.Id_Command , Delivery_Date, Emissions_Date, Reference_command,Last_Client,First_Client,Birth_Date , A.Number_Adr AS Number_Adr_LIVRAISON , A.Street_Adr AS Street_Adr_LIVRAISON , A.Floor AS Floor_LIVRAISON , C.City_Name AS City_Name_LIVRAISON , C.Post_Code AS Post_Name_LIVRAISON,B.Number_Adr AS Number_Adr_FACTURATION , B.Street_Adr AS Street_Adr_FACTURATION , B.Floor AS Floor_FACTURATION , D.City_Name AS City_Name_FACTURATION , D.Post_Code AS Post_Name_FACTURATION , Include.quantity , Designate , Pay_Date , Price,Method_Name from[projetPOO].[dbo].[Commands] join [projetPOO].[dbo].[Client] ON Client.Id_Client = Commands.Id_Client join [projetPOO].[dbo].[Facturation] On Facturation.Id_Command = Commands.Id_Command join [projetPOO].[dbo].[Delivery] On Delivery.Id_Command = Commands.Id_Command join [projetPOO].[dbo].[Address] AS A ON A.Id_Adr = Facturation.Id_Adr join [projetPOO].[dbo].[Address] AS B ON B.Id_Adr = Delivery.Id_Adr join [projetPOO].[dbo].[residence_cities] AS C ON A.Id_City = C.Id_City join [projetPOO].[dbo].[residence_cities] AS D ON B.Id_City = D.Id_City join [projetPOO].[dbo].[Include]  ON Commands.Id_Command = Include.Id_Command join [projetPOO].[dbo].[Stocks]  ON Stocks.Id_Produit = Include.Id_Produit join [projetPOO].[dbo].[Payment_Details] On Payment_Details.Id_Command = Commands.Id_Command join [projetPOO].[dbo].[Payment_Methods] On Payment_Details.Id_Method = Payment_Methods.Id_Method");
        this->dataGridView3->DataSource = DB->ExecuteSQL("Select Personnel.Id_Personnel , LAST_Personnel , FIRST_Personnel , Hire_Date ,Id_Superior,  Number_Adr , Street_Adr,Floor , City_Name, Post_Code  FROM[projetPOO].[dbo].[Personnel] join[projetPOO].[dbo].[Live_InP] ON Live_InP.Id_Personnel = Personnel.Id_Personnel join[projetPOO].[dbo].[Address] ON Address.Id_Adr = Live_InP.Id_Adr join[projetPOO].[dbo].[residence_cities] ON residence_cities.Id_City = Address.Id_City");
        this->dataGridView4->DataSource = DB->ExecuteSQL("Select * FROM [projetPOO].[dbo].[Stocks] ");
        delete DB;
    }
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SizeMode = TabSizeMode::Fixed;
		this->tabAffichage->ItemSize = System::Drawing::Size(0, 1);
		this->tabAffichage->Appearance = TabAppearance::Buttons;	
		try
		{
            updateForms();
        }
		catch (const std::exception &)
		{
			MessageBox::Show("Erreur de connexion � la base de donn�es");
		}
	}
	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		Application::DoEvents();
}

	private: System::Void ClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabClient;
	}
	private: System::Void CommandesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabCommandes;
	}
	private: System::Void StocksButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabStocks;
	}
	private: System::Void StatsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabStats;
	}
	private: System::Void EmployesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabEmployes;
	}
    private: System::Void buttonCreateCommande_Click(System::Object^ sender, System::EventArgs^ e) {
        this->tabAffichage->SelectedTab = tabCreationCommande;
    }
	// autres actions sur la page
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void tableLayoutPanel15_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
       private: System::Void dataGridView1_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
           if (e->RowIndex >= 0) {
               DataRowView^ drv = (DataRowView^)dataGridView1->Rows[e->RowIndex]->DataBoundItem;
               DataRow^ test = drv->Row;
               textBoxNomClient->Text = test["Last_Client"]->ToString();
               textBoxPr�nomClient->Text = test["First_Client"]->ToString();
               textBoxNumRue->Text = test["Number_Adr"]->ToString();
               textBoxNomRue->Text = test["Street_Adr"]->ToString();
               textBoxEtage->Text = test["Floor"]->ToString();
               textBoxVille->Text = test["City_Name"]->ToString();
               textBoxCodePostal->Text = test["Post_Code"]->ToString();
               textBoxClientId->Text = test["Id_Client"]->ToString();
               dateTimePickerBirthDate->Text = test["Birth_Date"]->ToString();
           }
       }
       private: System::Void dataGridView1_CellClick1(System::Object^ sender, DataGridViewCellEventArgs^ e) {
       }
       
private: System::Void tableLayoutPanelClient_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Clients^ Client = gcnew Clients();
	Client->Create( textBoxClientId, textBoxNomClient, textBoxPr�nomClient, dateTimePickerBirthDate, textBoxNumRue , textBoxNomRue, textBoxEtage, textBoxVille, textBoxCodePostal);
    updateForms();
}
private: System::Void textBoxIdClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel5_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void buttonSeuilR_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL("SELECT Id_Produit FROM [projetPOO].[dbo].[Stocks] WHERE [projetPOO].[dbo].[Stocks].[Restocking_Threshold]	> [projetPOO].[dbo].[Stocks].[Quantity] ; ");
}
private: System::Void buttonPanier_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL("SELECT AVG(total) FROM (SELECT Id_Command,SUM(Include.quantity*Product_Price) AS total FROM [projetPOO].[dbo].[Include] INNER JOIN [projetPOO].[dbo].[Stocks] ON [projetPOO].[dbo].[Include].[Id_Produit] = [projetPOO].[dbo].[Stocks].[Id_Produit] GROUP BY Id_Command) AS totals");
}
private: System::Void buttonArticlesLesPlusVendus_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL("SELECT TOP 10 [Id_Produit], SUM(Include.quantity) Qte FROM [projetPOO].[dbo].[Include]  GROUP BY [Id_Produit] ORDER BY Qte DESC");
}
private: System::Void buttonArticlesLesMoinsVendus_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL("SELECT TOP 10 [Id_Produit], SUM(Include.quantity) Qte FROM[projetPOO].[dbo].[Include] GROUP BY[Id_Produit] ORDER BY Qte ASC");
}
private: System::Void buttonValeurCommercialeStock_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL("Select Sum(Product_Price - (Tva_Rate * Product_Price / 100) )FROM[projetPOO].[dbo].[Stocks]");
}
private: System::Void buttonValeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL(" Select sum(Product_Price) AS Valeur_Cormercial FROM [projetPOO].[dbo].[Stocks]");
}
private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL(" SELECT  SUM(Include.quantity * Product_Price ) AS profit FROM [projetPOO].[dbo].[Commands] JOIN [projetPOO].[dbo].[Include] ON Include.Id_Command = Commands.Id_Command JOIN [projetPOO].[dbo].[Stocks] ON Stocks.Id_Produit = Include.Id_Produit WHERE MONTH([projetPOO].[dbo].[Commands].[Emissions_Date]) = 7 AND YEAR([projetPOO].[dbo].[Commands].[Emissions_Date]) = 2010");
}
private: System::Void buttonAchatsClient_Click(System::Object^ sender, System::EventArgs^ e) {
    SqlServices^ DB = gcnew SqlServices();
    DB->ConnectDB();
    this->dataGridView6->DataSource = DB->ExecuteSQL(" SELECT  SUM(Include.quantity * Product_Price ) AS Profit FROM[projetPOO].[dbo].[Commands] JOIN[projetPOO].[dbo].[Client] ON Client.Id_Client = Commands.Id_Client JOIN[projetPOO].[dbo].[Include] ON Include.Id_Command = Commands.Id_Command JOIN[projetPOO].[dbo].[Stocks] ON Stocks.Id_Produit = Include.Id_Produit WHERE Client.Id_Client = 7");
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    Clients^ Client = gcnew Clients();
    Client->Update(textBoxClientId, textBoxNomClient, textBoxPr�nomClient, dateTimePickerBirthDate, textBoxNumRue, textBoxNomRue, textBoxEtage, textBoxVille, textBoxCodePostal);
    updateForms();
}
private: System::Void tableLayoutPanel7_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel15_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}