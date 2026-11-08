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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        ListNode* ptr=head;
        
        int cnt=0;
        int mid;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int cnt2=0;
        mid=(cnt/2)+1;
        while(ptr!=NULL){
            cnt2++;
            if(cnt2==mid){
                break;
            }
            ptr=ptr->next;
            
        }
        return ptr;

        
    }
};