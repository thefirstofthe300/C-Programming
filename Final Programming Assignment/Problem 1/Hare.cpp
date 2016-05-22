#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Hare.h"

using namespace std;

Hare::Hare(int firstPosition)
{
	position = firstPosition;
};
int Hare::getPosition()
{
	return position;
};
void Hare::move()
{
	int random;
	random = rand() % 10 + 1;
	if (random <= 2)
	{
		position += 0;
	}
	else if (random <= 4)
	{
		position += 9;
	}
	else if (random <= 5)
	{
		position -= 12;
	}
	else if (random <= 8)
	{
		position += 1;
	}
	else
	{
		position -= 2;
	}
	if (position >= 70)
	{
		position = 70;
	}
	else if (position <= 0)
	{
		position = 0;
	}
};
void Hare::winner()
{
	cout << "Yay! The rabbit won! He hops the fastest!" << endl;
};