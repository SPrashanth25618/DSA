//Brute force
class Solution 
{
    public:
        bool containsDuplicate(vector<int>& nums) 
        {
            int n = nums.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i] == nums[j])
                        return true;
                }
            }
            return false;
        }
};
// T.C = O(N^2)
// S.C = O(1)


//optimal
class Solution 
{
    public:
        bool containsDuplicate(vector<int>& nums) 
        {
            unordered_set<int> st;
            for(int &i:nums){
                if(st.count(i))
                    return true;
                st.insert(i);
            }
            return false;
        }
};
// T.C = O(N)
// S.C = O(N)