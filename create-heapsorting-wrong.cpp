//
// Created by crz on 2023/9/8.
//
//
// Created by crz on 2023/9/8.
//
#include<iostream>
using namespace std;
int n,a[1001],b[1001];
void insert(int x,int step)
{
    int i=step;
    a[step]=x;
    while(i>0)
    {
        int f=(i-1)/2;
        //if(step==3) cout<<f<<endl;
        if(a[i]>a[f])
        {
            break;
        }
        else
        {
            swap(a[i],a[f]);
            i=f;
        }
    }
    return;
}
void pop(int step)
{
    cout<<a[0]<<" ";
    a[0]=a[step];
    a[step]=100000;
    int i=0;
    while(i<=(step-2)/2)
    {
        int s1=i*2+1,s2=i*2+2;
        if(a[s1]>=a[s2]&&a[i]>=min(a[s1],a[s2]))
        {
            swap(a[i],a[s2]);
            i=s2;
        }
        if(a[s1]<a[s2]&&a[i]>=min(a[s1],a[s2]))
        {
            swap(a[i],a[s1]);
            i=s1;
        }
        if(a[i]<=min(a[s1],a[s2]))
        {
            //cout<<a[s1]<<" "<<a[s2]<<endl;
            break;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    int x=0;
    for(int i=1;i<=n-1;i++)
    {
        insert(a[i],i);
    }
    int t=n-1;
    while(t>=1)
    {
        pop(t);
        t--;
    }
    //cout<<t<<"jqdk";
    cout<<a[0];
}
/*
7
2 12 4 9 8 6 3
 */
/*
15
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
*/
/*
/*
8
2 3 4 5 6 7 8 9
*/