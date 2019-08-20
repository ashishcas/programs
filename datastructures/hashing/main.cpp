#include <bits/stdc++.h>

using namespace std;

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.length(),i;
	   map<char,int> m1,m2;
	    for(i=0;i<n;i++) m1[s[i]]=1;
	    int len=INT_MAX,count=0,size=m1.size(),start=0;
	    //cout<<size<<endl;
	    for(i=0;i<n;i++){
	        if(m2.find(s[i])==m2.end()){
	            m2[s[i]]=1;
	            count++;
	        }
	        else m2[s[i]]++;

	        if(count==size){
                    cout<<size<<" "<<count<<endl;
	            while(m2[s[start]]>1){
	                cout<<s[start]<<" " <<start<<" "<<m2[s[start]]<<endl;
	                m2[s[start]]--;
	                start++;
	            }
	            len=min(len,i-start+1);
	        }
	    }
	    cout<<s.substr(start,len);
	    cout<<len<<"\n";
	}
	return 0;
}
