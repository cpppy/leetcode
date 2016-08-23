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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL&&n==1)  return NULL;
        int len=1;
        ListNode* p=head; 
        while(p->next!=NULL){
            p=p->next;
            len++;
        }
        p=head;
        int prevpos=0;
        prevpos=len-n-1;
        while(prevpos>0){
            p=p->next;
            prevpos--;
        }
        if(len==n){   //此种情况表示删除的节点为头结点
            p=head;
            head=head->next;
            p->next==NULL;
            //free(p);
            return head;
        }
        else{
            p->next=p->next->next;
            return head;
        }
    }
};
