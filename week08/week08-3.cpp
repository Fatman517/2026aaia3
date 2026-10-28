//week08-3.cpp 學習計畫 MARTIX 第三題 螺旋矩陣印出來
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //
        //
        //
        vector <int> ans;
        int M = matrix.size(), N = matrix[0].size(); //長 寬
        int left = 0,right = N-1, up = 0, down = M-1;
        while (ans.size() < M * N){
        //往右
        for (int j = left; j <= right; j++) ans.push_back(matrix[up][j]);
        up++;
        //往下
        for (int i = up; i<= down; i++) ans.push_back(matrix[i][right]);
        right--;
        if (ans.size() == M*N)break;//提早收齊 結束瞜

        //往左
        for (int j = right ; j >= left; j--) ans.push_back(matrix[down][j]);
        down--;
        for (int i=down ; i >= up; i--)ans.push_back(matrix[i][left]);
        left++;
        }
        return ans;
    }
};
