class LRUCache {
public:
    class node{
        public:
        int key;
        int value;
        node* next;
        node* prev;
        node(int a , int b)
        {
            key = a;
            value = b;
        }
    };
    
    
    void addnode(node* n)
    {
        
        node* temp = head->next;
        head->next = n;
        n->next = temp;
        n->prev = head;
        temp->prev = n;
    }
    
    
    void deletenode(node* n)
    {
        node* ne = n->next;
        node* pre = n->prev;   
        pre->next = ne;
        ne->prev = pre;
        
    }
    
    node* head = new node(-1,-1);
    node* tail = new node(-1, -1);
    int cap;
    unordered_map<int, node*> map;
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        
       if(map.find(key) == map.end()) return -1;
        
        int a =  map[key]->value;
        
        node* res = map[key];
        deletenode(res);
        addnode(res);
        map[key] = head->next;
        return a;
    }
    
    void put(int key, int value) {
        
        if(map.find(key) != map.end()) {
            node* existingnode = map[key];
            map.erase(key);
            deletenode(existingnode);
        }
        if(map.size() == cap)
        {
            int k = tail->prev->key;
            deletenode(tail->prev);
            map.erase(k);
        }
        
        node* n = new node(key , value);
        // cout << n->value;
        addnode(n);
        map[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */