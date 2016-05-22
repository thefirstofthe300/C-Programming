#ifndef PLOT_H
#define PLOT_H

class Plot
{
	public:
		Plot(float, float);
		float getLength();
		void setLength(float);
		float getWidth();
		void setWidth(float);
		void printBoundary();
	private:
		float width;
		float length;
};

#endif