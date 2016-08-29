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
        ListNode* pa=headA;
        ListNode* pb=headB;
        int lenA=0,lenB=0;
        while(pa){
            pa=pa->next;
            lenA++;
        }
        while(pb){
            pb=pb->next;
            lenB++;
        }
        pa=headA;
        pb=headB;
        if(lenA>lenB){
            int n=lenA-lenB;
            while(n){
                pa=pa->next;
                n--;
            }
        }
        if(lenA<lenB){
            int n=lenB-lenA;
            while(n){
                pb=pb->next;
                n--;
            }
        }
        while(pa!=pb){
            pa=pa->next;
            pb=pb->next;
        }
        return pa;
    }
};
