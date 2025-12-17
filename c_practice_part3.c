/************************************************************
 C PRACTICE – PART 3
 TOPICS:
 1. 2D Arrays (Matrix Programs)
 2. String Programs
************************************************************/

#include <stdio.h>
#include <string.h>

/*==========================================================
                 2D ARRAY / MATRIX PROGRAMS
==========================================================*/

/*----------------------------------------------------------
1. MATRIX INPUT AND OUTPUT (2x2)
----------------------------------------------------------*/
/*
int main() {
    int a[2][2];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
*/

/*----------------------------------------------------------
2. ADDITION OF TWO MATRICES
----------------------------------------------------------*/
/*
int main() {
    int a[2][2], b[2][2], sum[2][2];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
*/

/*----------------------------------------------------------
3. MATRIX MULTIPLICATION (2x2)
----------------------------------------------------------*/
/*
int main() {
    int a[2][2], b[2][2], mul[2][2] = {0};

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}
*/

/*----------------------------------------------------------
4. TRANSPOSE OF MATRIX
----------------------------------------------------------*/
/*
int main() {
    int a[2][2];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
    return 0;
}
*/

/*----------------------------------------------------------
5. SUM OF DIAGONAL ELEMENTS
----------------------------------------------------------*/
/*
int main() {
    int a[2][2], sum = 0;

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 2; i++)
        sum += a[i][i];

    printf("Diagonal Sum = %d", sum);
    return 0;
}
*/

/*==========================================================
                 STRING PROGRAMS
==========================================================*/

/*----------------------------------------------------------
6. READ AND PRINT STRING
----------------------------------------------------------*/
/*
int main() {
    char str[50];
    scanf("%s", str);
    printf("%s", str);
    return 0;
}
*/

/*----------------------------------------------------------
7. STRING LENGTH WITHOUT strlen
----------------------------------------------------------*/
/*
int main() {
    char str[50];
    int len = 0;

    scanf("%s", str);
    while(str[len] != '\0')
        len++;

    printf("Length = %d", len);
    return 0;
}
*/

/*----------------------------------------------------------
8. COPY STRING WITHOUT strcpy
----------------------------------------------------------*/
/*
int main() {
    char str1[50], str2[50];
    int i = 0;

    scanf("%s", str1);
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied String = %s", str2);
    return 0;
}
*/

/*----------------------------------------------------------
9. REVERSE STRING
----------------------------------------------------------*/
/*
int main() {
    char str[50];
    int len, i;

    scanf("%s", str);
    len = strlen(str);

    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
*/

/*----------------------------------------------------------
10. PALINDROME STRING
----------------------------------------------------------*/
/*
int main() {
    char str[50];
    int i, len, flag = 1;

    scanf("%s", str);
    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
*/

/*----------------------------------------------------------
11. COUNT VOWELS AND CONSONANTS
----------------------------------------------------------*/
/*
int main() {
    char str[50];
    int i, vowels = 0, consonants = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
        else
            consonants++;
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}
*/

/*----------------------------------------------------------
12. STRING COMPARISON WITHOUT strcmp
----------------------------------------------------------*/
/*
int main() {
    char str1[50], str2[50];
    int i = 0, flag = 1;

    scanf("%s %s", str1, str2);

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if(flag)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}
*/

/*----------------------------------------------------------
13. COUNT WORDS IN STRING
----------------------------------------------------------*/
/*
int main() {
    char str[100];
    int i, count = 1;

    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }

    printf("Words = %d", count);
    return 0;
}
*/

/*----------------------------------------------------------
END OF PART 3
----------------------------------------------------------*/
