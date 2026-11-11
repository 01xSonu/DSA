/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* temp1=headB;
        int len1=0;
        int len2=0;
        while(temp!=NULL){
            len1++;
            temp=temp->next;
        }
        while(temp1!=NULL){
            len2++;
            temp1=temp1->next;
        }
        int diff=abs(len1-len2)+1;
        int cnt=0;
        ListNode* ptr1=headA;
        ListNode* ptr2=headB;
        if(len1>len2){
            while(ptr1!=NULL){
                cnt++;
                if(cnt==diff){
                    break;
                }
                else{
                    ptr1=ptr1->next;
                }


            }
        }
        else{
                while(ptr2!=NULL){
                cnt++;
                if(cnt==diff){
                    break;

                }
                else{
                    ptr2=ptr2->next;
                }

            }

        }
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr1;


        
    }
};