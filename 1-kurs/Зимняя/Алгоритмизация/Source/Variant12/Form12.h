#pragma once
// ���������� ��� ������ � �������
#include <malloc.h>
// ��� ��������� ��������� ���������� ����������
#include <math.h>
// ��� ������ �� ��������
#include <string>
using namespace System;

namespace Variant12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// ������� �1 ���������  ������������ ���������� ������
	double *A;

	// ������� �2 ���������  ������������ ��������� �������
	int **A2;
	int **B2;
	int **C2;
	// ������ �� ���������� �� �������
	int T[4][2]={ { 1,3 },{ 7,1 },{3,5},{4,2} };

	public ref class Form12 : public System::Windows::Forms::Form
	{
	public:
		Form12(void)
		{
			InitializeComponent();
			// ������ ���������� ��� ������� 1
			// �������� ������ �� �����
			// ������ ���������� ��� ������� 2
			// ������ ���������� ����� ��� ������ ����������� ��������
			dataGridView3->RowCount = 4;
			dataGridView4->RowCount = 4;
			dataGridView5->RowCount = 4;
			//
			// ������� ������ ��� ����� ������� �
			A2 = new int*[4];//
			// ������� ������ ��� ��������� ������ ������ ������� �
			for (int i = 0; i < 4; i++) {A2[i] = new int[2];}
			// �� ���� ��������� ������� 
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 2; j++) {
					//�������� ��� ��������� ���������� �� ���������� ������� � �� �������
					A2[i][j] = T[i][j];
					// � ����� ��������� � ������� �� ������
					this->dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(A2[i][j]);
				}
			}
			// ������� ������ ��� ����� �������� � � �
			B2 = new int*[4];
			C2 = new int*[4];
			// � ��� ��������� �����
			for (int i = 0; i < 4; i++) { 
				B2[i] = new int[2]; 
				C2[i] = new int[2];
			}
		}

	protected:

		~Form12()
		{
			// ���������� ������ �������� ������� 2
			// ��������� ������ ���������
			for (int i = 0; i < 4; i++) { free(A2[i]); }
			for (int i = 0; i < 4; i++) { free(B2[i]); }
			for (int i = 0; i < 4; i++) { free(C2[i]); }
			// ��������� ������� ������ �� ������
			free(A2);
			free(B2);
			free(C2);
			//------------------ ������ ��������� �������
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ListBox^  listBox1;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form12::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(726, 484);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(718, 458);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"�������1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(374, 10);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(122, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"������ ������������";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(196, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"������ ��������";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(424, 378);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"�����";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(526, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(526, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"���������� �������������:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(230, 378);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"�����";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(424, 418);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(239, 418);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(409, 395);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"�������������:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(207, 395);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"�������������:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column2 });
			this->dataGridView2->Location = System::Drawing::Point(376, 26);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(144, 349);
			this->dataGridView2->TabIndex = 3;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Col1";
			this->Column2->Name = L"Column2";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(207, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(82, 349);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Col1";
			this->Column1->Name = L"Column1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(295, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form12::button1_Click);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 452);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->dataGridView5);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(718, 458);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"�������2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(471, 125);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(114, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"���������: ������ �";
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column7,
					this->Column8
			});
			this->dataGridView5->Location = System::Drawing::Point(463, 149);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(240, 150);
			this->dataGridView5->TabIndex = 8;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"�1";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"�2";
			this->Column8->Name = L"Column8";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(463, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"����������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form12::button2_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(192, 194);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 13);
			this->label15->TabIndex = 6;
			this->label15->Text = L"������ �";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column5,
					this->Column6
			});
			this->dataGridView4->Location = System::Drawing::Point(195, 221);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(240, 150);
			this->dataGridView4->TabIndex = 5;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"�1";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"�2";
			this->Column6->Name = L"Column6";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column3,
					this->Column4
			});
			this->dataGridView3->Location = System::Drawing::Point(195, 30);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(240, 150);
			this->dataGridView3->TabIndex = 4;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"C1";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"C2";
			this->Column4->Name = L"Column4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(192, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"������ �";
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 452);
			this->label2->TabIndex = 2;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox1);
			this->tabPage3->Controls->Add(this->richTextBox1);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(718, 458);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"�������3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(215, 180);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(212, 272);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(215, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(495, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"���������� ��������� ����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form12::button3_Click);
			// 
			// label20
			// 
			this->label20->Location = System::Drawing::Point(212, 84);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(498, 64);
			this->label20->TabIndex = 7;
			this->label20->Text = L"��������� ��� ����� � ������ ������ ��������� ���������";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(273, 61);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(437, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(273, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(437, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(273, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(437, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(212, 64);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 13);
			this->label19->TabIndex = 3;
			this->label19->Text = L"������ 3:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(212, 39);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(55, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"������ 2:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(212, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"������ 1:";
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Location = System::Drawing::Point(3, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 452);
			this->label3->TabIndex = 0;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(433, 180);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(277, 264);
			this->listBox1->TabIndex = 10;
			// 
			// Form12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 484);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form12";
			this->Text = L"������� 12 ���������� ����� ";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

// ������� ���������� � ������� �������� �� ����������
private: int MasCos(double *A,int n) {
		int c = 0;// ���������� ��� �������� ������������� ��������
		for (int i = 0; i < n; i++) {// �� ���� ���������
			A[i] = cos(A[i]);// �������� �� �� �������
			A[i] < 0 ?  c += 1 : i = i;// ����������� ������� ���� �������� ������ ����
			// ��� �������� �������: ������� ������������� �� ������ �� ������� ��� �����?
			// ��� ��������� ����� ������, ���� �������� ������ � ����� ������� �� ������� �����
			//  ������������� �� ������
	  }
		return c;// ���������� ���������� ������������� ���������
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// ������� ������ ��� ������� �� ���������� ��������� � ������� �����
	A = new double[dataGridView1->RowCount * sizeof(double)];
	// ��� ������ ������� ������ �� �� ���������� ����� ��� � � ������
	dataGridView2->RowCount = dataGridView1->RowCount;
	double s = 0;//������� ���������� ��� �������� ����� ������������� ���������
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		// ������������ �������� ������� � ��� double � �������� ����������
		A[i]= Convert::ToDouble(this->dataGridView1->Rows[i]->Cells[0]->Value);
		// ����� ���������� ����� ������������� ��������� ������� �������
		A[i] < 0 ? s += A[i] : i = i;
	}
	// ������� ����� ������������� ��������� ��������� �������
	label6->Text= Convert::ToString(s);
	// ������� ������� ������������� ��������� � 
	// ������� ���� ������� ��� ������ ��������� �� �� ��������
	// � ���������� ���������� ������������� ���������
	int c = MasCos(A, dataGridView1->RowCount);
	s = 0; //������� ���������� ��� �������� ����� ������������� ���������
	// �������� ������ ������� ���������� ���������������� �������
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		// ������������ �������� ������� � ��� string � �������� ����������
		this->dataGridView2->Rows[i]->Cells[0]->Value = Convert::ToString(A[i]);
		// ����� ���������� ����� ������������� ��������� ������� �������
		A[i] < 0 ? s += A[i] : i = i;
	}
	// ������� ����� ������������� ��������� ������ �������
	label7->Text = Convert::ToString(s);
	// ������� ���������� ������������� ��������� ������ �������
	label10->Text = Convert::ToString(c);
	// ��������� ������ �������
	free(A);
}
// ������� ������������ �������� �������� �������
private: void MasMul(int **A, int **B, int **C) {
			 // �� ���� ��������� ��������
			 for (int i = 0; i < 4; i++) {// �� ���� ��������� ��������
				 for (int j = 0; j < 2; j++) {
				 C[i][j] = A[i][j] * B[i][j];// ��������� ��������� ��������� � ������ ������
			     }
			 }
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	// ��������� ������ � ���������� �������
	// �� ������� �������� �������
	for (int i = 0; i < 4; i++) {// �� �������
		for (int j = 0; j < 2; j++) { //�� ��������
			B2[i][j] = Convert::ToInt32(this->dataGridView4->Rows[i]->Cells[j]->Value);// ��������� ����� ����������� � �����
		}
	}
	// �������� ���� ������� ��� ���������� ������������
	MasMul(A2, B2, C2);
	// �� ���� ��������� ������������� ������� � ��������� ������� �� �����
	for (int i = 0; i < 4; i++) {// �� ���� �������
		for (int j = 0; j < 2; j++) { // �� ��������
			this->dataGridView5->Rows[i]->Cells[j]->Value = Convert::ToString(C2[i][j]); //������������ ����� � ������
		}
	}
}
// ������� ��������� ������ � ������ �����, 
// �������� ��� ���� ����� �� ��������� ���������
private: void insList(String ^s) {
	s->Trim();// ������� �������
	bool ins = s->Length != 0;// ������� ����������, �� ������ ������
	// ���������� ����� ������ � ��� ����� ������������
	for (int i= 0; i < listBox1->Items->Count; i++) {
		if (listBox1->Items[i]->ToString() == s) {
			ins = false;// ���� ������ ���� � ������ �� �������� ������� ���������� 
		}
	}
	ins? listBox1->Items->Add(s):ins=ins;// ��������� �� ������� ���� ��� ���������
	}

// ������� �������� ����� �� ������ � ��������� �� � ����� ������ ���� 
private: void GetWordList(String ^s) {
	const wchar_t *sep = L" ";// ������� �����������
	s->Trim();// ������� ������ ������� � ������ � ����� ������
	s += " ";//� ����� ���� ������ ��� ����� ��� ��������� ���������
	System::String^ ts = "";// ���������� ��� ������ �����
	for (int i = 0; i < s->Length; i++) {// �� �������� �������� ������
		if (s[i] == *sep) {//���� ������� ������ ���� �����������
			insList(ts);// ��������� ����� �������� ���������� ���������
			ts = "";// ������� ����� ������ ����� �����
		}
		else {
			ts += s[i];// � ���� �� ����������� �� ��������� � �������� �����
		}
	}
}

// ��������� ������ �� ����� �� ������ � ������, ��������� ���������
//��� ����� � ����� ������� � ������ � ����� �������� ������
private: bool WordInString(String ^w,String ^s) {
// � ���� ���������� ����� ���� �������
	return s->Contains(" "+w+" ");
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	// ������� ���� ������ ����������
	richTextBox1->Text = "";
	// ������� �������� �� ����� �� ������
	// ������ ��� 6 �������� ���������������
	// �������� ����� � ��� ���
	if (textBox1->Text->Length == 0) {
		richTextBox1->Text = richTextBox1->Text + "\r\n ������1 - ������ ��������";
	}
	if (textBox2->Text->Length == 0) {
		richTextBox1->Text = richTextBox1->Text + "\r\n ������2 - ������ ��������";
	}
	if (textBox3->Text->Length == 0) {
		richTextBox1->Text = richTextBox1->Text + "\r\n ������3 - ������ ��������";
	}
	// �������� ���������� ����� ������ (�� ������� 75)
	// ��� ���� ����� ����� ��������, ���� ���� ����� ����� ����� ������
	if (textBox1->Text->Length >75) {
		richTextBox1->Text = richTextBox1->Text + "\r\n ������1 - ����� ������ ����� 75";
	}
	if (textBox2->Text->Length >75) {
		richTextBox1->Text = richTextBox1->Text + "\r\n ������2 - ����� ������ ����� 75";
	}
	if (textBox3->Text->Length >75) {
		richTextBox1->Text = richTextBox1->Text + "\r\n ������3 - ����� ������ ����� 75";
	}
	// ��������� ��� ������������� ������ � �����
	richTextBox1->ScrollToCaret();
	// ������� ������ ����
	listBox1->Items->Clear();
	// ����� ���������������� ������� 
	textBox1->Text=textBox1->Text->Trim();
	textBox2->Text=textBox2->Text->Trim();
	textBox3->Text=textBox3->Text->Trim();
	// ������� �� ������ ������� ��� ���������� ��������� ��������� ����
	textBox1->Text = " " + textBox1->Text + " ";
	textBox2->Text = " " + textBox2->Text + " ";
	textBox3->Text = " " + textBox3->Text + " ";
	// ��������� ����� ������ ���� ���� �����
	GetWordList(textBox1->Text);
	GetWordList(textBox2->Text);
	GetWordList(textBox3->Text);
	// �� ������ ���� ��������� ��������
	// �������� �������� ����� ����������� ������� ����������� ��������
	// ���� �������� ���������, �� �� ����� �������
	// ���� ��� ����� �������� � ���������
	for (int i = 0; i < listBox1->Items->Count; i++) {
		// ���������� �� ����� �� ��� ��� ������?
		if (WordInString(listBox1->Items[i]->ToString(), textBox1->Text)&&
			WordInString(listBox1->Items[i]->ToString(), textBox2->Text)&&
			WordInString(listBox1->Items[i]->ToString(), textBox3->Text)) {
			// ������� ���������
			richTextBox1->Text = richTextBox1->Text +"\r\n ����� "+ listBox1->Items[i]->ToString()+" ���� �� ���� ��� �������";
		}
	}

	for (int i = 0; i < listBox1->Items->Count; i++) {
		// ���������� �� � ������ 1 � 2
		if (WordInString(listBox1->Items[i]->ToString(), textBox1->Text) &&
			WordInString(listBox1->Items[i]->ToString(), textBox2->Text)) {
			// ��������
			richTextBox1->Text = richTextBox1->Text + "\r\n ����� " + listBox1->Items[i]->ToString() + " ���� � ������� 1 � 2";
		}
	}
	for (int i = 0; i < listBox1->Items->Count; i++) {
		// ���������� �� � ������ 1 � 3
		if (WordInString(listBox1->Items[i]->ToString(), textBox1->Text) &&
			WordInString(listBox1->Items[i]->ToString(), textBox3->Text)) {
			// ��������
			richTextBox1->Text = richTextBox1->Text + "\r\n ����� " + listBox1->Items[i]->ToString() + " ���� � ������� 1 � 3";
		}
	}
	for (int i = 0; i < listBox1->Items->Count; i++) {
		// ���������� �� � ������ 2 � 3
		if (WordInString(listBox1->Items[i]->ToString(), textBox3->Text) &&
			WordInString(listBox1->Items[i]->ToString(), textBox2->Text)) {
			// ��������
			richTextBox1->Text = richTextBox1->Text + "\r\n ����� " + listBox1->Items[i]->ToString() + " ���� � ������� 2 � 3";
		}
	}
	// ��������� ��� ������������� ������ � �����
	richTextBox1->ScrollToCaret();
}

};
}
