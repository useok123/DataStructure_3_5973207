#include <stdio.h>
#include <string.h>	//strlen 사용위함

int main() {
	char input[200];	//변수 배열
	printf("문자열을 입력하세요: ");
	scanf_s("%[^\n]s", input, (int)sizeof(input));	//문자열 입력
	int len = strlen(input);	//문자열 길이
	printf("문자열의 길이: %d\n", strlen(input));	//문자열 길이 출력
	for (int i = 0; i < len; i++) {	//반복
		if (input[i] >= 'a' && input[i] <= 'z') input[i] = input[i] - 32;	//아스키코드 활용, 소문자일 경우에 대문자로 변환
		else if (input[i] >= 'A' && input[i] <= 'Z') input[i] = input[i] + 32;	//아스키코드 활용, 대문자일 경우에 소문자로 변환
	}
	printf("변환된 문자열: ");
	printf("%s", input);	//변환된 문자열 출력.
}