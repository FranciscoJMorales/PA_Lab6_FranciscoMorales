#pragma once
#include "Poligono.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Pentagono.h"
#include "Hexagono.h"
#include "Heptagono.h"
#include "Octagono.h"
#include "Eneagono.h"
#include "Decagono.h"

namespace PA_Lab6_FranciscoMorales_1223319 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"No. de lados:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Longitud de los lados:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Longitud de la apotema:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(265, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"*Únicamente necesaria en polígonos de 5 o más lados";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(139, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Calcular perímetro";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(236, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Calcular área";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 218);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Poligono *figura;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		figura = nullptr;
		try {
			switch (Convert::ToInt32(textBox1->Text))
			{
			case 3:
				figura = new Triangulo(Convert::ToInt32(textBox2->Text));
				break;
			case 4:
				figura = new Cuadrado(Convert::ToInt32(textBox2->Text));
				break;
			case 5:
				figura = new Pentagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 6:
				figura = new Hexagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 7:
				figura = new Heptagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 8:
				figura = new Octagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 9:
				figura = new Eneagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 10:
				figura = new Decagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			default:
				MessageBox::Show("Los datos no son válidos.");
				break;
			}
			if (figura != nullptr) {
				MessageBox::Show("El perímetro es de: " + Convert::ToString(figura->ObtenerPerimetro()) + "cm", "Perímetro");
			}
		}
		catch (...) {
			MessageBox::Show("Los datos no son válidos.");
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		figura = nullptr;
		try {
			switch (Convert::ToInt32(textBox1->Text))
			{
			case 3:
				figura = new Triangulo(Convert::ToInt32(textBox2->Text));
				break;
			case 4:
				figura = new Cuadrado(Convert::ToInt32(textBox2->Text));
				break;
			case 5:
				figura = new Pentagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 6:
				figura = new Hexagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 7:
				figura = new Heptagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 8:
				figura = new Octagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 9:
				figura = new Eneagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			case 10:
				figura = new Decagono(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
				break;
			default:
				MessageBox::Show("Los datos no son válidos.");
				break;
			}
			if (figura != nullptr) {
				MessageBox::Show("El área es de: " + Convert::ToString(figura->ObtenerArea()) + "cm2", "Área");
			}
		}
		catch (...) {
			MessageBox::Show("Los datos no son válidos.");
		}
	}
};
}
