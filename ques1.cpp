#include<iostream.h>
using namespace std;
#include<string.h>
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
	        ~Distance();                                    //added a destructor to eliminate the class memory after execution
};

int main()
{
	Distance d2,d3;
	d2->feet=10;
	cout<<d2->feet<<endl;
	d2(20,20);
	d2.show();
	return 0;
}
