#include <stdio.h>


int main (int argc, char* argv[]) {
    if (argc > 1) {
        if (fopen(argv[1],"r") == NULL) {
            printf("%s: неудача при попытке открыть файл %s",argv[0],argv[1]);
        }
        else {
            printf("%s: файл %s открыт",argv[0],argv[1]);
        }
    } else {
        printf("открываемый файл не указан");
    }

    return 0;
}
