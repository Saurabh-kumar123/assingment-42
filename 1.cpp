//1. Print all elements of a queue in C++ STL
#include<iostream>
#include<queue>
using namespace std;
void show(queue<int> q)
{
     while(!q.empty())
     {
          cout<<q.front()<<" ";
          q.pop();
     }
}
int main()
{
     queue<int> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(10);
     q.push(20);
     q.push(30);
     cout<<endl<<"The queue is : ";
     show(q);
     cout<<endl<<"size of queue is : "<<q.size();
     cout<<endl<<"queue front : "<<q.front();
     cout<<endl<<"queue back  : "<<q.back();
     cout<<endl<<"queue pop :";
     q.pop();
     show(q);
     return 0;
}
