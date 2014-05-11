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
	${OBJECTDIR}/_ext/1442889694/Controller.o \
	${OBJECTDIR}/_ext/1442889694/OctoFrame.o \
	${OBJECTDIR}/_ext/1442889694/thread.o \
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
LDLIBSOPTIONS=-L/usr/include -L/usr/include/curl -L/usr/include/wx-2.8 -L/home/tesla/projects/octonine

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/octogag ${OBJECTFILES} ${LDLIBSOPTIONS} `wx-config --libs` -lcurl

${OBJECTDIR}/_ext/1442889694/Controller.o: /home/tesla/projects/octogag/Controller.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1442889694
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/curl -I/usr/include/rapidxml -I/usr/include/wx-2.8 -I/home/tesla/projects/octonine -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1442889694/Controller.o /home/tesla/projects/octogag/Controller.cpp

${OBJECTDIR}/_ext/1442889694/OctoFrame.o: /home/tesla/projects/octogag/OctoFrame.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1442889694
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/curl -I/usr/include/rapidxml -I/usr/include/wx-2.8 -I/home/tesla/projects/octonine -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1442889694/OctoFrame.o /home/tesla/projects/octogag/OctoFrame.cpp

${OBJECTDIR}/_ext/1442889694/thread.o: /home/tesla/projects/octogag/thread.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1442889694
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/curl -I/usr/include/rapidxml -I/usr/include/wx-2.8 -I/home/tesla/projects/octonine -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1442889694/thread.o /home/tesla/projects/octogag/thread.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/curl -I/usr/include/rapidxml -I/usr/include/wx-2.8 -I/home/tesla/projects/octonine -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

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
