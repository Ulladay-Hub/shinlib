// menu.c
#include "shinlib.h"

// Dear future me,
// I am sorry for making code so unoptimised that my PC will crash
// Do not kill yourself
// Use your pillow instead
// Love,
// Brad.

int shinlib_create_menu(const char *title, const char **options, int option_count) {
    printf("\033[2J");
    printf("\033[H");
    printf("%s\n", title);
    
    for (int i = 0; i < option_count; i++) {
        printf("%d. %s\n", i + 1, options[i]);
    }
    printf("Choose an option: ");
    
    return 0;
}
