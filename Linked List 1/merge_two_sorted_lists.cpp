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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;

        ListNode* i = list1;
        ListNode* j = list2;

        ListNode* newnode = new ListNode();
        ListNode* nptr= newnode;
        while(i!=NULL && j!=NULL)
        {
            if(i->val<=j->val){
                nptr->next = i;
                i=i->next;
                nptr=nptr->next;
            }
            else
            {
                nptr->next = j;
                j=j->next;
                nptr=nptr->next;
            }
        }

        while(i!=NULL){
            nptr->next = i;
            i=i->next;
            nptr=nptr->next;
        }
        while(j!=NULL){
            nptr->next = j;
            j=j->next;
            nptr=nptr->next;
        }

        return newnode->next;
    }
};
