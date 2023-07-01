#include <iostream>

using namespace std;

void Swap(int &m, int& n) {
    int temp = m;
    m = n;
    n = temp;
}

void Sort_Down(int* a) {
    for (int i = 0; i < 3; i++) 
        for (int j = i + 1; j < 4; j++)
            if (a[i] < a[j]) 
                Swap(a[i], a[j]);
}

void Look_For_1(int* a) {
    for (int i = 0; i < 4; i++) {
        if (a[i] == 2) {
            Swap(a[0], a[i]);
            return;
        }
        if (a[i] == 1) {
            Swap(a[0], a[i]);
            return;
        } 
        if (a[i] == 0)  {
            Swap(a[0], a[i]);
            return;
        }
    }
}

void Sort_Down_2 (int* p) {
    for (int i = 1; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            if (p[i] < p[j])
                Swap(p[i], p[j]);
}

 
void Look_For_2(int *a) {
    if (a[0] == 2) {
        for (int i = 1; i < 4; i++) {
            if (a[i] == 3) {
                Swap (a[1], a[i]);
                return;
            }
            if (a[i] == 2) {
                Swap (a[1], a[i]);
                return;
            }
            if (a[i] == 1) {
                Swap (a[1], a[i]);
                return;
            }
            if (a[i] == 0) {
                Swap (a[1], a[i]);
                return;
            }
        }
    }
    if (a[0] == 0 || a[0] == 1) {
        Sort_Down_2(a);
        return;
    }
}

void Look_For_3(int* a) {
    if (a[2] < a[3] && (a[3] < 6)) {
        Swap(a[2], a[3]);
        return;
    }
       
    if (a[2] > 5 && a[2] > a[3]) {
        Swap(a[2], a[3]);
        return;
    }
}

bool Check_1(int* p) {
    Look_For_1(p);
    if (p[0] < 3 && p[0] >= 0) return true;
    return false;
}

bool Check_2(int* p) {
    Look_For_2(p);
    if (p[0] == 2) {
        if (p[1] < 4) return true;
        return false;
    }
    if (p[0] == 1 || p[0] == 0) {
        if (p[1] < 10) return true;
        return false;
    }
}

void Display(int *p) {
    cout << p[0] << p[1] << ":" << p[2] << p[3];
}

int main() {
    int  a, b, c, d;
    cout << "Nhap a, b, c, d: ";
    cin >> a >> b >> c >> d;
    int *p;
    p = new int[4*sizeof(int)];
    for (int i = 0; i < 4; i++) {
        p[0] = a;
        p[1] = b;
        p[2] = c;
        p[3] = d;
    } 
    Sort_Down(p);
    if (Check_1(p) == false || Check_2(p) == false) {
        cout << "-1";
    }
    if (Check_1(p) && Check_2(p)) {
        Look_For_1(p);
        Look_For_2(p);
        Look_For_3(p); 
        Display(p);
    }
    delete[]p;
    return 0;
}