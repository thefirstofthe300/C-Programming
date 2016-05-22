#ifndef REVENUE_H
#define REVENUE_H

class Revenue
{
	public:
		Revenue(float newDemand, float newPrice);
		float getDemand();
		void setDemand(float newDemand);
		float getPrice();
		void setPrice(float newDemand);
		void setRevenueValue();
		void printRevenueValue();
	private:
		float demand;
		float price;
		float revenueValue;
};

#endif