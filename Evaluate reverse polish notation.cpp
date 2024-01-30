class Solution {
private:
    long performedOperation(long operand1,long operand2,char op) {
        switch (op) {
            case '+':
                return operand1 + operand2;
            case '-':
                return operand1 - operand2;
            case '*':
                return operand1 * operand2;
            case '/':
                return operand1 / operand2; 
            default:
                return 0;
        }
    }

    bool isOperator(char ch) {
        return ch == '+' || ch == '-' || ch == '*' || ch == '/';
    }

public:
    int evalRPN(vector<string>& tokens) {
    stack<long> Stack;
    for (const string& token : tokens) {
         if (token.size() == 1 && isOperator(token[0])) {
                long operand2 = Stack.top();
                Stack.pop();
                long operand1 = Stack.top();
                Stack.pop();
                Stack.push(performedOperation(operand1, operand2,token[0]));
            } 
         else 
         {
                Stack.push(stoi(token));
         }
      }

   return Stack.top();
        
    }
};
