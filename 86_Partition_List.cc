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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* p=head;
        ListNode* head1;
        ListNode* head2;
        ListNode* p1=head1;
        ListNode* p2=head2;
        while(p!=NULL){
            if(p->val<x){
                p1->next=p;
                p1=p;
            }
            else{
                p2->next=p;
                p2=p;
            }
            p=p->next;
        }
        p2->next=NULL;
        p1->next=head2->next;
        return head1->next;
    }
};
