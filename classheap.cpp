#include <iostream>
#include <cstring>
using namespace std;

#define MAX_SIZE 100

// Bill class representing a customer's bill
class Bill {
public:
    char name[50];   // Customer's name
    int amount;    // Bill amount
    int timestamp; // Timestamp to handle tie-breaking

    // Default constructor
    Bill() {
        strcpy(this->name, "");
        this->amount = 0;
        this->timestamp = 0;
    }

    // Parameterized constructor
    Bill(char name[50], int amount = 0, int timestamp = 0){
        strcpy(this->name, name);
        this->amount = amount;
        this->timestamp = timestamp;
    }
};

// Priority Queue class
class PriorityQueue {
private:
    Bill heap[MAX_SIZE]; // Array for the max-heap
    int size_;            // Current number of elements in the heap

    // Utility function to swap two bills
    void swap_(Bill& a, Bill& b) {
        Bill temp = a;
        a = b;
        b = temp;
    }

    // Heapify up to maintain max-heap property
    void heapifyUp(int index,char *A,int b,int cnt) 
    {
        if(b<heap[index].amount)
         {
            return;
         }
         heap[index].amount = b;
         strcpy(heap[index].name,A);
         heap[index].timestamp = cnt;
         while(index>1 && heap[index/2].amount<heap[index].amount)
         {
             swap(heap[index],heap[index/2]);
             index = index/2;
         }  
	}

    // Heapify down to maintain max-heap property
    void heapifyDown(int index) 
    {
        int l = index*2;
        int r = index*2+1;
        int largest = index;
        if(l<=size_ && heap[l].amount>heap[largest].amount)
        {
             largest = l;
        }
        if(r<=size_ && heap[r].amount>heap[largest].amount)
        {
             largest = r;
        }
        if(largest!=index)
        {
            swap(heap[index],heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Constructor
    PriorityQueue() {
        size_ = 0;
    }

    // Add a bill to the priority queue
    void addBill(char *name, int amount, int timestamp) 
    {
         size_++;
         heapifyUp(size_,name,amount,timestamp);
    }

    // Process the highest-priority bill
    void processBill() {
        
    }

    // Peek the highest-priority bill
    void peekBill() {
        
    }
    void print()
    {
        for(int i=1;i<=size_;i++)
        {
            cout<<heap[i].name<<" "<<heap[i].amount<<" "<<heap[i].timestamp<<endl;
        }
    }
};

int main() {
    PriorityQueue pq;

    // Simulate timestamps
    int timestamp = 0;

    // Add bills
    pq.addBill("Alice", 200, ++timestamp);
    pq.addBill("Bob", 100, ++timestamp);
    pq.addBill("Charlie", 300, ++timestamp);
    pq.addBill("Dave", 200, ++timestamp);

    // Peek the highest-priority bill
    //pq.peekBill();

    // Process bills
    // pq.processBill();
    // pq.processBill();
    // pq.processBill();
    // pq.processBill();

    // Try to process an empty queue
    //pq.processBill();
    pq.print();
    return 0;
}