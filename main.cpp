#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

void printVec(vector<int> list){
    int length = list.size();
    for(int i = 0; i < length; i++){
        cout<<list.at(i)<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    vector<int> vec;
    int temp = 0;
    while(1){
        cin>>temp;
        vec.push_back(temp);
        if(cin.get()=='\n'){
            break;
        }
    }
    QuickSort quick1;
    vec = quick1.sort(vec);
    RecursiveBinarySearch bin1;
    
    if(bin1.search(vec, 1)){
        cout<<"true ";
        printVec(vec);
    }else{
        cout<<"false ";
        printVec(vec);
    }

    return 0;
}