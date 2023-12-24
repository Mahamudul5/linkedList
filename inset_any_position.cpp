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
void insert_any_posiiton(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_head(Node *&head, int v)
{

    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {

        cout << "Option:1 Insert At Tail." << endl;
        cout << "Option:2 Print LinkedList." << endl;
        cout << "Option:3 Inset Any Position." << endl;
        cout << "Option:4 Insert At Head." << endl;
        cout << "Option:5 Terminate." << endl;
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
            int pos, val;
            cout << "Enter Your Position to Insert:" << endl;
            cin >> pos;
            cout << "Enter Your Value To Insert:" << endl;
            cin >> val;
            insert_any_posiiton(head, pos, val);
            cout << endl
                 << "Inserted...." << endl;
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value to insert at head" << endl;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            break;
        }
    }

    return 0;
}