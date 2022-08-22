#pragma once

namespace SurfBrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Surf
	/// </summary>
	public ref class Surf : public System::Windows::Forms::Form
	{
	public:
		Surf(void)
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
		~Surf()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(385, 258);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Surf Browser";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Surf::button1_Click);
			// 
			// Surf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 536);
			this->Controls->Add(this->button1);
			this->Name = L"Surf";
			this->Text = L"Surf";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
