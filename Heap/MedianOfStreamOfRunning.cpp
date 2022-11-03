#include <iostream>
#include <queue>
using namespace std;

priority_queue<int,vector<int>,greater<int>> pqmin;
priority_queue<int,vector<int>> pqmax;

// Algorithm: 

// Create two heaps. One max heap to maintain elements of lower half and one min heap to maintain elements of higher half at any point of time..
// Take initial value of median as 0.
// For every newly read element, insert it into either max heap or min-heap and calculate the median based on the following conditions: 
// If the size of max heap is greater than the size of min-heap and the element is less than the previous median then pop the top element from max heap and insert into min-heap and insert the new element to max heap else insert the new element to min-heap. Calculate the new median as the average of top of elements of both max and min heap.
// If the size of max heap is less than the size of min-heap and the element is greater than the previous median then pop the top element from min-heap and insert into the max heap and insert the new element to min heap else insert the new element to the max heap. Calculate the new median as the average of top of elements of both max and min heap.
// If the size of both heaps is the same. Then check if the current is less than the previous median or not. If the current element is less than the previous median then insert it to the max heap and a new median will be equal to the top element of max heap. If the current element is greater than the previous median then insert it to min-heap and new median will be equal to the top element of min heap.


void insert(int x){
    
    if(pqmax.size() == pqmin.size()){
        if(pqmax.size() == 0){
            // Either push in max heap or min heap
            pqmax.push(x);
            return;
        }
        if(x < pqmax.top())
            pqmax.push(x);
        else    
            pqmin.push(x);
    }
    else{
        // Two case possible
        // Case 1 : size of max Heap > size of minHeap
        // Case 2 : size of min Heap > size of maxHeap

        if(pqmax.size() > pqmin.size()){
            if(x >= pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else{
            if(x <= pqmin.top()){
                pqmax.push(x);
            }
            else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}



double findMedian(){
    if(pqmin.size() == pqmax.size())
        return (pqmin.top() + pqmax.top())/2.0;
    else if(pqmax.size() > pqmin.size())
        return pqmax.top();
    else    
        return pqmin.top();
}
int main(int argc, char const *argv[])
{
    insert(10);
    cout<< findMedian() <<endl;
    insert(15);
    cout<< findMedian() <<endl;
    insert(21);
    cout<< findMedian() <<endl;
    insert(30);
    cout<< findMedian() <<endl;
    insert(18);
    cout<< findMedian() <<endl;
    insert(19);
    cout<< findMedian() <<endl;
    return 0;
}
