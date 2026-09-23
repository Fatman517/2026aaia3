//week03-1.cpp 學習計畫第八題
//給你c++的陣列nums,請你吧所有數成起來 證的1 婦的-1 剩下是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
    int N = nums.size();//陣列的 .size()大小
    int neg = 0;
    for (int num : nums){
        if(num==0) return 0;
        if(num<0) neg++;
    }
    if (neg % 2 == 0) return 1;
    return -1;//負的 下面是壞掉的版本
    //int ans =1;
    //for (int i=0; i<????;i++){ 迴圈錢是1 方扁繼續承
        //ans = ans * nums[i]; 迴圈num{1}逐一成起來
//
       // }
       // if (ans>0)return 1 ;
       // if (ans<0)return -1;
       // return 0;
   // }
    }
};
