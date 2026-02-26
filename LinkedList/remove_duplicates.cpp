// 83. Remove Duplicates from Sorted List

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *curr = head;
        ListNode *prev = head->next;
        while (prev != NULL)
        {
            if ((curr->val) == (prev->val))
            {
                prev = prev->next;
            }
            else
            {
                curr->next = prev;
                curr = prev;
                prev = prev->next;
            }
        }
        curr->next = NULL;

        return head;
    }
};