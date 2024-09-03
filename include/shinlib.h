#ifndef SHINLIB_H
#define SHINLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

// ANSI colors
#define SHINLIB_COLOR_RED     31
#define SHINLIB_COLOR_GREEN   32
#define SHINLIB_COLOR_YELLOW  33
#define SHINLIB_COLOR_BLUE    34
#define SHINLIB_COLOR_MAGENTA 35
#define SHINLIB_COLOR_CYAN    36
#define SHINLIB_COLOR_WHITE   37
#define SHINLIB_COLOR_RESET   0

int shinlib_init();
void shinlib_cleanup();

int shinlib_create_menu(const char *title, const char **options, int option_count);
int shinlib_menu_display(int menu_id);

void shinlib_set_text_color(int color_code);
void shinlib_reset_text_color();
void shinlib_display_message(const char *format, ...);
void shinlib_move_cursor(int row, int col);
void shinlib_clear_screen();

int shinlib_input_capture(char *buffer, size_t buffer_size);

#define SHINLIB_PAUSE() getchar()

#endif // SHINLIB_H
