
#include <iostream>
using namespace std;

class StackLinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int x) {
            data = x;
            next = NULL;
        }
    };

    Node* head;

public:
    StackLinkedList() {
        head = NULL;
    }

    ~StackLinkedList() {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    bool isEmpty() {
        return head == NULL;
    }

    void push(int x) {
        Node* p = new Node(x);
        p->next = head;
        head = p;
    }

    bool pop() {
        if (isEmpty()) return false;

        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    bool top(int &x) {
        if (isEmpty()) return false;

        x = head->data;
        return true;
    }

    void display() {
        Node* p = head;
        cout << "Top -> ";
        while (p != NULL) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
};

