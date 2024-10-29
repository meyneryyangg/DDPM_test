#include <stdio.h>
using namespace std;

int main() {
    printf("Hello, World!\n");
    return 0;
}

int function(int a, int b){
    return a + b;
}

int fun_a() {
    printf("Modified by User A\n");
}

int fun_b() {
    printf("Modified by User B\n");
    return 0;
}
