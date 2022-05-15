#include "RecursiveBinarySearch.h"
bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    int left = 0;
    int right = list.size()-1;
    int index = bin_search(list, left, right, target);
    if(index != -1){
        return true;
    }
    return false;
}

int RecursiveBinarySearch::bin_search(std::vector<int> list, int left, int right, int target){
    int mid = left+(right-left)/2;
    if(right>=0&&left<=right){
        mid = left+(right-left)/2;
        if(list.at(mid)==target){
            return mid;
        }else if(list.at(mid)>target){
            return bin_search(list, left, mid-1, target);
        }
        return bin_search(list, mid+1, right, target); 
    }

    return -1;
}