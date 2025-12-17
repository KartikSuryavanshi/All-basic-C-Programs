/************************************************************
 C PRACTICE – PART 4
 TOPICS:
 1. Functions (All Types)
 2. Recursion
************************************************************/

#include <stdio.h>

/*==========================================================
                 FUNCTION PROGRAMS
==========================================================*/

/*----------------------------------------------------------
1. FUNCTION WITH NO ARGUMENTS, NO RETURN
----------------------------------------------------------*/
/*
void greet() {
    printf("Hello from function");
}

int main() {
    greet();
    return 0;
}
*/

/*----------------------------------------------------------
2. FUNCTION WITH ARGUMENTS, NO RETURN
----------------------------------------------------------*/
/*
void add(int a, int b) {
    printf("Sum = %d", a + b);
}

int main() {
    add(10, 20);
    return 0;
}
*/

/*----------------------------------------------------------
3. FUNCTION WITH ARGUMENTS AND RETURN VALUE
----------------------------------------------------------*/
/*
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 7);
    printf("Sum = %d", result);
    return 0;
}
*/

/*----------------------------------------------------------
4. CALL BY VALUE
----------------------------------------------------------*/
/*
void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    printf("a = %d", a);
    return 0;
}
*/

/*----------------------------------------------------------
5. CALL BY REFERENCE
----------------------------------------------------------*/
/*
void change(int *x) {
    *x = 100;
}

int main() {
    int a = 10;
    change(&a);
    printf("a = %d", a);
    return 0;
}
*/

/*----------------------------------------------------------
6. FACTORIAL USING FUNCTION
----------------------------------------------------------*/
/*
int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}
*/

/*==========================================================
                 RECURSION PROGRAMS
==========================================================*/

/*----------------------------------------------------------
7. RECURSIVE FACTORIAL
----------------------------------------------------------*/
/*
int fact(int n) {
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}
*/

/*----------------------------------------------------------
8. RECURSIVE FIBONACCI
----------------------------------------------------------*/
/*
int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        printf("%d ", fib(i));
    return 0;
}
*/

/*----------------------------------------------------------
9. RECURSIVE GCD
----------------------------------------------------------*/
/*
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("GCD = %d", gcd(a, b));
    return 0;
}
*/

/*----------------------------------------------------------
10. POWER USING RECURSION
----------------------------------------------------------*/
/*
int power(int a, int b) {
    if(b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Power = %d", power(a, b));
    return 0;
}
*/

/*----------------------------------------------------------
END OF PART 4
----------------------------------------------------------*/
