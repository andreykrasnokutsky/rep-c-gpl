#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	cout<<"Timer v.1"<<endl;//timer program

	cout<<"Enter time: ";
	int t;//time for cin
	cin>>t;

	cout<<"Enter unit (s/m/h/d/): ";
	char u;//time units
	cin>>u;
	if (u=='s') t=t;
	else if (u=='m') t*=60;//translate units to seconds
	else if (u=='h') t*=3600;
	else if (u=='d') t*=3600*24;
	else
	{
		cout<<"error";//I don't know how to stop program
		t=0;
	}

	system("clear");

	int s=time(NULL);//starting time
	int e=s+t;//ending time

	for (int i=s;i<=e;i++)
	{
		cout<<e-i<<" seconds left"<<flush;
		sleep(1);
		system("clear");
	}
	cout<<"You're out of time."<<endl;
}


