/*
 * Postfix Evaluation
 * Language: C++
 */

#include <bits/stdc++.h>

using namespace std;

bool Operator(char c);


int perform(int oper1, int oper2, char op);


int main()
{
    char a[1000], b[15];
    int i,op1, op2, len, j, x;
    stack<int> s;
    cout<<"enter the post fix expression"<<endl;
    gets(a);
    len = strlen(a);
    j = 0;
    for(i=0; i<len;i++){

        if(a[i]>='0' && a[i]<='9'){
            b[j++] = a[i];
        }
        else if(a[i]==' '){
            if(j>0){
                b[j] = '\0';
                x = atoi(b);
                s.push(x);
                j = 0;
            }
        }

        else if(Operator(a[i])){
            op1 = s.top();
            s.pop();
            op2 = s.top();
            s.pop();
            s.push(perform(op1, op2, a[i]));
        }
    }

   cout<<"result is: "<<s.top();

    return 0;
}
bool Operator(char ch)
{
    if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
        return true;
    else
        return false;
}


int perform(int op1, int op2, char op)
{
    int ans;
    switch(op){
    case '+':
        ans = op2 + op1;
        break;
    case '-':
        ans = op2 - op1;
        break;
    case '*':
        ans = op2 * op1;
        break;
    case '/':
        ans = op2 / op1;
        break;
    }
    return ans;
}
