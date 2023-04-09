#include <iostream>
#include <string>

using namespace std;

class Fraction {
  private:
    int numerator, denominator;

  public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
      if (denominator == 0) {
        throw "Error: Denominator cannot be zero";
      }
      reduce();
    }

    void reduce() {
      int gcd = findGCD(numerator, denominator);
      numerator /= gcd;
      denominator /= gcd;
    }

    string str() const {
      string s = to_string(numerator) + "/" + to_string(denominator);
      return s;
    }

    string repr() const {
      string s = "Fraction(" + to_string(numerator) + ", " + to_string(denominator) + ")";
      return s;
    }

    Fraction operator+(const Fraction& other) const {
      int num = numerator * other.denominator + other.numerator * denominator;
      int denom = denominator * other.denominator;
      Fraction result(num, denom);
      return result;
    }

  private:
    int findGCD(int a, int b) const {
      if (b == 0) {
        return a;
      }
      return findGCD(b, a % b);
    }
};

int main() {
  try {
    Fraction f1(10, 20);
    Fraction f2(2, 5);
    Fraction f3 = f1 + f2;
    cout << f1.str() << " + " << f2.str() << " = " << f3.str() << endl;
    cout << f3.repr() << endl;
  } catch (const char* msg) {
    cerr << msg << endl;
  }
  return 0;
}

