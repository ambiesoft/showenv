// showenv.cpp : main project file.

#include "stdafx.h"
#include "../../lsMisc/HighDPI.h"
#include "../../lsMisc/CommandLineParser.h"

#include "gitrev.h"
#include "FormMain.h"

using namespace Ambiesoft;
using namespace Ambiesoft::showenv;
using namespace System::Text;
using namespace System::Reflection;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	InitHighDPISupport();

	CCommandLineParser parser(I18N(L"Show environment values"), L"showenv");
	bool bVersion = false;
	parser.AddOptionRange({ L"-v", L"--version",L"/v" },
		0,
		&bVersion,
		ArgEncodingFlags::ArgEncodingFlags_Default,
		L"Show Version");
	parser.Parse();
	if (bVersion)
	{
		StringBuilder sb;
		sb.AppendFormat(L"{0} v{1}", Application::ProductName, AmbLib::getAssemblyVersion(Assembly::GetExecutingAssembly(), 3));
		sb.AppendLine();
		sb.AppendLine();
		sb.AppendLine(L"gitrev:");
		sb.AppendLine(AmbLib::toWindowsNewLine(gcnew String(GITREV::GetHashMessage().c_str())));
		MessageBox::Show(sb.ToString(),
			Application::ProductName,
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		return 0;
	}
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew FormMain());
	return 0;
}
