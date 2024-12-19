#include<stdio.h>
#include<string.h>

struct sinhVien{
    char name[50];
    int age;
    char phoneNumber[10];
};
typedef struct sinhVien sinhVien;

void nhap(sinhVien *A){
    fflush(stdin);
    printf("Nhap ten: ");
    fgets(A->name, sizeof(A->name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &A->age);
    fflush(stdin);
    printf("Nhap phone number: ");
    fgets(A->phoneNumber, 10, stdin);
}
    
int main(){
    sinhVien A;
    nhap(&A);

    printf("\nThong tin sinh vien:\n");
    printf("Name: %s", A.name);
    printf("Age: %d\n",A.age);
    printf("Phone Number: %s\n",A.phoneNumber);

    return 0;
}