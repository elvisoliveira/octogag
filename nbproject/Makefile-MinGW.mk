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
CND_CONF=MinGW
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile.mk

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1442889694/Controller.o \
	${OBJECTDIR}/_ext/1442889694/OctoFrame.o \
	${OBJECTDIR}/_ext/1442889694/ScrolledImageComponent.o \
	${OBJECTDIR}/main.o


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
LDLIBSOPTIONS=-L/C/Development/wxWidgets-2.9.5/lib/gcc_lib -L/C/Development/curl-7.36.0/lib -L/C/Users/elvis.nunes/Documents/PersonalFiles/octonine -lcurl -lcurl -lcurldll

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag ${OBJECTFILES} ${LDLIBSOPTIONS} -mthreads -lwxmsw29u -lwxtiff -lwxjpeg -lwxpng -lwxzlib -lwxregexu -lwxexpat -lkernel32 -luser32 -lwxregexu -lgdi32 -lcomdlg32 -lwinspool -lwinmm -lshell32 -lcomctl32 -lole32 -loleaut32 -luuid -lrpcrt4 -ladvapi32 -lwsock32

${OBJECTDIR}/_ext/1442889694/Controller.o: /home/tesla/projects/octogag/Controller.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1442889694
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/Development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/Users/elvis.nunes/Documents/PersonalFiles/octonine -I/C/Development/curl-7.36.0/include -I/C/Development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1442889694/Controller.o /home/tesla/projects/octogag/Controller.cpp

${OBJECTDIR}/_ext/1442889694/OctoFrame.o: /home/tesla/projects/octogag/OctoFrame.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1442889694
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/Development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/Users/elvis.nunes/Documents/PersonalFiles/octonine -I/C/Development/curl-7.36.0/include -I/C/Development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1442889694/OctoFrame.o /home/tesla/projects/octogag/OctoFrame.cpp

${OBJECTDIR}/_ext/1442889694/ScrolledImageComponent.o: /home/tesla/projects/octogag/ScrolledImageComponent.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1442889694
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/Development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/Users/elvis.nunes/Documents/PersonalFiles/octonine -I/C/Development/curl-7.36.0/include -I/C/Development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1442889694/ScrolledImageComponent.o /home/tesla/projects/octogag/ScrolledImageComponent.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/C/Development/wxWidgets-2.9.5/lib/gcc_lib/mswu -I/C/Users/elvis.nunes/Documents/PersonalFiles/octonine -I/C/Development/curl-7.36.0/include -I/C/Development/rapidxml -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

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
