class Solution {
public:
    bool canSplit(vector<int>& nums, int k, long long maxSum) {
        long long current = 0;
        int count = 1; // at least one subarray
        for (int num : nums) {
            if (current + num > maxSum) {
                count++;
                current = num;
                if (count > k) return false;
            } else {
                current += num;
            }
        }
        return true;
    }
    
    int splitArray(vector<int>& nums, int k) {
        long long left = *max_element(nums.begin(), nums.end());
        long long right = accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = right;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (canSplit(nums, k, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return (int)ans;
    }
};
