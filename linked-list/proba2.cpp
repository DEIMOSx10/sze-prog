#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node *next;
};


vector<int> linkedListValues(const Node &head) {
};


int sumList(const Node *head) {
}


bool linkedListFind(const Node &head, int target) {
}


int getNodeValue(const Node &head, int index) {
}


bool isUnivalueList(const Node &head) {
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
