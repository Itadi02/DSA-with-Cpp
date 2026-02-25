// 1290. Convert Binary Number in a Linked List to Integer

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <cmath>
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
    int getDecimalValue(ListNode *head)
    {
        string s = "";
        ListNode *temp = head;
        while (temp != NULL)
        {
            s += (temp->val + '0');
            temp = temp->next;
        }
        int decimal = 0;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[n - i - 1] == '1')
            {
                decimal += pow(2, i);
            }
        }

        return decimal;
    }
};