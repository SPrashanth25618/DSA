//Brute force
class Solution 
{
    public:
        int missingNumber(vector<int>& nums) 
        {
            int n = nums.size();
            for(int i=0;i<=n;i++){
                bool flg = true;
                for(int j=0;j<n;j++){
                    if(i == nums[j])
                    {
                        flg = false;
                        break;
                    }
                }
                if(flg)
                    return i;
            }
            return -1;
        }
};
// T.C = O(N^2)
// S.C = O(1)

//Optimal
//Optimal
class Solution 
{
    public:
        int missingNumber(vector<int>& nums) 
        {
            int n = nums.size();
            int x = 0;
            for(int i=0;i<n;i++){
                x ^= i;
                x ^= nums[i];
            }
            return x^n;
        }
};
// T.C = O(N)
// S.C = O(1)