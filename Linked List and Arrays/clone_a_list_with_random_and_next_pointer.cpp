/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* ptr = head;
        while(ptr!=NULL){
            Node* mid = new Node(ptr->val);
            mid->next=ptr->next;
            ptr->next=mid;
            ptr=mid->next;
        }
        ptr = head;
        while(ptr!=NULL){
            if(ptr->random ==NULL) ptr->next->random = NULL;
            else{
            ptr->next->random = ptr->random->next;
            }
            ptr=ptr->next->next;
        }

        Node* dummy = new Node(0);
        ptr = dummy;
        Node* curr = head;
        while(curr!=NULL){
            Node* future = curr->next->next;
            ptr->next = curr->next;
            curr->next=future;
            ptr=ptr->next;
            curr=curr->next;
        }
        return dummy->next;
    }
};
