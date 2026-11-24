class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
for(auto st:strs)
{
string key=st;
sort(key.begin(),key.end());
m[key].push_back(st);
}
vector<vector<string>> grps;
for(auto pr:m)
{
grps.push_back(pr.second);
}
return grps;
    }
};
