/*comment*/
#include <stdio.h>
#include <string.h>
#define test "test (str / int)"
int main(){
    char ll[99];
    int s[10];
    char min[11];
    char max[100];
    strcpy(min,"allo");
    printf("%s",test);
    scanf(" %s/ %d", ll,&s);
    printf("coucou %s %d",ll,s);
     return(0);
}