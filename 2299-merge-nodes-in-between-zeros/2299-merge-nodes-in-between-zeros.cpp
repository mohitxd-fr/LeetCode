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
        vector<int> v;

        ListNode* temp = head;
        temp = temp-> next;
        int data = 0;
        
        while(temp != NULL)
        {
            if(temp-> val != 0 && temp != head)
            {
                data = data + temp-> val;
            }
            else
            {
                v.push_back(data);
                data = 0;
            }
            temp = temp-> next;
        };

        ListNode* newHead = new ListNode(0);
        ListNode* newTemp = newHead;

        for(int num : v)
        {
            newTemp-> next = new ListNode(num);
            newTemp = newTemp-> next;
        }
        return newHead-> next;
    }
};