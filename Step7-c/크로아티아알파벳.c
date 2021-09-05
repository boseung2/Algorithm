#include<stdio.h>
#include<string.h>
#define LEN 101

int main(void) {

    char input[LEN];
    char *text = input;
    char subtext[3];
    char croatia[8][3] = {"c=", "c-", "dz", "d-", "lj", "nj", "s=", "z="};
    char *croatiap[3] = croatia;

    for(int i=0; i<8; i++) {
        printf("%s\n", croatia[i]);
    }

    gets(input);
    int len = strlen(input);
    
    // 문자열 2개씩 자른다.
    // coatia배열과 일치하는지 확인
    // 1) dz와 같을때 다음 문자가 =인지 확인해서 맞으면 i+2
    // 2) dz와 같을때 다음 문자가 =가 아니면 암것도안함
    // 3) croatia배열 요소와 일치하면 i+1
    // 4) 모두 result++
    // 입력 마지막 세트인지확인
    // 마지막 세트인데 coratia배열이 아니면 result+2
    for(int i=0; i<len-1; i++) {
        strncpy(subtext, &text[i], 2);
        subtext[2] = '\0';

        printf("%s\n", subtext);
        
        for(int i=0; i<8; i++) {
            printf("subtext=%s, croatia[i]=%s", subtext, i, *croatiap[i]);
            if(subtext == croatia[i]) {
                printf("hello");
            }
        }
    }

}