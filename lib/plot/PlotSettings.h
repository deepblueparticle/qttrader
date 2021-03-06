/*
 *  QtTrader stock charter
 *
 *  Copyright (C) 2001-2007 Stefan S. Stratigakos
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 *  USA.
 */

#ifndef PLOT_SETTINGS_HPP
#define PLOT_SETTINGS_HPP

#include <QColor>
#include <QHash>
#include <QList>
#include <QString>

#include "Marker.h"
#include "curve/Curve.h"

typedef struct
{
  QColor colorBackground;
  int barLength;
  QHash<QString, Marker* > markers;
  QHash<QString, Curve* > curves;
  QString name;
  Marker* selected;
  bool antiAlias;
  int spacing;
  double high;
  double low;
  int startPos;
  int endPos;
  int status;
  bool info;
  
} PlotSettings;


#endif
