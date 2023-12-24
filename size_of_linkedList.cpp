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
// void insert_at_tail(Node *&head, int v)
// {
//     Node *newNode = new Node(v);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }
void insert_at_tail(Node *head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
int main()
{
    Node *head = NULL;
    int size = 0;
    while (true)
    {

        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        size++;
        insert_at_tail(head, v);
    }
    cout << size << endl;

    return 0;
}