#include <stdio.h>

// ฟังก์ชันสำหรับรับและแสดงผล
void inputAndShow() {
    int math, physics, chemistry;

    // รับค่าคะแนน
    printf("Enter Math: ");
    scanf("%d", &math);

    printf("Enter Physics: ");
    scanf("%d", &physics);

    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // แสดงผลลัพธ์
    printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
    // เรียกใช้งานฟังก์ชัน
    inputAndShow();
    return 0;
}
