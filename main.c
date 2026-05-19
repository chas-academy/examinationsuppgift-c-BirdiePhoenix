#include <stdio.h>
#include <stdlib.h>

void inputGrade(int grade[], int nGrades){
    for(int i = 0; i < nGrades; i++){
        scanf("%d", &grade[i]);
    }
}

float averageScore(int grade[], int nGrades){
    float sum = 0;
    for(int i = 0; i < nGrades; i++){
        sum += grade[i];
    }
    return sum / nGrades;
}

int highestAverage(float averageScores[], int nNames){
    float highestAverage = averageScores[0];
    int highestIndex = 0;
    for(int i = 1; i < nNames; i++){
        if(averageScores[i] > highestAverage){
            highestAverage = averageScores[i];
            highestIndex = i;
        }
    }
    return highestIndex;
}

float calTotalAverage(float averageScores[], int nNames){
    float sum = 0;
    for(int i = 0; i < nNames; i++){
        sum += averageScores[i];
    }
    return sum / nNames;
}

int main(){
    int nNames = 5;
    int nGrades = 13;
    char names[nNames][11];
    int allGrades[nNames][nGrades];

    for(int i = 0; i < nNames; i++){
        scanf("%10s", names[i]);
        inputGrade(allGrades[i], nGrades);
    }

    for(int i = 0; i < nNames; i++){
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

    float averageScores[nNames];

    for(int i = 0; i < nNames; i++){
        averageScores[i] = averageScore(allGrades[i], nGrades);
    }

    int highestIndex = highestAverage(averageScores, nNames);

    printf("%s\n", names[highestIndex]);

    float totalAverage = calTotalAverage(averageScores, nNames);

    for(int i = 0; i < nNames; i++){
        if(averageScores[i] < totalAverage){
            printf("%s\n", names[i]);
        }
    }

    return 0;
}