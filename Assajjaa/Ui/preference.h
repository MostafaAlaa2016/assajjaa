/*
    This file is part of JapKatsuyou project; an application that provide
    Japanese verb conjugation

    Copyright (C) 2013  Abdelkrime Aries <kariminfo0@gmail.com>
    Copyright (C) 2013  DzCoding group (JapKatsuyou team)

    Authors:
            Abdelkrime Aries <kariminfo0@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PREFERENCE_H
#define PREFERENCE_H

#include "UiHelper/export.h"
#include "UiHelper/language.h"
#include "UiHelper/style.h"

#include <QDebug>
#include <QDialog>
#include <QMap>


namespace Ui {
class Preference;
}

class Preference : public QDialog
{
    Q_OBJECT
    
public:
    explicit Preference(QWidget *parent = 0);
    ~Preference();

private:
    Ui::Preference *ui;
    void doInit();
    void doSave();

private slots:
    void on_prefOK_accepted();

};

#endif // PREFERENCE_H
