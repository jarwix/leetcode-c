/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head)
{
    struct ListNode* temp = head;
    int result;
    
    result = 0;
    while (temp)
    {
        result = result << 1;
        result += temp->val;
        temp = temp->next;
    }
    return result;
}
