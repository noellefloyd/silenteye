//  This file is part of SilentEye.
//
//  SilentEye is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  SilentEye is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with SilentEye.  If not, see <http://www.gnu.org/licenses/>.

#include <QtTest/QtTest>
#include <QObject>
#include <imagemoduleinterface.h>

using namespace SilentEyeFramework;

class TestFormatJPEG : public QObject 
{
    Q_OBJECT;

private:
    ImageModuleInterface *m_module;
    void loadModule();

private slots:
    void process();
    void process_data();
    void manualProcess_data();
    void manualProcess();
};
