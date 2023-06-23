//create a random array, sort its elements
//request a number of array's elements
#include <iostream>
using namespace std;

void array(int size2)
{
        int a[size2+1], i, j, x;//array a; counter i; temporary variable x;

        for (i=1; i<=size2; i++)
        {
                srand(time(0)/i+time(0)*i);//creating the seed
                a[i]=rand()%100+1;//random number assigning
                cout<<a[i]<<" ";//printing a[i] (initial array)
        }
        cout<<endl;

        for (i=1;i<=size2;i++)
                for (j=i+1;j<=size2;j++)
                        if (a[i]>a[j])//if next element of the array is smaller
                        {
                                x=a[j];//then switch their positions
                                a[j]=a[i];
                                a[i]=x;
                        }

        cout<<"Your arranged array is:"<<endl;
        for (i=1;i<=size2;i++) cout<<a[i]<<" ";//printing a[i] (arranged array)
        cout<<endl;
}

int main()
{
        int size1;
        cout<<"Enter a size of array to generate and arrange: ";
        cin>>size1;
        array(size1);
        return 0;
}
