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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start = new ListNode();
        ListNode* prev = start;
        int carry = 0;
        while(l1!=NULL && l2!=NULL){
            ListNode* node = new ListNode();
            int sum = l1->val+l2->val+carry;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
                node->val=sum;
            }
            else
            {carry = sum/10;
                node->val=sum;
            }
            prev->next=node;
            prev = node;
            l1=l1->next;
            l2=l2->next;
        }

        while(l1!=NULL){
            ListNode* node = new ListNode();
            int sum = l1->val+carry;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
                node->val=sum;
            }
            else
            {carry = sum/10;
                node->val=sum;
            }
            prev->next=node;
            prev = node;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* node = new ListNode();
            int sum = l2->val+carry;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
                node->val=sum;
            }
            else
            {
                carry = sum/10;
                node->val=sum;
            }
            prev->next=node;
            prev = node;
            l2=l2->next;
        }

        if(carry>0)
        {
            prev->next = new ListNode(carry);
        }
        return start->next;
    }
};
