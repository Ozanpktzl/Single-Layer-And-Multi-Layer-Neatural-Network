#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MyProject;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyProject::MyForm form;
	Application::Run(% form);
}




