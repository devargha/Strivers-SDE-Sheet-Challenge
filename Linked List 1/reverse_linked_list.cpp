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
        if(head==NULL) return NULL;
        ListNode* prev = NULL; //taking a null value to point the last node to.
        ListNode* thisnode = head;
        while(thisnode!=NULL){
            ListNode* nextnode = thisnode->next;
            thisnode->next = prev;
            prev = thisnode;
            thisnode = nextnode;
        }

        return prev; //returning this as head.
    }
};
