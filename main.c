#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputGrade(int grade[13]){
    for(int i = 0; i < 13; i++){
        scanf("%d", &grade[i]);
    }
}

float avarageScore(int grade[13]){
    float sum = 0;
    for(int i = 0; i < 13; i++){
        sum += grade[i];
    }
    return sum / 13;
}

float highestAvarage(float avarageScores[5]){
    float highest = avarageScores[0];
    for(int i = 1; i < 5; i++){
        if(avarageScores[i] > highest){
            highest = avarageScores[i];
        }
    }
    return highest;
}

float lowestAvarage(float avarageScores[5]){
    float lowest = avarageScores[0];
    for(int i = 1; i < 5; i++){
        if(avarageScores[i] < lowest){
            lowest = avarageScores[i];
        }
    }
    return lowest;
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

    float avarageScores[5];

    avarageScores[0] = avarageScore(grade1);
    avarageScores[1] = avarageScore(grade2);
    avarageScores[2] = avarageScore(grade3);
    avarageScores[3] = avarageScore(grade4);
    avarageScores[4] = avarageScore(grade5);

    float highest = highestAvarage(avarageScores);
    float lowest = lowestAvarage(avarageScores);

    printScores(name1, grade1);
    printScores(name2, grade2);
    printScores(name3, grade3);
    printScores(name4, grade4);
    printScores(name5, grade5);

    return 0;
}

