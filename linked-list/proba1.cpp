#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node *next;
};


vector<int> linkedListValues(const Node &head) {
    vector<int> result;
    const Node *current = &head;
    while (current != nullptr) {
        result.push_back(current->value);
        current = current->next;
    }
    return result;
};


int sumList(const Node *head) {
    int sum = 0;
    const Node *current = head;
    while (current != nullptr) {
        sum += current->value;
        current = current->next;
    }
    return sum;
}


bool linkedListFind(const Node &head, int target) {
    const Node *current = &head;
    while (current != nullptr) {
        if (target == current->value) {
            return true;
        }
        current = current->next;
    }
    return false;
}


int getNodeValue(const Node &head, int index) {
    const Node *current = &head;
    int i = 1;
    while (current != nullptr) {
        if (i == index) {
            return current->value;
        }
        current = current->next;
        i++;
    }
    return -1;
}


bool isUnivalueList(const Node &head) {
    const Node *current = &head;
    int save = current->value;
    while (current != nullptr) {
        if (current->value != save) {
            return false;
        }
        current = current->next;
    }
    return true;
}


int main() {
    Node a = {54, nullptr};
    Node b = {78, nullptr};
    Node c = {11, nullptr};
    Node d = {7, nullptr};

    a.next = &b;
    b.next = &c;
    c.next = &d;

    const vector<int> values = linkedListValues(a);

    for (const auto &value: values) {
        cout << value;
    }

    const int sum = sumList(&a);
    cout << endl << sum;

    const bool contains = linkedListFind(a, 54);

    if (contains) {
        cout << endl << "It contains!";
    } else {
        cout << endl << "It doesn't cointain!";
    }

    int value = getNodeValue(a, 2);
    cout << endl << value;

    bool areUnique = isUnivalueList(a);
    if (!areUnique) {
        cout << endl << "The values are not all the same!";
    } else {
        cout << endl << "The values are all the same!";
    }

    return 0;
}
