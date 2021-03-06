/********************************************************************
	created:	2015/09/24
	filename: 	BladeModelImporter.h
	author:		Crazii
	
	purpose:	
*********************************************************************/
#ifndef __Blade_BladeModelImporter_h__
#define __Blade_BladeModelImporter_h__
#include <BladePlatform.h>

#if !defined(BLADE_STATIC)	//dynamic link lib

#	if BLADE_COMPILER == BLADE_COMPILER_MSVC
#		ifdef BLADE_MODELIMPORTER_EXPORTS
#			define BLADE_MODELIMPORTER_API __declspec( dllexport )
#		else
#			define BLADE_MODELIMPORTER_API __declspec( dllimport )
#		endif
#	elif BLADE_COMPILER_GNU_EXTENSION
#		define BLADE_MODELIMPORTER_API __attribute__ ((visibility("default")))
#	endif

#else

#	define BLADE_MODELIMPORTER	//static link lib

#endif


#endif // __Blade_BladeModelImporter_h__