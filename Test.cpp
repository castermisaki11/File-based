#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char operation;

    // รับค่าตัวแปร
    cout << "ป้อนตัวเลขที่ 1: ";
    cin >> num1;

    cout << "ป้อนตัวเลขที่ 2: ";
    cin >> num2;

    cout << "เลือกตัวดำเนินการ (+, -, *, /): ";
    cin >> operation;

    // ดำเนินการคำนวณ
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "ไม่สามารถหารด้วยศูนย์ได้" << endl;
                return 1;  // ออกจากโปรแกรมด้วยรหัสผลลัพธ์ 1
            }
            break;
        default:
            cout << "ตัวดำเนินการไม่ถูกต้อง" << endl;
            return 1;  // ออกจากโปรแกรมด้วยรหัสผลลัพธ์ 1
    }

    // แสดงผลลัพธ์
    cout << "ผลลัพธ์: " << result << endl;

    return 0;  // ออกจากโปรแกรมด้วยรหัสผลลัพธ์ 0
}
