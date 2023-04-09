//3. Check if a queue is empty or not using queue::size() function
#include<iostream>
#include<queue>
using namespace std;
int main()
{
     queue<int> q;
     q.push(10);
     q.push(20);
     if(q.size()==0)
          cout<<"queue is empty "<<endl;
     else
          cout<<"queue is not empty"<<endl;
          q.pop();
          q.pop();
          if(q.size()==0)
               cout<<"queue is empty"<<endl;
          else
               cout<<"queue is not empty"<<endl;
     return 0;
}
