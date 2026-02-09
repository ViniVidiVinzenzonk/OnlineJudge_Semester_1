#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string in place
void strrev_in_place(char *str) {
    if (str == NULL) return;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void solve() {
    int T;
    // Read the number of test cases
    if (scanf("%d", &T) != 1) return;

    // A and B are up to 10^6 (7 digits), so max length is 7 + 1 for null terminator.
    // The result string needs to be large enough for the maximum length of A or B,
    // which is 7 digits for 1,000,000. Let's use a safe buffer of 10.
    char A_str[10];
    char B_str[10];

    // The result will be built in reverse order, using a safe buffer size.
    char raw_result_rev[10]; 

    for (int t = 1; t <= T; t++) {
        // Read A and B strings
        if (scanf("%s %s", A_str, B_str) != 2) break;

        // --- 1. Initialization and Iteration Pointers ---
        int len_a = strlen(A_str);
        int len_b = strlen(B_str);
        
        // Pointers for iterating from the right (last index)
        int i = len_a - 1;
        int j = len_b - 1;
        
        int k = 0; // Index for the raw_result_rev array
        
        // --- 2. Digit-by-Digit No-Carry Addition ---
        
        // Loop continues as long as we have digits in A or B
        while (i >= 0 || j >= 0) {
            
            // Get the digit from A. If pointer i is out of bounds, use 0.
            int digit_a = 0;
            if (i >= 0) {
                // '0' is ASCII 48, so '9' - '0' = 9.
                digit_a = A_str[i] - '0';
            }
            
            // Get the digit from B. If pointer j is out of bounds, use 0.
            int digit_b = 0;
            if (j >= 0) {
                digit_b = B_str[j] - '0';
            }
            
            // Core "No Carry-Over" Calculation: (D_A + D_B) % 10
            int result_digit = (digit_a + digit_b) % 10;
            
            // Store the result digit as a character (by adding '0')
            raw_result_rev[k] = result_digit + '0';
            k++;
            
            // Move to the next digit position (leftward)
            i--;
            j--;
        }

        // Null-terminate the string built in reverse
        raw_result_rev[k] = '\0';
        
        // --- 3. Reverse to get the raw result and remove leading zeros ---
        
        // The raw result is stored in raw_result_rev, but reversed.
        // We can actually process the string *in place* after reversing it.
        strrev_in_place(raw_result_rev);

        // Find the start of the final result by skipping leading zeros
        int start_index = 0;
        // Skip '0's as long as we haven't reached the last character
        while (raw_result_rev[start_index] == '0' && raw_result_rev[start_index + 1] != '\0') {
            start_index++;
        }
        
        // The final result starts at start_index
        char *final_result = &raw_result_rev[start_index];
        
        // --- 4. Print Output ---
        
        printf("Case #%d: %s\n", t, final_result);
    }
}

int main() {
    // Fast I/O is less critical here but good practice
    // On some systems, uncommenting this might lead to issues with scanf/printf mixture,
    // but it's generally fine for competitive programming environments.
    // setvbuf(stdout, NULL, _IONBF, 0); 
    
    solve();
    
    return 0;
}
//#include <stdio.h>
//
//int main(void){
//	int t;
//	char a[1000000];
//	char b[1000000];
//	scanf("%d", &t); getchar();
//	for(int i=0; i<t; i++){
//		scanf("%c %c", &a, &b); getchar();
//		for(int j=-1; j<)
//	}
//	
//	return 0;
//}
