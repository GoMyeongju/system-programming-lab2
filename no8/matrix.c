#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int i, j;
	int x, y;
	int **arr_1, **arr_2, **arr_sum;

	printf("arr[x][y]에서 x와 y의 값을 입력하세요.\n");
	scanf("%d %d", &x, &y);

	arr_1 = (int **)malloc(sizeof(int *) * x);
	arr_2 = (int **)malloc(sizeof(int *) * x);
	arr_sum = (int **)malloc(sizeof(int *) * x);

	for(i = 0; i < x; i++){
		arr_1[i] = (int *)malloc(sizeof(int) * y);
		arr_2[i] = (int *)malloc(sizeof(int) * y);
		arr_sum[i] = (int *)malloc(sizeof(int) * y);
	}

	printf("생성 완료!\n");

	printf("값을 입력해주세요.\n");
	printf("첫번째 행렬\n"); 
	for(i = 0; i < x; i++){
		for(j = 0; j <y; j ++){
			scanf("%d", &arr_1[i][j]);
		}
	}

	printf("두번째 행렬\n");
	for(i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			scanf("%d", &arr_2[i][j]);
		}
	}

	printf("두 행렬간의 덧셈을 진행합니다.\n덧셈 결과\n");
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			arr_sum[i][j] = arr_1[i][j] + arr_2[i][j];
			printf("%2d", arr_sum[i][j]);
		}
		printf("\n");
	}


	for(i = 0; i < x; i++){
		free(arr_1[i]);
		free(arr_2[i]);
		free(arr_sum[i]);
	}
	free(arr_1);
	free(arr_2);
	free(arr_sum);

	return 0;
}

