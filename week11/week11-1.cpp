//week11-1.cpp studyplan
//leetcode 21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        while (list1 != nullptr || list2 != nullptr){
            if(list1 == nullptr){//左邊沒有了
                now->next = list2;//接另一邊(右邊)
                break;//離開
            }else if (list2 == nullptr){//右邊沒有了
                now->next = list1;//接另一邊(左邊)
                break;//離開
            }else{ //兩邊都還有 要比大小 把小的 放到NOW裡面
               if(list1->val < list2->val){
                now->next = new ListNode(list1->val);
                now = now->next;
                list1 = list1->next;

            }else{//否則 就是右邊小 放右邊
                now->next = new ListNode(list2->val);
                now = now->next;
                list2 = list2->next;
               }

            }
        }
        return ans->next;//return ans會多一個999阿
        //ListNode* now = list1;
        //while(now != nullptr) {//2 只要NOW還有東西
           // cout << now->val<<" ";//2把now 的內容now->val印出來
           // now = now ->next;
       // }
        //ListNode* ans = new ListNode(999);//1題目要吐出ListNode* 我們就宣告他
        //return ans;//1先隨便return
    }
};
