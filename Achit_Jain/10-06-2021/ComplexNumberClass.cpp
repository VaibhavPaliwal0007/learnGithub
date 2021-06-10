#include <iostream>
using namespace std;

/*
A ComplexNumber class contains two data members : one is the real part (R) 
and the other is imaginary (I) (both integers).
Implement the Complex numbers class that contains following functions -
1. constructor
You need to create the appropriate constructor.
2. plus -
This function adds two given complex numbers and updates the first complex 
number.
e.g.
    if C1 = 4 + i5 and C2 = 3 +i1
    C1.plus(C2) results in: 
    C1 = 7 + i6 and C2 = 3 + i1
3. multiply -
This function multiplies two given complex numbers and updates the first 
complex number.
e.g.
    if C1 = 4 + i5 and C2 = 1 + i2
    C1.multiply(C2) results in: 
    C1 = -6 + i13 and C2 = 1 + i2
4. print -
This function prints the given complex number in the following format :
    a + ib
Note : There is space before and after '+' (plus sign) and no space between 
'i' (iota symbol) and b.
*/

class ComplexNumbers
{
private:
    int real;
    int imaginary;

public:
    ComplexNumbers(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        if (imaginary > 0)
        {
            std::cout << real << " + iota" << imaginary;
        }

        else
        {
            std::cout << real << " - iota" << -imaginary;
        }
    }

    void plus(ComplexNumbers const &c2)
    {
        this->real = this->real + c2.real;
        this->imaginary = this->imaginary + c2.imaginary;
    }

    void multiply(ComplexNumbers const &c2)
    {
        int a1 = this->real;
        this->real = (this->real * c2.real) - (this->imaginary * c2.imaginary);
        this->imaginary = (a1 * c2.imaginary) + (c2.real * this->imaginary);
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}