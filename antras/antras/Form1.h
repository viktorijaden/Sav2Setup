#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			radioButton1->Checked = true;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;

	private: System::String^ failo_vardas = "";

	private: System::Windows::Forms::GroupBox^ groupBox5;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ failasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ išsaugotiKaipToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uždarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pagalbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->išsaugotiKaipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(11, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(350, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vardas, Pavardė";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(132, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Atnaujinti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Įvesti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(6, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(338, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(367, 46);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pažymiai";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pažymiai įvedami atskiriant tarpais";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(6, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Location = System::Drawing::Point(573, 46);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(100, 100);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Egzaminas";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(6, 29);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(88, 20);
			this->textBox3->TabIndex = 2;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->listBox1);
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Location = System::Drawing::Point(11, 152);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(662, 312);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Studentai ir rezultatai";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 40);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(650, 225);
			this->listBox1->TabIndex = 7;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(562, 16);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(478, 16);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(167, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Kopijuoti pažymėtus";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Kopijuoti visus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox4);
			this->groupBox5->Location = System::Drawing::Point(11, 470);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(662, 250);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Laukelis kopijavimui, saugojimui ir pastaboms";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 19);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(650, 225);
			this->textBox4->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(547, 720);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 35);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Valyti";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(269, 720);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 35);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Uždaryti";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(143, 720);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 35);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Išsaugoti Kaip";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(17, 720);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 35);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Atidaryti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->failasToolStripMenuItem,
					this->pagalbaToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(684, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// failasToolStripMenuItem
			// 
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->atidarytiToolStripMenuItem,
					this->išsaugotiKaipToolStripMenuItem, this->uždarytiToolStripMenuItem
			});
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->failasToolStripMenuItem->Text = L"Failas";
			this->failasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::failasToolStripMenuItem_Click);
			// 
			// atidarytiToolStripMenuItem
			// 
			this->atidarytiToolStripMenuItem->Name = L"atidarytiToolStripMenuItem";
			this->atidarytiToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->atidarytiToolStripMenuItem->Text = L"Atidaryti";
			this->atidarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::atidarytiToolStripMenuItem_Click);
			// 
			// išsaugotiKaipToolStripMenuItem
			// 
			this->išsaugotiKaipToolStripMenuItem->Name = L"išsaugotiKaipToolStripMenuItem";
			this->išsaugotiKaipToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->išsaugotiKaipToolStripMenuItem->Text = L"Išsaugoti kaip";
			this->išsaugotiKaipToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::išsaugotiKaipToolStripMenuItem_Click);
			// 
			// uždarytiToolStripMenuItem
			// 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->uždarytiToolStripMenuItem->Text = L"Uždaryti";
			this->uždarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uždarytiToolStripMenuItem_Click);
			// 
			// pagalbaToolStripMenuItem
			// 
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			this->pagalbaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pagalbaToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->apieToolStripMenuItem->Text = L"Apie";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::apieToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 761);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"VD";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ info = textBox1->Text;
		String^ paz = textBox2->Text;
		String^ egz = textBox3->Text;
		int egzSk = Int32::Parse(egz);
		double rez = 0.0;
		double gal = 0.0;

		array<String^>^ ivertinimai = paz->Split(' ');

		if (radioButton1->Checked){
			for each (String ^ pazymys in ivertinimai) {
				gal += Double::Parse(pazymys);
			}
			double vid = gal / ivertinimai->Length;
			rez = 0.4 * vid + 0.6 * egzSk;
		}
		else if (radioButton2->Checked) {
			array<double>^ pazymiai = gcnew array<double>(ivertinimai->Length);

			for (int i = 0; i < ivertinimai->Length; i++) {
				pazymiai[i] = Double::Parse(ivertinimai[i]);
			}

			if (ivertinimai->Length % 2 == 0) {
				rez = (pazymiai[ivertinimai->Length / 2 - 1] + pazymiai[ivertinimai->Length / 2]) / 2.0;
			}
			else {
				rez = pazymiai[ivertinimai->Length / 2];
			}
		}
		String^ isvedimas = String::Format("{0}", info);
		for each (String ^ pazymys in ivertinimai) {
			isvedimas += String::Format(" {0}", pazymys);
		}
		isvedimas += String::Format(" Egzamino balas: {0}", egzSk);
		isvedimas += String::Format("Galutinis: {0}", rez);
		listBox1->Items->Add(isvedimas);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ kopija = "";
		for each (Object ^ item in listBox1->Items) {
			kopija += item->ToString() + "\r\n";
		}
		textBox4->Text = kopija;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedItem != nullptr) {
			textBox4->Text = listBox1->SelectedItem->ToString();
		}
		else {
			textBox4->Text = "Pasirinkite studenta.";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->InitialDirectory = "..\\";
		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
			textBox4->Text = (sr->ReadToEnd());
			failo_vardas = openFileDialog1->FileName;
			sr->Close();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->InitialDirectory = "..\\";
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		String^ z = textBox4->Text;
		rep:
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::StreamWriter^ sm = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
			sm->Write(z);
			sm->Close();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Clear();
	}
	private: System::Void failasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void atidarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button5_Click(sender, e);
	}
	private: System::Void išsaugotiKaipToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button6_Click(sender, e);
	}
	private: System::Void uždarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button7_Click(sender, e);
	}
	private: System::Void pagalbaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Iveskite studento duomenis, atlikite tolimesnius veiksmus", "Pagalba", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void apieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Antras savarankiškas darbas", "Apie", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
