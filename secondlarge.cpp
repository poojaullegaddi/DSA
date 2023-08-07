#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getelements(int a[],int n)
{
    if(n==0 ||n==1)
    cout<<-1<< " "<<-1<<endl;
    sort(a,a+n);
    int small=a[1];
    int large=a[n-2];
    cout<<"the second smallest element is "<<small;
    cout<<"the second largest element is "<<large;

    }
int main()
{
    int a[]={2,4,1,5,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    getelements(a,n);
    return 0;


}