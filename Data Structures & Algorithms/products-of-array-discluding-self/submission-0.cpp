class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) 
{
auto sz=nums.size();
vector<int> product(sz);
int left=1;
int i=0;
while(i<sz)
{
product[i]=left;
left*=nums[i];
++i;
}
int right=1;
i=sz-1;
while(i>=0)
{
product[i]*=right;
right*=nums[i];
--i;
}
return product;
}
};
