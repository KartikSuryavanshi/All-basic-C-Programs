/************************************************************
 C PRACTICE – PART 1
 TOPICS:
 1. Basics
 2. Operators
 3. Conditional Statements
 4. Loop-based Logic Problems
************************************************************/

#include <stdio.h>

/*----------------------------------------------------------
1. HELLO WORLD
----------------------------------------------------------*/
/*
int main() {
    printf("Hello World");
    return 0;
}
*/

/*----------------------------------------------------------
2. PRINT PERSONAL DETAILS
----------------------------------------------------------*/
/*
int main() {
    printf("Name: John\nAge: 20\nCollege: XYZ");
    return 0;
}
*/

/*----------------------------------------------------------
3. READ & PRINT INTEGER
----------------------------------------------------------*/
/*
int main() {
    int n;
    scanf("%d", &n);
    printf("You entered: %d", n);
    return 0;
}
*/

/*----------------------------------------------------------
4. ADD, SUBTRACT, MULTIPLY, DIVIDE
----------------------------------------------------------*/
/*
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a+b);
    printf("Diff = %d\n", a-b);
    printf("Product = %d\n", a*b);
    printf("Quotient = %d\n", a/b);
    return 0;
}
*/

/*----------------------------------------------------------
5. SWAP USING TEMP VARIABLE
----------------------------------------------------------*/
/*
int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
    return 0;
}
*/

/*----------------------------------------------------------
6. SWAP WITHOUT TEMP
----------------------------------------------------------*/
/*
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
    return 0;
}
*/

/*----------------------------------------------------------
7. EVEN OR ODD
----------------------------------------------------------*/
/*
int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
*/

/*----------------------------------------------------------
8. POSITIVE / NEGATIVE / ZERO
----------------------------------------------------------*/
/*
int main() {
    int n;
    scanf("%d", &n);
    if(n > 0)
        printf("Positive");
    else if(n < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}
*/

/*----------------------------------------------------------
9. LARGEST OF TWO NUMBERS
----------------------------------------------------------*/
/*
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("A is larger");
    else
        printf("B is larger");
    return 0;
}
*/

/*----------------------------------------------------------
10. LARGEST OF THREE NUMBERS
----------------------------------------------------------*/
/*
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
        printf("A is largest");
    else if(b > c)
        printf("B is largest");
    else
        printf("C is largest");
    return 0;
}
*/

/*----------------------------------------------------------
11. LEAP YEAR
----------------------------------------------------------*/
/*
int main() {
    int year;
    scanf("%d", &year);
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}
*/

/*----------------------------------------------------------
12. SIMPLE CALCULATOR (SWITCH)
----------------------------------------------------------*/
/*
int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("%d", a+b); break;
        case '-': printf("%d", a-b); break;
        case '*': printf("%d", a*b); break;
        case '/': printf("%d", a/b); break;
        default: printf("Invalid operator");
    }
    return 0;
}
*/

/*----------------------------------------------------------
13. PRINT 1 TO N
----------------------------------------------------------*/
/*
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}
*/

/*----------------------------------------------------------
14. SUM OF FIRST N NATURAL NUMBERS
----------------------------------------------------------*/
/*
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        sum += i;
    printf("Sum = %d", sum);
    return 0;
}
*/

/*----------------------------------------------------------
15. FACTORIAL
----------------------------------------------------------*/
/*
int main() {
    int n, fact = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %d", fact);
    return 0;
}
*/

/*----------------------------------------------------------
16. PRIME NUMBER CHECK
----------------------------------------------------------*/
/*
int main() {
    int n, flag = 1;
    scanf("%d", &n);

    if(n <= 1) flag = 0;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
*/

/*----------------------------------------------------------
17. PALINDROME NUMBER
----------------------------------------------------------*/
/*
int main() {
    int n, temp, rev = 0;
    scanf("%d", &n);
    temp = n;

    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
*/

/*----------------------------------------------------------
18. ARMSTRONG NUMBER
----------------------------------------------------------*/
/*
int main() {
    int n, temp, sum = 0, r;
    scanf("%d", &n);
    temp = n;

    while(n > 0) {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }

    if(sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
*/

/*----------------------------------------------------------
19. FIBONACCI SERIES
----------------------------------------------------------*/
/*
int main() {
    int n, a = 0, b = 1, c;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
*/

/*----------------------------------------------------------
END OF PART 1
----------------------------------------------------------*/
