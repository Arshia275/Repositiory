#include<iostream>
using namespace std;
void traffic_Instructions()
{
	cout<<"Traffic Instructions:"<<endl;
	cout<<"Enter the number(1-Red,2-Yellow,3-Green)or Enter 0 to quit:"<<endl;
	
}
int main()
{
    //Arshia Shahnawaz
	int choice;
	do{
	traffic_Instructions();
	cout<<"Enter Number of your choice:"<<endl;
	cin>>choice;
	switch(choice)	
	{
		case 0:
			cout<<"You choose to exit..."<<endl;
			break;
		case 1:
			cout<<"Stop"<<endl;
			break;
		case 2:
			cout<<"Be ready"<<endl;
			break;
		case 3:
			cout<<" You can Go"<<endl;
			break;
		default:
			cout<<"Invalid Number...Try again"<<endl;
			break;
			
	}
	}
	while(choice!=0);
	return 0;
	
	
	
}
