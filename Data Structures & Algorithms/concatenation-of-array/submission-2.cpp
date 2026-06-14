class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int int_len = nums.size();
        nums.resize(int_len*2);
        for(int i = int_len,c=0; i < nums.size(); i++,c++){
            nums[i] = nums[c];
        }
        return nums;
    }
};