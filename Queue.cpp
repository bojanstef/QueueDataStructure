//
//  Queue.cpp
//  QueueDataStructure
//
//  Created by Bojan Stefanovic on 2015-10-23.
//  Copyright © 2015 Bojan Stefanovic. All rights reserved.
//

#include "Queue.hpp"

// MARK: - Default constructor
Queue::Queue() {
    int default_size = 64;
    this->back = -1;
    this->size = default_size;
    this->queue = new int[default_size];
}

// MARK: - Constructor with size parameter
Queue::Queue(int size) {
    if (size < 1) {
        std::cout << "Queue size must be at least 1.\n";
        // TODO: - This should throw an exception, and not allow instantiation.
    }
    this->back = -1;
    this->size = size;
    this->queue = new int[size];
}

// MARK: - Destructor
Queue::~Queue() {
    delete [] queue;
}

// MARK: - Method implementations

/*  
 *  If queue is full, do nothing.
 *  Add an element to the back of the queue,
 *  Increment the back 1 space.
 */
void Queue::enqueue(int element) {
    if (back == size) {
        std::cout << "Full queue. ";
    }
    else {
        back++;
        queue[back] = element;
    }
}

int Queue::peek() {
    if (back == -1) {
        std::cout << "Queue's empty. ";
        return -1;
    }
    else {
        return queue[0];
    }
}

void Queue::dequeue() {
    if (back == -1) {
        std::cout << "Empty queue. ";
    }
    else {
        for (int i = 0; i <= back; i++) {
            queue[i] = queue[i+1];    
        }
        back--;
    }
}

bool Queue::isEmpty() {
    if (back == -1) {
        return true;
    }
    return false;
}

/* A visual explanation for myself.
 
 Queue:
 b - back
 s - spot
 f - front
 
   s s s b/f
 | 0 0 0 0 |
 
        enqueue       enqueue
          s s b f       s b s f
        | 0 0 0 a |   | 0 0 b a |
 
        dequeue       dequeue
          s b s f       s s b f
        | 0 d c b |   | 0 0 d c |
 
 */
