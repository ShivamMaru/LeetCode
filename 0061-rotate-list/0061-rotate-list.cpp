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
    ListNode* findNode(ListNode* H , int val){
        int cnt = 1;
        while(H != NULL){
            if(cnt == val) return H;
            cnt++;
            H = H->next;
        }
        return H;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0)
            return head;

        int len = 1;
        ListNode* tail = head;
        while(tail->next != NULL){
            tail= tail->next;
             len++;
        }
        if(k%len == 0)
            return head;
        k = k%len;
        tail->next = head;
        ListNode* nextNode = findNode(head , len-k);
        head = nextNode->next;
        nextNode->next = NULL;
        return head;

    }
};