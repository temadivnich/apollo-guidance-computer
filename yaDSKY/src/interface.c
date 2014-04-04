/*
  Copyright 2004,2005 Ronald S. Burkey <info@sandroid.org>
  
  This file is part of yaAGC.

  yaAGC is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  yaAGC is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with yaAGC; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  
  Filename:	interface.c
  Mods:		Note that this file was originally created by the GLADE
  		rapid-application development program.  If GLADE was still
		being used for this project, the file should not be edited,
		since it is regenerated by GLADE, and changes are discarded.
		However, it was necessary to stop using GLADE for yaDSKY
		some time ago, and so this restriction has been relaxed.
		THEREFORE, NEVER REGENERATE yaDSKY SOURCE CODE USING
		GLADE AGAIN!
  		09/20/05 CB	Added accelerator keys.
*/

#ifndef create_MainWindow

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

#endif //create_MainWindow

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  gtk_object_set_data_full (GTK_OBJECT (component), name, \
    gtk_widget_ref (widget), (GtkDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  gtk_object_set_data (GTK_OBJECT (component), name, widget)
  
GtkWidget*
create_MainWindow (void)
{
  GtkWidget *MainWindow;
  GtkWidget *ObjectGrid;
  GtkWidget *R3PlusMinus;
  GtkWidget *R3D4Digit;
  GtkWidget *R3D5Digit;
  GtkWidget *R2D5Digit;
  GtkWidget *R2D4Digit;
  GtkWidget *R2D3Digit;
  GtkWidget *R2D2Digit;
  GtkWidget *R2D1Digit;
  GtkWidget *R2PlusMinus;
  GtkWidget *R1D5Digit;
  GtkWidget *R1D4Digit;
  GtkWidget *R1D3Digit;
  GtkWidget *R1D2Digit;
  GtkWidget *R1D1Digit;
  GtkWidget *R1PlusMinus;
  GtkWidget *ND2Digit;
  GtkWidget *ND1Digit;
  GtkWidget *VD2Digit;
  GtkWidget *VD1Digit;
  GtkWidget *image57;
  GtkWidget *NounAnnunciator;
  GtkWidget *MD2Digit;
  GtkWidget *MD1Digit;
  GtkWidget *image58;
  GtkWidget *image55;
  GtkWidget *image56;
  GtkWidget *image54;
  GtkWidget *R3D1Digit;
  GtkWidget *R3D2Digit;
  GtkWidget *R3D3Digit;
  GtkWidget *CompActyAnnunciator;
  GtkWidget *image59;
  GtkWidget *ModeAnnunciator;
  GtkWidget *image60;
  GtkWidget *image64;
  GtkWidget *image66;
  GtkWidget *image65;
  GtkWidget *image63;
  GtkWidget *Annunciator12;
  GtkWidget *Annunciator13;
  GtkWidget *Annunciator14;
  GtkWidget *Annunciator15;
  GtkWidget *Annunciator16;
  GtkWidget *Annunciator17;
  GtkWidget *image67;
  GtkWidget *image62;
  GtkWidget *image61;
  GtkWidget *Annunciator27;
  GtkWidget *Annunciator26;
  GtkWidget *Annunciator25;
  GtkWidget *Annunciator24;
  GtkWidget *Annunciator23;
  GtkWidget *Annunciator22;
  GtkWidget *PlusButton;
  GtkWidget *iPlusButton;
  GtkWidget *SevenButton;
  GtkWidget *iSevenButton;
  GtkWidget *EightButton;
  GtkWidget *iEightButton;
  GtkWidget *NineButton;
  GtkWidget *iNineButton;
  GtkWidget *ClrButton;
  GtkWidget *iClrButton;
  GtkWidget *MinusButton;
  GtkWidget *iMinusButton;
  GtkWidget *FourButton;
  GtkWidget *iFourButton;
  GtkWidget *FiveButton;
  GtkWidget *iFiveButton;
  GtkWidget *SixButton;
  GtkWidget *iSixButton;
  GtkWidget *ProButton;
  GtkWidget *iLastButton;
  GtkWidget *ZeroButton;
  GtkWidget *iZeroButton;
  GtkWidget *OneButton;
  GtkWidget *iOneButton;
  GtkWidget *TwoButton;
  GtkWidget *iTwoButton;
  GtkWidget *ThreeButton;
  GtkWidget *iThreeButton;
  GtkWidget *KeyRelButton;
  GtkWidget *iKeyRelButton;
  GtkWidget *EntrButton;
  GtkWidget *iEntrButton;
  GtkWidget *RsetButton;
  GtkWidget *iRsetButton;
  GtkWidget *VerbButton;
  GtkWidget *iVerbButton;
  GtkWidget *NounButton;
  GtkWidget *iNounButton;
  GtkWidget *VerbAnnunciator;
  GtkWidget *Annunciator11;
  GtkWidget *Annunciator21;
  GtkAccelGroup *AccelGroup;

  MainWindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_usize (MainWindow, 572, 640);
  gtk_window_set_title (GTK_WINDOW (MainWindow), _("yaDSKY by Ron Burkey"));
  gtk_window_set_position (GTK_WINDOW (MainWindow), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (MainWindow), FALSE);
  gtk_window_set_destroy_with_parent (GTK_WINDOW (MainWindow), TRUE);

  AccelGroup = gtk_accel_group_new( );
  gtk_window_add_accel_group( GTK_WINDOW( MainWindow), AccelGroup);

  ObjectGrid = gtk_fixed_new ();
  gtk_widget_show (ObjectGrid);
  gtk_container_add (GTK_CONTAINER (MainWindow), ObjectGrid);

  R3PlusMinus = create_pixmap (MainWindow, "PlusMinusOff.jpg");
  gtk_widget_show (R3PlusMinus);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R3PlusMinus, 328, 320);
  gtk_widget_set_usize (R3PlusMinus, 32, 45);

  R3D4Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R3D4Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R3D4Digit, 456, 320);
  gtk_widget_set_usize (R3D4Digit, 32, 45);

  R3D5Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R3D5Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R3D5Digit, 488, 320);
  gtk_widget_set_usize (R3D5Digit, 32, 45);

  R2D5Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R2D5Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R2D5Digit, 488, 256);
  gtk_widget_set_usize (R2D5Digit, 32, 45);

  R2D4Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R2D4Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R2D4Digit, 456, 256);
  gtk_widget_set_usize (R2D4Digit, 32, 45);

  R2D3Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R2D3Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R2D3Digit, 424, 256);
  gtk_widget_set_usize (R2D3Digit, 32, 45);

  R2D2Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R2D2Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R2D2Digit, 392, 256);
  gtk_widget_set_usize (R2D2Digit, 32, 45);

  R2D1Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R2D1Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R2D1Digit, 360, 256);
  gtk_widget_set_usize (R2D1Digit, 32, 45);

  R2PlusMinus = create_pixmap (MainWindow, "PlusMinusOff.jpg");
  gtk_widget_show (R2PlusMinus);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R2PlusMinus, 328, 256);
  gtk_widget_set_usize (R2PlusMinus, 32, 45);

  R1D5Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R1D5Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R1D5Digit, 488, 192);
  gtk_widget_set_usize (R1D5Digit, 32, 45);

  R1D4Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R1D4Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R1D4Digit, 456, 192);
  gtk_widget_set_usize (R1D4Digit, 32, 45);

  R1D3Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R1D3Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R1D3Digit, 424, 192);
  gtk_widget_set_usize (R1D3Digit, 32, 45);

  R1D2Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R1D2Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R1D2Digit, 392, 192);
  gtk_widget_set_usize (R1D2Digit, 32, 45);

  R1D1Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R1D1Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R1D1Digit, 360, 192);
  gtk_widget_set_usize (R1D1Digit, 32, 45);

  R1PlusMinus = create_pixmap (MainWindow, "PlusMinusOff.jpg");
  gtk_widget_show (R1PlusMinus);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R1PlusMinus, 328, 192);
  gtk_widget_set_usize (R1PlusMinus, 32, 45);

  ND2Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (ND2Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), ND2Digit, 488, 128);
  gtk_widget_set_usize (ND2Digit, 32, 45);

  ND1Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (ND1Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), ND1Digit, 456, 128);
  gtk_widget_set_usize (ND1Digit, 32, 45);

  VD2Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (VD2Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), VD2Digit, 360, 128);
  gtk_widget_set_usize (VD2Digit, 32, 45);

  VD1Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (VD1Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), VD1Digit, 328, 128);
  gtk_widget_set_usize (VD1Digit, 32, 45);

  image57 = create_pixmap (MainWindow, "ShortHorizontal.jpg");
  gtk_widget_show (image57);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image57, 328, 88);
  gtk_widget_set_usize (image57, 64, 19);

  NounAnnunciator = create_pixmap (MainWindow, "NounOn.jpg");
  gtk_widget_show (NounAnnunciator);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), NounAnnunciator, 456, 104);
  gtk_widget_set_usize (NounAnnunciator, 64, 24);

  MD2Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (MD2Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), MD2Digit, 488, 48);
  gtk_widget_set_usize (MD2Digit, 32, 45);

  MD1Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (MD1Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), MD1Digit, 456, 48);
  gtk_widget_set_usize (MD1Digit, 32, 45);

  image58 = create_pixmap (MainWindow, "ShortHorizontal.jpg");
  gtk_widget_show (image58);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image58, 456, 93);
  gtk_widget_set_usize (image58, 64, 13);

  image55 = create_pixmap (MainWindow, "SeparatorOn.jpg");
  gtk_widget_show (image55);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image55, 328, 237);
  gtk_widget_set_usize (image55, 192, 19);

  image56 = create_pixmap (MainWindow, "SeparatorOn.jpg");
  gtk_widget_show (image56);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image56, 328, 173);
  gtk_widget_set_usize (image56, 192, 19);

  image54 = create_pixmap (MainWindow, "SeparatorOn.jpg");
  gtk_widget_show (image54);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image54, 328, 301);
  gtk_widget_set_usize (image54, 192, 19);

  R3D1Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R3D1Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R3D1Digit, 360, 320);
  gtk_widget_set_usize (R3D1Digit, 32, 45);

  R3D2Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R3D2Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R3D2Digit, 392, 320);
  gtk_widget_set_usize (R3D2Digit, 32, 45);

  R3D3Digit = create_pixmap (MainWindow, "7SegOff.jpg");
  gtk_widget_show (R3D3Digit);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), R3D3Digit, 424, 320);
  gtk_widget_set_usize (R3D3Digit, 32, 45);

  CompActyAnnunciator = create_pixmap (MainWindow, "CompActyOff.jpg");
  gtk_widget_show (CompActyAnnunciator);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), CompActyAnnunciator, 328, 24);
  gtk_widget_set_usize (CompActyAnnunciator, 64, 64);

  image59 = create_pixmap (MainWindow, "CenterBlock.jpg");
  gtk_widget_show (image59);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image59, 392, 24);
  gtk_widget_set_usize (image59, 64, 151);

  ModeAnnunciator = create_pixmap (MainWindow, "rProgOn.jpg");
  gtk_widget_show (ModeAnnunciator);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), ModeAnnunciator, 456, 24);
  gtk_widget_set_usize (ModeAnnunciator, 64, 24);

  image60 = create_pixmap (MainWindow, "FrameVertical.jpg");
  gtk_widget_show (image60);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image60, 520, 16);
  gtk_widget_set_usize (image60, 8, 357);

  image64 = create_pixmap (MainWindow, "FrameHorizontal.jpg");
  gtk_widget_show (image64);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image64, 328, 16);
  gtk_widget_set_usize (image64, 192, 8);

  image66 = create_pixmap (MainWindow, "FrameHorizontal.jpg");
  gtk_widget_show (image66);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image66, 56, 16);
  gtk_widget_set_usize (image66, 192, 8);

  image65 = create_pixmap (MainWindow, "FrameHorizontal.jpg");
  gtk_widget_show (image65);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image65, 328, 365);
  gtk_widget_set_usize (image65, 192, 8);

  image63 = create_pixmap (MainWindow, "FrameVertical.jpg");
  gtk_widget_show (image63);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image63, 320, 16);
  gtk_widget_set_usize (image63, 8, 357);

  Annunciator12 = create_pixmap (MainWindow, "NoAttOff.jpg");
  gtk_widget_show (Annunciator12);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator12, 64, 80);
  gtk_widget_set_usize (Annunciator12, 84, 40);

  Annunciator13 = create_pixmap (MainWindow, "StbyOff.jpg");
  gtk_widget_show (Annunciator13);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator13, 64, 128);
  gtk_widget_set_usize (Annunciator13, 84, 40);

  Annunciator14 = create_pixmap (MainWindow, "KeyRelOff.jpg");
  gtk_widget_show (Annunciator14);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator14, 64, 176);
  gtk_widget_set_usize (Annunciator14, 84, 40);

  Annunciator15 = create_pixmap (MainWindow, "OprErrOff.jpg");
  gtk_widget_show (Annunciator15);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator15, 64, 224);
  gtk_widget_set_usize (Annunciator15, 84, 40);

  Annunciator16 = create_pixmap (MainWindow, "BlankOff.jpg");
  gtk_widget_show (Annunciator16);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator16, 64, 272);
  gtk_widget_set_usize (Annunciator16, 84, 40);

  Annunciator17 = create_pixmap (MainWindow, "BlankOff.jpg");
  gtk_widget_show (Annunciator17);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator17, 64, 320);
  gtk_widget_set_usize (Annunciator17, 84, 40);

  image67 = create_pixmap (MainWindow, "FrameHorizontal.jpg");
  gtk_widget_show (image67);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image67, 56, 368);
  gtk_widget_set_usize (image67, 192, 8);

  image62 = create_pixmap (MainWindow, "FrameVertical.jpg");
  gtk_widget_show (image62);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image62, 48, 16);
  gtk_widget_set_usize (image62, 8, 360);

  image61 = create_pixmap (MainWindow, "FrameVertical.jpg");
  gtk_widget_show (image61);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), image61, 248, 16);
  gtk_widget_set_usize (image61, 8, 360);

  Annunciator27 = create_pixmap (MainWindow, "BlankOff.jpg");
  gtk_widget_show (Annunciator27);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator27, 156, 320);
  gtk_widget_set_usize (Annunciator27, 84, 40);

  Annunciator26 = create_pixmap (MainWindow, "BlankOff.jpg");
  gtk_widget_show (Annunciator26);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator26, 156, 272);
  gtk_widget_set_usize (Annunciator26, 84, 40);

  Annunciator25 = create_pixmap (MainWindow, "TrackerOff.jpg");
  gtk_widget_show (Annunciator25);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator25, 156, 224);
  gtk_widget_set_usize (Annunciator25, 84, 40);

  Annunciator24 = create_pixmap (MainWindow, "RestartOff.jpg");
  gtk_widget_show (Annunciator24);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator24, 156, 176);
  gtk_widget_set_usize (Annunciator24, 84, 40);

  Annunciator23 = create_pixmap (MainWindow, "ProgOff.jpg");
  gtk_widget_show (Annunciator23);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator23, 156, 128);
  gtk_widget_set_usize (Annunciator23, 84, 40);

  Annunciator22 = create_pixmap (MainWindow, "GimbalLockOff.jpg");
  gtk_widget_show (Annunciator22);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator22, 156, 80);
  gtk_widget_set_usize (Annunciator22, 84, 40);

  PlusButton = gtk_button_new ();
  gtk_widget_show (PlusButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), PlusButton, 88, 392);
  gtk_widget_set_usize (PlusButton, 75, 75);
  gtk_widget_add_accelerator( PlusButton, "activate", AccelGroup, '+', 0, GTK_ACCEL_VISIBLE);

  iPlusButton = create_pixmap (MainWindow, "PlusUp.jpg");
  gtk_widget_show (iPlusButton);
  gtk_container_add (GTK_CONTAINER (PlusButton), iPlusButton);

  SevenButton = gtk_button_new ();
  gtk_widget_show (SevenButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), SevenButton, 168, 392);
  gtk_widget_set_usize (SevenButton, 75, 75);
  gtk_widget_add_accelerator( SevenButton, "activate", AccelGroup, GDK_7, 0, GTK_ACCEL_VISIBLE);

  iSevenButton = create_pixmap (MainWindow, "7Up.jpg");
  gtk_widget_show (iSevenButton);
  gtk_container_add (GTK_CONTAINER (SevenButton), iSevenButton);

  EightButton = gtk_button_new ();
  gtk_widget_show (EightButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), EightButton, 248, 392);
  gtk_widget_set_usize (EightButton, 75, 75);
  gtk_widget_add_accelerator( EightButton, "activate", AccelGroup, GDK_8, 0, GTK_ACCEL_VISIBLE);

  iEightButton = create_pixmap (MainWindow, "8Up.jpg");
  gtk_widget_show (iEightButton);
  gtk_container_add (GTK_CONTAINER (EightButton), iEightButton);

  NineButton = gtk_button_new ();
  gtk_widget_show (NineButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), NineButton, 328, 392);
  gtk_widget_set_usize (NineButton, 75, 75);
  gtk_widget_add_accelerator( NineButton, "activate", AccelGroup, GDK_9, 0, GTK_ACCEL_VISIBLE);

  iNineButton = create_pixmap (MainWindow, "9Up.jpg");
  gtk_widget_show (iNineButton);
  gtk_container_add (GTK_CONTAINER (NineButton), iNineButton);

  ClrButton = gtk_button_new ();
  gtk_widget_show (ClrButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), ClrButton, 408, 392);
  gtk_widget_set_usize (ClrButton, 75, 75);

  iClrButton = create_pixmap (MainWindow, "ClrUp.jpg");
  gtk_widget_show (iClrButton);
  gtk_container_add (GTK_CONTAINER (ClrButton), iClrButton);

  MinusButton = gtk_button_new ();
  gtk_widget_show (MinusButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), MinusButton, 88, 472);
  gtk_widget_set_usize (MinusButton, 75, 75);
  gtk_widget_add_accelerator( MinusButton, "activate", AccelGroup, '-', 0, GTK_ACCEL_VISIBLE);

  iMinusButton = create_pixmap (MainWindow, "MinusUp.jpg");
  gtk_widget_show (iMinusButton);
  gtk_container_add (GTK_CONTAINER (MinusButton), iMinusButton);

  FourButton = gtk_button_new ();
  gtk_widget_show (FourButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), FourButton, 168, 472);
  gtk_widget_set_usize (FourButton, 75, 75);
  gtk_widget_add_accelerator( FourButton, "activate", AccelGroup, GDK_4, 0, GTK_ACCEL_VISIBLE);

  iFourButton = create_pixmap (MainWindow, "4Up.jpg");
  gtk_widget_show (iFourButton);
  gtk_container_add (GTK_CONTAINER (FourButton), iFourButton);

  FiveButton = gtk_button_new ();
  gtk_widget_show (FiveButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), FiveButton, 248, 472);
  gtk_widget_set_usize (FiveButton, 75, 75);
  gtk_widget_add_accelerator( FiveButton, "activate", AccelGroup, GDK_5, 0, GTK_ACCEL_VISIBLE);

  iFiveButton = create_pixmap (MainWindow, "5Up.jpg");
  gtk_widget_show (iFiveButton);
  gtk_container_add (GTK_CONTAINER (FiveButton), iFiveButton);

  SixButton = gtk_button_new ();
  gtk_widget_show (SixButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), SixButton, 328, 472);
  gtk_widget_set_usize (SixButton, 75, 75);
  gtk_widget_add_accelerator( SixButton, "activate", AccelGroup, GDK_6, 0, GTK_ACCEL_VISIBLE);

  iSixButton = create_pixmap (MainWindow, "6Up.jpg");
  gtk_widget_show (iSixButton);
  gtk_container_add (GTK_CONTAINER (SixButton), iSixButton);

  ProButton = gtk_button_new ();
  gtk_widget_show (ProButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), ProButton, 408, 472);
  gtk_widget_set_usize (ProButton, 75, 75);

  iLastButton = create_pixmap (MainWindow, "ProUp.jpg");
  gtk_widget_show (iLastButton);
  gtk_container_add (GTK_CONTAINER (ProButton), iLastButton);

  ZeroButton = gtk_button_new ();
  gtk_widget_show (ZeroButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), ZeroButton, 88, 552);
  gtk_widget_set_usize (ZeroButton, 75, 75);
  gtk_widget_add_accelerator( ZeroButton, "activate", AccelGroup, GDK_0, 0, GTK_ACCEL_VISIBLE);

  iZeroButton = create_pixmap (MainWindow, "0Up.jpg");
  gtk_widget_show (iZeroButton);
  gtk_container_add (GTK_CONTAINER (ZeroButton), iZeroButton);

  OneButton = gtk_button_new ();
  gtk_widget_show (OneButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), OneButton, 168, 552);
  gtk_widget_set_usize (OneButton, 75, 75);
  gtk_widget_add_accelerator( OneButton, "activate", AccelGroup, GDK_1, 0, GTK_ACCEL_VISIBLE);

  iOneButton = create_pixmap (MainWindow, "1Up.jpg");
  gtk_widget_show (iOneButton);
  gtk_container_add (GTK_CONTAINER (OneButton), iOneButton);

  TwoButton = gtk_button_new ();
  gtk_widget_show (TwoButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), TwoButton, 248, 552);
  gtk_widget_set_usize (TwoButton, 75, 75);
  gtk_widget_add_accelerator( TwoButton, "activate", AccelGroup, GDK_2, 0, GTK_ACCEL_VISIBLE);

  iTwoButton = create_pixmap (MainWindow, "2Up.jpg");
  gtk_widget_show (iTwoButton);
  gtk_container_add (GTK_CONTAINER (TwoButton), iTwoButton);

  ThreeButton = gtk_button_new ();
  gtk_widget_show (ThreeButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), ThreeButton, 328, 552);
  gtk_widget_set_usize (ThreeButton, 75, 75);
  gtk_widget_add_accelerator( ThreeButton, "activate", AccelGroup, GDK_3, 0, GTK_ACCEL_VISIBLE);

  iThreeButton = create_pixmap (MainWindow, "3Up.jpg");
  gtk_widget_show (iThreeButton);
  gtk_container_add (GTK_CONTAINER (ThreeButton), iThreeButton);

  KeyRelButton = gtk_button_new ();
  gtk_widget_show (KeyRelButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), KeyRelButton, 408, 552);
  gtk_widget_set_usize (KeyRelButton, 75, 75);

  iKeyRelButton = create_pixmap (MainWindow, "KeyRelUp.jpg");
  gtk_widget_show (iKeyRelButton);
  gtk_container_add (GTK_CONTAINER (KeyRelButton), iKeyRelButton);

  EntrButton = gtk_button_new ();
  gtk_widget_show (EntrButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), EntrButton, 488, 432);
  gtk_widget_set_usize (EntrButton, 75, 75);
  gtk_widget_add_accelerator( EntrButton, "activate", AccelGroup, GDK_E, 0, GTK_ACCEL_VISIBLE);

  iEntrButton = create_pixmap (MainWindow, "EntrUp.jpg");
  gtk_widget_show (iEntrButton);
  gtk_container_add (GTK_CONTAINER (EntrButton), iEntrButton);

  RsetButton = gtk_button_new ();
  gtk_widget_show (RsetButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), RsetButton, 488, 512);
  gtk_widget_set_usize (RsetButton, 75, 75);

  iRsetButton = create_pixmap (MainWindow, "RsetUp.jpg");
  gtk_widget_show (iRsetButton);
  gtk_container_add (GTK_CONTAINER (RsetButton), iRsetButton);

  VerbButton = gtk_button_new ();
  gtk_widget_show (VerbButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), VerbButton, 8, 432);
  gtk_widget_set_usize (VerbButton, 75, 75);
  gtk_widget_add_accelerator( VerbButton, "activate", AccelGroup, GDK_V, 0, GTK_ACCEL_VISIBLE);

  iVerbButton = create_pixmap (MainWindow, "VerbUp.jpg");
  gtk_widget_show (iVerbButton);
  gtk_container_add (GTK_CONTAINER (VerbButton), iVerbButton);

  NounButton = gtk_button_new ();
  gtk_widget_show (NounButton);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), NounButton, 8, 512);
  gtk_widget_set_usize (NounButton, 75, 75);
  gtk_widget_add_accelerator( NounButton, "activate", AccelGroup, GDK_N, 0, GTK_ACCEL_VISIBLE);

  iNounButton = create_pixmap (MainWindow, "NounUp.jpg");
  gtk_widget_show (iNounButton);
  gtk_container_add (GTK_CONTAINER (NounButton), iNounButton);

  VerbAnnunciator = create_pixmap (MainWindow, "VerbOn.jpg");
  gtk_widget_show (VerbAnnunciator);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), VerbAnnunciator, 328, 104);
  gtk_widget_set_usize (VerbAnnunciator, 64, 24);

  Annunciator11 = create_pixmap (MainWindow, "UplinkActyOff.jpg");
  gtk_widget_show (Annunciator11);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator11, 64, 32);
  gtk_widget_set_usize (Annunciator11, 84, 40);

  Annunciator21 = create_pixmap (MainWindow, "TempOff.jpg");
  gtk_widget_show (Annunciator21);
  gtk_fixed_put (GTK_FIXED (ObjectGrid), Annunciator21, 156, 32);
  gtk_widget_set_usize (Annunciator21, 84, 40);

  gtk_signal_connect (GTK_OBJECT (MainWindow), "destroy_event",
                      GTK_SIGNAL_FUNC (on_MainWindow_destroy_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (MainWindow), "delete_event",
                      GTK_SIGNAL_FUNC (on_MainWindow_delete_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (PlusButton), "clicked",
                      GTK_SIGNAL_FUNC (on_PlusButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (SevenButton), "clicked",
                      GTK_SIGNAL_FUNC (on_SevenButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (EightButton), "clicked",
                      GTK_SIGNAL_FUNC (on_EightButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (NineButton), "clicked",
                      GTK_SIGNAL_FUNC (on_NineButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (ClrButton), "clicked",
                      GTK_SIGNAL_FUNC (on_ClrButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (MinusButton), "clicked",
                      GTK_SIGNAL_FUNC (on_MinusButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (FourButton), "clicked",
                      GTK_SIGNAL_FUNC (on_FourButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (FiveButton), "clicked",
                      GTK_SIGNAL_FUNC (on_FiveButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (SixButton), "clicked",
                      GTK_SIGNAL_FUNC (on_SixButton_pressed),
                      NULL);



  gtk_signal_connect (GTK_OBJECT (ProButton), "pressed",
                      GTK_SIGNAL_FUNC (on_ProButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (ProButton), "released",
                      GTK_SIGNAL_FUNC (on_ProButton_released),
                      NULL);



  gtk_signal_connect (GTK_OBJECT (ZeroButton), "clicked",
                      GTK_SIGNAL_FUNC (on_ZeroButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (OneButton), "clicked",
                      GTK_SIGNAL_FUNC (on_OneButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (TwoButton), "clicked",
                      GTK_SIGNAL_FUNC (on_TwoButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (ThreeButton), "clicked",
                      GTK_SIGNAL_FUNC (on_ThreeButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (KeyRelButton), "clicked",
                      GTK_SIGNAL_FUNC (on_KeyRelButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (EntrButton), "clicked",
                      GTK_SIGNAL_FUNC (on_EntrButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (RsetButton), "clicked",
                      GTK_SIGNAL_FUNC (on_RsetButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (VerbButton), "clicked",
                      GTK_SIGNAL_FUNC (on_VerbButton_pressed),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (NounButton), "clicked",
                      GTK_SIGNAL_FUNC (on_NounButton_pressed),
                      NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (MainWindow, MainWindow, "MainWindow");
  GLADE_HOOKUP_OBJECT (MainWindow, ObjectGrid, "ObjectGrid");
  GLADE_HOOKUP_OBJECT (MainWindow, R3PlusMinus, "R3PlusMinus");
  GLADE_HOOKUP_OBJECT (MainWindow, R3D4Digit, "R3D4Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R3D5Digit, "R3D5Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R2D5Digit, "R2D5Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R2D4Digit, "R2D4Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R2D3Digit, "R2D3Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R2D2Digit, "R2D2Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R2D1Digit, "R2D1Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R2PlusMinus, "R2PlusMinus");
  GLADE_HOOKUP_OBJECT (MainWindow, R1D5Digit, "R1D5Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R1D4Digit, "R1D4Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R1D3Digit, "R1D3Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R1D2Digit, "R1D2Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R1D1Digit, "R1D1Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R1PlusMinus, "R1PlusMinus");
  GLADE_HOOKUP_OBJECT (MainWindow, ND2Digit, "ND2Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, ND1Digit, "ND1Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, VD2Digit, "VD2Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, VD1Digit, "VD1Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, image57, "image57");
  GLADE_HOOKUP_OBJECT (MainWindow, NounAnnunciator, "NounAnnunciator");
  GLADE_HOOKUP_OBJECT (MainWindow, MD2Digit, "MD2Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, MD1Digit, "MD1Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, image58, "image58");
  GLADE_HOOKUP_OBJECT (MainWindow, image55, "image55");
  GLADE_HOOKUP_OBJECT (MainWindow, image56, "image56");
  GLADE_HOOKUP_OBJECT (MainWindow, image54, "image54");
  GLADE_HOOKUP_OBJECT (MainWindow, R3D1Digit, "R3D1Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R3D2Digit, "R3D2Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, R3D3Digit, "R3D3Digit");
  GLADE_HOOKUP_OBJECT (MainWindow, CompActyAnnunciator, "CompActyAnnunciator");
  GLADE_HOOKUP_OBJECT (MainWindow, image59, "image59");
  GLADE_HOOKUP_OBJECT (MainWindow, ModeAnnunciator, "ModeAnnunciator");
  GLADE_HOOKUP_OBJECT (MainWindow, image60, "image60");
  GLADE_HOOKUP_OBJECT (MainWindow, image64, "image64");
  GLADE_HOOKUP_OBJECT (MainWindow, image66, "image66");
  GLADE_HOOKUP_OBJECT (MainWindow, image65, "image65");
  GLADE_HOOKUP_OBJECT (MainWindow, image63, "image63");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator12, "Annunciator12");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator13, "Annunciator13");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator14, "Annunciator14");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator15, "Annunciator15");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator16, "Annunciator16");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator17, "Annunciator17");
  GLADE_HOOKUP_OBJECT (MainWindow, image67, "image67");
  GLADE_HOOKUP_OBJECT (MainWindow, image62, "image62");
  GLADE_HOOKUP_OBJECT (MainWindow, image61, "image61");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator27, "Annunciator27");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator26, "Annunciator26");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator25, "Annunciator25");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator24, "Annunciator24");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator23, "Annunciator23");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator22, "Annunciator22");
  GLADE_HOOKUP_OBJECT (MainWindow, PlusButton, "PlusButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iPlusButton, "iPlusButton");
  GLADE_HOOKUP_OBJECT (MainWindow, SevenButton, "SevenButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iSevenButton, "iSevenButton");
  GLADE_HOOKUP_OBJECT (MainWindow, EightButton, "EightButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iEightButton, "iEightButton");
  GLADE_HOOKUP_OBJECT (MainWindow, NineButton, "NineButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iNineButton, "iNineButton");
  GLADE_HOOKUP_OBJECT (MainWindow, ClrButton, "ClrButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iClrButton, "iClrButton");
  GLADE_HOOKUP_OBJECT (MainWindow, MinusButton, "MinusButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iMinusButton, "iMinusButton");
  GLADE_HOOKUP_OBJECT (MainWindow, FourButton, "FourButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iFourButton, "iFourButton");
  GLADE_HOOKUP_OBJECT (MainWindow, FiveButton, "FiveButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iFiveButton, "iFiveButton");
  GLADE_HOOKUP_OBJECT (MainWindow, SixButton, "SixButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iSixButton, "iSixButton");
  GLADE_HOOKUP_OBJECT (MainWindow, ProButton, "ProButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iLastButton, "iLastButton");
  GLADE_HOOKUP_OBJECT (MainWindow, ZeroButton, "ZeroButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iZeroButton, "iZeroButton");
  GLADE_HOOKUP_OBJECT (MainWindow, OneButton, "OneButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iOneButton, "iOneButton");
  GLADE_HOOKUP_OBJECT (MainWindow, TwoButton, "TwoButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iTwoButton, "iTwoButton");
  GLADE_HOOKUP_OBJECT (MainWindow, ThreeButton, "ThreeButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iThreeButton, "iThreeButton");
  GLADE_HOOKUP_OBJECT (MainWindow, KeyRelButton, "KeyRelButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iKeyRelButton, "iKeyRelButton");
  GLADE_HOOKUP_OBJECT (MainWindow, EntrButton, "EntrButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iEntrButton, "iEntrButton");
  GLADE_HOOKUP_OBJECT (MainWindow, RsetButton, "RsetButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iRsetButton, "iRsetButton");
  GLADE_HOOKUP_OBJECT (MainWindow, VerbButton, "VerbButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iVerbButton, "iVerbButton");
  GLADE_HOOKUP_OBJECT (MainWindow, NounButton, "NounButton");
  GLADE_HOOKUP_OBJECT (MainWindow, iNounButton, "iNounButton");
  GLADE_HOOKUP_OBJECT (MainWindow, VerbAnnunciator, "VerbAnnunciator");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator11, "Annunciator11");
  GLADE_HOOKUP_OBJECT (MainWindow, Annunciator21, "Annunciator21");

  return MainWindow;
}

