#include <stdio.h>

void Feb(int d, int m, int y);
void months_with_31(int d, int m, int y);
void months_with_30(int d, int m, int y);
 
int main() {
    int d,m,y;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d", &y);
    printf("Ngay hom nay la: %d/%d/%d\n", d,m,y);
    switch (m) {
        case 1 : case 3 : case 5 : case 7 : case 8: case 10 : case 12:
        months_with_31(d,m,y);
        break;
        case 2:
        Feb(d,m,y);
        break;
        case 4 : case 6 : case 9: case 11: 
        months_with_30(d,m,y);
        break;
        default : 
        printf("Khong hop le");
        break;
    }   
}

void Feb(int d, int m, int y) {     // Tháng 2
    int next_d;
    int pre_d;
    if ( d < 1 || d > 29 ) {
        printf("Khong hop le");
    } else {
        if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        if ( d == 29 ) {
            printf("Ngay mai la: 1/3/%d", y);
            printf("\nNgay hom qua la: 28/2/%d", y);
        } else if ( d == 1 ) {
            printf("Ngay mai la: 2/2/%d", y);
            printf("\nNgay hom qua la: 31/1/%d", y);
        } else {
            next_d = d + 1;
            pre_d = d - 1;
            printf("Ngay mai la: %d/2/%d", next_d, y);
            printf("\nNgay hom qua la: %d/2/%d", pre_d, y);
        }
    } else {
        if ( d == 28 ) {
            printf("Ngay mai la: 1/3/%d", y);
            printf("\nNgay hom qua la: 27/2/%d", y);
        } else if ( d == 1 ) {
            printf("Ngay mai la: 2/2/%d", y);
            printf("\nNgay hom qua la: 31/1/%d", y);
        } else {
            next_d = d + 1;
            pre_d = d - 1;
            printf("Ngay mai la: %d/2/%d", next_d, y);
            printf("\nNgay hom qua la: %d/2/%d", pre_d, y);
        }
    }
    }
};

void months_with_30(int d, int m, int y) {    // Các tháng có 30 ngày 
    int next_d, next_m;
    int pre_d, pre_m;
    if ( d < 1 || d > 30 ) {
        printf("Khong hop le");
    } else if ( d == 30 ) {
        next_m = m + 1;
        printf("Ngay mai la: 1/%d/%d", next_m, y);
        printf("\nNgay hom qua la: 29/%d/%d", m,y);
    } else if ( d == 1 ) {
        pre_m = m - 1;
        printf("Ngay mai la: 2/3/%d",y);
        printf("\nNgay hom qua la: 31/%d/%d", pre_m, y);
    } else {
        next_d = d + 1;
        pre_d = d - 1;
        printf("Ngay mai la: %d/%d/%d", next_d, m, y);
        printf("\nNgay hom qua la: %d/%d/%d", pre_d, m, y);
    }
}

void months_with_31(int d, int m, int y) {    // Các tháng có 31 ngày 
    int next_d, next_m, next_y;
    int pre_d, pre_m, pre_y;
    if ( d < 1 || d >= 32 ) {
        printf("Khong hop le");
    } else if ( m == 8) {
        if ( d == 31 ) {
            printf("Ngay mai la: 1/9/%d", y);
            printf("\nNgay hom qua la: 30/8/%d", y);  
        } else if ( d == 1 ) {
            printf("Ngay mai la: 2/8/%d", y);
            printf("\nNgay hom qua la: 31/7/%d", y);
        } else {
            next_d = d + 1;
            pre_d = d - 1;
            printf("Ngay mai la: %d/8/%d", next_d, y);
            printf("\nNgay hom qua la: %d/8/%d", pre_d, y);
        }
    } else if ( m == 1 ) {
        pre_y = y - 1;
        if ( d == 31 ) {
            printf("Ngay mai la: 1/2/%d", y);
            printf("\nNgay hom qua la: 30/1/%d", y); 
        } else if ( d == 1) {
            printf("Ngay mai la: 2/1/%d", y);
            printf("\nNgay hom qua la: 31/12/%d", pre_y);
        } else {
            next_d = d + 1;
            pre_d = d - 1;
            printf("Ngay mai la: %d/1/%d", next_d, y);
            printf("\nNgay hom qua la: %d/1/%d", pre_d, y);
        }
    } else if ( m == 12 ) {
        next_y = y + 1;
        if ( d == 31 ) {
            printf("Ngay mai la: 1/1/%d", next_y);
            printf("\nNgay hom qua la: 30/12/%d", y); 
        } else if ( d == 1 ) {
            printf("Ngay mai la: 2/12/%d", y);
            printf("\nNgay hom qua la: 30/11/%d", y);
        } else {
            next_d = d + 1;
            pre_d = d - 1;
            printf("Ngay mai la: %d/12/%d", next_d, y);
            printf("\nNgay hom qua la: %d/12/%d", pre_d, y);
        }
    } else {
        next_d = d + 1;
        pre_d = d - 1;
        next_m = m + 1;
        pre_m = m - 1;
        if ( d == 31 ) {
            printf("Ngay mai la: 1/%d/%d", next_m, y);
            printf("\nNgay hom qua la: 30/%d/%d",m, y); 
        } else if ( d == 1 ) {
            printf("Ngay mai la: 2/%d/%d",m, y);
            printf("\nNgay hom qua la: 30/%d/%d",pre_m, y);
        } else {
            printf("Ngay mai la: %d/%d/%d", next_d, m, y);
            printf("\nNgay hom qua la: %d/%d/%d", pre_d, m, y);
        }
    }
}