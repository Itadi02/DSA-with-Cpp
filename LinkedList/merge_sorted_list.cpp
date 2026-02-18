// 21. Merge Two Sorted Lists

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode *h1 = list1;
        ListNode *h2 = list2;

        ListNode *dummy = new ListNode(-1);
        ListNode *res = dummy;

        while (h1 != NULL && h2 != NULL)
        {
            if (h1->val > h2->val)
            {
                res->next = h2;
                h2 = h2->next;
            }
            else
            {
                res->next = h1;
                h1 = h1->next;
            }
            res = res->next;
        }

        // Remaining elements attach
        while (h1 != NULL)
        {
            res->next = h1;
            h1 = h1->next;
            res = res->next;
        }

        while (h2 != NULL)
        {
            res->next = h2;
            h2 = h2->next;
            res = res->next;
        }

        return dummy->next; // original head
    }
};
