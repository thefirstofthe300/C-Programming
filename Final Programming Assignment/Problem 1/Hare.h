#ifndef HARE_H
#define HARE_H

class Hare
{
public:
	Hare(int);
	int getPosition();
	void move();
	void winner();
private:
	int position;
};

#endif // HARE_H
