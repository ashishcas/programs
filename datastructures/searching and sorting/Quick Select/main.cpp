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


ll quickselect(ll a[],ll low,ll high,ll idx)
{


    if(idx >0 && idx <= high-low+1)
    {
        ll idxp = partition(a,low,high);

     cout<<low<<" "<<high<<" "<<idx<<" "<<idxp<<endl;
        if(idxp-low == idx-1)
        {

            return a[idxp];

        }

        if(idxp-low > idx-1)
        {

            return quickselect(a,low,idxp-1,idx);
        }

        return quickselect(a,idxp+1,high,idx-idxp+low-1);
    }

    return 0;


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
cout<<quickselect(a,0,n-1,idx);

    return 0;
}
