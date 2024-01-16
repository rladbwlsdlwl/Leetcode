class RandomizedSet {
private:
    int size;
    unordered_map<int, int> hm;
    vector<int> num;
public:
    RandomizedSet() {
        size = 0;
    }
    
    bool insert(int val) {
        if (hm.find(val) != hm.end()){
            return false;
        }

        hm.insert({val, size++});
        num.push_back(val);

        return true;
    }
    
    bool remove(int val) {
        if(hm.find(val) == hm.end()){
            return false;
        }

        // change 1. vector position, 2. hashm index 
        num[hm[val]] = num[size - 1];

        hm[num[size - 1]] = hm[val];

        num.pop_back();
        hm.erase(val);

        size--;

        return true;
    }
    
    int getRandom() {
        return num[rand()%size];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
