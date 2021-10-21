vector<int> solve(vector<int>& nums, int k) {
    int n=nums.size();
    int k1=k%n;
    for(int i =0;i<k1;i++)
    {int j=*nums.begin();
        nums.push_back(j);
        nums.erase(nums.begin());
    }
 
 //cout<<nums.begin();
    return nums;
}