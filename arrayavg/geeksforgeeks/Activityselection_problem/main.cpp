
#include <bits/stdc++.h>

using namespace std;

struct active
{
    int start,finish;

};

bool activitycompare(active s1,active s2)
{

    return(s1.finish<s2.finish);
}
void print(active a[],int n)
{
   sort(a,a+n,activitycompare);
   int i=0;
   cout<<a[i].start<<" "<<a[i].finish<<endl;

   for(int j=1;j<=n;j++)
   {

       if(a[j].start >= a[i].finish)
       {
           cout<<a[j].start<<" "<<a[j].finish<<endl;
           i =j;
       }

   }

}

int main()
{
     active a[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},{5, 7}, {8, 9}};
        int n = sizeof(a)/sizeof(a[0]);
        print(a,n);

    return 0;
}
