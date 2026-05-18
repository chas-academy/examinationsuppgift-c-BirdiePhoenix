#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputGrade(int grade[13]){
    for(int i = 0; i < 13; i++){
        scanf("%d", &grade[i]);
    }
}

float averageScore(int grade[13]){
    float sum = 0;
    for(int i = 0; i < 13; i++){
        sum += grade[i];
    }
    return sum / 13;
}

int highestAverage(float averageScores[5]){
    float highest = averageScores[0];
    int highestIndex = 0;
    for(int i = 1; i < 5; i++){
        if(averageScores[i] > highest){
            highest = averageScores[i];
            highestIndex = i;
        }
    }
    return highestIndex;
}

void printScores(char name [10], int grades[13]){
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

    char names[5][10];

    for(int i = 0; i < 5; i++){
        scanf("%s", names[i]);
    }

    int allGrades[5][13];

    for(int i = 0; i < 5; i++){
        inputGrade(allGrades[i]);
    }

    float averageScores[5];

    averageScores[0] = averageScore(allGrades[0]);
    averageScores[1] = averageScore(allGrades[1]);
    averageScores[2] = averageScore(allGrades[2]);
    averageScores[3] = averageScore(allGrades[3]);
    averageScores[4] = averageScore(allGrades[4]);

    int highestIndex = highestAverage(averageScores);

    printScores(names[highestIndex], allGrades[highestIndex]);

    return 0;
}