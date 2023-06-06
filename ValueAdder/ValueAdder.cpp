#include "ValueAdder.h"

CalculatePercentage::CalculatePercentage() : m_sum{}, m_values{}, m_percentageContrib{}
{
	m_sum = 0;
}

CalculatePercentage::~CalculatePercentage()
{
}

void CalculatePercentage::AddToSum(double value)
{
	m_sum += value;

	m_values.push_back(value);
}
bool CalculatePercentage::RemoveFromSum(double value)
{
	m_sum -= value;
	auto it = std::find(m_values.begin(), m_values.end(), value);
	if (it != m_values.end())
	{
		m_values.erase(it);
	}
	else
	{
		return false;
	}
	return true;
}

std::vector<double> CalculatePercentage::GetPercentages()
{
	for (const float& value : m_values) {
		m_percentageContrib.push_back((value / m_sum) * 100);
	}
	return m_percentageContrib;
}

std::vector<double> CalculatePercentage::GetAllValues()
{
	return m_values;
}

double CalculatePercentage::GetTotalSum()
{
	return m_sum;
}
