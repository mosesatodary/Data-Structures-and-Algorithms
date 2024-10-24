#include <iostream>

// Node structure for the linked list
struct Node
{
    int Data;
    Node* Next;
};

// Stack class using linked list
class Stack
{
private:
    Node* Top;  // Pointer to the top of the stack

public:
    // Constructor to initialize the stack
    Stack() : Top(nullptr)
    {
    }

    // Destructor to clean up memory
    ~Stack()
    {
        while (!IsEmpty())
        {
            Pop();
        }
    }

    // Push an element onto the stack
    void Push(int value)
    {
        Node* newNode = new Node(); // Create a new node
        newNode->Data = value; // Set the node's value
        newNode->Next = Top; // Point to the previous top node
        Top = newNode; // Update the top pointer
    }

    // Remove the top element from the stack
    void Pop()
    {
        if (IsEmpty())
        {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        Node* temp = Top; // Store the top node
        Top = Top->Next; // Update the top pointer to the next node
        delete temp; // Delete the old top node
    }

    // Return the top element of the stack
    int GetTop() const
    {
        if (IsEmpty())
        {
            std::cerr << "Stack is empty." << std::endl;
            return -1; // Return an invalid value if the stack is empty
        }
        return Top->Data; // Return the top node's data
    }

    // Check if the stack is empty
    bool IsEmpty() const
    {
        return Top == nullptr;
    }

    // Print the stack elements
    void PrintStack() const
    {
        Node* current = Top;
        while (current != nullptr)
        {
            std::cout << current->Data << " ";
            current = current->Next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    Stack stack;

    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    std::cout << "Elements pushed onto the stack: 10, 20, 30" << std::endl;

    std::cout << "Stack: ";
    stack.PrintStack();

    if (stack.IsEmpty())
    {
        std::cout << "The stack is empty." << std::endl;
    } else
    {
        std::cout << "The stack is not empty." << std::endl;
    }

    std::cout << "Top element: " << stack.GetTop() << std::endl;

    stack.Pop();
    std::cout << "Stack after one pop: ";
    stack.PrintStack();

    stack.Pop();
    std::cout << "Stack after two pops: ";
    stack.PrintStack();

    stack.Pop();
    if (stack.IsEmpty())
    {
        std::cout << "The stack is now empty." << std::endl;
    }

    return 0;
}
