#include<iostream>
using namespace std;

class Car
{
private:
	int lnum;
	float cweight;
public:
	Car(int l,float c):lnum(l),cweight(c){}
	virtual void Print() const
	{
		cout<<lnum<<" "<<cweight                 ;
	}
};
class SmallCar:private Car
{
	int passenger;
public:
	SmallCar(int l,float c,int p):Car(l,c)
	{
		passenger=p;
	}
	void Print() const
	{
		Car::Print();
		cout<<" "<<passenger<<endl;
	}
};
class Truck:private Car
{
	int passenger;
	float tweight;
public:
	Truck(int l,float c,int p,float t):Car(l,c)
	{
		passenger=p;
		tweight=t;
	}
	void Print() const
	{

		Car::Print();
		cout<<" "<<passenger<<" "<<tweight<<endl;
	}
};
void main()
{
	Car c(10,20);
	SmallCar s(10,20,30);
	Truck t(10,20,30,40);
	c.Print();
	cout<<endl;
	s.Print();
	t.Print();
}