#include <stack>

class MyQueue {
public:
    std::stack<int> stack_in;
    std::stack<int> stack_out;

    MyQueue() {
       
    }

    void push(int x) {
        // Di chuyển tất cả các phần tử từ stack_out sang stack_in
        while (!stack_out.empty()) {
            stack_in.push(stack_out.top());
            stack_out.pop();
        }
        // Đẩy phần tử mới vào stack_in
        stack_in.push(x);
    }

    int pop() {
        // Di chuyển tất cả các phần tử từ stack_in sang stack_out
        while (!stack_in.empty()) {
            stack_out.push(stack_in.top());
            stack_in.pop();
        }
        // Lấy phần tử đầu tiên trong stack_out
        int i = stack_out.top();
        // Xóa phần tử đầu tiên trong stack_out
        stack_out.pop();
        return i;
    }

    int peek() {
        // Di chuyển tất cả các phần tử từ stack_in sang stack_out
        while (!stack_in.empty()) {
            stack_out.push(stack_in.top());
            stack_in.pop();
        }
        // Trả về phần tử đầu tiên trong stack_out mà không xóa nó
        return stack_out.top();
    }

    bool empty() {
        // Kiểm tra xem cả hai stack có rỗng hay không
        return stack_in.empty() && stack_out.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */