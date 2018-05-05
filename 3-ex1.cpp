#include<iostream>
using namespace std;

class Point
{
private:
	int x,y,z;
public:
	Point(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void Print();
	Point operator ++();
	Point operator --();
	Point operator ++(int);
	Point operator --(int);

};
int main()

{
	Point p1(1,2,3),p2(4,5,6),p(0,0,0);
	cout<<"p1:";
	p1.Print();
	++p1;
	cout<<"++p1:";
	p1.Print();
	cout<<"p2:";
	p2.Print();
	--p2;
	cout<<"p2:";
	p2.Print();
	cout<<"p=p1++"<<endl;
	p=p1++;
	cout<<"p:";
	p.Print();
	cout<<"p1:";
	p1.Print();
	cout<<"p=p2--:"<<endl;
	p=p2--;
	cout<<"p:";
	p.Print();
	cout<<"p2:";
	p2.Print();
	return 0;
}
Point Point::operator ++()
{
	++x;
	++y;
	++z;
	return *this;
}
Point Point::operator --()
{
	--x;
	--y;
	--z;
	return *this;
}
Point Point::operator ++(int)
{
	Point temp=*this;
    x++;
	y++;
	z++;
	return *this;
}
Point Point::operator --(int)
{
	Point temp=*this;
    x--;
	y--;
	z--;
	return *this;
}
void Point::Print()
{
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
