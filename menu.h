#pragma once
#include<iostream>
#include<math.h>
#include<cmath>
#include<ctime>
#include <algorithm>
#include <climits>



#define TAB '\t'
#define MAX 1000


using namespace std;

typedef int DaySo[MAX];


void hoanVi(int &a, int &b);
int randNumPo(DaySo a);
int randNumPoAndNe(DaySo a);
void nhapMang(DaySo a, int n);
void xuatMang(DaySo a, int n);
bool laSoNguyenTo(int n);
double tinhTrungBinhCong(DaySo a, int n);
double tinhTongBinhPhuong(DaySo a, int n);
int tinhDoLechLonNhat(DaySo a, int n);
bool laSoChinhPhuong(int n);
double tinhTrungBinhCongSoChinhPhuong(DaySo a, int n);
int tinhTongSoNguyenTo2ChuSo(DaySo a, int n);
int tinhTongDuyNhat(DaySo a, int n);
int tinhTongPhanBiet(DaySo a, int n);
double tinhPhuongSai(DaySo a, int n);
double tinhDoLechChuan(DaySo a, int n);





void choiseMenu(DaySo a, int choise) {
    int n, TD, dau, y, dem;
   
    cout << endl;

    switch (choise) {





    case 1:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ntrung binh cong cua mang la:  " << tinhTrungBinhCong(a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ntrung binh cong cua mang la:  " << tinhTrungBinhCong(a, n) << endl;
        }
        break;
    case 2:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ntong binh phuong cua mang la:  " << tinhTongBinhPhuong( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ntong binh phuong cua mang la:  " << tinhTongBinhPhuong( a, n) << endl;
        }
        break;\
    case 3:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ndo chenh lech lon nhat trong mang la:  " << tinhDoLechLonNhat( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ndo chenh lech lon nhat trong mang la:  " << tinhDoLechLonNhat( a, n) << endl;
        }
        break;
    // case 4:
    //     cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
    //     cin >> TD;

    //     if (TD == 1) {
    //         cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
    //         cin >> dau;
    //         int phanTu, dem;
    //         if (dau == 1) {
    //             phanTu = randNumPo(a);

    //         }
    //         else {
    //             phanTu = randNumPoAndNe(a);
    //         }
    //         cout << "\ndo chenh lech lon nhat trong mang la:  " << tinhDoLechLonNhat( a, phanTu) << endl;
    //     }
    //     else {
    //         cout << "nguoi dung hay nhap so n: ";
    //         cin >> n;
    //         nhapMang(a, n);
    //         cout << "\ndo chenh lech lon nhat trong mang la:  " << tinhDoLechLonNhat( a, n) << endl;
    //     }
    //     break;
    case 5:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ntrung binh cong can bac hai cua so chinh phuong trong mang la:  " << tinhTrungBinhCongSoChinhPhuong( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ntrung binh cong can bac hai cua so chinh phuong trong mang la:  " << tinhTrungBinhCongSoChinhPhuong( a, n) << endl;
        }
        break;
    case 6:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ntong so NT co 2 chu so trong mang la:  " << tinhTongSoNguyenTo2ChuSo( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ntong so NT co 2 chu so trong mang la:  " << tinhTongSoNguyenTo2ChuSo( a, n) << endl;
        }
        break;
     case 7:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ntong cac pham tu chi xuat hien 1 lan trong mang la:  " << tinhTongDuyNhat( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ntong cac pham tu chi xuat hien 1 lan trong mang la:  " << tinhTongDuyNhat( a, n) << endl;
        }
        break;
        
    case 8:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ntong cac pham tu rieng biet trong mang la:  " << tinhTongPhanBiet( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ntong cac pham tu rieng biet trong mang la:  " << tinhTongPhanBiet( a, n) << endl;
        }
        break;
    case 9:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\nphuong sai cua cac gia tri trong mang la:  " << tinhPhuongSai( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\nphuong sai cua cac gia tri trong mang la:  " << tinhPhuongSai( a, n) << endl;
        }
        break;
    case 10:
        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);
            }
            cout << "\ndo lech chuan cua cac gia tri trong mang la:  " << tinhDoLechChuan( a, phanTu) << endl;
        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\ndo lech chuan cua cac gia tri trong mang la:  " << tinhDoLechChuan( a, n) << endl;
        }
        break;
    



    }
}



