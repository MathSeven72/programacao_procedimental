#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

char *superscriptinteger(char *buffer, int n){
                            /*    0         1         2         3         4    */
    char superscript[10][4] = {"\u2070", "\u00B9", "\u00B2", "\u00B3", "\u2074",
                               "\u2075", "\u2076", "\u2077", "\u2078", "\u2079"};
                            /*    5         6         7         8         9    */
    int digit;
    static bool finished = true;
    
    if (n == 0 && finished){
        sprintf(buffer, "%.3s", superscript[0]);
        return buffer;
    }
    
    if (finished) {
        buffer[0] = '\0';
        finished = false;
    }
    
    if (n < 0){
        strcat(buffer, "\u207B"); // sinal negativo -
        n = -n;
    }
    
    if (n > 0){
        digit = n % 10;
        superscriptinteger(buffer, n/10);
        strcat(buffer, superscript[digit]);
    }
    
    if (n == 0){
        finished = true;
    }
    
    return buffer;
}

int main(){
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif    
    char expoente[22];
    
    superscriptinteger(expoente, 1234);
    printf("%s\n", expoente);
    
    superscriptinteger(expoente, -1234);
    printf("%s\n", expoente);
    
    superscriptinteger(expoente, 0);
    printf("%s\n", expoente);
    
    printf("%d%s = %d\n", 2, superscriptinteger(expoente, 12), (int)pow(2, 12));
    

    return 0;
}