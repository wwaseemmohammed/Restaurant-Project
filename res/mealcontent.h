
#pragma once
#include <iostream>
using namespace std;

template <typename T>
class mealcontent {
private:
    T* listt;
    int count;
    int capacity;
public:
    mealcontent(int size = 1) : capacity(size), count(0), listt(new T[size]) {}

    mealcontent(const mealcontent<T>& ML) {
        capacity = ML.capacity;
        count = ML.count;
        listt = new T[capacity];
        for (int i = 0; i < count; i++)
            listt[i] = ML.listt[i];
    }

    mealcontent<T>& operator=(const mealcontent<T>& ML) {
        if (this != &ML) {
            delete[] listt;
            capacity = ML.capacity;
            count = ML.count;
            listt = new T[capacity];
            for (int i = 0; i < count; i++)
                listt[i] = ML.listt[i];
        }
        return *this;
    }

    mealcontent(mealcontent<T>&& ML) {
        listt = ML.listt;
        count = ML.count;
        capacity = ML.capacity;
        ML.listt = nullptr;
        ML.count = 0;
        ML.capacity = 0;
    }

    mealcontent<T>& operator=(mealcontent<T>&& ML) {
        if (this != &ML) {
            delete[] listt;
            listt = ML.listt;
            count = ML.count;
            capacity = ML.capacity;
            ML.listt = nullptr;
            ML.count = 0;
            ML.capacity = 0;
        }
        return *this;
    }

    ~mealcontent() { delete[] listt; }

    void add(T X) {
        if (count >= capacity) {
            int newCapacity = (capacity == 0) ? 1 : capacity * 2;
            T* newlistt = new T[newCapacity];
            for (int i = 0; i < count; ++i)
                newlistt[i] = listt[i];
            delete[] listt;
            listt = newlistt;
            capacity = newCapacity;
        }
        listt[count++] = X;
    }

    T get(int pos) const {
        if (pos < 0 || pos >= count) return T();
        return listt[pos];
    }

    int size() const { return count; }

    void removeML(int pos) {
        if (pos < 0 || pos >= count) return;
        for (int i = pos; i < count - 1; i++)
            listt[i] = listt[i + 1];
        count--;
    }

    void clearAll() { count = 0; }
};

