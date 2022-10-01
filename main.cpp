#include <windows.h>

int main() {
    // replace my url with the one you want to use
   ShellExecute(NULL, "open", "https://youtu.be/dQw4w9WgXcQ",
   NULL, NULL, SW_SHOWNORMAL);

  return 0;
}