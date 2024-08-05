#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100


int isoperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

void reversestring(char* str) {
	int i,j;
    int length = strlen(str);
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
void infixtoprefix(char* infix, char* prefix) {
    reversestring(infix);

    char stack[MAX_SIZE];
    int top = -1;
    int i, j;
    i = j = 0;

    while (infix[i] != '\0') {
        char val = infix[i];

        if (val == ')') {
            stack[++top] = val;
        } else if (val == '(') {
            while (top != -1 && stack[top] != ')') {
                prefix[j++] = stack[top--];
            }
            if (top != -1 && stack[top] == ')') {
                top--;
            }
        } else if (isoperator(val)) {
            while (top != -1 && precedence(stack[top]) >= precedence(val)) {
                prefix[j++] = stack[top--];
            }
            stack[++top] = val;
        } else {
            prefix[j++] = val;
        }
        i++;
    }

    while (top != -1) {
        prefix[j++] = stack[top--];
    }

    prefix[j] = '\0';
    reversestring(prefix);
}

int main() {
    char infix[MAX_SIZE];
    char prefix[MAX_SIZE];

    printf("Enter an expression: ");
    gets(infix);

    infixtoprefix(infix, prefix);
    printf("The prefix expression is: %s\n", prefix);

    return 0;
}

