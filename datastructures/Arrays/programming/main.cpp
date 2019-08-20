#include <bits/stdc++.h>

using namespace std;

bool  sortby(const pair<string,int> &a,const pair<string,int> &b)
{
    if (a.second > b.second)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    vector< pair< string ,int > > v;
    set<int> s;
    for(int a0 = 0; a0 < n; a0++){
        string name;
        int d;
        int j;
        cin >> name >> d >> j;
        if(s.find(j-d) == s.end())
        {
            s.insert(j-d);
            v.push_back(make_pair(name,j-d));
        }

    }

   sort(v.begin(),v.end(),sortby);


    cout<<v[0].first<<" "<<v[0].second<<endl;

    return 0;
}
