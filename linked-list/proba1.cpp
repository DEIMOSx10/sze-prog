#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node *next;
};

/*
Write a function, linkedListValues, that takes in the head of a linked list as an argument.
The function should return an array containing all values of the nodes in the linked list.
*/
vector<int> linkedListValues(const Node &head) {
    vector<int> result;
    const Node *current = &head;
    while (current != nullptr) {
        result.push_back(current->value);
        current = current->next;
    }
    return result;
};

/*
 *Write a function, sumList, that takes in the head of a linked list containing numbers as an argument.
 *The function should return the total sum of all values in the linked list.
 */
int sumList(const Node *head) {
    int sum = 0;
    const Node *current = head;
    while (current != nullptr) {
        sum += current->value;
        current = current->next;
    }
    return sum;
}

/*
*Write a function, linkedListFind, that takes in a pointer to the head of a linked list and a target value.
*The function should return a boolean indicating whether or not the linked list contains the target.
*/
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

/*
*Write a function, getNodeValue, that takes in a pointer to the head of a linked list and an index.
*The function should return the value of the linked list at the specified index.
If there is no node at the given index, then return -1.
*/
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

/*
*Write a function, isUnivalueList, that takes in a pointer to the head of a linked list as an argument.
*The function should return a boolean indicating whether or not the linked list contains exactly one unique value.
You may assume that the input list is non-empty.
*/
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
