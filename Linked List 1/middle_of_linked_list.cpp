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
    ListNode* middleNode(ListNode* head) {
        ListNode* rabbit = head;
        ListNode* tort = head;
        //if rabbit pointer is on the last node or rabbit pointer is on the null node, both of them should satisfy or else the loop will not work.
        while(rabbit!=NULL && rabbit->next!=NULL){
            rabbit = rabbit->next->next;
            tort = tort->next;
        }
        return tort;
    }
};
