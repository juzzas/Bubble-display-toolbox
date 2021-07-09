/*
 * RC2014 bubble time display demo
 */

#include "bubtb.h"


int main(int argc, char **argv)
{
    int n;

    clear_buffer();
    flush_display_buffer();

    /* just print digits for now */
    for (n = 0; n < 8; n++)
        put_char_at_index('0' + n, n);

    /* repeat forever! */
    while(1)
        flush_display_buffer();

    return 0;
}
