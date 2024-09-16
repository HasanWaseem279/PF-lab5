#include<stdio.h>

int main() {
    char message;
    int key;
    char encrypted_message, decrypted_message;

    printf("Enter a character: ");
    scanf("%c", &message);

    printf("Enter encryption key (an integer): ");
    scanf("%d", &key);

    // Encrypting the character
    encrypted_message = message ^ key; // Encryption
    printf("Encrypted message: %c\n", encrypted_message);

    
    decrypted_message = encrypted_message ^ key; // Decryption

    
    if (decrypted_message == message) {
        printf("Decrypted message: %c\n", decrypted_message);
    } 
	else {
        printf("Decryption failed.\n");
    }

    return 0;
}
