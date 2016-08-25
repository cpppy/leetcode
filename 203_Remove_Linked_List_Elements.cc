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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)  return head;
        if(head->next==NULL){
            if(head->val==val)  return NULL;
            else    return head;
        }
        ListNode* p=head;
        ListNode* prev=p;
        
        prev=head;
        p=prev->next;
        while(p!=NULL){
            if(p->val==val){
                prev->next=p->next;
                p=prev->next;
                
            }
            else{
                p=p->next;
                prev=prev->next;
            }
        }
        p=head;
        if(head->val==val){
            head=head->next;
            if(p->next!=NULL)   p->next=p->next->next;
        }
        return head;
    }
};
