//7. Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     queue<int> q,qq;
     int v = 96;
     for(int i=0;i<5;i++)
          q.push(v++ + 1);
     for(int i=0;i<5;i++)
          qq.push(v++ *3);
    /* while(!q.empty())
     {
          cout<<q.front()<<" ";
          q.pop();
     }
     cout<<endl;
     while(!qq.empty())
     {
          cout<<qq.front()<<" ";
          qq.pop();
     }*/
     cout<<endl<<"after exchange the contents of two queue "<<endl;
     q.swap(qq);
     while(!q.empty())
     {
          cout<<q.front()<<" ";
          q.pop();
     }
     cout<<endl;
     while(!qq.empty())
     {
          cout<<qq.front()<<" ";
          qq.pop();
     }
     return 0;
}
