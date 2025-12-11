#include <stdio.h>

int main() {
    int password = 7;
    int input;

    printf("Enter the password: ");
    
    // while 迴圈，直到使用者輸入正確的密碼
    while (1) {
        scanf("%d", &input);
        
        if (input == password) {
            printf("Password correct! Access granted.\n");
            break; // 密碼正確時，跳出迴圈
        } else {
            printf("Incorrect password. Try again: ");
        }
    }
    
    return 0;
}





