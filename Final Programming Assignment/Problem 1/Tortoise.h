#ifndef TORTOISE_H
#define TORTOISE_H

class Tortoise
{
public:
	Tortoise(int);
	int getPosition();
	void move();
	void winner();
private:
	int position;
};

#endif // TORTOISE_H
