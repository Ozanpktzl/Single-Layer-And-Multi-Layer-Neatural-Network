#pragma once
#include "Resource.h"
#include "time.h"
#include <Windows.h>
#include "Process.h"
#include <iostream>

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluşturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanılan tüm kaynakları temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ınitilazeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomlyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trainingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ discreteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ContinuousToolStripMenuItem;
	private:
		/// <summary>
		///Gerekli tasarımcı değişkeni.
		/// </summary>

		Example* p;
		Example* p2;
		int Size, Size1, Size2;
		int Size3, Size4, Size5;
		double* w;//doğrunun ağırlık katsayısı
		double** ww;
		int Dim = 2;
		int d1, d2;
		double* net1, * net2;
		double* net3;
		double* o1;
		double* o2;
		double* net4, * net5, * net6, * net7;
		double* net8, * net9;
		double* o3;
		double* o4;
		double* uzaklık1,* uzaklık2,*uzaklık3,*uzaklık4;

		double* x, * y;
		double c = 0.1;
		bool tutucu = true;
		bool tutucu2 = true;
		int sayac ;
		bool tutucu3 = true;
		bool tutucu4 = true;
		bool tutucu5 = true;
		bool tutucu6 = true;
		bool tutucu7 = true;
		bool tutucu8 = true;
		bool tutucu9 = true;


		   System::ComponentModel::Container^ components;
		   
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Tasarımcı desteği için gerekli metot - bu metodun 
		   ///içeriğini kod düzenleyici ile değiştirmeyin.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			   this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->ınitilazeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->randomlyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->discreteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->ContinuousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->menuStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->pictureBox1->Location = System::Drawing::Point(16, 27);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(723, 455);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(797, 66);
			   this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(72, 21);
			   this->checkBox1->TabIndex = 1;
			   this->checkBox1->Text = L"Class1";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   // 
			   // checkBox2
			   // 
			   this->checkBox2->AutoSize = true;
			   this->checkBox2->Location = System::Drawing::Point(797, 142);
			   this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			   this->checkBox2->Name = L"checkBox2";
			   this->checkBox2->Size = System::Drawing::Size(72, 21);
			   this->checkBox2->TabIndex = 2;
			   this->checkBox2->Text = L"Class2";
			   this->checkBox2->UseVisualStyleBackColor = true;
			   // 
			   // checkBox3
			   // 
			   this->checkBox3->AutoSize = true;
			   this->checkBox3->Location = System::Drawing::Point(900, 66);
			   this->checkBox3->Margin = System::Windows::Forms::Padding(4);
			   this->checkBox3->Name = L"checkBox3";
			   this->checkBox3->Size = System::Drawing::Size(72, 21);
			   this->checkBox3->TabIndex = 3;
			   this->checkBox3->Text = L"Class3";
			   this->checkBox3->UseVisualStyleBackColor = true;
			   // 
			   // checkBox4
			   // 
			   this->checkBox4->AutoSize = true;
			   this->checkBox4->Location = System::Drawing::Point(900, 142);
			   this->checkBox4->Margin = System::Windows::Forms::Padding(4);
			   this->checkBox4->Name = L"checkBox4";
			   this->checkBox4->Size = System::Drawing::Size(72, 21);
			   this->checkBox4->TabIndex = 4;
			   this->checkBox4->Text = L"Class4";
			   this->checkBox4->UseVisualStyleBackColor = true;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(797, 281);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(46, 17);
			   this->label1->TabIndex = 7;
			   this->label1->Text = L"label1";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(797, 350);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(46, 17);
			   this->label2->TabIndex = 8;
			   this->label2->Text = L"label2";
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			   this->menuStrip1->Size = System::Drawing::Size(1048, 28);
			   this->menuStrip1->TabIndex = 9;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // menuToolStripMenuItem
			   // 
			   this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->ınitilazeToolStripMenuItem,
					   this->trainingToolStripMenuItem
			   });
			   this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			   this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			   this->menuToolStripMenuItem->Text = L"Menu";
			   // 
			   // ınitilazeToolStripMenuItem
			   // 
			   this->ınitilazeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { 
				   this->randomlyToolStripMenuItem 
			          
			   });
			   this->ınitilazeToolStripMenuItem->Name = L"ınitilazeToolStripMenuItem";
			   this->ınitilazeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->ınitilazeToolStripMenuItem->Text = L"Initilaze";
			   // 
			   // randomlyToolStripMenuItem
			   // 
			   this->randomlyToolStripMenuItem->Name = L"randomlyToolStripMenuItem";
			   this->randomlyToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			   this->randomlyToolStripMenuItem->Text = L"Randomly";
			   this->randomlyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::randomlyToolStripMenuItem_Click);
			   // 
			   // trainingToolStripMenuItem
			   // 
			   this->trainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->discreteToolStripMenuItem,
					   this->ContinuousToolStripMenuItem
			   });
			   this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			   this->trainingToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->trainingToolStripMenuItem->Text = L"Training";
			   this->trainingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::trainingToolStripMenuItem_Click);
			   // 
			   // discreteToolStripMenuItem
			   // 
			   this->discreteToolStripMenuItem->Name = L"discreteToolStripMenuItem";
			   this->discreteToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->discreteToolStripMenuItem->Text = L"Discrete";
			   this->discreteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::discreteToolStripMenuItem_Click);
			   // 
			   // ContinuousToolStripMenuItem
			   // 
			   this->ContinuousToolStripMenuItem->Name = L"ContinuousToolStripMenuItem";
			   this->ContinuousToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->ContinuousToolStripMenuItem->Text = L"Continuous";
			   this->ContinuousToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ContinuousToolStripMenuItem_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1149, 489);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->checkBox2);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->menuStrip1);
			   this->Controls->Add(this->checkBox3);
			   this->Controls->Add(this->checkBox4);
			   this->Controls->Add(this->pictureBox1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void trainingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (checkBox1->Checked || checkBox2->Checked) {
			matris();
		
			if (checkBox1->Checked && checkBox2->Checked) {
				MessageBox::Show("Iki sinif ayni anda secilemez!");
				checkBox1->Checked = false;
				checkBox2->Checked = false;
			}
			else {
				
				if (checkBox1->Checked) {
					if (tutucu3) {
						sayac++;
						tutucu3 = false;
					}
					Pen^ pen = gcnew Pen(Color::Black, 3.0f);
					int gecici1, gecici2;
					double x1, x2;//x1:genislik x2:yukseklik
					gecici1 = (System::Convert::ToInt32(e->X));
					gecici2 = (System::Convert::ToInt32(e->Y));
					x1 = (double)(gecici1 - (pictureBox1->Width >> 1));
					x2 = (double)(pictureBox1->Height >> 1) - gecici2;
					if (Size == 0) {
						Size = Size1 = 1;
						p = new Example[1];
						p[0].x1 = x1;
						p[0].x2 = x2;
						p[0].id = CLASS1;
					
						


					}
					else {
				
						Example* temp;
						temp = p;
						Size1++;
						Size = Size1 + Size2;
						p = new Example[Size];
						for (int i = 0; i < Size; i++) {
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].id = temp[i].id;
						}
						p[Size - 1].x1 = x1;
						p[Size - 1].x2 = x2;
						p[Size - 1].id = CLASS1;
					
						

						delete temp;
					}
					label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "\n" + "x2 :" + Convert::ToString(p[Size - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, gecici1 - 5, gecici2, gecici1 + 5, gecici2);
					pictureBox1->CreateGraphics()->DrawLine(pen, gecici1, gecici2 - 5, gecici1, gecici2 + 5);
					label2->Text = "Example Total :" + Convert::ToString(Size) + "\n" + "Class 1 :" + Convert::ToString(Size1);
				}
				else {
				
					if (checkBox2->Checked) {
						if (tutucu4) {
							sayac++;
							tutucu4 = false;
						}
						
						Pen^ pen = gcnew Pen(Color::Red, 3.0f);
						int gecici1, gecici2;
						double x1, x2;//x1:genislik x2:yukseklik
						gecici1 = (System::Convert::ToInt32(e->X));
						gecici2 = (System::Convert::ToInt32(e->Y));
						x1 = (double)(gecici1 - (pictureBox1->Width >> 1));
						x2 = (double)(pictureBox1->Height >> 1) - gecici2;
						if (Size == 0) {
							Size = Size2 = 1;
							p = new Example[1];
							p[0].x1 = x1;
							p[0].x2 = x2;
							p[0].id = CLASS2;
						
						
						}
						else {
					
							Example* temp;
							temp = p;
							Size2++;
							Size = Size1 + Size2;
							p = new Example[Size];
							for (int i = 0; i < Size; i++) {
								p[i].x1 = temp[i].x1;
								p[i].x2 = temp[i].x2;
								p[i].id = temp[i].id;
							}
							p[Size - 1].x1 = x1;
							p[Size - 1].x2 = x2;
							p[Size - 1].id = CLASS2;
						
							

							delete temp;
						}
						label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "\n" + "x2 :" + Convert::ToString(p[Size - 1].x2);
						pictureBox1->CreateGraphics()->DrawLine(pen, gecici1 - 5, gecici2, gecici1 + 5, gecici2);
						pictureBox1->CreateGraphics()->DrawLine(pen, gecici1, gecici2 - 5, gecici1, gecici2 + 5);
						label2->Text = "Example Total :" + Convert::ToString(Size) + "\n" + "Class 2 :" + Convert::ToString(Size2);
					}

				}
			}
		}

		if (checkBox3->Checked || checkBox4->Checked) {
			matris();
			
			if (checkBox3->Checked && checkBox4->Checked) {
				MessageBox::Show("Iki sinif ayni anda secilemez!");
				checkBox3->Checked = false;
				checkBox4->Checked = false;
			}
			else {
			
				if (checkBox3->Checked) {
					if (tutucu5) {
						sayac++;
						tutucu5 = false;
					}
					Pen^ pen = gcnew Pen(Color::Green, 3.0f);
					int gecici1, gecici2;
					double x1, x2;//x1:genislik x2:yukseklik
					gecici1 = (System::Convert::ToInt32(e->X));
					gecici2 = (System::Convert::ToInt32(e->Y));
					x1 = (double)(gecici1 - (pictureBox1->Width >> 1));
					x2 = (double)(pictureBox1->Height >> 1) - gecici2;
					if (Size == 0) {
						Size = Size3 = 1;
						p = new Example[1];
						p[0].x1 = x1;
						p[0].x2 = x2;
						p[0].id = CLASS3;
				
						


					}
					else {
					
						Example* temp;
						temp = p;
						Size3++;
						Size = Size1 + Size2 + Size3;
						p = new Example[Size];
						for (int i = 0; i < Size; i++) {
							p[i].x1 = temp[i].x1;
							p[i].x2 = temp[i].x2;
							p[i].id = temp[i].id;
						}
						p[Size - 1].x1 = x1;
						p[Size - 1].x2 = x2;
						p[Size - 1].id = CLASS3;
				
						

						delete temp;
					}
					label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "\n" + "x2 :" + Convert::ToString(p[Size - 1].x2);
					pictureBox1->CreateGraphics()->DrawLine(pen, gecici1 - 5, gecici2, gecici1 + 5, gecici2);
					pictureBox1->CreateGraphics()->DrawLine(pen, gecici1, gecici2 - 5, gecici1, gecici2 + 5);
					label2->Text = "Example Total :" + Convert::ToString(Size) + "\n" + "Class 1 :" + Convert::ToString(Size3);
				}
				else {
				
					if (checkBox4->Checked) {
						if (tutucu6) {
							sayac++;
							tutucu6 = false;
						}
						Pen^ pen = gcnew Pen(Color::Cyan, 3.0f);
						int gecici1, gecici2;
						double x1, x2;//x1:genislik x2:yukseklik
						gecici1 = (System::Convert::ToInt32(e->X));
						gecici2 = (System::Convert::ToInt32(e->Y));
						x1 = (double)(gecici1 - (pictureBox1->Width >> 1));
						x2 = (double)(pictureBox1->Height >> 1) - gecici2;
						if (Size == 0) {
							Size = Size4 = 1;
							p = new Example[1];
							p[0].x1 = x1;
							p[0].x2 = x2;
							p[0].id = CLASS4;
							
							
						}
						else {
							
							Example* temp;
							temp = p;
							Size4++;
							Size = Size1 + Size2 + Size3 + Size4;
							p = new Example[Size];
							for (int i = 0; i < Size; i++) {
								p[i].x1 = temp[i].x1;
								p[i].x2 = temp[i].x2;
								p[i].id = temp[i].id;
							}
							p[Size - 1].x1 = x1;
							p[Size - 1].x2 = x2;
							p[Size - 1].id = CLASS4;
						
							
							delete temp;
						}
						label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "\n" + "x2 :" + Convert::ToString(p[Size - 1].x2);
						pictureBox1->CreateGraphics()->DrawLine(pen, gecici1 - 5, gecici2, gecici1 + 5, gecici2);
						pictureBox1->CreateGraphics()->DrawLine(pen, gecici1, gecici2 - 5, gecici1, gecici2 + 5);
						label2->Text = "Example Total :" + Convert::ToString(Size) + "\n" + "Class 2 :" + Convert::ToString(Size4);
					}

				}
			}
		}
	
	}

	private: System::Void randomlyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		if (sayac <= 2) {
			Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
			int min_x, max_x, min_y, max_y;
			int Dim = 2;
			w = new double[Dim + 1];
			srand(time(0));
			for (int i = 0; i < Dim + 1; i++) {
				w[i] = ((double)rand() / (RAND_MAX));
				label1->Text = "w[0] :" + System::Convert::ToString(w[0]) + "\n" + "w[1] :" + System::Convert::ToString(w[1]) + "\n" + "w[2] :" + System::Convert::ToString(w[2]);
				min_x = (this->pictureBox1->Width) / -2;
				min_y = YPoint(min_x, w);
				max_x = (this->pictureBox1->Width) / 2;
				max_y = YPoint(max_x, w);

			}

		//	pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		}
		if(sayac==3) {
			randomlyToolStripMenuItem_Click2(sender, e);
		}
		if (sayac==4) {
			randomlyToolStripMenuItem_Click2(sender, e);
		}
		
	}
	private: System::Void discreteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		 
		Pen^ pen1 = gcnew Pen(Color::Red, 3.0f);

		

		
		if (sayac == 2) {

			//CLASS 1
			for (int i = 0; i < Size1; i++) {
				net1[i] = p[i].x1 * w[0] + p[i].x2 * w[1];
			}

			for (int i = 0; i < Size1; i++) {
				if (net1[i] < 0) {

					w[0] = w[0] + c * (2) * p[i].x1;
					w[1] = w[1] + c * (2) * p[i].x2;
					w[2] = w[2]+w[2] * c;
				}


			}

			//CLASS 2

			for (int i = Size1; i < Size; i++) {
				net2[i] = p[i].x1 * w[0] + p[i].x2 * w[1];
			}


			for (int i = Size1; i < Size; i++) {
				if (net2[i] > 0) {

					w[0] = w[0] + c * (-2) * p[i].x1;
					w[1] = w[1] + c * (-2) * p[i].x2;
					w[2] = w[2] + w[2] * c;
				}

			}

			for (int i = 0; i < Size1; i++) {
				if (net1[i] < 0) {
					return discreteToolStripMenuItem_Click(sender, e);
				}
			}

			for (int i = Size1; i < Size; i++) {
				if (net2[i] > 0) {
					return discreteToolStripMenuItem_Click(sender, e);
				}
			}

		}
		if (sayac == 3) {



			//CLASS1
			for (int i = 0; i < Size1; i++) {
				net1[i] = p[i].x1 * ww[0][0] + p[i].x2 * ww[0][1];
			}
			for (int i = 0; i < Size1; i++) {
				if (net1[i] > 0) {

					ww[0][0] = ww[0][0] + c * (-2) * p[i].x1;
					ww[0][1] = ww[0][1] + c * (-2) * p[i].x2;
					ww[0][2] = ww[0][2] + ww[0][2] * c*20;
				}


			}

			//CLASS2
			for (int i = Size1; i < Size1+Size2; i++) {
				net2[i] = p[i].x1 * ww[1][0] + p[i].x2 * ww[1][1];
			}
			for (int i = Size1; i < Size1+Size2; i++) {
				if (net2[i] < 0) {

					ww[1][0] = ww[1][0] + c * (2) * p[i].x1;
					ww[1][1] = ww[1][1] + c * (2) * p[i].x2;
					ww[1][2] = ww[1][2] + ww[1][2] * c*20;
				}


			}

			//CLASS3

			for (int i = Size1+Size2; i < Size; i++) {
				net3[i] = p[i].x1 * ww[2][0] + p[i].x2 * ww[2][1];
			}

			for (int i = Size1 + Size2; i < Size; i++) {
				if (net3[i] < 0) {

					ww[2][0] = ww[2][0] + c * (2) * p[i].x1;
					ww[2][1] = ww[2][1] + c * (2) * p[i].x2;
					ww[2][2] = ww[2][2] + ww[2][2] * c*20;
				}


			}



			for (int i = 0; i < Size1; i++) {
				if (net1[i] > 0) {
					return discreteToolStripMenuItem_Click(sender, e);
				}
			}
			for (int i = Size1; i < Size1+Size2; i++) {
				if (net2[i] < 0) {
					return discreteToolStripMenuItem_Click(sender, e);
				}
			}

			for (int i = Size1 + Size2; i < Size; i++) {
				if (net3[i] < 0) {
					return discreteToolStripMenuItem_Click(sender, e);
				}
			}
		}


		if (sayac == 2) {
			int min_x, max_x, min_y, max_y;
			min_x = ((this->pictureBox1->Width) / -2);
			min_y = YPoint((min_x), w);
			max_x = (this->pictureBox1->Width) / 2;
			max_y = YPoint((max_x), w);

			label1->Text = "w[0] :" + System::Convert::ToString(w[0]) + "\n" + "w[1] :" + System::Convert::ToString(w[1]) + "\n" + "w[2] :" + System::Convert::ToString(w[2]);
			pictureBox1->CreateGraphics()->DrawLine(pen1, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);

		 }
			
		if (sayac == 3) {
			for (int i = 0; i < 3; i++) {
				int min_x, max_x, min_y, max_y;
				min_x = ((this->pictureBox1->Width) / -2);
				min_y = YPoint((min_x), ww[i]);
				max_x = (this->pictureBox1->Width) / 2;
				max_y = YPoint((max_x), ww[i]);

				//label1->Text = "w[0] :" + System::Convert::ToString(w[0]) + "\n" + "w[1] :" + System::Convert::ToString(w[1]) + "\n" + "w[2] :" + System::Convert::ToString(w[2]);
				pictureBox1->CreateGraphics()->DrawLine(pen1, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);

			}
		
		}

	

     }
    private:System::Void matris() {
		
	if (tutucu2) {
		net1 = new double[50];
		net2 = new double[50];
		net3 = new double[50];
		net4 = new double[50];
		net5 = new double[50];
		net6 = new double[50];
		net7 = new double[50];
		net8 = new double[50];
		net9 = new double[50];
		o1 = new double[50];
		o2 = new double[50];
		o3 = new double[50];
		o4 = new double[50];
		uzaklık1 = new double[50];
		uzaklık2 = new double[50];
		uzaklık3 = new double[50];
		uzaklık4 = new double[50];
		net3 = new double[50];
		for (int i = 0; i < 50; i++) {
			net1[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			net2[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			net3[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			net4[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			net5[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			net6[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			net7[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			o1[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			o2[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			uzaklık1[i] = 50;
		}
		for (int i = 0; i < 50; i++) {
			uzaklık2[i] = 50;
		}
		for (int i = 0; i < 50; i++) {
			uzaklık3[i] = 50;
		}
		for (int i = 0; i < 50; i++) {
			uzaklık4[i] = 50;
		}
		for (int i = 0; i < 50; i++) {
			net8[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			net9[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			o3[i] = 0;
		}
		for (int i = 0; i < 50; i++) {
			o4[i] = 0;
		}

	}
	tutucu2 = false;
	

}

  

	 private: System::Void randomlyToolStripMenuItem_Click2 (System::Object^ sender, System::EventArgs^ e) {
		 Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
		 int min_x, max_x, min_y, max_y;
		 int Dim = 2;
		 ww = new double*[Dim+1];
		 for (int i = 0; i < sayac; i++) {
			 ww[i] = new double[sayac];
		 }
		 srand(time(0));
		 for (int j = 0; j < sayac; j++) {
			 for (int i = 0; i < Dim + 1; i++) {
				 ww[j][i] = ((double)rand() / (RAND_MAX));
			//	 label1->Text = "w[0] :" + System::Convert::ToString(w[0]) + "\n" + "w[1] :" + System::Convert::ToString(w[1]) + "\n" + "w[2] :" + System::Convert::ToString(w[2]);
				 min_x = (this->pictureBox1->Width) / -2;
				 min_y = YPoint(min_x, ww[j]);
				 max_x = (this->pictureBox1->Width) / 2;
				 max_y = YPoint(max_x, ww[j]);

			 }
		//	 pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		 }
		

		
	 }





    private: System::Void ContinuousToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pen^ pen1 = gcnew Pen(Color::Red, 3.0f);
		Pen^ pen2 = gcnew Pen(Color::Black, 3.0f);
		Pen^ pen3 = gcnew Pen(Color::Green, 3.0f);
		Pen^ pen4 = gcnew Pen(Color::Cyan, 3.0f);
		if (sayac == 2) {
			if (tutucu7) {
				for (int i = 0; i < Size1; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen1, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen1, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				for (int i = Size1; i < Size; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen2, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen2, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				tutucu7 = false;

			}
			
			//CLASS1
			for (int i = 0; i < Size1; i++) {
				net1[i] = p[i].x1 * w[0] + p[i].x2 * w[1];
			}
			
			for (int i = 0; i < Size1; i++) {
				o1[i] = 1 / (1 + exp(net1[i]));
			}
			for (int i = 0; i < Size1; i++) {
				net3[i] = 0.5 * (1 - (o1[i] * o1[i]));
			}
			for (int i = 0; i < Size1; i++) {
				w[0] = c * (1 - o1[i]) * net3[i] * p[i].x1 + w[0];
				w[1] = c * (1 - o1[i]) * net3[i] * p[i].x2 + w[1];
			    uzaklık1[i] = abs(w[0] * p[i].x1 + w[1] * p[i].x2 + w[2]) / sqrt(w[0] * w[0] + w[1] * w[1]);
				

			}


			//CLASS 2

			for (int i = Size1; i < Size; i++) {
				net2[i] = p[i].x1 * w[0] + p[i].x2 * w[1];
			}


			for (int i = Size1; i < Size; i++) {
				o2[i] = 1 / (1 + exp(-net2[i]));
			}
			for (int i = Size1; i < Size; i++) {
				net4[i] = 0.5 * (1 - o2[i] * o2[i]);
			}
			for (int i = Size1; i < Size; i++) {
				w[0] = c * (-1 - o2[i]) * net4[i] * p[i].x1 + w[0];
				w[1] = c * (-1 - o2[i]) * net4[i] * p[i].x2 + w[1];
				uzaklık2[i] = abs(w[0] * p[i].x1 + w[1] * p[i].x2 + w[2]) / sqrt(w[0] * w[0] + w[1] * w[1]);
				
			}
			

			for (int i = 0; i < Size1; i++) {
				if ((uzaklık1[i] < 30 && uzaklık2[i + Size1] < 30)) {

					int min_x, max_x, min_y, max_y;
					min_x = ((this->pictureBox1->Width) / -2);
					min_y = YPoint((min_x), w);
					max_x = (this->pictureBox1->Width) / 2;
					max_y = YPoint((max_x), w);

					label1->Text = "w[0] :" + System::Convert::ToString(w[0]) + "\n" + "w[1] :" + System::Convert::ToString(w[1]) + "\n" + "w[2] :" + System::Convert::ToString(w[2]);
					pictureBox1->CreateGraphics()->DrawLine(pen3, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
					
					//return;
				}
				/*else {
					ContinuousToolStripMenuItem_Click(sender, e);
				}*/
			}



		  }
		
		if (sayac == 3) {


			if (tutucu8) {
				for (int i = 0; i < Size1; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen1, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen1, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				for (int i = Size1; i < Size1+Size2; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen2, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen2, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				for (int i = Size1 + Size2; i < Size; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen3, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen3, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				tutucu8 = false;

			}


			//CLASS1
			for (int i = 0; i < Size1; i++) {
				net1[i] = p[i].x1 * ww[0][0] + p[i].x2 * ww[0][1];
			}

			for (int i = 0; i < Size1; i++) {
				o1[i] = 1 / (1 + exp(net1[i]));
			}
			for (int i = 0; i < Size1; i++) {
				net3[i] = 0.5 * (1 - (o1[i] * o1[i]));
			}
			for (int i = 0; i < Size1; i++) {
				ww[0][0] = c * (1 - o1[i]) * net3[i] * p[i].x1 + ww[0][0];
				ww[0][1] = c * (1 - o1[i]) * net3[i] * p[i].x2 + ww[0][1];
				uzaklık1[i] = abs(ww[0][0] * p[i].x1 + ww[0][1] * p[i].x2 + ww[0][2]) / sqrt(ww[0][0] * ww[0][0] + ww[0][1] * ww[0][1]);


			}

			//CLASS 2

			for (int i = Size1; i < Size1 + Size2; i++) {
				net2[i] = p[i].x1 * ww[1][0] + p[i].x2 * ww[1][1];
			}


			for (int i = Size1; i < Size1 + Size2; i++) {
				o2[i] = 1 / (1 + exp(-net2[i]));
			}
			for (int i = Size1; i < Size1 + Size2; i++) {
				net4[i] = 0.5 * (1 - o2[i] * o2[i]);
			}
			for (int i = Size1; i < Size1 + Size2; i++) {
				ww[1][0] = c * (1 - o2[i]) * net4[i] * p[i].x1 + ww[1][0];
				ww[1][1] = c * (1 - o2[i]) * net4[i] * p[i].x2 + ww[1][1];
				uzaklık2[i] = abs(ww[1][0] * p[i].x1 + ww[1][1] * p[i].x2 + ww[1][2]) / sqrt(ww[1][0] * ww[1][0] + ww[1][1] * ww[1][1]);

			}

			//CLASS 3

			for (int i = Size1 + Size2; i < Size; i++) {
				net3[i] = p[i].x1 * ww[2][0] + p[i].x2 * ww[2][1];
			}


			for (int i = Size1 + Size2; i < Size; i++) {
				o3[i] = 1 / (1 + exp(net3[i]));
			}
			for (int i = Size1 + Size2; i < Size; i++) {
				net6[i] = 0.5 * (1 - o3[i] * o3[i]);
			}
			for (int i = Size1 + Size2; i < Size; i++) {
				ww[2][0] = c * (-1 - o3[i]) * net6[i] * p[i].x1 + ww[2][0];
				ww[2][1] = c * (-1 - o3[i]) * net6[i] * p[i].x2 + ww[2][1];
				uzaklık3[i] = abs(ww[2][0] * p[i].x1 + ww[2][1] * p[i].x2 + ww[2][2]) / sqrt(ww[2][0] * ww[2][0] + ww[2][1] * ww[2][1]);

			}



			for (int i = 0; i < Size1; i++) {
				if (uzaklık1[i] < 30 && uzaklık2[i + Size1] < 30 && uzaklık3[i + Size1+Size2] < 30) {
					for (int i = 0; i < 3; i++) {
						int min_x, max_x, min_y, max_y;
						min_x = ((this->pictureBox1->Width) / -2);
						min_y = YPoint((min_x), ww[i]);
						max_x = (this->pictureBox1->Width) / 2;
						max_y = YPoint((max_x), ww[i]);

						//label1->Text = "w[0] :" + System::Convert::ToString(w[0]) + "\n" + "w[1] :" + System::Convert::ToString(w[1]) + "\n" + "w[2] :" + System::Convert::ToString(w[2]);
						pictureBox1->CreateGraphics()->DrawLine(pen1, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);

					}
				/*	return;*/

				}
				/*else {
					ContinuousToolStripMenuItem_Click(sender, e);
				}*/
			}

		}

		if (sayac == 4) {
			if (tutucu8) {
				for (int i = 0; i < Size1; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen1, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen1, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				for (int i = Size1; i < Size1 + Size2; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen2, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen2, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				for (int i = Size1 + Size2; i < Size1+Size2+Size3; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen3, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen3, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}
				for (int i = Size1 + Size2+Size3; i < Size; i++) {
					p[i].x1 = (p[i].x1) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					p[i].x2 = (p[i].x2) / sqrt(p[i].x1 * p[i].x1 + p[i].x2 * p[i].x2) * 20;
					pictureBox1->CreateGraphics()->DrawLine(pen4, (int)(pictureBox1->Width / 2) + p[i].x1 - 5, (int)p[i].x2 + (pictureBox1->Height / 2), (int)p[i].x1 + 5 + (pictureBox1->Width / 2), (int)p[i].x2 + (pictureBox1->Height / 2));
					pictureBox1->CreateGraphics()->DrawLine(pen4, (int)(pictureBox1->Width / 2) + p[i].x1, (int)p[i].x2 - 5 + (pictureBox1->Height / 2), (int)p[i].x1 + (pictureBox1->Width / 2), (int)p[i].x2 + 5 + (pictureBox1->Height / 2));
				}

				tutucu8 = false;

			}


			//CLASS1
			for (int i = 0; i < Size1; i++) {
				net1[i] = p[i].x1 * ww[0][0] + p[i].x2 * ww[0][1];
			}

			for (int i = 0; i < Size1; i++) {
				o1[i] = 1 / (1 + exp(net1[i]));
			}
			for (int i = 0; i < Size1; i++) {
				net3[i] = 0.5 * (1 - (o1[i] * o1[i]));
			}
			for (int i = 0; i < Size1; i++) {
				ww[0][0] = c * (1 + o1[i]) * net3[i] * p[i].x1 + ww[0][0];
				ww[0][1] = c * (1 + o1[i]) * net3[i] * p[i].x2 + ww[0][1];
				uzaklık1[i] = abs(ww[0][0] * p[i].x1 + ww[0][1] * p[i].x2 + ww[0][2]) / sqrt(ww[0][0] * ww[0][0] + ww[0][1] * ww[0][1]);


			}

			//CLASS 2

			for (int i = Size1; i < Size1 + Size2; i++) {
				net2[i] = p[i].x1 * ww[1][0] + p[i].x2 * ww[1][1];
			}


			for (int i = Size1; i < Size1 + Size2; i++) {
				o2[i] = 1 / (1 + exp(-net2[i]));
			}
			for (int i = Size1; i < Size1 + Size2; i++) {
				net4[i] = 0.5 * (1 - o2[i] * o2[i]);
			}
			for (int i = Size1; i < Size1 + Size2; i++) {
				ww[1][0] = c * (1 - o2[i]) * net4[i] * p[i].x1 + ww[1][0];
				ww[1][1] = c * (1 - o2[i]) * net4[i] * p[i].x2 + ww[1][1];
				uzaklık2[i] = abs(ww[1][0] * p[i].x1 + ww[1][1] * p[i].x2 + ww[1][2]) / sqrt(ww[1][0] * ww[1][0] + ww[1][1] * ww[1][1]);

			}

			//CLASS 3

			for (int i = Size1 + Size2; i < Size1 + Size2 + Size3; i++) {
				net3[i] = p[i].x1 * ww[2][0] + p[i].x2 * ww[2][1];
			}


			for (int i = Size1 + Size2; i < Size1 + Size2 + Size3; i++) {
				o3[i] = 1 / (1 + exp(net3[i]));
			}
			for (int i = Size1 + Size2; i < Size1 + Size2 + Size3; i++) {
				net6[i] = 0.5 * (1 - o3[i] * o3[i]);
			}
			for (int i = Size1 + Size2; i < Size1 + Size2 + Size3; i++) {
				ww[2][0] = c * (1 - o3[i]) * net6[i] * p[i].x1 + ww[2][0];
				ww[2][1] = c * (1 - o3[i]) * net6[i] * p[i].x2 + ww[2][1];
				uzaklık3[i] = abs(ww[2][0] * p[i].x1 + ww[1][1] * p[i].x2 + ww[2][2]) / sqrt(ww[2][0] * ww[2][0] + ww[2][1] * ww[2][1]);

			}

			//CLASS 4

			for (int i = Size1 + Size2 + Size3; i < Size; i++) {
				net4[i] = p[i].x1 * ww[3][0] + p[i].x2 * ww[3][1];
			}


			for (int i = Size1 + Size2 + Size3; i < Size; i++) {
				o3[i] = 1 / (1 + exp(-net4[i]));
			}
			for (int i = Size1 + Size2 + Size3; i < Size; i++) { 
				net7[i] = 0.5 * (1 - o4[i] * o4[i]);
			}
			for (int i = Size1 + Size2 + Size3; i < Size; i++) {
				ww[3][0] = c * (1 - o4[i]) * net7[i] * p[i].x1 + ww[3][0];
				ww[3][1] = c * (1 - o4[i]) * net7[i] * p[i].x2 + ww[3][1];
				uzaklık4[i] = abs(ww[3][0] * p[i].x1 + ww[3][1] * p[i].x2 + ww[3][2]) / sqrt(ww[3][0] * ww[3][0] + ww[3][1] * ww[3][1]);

			}


			for (int i = 0; i < Size1; i++) {
				if (uzaklık1[i] < 50 && uzaklık2[i + Size1] < 50 && uzaklık3[i + Size1 + Size2] < 50 && uzaklık4[i + Size1 + Size2 + Size3] < 50) {
					for (int i = 0; i < 4; i++) {
						int min_x, max_x, min_y, max_y;
						min_x = ((this->pictureBox1->Width) / -2);
						min_y = YPoint((min_x), ww[i]);
						max_x = (this->pictureBox1->Width) / 2;
						max_y = YPoint((max_x), ww[i]);

						//label1->Text = "w[0] :" + System::Convert::ToString(w[0]) + "\n" + "w[1] :" + System::Convert::ToString(w[1]) + "\n" + "w[2] :" + System::Convert::ToString(w[2]);
						pictureBox1->CreateGraphics()->DrawLine(pen1, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y, (pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
						
					}
					/*return;*/

				}
				/*else {

					ContinuousToolStripMenuItem_Click(sender, e);
				}*/
			}

		}

	


 }











	};
}
