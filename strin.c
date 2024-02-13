#include <stdio.h>
#include <stdlib.h>

char *strin() {
    printf("Enter a string: ");
    
    char *str = NULL;
    size_t size = 0;

    char c;
    int i = 0;
    while (1) {
        c = getc(stdin);
        if(c == EOF || c == '\n')
            break;
        
        size++;
        str = realloc(str, size * sizeof(char));
        *(str + i) = c;
        i++;
    }
    return str;
}

int main() {
    char *str = strin();
    printf("Entered string: %s\n", str);
    free(str);
}