int randNumPo(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "Hay nhap pham vi SO LUONG chu so ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    }
    else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                // if (j == 0) {
                //     randomNumber += (rand() % 9 + 1) * multiplier;
                // } else {
                randomNumber += (rand() % 10) * multiplier;
                // }
                multiplier *= 10;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;
            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}

// Generates an array of random numbers that can be positive or negative
int randNumPoAndNe(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "ban vua chon so am va duong \n";
    cout << "Hay nhap pham vi SO LUONG CHU SO ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    }
    else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                // if (j == 0) {
                //     randomNumber += (rand() % 9 + 1) * multiplier;
                // } else {
                randomNumber += (rand() % 10) * multiplier;
                // }
                multiplier *= 10;
            }

            if (rand() % 2 == 0) {
                randomNumber = -randomNumber;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;

            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}


void nhapMang(DaySo a, int n) {

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
        cout << endl;
    }
}

void xuatMang(DaySo a, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        cout << a[i] << TAB;
        ++dem;
        if (dem == 15) {
            cout << endl;
            dem *= 0;
        }
    }
    cout << endl;
}

void hoanVi(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

double tinhTrungBinhCong(DaySo a, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

double tinhTongBinhPhuong(DaySo a, int n) {
    long double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * a[i];
    }
    return sum;
}

int tinhDoLechLonNhat(DaySo a, int n) {
    int max = 0;
    for (int i = 0; i < n - 1; i++) {
        int lech = abs(a[i] - a[i + 1]);
        if (lech > max) {
            max = lech;
        }
    }
    return max;
}


// int tinhTongLonNhatKPhanTu(DaySo a, int n, int k) {
//     int maxSum = 0;
//     for (int i = 0; i < k; i++) {
//         maxSum += a[i];
//     }
//     int sum = maxSum;
//     for (int i = k; i < n + k; i++) {
//         sum = sum - a[i % n] + a[(i - k) % n];
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }


bool laSoChinhPhuong(int n) {
    int sqrtN = sqrt(n);
    bool chinhPhuong = false;
    if(sqrtN * sqrtN == n){
        chinhPhuong = true;
    }
    return chinhPhuong;
}

double tinhTrungBinhCongSoChinhPhuong(DaySo a, int n) {
    double sum = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (laSoChinhPhuong(a[i])) {
            sum += sqrt(a[i]);
            dem++;
        }
    }
    
    return dem;
}

bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) 
        return false;
    }
    return true;
}

int tinhTongSoNguyenTo2ChuSo(DaySo a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 10 && a[i] <= 99 && laSoNguyenTo(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
    
int tinhTongDuyNhat(DaySo a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        bool duyNhat = true;
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                duyNhat = false;
                break;
            }
        }
        if (duyNhat) {
            sum += a[i];
        }
    }
    return sum;
}


int tinhTongPhanBiet(DaySo a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        bool trung = false;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                trung = true;
                break;
            }
        }
        if (!trung) {
            sum += a[i];
        }
    }
    return sum;
}

double tinhPhuongSai(DaySo a, int n) {
    double sum = tinhTrungBinhCong(a, n);
    double phuongSai = 0;
    for (int i = 0; i < n; i++) {
        phuongSai += (a[i] - sum) * (a[i] - sum);
    }
    return phuongSai / n;
}


double tinhDoLechChuan(DaySo a, int n) {
    return sqrt(tinhPhuongSai(a, n));
}





