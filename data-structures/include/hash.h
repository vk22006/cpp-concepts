#ifndef HASH_H
#define HASH_H

#include <iostream>
#include <vector>
#include <list>
#include <string>

class HashMap {
    const static int SIZE = 10;
    std::vector<std::list<std::pair<int, std::string>>> table;

    int hashFunction(int key) {
        return key % SIZE;
    }

    public:
        HashMap();
        void insert(int key, std::string value);
        std::string get(int key);
        void deleteval(int key);
        void display();
};

#endif
