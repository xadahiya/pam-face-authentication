/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)
  GtkWidget *webcamImage;
    GtkWidget *information;
GtkWidget*
create_gtk_facetracker (void)
{
  GtkWidget *gtk_facetracker;
  GtkWidget *vbox1;


  GtkWidget *hbox1;
  GtkWidget *logo;
  GtkWidget *authenticate;
  GtkWidget *alignment1;
  GtkWidget *hbox2;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *cancel;
  GtkWidget *alignment2;
  GtkWidget *hbox3;
  GtkWidget *image2;
  GtkWidget *label2;

  gtk_facetracker = gtk_window_new (GTK_WINDOW_POPUP);
  gtk_window_set_position (GTK_WINDOW (gtk_facetracker), GTK_WIN_POS_CENTER_ALWAYS);
  gtk_window_set_modal (GTK_WINDOW (gtk_facetracker), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (gtk_facetracker), FALSE);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (gtk_facetracker), vbox1);

  webcamImage = create_pixmap (gtk_facetracker, NULL);
  gtk_widget_show (webcamImage);
  gtk_box_pack_start (GTK_BOX (vbox1), webcamImage, TRUE, TRUE, 6);

  information = gtk_label_new (_("Info Here!"));
  gtk_widget_show (information);
  gtk_box_pack_start (GTK_BOX (vbox1), information, FALSE, FALSE, 3);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox1, TRUE, TRUE, 0);

  logo = create_pixmap (gtk_facetracker, NULL);
  gtk_widget_show (logo);
  gtk_box_pack_start (GTK_BOX (hbox1), logo, TRUE, TRUE, 0);

  authenticate = gtk_button_new ();
  gtk_widget_show (authenticate);
  gtk_box_pack_start (GTK_BOX (hbox1), authenticate, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (authenticate), 8);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (authenticate), alignment1);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox2);

  image1 = gtk_image_new_from_stock ("gtk-dialog-authentication", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox2), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("authenticate"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox2), label1, FALSE, FALSE, 0);

  cancel = gtk_button_new ();
  gtk_widget_show (cancel);
  gtk_box_pack_start (GTK_BOX (hbox1), cancel, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (cancel), 8);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (cancel), alignment2);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox3);

  image2 = gtk_image_new_from_stock ("gtk-close", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox3), image2, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox3), label2, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) authenticate, "clicked",
                    G_CALLBACK (on_authenticate_clicked),
                    NULL);
  g_signal_connect ((gpointer) cancel, "clicked",
                    G_CALLBACK (on_cancel_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (gtk_facetracker, gtk_facetracker, "gtk_facetracker");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, webcamImage, "webcamImage");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, information, "information");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, logo, "logo");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, authenticate, "authenticate");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, image1, "image1");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, label1, "label1");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, cancel, "cancel");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, image2, "image2");
  GLADE_HOOKUP_OBJECT (gtk_facetracker, label2, "label2");

  return gtk_facetracker;
}

