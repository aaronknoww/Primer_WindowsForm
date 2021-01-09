#include "../Headers/Precom.h"
#include "../Headers/QuikSort.h"
#include "../Headers/MyForm.h"


using namespace System;    
using namespace System::Windows::Forms;
[STAThread]

void Main(array<String^>^ arg) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	formas1::MyForm form;	//Reemplazar [formas1] por el nombre que tenga el proyecto y [Myform] por el nombre de tu ventana. 
	Application::Run(% form);
}

