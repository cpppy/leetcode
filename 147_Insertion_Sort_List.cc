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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* p=head;
        vector<int> nums;
        while(p!=NULL){
            nums.push_back(p->val);
            p=p->next;
        }
        sort(nums.begin(),nums.end());
        p=head;
        int i=0;
        while(p!=NULL){
            p->val=nums[i];
            p=p->next;
            i++;
        }
        return head;
        
        
        
    }
};
