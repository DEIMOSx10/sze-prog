#include <iostream>
#include <vector>

using namespace std;


/*
Write a function, linkedListValues, that takes in the head of a linked list as an argument.
The function should return an array containing all values of the nodes in the linked list.
*/


/*
 *Write a function, sumList, that takes in the head of a linked list containing numbers as an argument.
 *The function should return the total sum of all values in the linked list.
 */


struct Node {
    int value;
    Node *next;
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


vector<int> linkedListValues(const Node &head) {
    vector<int> result;
    const Node *current = &head;
    while (current != nullptr) {
        result.push_back(current->value);
        current = current->next;
    }
    return result;
};

int main() {
    Node a = {1, nullptr};
    Node b = {2, nullptr};
    Node c = {3, nullptr};
    Node d = {4, nullptr};

    a.next = &b;
    b.next = &c;
    c.next = &d;

    const vector<int> values = linkedListValues(a);

    for (const auto &value: values) {
        cout << value;
    }

    const int sum = sumList(&a);
    cout << endl << sum;

    return 0;
}
