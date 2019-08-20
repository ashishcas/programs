/*
  Evaluation Of postfix Expression in C++
  Input Postfix expression must be in a desired format.
  Operands must be integers and there should be space in between two operands.
  Only '+'  ,  '-'  , '*' and '/'  operators are expected.
*/
#include<bits/stdc++.h> // bits/stdc++.h is a header file which has all the other header files in it like algorithm.h and stack.h etc..,
using namespace std;

int main()
{
    string in; // input string from the user
    cout << "Enter a postfix expression: " << endl;
    getline(cin, in); // getting input from user using getline because its a string
    int op1, op2, result;
    stack<char> perform; // we are creating a stack perform  of char type

    int i=0;
    while (i < in.length()) // length is a stl function for length
    {
        if (isdigit(in[i]))
        {
            perform.push(in[i]- '0'); // if we get integer we are pushing it into stack
        }

        else
        {
          op2 = perform.top();
          perform.pop();
          op1 = perform.top();
          perform.pop();
          switch(perform.top())
          {
                  case '+': result = op1 + op2;
                  perform.push(result);
                  break;
                  case '-': result = op1 - op2;
                  perform.push(result);

                  break;
                  case '*': result = op1 * op2;
                  perform.push(result);

                  break;
                  case '/': result = op1 / op2;
                  perform.push(result);

                  break;
        }

        }
        i++;
    }

    while (!perform.empty())
    {
        cout << perform.top();
        perform.pop();
    }


    cout << " result "<<result<<endl;

    return 0;
}
