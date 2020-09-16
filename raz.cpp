#include <iostream>
using namespace std;
int main()
{
	cout<<"Введите пятизначное число: ";
	int num;
	cin>>num;
	int i, ost[5];
	for (i=0; i<5; i++)
	{
		ost[i]=num%10;//остаток от деления
		num=(num-ost[i])/10;//число=(число-остаток)/10
	}
	int counter=1;
	for (i=4; i>=0; i--)
	{
		cout<<counter<<" цифра="<<ost[i]<<endl;
		counter+=1;
	}
}




