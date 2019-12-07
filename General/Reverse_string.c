#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf ( "%s", a);
    for ( int i = (strlen(a)-1); i>-1; i--){
        printf ( "%c", a[i]);
    }
    return 0;
}
/*
Input:
321
Output:
123

*/
