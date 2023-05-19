#include <iostream>
using namespace std;

#include "Complex.hpp"

int main() {
    // One (a) that is constructed with the default constructor.
    Complex a;
    double realPart, imagPart;

    // Two (b and c) that ask the user for the data to then construct it with the constructor of two integer parameters.
    cout << "Enter the real part for complex number b: ";
    cin >> realPart;
    cout << "Enter the imagimary part for complex number b: ";
    cin >> imagPart;
    // TODO: create an object b with the values typed by the user
    

    cout << "Enter the real part for complex number c: ";
    cin >> realPart;
    cout << "Enter the imagary part for complex number c: ";
    cin >> imagPart;
    // TODO: create an object c with the values typed by the user


    // One (d) that is assigned by the addition of b + c.
    // TODO: Create an object d that contains the sum of b + c
    

    // One (e) that is assigned by the subtraction of b - c.
    // TODO: Create an object e that contains the subtraction of b - c
    

    // Display the contents of the five objects you created.
    cout << "\nComplex number a: (" << a.getReal() << ", " << a.getImag() << ")\n";
    cout << "Complex number b: (" << b.getReal() << ", " << b.getImag() << ")\n";
    cout << "Complex number c: (" << c.getReal() << ", " << c.getImag() << ")\n";
    cout << "Complex number d (b + c): (" << d.getReal() << ", " << d.getImag() << ")\n";
    cout << "Complex number e (b - c): (" << e.getReal() << ", " << e.getImag() << ")\n";

    return 0;
}