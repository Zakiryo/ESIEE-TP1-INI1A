#include <stdio.h>

int add(int a, int b);

void add_and_print(int a, int b);

int fact(int n);

int loopFact(int n);

int expo(int a, int b);

int loopExpo(int a, int b);

void print_n_char(char c, unsigned int n);

void loopPrint_n_char(char c, unsigned int n);

void pyra_1(unsigned int n);

void loopPyra_1(unsigned int n);

void pyra_2(unsigned int n);

void loopPyra_2(unsigned int n);

void pyra_3(unsigned int n);

void loopPyra_3(unsigned int n);

void pyra_rec(unsigned int n, unsigned int k);

void loopPyra_rec(unsigned int n, unsigned int k);

int main(void) {
    printf("%d\n", add(5, 5));
    add_and_print(5, 5);
    printf("%d\n", fact(5));
    printf("%d\n", loopFact(5));
    printf("%d\n", expo(2, 2));
    printf("%d\n", loopExpo(2, 2));
    pyra_1(4);
    loopPyra_1(4);
    pyra_2(4);
    loopPyra_2(4);
    pyra_3(4);
    loopPyra_3(4);
    return 0;
}

int add(const int a, const int b) {
    return a + b;
}

void add_and_print(const int a, const int b) {
    printf("%d\n", a + b);
}

int fact(const int n) {
    if (n > 1) {
        return n * fact(n - 1);
    }
    return 1;
}

int loopFact(const int n) {
    int result = 1;
    for (int i = n; i >= 1; i--) {
        result *= i;
    }
    return result;
}

int expo(const int a, const int b) {
    if (b < 0)
        return 1 / expo(a, -b);
    if (b > 0)
        return a * expo(a, b - 1);
    return 1;
}

int loopExpo(const int a, const int b) {
    int result = a;
    for (int i = b; i > 1; i--) {
        result *= a;
    }
    return result;
}

void print_n_char(const char c, const unsigned int n) {
    if (n > 0) {
        printf("%c", c);
        print_n_char(c, n - 1);
    }
}

void loopPrint_n_char(const char c, const unsigned int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
}

void pyra_1(const unsigned int n) {
    if (n > 0) {
        print_n_char('*', n);
        printf("\n");
        pyra_1(n - 1);
    }
}

void loopPyra_1(const unsigned int n) {
    for (int i = n; i > 0; i--) {
        loopPrint_n_char('*', i);
        printf("\n");
    }
}

void pyra_2(const unsigned int n) {
    if (n > 0) {
        pyra_2(n - 1);
        print_n_char('*', n);
        printf("\n");
    }
}

void loopPyra_2(const unsigned int n) {
    for (int i = 1; i < n + 1; i++) {
        loopPrint_n_char('*', i);
        printf("\n");
    }
}

void pyra_3(const unsigned int n) {
    pyra_rec(n, n);
}

void loopPyra_3(const unsigned int n) {
    loopPyra_rec(n, n);
}

void pyra_rec(const unsigned int n, const unsigned int k) {
    if (k > 0) {
        pyra_rec(n, k - 1);
        print_n_char(' ', n - k);
        print_n_char('*', 2 * k - 1);
        printf("\n");
    }
}

void loopPyra_rec(const unsigned int n, const unsigned int k) {
    for (int i = 1; i < k + 1; i++) {
        loopPrint_n_char(' ', n - i);
        loopPrint_n_char('*', 2 * i - 1);
        printf("\n");
    }
}
