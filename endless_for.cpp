#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	unsigned i;
	for (i=10; i>=0; --i)
	{
		cout<<i<<" "<<flush;
		sleep(1);
	}
	cout<<endl;
}
