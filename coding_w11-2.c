#include <stdio.h>

// ฟังก์ชันสำหรับคำนวณค่าเฉลี่ย
float average(int a, int b, int c) {
    return (a + b + c) / 3.0;   // ต้องหารด้วย 3.0 เพื่อให้ได้ผลลัพธ์แบบทศนิยม
}

int main() {
    int math, physics, chemistry;
    float avg;

    // รับค่าคะแนน
    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชัน average
    avg = average(math, physics, chemistry);

    // แสดงผล
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg); // แสดงทศนิยม 2 ตำแหน่ง

    return 0;
}
