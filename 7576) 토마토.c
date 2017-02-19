#include <stdio.h>
#define MaxM 1000
#define MaxN 1000
int rear = 0; front = 0;

typedef struct _QUEUE {
	int x;
	int y;
	int day;
}QUEUE;

int** Allocation(int M, int N) {
	int** tomato = (int**)malloc(sizeof(int*) * M);
	for (int i = 0; i < N; i++) {
		tomato[i] = (int*)malloc(sizeof(int) * N);
	}
	return tomato;
}

int DayTomato(int* tomato[], int M, int N) {
	int i, j;
	QUEUE* que = QueueInit();
	// 토마토 입력
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &tomato[i][j]);
		}
	}

	BFS(que);
	
}

void BFS(QUEUE* que) {

}

QUEUE* QueueInit() {
	// 배열 선언 시 크기는 변수가 올 수 없다.(컴파일러마다 다름)
	QUEUE que[MaxM * MaxN];
	Enqueue(que, 0, 0, 0);
	return que;
}

QUEUE* Enqueue(QUEUE* que, int x, int y, int day) {
	que->x = x;
	que->y = y;
	que->day = day;
}

int main() {
	int day;
	int M, N;		// M - 가로, N - 세로
	scanf("%d %d", &M, &N);

	int** tomato = Allocation(M, N);
	int day = DayTomato(tomato, M, N);
	
	printf("%d", day);
	return 0;
}