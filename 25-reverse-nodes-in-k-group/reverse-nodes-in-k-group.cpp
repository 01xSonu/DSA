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
    ListNode* reverseList(ListNode* temp){
        ListNode* prev=NULL;
        ListNode* curr=temp;
        ListNode* str=NULL;
        while(curr!=NULL){
            str=curr->next;
            curr->next=prev;
            prev=curr;
            curr=str;
            
        }
        return prev;

    }
    ListNode* KTHnode(ListNode* temp,int k){
        int cnt=0;
        
        while(temp!=NULL){
            cnt++;
            if(cnt==k){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        
        while(temp!=NULL){
            ListNode* kthNode=KTHnode(temp,k);
            if(kthNode==NULL){
                if(prevNode!=NULL){
                    prevNode->next=temp;
                }
                break;


            }
            ListNode* nextNode=kthNode->next;
            kthNode->next=NULL;
            ListNode* newHead=reverseList(temp);

            if(temp==head){
                head=newHead;
            }
            else{
                prevNode->next=newHead;
            }

            prevNode=temp;
            temp=nextNode;
            
        }
        return head;
          

        
        
    }
};