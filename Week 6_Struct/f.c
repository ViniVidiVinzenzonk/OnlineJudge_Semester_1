// COLLEGE STUDENT - Prob F
#include <stdio.h>

struct Student {
    char name[105];
    char nim[15];
    int age;
    char postalCode[10];
    char birthPlace[105];
    char birthDate[105];
    char highSchool[105];
    int siblings;
    int height;
    char bankAccount[15];
};

int main() {
    int N;
    scanf("%d", &N);
    struct Student mhs[N];

    for (int i = 0; i < N; i++) {
        scanf(" %[^\n]", mhs[i].name);
        scanf("%s", mhs[i].nim);
        scanf("%d", &mhs[i].age);
        scanf("%s", mhs[i].postalCode);
        scanf(" %[^\n]", mhs[i].birthPlace);
        scanf(" %[^\n]", mhs[i].birthDate);
        scanf(" %[^\n]", mhs[i].highSchool);
        scanf("%d", &mhs[i].siblings);
        scanf("%d", &mhs[i].height);
        scanf("%s", mhs[i].bankAccount);
    }

    for (int i = 0; i < N; i++) {
        printf("Mahasiswa ke-%d:\n", i + 1);
        printf("Nama: %s\n", mhs[i].name);
        printf("NIM: %s\n", mhs[i].nim);
        printf("Umur: %d\n", mhs[i].age);
        printf("Kode Pos: %s\n", mhs[i].postalCode);
        printf("Tempat Lahir: %s\n", mhs[i].birthPlace);
        printf("Tanggal Lahir: %s\n", mhs[i].birthDate);
        printf("Almamater SMA: %s\n", mhs[i].highSchool);
        printf("Jumlah Saudara Kandung: %d\n", mhs[i].siblings);
        printf("Tinggi Badan: %d\n", mhs[i].height);
        printf("NOMOR REKENING: %s\n", mhs[i].bankAccount);
    }
    return 0;
}












