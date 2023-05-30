#include <gtk/gtk.h>

static gboolean delete_event(GtkWidget *widget, GdkEvent *event, gpointer data) {
	gtk_main_quit();
	return FALSE;
}

int main(int argc, char *argv[]) {
	GtkWidget *window;
	GtkWidget *label;

	GtkSettings *settings = gtk_settings_get_default ();

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Window");
	gtk_window_set_default_size(GTK_WINDOW(window), 100, 100);
	g_signal_connect(window, "delete-event", G_CALLBACK(delete_event), NULL);
	gtk_container_set_border_width(GTK_CONTAINER(window), 10);

	label = gtk_label_new("Hello World");
	gtk_widget_set_hexpand(label, TRUE);
	gtk_label_set_justify(GTK_LABEL(label), GTK_JUSTIFY_CENTER);
	gtk_container_add(GTK_CONTAINER(window), label);
	gtk_widget_show(label);
	
	gtk_widget_show(label);
	gtk_widget_show(window);
	gtk_main();
}
