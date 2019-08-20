#include <bits/stdc++.h>

using namespace std;

int winningLotteryTicket(vector <string> tickets) {

    int pairs = 0;
    for(int i=0;i<tickets.size()-1;i++)
    {
        string s="";
        for( int j = i+1;j<tickets.size();j++)
        {
            s.append(tickets[i]);
            s.append(tickets[j]);
            //cout<<s<<endl;

            bool check  = true;

            vector<int> f(10,0);

            for(int k =0;k<s.length();k++)
            {

                f[s[k] - '0']++;

            }
            int l;
            for( l=0;l<10;l++)
            {
               //cout<<l<< " "<<f[l]<<endl;

                if(f[l] == 0)
                {
                    check = false;
                    break;
                }
            }
            if(check && l == 10)
            {
                pairs++;
            }

            s ="";
        }
    }



    return pairs;

}

int main() {
    int n;
    cin >> n;
    vector<string > tickets(n);
    for(int tickets_i = 0; tickets_i < n; tickets_i++){
       cin >> tickets[tickets_i];
    }
    int result = winningLotteryTicket(tickets);
    cout << result << endl;
    return 0;
}
