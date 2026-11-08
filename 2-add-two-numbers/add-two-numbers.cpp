
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        ListNode* curr=l3;
        int sum;
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            sum=((l1->val+l2->val)+carry);
            carry=sum/10;
            ListNode* temp=new ListNode(sum%10);
            curr->next=temp;
            curr=temp;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            sum=((l1->val)+carry);
            carry=sum/10;
            ListNode* temp=new ListNode(sum%10);
            curr->next=temp;
            curr=temp;
            l1=l1->next;
            
            
        }
        while(l2!=NULL){
            sum=((l2->val)+carry);
            carry=sum/10;
            ListNode* temp=new ListNode(sum%10);
            curr->next=temp;
            curr=temp;
            
            l2=l2->next;
            
        }
        if(carry!=0){
            ListNode* ptr=new ListNode(carry);
            curr->next=ptr;
        }
        return (l3->next);
      
        
    }
};