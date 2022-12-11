#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../JukeBox2.0.X/adafruit.c ../JukeBox2.0.X/fsm.c ../JukeBox2.0.X/rfid.c ../JukeBox2.0.X/testmain.c ../JukeBox2.0.X/uart1.c ../JukeBox.X/timer1.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/328982905/adafruit.o ${OBJECTDIR}/_ext/328982905/fsm.o ${OBJECTDIR}/_ext/328982905/rfid.o ${OBJECTDIR}/_ext/328982905/testmain.o ${OBJECTDIR}/_ext/328982905/uart1.o ${OBJECTDIR}/_ext/513522273/timer1.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/328982905/adafruit.o.d ${OBJECTDIR}/_ext/328982905/fsm.o.d ${OBJECTDIR}/_ext/328982905/rfid.o.d ${OBJECTDIR}/_ext/328982905/testmain.o.d ${OBJECTDIR}/_ext/328982905/uart1.o.d ${OBJECTDIR}/_ext/513522273/timer1.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/328982905/adafruit.o ${OBJECTDIR}/_ext/328982905/fsm.o ${OBJECTDIR}/_ext/328982905/rfid.o ${OBJECTDIR}/_ext/328982905/testmain.o ${OBJECTDIR}/_ext/328982905/uart1.o ${OBJECTDIR}/_ext/513522273/timer1.o

# Source Files
SOURCEFILES=../JukeBox2.0.X/adafruit.c ../JukeBox2.0.X/fsm.c ../JukeBox2.0.X/rfid.c ../JukeBox2.0.X/testmain.c ../JukeBox2.0.X/uart1.c ../JukeBox.X/timer1.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX250F128B
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/328982905/adafruit.o: ../JukeBox2.0.X/adafruit.c  .generated_files/flags/default/51ac2dd5d6b55d692f6392b4950e9f5b6eb1b1ef .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/adafruit.o.d" -o ${OBJECTDIR}/_ext/328982905/adafruit.o ../JukeBox2.0.X/adafruit.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/fsm.o: ../JukeBox2.0.X/fsm.c  .generated_files/flags/default/17cfd1e8e4ce7ff6a87e45e974420f50bd65d2c6 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/fsm.o.d" -o ${OBJECTDIR}/_ext/328982905/fsm.o ../JukeBox2.0.X/fsm.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/rfid.o: ../JukeBox2.0.X/rfid.c  .generated_files/flags/default/2c4d781c11ef564f8147dc96d50af68ae436cd20 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/rfid.o.d" -o ${OBJECTDIR}/_ext/328982905/rfid.o ../JukeBox2.0.X/rfid.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/testmain.o: ../JukeBox2.0.X/testmain.c  .generated_files/flags/default/1fa167d08f215680ad8d03f70c07e0314db5fa5e .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/testmain.o.d" -o ${OBJECTDIR}/_ext/328982905/testmain.o ../JukeBox2.0.X/testmain.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/uart1.o: ../JukeBox2.0.X/uart1.c  .generated_files/flags/default/16028acf47e4d5796f046f73cf26f70aa1b2f666 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/uart1.o.d" -o ${OBJECTDIR}/_ext/328982905/uart1.o ../JukeBox2.0.X/uart1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/513522273/timer1.o: ../JukeBox.X/timer1.c  .generated_files/flags/default/a608e50348acb9f24ab99e3c6b8d22542d2da711 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/513522273" 
	@${RM} ${OBJECTDIR}/_ext/513522273/timer1.o.d 
	@${RM} ${OBJECTDIR}/_ext/513522273/timer1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/513522273/timer1.o.d" -o ${OBJECTDIR}/_ext/513522273/timer1.o ../JukeBox.X/timer1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
else
${OBJECTDIR}/_ext/328982905/adafruit.o: ../JukeBox2.0.X/adafruit.c  .generated_files/flags/default/11988a6957b3385c3b1857e1aa04aa67fd98f50f .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/adafruit.o.d" -o ${OBJECTDIR}/_ext/328982905/adafruit.o ../JukeBox2.0.X/adafruit.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/fsm.o: ../JukeBox2.0.X/fsm.c  .generated_files/flags/default/4f40315301ab1204d9a5048b3d3060ccdb893ff6 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/fsm.o.d" -o ${OBJECTDIR}/_ext/328982905/fsm.o ../JukeBox2.0.X/fsm.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/rfid.o: ../JukeBox2.0.X/rfid.c  .generated_files/flags/default/1960b5e73fcfc3d22e41ec4301f421859bb92c8c .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/rfid.o.d" -o ${OBJECTDIR}/_ext/328982905/rfid.o ../JukeBox2.0.X/rfid.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/testmain.o: ../JukeBox2.0.X/testmain.c  .generated_files/flags/default/ffef7cfb33f000c543247129110909cfb5c6a32c .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/testmain.o.d" -o ${OBJECTDIR}/_ext/328982905/testmain.o ../JukeBox2.0.X/testmain.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/uart1.o: ../JukeBox2.0.X/uart1.c  .generated_files/flags/default/141e3b9727dfa0e4100ea801916c1c07bbf3b1d3 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/uart1.o.d" -o ${OBJECTDIR}/_ext/328982905/uart1.o ../JukeBox2.0.X/uart1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/513522273/timer1.o: ../JukeBox.X/timer1.c  .generated_files/flags/default/e4301760e7bdf2146489e7625099a189ac551427 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/513522273" 
	@${RM} ${OBJECTDIR}/_ext/513522273/timer1.o.d 
	@${RM} ${OBJECTDIR}/_ext/513522273/timer1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/513522273/timer1.o.d" -o ${OBJECTDIR}/_ext/513522273/timer1.o ../JukeBox.X/timer1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_PK3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC00490:0x1FC00BEF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_PK3=1,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml 
	
else
${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml 
	${MP_CC_DIR}\\xc32-bin2hex ${DISTDIR}/Jukebox3.0.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
