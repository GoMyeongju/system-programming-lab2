#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <search.h>

struct student{
	char *name;
	int middle;
	int final;
};

struct student *root = NULL;

int compare(const void *cp1, const void *cp2){

	return strcmp(((struct student *)cp1)->name,((struct student *)cp2) -> name);
}

void print_node(const void *, VISIT, int);

int main(){

	int n = 0;

	int stdcount;

	printf("학생 수를 입력하세요. : ");
	scanf("%d", &stdcount);
	struct student *root = NULL;
	char *nameptr = malloc(sizeof(char) *stdcount);
	struct student *st = malloc(sizeof(struct student) *stdcount);
	struct student **ret;

	while(scanf("%s%d%d", nameptr, &st->middle, &st->final) != EOF && n++ < stdcount){
		st -> name = nameptr;

		ret = (struct student **) tsearch((void *)st, (void **) &root, compare);
		printf("\"%s\" 님이 ", (*ret)->name);
		if(*ret == st){
			printf("트리에 추가되었습니다.");
		}
		else
			printf("이미 존재합니다.");

		nameptr += strlen(nameptr) + 1;
		st++;

	}
	twalk((void *)root, print_node);
}

void print_node(const void *st, VISIT order, int level){
	if(order == preorder || order == leaf)
		printf("이름 : %s, 중간 점수 : %d, 기말 점수 : %d\n", (*(struct student **)st)->name, (*(struct student **)st)-> middle, (*(struct student **)st)->final);
}
