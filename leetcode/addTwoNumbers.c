#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *p = l1, *q = l2;
    struct ListNode *r = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));

    int c = 0;

    head->val = p->val + q->val;
    c = head->val / 10;
    head->val = head->val % 10;
    head->next = NULL;

    r = head;
    p = p->next;
    q = q->next;

    while (c || (p != NULL) || (q != NULL))
    {
        struct ListNode *plus = (struct ListNode *)malloc(sizeof(struct ListNode));
        plus->next = NULL;
        plus->val = c;

        if (p != NULL)
        {
            plus->val += p->val;
            p = p->next;
        }
        if (q != NULL)
        {
            plus->val += q->val;
            q = q->next;
        }

        plus->val += c;
        c = plus->val / 10;
        plus->val -= (c * 10);

        r->next = plus;
        r = r->next;
    }

    return head;
}

void main(){

}