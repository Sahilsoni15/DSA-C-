#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
public:
    int *array;
    int front, rear;

    Queue() {
        array = new int[SIZE]; // allocate memory
        front = rear = -1;     // initialize both
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) { // Queue is full
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1 && rear == -1) { // first element
            front = rear = 0;
        } else {
            rear++;
        }

        array[rear] = value;
        cout << "Data added successfully: " << value << endl;
    }

    void dequeue() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        if (front == rear) { // only one element
            cout << "Dequeued: " << array[front] << endl;
            front = rear = -1;
        } else {
            cout << "Dequeued: " << array[front] << endl;
            front++;
        }
    }

    void printQueue() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] array; // free memory
    }
};

int main() {
    Queue obj;
    obj.enqueue(2);
    obj.enqueue(1);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.dequeue();
    obj.printQueue();
    return 0;
}




// #include<iostream>
// using namespace std;
// #define size 5

// class Queue{
//     public:
//     int *array;
//     int front,rear;
//     public: Queue(){
//         front =rear-1;
    
//     }

//     public:
//     void enqueue(int value){
//         if (rear == size-1) //Queue is full
//         {
//             cout<<"Queue is full"<<endl;
//         }
//         else{
//             if(rear==-1 && front==-1){
//                 array[++rear]=value;
//                 front=0;
//             }
//             else{
//                 array[++rear]=value;
//                 cout<<"Data added successfully"<<endl;
//             }
//         }
//     }

//     void dequeue(){
//         if(front==-1 && rear ==-1) //check for the empty queue
//         {
//             cout<<"Queue is empty"<<endl;
//         }

//         else if(front == 0 && rear ==0) //when only one element is available
//         {
//             front = rear =-1;
//             cout<<"Dequeue successfully"<<endl;
//         }
//         else{
//             this->array = this->shuffleArray(this->array);
//             rear=rear-1;
//             cout<<"Dequeue Successfully"<<endl;
//         }
//     }
//     int* shuffleArray(int *arrayRef){
//             for(int i =front; i<rear;i++){
//                 arrayRef[i]=arrayRef[i+1];//shifting forward
//             }
//             return arrayRef;
//     }
//     void printQueue(){
//         if(front == -1 && rear == -1){
//             cout << "Queue is empty" << endl;
//             return;
//         }
//         cout << "Queue elements: ";
//         for(int i = front; i <= rear; i++){
//             cout << array[i] << " ";
//         }
//         cout << endl;
//     }

// };
// int main(){
//     Queue obj;
//     obj.enqueue(2);
//     obj.enqueue(1);
//     obj.enqueue(3);
//     obj.enqueue(4);
//     obj.dequeue();
//     obj.printQueue();
//     return 0;
// }


