#pragma once

namespace formas1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete[] puntero;
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radio5;
	private: System::Windows::Forms::RadioButton^ radio10;
	private: System::Windows::Forms::RadioButton^ radio15;
	private: System::Windows::Forms::RadioButton^ radio20;

	private: System::Windows::Forms::Button^ generar;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radio5 = (gcnew System::Windows::Forms::RadioButton());
			this->radio10 = (gcnew System::Windows::Forms::RadioButton());
			this->radio15 = (gcnew System::Windows::Forms::RadioButton());
			this->radio20 = (gcnew System::Windows::Forms::RadioButton());
			this->generar = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// radio5
			// 
			this->radio5->AutoSize = true;
			this->radio5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->radio5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio5->ForeColor = System::Drawing::SystemColors::MenuText;
			this->radio5->Location = System::Drawing::Point(45, 87);
			this->radio5->Name = L"radio5";
			this->radio5->Size = System::Drawing::Size(195, 29);
			this->radio5->TabIndex = 0;
			this->radio5->TabStop = true;
			this->radio5->Text = L"Genera 5 numeros";
			this->radio5->UseVisualStyleBackColor = false;
			this->radio5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio5_CheckedChanged);
			// 
			// radio10
			// 
			this->radio10->AutoSize = true;
			this->radio10->BackColor = System::Drawing::SystemColors::HotTrack;
			this->radio10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio10->ForeColor = System::Drawing::SystemColors::MenuText;
			this->radio10->Location = System::Drawing::Point(45, 126);
			this->radio10->Name = L"radio10";
			this->radio10->Size = System::Drawing::Size(206, 29);
			this->radio10->TabIndex = 1;
			this->radio10->TabStop = true;
			this->radio10->Text = L"Genera 10 numeros";
			this->radio10->UseVisualStyleBackColor = false;
			this->radio10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio10_CheckedChanged);
			// 
			// radio15
			// 
			this->radio15->AutoSize = true;
			this->radio15->BackColor = System::Drawing::SystemColors::HotTrack;
			this->radio15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio15->ForeColor = System::Drawing::SystemColors::MenuText;
			this->radio15->Location = System::Drawing::Point(45, 163);
			this->radio15->Name = L"radio15";
			this->radio15->Size = System::Drawing::Size(206, 29);
			this->radio15->TabIndex = 2;
			this->radio15->TabStop = true;
			this->radio15->Text = L"Genera 15 numeros";
			this->radio15->UseVisualStyleBackColor = false;
			this->radio15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio15_CheckedChanged);
			// 
			// radio20
			// 
			this->radio20->AutoSize = true;
			this->radio20->BackColor = System::Drawing::SystemColors::HotTrack;
			this->radio20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio20->ForeColor = System::Drawing::SystemColors::MenuText;
			this->radio20->Location = System::Drawing::Point(45, 202);
			this->radio20->Name = L"radio20";
			this->radio20->Size = System::Drawing::Size(206, 29);
			this->radio20->TabIndex = 3;
			this->radio20->TabStop = true;
			this->radio20->Text = L"Genera 20 numeros";
			this->radio20->UseVisualStyleBackColor = false;
			this->radio20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radio20_CheckedChanged);
			// 
			// generar
			// 
			this->generar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->generar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->generar->FlatAppearance->BorderSize = 3;
			this->generar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->generar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generar->Location = System::Drawing::Point(52, 272);
			this->generar->Name = L"generar";
			this->generar->Size = System::Drawing::Size(188, 57);
			this->generar->TabIndex = 5;
			this->generar->Text = L"Generar";
			this->generar->UseVisualStyleBackColor = false;
			this->generar->Click += gcnew System::EventHandler(this, &MyForm::generar_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(344, 83);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(155, 580);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::LimeGreen;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(659, 83);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(155, 580);
			this->richTextBox2->TabIndex = 8;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(341, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Numeros Desordenados";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(655, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Numeros Ordenados";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(52, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 57);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Quick Sort";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(924, 716);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->generar);
			this->Controls->Add(this->radio20);
			this->Controls->Add(this->radio15);
			this->Controls->Add(this->radio10);
			this->Controls->Add(this->radio5);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Quick Sort";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		///--------------------------------------------------------------------------------------\\\
		///--------------------------------------------------------------------------------------\\\
		///--------------------------------------------------------------------------------------\\\
		///--------------------------------------------------------------------------------------///
	
		int num=0;
	    int* puntero = new int[20];// Para reservar en memoria el numero maximo de memoria.

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radio5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		num = 5;

	}
	private: System::Void radio15_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		num = 15;

	}
	private: System::Void radio10_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		num = 10;

	}
	private: System::Void radio20_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		num = 20;

	}
	private: System::Void generar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		srand((unsigned)time(NULL));// Generador de la semilla, para poder generar numeros aleatorios.

		
		String^ cadena{};
		int* p = nullptr;
		fflush;
		switch (num)
		{
		case 5:
			
			p = puntero;
			rellenarArreglo(p, 5);
			for (size_t i = 0; i < 5; i++)
			{
				cadena += "["+Convert::ToString(i + 1)+"]" + "   ";
				cadena += Convert::ToString(p[i]);
				cadena += "\n";

			}
			
			p = nullptr;
			richTextBox1->Clear();
			richTextBox1->Text=cadena;
			break;
		case 10:

			p = puntero;
			rellenarArreglo(p, 10);
			for (size_t i = 0; i < 10; i++)
			{
				cadena += "[" + Convert::ToString(i + 1) + "]" + "   ";
				cadena += Convert::ToString(p[i]);
				cadena += "\n";

			}
			p = nullptr;
			richTextBox1->Clear();
			richTextBox1->Text = cadena;
			
			break;
		case 15:
			p = puntero;
			rellenarArreglo(p, 15);
			for (size_t i = 0; i < 15; i++)
			{
				cadena += "[" + Convert::ToString(i + 1) + "]" + "   ";
				cadena += Convert::ToString(p[i]);
				cadena += "\n";

			}
			richTextBox1->Clear();
			richTextBox1->Text = cadena;
			break;
		case 20:
			p = puntero;
			rellenarArreglo(p, 20);
			for (size_t i = 0; i < 20; i++)
			{
				cadena += "[" + Convert::ToString(i + 1) + "]" + "   ";
				cadena += Convert::ToString(p[i]);
				cadena += "\n";

			}
			richTextBox1->Clear();
			richTextBox1->Text = cadena;
			break;
		default:
			break;
		}

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int* p = puntero;
	int numero = num;
	String^ cadena;
	quickSort(p, numero);
	for (int i = 0; i < num; i++)
	{
		cadena += "[" + Convert::ToString(i + 1) + "]" + "   ";
		cadena += Convert::ToString(p[i]);
		cadena += "\n";

	}
	richTextBox2->Clear();
	richTextBox2->Text = cadena;
}
};
}
