#include<iostream>
using namespace std;

class Cylinder{
	public:
		
		double radius;
		double height;
		
		double calcArea(){
		return 3.142*radius*radius*height;
		}
		double calcVolume(){
			return 2*3.142*radius*radius+2*3.142*radius *height;
		}
};
int main(){
	Cylinder cl;
	double area,volume,radius,height;
	
	cout<<"Enter the radius:"<<endl;
	cin>>cl.radius;
	
	cout<<"Enter the height:"<<endl;
	cin>>cl.height;
	
	area=cl.calcArea();
	volume=cl.calcVolume();
	
	cout<<"The area is:"<<endl<<area;
	cout<<"The volume is:"<<endl<<volume;
	
	return 0;
}
