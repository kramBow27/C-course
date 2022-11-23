#include <stdio.h>
#include <string.h>

int main() {

    

    char string1[] = "Bro";
    char string2[] = "Code";
    int result = strlen(string1);
    int resultb = strcmp(string1, string2);
    int resultc = strncmp(string1, string2, 1);
    int resultd = strcmpi(string1, string1);
    int resulte = strnicmp(string1, string1, 1);

    printf("\n%s",strlwr(string1)); //LOWER CASE 
    printf("\n%s",strupr(string1)); //UPPER CASE
    printf("\n%s",strcat(string1, string2)); //concat
    printf("\n%s",strncat(string1, string2, 1)); //append n characters from string2 to string1
    printf("\n%s",strcpy(string1, string2)); //copy string2 to string1
    printf("\n%s", strncpy(string1, string2, 4)); // copy n characters of strign2 to string1 */
    printf("\n%s", strset(string1, '?'));
    printf("\n%s", strnset(string1, 'x', 1));
    printf("\n%s", strrev(string1));
    return 0;
}