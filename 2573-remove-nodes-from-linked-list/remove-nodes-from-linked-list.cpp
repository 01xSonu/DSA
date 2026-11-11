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
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL) return NULL;
        //reverse 
        ListNode* temp=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode* ptr=prev->next;
        ListNode* conn=prev;
        int maxi=prev->val;
        while(ptr!=NULL){
            if(ptr->val<maxi){
                
                ptr=ptr->next;
                conn->next=ptr;
                


            }
            else{
                 maxi=ptr->val;
                 conn=ptr;
                 ptr=ptr->next;
            }
           

        }
        ListNode* temp1=NULL;
        ListNode* curr1=prev;
        ListNode* pre=NULL;
        while(curr1!=NULL){
            temp1=curr1->next;
            curr1->next=pre;
            pre=curr1;
            curr1=temp1;

        }
        return pre;


     
    }
};