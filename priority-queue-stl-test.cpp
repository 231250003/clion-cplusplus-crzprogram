//
// Created by crz on 2023/9/8.
//
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> s;
    s.push(1);
    s.push(20);
    s.push(3);
    s.push(10);
    s.push(17);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}