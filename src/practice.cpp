#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>
#include <complex>
#include <algorithm>
using namespace std;
class Rational
{
public:
    Rational(int numerator = 0, int denominator = 1) : num(numerator), den(denominator) {}
    int nmerator() const
    {
        return num;
    }
    int denominator() const
    {
        return den;
    }

private:
    int num;
    int den;
};

const Rational operator*(const Rational &lhs,const Rational &rhs)
{
    int newden = lhs.denominator() * rhs.denominator();
    int newnum = lhs.nmerator()*rhs.nmerator();
    int gcd = std::__gcd(newnum, newden);
    Rational newRational(newnum / gcd, newden / gcd);
    return newRational;
}


int main(int argc, char const *argv[])
{
    Rational oneEighth(1, 8);
    Rational oneHalf(1, 2);
    //Rational result = oneHalf * oneEighth;
    //Rational result = oneHalf * 2;
    Rational result = 2* oneHalf;
    cout << "num = " << result.nmerator() << endl;
    cout << "den = " << result.denominator() << endl;
    return 0;
}
