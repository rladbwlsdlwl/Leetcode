class MyHashSet {
private:
    bool h[1000001];
public:
    MyHashSet() {
        fill_n(h,1000001,false);
    }
    
    void add(int key) {
        h[key]=true;
    }
    
    void remove(int key) {
        h[key]=false;
    }
    
    bool contains(int key) {
        return h[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
