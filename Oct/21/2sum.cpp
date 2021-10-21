class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> a;
        vector<int> s;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (a.count(target - nums[i]))
            {
                s.push_back(a.at(target - nums[i]));
                s.push_back(i);
                break;
            }
            else
            {
                a[nums[i]] = i;
            }
        }
        return s;
    }
};