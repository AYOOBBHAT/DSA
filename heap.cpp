


#include <vector>
using namespace std;



class Heap{
    vector<int>v;


    public:
    Heap(int default_size=10){
        v.reserve(default_size+1);
        v.push_back(-1);

    };


    void push(int data){

        v.push_back(data);
        int parent =idx/2;
        while(index>1,v[index]<v[parent]){
            swap(v[index],v[parent])
        }


    }
    





};