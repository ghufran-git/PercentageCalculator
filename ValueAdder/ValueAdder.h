/*

Created By: Ghufran Ullah

This program Calculates The sum of 5 Values
Calculates percentage of each Value contributes to the total sum
*/

#pragma once
#include<vector>
class CalculatePercentage
{
public:
	// Constructor & Destructor
	CalculatePercentage();
	~CalculatePercentage();

	// Helper Functions
	void						AddToSum(double value);
	bool						RemoveFromSum(double value);
	std::vector<double>			GetPercentages();
	std::vector<double>			GetAllValues();
	double						GetTotalSum();


private:
	double m_sum;
	std::vector<double> m_values;
	std::vector<double> m_percentageContrib;
};