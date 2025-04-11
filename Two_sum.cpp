//Brute force
class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            int n = nums.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i]+nums[j] == target)
                        return {i,j};
                }
            }
            return {};
        }
};
// T.C = O(N^2)
// S.C = O(1)

//Optimal
class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            unordered_map<int,int> mp;
            int n = nums.size();
            int x,y;
            for(int i=0;i<n;i++)
            {
                x = target - nums[i],y = nums[i];
                if( mp.find(x) != mp.end() )
                    return {mp[x],i};
                mp.insert({y,i});
            }
            return {};
        }
};
// T.C = O(N)
// S.C = O(N)