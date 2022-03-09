#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    cin>>sum;
    // let number of digits of 4 be a
    // let number of digits of 7 be b
    // a*4 + b*7 = n
    // b=(n-a*4)/7

    // we want as many 7 we can so that number
    // of digits are reduced
    int countfour=0;
    int countseven=0;
   while(sum>0)
   {
       if(sum%7==0)
       {
       countseven=sum/7;
       sum=0;
       break;
       }

       sum-=4;
       countfour++;
   }
   if(sum!=0) 
   {
       cout<<-1<<endl;
       return 0;
   }
   while(countfour!=0)
   {
       cout<<4;
       countfour--;
   }
   while(countseven!=0)
   {
       cout<<7;
       countseven--;
   }
   cout<<endl;
    return 0;
}