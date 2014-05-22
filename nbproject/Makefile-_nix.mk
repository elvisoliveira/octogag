#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=_nix
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile.mk

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Controller.o \
	${OBJECTDIR}/OctoFrame.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/thread.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=`/home/tesla/projects/libs/wxwidgets/bin/wx-config --cxxflags` 
CXXFLAGS=`/home/tesla/projects/libs/wxwidgets/bin/wx-config --cxxflags` 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/usr/include -L/home/tesla/projects/libs/curl/lib -L/home/tesla/projects/libs/wxwidgets/lib -L/home/tesla/projects/octonine -L../libs/wxwidgets/lib/wx/include/gtk2-ansi-release-2.8

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag ${OBJECTFILES} ${LDLIBSOPTIONS} `/home/tesla/projects/libs/wxwidgets/bin/wx-config --libs` -lcurl

${OBJECTDIR}/Controller.o: Controller.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/home/tesla/projects/libs/curl/include -I/home/tesla/projects/libs/rapidxml -I/home/tesla/projects/libs/wxwidgets/include/wx-2.8 -I/home/tesla/projects/octonine -I../libs/wxwidgets/lib/wx/include/gtk2-ansi-release-2.8 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Controller.o Controller.cpp

${OBJECTDIR}/OctoFrame.o: OctoFrame.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/home/tesla/projects/libs/curl/include -I/home/tesla/projects/libs/rapidxml -I/home/tesla/projects/libs/wxwidgets/include/wx-2.8 -I/home/tesla/projects/octonine -I../libs/wxwidgets/lib/wx/include/gtk2-ansi-release-2.8 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OctoFrame.o OctoFrame.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/home/tesla/projects/libs/curl/include -I/home/tesla/projects/libs/rapidxml -I/home/tesla/projects/libs/wxwidgets/include/wx-2.8 -I/home/tesla/projects/octonine -I../libs/wxwidgets/lib/wx/include/gtk2-ansi-release-2.8 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/thread.o: thread.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/home/tesla/projects/libs/curl/include -I/home/tesla/projects/libs/rapidxml -I/home/tesla/projects/libs/wxwidgets/include/wx-2.8 -I/home/tesla/projects/octonine -I../libs/wxwidgets/lib/wx/include/gtk2-ansi-release-2.8 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thread.o thread.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
