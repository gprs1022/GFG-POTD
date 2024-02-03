long long unsigned int decimalValue(Node *head)
    {
        // Your Code Here
        if (head == NULL)
        {
            return 0;
        }

        long long int ans = 0;
        struct Node *p = head;
        while (p)
        {
            ans = (ans << 1) | p->data;
            ans = ans % 1000000007;
            p = p->next;
        }

        return ans;
    }