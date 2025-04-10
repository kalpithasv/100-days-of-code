//structure of doubbly linked list
//pseudocode alone
#include <iostream> // Include the iostream library for input/output operations
#include <string> // Include the string library for string operations
using namespace std; // Use the standard namespace
//doubly linked give full code
class Node { // Node class for doubly linked list
// This class represents a single node in the doubly linked list
// It contains data and pointers to the next and previous nodes.
public:
    string data; // Data stored in the node
    Node* next; // Pointer to the next node
    Node* prev; // Pointer to the previous node

    Node(string value) { // Constructor to initialize a new node
        data = value; // Set the data value
        next = nullptr; // Initialize next pointer to null
        prev = nullptr; // Initialize previous pointer to null
    }
};
class DoublyLinkedList { // Class for the doubly linked list
// This class manages the nodes and provides methods to manipulate the list.
// It contains pointers to the head and tail of the list.
public:
    Node* head; // Pointer to the head of the list
    Node* tail; // Pointer to the tail of the list

    DoublyLinkedList() { // Constructor to initialize an empty list
        head = nullptr; // Initialize head pointer to null
        tail = nullptr; // Initialize tail pointer to null
    }
    void insertAtBeginning(string value) { // Function to insert a node at the beginning of the list
        Node* newNode = new Node(value); // Create a new node with the given value
        if (head == nullptr) { // If the list is empty
            head = newNode; // Set head to the new node
            tail = newNode; // Set tail to the new node
        } else {
            newNode->next = head; // Set the next pointer of the new node to the current head
            head->prev = newNode; // Set the previous pointer of the current head to the new node
            head = newNode; // Update head to point to the new node
        }
    }
    void insertAtEnd(string value) { // Function to insert a node at the end of the list
        Node* newNode = new Node(value); // Create a new node with the given value
        if (tail == nullptr) { // If the list is empty
            head = newNode; // Set head to the new node
            tail = newNode; // Set tail to the new node
        } else {
            tail->next = newNode; // Set the next pointer of the current tail to the new node
            newNode->prev = tail; // Set the previous pointer of the new node to the current tail
            tail = newNode; // Update tail to point to the new node
        }
    }
    void displayForward() { // Function to display the list from head to tail
        Node* current = head; // Start from the head of the list
        cout << "List (head to tail): "; // Display header
        while (current != nullptr) { // Traverse the list
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        }
        cout << endl; // Print a newline at the end
    }
    void displayBackward() { // Function to display the list from tail to head
        Node* current = tail; // Start from the tail of the list
        cout << "List (tail to head): "; // Display header
        while (current != nullptr) { // Traverse the list
            cout << current->data << " "; // Print the data of the current node
            current = current->prev; // Move to the previous node
        }
        cout << endl; // Print a newline at the end
    }
    void deleteNode(Node* node) { // Function to delete a specific node from the list
        if (node == nullptr) return; // If the node is null, do nothing
        if (node->prev != nullptr) { // If the node is not the head
            node->prev->next = node->next; // Update the next pointer of the previous node
        } else {
            head = node->next; // Update head if the node is the head
        }
        if (node->next != nullptr) { // If the node is not the tail
            node->next->prev = node->prev; // Update the previous pointer of the next node
        } else {
            tail = node->prev; // Update tail if the node is the tail
        }
        delete node; // Delete the current node to free memory
    }
    void clear() { // Function to clear the entire list
        Node* current = head; // Start from the head of the list
        while (current != nullptr) { // Traverse the list
            Node* nextNode = current->next; // Store the next node
            delete current; // Delete the current node
            current = nextNode; // Move to the next node
        }
        head = nullptr; // Set head to null
        tail = nullptr; // Set tail to null
    }
    ~DoublyLinkedList() { // Destructor to clear the list when the object is destroyed
        clear(); // Call clear to free memory
    }
};
int main() { // Main function
    DoublyLinkedList list; // Create a doubly linked list object
    list.insertAtBeginning("Node 1"); // Insert nodes at the beginning
    list.insertAtBeginning("Node 2");
    list.insertAtEnd("Node 3"); // Insert nodes at the end
    list.insertAtEnd("Node 4");

    list.displayForward(); // Display the list from head to tail
    list.displayBackward(); // Display the list from tail to head

    return 0; // Return 0 to indicate successful execution
} // End of main function
// End of program
// This program demonstrates the implementation of a doubly linked list in C++.
// It includes functions to insert nodes at the beginning and end of the list,
