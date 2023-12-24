#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linked_list(Node *head)
{
    cout << "Your LinkedList:" << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {

        cout << "Option:1 Insert At Tail" << endl;
        cout << "Option:2 Print LinkedList" << endl;
        cout << "Option:3 Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter your value" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}