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
	cout<<"��һ��������ʵ�����鲿��"<<endl;
	Complex com1;
	cout<<"�ڶ���������ʵ�����鲿��"<<endl;
    Complex com2;
	if(com1==com2)
		cout<<"���!"<<endl;
	else
		cout<<"�����!"<<endl;
	return 0;
}
int Complex::operator ==(Complex com2)
{
	if(real==com2.real&&imag==com2.imag)
		return 1;
	else
		return 0;
	
}