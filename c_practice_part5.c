/************************************************************
 C PRACTICE – PART 5 (FINAL)
 TOPICS:
 1. Pointers
 2. Structures
 3. File Handling
 4. Mini Programs
************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*==========================================================
                    POINTER PROGRAMS
==========================================================*/

/*----------------------------------------------------------
1. BASIC POINTER EXAMPLE
----------------------------------------------------------*/
/*
int main() {
    int a = 10;
    int *p = &a;
    printf("Value = %d", *p);
    return 0;
}
*/

/*----------------------------------------------------------
2. POINTER AND ARRAY
----------------------------------------------------------*/
/*
int main() {
    int a[5] = {1,2,3,4,5};
    int *p = a;

    for(int i = 0; i < 5; i++)
        printf("%d ", *(p+i));

    return 0;
}
*/

/*----------------------------------------------------------
3. SWAP USING POINTERS
----------------------------------------------------------*/
/*
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swap: %d %d", x, y);
    return 0;
}
*/

/*----------------------------------------------------------
4. DYNAMIC MEMORY (malloc)
----------------------------------------------------------*/
/*
int main() {
    int *p;
    p = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++)
        p[i] = i + 1;

    for(int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}
*/

/*==========================================================
                 STRUCTURE PROGRAMS
==========================================================*/

/*----------------------------------------------------------
5. BASIC STRUCTURE
----------------------------------------------------------*/
/*
struct student {
    int id;
    char name[20];
};

int main() {
    struct student s;
    scanf("%d %s", &s.id, s.name);
    printf("ID=%d Name=%s", s.id, s.name);
    return 0;
}
*/

/*----------------------------------------------------------
6. ARRAY OF STRUCTURES
----------------------------------------------------------*/
/*
struct student {
    int id;
    char name[20];
};

int main() {
    struct student s[2];

    for(int i = 0; i < 2; i++)
        scanf("%d %s", &s[i].id, s[i].name);

    for(int i = 0; i < 2; i++)
        printf("\n%d %s", s[i].id, s[i].name);

    return 0;
}
*/

/*==========================================================
                 FILE HANDLING PROGRAMS
==========================================================*/

/*----------------------------------------------------------
7. WRITE TO FILE
----------------------------------------------------------*/
/*
int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello File");
    fclose(fp);
    return 0;
}
*/

/*----------------------------------------------------------
8. READ FROM FILE
----------------------------------------------------------*/
/*
int main() {
    FILE *fp;
    char ch;
    fp = fopen("data.txt", "r");

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}
*/

/*==========================================================
                 MINI PROJECTS
==========================================================*/

/*----------------------------------------------------------
9. NUMBER GUESSING GAME
----------------------------------------------------------*/
/*
int main() {
    int secret = 7, guess;

    do {
        printf("Guess the number: ");
        scanf("%d", &guess);
    } while(guess != secret);

    printf("Correct Guess!");
    return 0;
}
*/

/*----------------------------------------------------------
10. SIMPLE MENU-DRIVEN PROGRAM
----------------------------------------------------------*/
/*
int main() {
    int choice, a, b;

    while(1) {
        printf("\n1.Add\n2.Subtract\n3.Exit\n");
        scanf("%d", &choice);

        if(choice == 3)
            break;

        scanf("%d %d", &a, &b);

        switch(choice) {
            case 1: printf("Sum = %d", a + b); break;
            case 2: printf("Diff = %d", a - b); break;
            default: printf("Invalid");
        }
    }
    return 0;
}
*/

/*----------------------------------------------------------
END OF PART 5 – YOU COMPLETED CORE C PROGRAMMING
----------------------------------------------------------*/
