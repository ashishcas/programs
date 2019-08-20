%{

#include<bits/stdc++.h>


//using namespace std;

}%

%{

  char a[1000];

%};

%%

"begin" {printf("code-1  value- \n");}
"end"   {printf("code-2  value- \n");}
"if" {printf("code-3  value- \n");}
"else" {printf("code-4  value- \n");}
"then" {printf("code-5  value- \n");}
[A-Z]*[a-z]* {printf("code-6  value-sym_tab_ptr \n");}
[0-9][0-9]* {printf("code-7  value-sym_tab_ptr \n");}
"==" {printf("code-8  value-1 \n");}
"!=" {printf("code-8  value-2 \n");}
">=" {printf("code-8  value-3 \n");}
"<=" {printf("code-8  value-4 \n");}
"<" {printf("code-8  value-5 \n");}
">" {printf("code-8  value-6 \n");}

%%

int main(argc, argv)
{
yyle(x);



return 0;
}
