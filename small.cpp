//find small element from the array elements
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int min(int a[],int n)
{
int mini=a[0];
for(int i=0;i<n;i++)
{
if(mini>a[i])
{
mini=a[i];
}
}
return mini;
}


int main()
{
int n,a[10];
cout<<"enter the size of the array" <<endl;
cin>>n;
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"the smallest element from the array is" <<endl;
int small=min(a,n);
cout<<"minimum element"<<small<<endl;
return 0;

}

