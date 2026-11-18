//week11-4.cpp study plan link list no.2
//leetcode 206. Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        //如果把linked list逐一塞入陣列 就可以倒過來了
        vector<int> a;//C++伸縮自如的陣列 一開始就沒有任何值
        while (head != nullptr) {
            a.push_back(head->val);
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i=a.size()-1;i>=0;i--){
            now->next = new ListNode(a[i]);
            now = now->next;
        }
        return ans->next;
    }
};
