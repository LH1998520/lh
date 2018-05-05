#include<iostream>
using namespace std;


class Complex
{
private:
	double real;
	double imag;
public:
	Complex(double r,double i){real=r;imag=i;}
	friend istream &operator>>(istream &in,Complex &c);
	friend ostream &operator<<(ostream &out,Complex &c);
};

int main()
{
	Complex c1(0,0);
	cin>>c1;
	cout<<c1;
	return 0;

}
istream &operator>>(istream &in,Complex &c)
{
	in>>c.real>>c.imag;
	return in;
}
ostream &operator<<(ostream &out,Complex &c)
{
	if(c.imag>0)
		out<<c.real<<"+"<<c.imag<<"i"<<endl;
	else
		out<<c.real<<c.imag<<"i"<<endl;
	return out;
}


