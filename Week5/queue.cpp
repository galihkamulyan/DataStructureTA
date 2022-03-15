#include <iostream>
#include "./queue.hpp"

int main()
{
    dsa::Queue<int> myQueue;

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    myQueue.enqueue(4);
    myQueue.enqueue(5);

    std::cout << myQueue.dequeue() << std::endl;
    std::cout << myQueue.dequeue() << std::endl;
    std::cout << myQueue.dequeue() << std::endl;
    myQueue.print();
}