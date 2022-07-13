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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* res = head;
        ListNode* temp = head;
        if(head->val==0){
            head = head->next;
        }
        
        int sum = 0;
        
        while(temp!=NULL){
            if(temp->val != 0){
                sum += temp->val;
                temp = temp->next;
            }
            else{
                res->val = sum;
                res->next = temp->next;
                temp = temp-> next;
                res = temp;
                sum = 0;
            }
        }
        return head;
    }
};