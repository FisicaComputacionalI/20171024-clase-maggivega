//Te dice si un numero es primo

#include<iostream>
using namespace std;
int main()
{
  int N=12;
  int Flag=0;
  int divisor=0;
  cout<<"inserte un numero "<<endl;
  cin>>N;
  for(int i=2; i<=N/2; i++)
    { 
      if(N%i==0){
	Flag=1;
        divisor=i;
        break;
      }
    }
  if(Flag==1){
    cout<<"tu numero no  es primo"<<endl;
  cout<<"porque se divide entre "<<divisor<<endl;
  }
 else
    cout<<"tu numero es primo"<<endl;
  return 0;
  }
  
