/*6. In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out) elements arrangement i.e.
 the elements which insert first will be removed first.
In the queue, elements are inserted at one end known as "back" and are deleted from another
 end known as "front".empty() and size() function of the queue with the Example.*/
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
      queue<int> q;  //empty queue
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      cout<<"first element of the queue  :  "<<q.front();
      cout<<endl<<"last element of the queue : "<<q.back();
      cout<<endl<<"after removing of the two element ";
      q.pop();
      q.pop();
      cout<<endl<<"first element of the queue  :  "<<q.front();
      cout<<endl<<"last element of the queue : "<<q.back();
      return 0;
 }
