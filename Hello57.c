// #include<stdio.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");
//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "w");
//     if(fptr == NULL) {
//         printf("file doesn't exist \n");
//     } else {
//         fclose(fptr);
//     }


//     return 0;
// }

// #include<stdio.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");
//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n", ch);

//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     int ch;
//     fscanf(fptr, "%d", &ch);
//     printf("character = %d \n", ch);
//     fscanf(fptr, "%d", &ch);
//     printf("character = %d \n", ch);
//     fscanf(fptr, "%d", &ch);
//     printf("character = %d \n", ch);

//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     FILE * fptr;
//     fptr = fopen("Test.txt","w");

//     fputc('M', fptr);
//     fputc('A', fptr);
//     fputc('N', fptr);
//     fputc('G', fptr);
//     fputc('O', fptr);

//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // printf("%c\n", fgetc(fptr));
//     // fprintf(fptr, "%c", 'M');
//     // fprintf(fptr, "%c", 'A');
//     // fprintf(fptr, "%c", 'N');
//     // fprintf(fptr, "%c", 'G');
//     // fprintf(fptr, "%c", 'O');

//     fclose(fptr);
//     return 0;
// }


#include<stdio.h>

int main() {
    FILE * fptr;
    fptr = fopen("Test.txt","r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}