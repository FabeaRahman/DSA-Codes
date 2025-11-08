#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create three nodes
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();

    // Assign data
    a->data = 10;
    b->data = 20;
    c->data = 30;

    // Link nodes
    a->next = b;
    b->next = c;
    c->next = NULL;

    // Print the linked list
    Node* temp = a;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
