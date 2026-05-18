#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char p1[11] = {};
    char p2[11] = {};
    char p3[11] = {};
    char p4[11] = {};
    char p5[11] = {};
    int p1Total;
    int p2Total;
    int p3Total;
    int p4Total;
    int p5Total;
    int allStudentGrades[5] = {p1Total, p2Total, p3Total, p4Total, p5Total};

    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);
    scanf("%s", p4);
    scanf("%s", p5);
    
    char students[5][11];


    //Big letter
    for(int i = 0; i < 5; i++){
        if(students[i][0] > 90){
            students[i][0] -= 32;
        }
    }

    int studentGrades[5][13];

    //Adding grades
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 13; j++){
            int grade;
            scanf("%d", grade);
            studentGrades[i][j] = grade;
        }
    }

    //Printing students and calculating avarage score
    for(int i = 0; i < 5; i++){
        printf("%s ", students[i]);
        for(int j = 0; j < 13; j++){
            printf("%d ", studentGrades[i][j]);
            allStudentGrades[i] += studentGrades[i][j];
        }
        allStudentGrades[i] /= 13;
    }

    return 0;
}

