#include "pch.h"
#include "MyForm.h"
#include <iostream>
#include "SqlServices.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POO::MyForm monFormulaire;
	
	
	
	Application::Run(% monFormulaire);
}