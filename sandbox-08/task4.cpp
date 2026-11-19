#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int length = 0;

    for (int v = 1; v <= 3; ++v) {
        Node* n = new Node{v, nullptr};
        if (tail == nullptr) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        ++length;
    }

    for (Node* n = head; n != nullptr; n = n->next) {
        if (n != head) std::cout << ' ';
        std::cout << n->value;
    }
    std::cout << '\n' << length << '\n';

    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
    tail = nullptr;
}
