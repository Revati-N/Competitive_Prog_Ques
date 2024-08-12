/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL){
            return false;
        }
        ListNode *sl = head;
        ListNode *fa = head->next;
        while(fa != sl){
            if(fa -> next == NULL || fa ->next->next == NULL){
                return false;
            }
            sl = sl-> next;
            fa = fa->next->next;
        }
        return true;
    }
};