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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
        if(head->next==NULL) return NULL;
        set<ListNode*> hashset;
        ListNode* ptr = head;
        int count = 0;
        while(ptr!=NULL){
            if(hashset.find(ptr)!=hashset.end()){
                break;
            }
            else{
                hashset.insert(ptr);
                ptr=ptr->next;
                count++;
            }
        }
        ptr = head;
        while(count-1>0){
            ptr=ptr->next;
            count--;
        }
        return ptr->next;
    }
};
