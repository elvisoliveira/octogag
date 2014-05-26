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
CND_PLATFORM=MinGW_TDM-Windows
CND_DLIB_EXT=dll
CND_CONF=MinGW
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile.mk

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1021869461/OctoImage.o \
	${OBJECTDIR}/_ext/1021869461/Utils.o \
	${OBJECTDIR}/Controller.o \
	${OBJECTDIR}/OctoFrame.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/thread.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=`wx-config --cxxflags` 
CXXFLAGS=`wx-config --cxxflags` 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/C/development/wxWidgets-2.9.5/lib/gcc_lib -L/C/development/projects/octonine -L/C/development/curl-7.36.0/lib -lcurl -lcurl -lcurldll

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag ${OBJECTFILES} ${LDLIBSOPTIONS} -mthreads -lwxmsw29u -lwxtiff -lwxjpeg -lwxpng -lwxzlib -lwxregexu -lwxexpat -lkernel32 -luser32 -lwxregexu -lgdi32 -lcomdlg32 -lwinspool -lwinmm -lshell32 -lcomctl32 -lole32 -loleaut32 -luuid -lrpcrt4 -ladvapi32 -lwsock32

${OBJECTDIR}/_ext/1021869461/OctoImage.o: /C/development/projects/octogag/OctoImage.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1021869461
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/development/curl-7.36.0/include -I/C/development/projects/octonine -I/C/development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1021869461/OctoImage.o /C/development/projects/octogag/OctoImage.cpp

${OBJECTDIR}/_ext/1021869461/Utils.o: /C/development/projects/octogag/Utils.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1021869461
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/development/curl-7.36.0/include -I/C/development/projects/octonine -I/C/development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1021869461/Utils.o /C/development/projects/octogag/Utils.cpp

${OBJECTDIR}/Controller.o: Controller.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/development/curl-7.36.0/include -I/C/development/projects/octonine -I/C/development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Controller.o Controller.cpp

${OBJECTDIR}/OctoFrame.o: OctoFrame.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/development/curl-7.36.0/include -I/C/development/projects/octonine -I/C/development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OctoFrame.o OctoFrame.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/development/curl-7.36.0/include -I/C/development/projects/octonine -I/C/development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/thread.o: thread.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/development/curl-7.36.0/include -I/C/development/projects/octonine -I/C/development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/thread.o thread.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
