#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputGrade(int grade[13]){
    for(int i = 0; i < 13; i++){
        scanf("%d", &grade[i]);
    }
}

int avarageScore(int grade[13]){
    float sum = 0;
    for(int i = 0; i < 13; i++){
        sum += grade[i];
    }
    return sum / 13;
}

void printScores(char name[10], int grades[13]){
    printf("%s ", name);
    for(int i = 0; i < 13; i++){
        printf("%d ", grades[i]);
    }
    printf("\n");
}

int main(){
    char name1[10];
    char name2[10];
    char name3[10];
    char name4[10];
    char name5[10];

    scanf("%s", name1);
    scanf("%s", name2); 
    scanf("%s", name3);
    scanf("%s", name4);
    scanf("%s", name5);

    int grade1[13];
    inputGrade(grade1);
    int grade2[13];
    inputGrade(grade2);
    int grade3[13];
    inputGrade(grade3);
    int grade4[13];
    inputGrade(grade4);
    int grade5[13];
    inputGrade(grade5);

    float avarage1 = avarageScore(grade1);
    float avarage2 = avarageScore(grade2);
    float avarage3 = avarageScore(grade3);
    float avarage4 = avarageScore(grade4);
    float avarage5 = avarageScore(grade5);

    printScores(name1, grade1);
    printScores(name2, grade2);
    printScores(name3, grade3);
    printScores(name4, grade4);
    printScores(name5, grade5);

    return 0;
}

