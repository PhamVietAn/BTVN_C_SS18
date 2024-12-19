#include<stdio.h>
#include<string.h>


struct sinhVien{
    char name[50];
    char age[100];
    char phoneNumber[10];
};
typedef struct sinhVien sinhVien;
    
int main(){
    sinhVien A;
    strcpy(A.name, "Pham Viet An");
    strcpy(A.age, "18");
    strcpy(A.phoneNumber, "0123456789");

    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", A.name);
    printf("Age: %s\n",A.age);
    printf("Phone Number: %s\n",A.phoneNumber);

    return 0;
}