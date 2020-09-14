#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	string name, surname, patronym, group;//data request
	cout<<"Enter student's name: ";
	cin>>name;
	cout<<"Enter student's surname: ";
	cin>>surname;
	cout<<"Enter student's patronym: ";
	cin>>patronym;
	cout<<"Enter student's group number: ";
	cin>>group;

	string lab_name, full_group, full_name;//full strings
	lab_name="Laboratory work №1";
	full_group="Made by: student of group "+group;
	full_name=surname+" "+name+" "+patronym;

	int width_temp=fmax(lab_name.size(), full_group.size());//max width of 2 1st strings
	int width=fmax(width_temp, full_name.size());//total width
	width+=5;//because frame is a bit wider than all text in it

	cout<<setfill('*')<<setw(width)<<"*"<<endl;
	cout<<"* "<<lab_name<<setfill(' ')<<setw(width-lab_name.size())<<"*"<<endl;
	//normal string's length
	cout<<"* "<<full_group<<setfill(' ')<<setw(width-full_group.size()-2)<<"*"<<endl;
	//for some reason I need to decrease line's size by 2
	cout<<"* "<<full_name<<setfill(' ')<<setw(width-full_name.size()-2)<<'*'<<endl;
	//same is here
	cout<<setfill('*')<<setw(width)<<"*"<<endl;
	//and there is no need to decrease line's size
}
