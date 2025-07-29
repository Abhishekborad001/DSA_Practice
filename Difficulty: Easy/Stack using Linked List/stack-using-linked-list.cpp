class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        StackNode* newnode = new StackNode(x);
        newnode -> next = top;
        top = newnode;
    }

    int pop() {
        
        if(top == NULL) return -1;
        int result = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;
        
        return result;
        
    }

    MyStack() { top = NULL; }
};