#include <iostream>


#define ll long long

using namespace std;


void swap(ll *a,ll *b)
{

    ll temp = *a;
    *a = *b;
    *b = temp;
}


ll partition(ll a[],ll low,ll high)
{

    ll key = a[high];
    ll i = low,j;

    for( j = low;j<high;j++)
    {

        if(a[j] <= key)
        {

            swap(&a[j],&a[i]);
            i++;
        }
    }

    swap(&a[i],&a[j]);

    return i;

}


void quicksort(ll a[],ll low,ll high)
{

    if(low <high)
    {

       ll idxp = partition(a,low,high);

       quicksort(a,low,idxp-1);
       quicksort(a,idxp+1,high);
    }



}

int main()
{
    ll n;
    cin>>n;
    ll a[n];

   for(ll i=0;i<n;i++)
   {

       cin>>a[i];
    }

    ll idx;
   cin>>idx;
   quicksort(a,0,n-1);

    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
