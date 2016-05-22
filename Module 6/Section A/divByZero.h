#include <stdexcept>

using namespace std;

class divByZero : public runtime_error
{
	public:
		divByZero() : runtime_error("You cannot have a denominator that is equal to 0."){}
};