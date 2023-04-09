//2. Create a railways ticket counter and allot ticket to first come first take using c++ STL
#include<iostream>
#include<queue>
#include<string>
#include<math.h>
#include<time.h>
using namespace std;
class ticket
{
public:
     string passenger;
     int tnumber;
};
ticket ticketcounter()
{
     ticket temp;
     cout<<endl<<"Enter passenger name : ";
     cin>>temp.passenger;
     srand(time(NULL));
     temp.tnumber = rand();
     return temp;
}
void showticketlist(queue<ticket> q)
{
     ticket temp;
     cout<<endl<<"ticket number   &   passenger name ";
    //cout<<endl<<"---------------------------------------";
     while(!q.empty())
     {
          temp = q.front();
          cout<<endl<<"  "<<temp.tnumber<<"          &          "<<temp.passenger;
          q.pop();
         //cout<<endl<<"-------------------------------------";
     }
}
int main()
{
     queue<ticket> q;
     int size;
     cout<<"Enter the number of passenger : ";
     cin>>size;
     for(int i = 0;i < size;i++)
     q.push(ticketcounter());
     showticketlist(q);
     return 0;
}
