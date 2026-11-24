class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::uint64_t sz=nums.size();
        unordered_set<int> u;
        for(uint64_t i=0;i<sz;++i)
        {
            if(u.count(nums[i])>0) return true;
            u.insert(nums[i]);
        }
        return false;
    }
};