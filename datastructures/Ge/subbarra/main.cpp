#include <bits/stdc++.h>
#define lli long long int

using namespace std;
lli countSubarraysEven(lli arr[],lli n, lli k)
{
    lli start = 0, end = 0,
        count = 0, sum = arr[0],even = 0;

    while (start < n && end < n) {

        if (sum < k) {
            end++;

            if (end >= start){
                count += end - start;
                if((end-start+1)%2 == 0){
                    even++;
                }
            }

            if (end < n)
                sum += arr[end];
        }

        else {
            sum -= arr[start];
            start++;
        }
    }

    return even;
}



int main()
{
    lli n;
    cin>>n;
    lli a[n];
    lli b[n];
    for(lli i=0;i<n;i++){
        cin>>a[i];
        if(i >0){
          b[i] = a[i];
        }else{
        b[i] = b[i-1]+a[i];

    }
    }
    lli sm;
    cin>>sm;

    //lli ans = countSubarraysEven(a,n,sum);
    //cout<<ans<<" "<<endl;
    //ans += countSubarraysOdd(a,b,n,sum);

   unordered_map< lli , lli > mp;

    for(int i =0;i<n;i++){
            lli sum = a[i];
        for(int j = i+1 ; j < n ;j++){
            sum += a[j];
                mp[sum] = j-i+1;
        }

    }

    unordered_map<lli,lli>::iterator itr;

    lli ans = 0;
    for(lli i =0;i<n;i++)
    {

        if(a[i] > sm){
            ans++;
        }
    }
    cout<<ans<<" "<<endl;
    for(itr = mp.begin();itr != mp.end();itr++){

        lli val = itr->first;
        lli len = itr->second;
        if(val < sm && len%2 == 0){
            ans++;
        }
        else if(val > sm && len%2 != 0){
                ans++;
        }
        cout<<ans<<" "<<val<<" "<<len<<endl;
    }

    cout<<ans<<endl;
    return 0;
}
