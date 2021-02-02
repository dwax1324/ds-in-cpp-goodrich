#include "ListPriorityQueue.hpp"
#include <iostream>

using namespace std;


// PriorityQueue based on unsorted List
// time Complexity: insert <- O(N), other functions <- O(1)

int main(){
    ListPriorityQueue<int, isLess<int>> LP;
    int input[10] = {4, 10, 2403, -1 , 4931, 4 , 301 , 491, 10, 24124213};
    for(int i=0; i < 10; i++){
        LP.insert(input[i]);
    }
    while(LP.size()){
        cout << LP.min() << ' ';
        LP.removeMin();
    }
}