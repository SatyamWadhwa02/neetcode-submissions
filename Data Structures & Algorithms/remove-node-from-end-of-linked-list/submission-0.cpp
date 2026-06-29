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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front=head;
        ListNode* back=head;
        while(n>0){
            front=front->next;
            n--;
        }
        if (front == nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while(front!=nullptr&&front->next!=nullptr){
            front=front->next;
            back=back->next;
        }
        ListNode* temp=back->next;
        back->next=temp->next;
        delete temp;
        return head;
    }
};
