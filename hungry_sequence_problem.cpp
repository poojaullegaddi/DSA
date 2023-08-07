/* HUNGRY  SEQUENCE PROBLEM
 * I/P:n=3 o/p:4 5 6
 * i/p:n=4 o/p:5 6 7 8
 * */
 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"enter number "<<endl;
	cin>>n;
	int i;
	for(i=n+1;i<=2*n;i++)
	{
		cout<<i<<" ";
	}
	return 0;
}
	
