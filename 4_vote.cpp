// c++ program to check if a person is eligble to vote or not 
#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"enter the age of the user\n";
   cin>>age;

   if(age>=18)
   {
     cout<<"you are eligile to vote\n";
   }

   else
   {
       cout<<"you are not eligble to vote\n";
   }
   return(0);
}