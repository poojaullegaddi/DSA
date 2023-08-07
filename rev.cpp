/* reverse the array */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a[20],n,i;
	cout<<"enter the size of the array" <<endl;
	cin>> n;
	cout<<"enter the array elements "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the array elements are "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"after reversing array elements are "<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}

	
