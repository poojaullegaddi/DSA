/* program to count numbers on fingers(count the given numbers and find the correct finger on whichthe number ends)*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int finger(int n)
{
	int r;
	r=n%8;
	if(r == 0)
	return 2;
	if(r<5)
	return r;
	else 
	return 10-r;
}
int main()
{
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	cout<<finger(n)<<endl;
	return 0;
}
