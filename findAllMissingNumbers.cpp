class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            bool flag = true;
            for (int j : nums)
                if (j == i)
                {
                    flag = false;
                    break;
                }
            if (flag)
                ans.push_back(i);
        }
        return ans;
    }
};
