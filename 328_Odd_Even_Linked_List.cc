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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)  return NULL;
        int len=0;
        ListNode* p=head;
        while(p!=NULL){
            p=p->next;
            len++;
        }
        if(len<3)   return head;
        ListNode* q=head;
        ListNode* ptail;
        for(int i=0;i<len-2;++i){
            q=q->next;
        }
        if(len%2!=0){
            q=q->next;
        }
        ListNode* lastodd=q;
        ListNode* tmp;
        ptail=q->next;
        p=head;
        
        while(p!=lastodd){
           tmp=p->next;
           p->next=p->next->next;
           p=p->next;
           q->next=tmp;
           q=tmp;
           
        }
        tmp->next=ptail;
        return head;
        
    }
};
