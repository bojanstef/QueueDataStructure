//
//  Queue.hpp
//  QueueDataStructure
//
//  Created by Bojan Stefanovic on 2015-10-23.
//  Copyright © 2015 Bojan Stefanovic. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <iostream> // Shouldn't really have to "cout" values in implementation.

class Queue {

private:
    int back;           // Index of the last element in the queue.
    int size;           // The maximum size of the queue.
    int *queue;         // Underlying dynamically allocated array of the queue.
    
public:
    Queue();            // Default constructor (size=64).
    Queue(int size);    // Constructor with size parameter.
    ~Queue();           // Destructor.
    
    // MARK: - Queue methods.
    void enqueue(int element);
    int peek();
    void dequeue();
    bool isEmpty();
    
};

#endif /* Queue_hpp */
