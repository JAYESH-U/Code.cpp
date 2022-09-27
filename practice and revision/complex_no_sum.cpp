#include<iostream>
using namespace std;

class Complex
{
    private:
       int real=0, imag=0;
    public:
       void Read()
        {
           cout<<"Enter real and imaginary no"<<endl;
           cin>>real>>imag;
        }
        void Add(Complex comp1,Complex comp2)
        {
            real=comp1.real+comp2.real;
            imag=comp1.imag+comp2.imag;
         }
        void Display()
        {
            cout<<"Sum="<<real<<"+"<<imag<<"i";
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.Read();
    c2.Read();
    c3.Add(c1,c2);
    c3.Display();
    return 0;
}
