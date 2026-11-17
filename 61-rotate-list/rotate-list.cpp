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
    ListNode* rotateRight(ListNode* head, int k) { 
        if(head==NULL ){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        int len=0;
        ListNode* ptr=head;
        while(ptr!=NULL){
            len++;
            ptr=ptr->next;
        }
        k=k%len;
        int cnt=0;
        while(cnt!=k){
            ListNode* last=head;
            ListNode* seclast=head;

            while(last->next!=NULL){
                seclast=last;
                last=last->next;
            }
            seclast->next=NULL;
            last->next=head;
            head=last;

            cnt++;

        }
        return head;
        
    }
};