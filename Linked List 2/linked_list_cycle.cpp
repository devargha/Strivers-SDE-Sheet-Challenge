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
        ListNode* rabbit = head;
        ListNode* tort = head;
        while(rabbit!=NULL && rabbit->next!=NULL){
            rabbit = rabbit->next->next;
            tort = tort->next;
            if(rabbit==tort){
                return true;
            }
        }
        return false;
    }
};
