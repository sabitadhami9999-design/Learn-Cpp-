//C++ program to overload the binary operator + (This program adds two complex numbers)
#include <iostream>
using namespace std;
class Complex_num
{
// declare data member or variables
int real, imag;
public:
// create a member function to take input
void inp()
{
cout << " Input two complex number: " << endl;
cin >> real>>imag;
}
// use binary'+' operator to overload
Complex_num operator +(Complex_num obj)
{
Complex_num A;
// assign values to object
A.real = real + obj.real;
A.imag = imag + obj.imag;
return A;
}
void print()
{
cout << real <<"+" << imag << "i" <<endl;
}
};
int main ()
{
Complex_num obj1, obj2,obj3; // here we created object of class Addition i.e x1 a
// accepting the values
obj1.inp();
obj2.inp();
// display user entered values
cout << "Entered values are:"<<endl;
cout <<"\t";
obj1.print();
cout <<"\t";
obj2.print();
// add the objects
obj3=obj1+ obj2;
cout << "The addition of two complex (real and imaginary) numbers: "<<endl;
obj3.print(); // call print function to display the result of addition
return 0;
}
