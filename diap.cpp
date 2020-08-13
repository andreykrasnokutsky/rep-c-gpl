#include <iostream>
using namespace std;

int a,b,i,j;

void diap()
{
	cout<<"Program that shows all numbers inbetween two specified ones."<<endl;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
        cin>>b;

	if (a<b)//to save inital a and b variables
	{
		i=a;
		j=b;
	}
	else if (a>b)//in case when first number is not lower than second
	{
		i=b;
		j=a;
	}
	else if (a=b) i=j=a;//to save variables and being able to operate numbers
	else//end function
	{
		cout<<"Error. Incorrect number.";
		goto end;
	}

	while (i<=j)//output
	{
		cout<<i<<" ";
		i=i+1;
	}
end:
	cout<<endl;
}


int main()
{
	diap();
}
