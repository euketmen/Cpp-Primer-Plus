//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <string>

//-------------------------------------------------------------------------------------------------
struct WilliamWingate
{
	std::string company_name;
	float diametr;
	int ves;
};
//-------------------------------------------------------------------------------------------------
int main() 
{
	WilliamWingate* Pizza = new WilliamWingate;
	
	std::cout << "Enter diametr ";
	(std::cin >> Pizza->diametr).get();
	
	std::cout << "Enter company name ";
	getline(std::cin, Pizza->company_name);

	std::cout << "Enter ves ";
	std::cin >> Pizza->ves;

	std::cout << std::endl;

	std::cout << "Company name " << Pizza->company_name << std::endl;
	std::cout << "diametr " << Pizza->diametr << std::endl;
	std::cout << "ves " << Pizza->ves << std::endl;

	std::cin.get();
	std::cin.get();
	return 0;
}
//-------------------------------------------------------------------------------------------------
