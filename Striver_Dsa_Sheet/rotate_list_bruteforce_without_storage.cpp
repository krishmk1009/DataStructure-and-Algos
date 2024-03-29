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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;


        for(int i = 0;i<k ; i++){
            ListNode*temp = head;
            while(temp->next->next !=nullptr) temp = temp->next;

            ListNode* end = temp->next;
            temp->next = nullptr;
            end->next = head;
            head = end;




        }
        return head;
    }
};
