#ifndef HEADER_H
#define HEADER_H

#pragma once
#include "Header.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <cstdint>

const double PI = 3.14159265;

namespace GraphicsEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GraphicsEditorMainWindow : public System::Windows::Forms::Form
	{
	private:
		SDL_Window* window = NULL;
		SDL_Renderer* renderer = NULL;
		SDL_Surface* surface = NULL;

		//System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
		bool isBtnDrawPressed = false;
		bool isBtnCirclePressed = false;
		bool isBtnTrianglePressed = false;
		bool isBtnDrawLinePressed = false;
		bool isBtnBezierPressed = false;
		bool isBtnRectanglePressed = false;
		bool isBtnDrawFancyLinePressed = false;
		bool isBtnFancyCirclePressed = false;
		bool isBtnFancyTrianglePressed = false;
		bool isBtnFancyRectanglePressed = false;

	private: System::Windows::Forms::Button^  btnBezier;
	private: System::Windows::Forms::Button^  btnTriangle;
	private: System::Windows::Forms::Button^  btnDrawLine;
	private: System::Windows::Forms::Button^  btnDraw;
	private: System::Windows::Forms::Button^  btnCircle;
	private: System::Windows::Forms::Button^  btnNewWindow;
	private: System::Windows::Forms::Button^  btnRectangle;
	private: System::Windows::Forms::Button^  btnDrawFancyLine;
	private: System::Windows::Forms::Button^  btnFancyCircle;
	private: System::Windows::Forms::Button^  btnFancyTriangle;
	private: System::Windows::Forms::Button^  btnFancyRectangle;
	private: System::Windows::Forms::Button^  btnWhite;
	private: System::Windows::Forms::Button^  btnYellow;
	private: System::Windows::Forms::Button^  btnOrange;
	private: System::Windows::Forms::Button^  btnGray;
	private: System::Windows::Forms::Button^  btnBlue;
	private: System::Windows::Forms::Button^  btnBrown;
	private: System::Windows::Forms::Button^  btnRed;
	private: System::Windows::Forms::Button^  btnBlack;
	private: System::Windows::Forms::Button^  btnPink;
	private: System::Windows::Forms::Button^  btnRGB;
	private: System::Windows::Forms::Button^  btnPurple;
	private: System::Windows::Forms::Button^  btnGreen;
	private: System::Windows::Forms::Button^  btnBlurr;

	private: System::Windows::Forms::Button^  btnNegative;
	private: System::Windows::Forms::Button^  btnSepia;
	private: System::Windows::Forms::Button^  btnGrayScale;
	private: System::Windows::Forms::TextBox^  txtBoxRed;
	private: System::Windows::Forms::TextBox^  txtBoxBlue;


	private: System::Windows::Forms::TextBox^  txtBoxGreen;
	private: System::Windows::Forms::Button^  btnNewColor;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnRotateVertical;
	private: System::Windows::Forms::Button^  btnRotateRight;
	private: System::Windows::Forms::Button^  btnRotateHorizontal;
	private: System::Windows::Forms::Button^  btnRotateLeft;
	private: System::Windows::Forms::Button^  btnSelect;

	private: System::ComponentModel::Container ^components;

	public: GraphicsEditorMainWindow(void)
		{
			InitializeComponent();

			window = functions::newWindow();
			renderer = functions::newRenderer(window);
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
			SDL_RenderPresent(renderer);
		}

	private: ~GraphicsEditorMainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	#pragma region Windows Form Designer generated code
	
	void InitializeComponent(void)
			 {
				 this->btnCircle = (gcnew System::Windows::Forms::Button());
				 this->btnNewWindow = (gcnew System::Windows::Forms::Button());
				 this->btnDraw = (gcnew System::Windows::Forms::Button());
				 this->btnTriangle = (gcnew System::Windows::Forms::Button());
				 this->btnDrawLine = (gcnew System::Windows::Forms::Button());
				 this->btnBezier = (gcnew System::Windows::Forms::Button());
				 this->btnRectangle = (gcnew System::Windows::Forms::Button());
				 this->btnDrawFancyLine = (gcnew System::Windows::Forms::Button());
				 this->btnFancyCircle = (gcnew System::Windows::Forms::Button());
				 this->btnFancyTriangle = (gcnew System::Windows::Forms::Button());
				 this->btnFancyRectangle = (gcnew System::Windows::Forms::Button());
				 this->btnWhite = (gcnew System::Windows::Forms::Button());
				 this->btnYellow = (gcnew System::Windows::Forms::Button());
				 this->btnOrange = (gcnew System::Windows::Forms::Button());
				 this->btnGray = (gcnew System::Windows::Forms::Button());
				 this->btnBlue = (gcnew System::Windows::Forms::Button());
				 this->btnBrown = (gcnew System::Windows::Forms::Button());
				 this->btnRed = (gcnew System::Windows::Forms::Button());
				 this->btnBlack = (gcnew System::Windows::Forms::Button());
				 this->btnPink = (gcnew System::Windows::Forms::Button());
				 this->btnRGB = (gcnew System::Windows::Forms::Button());
				 this->btnPurple = (gcnew System::Windows::Forms::Button());
				 this->btnGreen = (gcnew System::Windows::Forms::Button());
				 this->btnBlurr = (gcnew System::Windows::Forms::Button());
				 this->btnNegative = (gcnew System::Windows::Forms::Button());
				 this->btnSepia = (gcnew System::Windows::Forms::Button());
				 this->btnGrayScale = (gcnew System::Windows::Forms::Button());
				 this->txtBoxRed = (gcnew System::Windows::Forms::TextBox());
				 this->txtBoxBlue = (gcnew System::Windows::Forms::TextBox());
				 this->txtBoxGreen = (gcnew System::Windows::Forms::TextBox());
				 this->btnNewColor = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->btnRotateVertical = (gcnew System::Windows::Forms::Button());
				 this->btnRotateRight = (gcnew System::Windows::Forms::Button());
				 this->btnRotateHorizontal = (gcnew System::Windows::Forms::Button());
				 this->btnRotateLeft = (gcnew System::Windows::Forms::Button());
				 this->btnSelect = (gcnew System::Windows::Forms::Button());
				 this->SuspendLayout();
				 // 
				 // btnCircle
				 // 
				 this->btnCircle->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnCircle->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnCircle->Location = System::Drawing::Point(12, 196);
				 this->btnCircle->Margin = System::Windows::Forms::Padding(4);
				 this->btnCircle->Name = L"btnCircle";
				 this->btnCircle->Size = System::Drawing::Size(115, 30);
				 this->btnCircle->TabIndex = 2;
				 this->btnCircle->Text = L"Circle";
				 this->btnCircle->UseVisualStyleBackColor = false;
				 this->btnCircle->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnCircle_Click);
				 // 
				 // btnNewWindow
				 // 
				 this->btnNewWindow->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnNewWindow->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnNewWindow->Location = System::Drawing::Point(13, 14);
				 this->btnNewWindow->Margin = System::Windows::Forms::Padding(4);
				 this->btnNewWindow->Name = L"btnNewWindow";
				 this->btnNewWindow->Size = System::Drawing::Size(115, 28);
				 this->btnNewWindow->TabIndex = 12;
				 this->btnNewWindow->Text = L"New Window";
				 this->btnNewWindow->UseVisualStyleBackColor = false;
				 this->btnNewWindow->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnNewWindow_Click);
				 // 
				 // btnDraw
				 // 
				 this->btnDraw->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnDraw->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnDraw->Location = System::Drawing::Point(13, 60);
				 this->btnDraw->Margin = System::Windows::Forms::Padding(4);
				 this->btnDraw->Name = L"btnDraw";
				 this->btnDraw->Size = System::Drawing::Size(115, 28);
				 this->btnDraw->TabIndex = 13;
				 this->btnDraw->Text = L"Draw";
				 this->btnDraw->UseVisualStyleBackColor = false;
				 this->btnDraw->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnDraw_Click);
				 // 
				 // btnTriangle
				 // 
				 this->btnTriangle->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnTriangle->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnTriangle->Location = System::Drawing::Point(12, 234);
				 this->btnTriangle->Margin = System::Windows::Forms::Padding(4);
				 this->btnTriangle->Name = L"btnTriangle";
				 this->btnTriangle->Size = System::Drawing::Size(115, 28);
				 this->btnTriangle->TabIndex = 14;
				 this->btnTriangle->Text = L"Triangle";
				 this->btnTriangle->UseVisualStyleBackColor = false;
				 this->btnTriangle->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnTriangle_Click);
				 // 
				 // btnDrawLine
				 // 
				 this->btnDrawLine->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnDrawLine->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnDrawLine->Location = System::Drawing::Point(13, 96);
				 this->btnDrawLine->Margin = System::Windows::Forms::Padding(4);
				 this->btnDrawLine->Name = L"btnDrawLine";
				 this->btnDrawLine->Size = System::Drawing::Size(115, 28);
				 this->btnDrawLine->TabIndex = 15;
				 this->btnDrawLine->Text = L"Draw Line";
				 this->btnDrawLine->UseVisualStyleBackColor = false;
				 this->btnDrawLine->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnDrawLine_Click);
				 // 
				 // btnBezier
				 // 
				 this->btnBezier->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnBezier->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnBezier->Location = System::Drawing::Point(13, 145);
				 this->btnBezier->Margin = System::Windows::Forms::Padding(4);
				 this->btnBezier->Name = L"btnBezier";
				 this->btnBezier->Size = System::Drawing::Size(115, 28);
				 this->btnBezier->TabIndex = 16;
				 this->btnBezier->Text = L"Bezier";
				 this->btnBezier->UseVisualStyleBackColor = false;
				 this->btnBezier->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnBezier_Click);
				 // 
				 // btnRectangle
				 // 
				 this->btnRectangle->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnRectangle->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnRectangle->Location = System::Drawing::Point(12, 270);
				 this->btnRectangle->Margin = System::Windows::Forms::Padding(4);
				 this->btnRectangle->Name = L"btnRectangle";
				 this->btnRectangle->Size = System::Drawing::Size(115, 28);
				 this->btnRectangle->TabIndex = 17;
				 this->btnRectangle->Text = L"Rectangle";
				 this->btnRectangle->UseVisualStyleBackColor = false;
				 this->btnRectangle->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnRectangle_Click);
				 // 
				 // btnDrawFancyLine
				 // 
				 this->btnDrawFancyLine->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnDrawFancyLine->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnDrawFancyLine->Location = System::Drawing::Point(136, 96);
				 this->btnDrawFancyLine->Margin = System::Windows::Forms::Padding(4);
				 this->btnDrawFancyLine->Name = L"btnDrawFancyLine";
				 this->btnDrawFancyLine->Size = System::Drawing::Size(125, 28);
				 this->btnDrawFancyLine->TabIndex = 18;
				 this->btnDrawFancyLine->Text = L"Draw Fancy Line";
				 this->btnDrawFancyLine->UseVisualStyleBackColor = false;
				 this->btnDrawFancyLine->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnDrawFancyLine_Click);
				 // 
				 // btnFancyCircle
				 // 
				 this->btnFancyCircle->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnFancyCircle->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnFancyCircle->Location = System::Drawing::Point(135, 196);
				 this->btnFancyCircle->Margin = System::Windows::Forms::Padding(4);
				 this->btnFancyCircle->Name = L"btnFancyCircle";
				 this->btnFancyCircle->Size = System::Drawing::Size(126, 30);
				 this->btnFancyCircle->TabIndex = 19;
				 this->btnFancyCircle->Text = L"Fancy Circle";
				 this->btnFancyCircle->UseVisualStyleBackColor = false;
				 this->btnFancyCircle->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnFancyCircle_Click);
				 // 
				 // btnFancyTriangle
				 // 
				 this->btnFancyTriangle->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnFancyTriangle->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnFancyTriangle->Location = System::Drawing::Point(135, 234);
				 this->btnFancyTriangle->Margin = System::Windows::Forms::Padding(4);
				 this->btnFancyTriangle->Name = L"btnFancyTriangle";
				 this->btnFancyTriangle->Size = System::Drawing::Size(126, 28);
				 this->btnFancyTriangle->TabIndex = 20;
				 this->btnFancyTriangle->Text = L"Fancy Triangle";
				 this->btnFancyTriangle->UseVisualStyleBackColor = false;
				 // 
				 // btnFancyRectangle
				 // 
				 this->btnFancyRectangle->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnFancyRectangle->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnFancyRectangle->Location = System::Drawing::Point(135, 270);
				 this->btnFancyRectangle->Margin = System::Windows::Forms::Padding(4);
				 this->btnFancyRectangle->Name = L"btnFancyRectangle";
				 this->btnFancyRectangle->Size = System::Drawing::Size(126, 28);
				 this->btnFancyRectangle->TabIndex = 21;
				 this->btnFancyRectangle->Text = L"Fancy Rectangle";
				 this->btnFancyRectangle->UseVisualStyleBackColor = false;
				 this->btnFancyRectangle->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnFancyRectangle_Click);
				 // 
				 // btnWhite
				 // 
				 this->btnWhite->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(255)));
				 this->btnWhite->Location = System::Drawing::Point(67, 375);
				 this->btnWhite->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnWhite->Name = L"btnWhite";
				 this->btnWhite->Size = System::Drawing::Size(28, 28);
				 this->btnWhite->TabIndex = 25;
				 this->btnWhite->UseVisualStyleBackColor = false;
				 this->btnWhite->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnWhite_Click);
				 // 
				 // btnYellow
				 // 
				 this->btnYellow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->btnYellow->Location = System::Drawing::Point(67, 321);
				 this->btnYellow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnYellow->Name = L"btnYellow";
				 this->btnYellow->Size = System::Drawing::Size(28, 28);
				 this->btnYellow->TabIndex = 26;
				 this->btnYellow->UseVisualStyleBackColor = false;
				 this->btnYellow->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnYellow_Click);
				 // 
				 // btnOrange
				 // 
				 this->btnOrange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->btnOrange->Location = System::Drawing::Point(93, 321);
				 this->btnOrange->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnOrange->Name = L"btnOrange";
				 this->btnOrange->Size = System::Drawing::Size(28, 28);
				 this->btnOrange->TabIndex = 27;
				 this->btnOrange->UseVisualStyleBackColor = false;
				 this->btnOrange->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnOrange_Click);
				 // 
				 // btnGray
				 // 
				 this->btnGray->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(128)));
				 this->btnGray->Location = System::Drawing::Point(13, 375);
				 this->btnGray->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnGray->Name = L"btnGray";
				 this->btnGray->Size = System::Drawing::Size(28, 28);
				 this->btnGray->TabIndex = 28;
				 this->btnGray->UseVisualStyleBackColor = false;
				 this->btnGray->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnGray_Click);
				 // 
				 // btnBlue
				 // 
				 this->btnBlue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					 static_cast<System::Int32>(static_cast<System::Byte>(255)));
				 this->btnBlue->Location = System::Drawing::Point(67, 348);
				 this->btnBlue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnBlue->Name = L"btnBlue";
				 this->btnBlue->Size = System::Drawing::Size(28, 28);
				 this->btnBlue->TabIndex = 29;
				 this->btnBlue->UseVisualStyleBackColor = false;
				 this->btnBlue->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnBlue_Click);
				 // 
				 // btnBrown
				 // 
				 this->btnBrown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->btnBrown->Location = System::Drawing::Point(93, 348);
				 this->btnBrown->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnBrown->Name = L"btnBrown";
				 this->btnBrown->Size = System::Drawing::Size(28, 28);
				 this->btnBrown->TabIndex = 30;
				 this->btnBrown->UseVisualStyleBackColor = false;
				 this->btnBrown->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnBrown_Click);
				 // 
				 // btnRed
				 // 
				 this->btnRed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->btnRed->Location = System::Drawing::Point(13, 348);
				 this->btnRed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnRed->Name = L"btnRed";
				 this->btnRed->Size = System::Drawing::Size(28, 28);
				 this->btnRed->TabIndex = 31;
				 this->btnRed->UseVisualStyleBackColor = false;
				 this->btnRed->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnRed_Click);
				 // 
				 // btnBlack
				 // 
				 this->btnBlack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->btnBlack->Location = System::Drawing::Point(40, 375);
				 this->btnBlack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnBlack->Name = L"btnBlack";
				 this->btnBlack->Size = System::Drawing::Size(28, 28);
				 this->btnBlack->TabIndex = 32;
				 this->btnBlack->UseVisualStyleBackColor = false;
				 this->btnBlack->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnBlack_Click);
				 // 
				 // btnPink
				 // 
				 this->btnPink->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
					 static_cast<System::Int32>(static_cast<System::Byte>(178)));
				 this->btnPink->Location = System::Drawing::Point(40, 321);
				 this->btnPink->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnPink->Name = L"btnPink";
				 this->btnPink->Size = System::Drawing::Size(28, 28);
				 this->btnPink->TabIndex = 33;
				 this->btnPink->UseVisualStyleBackColor = false;
				 this->btnPink->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnPink_Click);
				 // 
				 // btnRGB
				 // 
				 this->btnRGB->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnRGB->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnRGB->Location = System::Drawing::Point(93, 375);
				 this->btnRGB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnRGB->Name = L"btnRGB";
				 this->btnRGB->Size = System::Drawing::Size(46, 28);
				 this->btnRGB->TabIndex = 34;
				 this->btnRGB->Text = L"RGB";
				 this->btnRGB->UseVisualStyleBackColor = false;
				 this->btnRGB->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnRGB_Click);
				 // 
				 // btnPurple
				 // 
				 this->btnPurple->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					 static_cast<System::Int32>(static_cast<System::Byte>(102)));
				 this->btnPurple->Location = System::Drawing::Point(13, 321);
				 this->btnPurple->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnPurple->Name = L"btnPurple";
				 this->btnPurple->Size = System::Drawing::Size(28, 28);
				 this->btnPurple->TabIndex = 35;
				 this->btnPurple->UseVisualStyleBackColor = false;
				 this->btnPurple->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnPurple_Click);
				 // 
				 // btnGreen
				 // 
				 this->btnGreen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->btnGreen->Location = System::Drawing::Point(40, 348);
				 this->btnGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				 this->btnGreen->Name = L"btnGreen";
				 this->btnGreen->Size = System::Drawing::Size(28, 28);
				 this->btnGreen->TabIndex = 36;
				 this->btnGreen->UseVisualStyleBackColor = false;
				 this->btnGreen->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnGreen_Click);
				 // 
				 // btnBlurr
				 // 
				 this->btnBlurr->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnBlurr->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnBlurr->Location = System::Drawing::Point(12, 426);
				 this->btnBlurr->Margin = System::Windows::Forms::Padding(4);
				 this->btnBlurr->Name = L"btnBlurr";
				 this->btnBlurr->Size = System::Drawing::Size(112, 28);
				 this->btnBlurr->TabIndex = 37;
				 this->btnBlurr->Text = L"Blurr";
				 this->btnBlurr->UseVisualStyleBackColor = false;
				 this->btnBlurr->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::button1_Click);
				 // 
				 // btnNegative
				 // 
				 this->btnNegative->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnNegative->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnNegative->Location = System::Drawing::Point(12, 462);
				 this->btnNegative->Margin = System::Windows::Forms::Padding(4);
				 this->btnNegative->Name = L"btnNegative";
				 this->btnNegative->Size = System::Drawing::Size(112, 28);
				 this->btnNegative->TabIndex = 38;
				 this->btnNegative->Text = L"Negative";
				 this->btnNegative->UseVisualStyleBackColor = false;
				 this->btnNegative->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::button2_Click);
				 // 
				 // btnSepia
				 // 
				 this->btnSepia->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnSepia->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnSepia->Location = System::Drawing::Point(136, 426);
				 this->btnSepia->Margin = System::Windows::Forms::Padding(4);
				 this->btnSepia->Name = L"btnSepia";
				 this->btnSepia->Size = System::Drawing::Size(125, 28);
				 this->btnSepia->TabIndex = 39;
				 this->btnSepia->Text = L"Sepia";
				 this->btnSepia->UseVisualStyleBackColor = false;
				 this->btnSepia->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnSepia_Click);
				 // 
				 // btnGrayScale
				 // 
				 this->btnGrayScale->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnGrayScale->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnGrayScale->Location = System::Drawing::Point(136, 462);
				 this->btnGrayScale->Margin = System::Windows::Forms::Padding(4);
				 this->btnGrayScale->Name = L"btnGrayScale";
				 this->btnGrayScale->Size = System::Drawing::Size(125, 28);
				 this->btnGrayScale->TabIndex = 40;
				 this->btnGrayScale->Text = L"GrayScale";
				 this->btnGrayScale->UseVisualStyleBackColor = false;
				 this->btnGrayScale->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnGrayScale_Click);
				 // 
				 // txtBoxRed
				 // 
				 this->txtBoxRed->Location = System::Drawing::Point(182, 321);
				 this->txtBoxRed->Name = L"txtBoxRed";
				 this->txtBoxRed->Size = System::Drawing::Size(50, 22);
				 this->txtBoxRed->TabIndex = 41;
				 // 
				 // txtBoxBlue
				 // 
				 this->txtBoxBlue->Location = System::Drawing::Point(182, 378);
				 this->txtBoxBlue->Name = L"txtBoxBlue";
				 this->txtBoxBlue->Size = System::Drawing::Size(50, 22);
				 this->txtBoxBlue->TabIndex = 42;
				 // 
				 // txtBoxGreen
				 // 
				 this->txtBoxGreen->Location = System::Drawing::Point(182, 349);
				 this->txtBoxGreen->Name = L"txtBoxGreen";
				 this->txtBoxGreen->Size = System::Drawing::Size(50, 22);
				 this->txtBoxGreen->TabIndex = 43;
				 // 
				 // btnNewColor
				 // 
				 this->btnNewColor->BackColor = System::Drawing::Color::Black;
				 this->btnNewColor->Location = System::Drawing::Point(247, 321);
				 this->btnNewColor->Name = L"btnNewColor";
				 this->btnNewColor->Size = System::Drawing::Size(14, 79);
				 this->btnNewColor->TabIndex = 44;
				 this->btnNewColor->UseVisualStyleBackColor = false;
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(154, 324);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(22, 17);
				 this->label1->TabIndex = 45;
				 this->label1->Text = L"R:";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(154, 352);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(23, 17);
				 this->label2->TabIndex = 46;
				 this->label2->Text = L"G:";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(154, 381);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(21, 17);
				 this->label3->TabIndex = 47;
				 this->label3->Text = L"B:";
				 // 
				 // btnRotateVertical
				 // 
				 this->btnRotateVertical->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnRotateVertical->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnRotateVertical->Location = System::Drawing::Point(136, 585);
				 this->btnRotateVertical->Margin = System::Windows::Forms::Padding(4);
				 this->btnRotateVertical->Name = L"btnRotateVertical";
				 this->btnRotateVertical->Size = System::Drawing::Size(125, 28);
				 this->btnRotateVertical->TabIndex = 51;
				 this->btnRotateVertical->Text = L"Rotate Vertical";
				 this->btnRotateVertical->UseVisualStyleBackColor = false;
				 this->btnRotateVertical->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnRotateVertical_Click);
				 // 
				 // btnRotateRight
				 // 
				 this->btnRotateRight->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnRotateRight->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnRotateRight->Location = System::Drawing::Point(136, 549);
				 this->btnRotateRight->Margin = System::Windows::Forms::Padding(4);
				 this->btnRotateRight->Name = L"btnRotateRight";
				 this->btnRotateRight->Size = System::Drawing::Size(125, 28);
				 this->btnRotateRight->TabIndex = 50;
				 this->btnRotateRight->Text = L"Rotate Right";
				 this->btnRotateRight->UseVisualStyleBackColor = false;
				 this->btnRotateRight->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnRotateRight_Click);
				 // 
				 // btnRotateHorizontal
				 // 
				 this->btnRotateHorizontal->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnRotateHorizontal->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnRotateHorizontal->Location = System::Drawing::Point(12, 585);
				 this->btnRotateHorizontal->Margin = System::Windows::Forms::Padding(4);
				 this->btnRotateHorizontal->Name = L"btnRotateHorizontal";
				 this->btnRotateHorizontal->Size = System::Drawing::Size(112, 28);
				 this->btnRotateHorizontal->TabIndex = 49;
				 this->btnRotateHorizontal->Text = L"Rotate Horizontal";
				 this->btnRotateHorizontal->UseVisualStyleBackColor = false;
				 this->btnRotateHorizontal->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnRotateHorizontal_Click);
				 // 
				 // btnRotateLeft
				 // 
				 this->btnRotateLeft->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnRotateLeft->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnRotateLeft->Location = System::Drawing::Point(12, 549);
				 this->btnRotateLeft->Margin = System::Windows::Forms::Padding(4);
				 this->btnRotateLeft->Name = L"btnRotateLeft";
				 this->btnRotateLeft->Size = System::Drawing::Size(112, 28);
				 this->btnRotateLeft->TabIndex = 48;
				 this->btnRotateLeft->Text = L"Rotate Left";
				 this->btnRotateLeft->UseVisualStyleBackColor = false;
				 this->btnRotateLeft->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnRotateLeft_Click_1);
				 // 
				 // btnSelect
				 // 
				 this->btnSelect->BackColor = System::Drawing::SystemColors::InfoText;
				 this->btnSelect->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->btnSelect->Location = System::Drawing::Point(12, 504);
				 this->btnSelect->Margin = System::Windows::Forms::Padding(4);
				 this->btnSelect->Name = L"btnSelect";
				 this->btnSelect->Size = System::Drawing::Size(109, 28);
				 this->btnSelect->TabIndex = 52;
				 this->btnSelect->Text = L"Select";
				 this->btnSelect->UseVisualStyleBackColor = false;
				 this->btnSelect->Click += gcnew System::EventHandler(this, &GraphicsEditorMainWindow::btnSelect_Click);
				 // 
				 // GraphicsEditorMainWindow
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->ClientSize = System::Drawing::Size(273, 626);
				 this->Controls->Add(this->btnSelect);
				 this->Controls->Add(this->btnRotateVertical);
				 this->Controls->Add(this->btnRotateRight);
				 this->Controls->Add(this->btnRotateHorizontal);
				 this->Controls->Add(this->btnRotateLeft);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->btnNewColor);
				 this->Controls->Add(this->txtBoxGreen);
				 this->Controls->Add(this->txtBoxBlue);
				 this->Controls->Add(this->txtBoxRed);
				 this->Controls->Add(this->btnGrayScale);
				 this->Controls->Add(this->btnSepia);
				 this->Controls->Add(this->btnNegative);
				 this->Controls->Add(this->btnBlurr);
				 this->Controls->Add(this->btnGreen);
				 this->Controls->Add(this->btnPurple);
				 this->Controls->Add(this->btnRGB);
				 this->Controls->Add(this->btnPink);
				 this->Controls->Add(this->btnBlack);
				 this->Controls->Add(this->btnRed);
				 this->Controls->Add(this->btnBrown);
				 this->Controls->Add(this->btnBlue);
				 this->Controls->Add(this->btnGray);
				 this->Controls->Add(this->btnOrange);
				 this->Controls->Add(this->btnYellow);
				 this->Controls->Add(this->btnWhite);
				 this->Controls->Add(this->btnFancyRectangle);
				 this->Controls->Add(this->btnFancyTriangle);
				 this->Controls->Add(this->btnFancyCircle);
				 this->Controls->Add(this->btnDrawFancyLine);
				 this->Controls->Add(this->btnRectangle);
				 this->Controls->Add(this->btnBezier);
				 this->Controls->Add(this->btnDrawLine);
				 this->Controls->Add(this->btnTriangle);
				 this->Controls->Add(this->btnDraw);
				 this->Controls->Add(this->btnNewWindow);
				 this->Controls->Add(this->btnCircle);
				 this->Location = System::Drawing::Point(-5, -5);
				 this->Margin = System::Windows::Forms::Padding(4);
				 this->Name = L"GraphicsEditorMainWindow";
				 this->Text = L"GraphicsEditorMainWindow";
				 this->ResumeLayout(false);
				 this->PerformLayout();

	}

	#pragma endregion
	
	private: System::Void btnNewWindow_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		btnDraw->Enabled = true;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = true;
		btnTriangle->Enabled = true;
	}

	private: System::Void btnDraw_Click(System::Object^  sender, System::EventArgs^  e)
	{
		isBtnDrawPressed = true;
		btnDraw->Enabled = false;
		btnBezier->Enabled = true;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = true;
		btnFancyCircle->Enabled = true;
		btnFancyRectangle->Enabled = true;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = true;
		draw();
	}

	private: System::Void draw()
	{
		SDL_Event event;
		functions::Point previous;
		functions::Point current;
		bool isPressed = false;
		int counter = 0;
		while (isBtnDrawPressed == true)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					//close();
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnDrawPressed = false;
					break;
				}
				else if (event.type == SDL_MOUSEBUTTONUP)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						counter = 0;
						isPressed = false;
					}
				}
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = true;
					}
				}
				else if (event.type == SDL_MOUSEMOTION)
				{
					if (isPressed)
					{
						if (counter == 0)
						{
							previous.setX(event.motion.x);
							previous.setY(event.motion.y);
							counter++;
						}

						else
						{
							current.setX(event.motion.x);
							current.setY(event.motion.y);
							functions::bresenhamLine(current, previous, renderer);
							previous.setX(current.getX());
							previous.setY(current.getY());
						}


						SDL_RenderDrawPoint(renderer, event.motion.x, event.motion.y);
						SDL_RenderPresent(renderer);
					}
				}
			}
		};
	}

	private: System::Void btnDrawLine_Click(System::Object^  sender, System::EventArgs^  e)
	{
		isBtnDrawLinePressed = true;
		btnDraw->Enabled = true;
		btnBezier->Enabled = true;
		btnDrawLine->Enabled = false;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = true;
		btnFancyCircle->Enabled = true;
		btnFancyRectangle->Enabled = true;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = true;
		drawLine();
	}

	private: System::Void drawLine()
	{
		SDL_Event event;
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		SDL_SaveBMP(sshot, "screenshot.bmp");
		//SDL_FreeSurface(sshot);
		functions::Point point1;
		functions::Point point2;
		int counter = 0;
		bool isPressed = false;
		while (isBtnDrawLinePressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnDrawLinePressed = false;
					btnDrawLine->Enabled = true;
					break;
				}
				else if (event.type == SDL_MOUSEBUTTONUP)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = false;
						SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
						SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
						SDL_SaveBMP(sshot, "screenshot.bmp");
						SDL_FreeSurface(sshot);

					}
				}
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = true;
						counter = 0;
					}
				}
				else if (event.type == SDL_MOUSEMOTION)
				{
					if (counter == 0)
					{
						point1.setX(event.button.x);
						point1.setY(event.button.y);
						counter++;
					}

					else
					{
						if (isPressed)
						{
							point2.setX(event.motion.x);
							point2.setY(event.motion.y);
							functions::loadBMP(sshot, renderer);
							functions::bresenhamLine(point1, point2, renderer);
							SDL_RenderPresent(renderer);
						}
					}
				}
			}
		}
	}

	private: System::Void btnCircle_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		isBtnCirclePressed = true;
		btnDraw->Enabled = true;
		btnBezier->Enabled = true;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = false;
		btnRectangle->Enabled = true;
		btnFancyCircle->Enabled = true;
		btnFancyRectangle->Enabled = true;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = true;
		drawCircle();
	}

	private: System::Void drawCircle()
	{
		SDL_Event event;
		/*SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		int length = surface->h * surface->w;
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		Uint32 *pixels1 = (Uint32*)sshot->pixels;
		Uint32 color = SDL_MapRGB(sshot->format, 255, 0, 0);
		
		for (int i = 0; i < length; i++)
		{
			pixels1[i] = color;
		}
		SDL_SaveBMP(sshot, "screenshot.bmp");
		SDL_FreeSurface(surface);
		SDL_FreeSurface(sshot);*/
		functions::Point point1;
		functions::Point point2;
		bool isPressed = false;
		int counter = 0;
		while (isBtnCirclePressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnCirclePressed = false;
					btnCircle->Enabled = true;
					break;
				}
				else if (event.type == SDL_MOUSEBUTTONUP)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = false;
						/*SDL_Surface* surface = SDL_GetWindowSurface(window);
						SDL_Surface* sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
						SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
						SDL_SaveBMP(sshot, "screenshot.bmp");
						SDL_FreeSurface(sshot);
						SDL_FreeSurface(surface);*/
					}
				}
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						counter = 0;
						isPressed = true;

					}
				}
				else if (event.type == SDL_MOUSEMOTION)
				{
					if (counter == 0)
					{
						point1.setX(event.button.x);
						point1.setY(event.button.y);
						counter++;
					}

					else
					{
						if (isPressed)
						{
							point2.setX(event.motion.x);
							point2.setY(event.motion.y); 
							//functions::loadBMP(sshot, renderer);
							functions::BresenhamCircleDraw2(point1.getX(), point1.getY(), point1.distance(point2) ,renderer, window);
							SDL_RenderPresent(renderer);
						}
					}
				}
				/*else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					functions::BresenhamCircleDraw(event.button.x, event.button.y, 50, renderer);
					SDL_RenderPresent(renderer);
				}*/
			}
		}
	}

	private: System::Void btnTriangle_Click(System::Object^  sender, System::EventArgs^  e) {
		isBtnTrianglePressed = true;
		btnCircle->Enabled = false;
		btnBezier->Enabled = true;
		drawTriangle();
		isBtnTrianglePressed = false;
		btnCircle->Enabled = true;
	}

	private: System::Void drawTriangle()
	{
		SDL_Event event;
		int point1;
		int point2;
		int point3;
		int clickCounter = 0;
		while (isBtnTrianglePressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnCirclePressed = false;
					isBtnDrawLinePressed = false;
					isBtnDrawPressed = true;
					isBtnTrianglePressed = false;
					break;
				}
				else if (true)
				{

				}
			}
		}

	}

	private: System::Void btnBezier_Click(System::Object^  sender, System::EventArgs^  e)
	{
		isBtnBezierPressed = true;
		btnDraw->Enabled = true;
		btnBezier->Enabled = false;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = true;
		btnFancyCircle->Enabled = true;
		btnFancyRectangle->Enabled = true;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = true;
		bezier();
	}

	private: System::Void bezier()
	{
		SDL_Event event;
		std::vector<functions::Point> points;
		int counter = 0;
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		SDL_SaveBMP(sshot, "screenshot.bmp");
		SDL_FreeSurface(sshot);
		
		while (isBtnBezierPressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnCirclePressed = false;
					isBtnDrawLinePressed = false;
					isBtnDrawPressed = false;
					isBtnTrianglePressed = false;
					isBtnBezierPressed = false;
					btnBezier->Enabled = true;
					break;
				}
				
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					functions::Point tempPoint = functions::Point(event.button.x, event.button.y);
					//SDL_RenderDrawPoint(renderer, tempPoint.getX(), tempPoint.getY());
					//SDL_RenderDrawPoint(renderer, tempPoint.getX(), tempPoint.getY() - 1);
					//SDL_RenderDrawPoint(renderer, tempPoint.getX(), tempPoint.getY() - 2);
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() - 1, tempPoint.getY());
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() - 2, tempPoint.getY());
					//SDL_RenderDrawPoint(renderer, tempPoint.getX(), tempPoint.getY() + 1);
					//SDL_RenderDrawPoint(renderer, tempPoint.getX(), tempPoint.getY() + 2);
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() + 1, tempPoint.getY());
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() + 2, tempPoint.getY());
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() + 1, tempPoint.getY() + 1);
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() + 1, tempPoint.getY()) - 1;
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() - 1, tempPoint.getY() + 1);
					//SDL_RenderDrawPoint(renderer, tempPoint.getX() - 1, tempPoint.getY() - 1);

					if (counter == 0)
					{
						points.push_back(tempPoint);
					}
					else
					{
						functions::loadBMP(sshot, renderer);
						if (counter >= 2)
						{
							functions::Point helpPoint = points[counter - 1];
							points.pop_back();
							points.push_back(tempPoint);
							points.push_back(helpPoint);
							functions::bezier(points, renderer);
							SDL_RenderPresent(renderer);
						}
						else
						{
							points.push_back(tempPoint);
							functions::bezier(points, renderer);
							SDL_RenderPresent(renderer);
						}
					}

					counter++;
				}
			}
		}
	}

	private: System::Void btnRectangle_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		isBtnRectanglePressed = true;
		btnDraw->Enabled = true;
		btnBezier->Enabled = true;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = false;
		btnFancyCircle->Enabled = true;
		btnFancyRectangle->Enabled = true;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = true;
		rectangle();
	}

	private: System::Void rectangle()
	{
		SDL_Event event;
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		SDL_SaveBMP(sshot, "screenshot.bmp");
		SDL_FreeSurface(sshot);
		functions::Point point1;
		functions::Point point2;
		int counter = 0;
		bool isPressed = false;
		while (isBtnRectanglePressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnCirclePressed = false;
					isBtnDrawLinePressed = false;
					isBtnDrawPressed = false;
					isBtnTrianglePressed = false;
					isBtnBezierPressed = false;
					isBtnRectanglePressed = false;
					btnRectangle->Enabled = true;
					break;
				}
				else if (event.type == SDL_MOUSEBUTTONUP)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = false;
						SDL_Surface* surface = SDL_GetWindowSurface(window);
						SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
						SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
						SDL_SaveBMP(sshot, "screenshot.bmp");
						SDL_FreeSurface(sshot);

					}
				}
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = true;
						counter = 0;
					}
				}
				else if (event.type == SDL_MOUSEMOTION)
				{
					if (counter == 0)
					{
						point1.setX(event.button.x);
						point1.setY(event.button.y);
						counter++;
					}
					else
					{
						if (isPressed)
						{
							point2.setX(event.motion.x);
							point2.setY(event.motion.y);
							functions::loadBMP(sshot, renderer);
							functions::rectangle(point1, point2, renderer);
							SDL_RenderPresent(renderer);
						}
					}
				}
			}
		}
	}

	private: System::Void btnDrawFancyLine_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		isBtnDrawFancyLinePressed = true;
		btnDraw->Enabled = true;
		btnBezier->Enabled = true;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = true;
		btnFancyCircle->Enabled = true;
		btnFancyRectangle->Enabled = true;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = false;
		drawFancyLine();
	}

	private: System::Void drawFancyLine()
	{
		SDL_Event event;
		functions::Point point1;
		functions::Point point2;
		int counter = 0;
		bool isPressed = false;
		while (isBtnDrawFancyLinePressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnDrawFancyLinePressed = false;
					btnDrawFancyLine->Enabled = true;
					break;
				}
				else if (event.type == SDL_MOUSEBUTTONUP)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = false;
					}
				}
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = true;
						counter = 0;
					}
				}
				else if (event.type == SDL_MOUSEMOTION)
				{
					if (counter == 0)
					{
						point1.setX(event.button.x);
						point1.setY(event.button.y);
						counter++;
					}

					else
					{
						if (isPressed)
						{
							point2.setX(event.motion.x);
							point2.setY(event.motion.y);
							functions::bresenhamLine(point1, point2, renderer);
							SDL_RenderPresent(renderer);
						}
					}
				}
			}
		}
	}

	private: System::Void btnFancyCircle_Click(System::Object^  sender, System::EventArgs^  e)
	{
		isBtnFancyCirclePressed = true;
		btnDraw->Enabled = true;
		btnBezier->Enabled = true;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = true;
		btnFancyCircle->Enabled = false;
		btnFancyRectangle->Enabled = true;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = true;
		drawFancyCircle();
	}

	private: System::Void drawFancyCircle()
	{
		SDL_Event event;
		functions::Point point1;
		functions::Point point2;
		bool isPressed = false;
		int counter = 0;
		while (isBtnFancyCirclePressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnFancyCirclePressed = false;
					btnFancyCircle->Enabled = true;
					break;
				}
				else if (event.type == SDL_MOUSEBUTTONUP)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = false;
					}
				}
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						counter = 0;
						isPressed = true;
					}
				}
				else if (event.type == SDL_MOUSEMOTION)
				{
					if (counter == 0)
					{
						point1.setX(event.button.x);
						point1.setY(event.button.y);
						counter++;
					}

					else
					{
						if (isPressed)
						{
							point2.setX(event.motion.x);
							point2.setY(event.motion.y);
							functions::BresenhamCircleDraw(point1.getX(), point1.getY(), point1.distance(point2), renderer);
							SDL_RenderPresent(renderer);
						}
					}
				}
			}
		}
	}

	private: System::Void btnFancyRectangle_Click(System::Object^  sender, System::EventArgs^  e)
	{
		isBtnFancyRectanglePressed = true;
		btnDraw->Enabled = true;
		btnBezier->Enabled = true;
		btnDrawLine->Enabled = true;
		btnBezier->Enabled = true;
		btnCircle->Enabled = true;
		btnRectangle->Enabled = true;
		btnFancyCircle->Enabled = true;
		btnFancyRectangle->Enabled = false;
		btnFancyTriangle->Enabled = true;
		btnDrawFancyLine->Enabled = true;
		drawFancyRectangle();
	}

	private: System::Void drawFancyRectangle()
	{
		SDL_Event event;
		functions::Point point1;
		functions::Point point2;
		int counter = 0;
		bool isPressed = false;
		while (isBtnFancyRectanglePressed)
		{
			if (SDL_PollEvent(&event) != 0)
			{
				if (event.type == SDL_QUIT)
				{
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
					SDL_RenderClear(renderer);
					SDL_RenderPresent(renderer);
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
					isBtnFancyRectanglePressed = false;
					btnFancyRectangle->Enabled = true;
					break;
				}
				else if (event.type == SDL_MOUSEBUTTONUP)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = false;
					}
				}
				else if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						isPressed = true;
						counter = 0;
					}
				}
				else if (event.type == SDL_MOUSEMOTION)
				{
					if (counter == 0)
					{
						point1.setX(event.button.x);
						point1.setY(event.button.y);
						counter++;
					}

					else
					{
						if (isPressed)
						{
							point2.setX(event.motion.x);
							point2.setY(event.motion.y);
							functions::rectangle(point1, point2, renderer);
							SDL_RenderPresent(renderer);
						}
					}
				}
			}
		}
	}

	private: System::Void btnWhite_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "255";
		txtBoxGreen->Text = "255";
		txtBoxBlue->Text = "255";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	}

	private: System::Void btnBlack_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "0";
		txtBoxGreen->Text = "0";
		txtBoxBlue->Text = "0";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	}

	private: System::Void btnRed_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "255";
		txtBoxGreen->Text = "0";
		txtBoxBlue->Text = "0";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	}

	private: System::Void btnGreen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "0";
		txtBoxGreen->Text = "255";
		txtBoxBlue->Text = "0";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	}

	private: System::Void btnYellow_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "255";
		txtBoxGreen->Text = "255";
		txtBoxBlue->Text = "0";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
	}

	private: System::Void btnBrown_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "101";
		txtBoxGreen->Text = "51";
		txtBoxBlue->Text = "0";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(102)),
			static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		SDL_SetRenderDrawColor(renderer, 102, 51, 0, 255);
	}

	private: System::Void btnBlue_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "0";
		txtBoxGreen->Text = "0";
		txtBoxBlue->Text = "255";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
	}

	private: System::Void btnPurple_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "102";
		txtBoxGreen->Text = "0";
		txtBoxBlue->Text = "102";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(102)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(102)));
		SDL_SetRenderDrawColor(renderer, 102, 0, 102, 255);
	}

	private: System::Void btnGray_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "128";
		txtBoxGreen->Text = "129";
		txtBoxBlue->Text = "128";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(129)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		SDL_SetRenderDrawColor(renderer, 128, 129, 128, 255);
	}

	private: System::Void btnOrange_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "255";
		txtBoxGreen->Text = "128";
		txtBoxBlue->Text = "0";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		SDL_SetRenderDrawColor(renderer, 255, 128, 0, 255);
	}

	private: System::Void btnPink_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtBoxRed->Text = "255";
		txtBoxGreen->Text = "102";
		txtBoxBlue->Text = "178";
		this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(102)),
			static_cast<System::Int32>(static_cast<System::Byte>(178)));
		SDL_SetRenderDrawColor(renderer, 255, 102, 178, 255);
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SDL_Surface* image;
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		SDL_SaveBMP(sshot, "screenshot.bmp");
		SDL_FreeSurface(sshot);
		SDL_FreeSurface(surface);
		image = SDL_LoadBMP("screenshot.bmp");
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);

		auto format = image->format;
		int length = image->h * image->w;

		Uint32 *pixels1 = (Uint32*)image->pixels;
		Uint32 color = SDL_MapRGB(image->format, 255, 0, 0);
		Uint32 *blurred = new Uint32[length];

		int width = image->pitch / 4;
		int red;
		int green;
		int blue;

		SDL_Color colours;

		for (int i = 0; i < length; i++)
		{
			if (i == 0)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i+1], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i + width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 4;
				green /= 4;
				blue /= 4;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else if (i == 499)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - 1], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i + width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 4;
				green /= 4;
				blue /= 4;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else if (i == 249500)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + 1], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i - width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 4;
				green /= 4;
				blue /= 4;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else if (i == 249999)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 4;
				green /= 4;
				blue /= 4;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else if (i > 0 && i < 499)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 6;
				green /= 6;
				blue /= 6;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else if (i > 249500 && i < 249999)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 6;
				green /= 6;
				blue /= 6;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else if (i % 500 == 0)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 6;
				green /= 6;
				blue /= 6;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else if ((i + 1) % 500 == 0)
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i + width - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - width - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 6;
				green /= 6;
				blue /= 6;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
			else
			{
				SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
				red = colours.r;
				green = colours.g;
				blue = colours.b;
				SDL_GetRGB(pixels1[i + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[i - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[width + i - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[width + i], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[width + i + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[-width + i - 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[-width + i], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;
				SDL_GetRGB(pixels1[-width + i + 1], format, &colours.r, &colours.g, &colours.b);
				red += colours.r;
				green += colours.g;
				blue += colours.b;

				red /= 9;
				green /= 9;
				blue /= 9;

				blurred[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
			}
		}

		image->pixels = blurred;
		texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SDL_Surface* image;
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		SDL_SaveBMP(sshot, "screenshot.bmp");
		SDL_FreeSurface(sshot);
		SDL_FreeSurface(surface);
		image = SDL_LoadBMP("nismoGTR.bmp");
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);

		auto format = image->format;
		int length = image->h * image->w;

		Uint32 *pixels1 = (Uint32*)image->pixels;
		Uint32 *negative = new Uint32[length];

		int width = image->pitch / 4;
		int red;
		int green;
		int blue;

		SDL_Color colours;

		for (int i = 0; i < length; i++)
		{
			SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
			red = colours.r;
			green = colours.g;
			blue = colours.b;
			negative[i] = SDL_MapRGB(format, 255 - (int)red, 255 - (int)green, 255 - (int)blue);
		}

		image->pixels = negative;
		texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}

	private: System::Void btnSepia_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SDL_Surface* image;
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		SDL_SaveBMP(sshot, "screenshot.bmp");
		SDL_FreeSurface(sshot);
		SDL_FreeSurface(surface);
		image = SDL_LoadBMP("nismoGTR.bmp");
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);

		auto format = image->format;
		int length = image->h * image->w;

		Uint32 *pixels1 = (Uint32*)image->pixels;
		Uint32 *sepia = new Uint32[length];

		int width = image->pitch / 4;
		int red;
		int green;
		int blue;

		SDL_Color colours;
		//112, 66, 20
		for (int i = 0; i < length; i++)
		{
			SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
			red = green = blue = 
			red = (colours.r * .393) + (colours.g * .769) + (colours.b * .189);
			if (red > 255)
			{
				red = 255;
			}
			green = (colours.r * .349) + (colours.g * .686) + (colours.b * .168);
			if (green > 255)
			{
				green = 255;
			}
			blue = (colours.r * .272) + (colours.g * .534) + (colours.b * .131);
			if (blue > 255)
			{
				blue = 255;
			}
			sepia[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
		}

		image->pixels = sepia;
		texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}
	private: System::Void btnGrayScale_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SDL_Surface* image;
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *sshot = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sshot->pixels, sshot->pitch);
		SDL_SaveBMP(sshot, "screenshot.bmp");
		SDL_FreeSurface(sshot);
		SDL_FreeSurface(surface);
		image = SDL_LoadBMP("nismoGTR.bmp");
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);

		auto format = image->format;
		int length = image->h * image->w;

		Uint32 *pixels1 = (Uint32*)image->pixels;
		Uint32 *sepia = new Uint32[length];

		int width = image->pitch / 4;
		int red;
		int green;
		int blue;

		SDL_Color colours;
		for (int i = 0; i < length; i++)
		{
			SDL_GetRGB(pixels1[i], format, &colours.r, &colours.g, &colours.b);
			red = (colours.r + colours.g + colours.b) / 3;
			green = (colours.r + colours.g + colours.b) / 3;
			blue = (colours.r + colours.g + colours.b) / 3;

			if (red > 255)
			{
				red = 255;
			}
			if (green > 255)
			{
				green = 255;
			}
			if (blue > 255)
			{
				blue = 255;
			}
			sepia[i] = SDL_MapRGB(format, (int)red, (int)green, (int)blue);
		}
		
		image->pixels = sepia;
		texture = SDL_CreateTextureFromSurface(renderer, image);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}

	private: System::Void btnRGB_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int red = System::Convert::ToInt32(txtBoxRed->Text);
		int green = System::Convert::ToInt32(txtBoxGreen->Text);
		int blue = System::Convert::ToInt32(txtBoxBlue->Text);
			
		if (red < 0 || red > 255)
		{
			txtBoxRed->Text = "0";
			MessageBox::Show("Values have to be between 0 and 255.");
		}
		else if (green < 0 || green > 255)
		{
			txtBoxGreen->Text = "0";
			MessageBox::Show("Values have to be between 0 and 255.");
		}
		else if (blue < 0 || blue > 255)
		{
			blue = 0;
			txtBoxBlue->Text = "0";
			MessageBox::Show("Values have to be between 0 and 255.");
		}
		else
		{
			SDL_SetRenderDrawColor(renderer, red, green, blue, 255);
			this->btnNewColor->BackColor = System::Drawing::Color::FromArgb(
				static_cast<System::Int32>(static_cast<System::Byte>(red)), 
				static_cast<System::Int32>(static_cast<System::Byte>(green)),
				static_cast<System::Int32>(static_cast<System::Byte>(blue)));
		}
	}

	private: System::Void btnRotateLeft_Click_1(System::Object^  sender, System::EventArgs^  e) 
	{
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *rotateSurface = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, rotateSurface->pixels, rotateSurface->pitch);

		int length = rotateSurface->h * rotateSurface->w;

		Uint32 *pixels1 = (Uint32*)rotateSurface->pixels;
		Uint32 *rotated = new Uint32[length];

		int rowSize = rotateSurface->pitch / 4;
		int x;
		int y;
		int xNew;
		int yNew;
		double xR = (rowSize) / 2;
		double yR = (rowSize) / 2;

		for (int i = 0; i < length; i++)
		{
			x = i / rowSize;
			y = i % rowSize;
			xNew = (double)xR + (double)(x - xR) * 0 - (double)(y - yR) * 1;
			yNew = (double)yR + (double)(y - yR) * 0 + (double)(x - xR) * 1;
			rotated[(int)(xNew * rowSize + yNew)] = pixels1[i];
		}

		rotateSurface->pixels = rotated;
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, rotateSurface);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}

	private: System::Void btnRotateRight_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *rotateSurface = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, rotateSurface->pixels, rotateSurface->pitch);

		int length = rotateSurface->h * rotateSurface->w;

		Uint32 *pixels1 = (Uint32*)rotateSurface->pixels;
		Uint32 *rotated = new Uint32[length];

		int rowSize = rotateSurface->pitch / 4;
		int x;
		int y;
		int xNew;
		int yNew;
		double xR = (rowSize) / 2;
		double yR = (rowSize) / 2;

		for (int i = 0; i < length; i++)
		{
			x = i / rowSize;
			y = i % rowSize;
			xNew = (double)xR + (double)(x - xR) * 0 - (double)(y - yR) * (-1);
			yNew = (double)yR + (double)(y - yR) * 0 + (double)(x - xR) * (-1);
			rotated[(int)(xNew * rowSize + yNew)] = pixels1[i];
		}

		rotateSurface->pixels = rotated;
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, rotateSurface);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}

	private: System::Void btnRotateHorizontal_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *rotateSurface = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, rotateSurface->pixels, rotateSurface->pitch);

		int length = rotateSurface->h * rotateSurface->w;

		Uint32 *pixels1 = (Uint32*)rotateSurface->pixels;
		Uint32 *rotated = new Uint32[length];

		int rowSize = rotateSurface->pitch / 4;
		int x;
		int y;
		int xNew;
		int yNew;
		double xR = (rowSize) / 2;
		double yR = (rowSize) / 2;

		for (int i = 0; i < length; i++)
		{
			x = i / rowSize;
			y = i % rowSize;
			xNew = (double)xR + (double)(x - xR) * 0 - (double)(y - yR) * (-1);
			yNew = (double)yR + (double)(y - yR) * 0 + (double)(x - xR) * (-1);
			rotated[(int)(yNew * rowSize + xNew)] = pixels1[i];
		}

		rotateSurface->pixels = rotated;
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, rotateSurface);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}

	private: System::Void btnRotateVertical_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SDL_Surface* surface = SDL_GetWindowSurface(window);
		SDL_Surface *rotateSurface = SDL_CreateRGBSurface(0, surface->w, surface->h, 32, 0x00ff0000, 0x0000ff00, 0x000000ff, 0xff000000);
		SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_ARGB8888, rotateSurface->pixels, rotateSurface->pitch);

		int length = rotateSurface->h * rotateSurface->w;

		Uint32 *pixels1 = (Uint32*)rotateSurface->pixels;
		Uint32 *rotated = new Uint32[length];

		int rowSize = rotateSurface->pitch / 4;
		int x;
		int y;
		int xNew;
		int yNew;
		double xR = (rowSize) / 2;
		double yR = (rowSize) / 2;

		for (int i = 0; i < length; i++)
		{
			x = i / rowSize;
			y = i % rowSize;
			xNew = (double)xR + (double)(x - xR) * 0 - (double)(y - yR) * 1;
			yNew = (double)yR + (double)(y - yR) * 0 + (double)(x - xR) * 1;
			rotated[(int)(yNew * rowSize + xNew)] = pixels1[i];
		}

		rotateSurface->pixels = rotated;
		SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, rotateSurface);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}


	private: System::Void btnSelect_Click(System::Object^  sender, System::EventArgs^  e) 
	{

	}
};
}
#endif


