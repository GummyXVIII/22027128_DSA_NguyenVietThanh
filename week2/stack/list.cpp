
#include <iostream>
#include <vector>
using namespace std;

class StackList {
private:
    vector<int> a;

public:
    bool isEmpty() {
        return a.empty();
    }

    void push(int x) {
        a.push_back(x);
    }

    bool pop() {
        if (isEmpty()) return false;

        a.pop_back();
        return true;
    }

    bool top(int &x) {
        if (isEmpty()) return false;

        x = a.back();
        return true;
    }

    void display() {
        cout << "Top -> ";
        for (int i = (int)a.size() - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};
