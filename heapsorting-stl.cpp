//
// Created by crz on 2023/9/8.
//
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
    int a[1001];
    cin>>n;
    priority_queue<int> s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        s.push(a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<s.top();
        s.pop();
    }
}