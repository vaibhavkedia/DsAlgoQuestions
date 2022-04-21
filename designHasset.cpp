#include<bits/stdc++.h>
using namespace std;

class MyHashSet {
    vector<bool>vec;
public:
    MyHashSet() {
        vec = vector<bool>(1000001,false);
    }
    
    void add(int key) {
        vec.at(key) = true;
    }
    
    void remove(int key) {
       vec.at(key) = false;
    }
    
    bool contains(int key) {
        return vec.at(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */