//
// Created by crz on 2023/9/8.挑战程序设计P75改版
//
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> s;
    int l,p;
    int n,a[10001],b[10001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    cin>>l>>p;
    int ans=0;
    int cur;
    a[n+1]=l;
    b[n+1]=0;
    a[0]=0;
    int flag=0;
    int flag2=0;
    cur=p;
    for(int i=1;i<=n;i++)
    {
        cur=cur-(a[i]-a[i-1]);
        cout<<cur<<"wd"<<endl;
        s.push(b[i]);
        if(cur>=0&&cur-(a[i+1]-a[i])<0)
        {
            for(int j=1;j<=s.size();j++)
            {
                cur+=s.top();
                ans++;
                s.pop();
                if(cur-(a[i+1]-a[i])>=0)
                {
                    //cout<<"123";
                    cout<<cur<<"jiayou"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<-1;
                break;
            }
        }

    }
    if(flag==1) cout<<ans;
    //if(flag==0) cout<<"ddwawfd";
}
/*
4
4 4
5 2
11 5
15 10
25 10
 */