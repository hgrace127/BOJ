#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MaxN 100	// N - cols
#define MaxM 100	// M - rows

typedef struct _QUEUE{
	int x;
	int y;
	int l;
}Queue;

int N, M;
int posX, posY, posL;
int rear = 0, front = 0;
char map[MaxN][MaxM];

// Queue는 공간 좌표와 횟수 카운트
void enqueue(Queue* que, int _x, int _y, int _l){
	que->x = _x;
	que->y = _y;
	que->l = _l;
}

void BFS(){
	Queue que[MaxM * MaxN];
	enqueue(que, 0, 0, 1);	// que 초기화

	posX = que[rear].x;
	posY = que[rear].y;
	posL = que[rear].l;		// 현재 X, Y
	map[posY][posX] = '0';
	while ((posX < M - 1 || posY < N - 1)){		// 0 ~ 99
		// Queue 이용
		// 상
		if ((posY - 1 >= 0) && map[posY - 1][posX] != '0'){		// index 0 이상, 방문한 공간은 체크						
			enqueue(&que[++rear], posX, posY - 1, posL + 1);
			map[posY - 1][posX] = '0';
		}
		// 하
		if ((posY + 1 < N) && map[posY + 1][posX] != '0'){
			enqueue(&que[++rear], posX, posY + 1, posL + 1);
			map[posY + 1][posX] = '0';
		}
		// 좌
		if ((posX - 1 >= 0) && map[posY][posX - 1] != '0'){
			enqueue(&que[++rear], posX - 1, posY, posL + 1);
			map[posY][posX - 1] = '0';
		}
		// 우
		if ((posX + 1 < M) && map[posY][posX + 1] != '0'){
			enqueue(&que[++rear], posX + 1, posY, posL + 1);
			map[posY][posX + 1] = '0';
		}
		front++;
		posX = que[front].x;
		posY = que[front].y;
		posL = que[front].l;
	}
	printf("%d\n", que[front].l);
}

int main(){
	int i, j;

	scanf("%d %d", &N, &M);		// cols, rows
	for (i = 0; i < N; i++){
		scanf("%s", map[i]);
	}
	BFS();
	return 0;
}