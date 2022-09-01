#include <iostream>
using namespace std;
class rectangle 
{
	public:
		int length;
		int breadth;
		
		void initialise(int l, int b)
		{
			length=l;
			breadth=b;
		}
		
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			int p;
			p=2*(length+breadth);
			return p;			
		}
		
};
int main()
{
	rectangle r;
	int l,b;
	cout<<"Enter length and breadth"<<endl;
	cin>>l>>b;
	r.initialise(l,b);
	
	int a=r.area();
	int peri=r.perimeter();
	
	cout<<"Area is "<<a<<endl;
	cout<<"Perimeter is "<<peri<<endl;
	return 0;
}
