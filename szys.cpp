#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
main(){
  int n1,n2;
  int f;
  char sybol[4]={'+','-','*','/'};
  srand(int(time(0)));
  for(int i = 0;i < 300;){
    n1 = rand()%100;
    n2 = rand()%100;
    f  = rand()%3;
    if(n2||f!=3){
        cout<<n1<<sybol[f]<<n2<<'='<<endl;
        i++;
    }
  }
}
