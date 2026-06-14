class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::sort(nums.begin(), nums.end());
        // for (auto cnum: nums){
        //     std::cout << cnum << std::endl;
        // }
        int range_of_k = 0;
        int start_of_k = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (val == nums[i]){
                range_of_k++;
                if (range_of_k == 1){
                    start_of_k = i;
                }
            }
        }
        std::cout << start_of_k << std::endl;
        std::cout << range_of_k << std::endl;
        nums.erase(nums.begin()+start_of_k,nums.begin()+start_of_k+range_of_k);
        for (auto cnum: nums){
            std::cout << cnum << std::endl;
        }
        return nums.size();
    }
};