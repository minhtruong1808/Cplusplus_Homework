
#include "pch.h"
#include <iostream>
using namespace std; 
int main()
{
	int radius = 0;

	cout << "Enter the circle radius: ";
	cin >> radius;

	cout << "Diameter is: " << radius * 2.0
		<< "\nCircumference is: " << 2 * 3.14159 * radius
		<< "\nArea is: " << 3.14159 * radius * radius << endl;
	
}

