// Connections - Prob C
#include <stdio.h>

struct Student {
    char code[35];
    char name[35];
    char gender[35];
    char fatherName[35];
    char motherName[35];
    int siblings;
};

struct Lecturer {
    char code[35];
    char name[35];
    char gender[35];
    int numStudents;
    struct Student students[105];
};

int main() {
    int N;
    scanf("%d", &N);

    struct Lecturer lecturers[105];
    int i, j;

    for (i = 0; i < N; i++) {
        scanf("%s", lecturers[i].code);
        scanf(" %[^\n]", lecturers[i].name);
        scanf("%s", lecturers[i].gender);
        scanf("%d", &lecturers[i].numStudents);

        for (j = 0; j < lecturers[i].numStudents; j++) {
            scanf("%s", lecturers[i].students[j].code);
            scanf(" %[^\n]", lecturers[i].students[j].name);
            scanf("%s", lecturers[i].students[j].gender);
            scanf(" %[^\n]", lecturers[i].students[j].fatherName);
            scanf(" %[^\n]", lecturers[i].students[j].motherName);
            scanf("%d", &lecturers[i].students[j].siblings);
        }
    }

    int K;
    scanf("%d", &K);
    int idx = K - 1;

    printf("Kode Dosen: %s\n", lecturers[idx].code);
    printf("Nama Dosen: %s\n", lecturers[idx].name);
    printf("Gender Dosen: %s\n", lecturers[idx].gender);
    printf("Jumlah Mahasiswa: %d\n", lecturers[idx].numStudents);

    for (j = 0; j < lecturers[idx].numStudents; j++) {
        printf("Kode Mahasiswa: %s\n", lecturers[idx].students[j].code);
        printf("Nama Mahasiswa: %s\n", lecturers[idx].students[j].name);
        printf("Gender Mahasiswa: %s\n", lecturers[idx].students[j].gender);
        printf("Nama Ayah: %s\n", lecturers[idx].students[j].fatherName);
        printf("Nama Ibu: %s\n", lecturers[idx].students[j].motherName);
        printf("Jumlah Saudara Kandung: %d\n", lecturers[idx].students[j].siblings);
    }

    return 0;
}
