#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int item)
{
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = item;
        printf("Pushed: %d\n", item);
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    int item = stack[top];
    top--;
    return item;
}

void display()
{
    int i;
    if (top == -1)
        printf("Stack is Empty\n");
    else
    {
        printf("Stack: ");
        for (i = 0; i <= top; i++)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main()
{
    int item, i;

    printf("--- Test 1: pop on empty stack ---\n");
    top = -1;
    item = pop();
    printf("Popped: %d\n", item);
    display();

    printf("\n--- Test 2: overflow (push 1 to 6) ---\n");
    top = -1;
    for (i = 1; i <= 6; i++)
        push(i);
    display();

    printf("\n--- Test 3: push, pop, push ---\n");
    top = -1;
    push(1);
    item = pop();
    printf("Popped: %d\n", item);
    push(2);
    display();

    return 0;
}
