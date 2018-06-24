/*
 *  Copyright (C) 2017 Damir Porobic <https://github.com/damirporobic>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef KSNIP_FILENAMEFORMATTER_H
#define KSNIP_FILENAMEFORMATTER_H

#include <QString>
#include <QDateTime>
#include <QFile>

class FilenameFormatter
{
public:
    static QString extractPath(const QString &path);
    static QString extractFilename(const QString &path);
    static QString extractFormat(const QString &path);

    static QString updateTimeAndDate(QString filename);
    static QString makeUniqueFilename(const QString &path,
                                      const QString &filename,
                                      const QString &extension = 0);
};

#endif // KSNIP_FILENAMEFORMATTER_H