#include<stdio.h>
#include<string.h>

#define SIZE 10000
typedef int element;
typedef struct {
    element data[SIZE];
    int top;
} StackType;

void init_stack(StackType *s) {
    s->top = -1;
}

int empty(StackType *s) {
    return (s->top == -1);
}

void push(StackType *s, element x) {
    s->data[++(s->top)] = x;
}

int pop(StackType *s) {
    if(empty(s)) {
        return -1;
    } else {
        return (s->data[(s->top)--]);
    }    
}

int size(StackType *s) {
    return s->top + 1;
}

int top(StackType *s) {
    if(empty(s)) {
        return -1;
    } else {
        return s->data[s->top];
    }
}



int main(void) {
    StackType s;
    int n, x;
    char order[6];

    init_stack(&s);
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%s", order);
        if(!strcmp(order, "push")) {
            scanf("%d", &x);
            push(&s, x);
        } else if(!strcmp(order, "pop")) {
            printf("%d\n", pop(&s));
        } else if(!strcmp(order, "size")) {
            printf("%d\n", size(&s));
        } else if(!strcmp(order, "empty")) {
            printf("%d\n", empty(&s));
        } else if(!strcmp(order, "top")) {
            printf("%d\n", top(&s));
        }
    }
}