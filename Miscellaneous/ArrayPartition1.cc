class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        std::sort(nums.begin(), nums.end());
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it += 2)
        {
            sum += *it;
        }
        return sum;
    }
};
