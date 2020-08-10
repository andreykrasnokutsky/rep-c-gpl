#include <iostream>
using namespace std;

int m,n;//первое и второе число
int x,y;//операции с первым и вторым числом
int r;//остаток деления
int d;//наибольший общий делитель

int nodsecpart(int x,int y)//нахождение наиб. общ. дел., 2+ пункты
{
	r=x%y;
	if (r==0) d=y;
	else
	{
			x=y;
			y=r;
			nodsecpart(x,y);
	}
	return d;
}
int main()
{
	cout<<"Enter first number: ";
	cin>>m;
	cout<<"Enter second number: ";
	cin>>n;
	if (m>=n)
        {
                x=m;
                y=n;
        }
        else
        {
                x=n;
                y=m;
        }
	cout<<"Greater common factor is: "<<nodsecpart(m,n)<<endl;
}
//я на самом деле не понимаю, как вычисление идет, просто написал прогамму под алгоритм Евклида, найденный в учебнике
