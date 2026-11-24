class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
for(auto st:strs)
{
vector<int> arr(255,0);
for(auto c:st) ++arr[(int)c];
string key;
key.reserve(512);
for(auto count:arr)
{
key+=count;
key+=",";
}
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
