/*
 * Copyright (c) 2013 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _GTK_INSPECTOR_THEMES_H_
#define _GTK_INSPECTOR_THEMES_H_

#include <gtk/gtk.h>

#define GTK_TYPE_INSPECTOR_THEMES            (gtk_inspector_themes_get_type())
#define GTK_INSPECTOR_THEMES(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), GTK_TYPE_INSPECTOR_THEMES, GtkInspectorThemes))
#define GTK_INSPECTOR_THEMES_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass), GTK_TYPE_INSPECTOR_THEMES, GtkInspectorThemesClass))
#define GTK_INSPECTOR_IS_THEMES(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), GTK_TYPE_INSPECTOR_THEMES))
#define GTK_INSPECTOR_IS_THEMES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), GTK_TYPE_INSPECTOR_THEMES))
#define GTK_INSPECTOR_THEMES_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_INSPECTOR_THEMES, GtkInspectorThemesClass))


typedef struct _GtkInspectorThemesPrivate GtkInspectorThemesPrivate;

typedef struct _GtkInspectorThemes
{
  GtkListBox parent;
  GtkInspectorThemesPrivate *priv;
} GtkInspectorThemes;

typedef struct _GtkInspectorThemesClass
{
  GtkListBoxClass parent;
} GtkInspectorThemesClass;

G_BEGIN_DECLS

GType      gtk_inspector_themes_get_type (void);
GtkWidget *gtk_inspector_themes_new      (void);

G_END_DECLS

#endif // _GTK_INSPECTOR_THEMES_H_

// vim: set et sw=2 ts=2: