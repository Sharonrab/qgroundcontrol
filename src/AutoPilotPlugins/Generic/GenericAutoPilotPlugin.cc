/*=====================================================================
 
 QGroundControl Open Source Ground Control Station
 
 (c) 2009 - 2014 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 
 This file is part of the QGROUNDCONTROL project
 
 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.
 
 ======================================================================*/

/// @file
///     @author Don Gagne <don@thegagnes.com>

#include "GenericAutoPilotPlugin.h"

GenericAutoPilotPlugin::GenericAutoPilotPlugin(UASInterface* uas, QObject* parent) :
    AutoPilotPlugin(uas, parent)
{
    Q_ASSERT(uas);
    
    _parameterFacts = new GenericParameterFacts(this, uas, this);
    Q_CHECK_PTR(_parameterFacts);
    
    connect(_parameterFacts, &GenericParameterFacts::parametersReady, this, &GenericAutoPilotPlugin::_parametersReady);
    connect(_parameterFacts, &GenericParameterFacts::parameterListProgress, this, &GenericAutoPilotPlugin::parameterListProgress);
}

void GenericAutoPilotPlugin::clearStaticData(void)
{
    // No Static data yet
}

const QVariantList& GenericAutoPilotPlugin::vehicleComponents(void)
{
    static QVariantList emptyList;
    
    return emptyList;
}

void GenericAutoPilotPlugin::_parametersReady(void)
{
    _pluginReady = true;
    emit pluginReadyChanged(_pluginReady);
}
