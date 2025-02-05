#include <gtk/gtk.h>
#include <vte/vte.h>
#include <gdk/gdkkeysyms.h>
#include <glib/gstdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    Theme current_theme;
    gdouble font_scale;
} Config;
