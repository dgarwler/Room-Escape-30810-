#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#Include <windows.h>

#define TRUE 1
#define FALSE 0 
void intro();
void room();
void Bookcase();	
void Bed();		 
void Closet();	
void door_a piece of key();

int main() {
	int menu;
	
	while(1) {
		printf("ROOM ESCAPE VER 1.0\n\n");
		printf("1. 입장\n");
		printf("0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("입력 오류\n\n");
				break;
		}
	return 0;
	}
	

