#include<iostream>
using namespace std;

class Distance
{
	protected:
		int inches;
	
	public:
		int feet;
		Distance()
		{
			feet = 0;
			inches =  0;
		}
		Distance *operator->()
		{
			return this;
		}
		Distance operator()(int f, int i)
		{
			feet = f;
			inches = i;
			//return *this;
		}
		void show()
		{
			cout<<"FEET : "<<feet<<endl;
			cout<<"INCHES : "<<inches<<endl;
		}
};

int main()
{
	Distance d1,d2;
	d1->feet=10;
	cout<<d1->feet<<endl;
	//d2 = d1(20,20);
	d1(20,20);
	d1.show();
	return 0;
}
