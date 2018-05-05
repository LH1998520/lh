#include<iostream>
using namespace std;

class Complex
{
private:
	double real;
	double imag;
public:
	Complex()
	{
		double a,b;
		cin>>a>>b;
		real=a;
		imag=b;
	
	}
	int operator ==(Complex);
};
int main()
{
	cout<<"第一个复数的实部与虚部："<<endl;
	Complex com1;
	cout<<"第二个复数的实部与虚部："<<endl;
    Complex com2;
	if(com1==com2)
		cout<<"相等!"<<endl;
	else
		cout<<"不相等!"<<endl;
	return 0;
}
int Complex::operator ==(Complex com2)
{
	if(real==com2.real&&imag==com2.imag)
		return 1;
	else
		return 0;
	
}