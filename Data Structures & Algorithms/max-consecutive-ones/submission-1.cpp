class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count_ones = 0;
        for (int num: nums){
            if(num == 1){
                count_ones++;
            } else {
                count_ones = 0;
            }
            max = std::max(max, count_ones); // Compares consecutive numbers each round
        }
        return max;
    }
};