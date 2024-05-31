#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        data = 0;
        next = nullptr;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = nullptr; }

    ~LinkedList() {
        Node* current = head;
        Node* nextNode = nullptr;
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void setHead(Node* newHead) {
        head = newHead;
    }

    Node* getHead() const {
        return head;
    }

    void insertNode(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }


    void printList() const {
        Node* temp = head;

        if (head == nullptr) {
            cout << "List empty" << endl;
            return;
        }

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }


    void deleteNode(int nodeOffset) {
        Node *temp1 = head, *temp2 = nullptr;
        int ListLen = 0;

        if (head == nullptr) {
            cout << "List empty." << endl;
            return;
        }

        while (temp1 != nullptr) {
            temp1 = temp1->next;
            ListLen++;
        }

        if (ListLen < nodeOffset) {
            cout << "Index out of range" << endl;
            return;
        }

        temp1 = head;

        if (nodeOffset == 1) {
            head = head->next;
            delete temp1;
            return;
        }

        while (nodeOffset-- > 1) {
            temp2 = temp1;
            temp1 = temp1->next;
        }

        temp2->next = temp1->next;
        delete temp1;
    }

    int getLength() const {
        int length = 0;
        Node* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
        return length;
    }
};

int main() {
    LinkedList list;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        list.insertNode(element);
    }

    cout << "Elements of the list are: ";
    list.printList();

    cout << "The length of the linked list is: " << list.getLength() << endl;

    int position;
    cout << "Enter the position of the node to delete: ";
    cin >> position;

    list.deleteNode(position);

    cout << "Elements of the list after deletion are: ";
    list.printList();

    return 0;
}
