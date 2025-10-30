#include <iostream>   //std::cin is used to take user input
#include <format>

int main() {
//Length in Yards, feets and inches to Inches

	int yards{};
	std::cout << "Enter the yard portion of your length: ";
	std::cin >> yards;

	int feet{};
	std::cout << "Enter the feet portion of your length: ";
	std::cin >> feet; 

	int inches{};
	std::cout << "Enter the inch portion of your length: ";
	std::cin >> inches;
	
	int con_inches = (yards * 3 * 12) + (feet * 12) + (inches);

	std::cout << std::format("The distance given by you in inches is {}", con_inches) << std::endl;

//Length in inches to yards, feet and inches

	int in_inches{};
	std::cout << "Enter your length in inches: ";
	std::cin >> in_inches;

	int in_feet = in_inches / 12;         // 1 yard = 3 feet
	int ininches = in_inches % 12;		  // 1 foot = 12 inches	
	int in_yards = in_feet / 3;
	int infeet = in_feet % 3;

	std::cout << std::format("The converted length is {} yards {} feet {} and inches", in_yards, infeet, ininches);
}

