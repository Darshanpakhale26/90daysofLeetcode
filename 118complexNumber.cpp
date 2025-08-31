// Addition of Complex number

// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     float real;
//     float imag;
// public:
//     Complex(float r = 0, float i = 0) : real(r), imag(i) {}  // Constructor
//     Complex operator + (const Complex& obj) {  // Overloading + operator
//         return Complex(real + obj.real, imag + obj.imag);
//     }
//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main() {
//     Complex c1(3.5, 2.5), c2(1.5, 4.5);
//     Complex c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

//------------------------------ Another simple Method

#include <iostream>

using namespace std;

// Without Using Operator

class Complex
{
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex add(const Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }
};

int main()
{
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1.add(c2);
    c3.display();
    return 0;
}