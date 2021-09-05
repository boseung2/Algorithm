#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_DEQUE_SIZE 10000

typedef int element;
typedef struct {
    int front;
    int rear;
    element data[MAX_DEQUE_SIZE];
} DequeType;

void init_deque(DequeType *q) {
    q->rear = q->front = 0;
}

void error(char *message) {
    fprintf(stderr, "%s", message);
    exit(1);
}

int empty(DequeType *q) {
    return q->front == q->rear;
}

int full(DequeType *q) {
    return ((q->rear+1) % MAX_DEQUE_SIZE == q->front);
}

int front(DequeType *q) {
    if(empty(q)) {
        return -1;
    } else {
        return q->data[(q->front+1)%MAX_DEQUE_SIZE];
    }
}

int back(DequeType *q) {
    if(empty(q)) {
        return -1;
    } else {
        return q->data[q->rear];
    }
}

void push_front(DequeType *q, int x) {
    if(full(q)) error("덱이 가득찼습니다");
    q->data[q->front] = x;
    q->front = (q->front - 1 + MAX_DEQUE_SIZE)%MAX_DEQUE_SIZE;
}

void push_back(DequeType *q, int x) {
    if(full(q)) error("덱이 가득찼습니다.");
    q->rear = (q->rear + 1) % MAX_DEQUE_SIZE;
    q->data[q->rear] = x;
}

int pop_front(DequeType *q){
    if(empty(q)) return -1;
    element value = front(q);
    q->front = (q->front + 1) % MAX_DEQUE_SIZE;
    return value;
}

int pop_back(DequeType *q) {
    if(empty(q)) return -1;
    element value = q->data[q->rear];
    q->rear = (q->rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
    return value;
}

int size(DequeType *q) {
    int size = q->rear - q->front;
    return size >= 0 ? size : size + MAX_DEQUE_SIZE;
}


int main(void) {
    DequeType q;
    int n, x;
    char order[12];

    init_deque(&q);
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%s", order);
        if(!strcmp(order, "push_front")) {
            scanf("%d", &x);
            push_front(&q, x);
        } else if(!strcmp(order, "push_back")) {
            scanf("%d", &x);
            push_back(&q, x);
        } else if(!strcmp(order, "pop_front")) {
            printf("%d\n", pop_front(&q));
        } else if(!strcmp(order, "pop_back")) {
            printf("%d\n", pop_back(&q));
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