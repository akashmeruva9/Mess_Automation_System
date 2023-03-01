#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include <ctime>
using namespace std;

namespace MessAutomation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ rollnumberinput;



	private: System::Windows::Forms::ImageList^ imageList1;



	private: System::Windows::Forms::Button^ breakfast;
	private: System::Windows::Forms::Button^ lunch;
	private: System::Windows::Forms::Button^ snacks;
	private: System::Windows::Forms::Button^ dinner;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ nametext;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ rolltext;
	private: System::Windows::Forms::TextBox^ tempbox1;
	private: System::Windows::Forms::Label^ label6;

















	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rollnumberinput = (gcnew System::Windows::Forms::TextBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->breakfast = (gcnew System::Windows::Forms::Button());
			this->lunch = (gcnew System::Windows::Forms::Button());
			this->snacks = (gcnew System::Windows::Forms::Button());
			this->dinner = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->nametext = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tempbox1 = (gcnew System::Windows::Forms::TextBox());
			this->rolltext = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Registeration number";
			// 
			// rollnumberinput
			// 
			this->rollnumberinput->Location = System::Drawing::Point(32, 101);
			this->rollnumberinput->Name = L"rollnumberinput";
			this->rollnumberinput->Size = System::Drawing::Size(279, 22);
			this->rollnumberinput->TabIndex = 1;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// breakfast
			// 
			this->breakfast->BackColor = System::Drawing::Color::Transparent;
			this->breakfast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->breakfast->Location = System::Drawing::Point(419, 289);
			this->breakfast->Name = L"breakfast";
			this->breakfast->Size = System::Drawing::Size(56, 55);
			this->breakfast->TabIndex = 7;
			this->breakfast->Text = L"B";
			this->breakfast->UseVisualStyleBackColor = false;
			this->breakfast->Click += gcnew System::EventHandler(this, &MainForm::breakfast_Click);
			// 
			// lunch
			// 
			this->lunch->BackColor = System::Drawing::Color::Transparent;
			this->lunch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lunch->Location = System::Drawing::Point(510, 289);
			this->lunch->Name = L"lunch";
			this->lunch->Size = System::Drawing::Size(55, 54);
			this->lunch->TabIndex = 8;
			this->lunch->Text = L"L";
			this->lunch->UseVisualStyleBackColor = false;
			this->lunch->Click += gcnew System::EventHandler(this, &MainForm::lunch_Click);
			// 
			// snacks
			// 
			this->snacks->BackColor = System::Drawing::Color::Transparent;
			this->snacks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->snacks->Location = System::Drawing::Point(596, 289);
			this->snacks->Name = L"snacks";
			this->snacks->Size = System::Drawing::Size(55, 54);
			this->snacks->TabIndex = 9;
			this->snacks->Text = L"S";
			this->snacks->UseVisualStyleBackColor = false;
			this->snacks->Click += gcnew System::EventHandler(this, &MainForm::snacks_Click);
			// 
			// dinner
			// 
			this->dinner->BackColor = System::Drawing::Color::Transparent;
			this->dinner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dinner->Location = System::Drawing::Point(680, 289);
			this->dinner->Name = L"dinner";
			this->dinner->Size = System::Drawing::Size(54, 54);
			this->dinner->TabIndex = 10;
			this->dinner->Text = L"D";
			this->dinner->UseVisualStyleBackColor = false;
			this->dinner->Click += gcnew System::EventHandler(this, &MainForm::dinner_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label2->Location = System::Drawing::Point(834, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"B - Breakfast";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Salmon;
			this->label3->Location = System::Drawing::Point(834, 313);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"L - Lunch";
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(834, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"S - Snacks";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PaleGreen;
			this->label5->Location = System::Drawing::Point(834, 366);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"D - Dinner";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gold;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(96, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 30);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Submit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(510, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 36);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// nametext
			// 
			this->nametext->AutoSize = true;
			this->nametext->BackColor = System::Drawing::Color::White;
			this->nametext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nametext->Location = System::Drawing::Point(234, 51);
			this->nametext->Name = L"nametext";
			this->nametext->Size = System::Drawing::Size(64, 25);
			this->nametext->TabIndex = 18;
			this->nametext->Text = L"Name";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->tempbox1);
			this->panel1->Controls->Add(this->rolltext);
			this->panel1->Controls->Add(this->nametext);
			this->panel1->Location = System::Drawing::Point(357, 46);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(576, 413);
			this->panel1->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(37, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 16);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Time : ";
			// 
			// tempbox1
			// 
			this->tempbox1->Location = System::Drawing::Point(37, 108);
			this->tempbox1->Name = L"tempbox1";
			this->tempbox1->Size = System::Drawing::Size(100, 22);
			this->tempbox1->TabIndex = 20;
			this->tempbox1->TextChanged += gcnew System::EventHandler(this, &MainForm::tempbox1_TextChanged);
			// 
			// rolltext
			// 
			this->rolltext->AutoSize = true;
			this->rolltext->BackColor = System::Drawing::Color::White;
			this->rolltext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rolltext->Location = System::Drawing::Point(234, 103);
			this->rolltext->Name = L"rolltext";
			this->rolltext->Size = System::Drawing::Size(118, 25);
			this->rolltext->TabIndex = 19;
			this->rolltext->Text = L"Roll Number";
			this->rolltext->Click += gcnew System::EventHandler(this, &MainForm::label6_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(982, 503);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dinner);
			this->Controls->Add(this->snacks);
			this->Controls->Add(this->lunch);
			this->Controls->Add(this->breakfast);
			this->Controls->Add(this->rollnumberinput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
     private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {

     }
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	StreamReader^ input_file = File::OpenText("data12.txt");
	String^ line;
	String^ input = rollnumberinput->Text;
	if (input->Length != 13)
		MessageBox::Show("Invalid Application Number");
	else {
		bool a = false;

		while ((line = input_file->ReadLine()) != nullptr) {
			String^ tmp1 = input->Replace(" " , "");
			String^ tmp2 = line->Replace(" ", "");
			if (tmp1 == tmp2) {

				rolltext->Text = input;
				nametext->Text = input_file->ReadLine();
				a = true;

				String^ temp = input_file->ReadLine();
				for (int i = 0; i < 4; i++)
				{
					if (i == 0)
					{
						if (temp[i] == 'y')
							this->breakfast->BackColor = Color().Green;
						else
							this->breakfast->BackColor = Color().Red;
					}
					else if (i == 1)
					{
						if (temp[i] == 'y')
							this->lunch->BackColor = Color().Green;
						else
							this->lunch->BackColor = Color().Red;
					}
					else if (i == 2)
					{
						if (temp[i] == 'y')
							this->snacks->BackColor = Color().Green;
						else
							this->snacks->BackColor = Color().Red;
					}
					else if (i == 3)
					{
						if (temp[i] == 'y')
							this->dinner->BackColor = Color().Green;
						else
							this->dinner->BackColor = Color().Red;
					}
				}

				//string ctime = Time();
				//String^ cutime = gcnew String(ctime.c_str());
				//tempbox1->Text = currtime;

				String^ cutime = tempbox1->Text;
				String^ currtime = cutime->Substring(0, 2);
				String^ currmeal;

				if (currtime == "08")
				{
					currmeal = "b";
					breakfast->Enabled = true;
					lunch->Enabled = false;
					this->lunch->BackColor = Color().Silver;
					snacks->Enabled = false;
					this->snacks->BackColor = Color().Silver;
					dinner->Enabled = false;
					this->dinner->BackColor = Color().Silver;
				}
				else if (currtime == "12" || currtime == "13")
				{
					currmeal = "l";
					lunch->Enabled = true;
					breakfast->Enabled = false;
					this->breakfast->BackColor = Color().Silver;
					snacks->Enabled = false;
					this->snacks->BackColor = Color().Silver;
					dinner->Enabled = false;
					this->dinner->BackColor = Color().Silver;
				}
				else if (currtime == "16")
				{
					currmeal = "s";
					snacks->Enabled = true;
					lunch->Enabled = false;
					this->lunch->BackColor = Color().Silver;
					breakfast->Enabled = false;
					this->breakfast->BackColor = Color().Silver;
					dinner->Enabled = false;
					this->dinner->BackColor = Color().Silver;
				}
				else if (currtime == "20")
				{
					currmeal = "d";
					dinner->Enabled = true;
					lunch->Enabled = false;
					this->lunch->BackColor = Color().Silver;
					snacks->Enabled = false;
					this->snacks->BackColor = Color().Silver;
					breakfast->Enabled = false;
					this->breakfast->BackColor = Color().Silver;
				}
				else
				{
					lunch->Enabled = false;
					this->lunch->BackColor = Color().Silver;
					snacks->Enabled = false;
					this->snacks->BackColor = Color().Silver;
					breakfast->Enabled = false;
					this->breakfast->BackColor = Color().Silver;
					dinner->Enabled = false;
					this->dinner->BackColor = Color().Silver;
				}




				break;
			}

		}

		if (a == false)
		{
			MessageBox::Show("ID Not Found");
			rollnumberinput->Text = "";
		}


		


	}

}

	   const std::string Date() {
		   time_t     now = time(0);
		   struct tm  tstruct;
		   char       buf[80];
		   tstruct = *localtime(&now);
		   strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);

		   return buf;
	   }
	   const std::string Time() {
		   time_t     now = time(0);
		   struct tm  tstruct;
		   char       buf[80];
		   tstruct = *localtime(&now);
		   strftime(buf, sizeof(buf), "%X", &tstruct);

		   return buf;
	   }
private: System::Void breakfast_Click(System::Object^ sender, System::EventArgs^ e) {
	if (breakfast->BackColor == Color().Green)
	{
		breakfast->BackColor = Color().Red;
		
	}
}
private: System::Void lunch_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lunch->BackColor == Color().Green)
	{
		lunch->BackColor = Color().Red;

	}
}
private: System::Void snacks_Click(System::Object^ sender, System::EventArgs^ e) {
	if (snacks->BackColor == Color().Green)
	{
		snacks->BackColor = Color().Red;

	}
}
private: System::Void dinner_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dinner->BackColor == Color().Green)
	{
		dinner->BackColor = Color().Red;

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	lunch->Enabled = false;
	this->lunch->BackColor = Color().Silver;
	snacks->Enabled = false;
	this->snacks->BackColor = Color().Silver;
	breakfast->Enabled = false;
	this->breakfast->BackColor = Color().Silver;
	dinner->Enabled = false;
	this->dinner->BackColor = Color().Silver;
	rollnumberinput->Text = "";
	rolltext->Text = "";
	nametext->Text = "";

}
private: System::Void tempbox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}