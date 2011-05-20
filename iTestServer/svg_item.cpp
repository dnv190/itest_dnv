/*******************************************************************
 This file is part of iTest
 Copyright (C) 2005-2009 Michal Tomlein (michal.tomlein@gmail.com)

 iTest is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public Licence
 as published by the Free Software Foundation; either version 2
 of the Licence, or (at your option) any later version.

 iTest is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public Licence for more details.

 You should have received a copy of the GNU General Public Licence
 along with iTest; if not, write to the Free Software Foundation,
 Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
********************************************************************/

#include "svg_item.h"

SvgItem::SvgItem():
QListWidgetItem(0, QListWidgetItem::UserType)
{ si_valid = false; }

SvgItem::SvgItem(const QString & text):
QListWidgetItem(0, QListWidgetItem::UserType)
{ si_valid = false; setText(text); }

SvgItem::SvgItem(const QString & text, const QString & svg):
QListWidgetItem(0, QListWidgetItem::UserType)
{ si_valid = false; setText(text); setSvg(svg); }

bool SvgItem::setSvg(QString svg)
{

   // svg.remove("\n");
    QSvgRenderer svgrenderer(svg.toUtf8());
    if (!svgrenderer.isValid())
    {
        return SetBitmap(svg);
    }
    else
    {
        si_valid = true;
    }
    QPixmap pixmap(64, 64);
    QPainter painter(&pixmap);
    painter.save();
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(Qt::white));
    painter.drawRect(QRect(0, 0, 64, 64));
    painter.restore();
    svgrenderer.render(&painter);
    setIcon(QIcon::QIcon(pixmap));
    si_svg = svg;
    return true;
}
bool SvgItem::SetBitmap(QString bitmap)
{
    QImage image;
    QByteArray array = QByteArray::fromBase64(bitmap.toUtf8());
    if( !image.loadFromData(array))
    {
        return false;
    }
    else
    {
        si_valid = true;
    }
   QPixmap pixmap(64, 64);
   QPainter painter(&pixmap);
   painter.save();
   painter.setPen(Qt::NoPen);
   painter.setBrush(QColor(Qt::white));
   painter.drawRect(QRect(0, 0, 64, 64));
   painter.restore();
   painter.drawImage(QRect(0,0,64,64),image);
   setIcon(QIcon::QIcon(pixmap));
   si_svg = bitmap;
   return true;
}

QString SvgItem::svg() { return si_svg; }

bool SvgItem::isValid() { return si_valid; }
