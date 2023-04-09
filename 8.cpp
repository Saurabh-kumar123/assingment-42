//8. Insert a new element into the queue container, the new element is added to the end of the queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
     queue<int> mysirg;
     mysirg.push(10);
     mysirg.push(30);
     mysirg.push(50);
     while(!mysirg.empty())
     {
          cout<<mysirg.front()<<" ";
          mysirg.pop();
     }
     return 0;
}
