#include<iostream>
using namespace std;

class Shape{
public:
	virtual void area(){
		cout<<"Area calculation not defined for generic shape"<<endl;
	}
	};
	class Rectangle:public Shape{
		private:
			double length,width;
		public:
			Rectangle(double l,double w){
				length=l;
				width=w;
				}
	void area(){
		cout<<"The area is:"<<length*width<<endl;
	}
			};
			class Circle:public Shape{
				private:
					double radius;
				public:
			Circle(double r){
				radius=r;
			}
			void area(){
			cout<<"The area is:"<<3.142*radius*radius<<endl;
			}		
			};
			int main(){
			Rectangle rect(34,36);
			Circle cir(45);
			return 0;	
			}