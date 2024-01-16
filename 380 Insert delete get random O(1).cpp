class RandomizedSet {
    vector<int> elements;
    unordered_map<int,int> val_to_index;

public:
    
  RandomizedSet() {
  }

  bool contains(int val) {
    return val_to_index.find(val)!=val_to_index.end();
  }

  bool insert(int val) {
    if (contains(val))
       return false;

    elements.push_back(val);
    val_to_index[val]=elements.size()-1;
    return true;
  }

  bool remove(int val) {
    if (!contains(val))
       return false;

    auto it=val_to_index.find(val);
    elements[it->second]=elements.back();
    elements.pop_back();                           
    val_to_index[elements[it->second]]=it->second;
    val_to_index.erase(val);
     return true;
  }

 int getRandom() {
    return elements[rand()%elements.size()];
    }
};
