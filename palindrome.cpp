#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	
	int rev=0;
	cout<<"enter the number "<<endl;
	cin>>n;
	int dup = n;
	while(n>0)
	{
		 d = n % 10;
		 rev= (rev * 10) + d;
		n= n / 10;
		
	}
if(dup == rev)
 cout<<"palindrome ";

 else
 cout<<"not a palindrome "; 
return 0;
}
