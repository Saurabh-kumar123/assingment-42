//4. Manage a queue for multiple input and store in ascending order of his first character
#include<bits/stdc++.h>
using namespace std;
int main()
{
     queue<string> q;
     string str;
     int choice=1;
     while(true)
     {
         cout<<"enter a choice 0 & 1 : ";
         cin>>choice;
         if(choice==0)
          break;
         cout<<"enter a string : ";
         cin>>str;
         q.push(str);
     }
     int size = q.size();
     string temp[size];
     for(int i = 0; i < size ; i++)
     {
          temp[i]=q.front();
          q.pop();
     }
     sort(temp,temp+size);
     for(int i=0;i<size;i++)
          q.push(temp[i]);
     while(!q.empty())
     {
          cout<<q.front()<<" ";
          q.pop();
     }
     cout<<endl;
     return 0;
}
