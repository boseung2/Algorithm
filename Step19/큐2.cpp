#include<stdio.h>
#include<string.h>
#define MAX_QUEUE_SIZE 2000000

typedef int element;
typedef struct {
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} QueueType;

void init_queue(QueueType *q) {
    q->rear = -1;
    q->front = -1;
}

int empty(QueueType *q) {
    if(q->front == q->rear) {
        return 1;
    } else {
        return 0;
    }
}

void push(QueueType *q, int x) {
    q->data[++(q->rear)] = x;
}

int pop(QueueType *q) {
    if(empty(q)) {
        return -1;
    } else {
        return q->data[++(q->front)];
    }
}

int size(QueueType *q) {
    return q->rear - q->front;
}


int front(QueueType *q) {
    if(empty(q)) {
        return -1;
    } else {
        return q->data[q->front + 1];
    }
}

int back(QueueType *q) {
    if(empty(q)) {
        return -1;
    } else {
        return q->data[q->rear];
    }
}

int main(void) {
    QueueType q;
    int n, x;
    char order[6];

    init_queue(&q);
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%s", order);
        if(!strcmp(order, "push")) {
            scanf("%d", &x);
            push(&q, x);
        } else if(!strcmp(order, "pop")) {
            printf("%d\n", pop(&q));
        } else if(!strcmp(order, "size")) {
            printf("%d\n", size(&q));
        } else if(!strcmp(order, "empty")) {
            printf("%d\n", empty(&q));
        } else if(!strcmp(order, "front")) {
            printf("%d\n", front(&q));
        } else if(!strcmp(order, "back")) {
            printf("%d\n", back(&q));
        }
    }
}