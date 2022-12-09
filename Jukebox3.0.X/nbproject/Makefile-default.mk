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
${OBJECTDIR}/_ext/328982905/adafruit.o: ../JukeBox2.0.X/adafruit.c  .generated_files/flags/default/5888c7eda630964f9650e6f054dfd4e6ea8eb825 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/adafruit.o.d" -o ${OBJECTDIR}/_ext/328982905/adafruit.o ../JukeBox2.0.X/adafruit.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/fsm.o: ../JukeBox2.0.X/fsm.c  .generated_files/flags/default/d54fd6c0003a7a065a849ddf9f3cb51c3aa2b44f .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/fsm.o.d" -o ${OBJECTDIR}/_ext/328982905/fsm.o ../JukeBox2.0.X/fsm.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/rfid.o: ../JukeBox2.0.X/rfid.c  .generated_files/flags/default/d69abca91cfbe1e30c4bb32a5a58363b581ef789 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/rfid.o.d" -o ${OBJECTDIR}/_ext/328982905/rfid.o ../JukeBox2.0.X/rfid.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/testmain.o: ../JukeBox2.0.X/testmain.c  .generated_files/flags/default/527496bac3c60dafa00294eab7238aab8884edd1 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/testmain.o.d" -o ${OBJECTDIR}/_ext/328982905/testmain.o ../JukeBox2.0.X/testmain.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/uart1.o: ../JukeBox2.0.X/uart1.c  .generated_files/flags/default/5372e6629e2d2909c468b52181ef45540aff4b89 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/uart1.o.d" -o ${OBJECTDIR}/_ext/328982905/uart1.o ../JukeBox2.0.X/uart1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/513522273/timer1.o: ../JukeBox.X/timer1.c  .generated_files/flags/default/9cb7bc0a8ef4fcc935abd2d1a5f113fca2634f1d .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/513522273" 
	@${RM} ${OBJECTDIR}/_ext/513522273/timer1.o.d 
	@${RM} ${OBJECTDIR}/_ext/513522273/timer1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/513522273/timer1.o.d" -o ${OBJECTDIR}/_ext/513522273/timer1.o ../JukeBox.X/timer1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
else
${OBJECTDIR}/_ext/328982905/adafruit.o: ../JukeBox2.0.X/adafruit.c  .generated_files/flags/default/c7324b2f3cf23cf63ea9264433b10d50e33d3eea .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/adafruit.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/adafruit.o.d" -o ${OBJECTDIR}/_ext/328982905/adafruit.o ../JukeBox2.0.X/adafruit.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/fsm.o: ../JukeBox2.0.X/fsm.c  .generated_files/flags/default/e756d4f297cd6e1596362320e1e397d1670902cd .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/fsm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/fsm.o.d" -o ${OBJECTDIR}/_ext/328982905/fsm.o ../JukeBox2.0.X/fsm.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/rfid.o: ../JukeBox2.0.X/rfid.c  .generated_files/flags/default/a270057b7899fe90eb418ac9faab5211f016e423 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/rfid.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/rfid.o.d" -o ${OBJECTDIR}/_ext/328982905/rfid.o ../JukeBox2.0.X/rfid.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/testmain.o: ../JukeBox2.0.X/testmain.c  .generated_files/flags/default/a4d1be350055030be59e4ae7227755694257ed2e .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/testmain.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/testmain.o.d" -o ${OBJECTDIR}/_ext/328982905/testmain.o ../JukeBox2.0.X/testmain.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/uart1.o: ../JukeBox2.0.X/uart1.c  .generated_files/flags/default/95805987be448e2557beca0c84e5529249066aa7 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/uart1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/uart1.o.d" -o ${OBJECTDIR}/_ext/328982905/uart1.o ../JukeBox2.0.X/uart1.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/513522273/timer1.o: ../JukeBox.X/timer1.c  .generated_files/flags/default/92f4f165d10905cb7eaa5d9900e1f039567fcbfa .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
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
