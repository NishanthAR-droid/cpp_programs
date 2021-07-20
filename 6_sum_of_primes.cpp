// C++ program to Check Whether a Number can be Express as Sum of Two Prime Numbers.
#include<iostream>
using namespace std;
int prime(int num);

int main()
{
	int num,i,flag=0;
	cout<<"Enter a psitive number\n";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
	     if(prime(i))
	     {
		 if(prime(num-i))
                 {
		   cout<<num<<"="<<i<<"+"<<(num-i)<<endl;
		   flag=1;
		  }
	     }
	}
	
	if(!flag)
	cout<<num<<" cannot be expressed as sum of prime numbers\n";
	
	return 0;
}

int prime(int num)
{
	int i,flag=1;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
		}
	}
	return flag;
}
