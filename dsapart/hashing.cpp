#include<bits/stdc++.h>
using namespace std;
class hashing{
    vector<list<int> > hashtable;
    int buckets;
public:
    hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets;
    }

    void addkey(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchkey(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }

    void deletekey(int key){

        int idx = hashvalue(key);
        if(searchkey(key)!=hashtable[idx].end()){
            hashtable[idx].erase(searchkey(key));
            cout<<key<<" is deleted"<<"\n";
        }else{
            cout<<"key is not found"<<"\n";
        }
    }
};


int main(){
    hashing h(10);
    
    h.addkey(2);
    h.addkey(3);
    h.addkey(4);

    h.deletekey(3);
    h.deletekey(3);

    return 0;
}
