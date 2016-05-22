#include <iostream>
#include "Revenue.h"

using namespace std;

Revenue::Revenue(float newDemand, float newPrice)
{
	Revenue::setDemand(newDemand);
	Revenue::setPrice(newPrice);
	Revenue::setRevenueValue();
}
float Revenue::getDemand()
{
	return demand;
}
void Revenue::setDemand(float newDemand)
{
	demand = newDemand;
}
float Revenue::getPrice()
{
	return price;
}
void Revenue::setPrice(float newPrice)
{
	price = newPrice;
}
void Revenue::setRevenueValue()
{
	revenueValue = demand * price;
}
void Revenue::printRevenueValue()
{
	cout << "The revenue value is " << price * demand << "." << endl;
}
