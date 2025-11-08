#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int findMax(Node* head) {
    int maxVal = INT_MIN;
    while (head != NULL) {
        if (head->data > maxVal)
            maxVal = head->data;
        head = head->next;
    }
    return maxVal;
}

int main() {
    Node* head = new Node{5, new Node{18, new Node{3, new Node{22, NULL}}}};

    cout << "Maximum Value = " << findMax(head);
    return 0;
}
