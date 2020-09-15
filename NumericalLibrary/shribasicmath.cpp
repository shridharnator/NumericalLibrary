#include "shribasicmath.h"

long double shribasicmath::shripower(int num, int pow)
{
	long double prod = 1;
	for (int i = 0; i < pow; i++) {
		prod *= num;
	}
	return prod;
}

long double shribasicmath::shrifactorial(int num)
{
		long double fact = 1;
		if (num == 1 || num == 0) { return 1; }
		else if (num > 1) {
			for (int i = 1; i <= num; i++) {
				fact = fact * i;
			}
		}
		return fact;

}

long double shribasicmath::isposorneg(int i)
{
	if (!(i % 2)) {
		return 1;
	}
	else if (i % 2 == 1)
		return -1;
	else
		return 1;
}
