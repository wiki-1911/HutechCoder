#include <iostream>

using namespace std;

void XuatMang(int* p) {
    for (int i =0; i < 4; i++) 
        cout << p[i] << " ";
    cout << endl;
}

void Swap(int &m, int& n) {
    int temp = m;
    m = n;
    n = temp;
}

void Sort_Up(int* a) {
    for (int i = 0; i < 3; i++) 
        for (int j = i + 1; j < 4; j++)
            if (a[i] > a[j]) 
                Swap(a[i], a[j]);
}

int Max_Of_Number(int* p) {
    int max = p[0];
    for (int i = 1; i < 4; i++) 
        if (p[i] > max) 
            max = p[i];
    return max;
}

int Vi_tri(int* p) {
    int vt;
    int max = Max_Of_Number(p);
    for (int i = 0; i < 4; i++)
        if (max == p[i]) 
            return i;
}

void Look_For_1(int* a) {
    for (int i = 0; i < 4; i++) {
        if (a[i] == 1) {
            Swap(a[2], a[i]);
            return;
        } 
    }
    for (int i = 0; i < 4; i++) {
        if (a[i] == 0)  {
            Swap(a[2], a[i]);
            return;
        }
    }
}

void Look_For_2(int* a) {
    if (a[2] == 1) {
        for (int i = 0; i < 2; i++) {
            if (a[i] == 2) {
                Swap(a[3], a[i]);
                return;
            }
        }
        for (int i = 0; i < 2; i++) {
            if (a[i] == 1)  {
                Swap(a[3], a[i]);
                return;
            }
        }
        for (int i = 0; i < 2; i++) {
            if (a[i] == 0)  {
                Swap(a[3], a[i]);
                return;
            } 
        }
    }
    if (a[2] == 0) {
        int vt = Vi_tri(a);
        Swap(a[3], a[vt]);
    }
}

void Look_For_3 (int* p) {
    int a = p[0] * 10 + p[1];
    int n = p[2] * 10 + p[3];
    switch(n) {
        case 2:
            if (a < 30 && p[0] < p[1]) {
                Swap(p[0], p[1]);
                break;
            } 
            if (a > 29) 
                Swap(p[0], p[1]);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (a < 30 && p[0] < p[1]) {
                Swap(p[0], p[1]);
                break;
            } 
            if (a > 30) {
                Swap(p[0], p[1]);
                break;
            }
        default:
            if (p[0] < p[1] && p[1] < 4 || p[0] > p[1] && p[0] > 4) 
                Swap(p[0], p[1]);
            break;
    } 
}

bool Check(int* p) {
    int a =  p[0] * 10 + p[1];
    int b = p[2]* 10 + p[3]; 
    if (a > 31 || b > 12) return false;
    return true;
}

void Look_For_Again(int* p) {
    Sort_Up(p);
    for (int i = 0; i < 4; i++) {
        if (p[i] == 1) {
            Swap(p[2], p[i]);
            break;
        } 
        if (p[i] == 0)  {
            Swap(p[2], p[i]);
            break;
        }
    }
    Look_For_2(p);
    Look_For_3(p);
}

void display(int* p) {
    cout << p[0] << " " << p[1] << " " << p[2] << " " << p[3];
}


int main() {
    int a, b, c, d;
    cout << "Nhap a, b, c, d: ";
    cin >> a >> b >> c >> d;
    int *p;
    p = new int [4 * sizeof(int)];
    for (int i = 0; i < 4; i++) {
        p[0] = a;
        p[1] = b;
        p[2] = c;
        p[3] = d;
    } 
    Sort_Up(p); 
    Look_For_1(p);
    Look_For_2(p);
    Look_For_3(p);
    if (Check(p) == false) {
        Look_For_Again(p);
        if (Check(p) == false) 
             cout << "-1";
        else 
            display(p);
    }
    else
        display(p);
    delete[]p;
    return 0;
}