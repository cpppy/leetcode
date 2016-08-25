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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode* q = head;
        ListNode* p = head;
        // 寻找中点
        while(q->next != NULL && q->next->next != NULL){
            q = q->next->next;
            p = p->next;
        }
        // 记录第二段链表的第一个节点
        ListNode* secondHead = p->next;
        ListNode* p1 = secondHead;
        ListNode* p2 = p1->next;
        // 将第一段链表的尾巴置空
        p->next = NULL;
        while(p1 != NULL && p2 != NULL){
            ListNode* tmp = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = tmp;
        }
        // 将第二段链表的尾巴置空
        secondHead->next = NULL;
        // 依次判断
        while(p1 != NULL){
            if(head->val != p1->val) return false;
            head = head->next;
            p1 = p1->next;
        }
        return true;
    }
};
