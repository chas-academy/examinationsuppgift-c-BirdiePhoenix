#include <stdio.h>
#include <stdlib.h>

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

float calTotalAverage(float averageScores[5]){
    float sum = 0;
    for(int i = 0; i < 5; i++){
        sum += averageScores[i];
    }
    return sum / 5;
}

int main(){
    char names[5][11];
    int allGrades[5][13];

    for(int i = 0; i < 5; i++){
        scanf("%10s", names[i]);
        inputGrade(allGrades[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 11; j++){
            if(names[i][j] == '\0'){
                break;
            }
            else if(j == 0){
                if(names[i][0] > 90){
                    names[i][0] = names[i][0] - 32;
                }
            }
            else{
                if(names[i][j] < 97){
                    names[i][j] = names[i][j] + 32;
                }
            }
        }
    }


    float averageScores[5];

    for(int i = 0; i < 5; i++){
        averageScores[i] = averageScore(allGrades[i]);
    }

    int highestIndex = highestAverage(averageScores);

    printf("%s\n", names[highestIndex]);

    float totalAverage = calTotalAverage(averageScores);

    for(int i = 0; i < 5; i++){
        if(averageScores[i] < totalAverage){
            printf("%s\n", names[i]);
        }
    }

    return 0;
}