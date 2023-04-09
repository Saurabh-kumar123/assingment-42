//10.Deletes the first element of the queue.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     queue<string> q;
     q.push("saurabh");
     q.push("kumar");
     q.push("gaurav");
     q.push("sivam");
     q.pop();
     while(!q.empty())
     {
          cout<<q.front()<<endl;
          q.pop();
     }

     return 0;
}
