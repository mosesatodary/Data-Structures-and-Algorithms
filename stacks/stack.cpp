#include <iostream>
#include <stack>  // Include the stack library

int main() {
    // Create a stack of integers
    std::stack<int> stack;

    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Elements pushed onto the stack: 10, 20, 30" << std::endl;

    // Check if the stack is empty
    if (stack.empty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl;
    }

    // Access the top element
    std::cout << "Top element: " << stack.top() << std::endl;

    // Pop elements from the stack
    stack.pop();
    std::cout << "Top element after one pop: " << stack.top() << std::endl;
    
    stack.pop();
    std::cout << "Top element after two pops: " << stack.top() << std::endl;

    // Pop the last element
    stack.pop();

    // Check if the stack is empty again
    if (stack.empty()) {
        std::cout << "The stack is now empty." << std::endl;
    }

    return 0;
}
