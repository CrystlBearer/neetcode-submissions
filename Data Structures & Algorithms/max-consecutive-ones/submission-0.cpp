class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count_ones = 0;
        int arr_size = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0 || i == arr_size) {
                if (nums[i] == 1) count_ones++;
                if (max <= count_ones){
                    max = count_ones;
                }
                count_ones = 0;
            } else {
                count_ones++;
            }
        }
        return max;
    }
};