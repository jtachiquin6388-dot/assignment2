#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <vector>
#include <stdexcept>

template <typename T>
class ArrayStack {
private:
    std::vector<T> data;

public:
    void push(const T& value) {
        data.push_back(value);

        return;
    }

    void pop() {
        if (empty()) {
            throw std::out_of_range("Stack empty");
        }

        data.pop_back();
    }

    T top() const {
        if (empty()) {
            throw std::out_of_range("Stack empty");

        }
        return data.back();
    }

    bool empty() const {
        if (data.empty()) {
            return true;
        }
        return false;
    }

    int size() const {
        return data.size();
    }
};

#endif
