// lili and Mean - Prob e

#include <stdio.h>

struct Student {
    char id[20];
    char name[20];
    int score;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[50005];
    double totalScore = 0;
    int i;

    for (i = 0; i < N; i++) {
        scanf("%s", students[i].id);
        scanf(" %[^\n]", students[i].name);
        scanf("%d", &students[i].score);
        totalScore += students[i].score;
    }

    double mean = totalScore / N;

    for (i = 0; i < N; i++) {
        if (students[i].score >= mean) {
            printf("%s %s\n", students[i].id, students[i].name);
        }
    }

    return 0;
}









