//week03-2.cpp 學習=計畫第六題
//把0一道右邊去 等於不是0的放左邊再補0

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; //把目標放仔哪裡nums[k]
        for (int num : nums){//c++進階for迴圈
            if (num != 0){//把不是0的,都移到左邊
                nums[k] = num;//把數字放左邊
                k++;//換下一格
        }
    }
    //把殘留的都變成0
    for (int i=k; i<nums.size();i++){
        nums[i] = 0;
        }
    }
};
