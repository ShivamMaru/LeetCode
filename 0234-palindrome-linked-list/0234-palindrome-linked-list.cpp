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
    bool isPalindrome(ListNode* head) {
        stack<int>s1;
        ListNode* temp = head;
        while(temp!=NULL){
            s1.push(temp->val);
            temp = temp->next;
        }
        temp = head;

        while(!s1.empty()){
            if(temp->val == s1.top()){
                temp = temp->next;
                s1.pop();
            }
            else
                return false;

        }
        return true;
        
    }
};