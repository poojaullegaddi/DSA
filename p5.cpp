#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
	int i,j;
	//space
	for( i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		
	
	//star
	
		for(j=0;j<2*i+1;j++)
		{
			cout<<"*";
		}
		//space
	
		for(j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	print(n);
	return 0;
}
