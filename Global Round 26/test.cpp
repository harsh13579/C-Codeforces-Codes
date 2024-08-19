#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
 
        if(s.size() == 1)cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            string ans = "";
            for(int i = 0; i < n; i++) ans += 'R';
            ans[n-2] = 'B';
            cout << ans << endl;
        }
    }
}