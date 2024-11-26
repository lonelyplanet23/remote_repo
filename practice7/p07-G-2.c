#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int is_valid_ipv4(const char *ip) {
    int count = 0;
    int num;
    char *token = strtok((char *)ip, ".");

    while (token != NULL) {
        if (count > 3) return 0; 
        if (token[0] == '0' && strlen(token) > 1) return 0; 
        for (int i = 0; i < strlen(token); i++) {
            if (!isdigit(token[i])) return 0; 
        }
        num = atoi(token);
        if (num < 0 || num > 255) return 0; 
        token = strtok(NULL, ".");
        count++;
    }
    return count == 4; 
}

int is_valid_ipv6(const char *ip) {
    int count = 0;
    char *token = strtok((char *)ip, ":");

    while (token != NULL) {
        if (count > 7) return 0; 
        if (strlen(token) == 0 || strlen(token) > 4) return 0; 
        for (int i = 0; i < strlen(token); i++) {
            if (!isxdigit(token[i])) return 0; 
        }
        token = strtok(NULL, ":");
        count++;
    }
    return count == 8; 
}

int main() {
    int n;
    scanf("%d\n", &n); 

    char ip[101];
    for (int i = 0; i < n; i++) {
        fgets(ip, 101, stdin); 
        ip[strcspn(ip, "\n")] = 0; 

        if (is_valid_ipv4(ip)) {
            printf("IPv4\n");
        } else if (is_valid_ipv6(ip)) {
            printf("IPv6\n");
        } else {
            printf("64vPI\n");
        }
    }

    return 0;
}