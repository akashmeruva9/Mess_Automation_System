#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;


void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MessAutomation::MainForm loginForm;
	loginForm.ShowDialog();
}
