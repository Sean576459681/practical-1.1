#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){
    //length of the list
    int length = list.size();
    int temp = 0;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length-i-1; j++){
            if(list.at(j)>list.at(j+1)){
                temp = list.at(j);
                list.at(j) = list.at(j+1);
                list.at(j+1) = temp;
            }
        }
    }
    return list;
}