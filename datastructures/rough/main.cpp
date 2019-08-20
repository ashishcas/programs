#include<bits/stdc++.h>
using namespace std;



void print(int c){

    if (c < 0) {
        return;
    }

    printf("%d ", c);
    c--;
    print(c);

    c++;

    printf("%d ", c);

}

int main() {
   int c = 5;
   print(c);
   return 0;
}
