/*
  Evaluation Of postfix Expression in C++
  Input Postfix expression must be in a desired format.
  Operands must be integers and there should be space in between two operands.
  Only '+'  ,  '-'  , '*' and '/'  operators are expected.
*/
#include <stdio.h>
#include <string.h>

  int top = -1;
  int stack[1000];

  /* push the given data into the stack */
  void pushstack(int num) {
        stack[++top] = num;
  }

  /* Pop the top element from the stack */
  int popstack() {
        int d;
        if (top == -1)
                return -1;
        d = stack[top];
        stack[top] = 0;
        top--;
        return (d);
  }

  int main() {
        char s[1000];
        int i, d = -1, op1, op2, result;
        /* Get the postfix expression from the user */
        printf("Enter ur postfix expression:");
        fgets(s, 100, stdin);
        for (i = 0; i < strlen(s); i++) {
                if (isdigit(s[i])) {
                        /*
                         * if the i/p char is digit, parse
                         * character by character to get
                         * complete operand
                         */
                        d = (d == -1) ? 0 : d;
                        d = (d * 10) + (s[i] - 48);
                        continue;
                }

                if (d != -1) {
                        /* if the i/p is operand, push it into the stack */
                        pushstack(d);
                }

                if (s[i] == '+' || s[i] == '-'
                        || s[i] == '*' || s[i] == '/') {
                        /*
                         * if the i/p is an operator, pop 2 elements
                         * from the stack and apply the operator
                         */
                        op2 = popstack();
                        op1 = popstack();
                        if (op1 == -1 || op2 == -1)
                                break;
                        switch (s[i]) {
                                case '+':
                                        result = op1 + op2;
                                        /* push the result into the stack */
                                        pushstack(result);
                                        break;
                                case '-':
                                        result = op1 - op2;
                                        pushstack(result);
                                        break;
                                case '*':
                                        result = op1 * op2;
                                        pushstack(result);
                                        break;
                                case '/':
                                        result = op1 / op2;
                                        pushstack(result);
                                        break;
                        }
                }
                d = -1;
        }
        if (top == 0)
                printf("The corresponding Output:%d\n", stack[top]);
        else
                printf("u have given wrong postfix expression\n");
        return 0;
  }
