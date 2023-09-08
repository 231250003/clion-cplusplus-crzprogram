//
// Created by crz on 2023/9/8.
//
#include<iostream>
using namespace std;
int main()
{
    int n,heap[1001];
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>heap[i];
    }
    heap[0]=heap[n-1];
    heap[n-1]=100000;
    int x=heap[n-1];
    int i=0;
    while(i<=(n-1)/2)
    {
        int s1=i*2+1,s2=i*2+2;
        if(heap[s1]>=heap[s2]&&heap[i]>=min(heap[s1],heap[s2]))
        {
            swap(heap[i],heap[s2]);
            i=s2;
        }
        if(heap[s1]<heap[s2]&&heap[i]>=min(heap[s1],heap[s2]))
        {
            swap(heap[i],heap[s1]);
            i=s1;
        }
    }
    for(int i=0;i<=n-2;i++)
    {
        cout<<heap[i]<<" ";
    }
}
/*
7
2 10 3 12 13 6 7
 */