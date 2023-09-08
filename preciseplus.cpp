//
// Created by crz on 2023/9/7.
//
#include<iostream>
#include<cstring>
using namespace std;
int max1(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
    int sum=0;
    char a[202],b[202],c[202],d[202],e[202];
    cin.getline(b, 202);
    cin.getline(a, 202);
    for(int i=0; i<max1(strlen(a),strlen(b));i++)
    {
        c[i]='0';
        d[i]='0';
        e[i]='0';
    }
    for(int i=0;i<strlen(a);i++)
        c[i]=a[strlen(a)-1-i];
    for(int i=0;i<strlen(b);i++)
    {
        d[i]=b[strlen(b)-1-i];
    }
    for(int i=0; i<max1(strlen(a),strlen(b));i++)
    {
        if(char(c[i]-48+d[i]+e[i]-48)<='9')
        {
            //cout<<c[i]-48+d[i]<<endl;
            //cout<<e[i]-48<<endl;
            e[i]=char(e[i]+c[i]+d[i]-48-48);  sum++;
            //cout<<e[i]<<endl;
        }
        else
        {
            e[i]=char(e[i]+c[i]-48+d[i]-10-48);
            e[i+1]='1';
            sum++;
        }
    }
    //cout<<strlen(e)<<endl;
    if('0'<=e[sum]&&e[sum]<='9')
    {
        for(int i=sum;i>=0;i--)
        {
            cout<<char(e[i]);
        }
    }
    else
    {
        for(int i=sum-1;i>=0;i--)
        {
            cout<<char(e[i]);
        }
    }
    //cout<<sum;
    return 0;
}