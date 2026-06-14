class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // 2 4 5 3 1 2
        // 2 | 4 5 3 1 2
        // 5 4 | 5 3 1 2
        // 5 5 5 | 3 1 2
        // 5 5 3 3 | 1 2
        // 5 5 3 2 | 1
        // 5 5 3 2 1 -1

        int r_max_index = 1;
        int arr_last_index = arr.size()-1;
        for(int c = 0 ; c < arr_last_index; c++){
            for(int i = c+1; i < arr.size(); i++){
                if(r_max_index <= c) r_max_index = c+1;
                if (arr[r_max_index] < arr[i]){
                    r_max_index = i;
                }
            }
            arr[c] = arr[r_max_index];
        }
        arr[arr_last_index] = -1;
        
        return arr;
    }
};