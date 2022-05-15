#include "QuickSort.h"
#include <iostream>
std::vector<int> QuickSort::sort(std::vector<int> list){
    int high = list.size()-1;
    quickSort(&list, 0, high);
    return list;
}
void QuickSort::quickSort(std::vector<int>* list, int low, int high){
    if(low<high){
        int pi = partition(list, low, high);
        quickSort(list, low, pi-1);
        quickSort(list, pi+1, high);
    }
}
int QuickSort::partition(std::vector<int>* list, int low, int high){
    if(((high-low)+1)>=3){
        std::swap(list->at(low+2), list->at(high));
    }
    int pivot = list->at(high);
    int front_index = low;
    for(int j = low; j <= high-1; j++){
        if(list->at(j)<pivot){
            std::swap(list->at(front_index), list->at(j));
            front_index++;
        }
    }
    std::swap(list->at(front_index), list->at(high));
    return front_index;
} 
    // int pivot = list->at(high);
    // if(pivot>list->at(low)){
    //     return high;
    // }
    // std::swap(list->at(low), list->at(high));
    // return high;
        

    //     int temp = 0;
    // if(list.size()>=3){
    //     int pivot = list.at(low+2);
    //     int pivot_index = low+2;
    //     int front_index = low;
    //     for(int i = low; i <= high; i++){
    //         if(list.at(i)<pivot){     //31254    13254    453121   
    //             if(front_index>=pivot_index){
    //                 pivot_index=i;
    //                 temp=list.at(front_index);
    //                 list.at(front_index)=list.at(i);
    //                 list.at(i)=temp;
    //                 front_index++;
    //             }else{
    //                 temp=list.at(front_index);
    //                 list.at(front_index)=list.at(i);
    //                 list.at(i)=temp;
    //                 front_index++;
    //             }
    //         }
    //         //swap the pivot position with front index
    //     }
    //     temp = list.at(front_index);
    //     list.at(front_index) = list.at(low+2);
    //     list.at(low+2) = temp;
    //     return front_index;
    // }else if(list.size()<3){
    //     int pivot = list.at(low);
    //     int front_index = low;
    //     if(list.at(low)<list.at(high)){
    //         return front_index;
    //     }else{
    //         temp = list.at(low);
    //         list.at(low)=list.at(high);
    //         list.at(high)=temp;
    //         return front_index+1;
    //     }
    // }



    // if(size>=3){
    //     pivot = third element in the vec;
    //     for(each element in the list){
    //         if(elemnt < pivot){
    //             go to left;
    //         }else if(element > pivot){
    //             go to right;
    //         }
    //     }


    // else if(((high-low)+1)<3){
    //     int pivot = list.at(high);
    //     if(pivot>list.at(low)){
    //         return high;
    //     }
    //     std::swap(list.at(low), list.at(high));
    //     return high;
        
    // }