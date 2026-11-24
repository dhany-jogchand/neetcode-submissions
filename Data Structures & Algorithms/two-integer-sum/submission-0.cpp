class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indexes;
size_t sz=nums.size();
int result;
unordered_map<int,int> mp;
for(int i=0;i<sz;++i)
{
result=target-nums[i];
auto iter=mp.find(result);
if(iter!=mp.end())
{
indexes.push_back((*iter).second);
indexes.push_back(i);
return indexes;
}
mp.insert({nums[i],i});
}


return indexes;

    }
};
