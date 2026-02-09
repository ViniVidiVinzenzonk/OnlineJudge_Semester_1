// COURSE DATABASE - Prob D
#include <stdio.h>

struct Course {
    char code[15];
    char name[105];
    int credits;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Course courses[1005];

    int i;
    for (i = 0; i < N; i++) {
        scanf("%s", courses[i].code);
        getchar();
        scanf("%[^\n]", courses[i].name);
        scanf("%d", &courses[i].credits);
    }

    int Q;
    scanf("%d", &Q);

    for (i = 1; i <= Q; i++) {
        int index;
        scanf("%d", &index);
        int arrIdx = index - 1;

        printf("Query #%d:\n", i);
        printf("Code: %s\n", courses[arrIdx].code);
        printf("Name: %s\n", courses[arrIdx].name);
        printf("Credits: %d\n", courses[arrIdx].credits);
    }

    return 0;
}


