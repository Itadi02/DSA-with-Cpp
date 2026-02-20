// 2. Add Two Numbers

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *res = new ListNode(-1);
        ListNode *dummy = res;
        int c = 0;
        while (l1 != NULL && l2 != NULL)
        {
            int sum = c + l1->val + l2->val;
            if (sum > 9)
            {
                c = sum / 10;
                sum = sum % 10;
            }
            else
                c = 0;
            if (res == NULL)
                res = new ListNode(sum);
            res->next = new ListNode(sum);
            res = res->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL)
        {
            int sum = c + l1->val;
            if (sum > 9)
            {
                c = sum / 10;
                sum = sum % 10;
            }
            else
                c = 0;
            res->next = new ListNode(sum);
            res = res->next;
            l1 = l1->next;
        }
        while (l2 != NULL)
        {
            int sum = c + l2->val;
            if (sum > 9)
            {
                c = sum / 10;
                sum = sum % 10;
            }
            else
                c = 0;
            res->next = new ListNode(sum);
            res = res->next;
            l2 = l2->next;
        }
        if (c > 0)
            res->next = new ListNode(c);
        return dummy->next;
    }
};