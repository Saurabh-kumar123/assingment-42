//5. Schedule a interview by using applicant's reaching time using c++ STL
#include<bits/stdc++.h>
using namespace std;
struct applicant
{
     string name;
     int time;
};
applicant getapplicant()
{
     applicant temp;
     cout<<"enter a name : ";
     cin>>temp.name;
     cout<<endl<<"enter a time : ";
     cin>>temp.time;
     return temp;
}
int main()
{
     queue<applicant> q;
     for(int i=0;i<3;i++)
          q.push(getapplicant());
          applicant temp;
          for(int i=0;i<3;i++)
          {
               temp=q.front();
               cout<<"applicant name  : "<<temp.name<<endl<<"applicant timing  : "<<temp.time<<endl;
               cout<<"----------------------"<<endl;
              q.pop();
          }
     return 0;
}
