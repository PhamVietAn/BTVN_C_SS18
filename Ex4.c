#include <stdio.h>
#include <string.h>

struct sinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
typedef struct sinhVien sinhVien;

void nhapThongTin(sinhVien *sv, int id){
    sv->id = id;
    printf("Nhap ten: ");
    fgets(sv->name, sizeof(sv->name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &sv->age);

    fflush(stdin);
    printf("Nhap so dien thoai: ");
    fgets(sv->phoneNumber, sizeof(sv->phoneNumber), stdin);
}

void inThongTin(sinhVien sv){
    printf("ID: %d\n", sv.id);
    printf("Name: %s", sv.name);
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s\n", sv.phoneNumber);
}

int main(){
    sinhVien danhSach[50];
    int soLuongSinhVien = 5;

    for(int i = 0; i < soLuongSinhVien; i++){
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        nhapThongTin(&danhSach[i], i + 1);
        printf("\n");
    }

    printf("\nThong tin cac sinh vien:\n");
    for(int i = 0; i < soLuongSinhVien; i++){
        printf("\nSinh vien thu %d:\n", i + 1);
        inThongTin(danhSach[i]);
    }

    return 0;
}
