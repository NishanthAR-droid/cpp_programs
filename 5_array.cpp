#include<iostream>
using namespace std;

int main()
{
    int a[10],i,n;
    int *p[10];
    cout<<"Enter the number of elements(max 10)\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
    {
    	p[i]=&a[i];
    	cin>>*p[i];
	}
	cout<<"The elements entered are\n";
	for(i=0;i<n;i++)
	{
		cout<<*p[i]<<endl;
	}
	return 0;
}

