#include <iostream>
#include "ValueAdder.h"

int main()
{
	CalculatePercentage myCalculater;

	myCalculater.AddToSum(5);
	myCalculater.AddToSum(15);
	//myCalculater.AddToSum(7);
	//myCalculater.AddToSum(5);
	//myCalculater.AddToSum(4);

	std::cout << "My sum : " << myCalculater.GetTotalSum() <<std::endl;

	// Now percentages
	std::vector<double> getValues = myCalculater.GetAllValues();
	std::vector<double> getPercentages = myCalculater.GetPercentages();

	auto valuesIt = getValues.begin();
	auto percentagesIt = getPercentages.begin();
	
	for (; valuesIt != getValues.end() && percentagesIt != getPercentages.end(); ++valuesIt, ++percentagesIt) {
		std::cout << "The percentage of " << *valuesIt << " is " << *percentagesIt <<"%" << std::endl;
	}
}