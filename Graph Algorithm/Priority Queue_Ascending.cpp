#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int> >q;

    q.push(4);
    q.push(10);
    q.push(-2);
    q.push(1);
    q.push(6);
    q.push(3);

    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
}

//example: 4,10,-2,1,6,3

