/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

////////////////////////////////////////////////////////////////////////////////
//																																						//
//  (c) 2001-2003 Electronic Arts Inc.																				//
//																																						//
////////////////////////////////////////////////////////////////////////////////

///// Win32LocalFile.h ///////////////////////////
// Bryan Cleveland, August 2002
//////////////////////////////////////////////////

#pragma once

#ifndef __WIN32LOCALFILE_H
#define __WIN32LOCALFILE_H

#include "Common/LocalFile.h"

class Win32LocalFile : public LocalFile
{
	MEMORY_POOL_GLUE_WITH_USERLOOKUP_CREATE(Win32LocalFile, "Win32LocalFile")		
public:
	Win32LocalFile();
	//virtual ~Win32LocalFile();

protected:
};

#endif // __WIN32LOCALFILE_H