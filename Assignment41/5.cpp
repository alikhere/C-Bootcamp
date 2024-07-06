#include <iostream>
#include <stack>
#include <vector>

int main() {
    // Create stack1 and push some integers onto it
    std::stack<int> stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);

    // To copy stack1 to stack2 in the same order, we need to use an auxiliary structure
    std::vector<int> temp;

    // Transfer elements from stack1 to the vector temp
    while (!stack1.empty()) {
        temp.push_back(stack1.top());
        stack1.pop();
    }

    // Create stack2 and push elements from temp to stack2 in reverse order
    std::stack<int> stack2;
    for (auto it = temp.rbegin(); it != temp.rend(); ++it) {
        stack2.push(*it);
    }

    // Display elements of stack2 to verify the order
    std::cout << "Elements in stack2: ";
    while (!stack2.empty()) {
        std::cout << stack2.top() << " ";
        stack2.pop();
    }

    return 0;
}
