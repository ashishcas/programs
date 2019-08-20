using namespace std;

class stack{
    int a[105];
    int top ;
    public :
    stack()
    {
        top = 0;
    }
    void push(int x)
    {
        //cout<<char(x)<<endl;
        a[top++] = x;
    }
    int pop()
    {
        if(!top)    return -1;
        //cout<<char(a[top-1])<<endl;
        return a[--top];
    }
};


int main()
{
    int t;

    for(scanf("%d",&t);t--;){

        char s[105];
        int flag = 1;
        stack st;

        scanf("%s",s);

        for(int i=0;s[i]&&flag;i++){
            switch(s[i]){
                case '(':
                case '{':
                case '[':
                    st.push(s[i]);
                    break;
                case ')':
                    if(st.pop()!='(')
                        flag = 0;
                    break;
                case '}':
                    if(st.pop()!='{')
                        flag = 0;
                    break;
                case ']':
                    if(st.pop()!='[')
                        flag = 0;
                    break;
                default :
                    flag = 0;
                    break;
            }
        }

        if(st.pop()!=-1)    flag = 0;

        printf("%s\n",(flag?"balanced":"not balanced"));
    }
    return 0;
}
