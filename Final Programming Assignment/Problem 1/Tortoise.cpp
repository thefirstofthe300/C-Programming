#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Tortoise.h"

using namespace std;

Tortoise::Tortoise(int firstPosition)
{
	position = firstPosition;
};

int Tortoise::getPosition()
{
	return position;
};
void Tortoise::move()
{
	int random;
	random = rand() % 10 + 1;
	if (random <= 5)
	{
		position += 3;
	}
	else if (random <= 7)
	{
		position -= 6;
	}
	else
	{
		position += 1;
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
void Tortoise::winner()
{
	cout << "Woo-hooo! Slow and steady wins the race! Congratulations, turtle!" << endl;
};