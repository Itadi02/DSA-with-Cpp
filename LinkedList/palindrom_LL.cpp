// 234. Palindrome Linked List

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <stack>
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
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;
        stack<int> s;
        ListNode *temp = head;
        while (temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            if (temp->val != s.top())
                break;
            temp = temp->next;
            s.pop();
        }
        return s.empty();
    }
};