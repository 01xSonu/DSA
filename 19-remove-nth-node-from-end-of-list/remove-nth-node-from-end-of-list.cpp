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
        int length=0;
        ListNode* temp=head;
        ListNode* ptr=head; 
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        if(length==n){
            ListNode* curr=head;
            head=head->next;
            delete curr;
            return head;
        }
        int cnt=0;
        while(ptr!=NULL){
            cnt++;
            if(cnt==(length-n+1)){
                break;
            }
            ptr=ptr->next;
        }
        ListNode* prev=head;
        while(prev->next!=ptr){
            prev=prev->next;
        }
        prev->next=ptr->next;
        delete ptr;
        return head;

        
    }
};