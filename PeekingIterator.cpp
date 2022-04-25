/*
 *
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
private:
    int p;
    vector<int>n;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    p=0;
        n.resize(nums.size());
        copy(nums.begin(),nums.end(),n.begin());
	}
	
	int peek() {
        return n[p];
	}
	
	int next() {
	    return n[p++];
	}
	
	bool hasNext() const {
	    return (n.size()<=p ? false : true);
	}
};
