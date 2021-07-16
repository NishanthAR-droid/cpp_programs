//C++ program to access the elements of an Array using pointers
#include<iostream>
using namespace std;

int main()
{
    int a[5],i;
    cout<<"Enter any 5 integers: \n";
    for(i=0;i<5;i++)
    	cin>>a[i];
	cout<<"The integers entered are: \n";
	for(i=0;i<5;i++)
		cout<<*(a+i)<<endl;
	return 0;
}

