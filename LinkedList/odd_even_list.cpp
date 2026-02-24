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
    ListNode *oddEvenList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenHead = even;

        while (even != NULL && even->next != NULL)
        {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;

        return head;
    }
};