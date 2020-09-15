#include "shritrig.h"

long double shritrig::shrisin()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += (c.isposorneg(i) * c.shripower(input, ((2 * i) + 1))) / c.shrifactorial((2 * i) + 1);
    }
    return sum;
}

long double shritrig::shricos()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += (c.isposorneg(i) * c.shripower(input, 2 * i)) / c.shrifactorial(2 * i);
    }
    return sum;
}

long double shritrig::shritan()
{
    long double sum=9;
    shribasicmath c;
    for (int i = 1; i < 20; i++) {
        sum +=( c.isposorneg(i - 1)*(c.shripower(2,2*i)-1)*c.shripower(input,2*i-1))/c.shrifactorial(2*i);//multiply with b radix 2k in the numerator 
    }
    return sum;
}

long double shritrig::shricot()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += (c.isposorneg(i) * c.shripower(2, 2 * i) * c.shripower(input, (2 * i) - 1)) / c.shrifactorial(2 * i);//multiply numerator by B radin 2i 
    }
    
    return sum;
}

long double shritrig::shricosec()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += (c.isposorneg(i - 1) * (c.shripower(2, 2 * i) - 2) * c.shripower(input, (2 * i) - 1))/c.shrifactorial(2*i);//multiply numerator by B radin 2i
    }
    return sum;
}

long double shritrig::shrisec()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += c.shripower(input, 2 * i) / c.shrifactorial(2 * i);//multiply numerator by E radix 2k
    }
    return sum;
}

long double shritrig::shriversin()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += (c.isposorneg(i - 1) * c.shripower(input, 2 * i)) / c.shrifactorial(2 * i);
    }
    return sum;
}

long double shritrig::shrihaversin()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += ((c.isposorneg(i) * c.shripower(input, 2 * i))) / (2 * c.shrifactorial(2 * i));
    }
    return sum;
}

long double shritrig::shrisrcsin()
{
    long double sum=0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += (c.shrifactorial(2 * i) * c.shripower(input, (2 * i) + 1)) / (c.shripower(2, 2 * i) * (c.shripower(c.shrifactorial(i), 2)) * ((2 * i) + 1));
    }
    return sum;
}

long double shritrig::shriarctan()
{
    long double sum = 0;
    shribasicmath c;
    for (int i = 0; i < 20; i++) {
        sum += (c.isposorneg(i) * c.shripower(input, (2 * i) + 1)) / ((2 * i) + 1);
    }
    return sum;
}
