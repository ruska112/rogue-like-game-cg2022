#include <BearLibTerminal.h>

int main() {
  terminal_open();

  terminal_printf(0, 0, "Hello, world!");
  terminal_refresh();

  while (terminal_read() != TK_CLOSE);

  terminal_close();
}

