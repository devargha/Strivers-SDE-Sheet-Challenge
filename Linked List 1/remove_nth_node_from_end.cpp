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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        if(ptr==NULL) return NULL;
        int size = 0;
        while(ptr!=NULL){
            ptr=ptr->next;
            size++;
        }
        //finding the size of the list.
        cout<<size;
        int count = (size-n)+1;
        ListNode* node = new ListNode(); //making a dummy node to satisfy the test case if they say to delete the (size-1) node from last.
        node -> next = head;
        ListNode* temp = node;
        cout<<count;
        while(count>1){
            temp=temp->next;
            count--;
        }
        
        if(temp->next!=NULL)
        {
        temp->next=temp->next->next;
        }
        return node->next;
        

    }
};
