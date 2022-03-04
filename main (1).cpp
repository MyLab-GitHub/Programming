#include <iostream>
#include "Complex.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Constructor with no parameter: " << endl;
    Complex a;
    a.PrintComplex();
    cout << endl;
    
    cout << "Constructor Real Number: " << endl;
    Complex b(3);
    b.PrintComplex();
    cout << endl;
    
    cout << "Constructor with parameter: " << endl;
    Complex c(1, 2);
    c.PrintComplex();
    cout << endl;
    
    cout << "Copy Constructor: " << endl;
    Complex d(c);
    d.PrintComplex();
    cout << endl;
        
    cout << "Multiplication of a complex number by a real number(c * 2): " << endl;
    cout << "(";
    c.PrintComplex();
    cout << ")";
    cout << " * " << 2 << " = ";
    Complex e = c.Multiply(2);
    e.PrintComplex();
    cout << endl;
    
    cout << "Multiplication of two complex numbers (c * e): " << endl;
    cout << "(";
    c.PrintComplex();
    cout << ") * ";
    cout << "(";
    e.PrintComplex();
    cout << ") = ";
    Complex res1 = c.Multiply(e);
    res1.PrintComplex();
    cout << endl;
    
    cout << "Addition of two complex numbers(c + e): " << endl;
    cout << "(";
    c.PrintComplex();
    cout << ") + (";
    e.PrintComplex();
    cout << ") = ";
    Complex res2 = c.AddComplexNumber(e);
    res2.PrintComplex();
    cout << endl;
    
    cout << "The length of a complex number. (length of c): " << endl;
    cout << "Length of ";
    c.PrintComplex();
    cout << " = " << c.Length();
    cout << endl;
}

