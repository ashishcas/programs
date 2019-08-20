#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;

void merge(ll a[],ll b[], ll m,ll n){
    ll i,j,gap = ceil((m+n)/2);
    while(gap > 0){
        for( i = 0;i+gap<m;i++){
            if(a[i] > a[i+gap]){
            swap(a[i],a[i+gap]);
            }
        }

        if(gap > n){
            j = n-gap;
        }
        else{
            j = 0;
        }

        for(i=0;i<m and j <n;i++,j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
        if(j < n){
            for(j =0;j+gap < n;j++){
                if(a[j] > a[j+gap]){
                    swap(a[j],a[j+gap]);
                }
            }
        }

        if(gap <= 1){
            gap = 0;
        }
        else
        {
            gap = ceil(gap/2);
        }

    }
}

int main()
 {
	ll t;
	cin>>t;
	while(t--){
	    ll m,n;
	    cin>>m>>n;
	    ll a[m],b[n];
	    for(ll i =0;i<m;i++){
	        cin>>a[i];
	    }

	    for(ll i =0;i<n;i++){
	        cin>>b[i];
	    }

	    merge(a,b,m,n);

	      for(ll i =n-1;i>= 0;i--){
	        cout<<b[i]<<' ';
	    }

	      for(ll i =m-1;i>= 0;i--){
	        cout<<a[i]<<' ';
	    }


	    cout<<endl;
	}
	return 0;
}
