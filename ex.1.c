#include <stdio.h>
int main(void)
{
    char c;
    int nl,nw,state;
    nl=nw=state=0;
    printf("putin:");
    while((c=getchar())!='\n'){
    if(c=='a'||c=='A')
    ++nl;
    else if(c=='0')
    ++nw;
    else 
    state++;
    }
    printf("The number of a is:%d\n and the number of 0 is:%d\n",nl,nw);
    return 0;
}