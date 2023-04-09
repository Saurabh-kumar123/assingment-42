//9. Adds the element ‘g’ at the end of the queue
#include<bits/stdc++.h>
using namespace std;
void show(queue<char> q)
{
     while(!q.empty())
     {
          cout<<q.front()<<" ";
          q.pop();
     }
}
int main()
{
     queue<char> q;
     q.push('a');
     q.push('b');
     q.push('c');
     cout<<"first queue is : ";
     show(q);
     cout<<endl<<"after queue is : ";
     q.push('g');
     show(q);
     q.pop();
     cout<<endl<<"after pop() in queue : ";
     show(q);
     cout<<endl;
     return 0;
}
