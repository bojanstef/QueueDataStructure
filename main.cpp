//
//  main.cpp
//  QueueDataStructure
//
//  Created by Bojan Stefanovic on 2015-10-23.
//  Copyright © 2015 Bojan Stefanovic. All rights reserved.
//

#include <iostream>
#include "Queue.hpp"

int main(int argc, const char * argv[]) {

    Queue my_queue = Queue(5);
    
    while (true) {
        std::cout << "For a 6 person queue: enqueue, dequeue, peek, quit? e/d/p/q: ";
        char choice;
        std::cin >> choice;
        
        if (choice == 'e') {
            std::cout << "Enter a number: ";
            int number;
            std::cin >> number;
            my_queue.enqueue(number);
        }
        else if (choice == 'd') {
            my_queue.dequeue();
        }
        else if (choice == 'p') {
            std::cout << "Front of queue is: " << my_queue.peek() << std::endl;
        }
        else if (choice == 'q') {
            std::cout << std::endl;
            break;
        }
        else {
            std::cout << "Try again... " << std::endl;
        }
    }
    
    /*
    int queue_size = 5;
    Queue my_queue = Queue(queue_size);
    
    for (int i = 0; i <= 5; i++) {
        my_queue.enqueue(i);
    }
    
    for (int j = 0; j <= 6; j++) {
        std::cout << "Front of queue: " << my_queue.peek() << std::endl;
        my_queue.dequeue();
    }
    */
    
    return 0;
}
