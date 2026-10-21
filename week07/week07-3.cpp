//week07-3.cpp 學習計畫 simulation第四題class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y=0,d=0;//D是0:北1:東3:南4:溪
        for ( char c : instructions ) {
            if (c=='R') d = (d+1) % 4;
            if (c=='L') d = (d-1+4)%4;
            if (c=='G'){
                if (d==0) y++;//往北
                if (d==1) x++;//往東
                if (d==2) y--;//往南
                if (d==3) x--;//往西
            }
        }
        //指令走完 離開迴圈 要檢查
        if (x==0&&y==0) return true;
        if (d!= 0)return true;
        return false;
    }
};
