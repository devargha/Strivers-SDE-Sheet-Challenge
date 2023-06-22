/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
// Node* calcmid(Node* root){
//     Node* tort = root;
//     Node* rabbit = root;
//     while(rabbit!=NULL && rabbit->bottom!=NULL){
//         rabbit=rabbit->bottom->bottom;
//         tort = tort->bottom;
//     }
//     return tort;
// }
Node* merge(Node* i, Node* j){
    Node* naya = new Node(0);
    if(i==NULL) return j;
    if(j==NULL) return i;
    Node* nayaptr = naya;
    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            nayaptr->bottom = i;
            i=i->bottom;
            nayaptr=nayaptr->bottom;
        }
        else
        {
            nayaptr->bottom = j;
            j=j->bottom;
            nayaptr=nayaptr->bottom;
        }
    }
    
    while(i!=NULL){
        nayaptr->bottom =i;
        i=i->bottom;
        nayaptr=nayaptr->bottom;
    }
    
    while(j!=NULL){
        nayaptr->bottom = j;
            j=j->bottom;
            nayaptr=nayaptr->bottom;
    }
    
    return naya->bottom;
}

// Node* sort_list(Node* head){
//     if(head==NULL || head->next==NULL) return head;
//     Node* mid = calcmid(head);
//     Node* right = mid->next;
//     mid->next=NULL;
//     Node* left = head;
//     left = sort_list(left);
//     right = sort_list(right);
//     Node* ans = merge(left,right);
//     return ans;
// }
    
Node *flatten(Node *root)
{
//     if(root==NULL) return root;
//   Node* fut = root->next;
//   Node* pres = root;
//   while(fut!=NULL){
//       while(pres->bottom!=NULL){
//           pres = pres->bottom;
//       }
//       pres->bottom = fut;
//       pres = fut;
//       fut=fut->next;
//   }
   
//   Node* ans = sort_list(root);
//   return ans;
   
   if(root==NULL || root->next==NULL){
       return root;
   }
   
   root->next = flatten(root->next);
   
   root = merge(root,root->next);
   
   return root;
}
