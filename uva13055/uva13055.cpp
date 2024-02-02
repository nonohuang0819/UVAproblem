#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* nextptr;
};

Node* insert(Node* node, string name) {
    Node* newnode = new Node;
    newnode->name = name;
    newnode->nextptr = node;
    return newnode;
}

void remove(Node*& node) {
    if (node != nullptr) {
        Node* temp = node;
        node = node->nextptr;
        delete temp;
    }
}

string getCurrentDreamer(Node* node) {
    if (node != nullptr) {
        return node->name;
    } else {
        return "Not in a dream";
    }
}

int main() {
    int n;
    cin >> n;

    string action, name;
    Node* dream = nullptr;

    for (int i = 0; i < n; i++) {
        cin >> action;
        if (action == "Sleep") {
            cin >> name;
            dream = insert(dream, name);
        } else if (action == "Kick") {
            remove(dream);
        } else if (action == "Test") {
            cout << getCurrentDreamer(dream) << endl;
        }
    }

    // Free memory
    while (dream != nullptr) {
        remove(dream);
    }

    return 0;
}
