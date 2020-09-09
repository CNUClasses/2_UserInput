//============================================================================
// Name        : 2_Greet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : ask for a person's name, and greet the person
//============================================================================

#include <iostream>
#include <string>

int main()
{
	int i=0;
	// ask for the person's name
	std::cout << "Please enter your first name: "<<std::endl;;

	// read the name
	std::string name;     // define `name'
	std::cin >> name;     // read into `name'

	// write a greeting
	std::cout << "Hello, " << name  << "!" << std::endl;
	return 0;
}
