#include <iostream>
using namespace std;

int i, a, b, sum;

int sumany(int a, int b)
{
	sum=0;
	i=a;
	while (i<=b)
	{
		sum+=i;
		i=i+1;
	}
	return sum;
}

int main()
{
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"enter 2nd number: ";
	cin>>b;
	cout<<"Sum of 1st to 2nd inclusive is: "<<sumany(a,b)<<endl;
}
