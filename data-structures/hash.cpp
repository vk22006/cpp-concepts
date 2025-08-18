#include <iostream>
#include <vector>
#include <list>
#include <string>

#include "hash.h"

HashMap::HashMap() {
    table.resize(SIZE);
}

void HashMap::insert(int key, std::string value) {
    int idx = hashFunction(key);
    for(auto &p : table[idx]) {
        if(p.first == key) {
            p.second = value;
            return;
        }
    }
    table[idx].push_back({key,value});
}

std::string HashMap::get(int key) {
    int idx = hashFunction(key);
    for(auto &p : table[idx]) {
        if(p.first == key) {
            return p.second;
        }
    }
    return "Not Found!\n";
}

void HashMap::deleteval(int key) {
    int idx = hashFunction(key);
    for(auto it = table[idx].begin(); it != table[idx].end(); it++) {
        if(it->first == key) {
            table[idx].erase(it);
            return;
        }
    }
}
void HashMap::display() {
    for(int i=0; i<SIZE; i++) {
        std::cout << i << ": ";
        for(auto &p : table[i]) {
            std::cout << "(" << p.first << ", " << p.second << ")";
        }
        std::cout << "\n";
    }
}