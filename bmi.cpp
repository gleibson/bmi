//Exercise from the book C++ Primer Plus
//Page 112 BMI with 3 variables
#include <iostream>

const int height_in_inches = 12;
const float height_in_meters = 0.0254;
const float pounds_kilogram = 2.2;

int height_feet, height_inches, weight_pounds, bmi;


int main()
{
	std::cout << "What is your height in feet? " ;
	std::cin >> height_feet;
	std::cout << "\nWhat is your height in inches? ";
	std::cin >> height_inches;
	std::cout << "\nWhat is your weight in pounds? ";
	std::cin >> weight_pounds;

	int height_in_inches = height_inches % height_feet;
	int inches_meters = height_in_inches * height_in_meters;
	int weight_kilogram = weight_pounds / pounds_kilogram;

	bmi = weight_kilogram / (inches_meters ^ 2);

	std::cout << "Your BMI is = " << bmi << '\n';
    
	return 0;
}



