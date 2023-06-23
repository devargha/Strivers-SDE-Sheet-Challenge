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
    // ListNode* temp = NULL;
    // ListNode* reverse_list(ListNode* head,int k){
    //     ListNode* prev = NULL;
    //     ListNode* curr = head;
    //     while(curr!=NULL && k>0){
    //         ListNode* nxt = curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=nxt;
    //         k--;
    //     }
    //     if(curr!=NULL){
    //         temp = curr;
    //     }
    //     return prev;
    // }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* ptr=head;
        int size=0;
        while(ptr!=NULL){
            ptr=ptr->next;
            size++;
        }
        if(k>=size){
            k=k%size;
        }
        k=size-k;
        ptr = head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=head;
        ptr = head;
        int count = 1;
        while(count!=k){
            ptr=ptr->next;
            count++;
        }
        head = ptr->next;
        ptr->next=NULL;
        return head;

        // if(head==NULL || head->next==NULL){
        //     return head;
        // }
        // int size = 0;
        // ListNode* ptr = head;
        // while(ptr!=NULL)
        // {
        //     ptr = ptr->next;
        //     size++;
        // }
        // ListNode* x = reverse_list(head,size-k);
        // while(x!=NULL){
        //     cout<<x->val<<" ";
        //     x=x->next;
        // }
        // cout<<temp->next
        // ListNode* y = reverse_list(temp,k);
        // // y->next=x;

        // return temp;
    }
};
