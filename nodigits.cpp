/* counting the number of digits*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	int ct=0;
	cout<<"enter the number "<<endl;
	cin>>n;
	while(n>0)
	{
		 d = n%10;
		ct++;
		n=n/10;
	}
	cout<<"no of digits "<<ct;
	return 0;
}
		
