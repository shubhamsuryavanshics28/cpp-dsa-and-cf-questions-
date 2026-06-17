#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<string> ans;
    vector<vector<string>> ans1;
    unordered_map<string,int> m;

    for(int i = 0; i < strs.size(); ++i){
        string str = strs[i];
        sort(str.begin(), str.end());
        m[str]++;
    }

    int lo = 0;
    int hi = 0;

    while(lo < strs.size()){

        if(strs[lo] == ""){
            lo++;
            hi = lo;
            continue;
        }

        string a = strs[lo];
        sort(a.begin(), a.end());

        if(hi >= strs.size()){
            if(!ans.empty()){
                ans1.push_back(ans);
                ans.clear();
            }
            lo++;
            hi = lo;
            continue;
        }

        if(strs[hi] == ""){
            hi++;
            continue;
        }

        string s = strs[hi];
        sort(s.begin(), s.end());

        if(m.find(s) != m.end() && s == a){
            ans.push_back(strs[hi]);
            strs[hi] = "";
        }

        hi++;
    }

    for(int i = 0; i < ans1.size(); ++i){
        for(int j = 0; j < ans1[i].size(); ++j){
            cout << ans1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}