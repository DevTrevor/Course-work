#include<iostream>
using namespace std;

class Employee{
	public:
		int Idno;
		char name[20];
		char occupation[30];
		
		int data(){
		
		cout<<"Enter your Id.no:"<<endl;
	cin>>Idno;
	
	cout<<"Enter your full name:"<<endl;
	cin>>name;
	
	cout<<"Enter your occupation:"<<endl;
	cin>>occupation;
		}
		int display(){
		cout <<"\nEmployee Details:\n"<<endl;
        cout <<"\nID Number:\n"<<endl<<Idno;
        cout <<"\nName:\n" <<endl<<name;
        cout <<"\nOccupation:\n"<<endl<<occupation;	
		}
};
int main(){
	Employee zuEmp;
	zuEmp.data();
	zuEmp.display();
	
	return 0;
}
