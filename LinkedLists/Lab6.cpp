#include <iostream>
using namespace std;

// Structure representing a node in a linked list
struct Node
{
    int data; // Data stored in the node
    Node* next; // Pointer to the next node in the LinkedList
    Node* prev; // Pointer to the previous node in the LinkedList
};

// Class representing a LinkedList
class LinkedList
{
public:
    Node* head; // Pointer to the first node in the list
    Node* iter; // Pointer for the iterations.

    // Constructor initializes an empty list (head is set to NULL)
    LinkedList() : head(nullptr), iter(nullptr)
    {
    }

    // Inserts a new node at the beginning of the list
    void insertAtBeginning(int value)
    {
        Node* newNode = new Node();
        // Create a new node and assign the given value
        newNode->data = value;
        // New node's next pointer points to the current head of the list
        newNode->next = head;
        // New node's prev pointer should be NULL since it will be the new head
        newNode->prev = nullptr;

        // If the list is not empty, update the current head's prev pointer
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        // Update head to the new node
        head = newNode;
    }

    // Inserts a new node at the end of the list
    void insertAtLast(int value)
    {
        // Create a new node and assign the given value
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr; // This will be the last node, so its next pointer is NULL
        newNode->prev = nullptr; // Initialize prev pointer to NULL

        // If the list is empty, the new node becomes the head
        if (head == nullptr)
        {
            head = newNode;
            return; // End of the function
        }

        // Start at the head of the list
        // Move iter to the end of the list stop when next is NULL
        iter = head;
        while (iter->next != nullptr) // While next points to something
        {
            iter = iter->next;
        }
        // Set the next pointer of the last node to point to the new node
        iter->next = newNode;
        // Set the new node's prev pointer to point back to the last node
        newNode->prev = iter;
    }

    // Returns a pointer to the first node (head) of the list
    Node* front()
    {
        return head;
    }

    // Prints the linked list from the beginning to the end
    void printFromBeginning()
    {
        Node* curr = front(); // Get the first node
        while (curr) // Traverse the list
        {
            cout << curr->data << " -> "; // Print the data
            curr = curr->next; // Move to the next node
        }
        cout << "End of List" << endl;
    }

    // Returns a pointer to the last node of the list
    Node* end()
    {
        if (!head) // If the list is empty, return nullptr
            return nullptr;
        Node* node = head;
        while (node->next) // Traverse until the last node
        {
            node = node->next;
        }
        return node; // Return the last node
    }

    // Prints the linked list from last to first using the end() helper function
    void printFromLast()
    {
        Node* node = end(); // Get the last node
        if (!node) // If the list is empty, print message
        {
            cout << "List is empty" << endl;
            return;
        }
        while (node) // Traverse backwards using the prev pointer
        {
            cout << node->data << " -> "; // Print the data
            node = node->prev; // Move to the previous node
        }
        cout << "Start of List" << endl;
    }
};

int main()
{
    LinkedList list1;
    list1.insertAtLast(23);
    list1.insertAtBeginning(55);
    list1.insertAtBeginning(12);
    list1.insertAtLast(60);
    list1.printFromBeginning();
    list1.printFromLast();

    // What do you notice about the value of p and NP?
    // Why?
    LinkedList* NP = &list1;
    cout << "\nNP -> " <<NP->head;
    Node *p = list1.front();
    cout << "\n p -> "<<p;
    cout << "\n p data -> " << p->data << endl;

    //Why do you notice about the values of p?
    //What do you notice about the values of p->data?
    //Why are the values the way they are?
    *p = *p->next->next;
    cout << "\n p nn -> "<<p;
    cout << "\n p nn data -> " << p->data << endl;
}
