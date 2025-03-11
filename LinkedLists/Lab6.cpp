#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
public:
    Node* head;

    LinkedList() : head(NULL)
    {
    }

    void insertAtBeginning(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void print()
    {
        Node* curr = front();
        while (curr)
        {
            cout << curr->data << " -> ";
            curr = curr->next;
        }
        cout << "End of List" << endl;
    }

    Node* front()
    {
        return head;
    }
}; //end of class

int main()
{
    LinkedList list1;
    list1.insertAtBeginning(200);
    list1.insertAtBeginning(100);
    list1.insertAtBeginning(50);
    list1.insertAtBeginning(25);
    list1.print();
}
