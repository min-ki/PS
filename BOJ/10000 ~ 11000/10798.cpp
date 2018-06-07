#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char board[16][16];

int main() {
	string s=""; // 답을 만들기위한 변수
	string temp; // 한줄 씩 입력받기위한 문자열 변수
	memset(board, -1, sizeof(board)); // board -1로 초기화
    
	for(int i=0; i<5; i++){
		cin >> temp; // 한 줄을 입력받는다.
		for(int j=0; j< temp.size(); j++){
			board[i][j] = temp[j]; // 입력받은 문자열의 크기만큼 board에 저장
		}
	}
    
	for(int j=0; j<15; j++){
		for(int i=0; i<5; i++){
			if(int(board[i][j]) != -1) // -1로 board를 초기해놨기때문에 저장된값이없다면 pass
				s+= board[i][j]; // 문자들을 계속해서 더해간다.
		}
	}
	printf("%s", s.c_str()); // 문자열을 출력해주기위해 c_str사용
	return 0;
}