class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);

        int product = 1;
        int zeroCount = 0;

        // calculate product of non-zero elements
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                zeroCount++;
            } else {
                product *= nums[i];
            }
        }

        // case 1: more than one zero
        if(zeroCount > 1) {
            return ans; // all zeros
        }

        // case 2: exactly one zero
        if(zeroCount == 1) {
            for(int i = 0; i < n; i++) {
                if(nums[i] == 0) {
                    ans[i] = product;
                }
            }
            return ans;
        }

        // case 3: no zero
        for(int i = 0; i < n; i++) {
            ans[i] = product / nums[i];
        }

        return ans;
    }
};
