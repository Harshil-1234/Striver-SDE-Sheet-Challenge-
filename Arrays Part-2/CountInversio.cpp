#include<bits/stdc++.h>
using namespace std;

int merge(long long *&arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//
    int cnt = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        //if right half is smaller
        else {
            cnt += (mid-left+1);
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return cnt;
}

int mergeSort(long long *arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return 0;
    int mid = (low + high) / 2 ;
    cnt+=mergeSort(arr, low, mid);  // left half
    cnt+=mergeSort(arr, mid + 1, high); // right half
    cnt+= merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long cnt = 0;
    cnt = mergeSort(arr, 0, n-1);
    return cnt;
}

int main(){
    
    return 0;
}