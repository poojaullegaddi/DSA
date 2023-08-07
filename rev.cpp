/* reverse of a number*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	int ct=0;
	int rev=0;
	cout<<"enter the number "<<endl;
	cin>>n;
	while(n>0)
	{
		 d = n%10;
		ct++;
		n=n/10;
		rev= (rev*10)+d;
	}
	cout<<"no of digits "<<ct<<endl;
	cout<<"reverse of a number "<<rev;
	return 0;
}
