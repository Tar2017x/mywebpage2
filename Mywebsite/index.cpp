#include <iostream>
using namespace std;

// ฟังก์ชันหาค่ามากที่สุดในอาร์เรย์ (ใช้ Iteration)
int findMaxIterative(int arr[], int n) {
    int maxVal = arr[0]; // เริ่มต้นให้ค่ามากที่สุดเป็นตัวแรกของอาร์เรย์

    for (int i = 1; i < n; i++) { // วนลูปตั้งแต่ตัวที่ 2 จนถึงตัวสุดท้าย
        if (arr[i] > maxVal) { // ถ้าพบค่าที่มากกว่า maxVal
            maxVal = arr[i]; // อัปเดต maxVal
        }
    }
    return maxVal; // คืนค่ามากที่สุด
}

int main() {
    int n;
    
    // รับค่าจำนวนสมาชิกของอาร์เรย์
    cout << "Enter size of array: ";
    cin >> n;

    // ตรวจสอบว่าข้อมูลเข้าไม่ใช่ 0 หรือติดลบ
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1; // ออกจากโปรแกรม
    }

    int arr[n]; // ประกาศอาร์เรย์ขนาด n

    // รับค่าข้อมูลในอาร์เรย์
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // เรียกใช้ฟังก์ชันและแสดงค่ามากที่สุด
    cout << "Maximum value: " << findMaxIterative(arr, n) << endl;
    
    return 0;
}
