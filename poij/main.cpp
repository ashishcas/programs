#include <iostream>
using namespace std;

void NC (int a[8][8], int&r, int &c);
void NR (int a[8][8], int&r, int &c);
void backtrack (int a[8][8], int&r, int &c);
void print(int a[8][8]);


void NC(int a [8][8], int&r, int& c){
 c++;
 if(c==8){ cout<<a;}
 r=-1;
 NR(a,r, c);
                             }

void NR(int a[8][8], int &r, int &c){
  r++;
  if(r==8){ backtrack (a,&r ,&c);}
  for(int i=0; i<c; i++){
    if(( a[i][c]==1) || (i+c==r+c) ||( i-c==r-c)){ NR(int a,&r,&c);}
    a[r][c]= 1;
    NC(a,&r,&c);
                            }
void backtrack(int a[8][8], int &r, int&c){
  c--;
 while(!( a[r][c]==1)) r++;
  a[r][c]=0;
  NR(a,&r,&c);                            }

void print(int a[8][8]){
  for (int i=0; i<8; i++){
    for (int j=0; j<8; j++){
       cout<< a[i][j];
                           }
     cout<< endl;
                         }
                       }

int main(){
  int queens [8][8]={0};
  int r=0;
  int c=0;
  int count=0;
  queens[0][0]=1;

NC(queens,&r,& c);
 return 0;
           }
