/*find maxelement and its index from the array*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20];
	int n;
	int maxe=a[0];
	int maxi=0;
	cout<<"enter array size "<<endl;
	cin>>n;
	cout<<"enter array elements "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]>maxe)
		maxe=a[i];
		maxi=i;
	}
	cout<<"maximum element is: "<<maxe<<endl;
	cout<<"maximum index is: "<<maxi<<endl;
	return 0;
}
		
