class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp,k=0;
        // Fast car, slow car
        // k is number of swaps with elements not equal to VAL
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};