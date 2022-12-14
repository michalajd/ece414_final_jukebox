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
SOURCEFILES_QUOTED_IF_SPACED=../JukeBox2.0.X/adafruit.c ../JukeBox2.0.X/fsm.c ../JukeBox2.0.X/rfid.c ../JukeBox2.0.X/testmain.c ../JukeBox2.0.X/uart1.c ../JukeBox.X/timer1.c ../JukeBox2.0.X/adc_intf.c ../JukeBox2.0.X/glcdfont.c ../JukeBox2.0.X/tft_gfx.c ../JukeBox2.0.X/tft_master.c ../JukeBox2.0.X/ts_lcd.c ../../ece414_arnold_dennis/Lab03.X/portb_out.c ../../ece414_arnold_dennis/Lab03.X/porta_in.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/328982905/adafruit.o ${OBJECTDIR}/_ext/328982905/fsm.o ${OBJECTDIR}/_ext/328982905/rfid.o ${OBJECTDIR}/_ext/328982905/testmain.o ${OBJECTDIR}/_ext/328982905/uart1.o ${OBJECTDIR}/_ext/513522273/timer1.o ${OBJECTDIR}/_ext/328982905/adc_intf.o ${OBJECTDIR}/_ext/328982905/glcdfont.o ${OBJECTDIR}/_ext/328982905/tft_gfx.o ${OBJECTDIR}/_ext/328982905/tft_master.o ${OBJECTDIR}/_ext/328982905/ts_lcd.o ${OBJECTDIR}/_ext/364556228/portb_out.o ${OBJECTDIR}/_ext/364556228/porta_in.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/328982905/adafruit.o.d ${OBJECTDIR}/_ext/328982905/fsm.o.d ${OBJECTDIR}/_ext/328982905/rfid.o.d ${OBJECTDIR}/_ext/328982905/testmain.o.d ${OBJECTDIR}/_ext/328982905/uart1.o.d ${OBJECTDIR}/_ext/513522273/timer1.o.d ${OBJECTDIR}/_ext/328982905/adc_intf.o.d ${OBJECTDIR}/_ext/328982905/glcdfont.o.d ${OBJECTDIR}/_ext/328982905/tft_gfx.o.d ${OBJECTDIR}/_ext/328982905/tft_master.o.d ${OBJECTDIR}/_ext/328982905/ts_lcd.o.d ${OBJECTDIR}/_ext/364556228/portb_out.o.d ${OBJECTDIR}/_ext/364556228/porta_in.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/328982905/adafruit.o ${OBJECTDIR}/_ext/328982905/fsm.o ${OBJECTDIR}/_ext/328982905/rfid.o ${OBJECTDIR}/_ext/328982905/testmain.o ${OBJECTDIR}/_ext/328982905/uart1.o ${OBJECTDIR}/_ext/513522273/timer1.o ${OBJECTDIR}/_ext/328982905/adc_intf.o ${OBJECTDIR}/_ext/328982905/glcdfont.o ${OBJECTDIR}/_ext/328982905/tft_gfx.o ${OBJECTDIR}/_ext/328982905/tft_master.o ${OBJECTDIR}/_ext/328982905/ts_lcd.o ${OBJECTDIR}/_ext/364556228/portb_out.o ${OBJECTDIR}/_ext/364556228/porta_in.o

# Source Files
SOURCEFILES=../JukeBox2.0.X/adafruit.c ../JukeBox2.0.X/fsm.c ../JukeBox2.0.X/rfid.c ../JukeBox2.0.X/testmain.c ../JukeBox2.0.X/uart1.c ../JukeBox.X/timer1.c ../JukeBox2.0.X/adc_intf.c ../JukeBox2.0.X/glcdfont.c ../JukeBox2.0.X/tft_gfx.c ../JukeBox2.0.X/tft_master.c ../JukeBox2.0.X/ts_lcd.c ../../ece414_arnold_dennis/Lab03.X/portb_out.c ../../ece414_arnold_dennis/Lab03.X/porta_in.c



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
	
${OBJECTDIR}/_ext/328982905/adc_intf.o: ../JukeBox2.0.X/adc_intf.c  .generated_files/flags/default/f29b89ffc19b08fb6aba07056204de68bd63f88f .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/adc_intf.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/adc_intf.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/adc_intf.o.d" -o ${OBJECTDIR}/_ext/328982905/adc_intf.o ../JukeBox2.0.X/adc_intf.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/glcdfont.o: ../JukeBox2.0.X/glcdfont.c  .generated_files/flags/default/1ea03fd0851280e269b2396f9579efacaf1c3778 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/glcdfont.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/glcdfont.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/glcdfont.o.d" -o ${OBJECTDIR}/_ext/328982905/glcdfont.o ../JukeBox2.0.X/glcdfont.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/tft_gfx.o: ../JukeBox2.0.X/tft_gfx.c  .generated_files/flags/default/ca965d28c97ed2ddb25068980b0b5fbee42562b1 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_gfx.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_gfx.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/tft_gfx.o.d" -o ${OBJECTDIR}/_ext/328982905/tft_gfx.o ../JukeBox2.0.X/tft_gfx.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/tft_master.o: ../JukeBox2.0.X/tft_master.c  .generated_files/flags/default/5e58211dfa8a732f4a8aef4dfb92d9a98341f6c2 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_master.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_master.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/tft_master.o.d" -o ${OBJECTDIR}/_ext/328982905/tft_master.o ../JukeBox2.0.X/tft_master.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/ts_lcd.o: ../JukeBox2.0.X/ts_lcd.c  .generated_files/flags/default/3047a8dfef47fdb9dc9da1b1afb4fb68e0b4ef2f .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/ts_lcd.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/ts_lcd.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/ts_lcd.o.d" -o ${OBJECTDIR}/_ext/328982905/ts_lcd.o ../JukeBox2.0.X/ts_lcd.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/364556228/portb_out.o: ../../ece414_arnold_dennis/Lab03.X/portb_out.c  .generated_files/flags/default/e32698b6bb89a8226a1ff90b2bea474222e59a08 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/364556228" 
	@${RM} ${OBJECTDIR}/_ext/364556228/portb_out.o.d 
	@${RM} ${OBJECTDIR}/_ext/364556228/portb_out.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/364556228/portb_out.o.d" -o ${OBJECTDIR}/_ext/364556228/portb_out.o ../../ece414_arnold_dennis/Lab03.X/portb_out.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/364556228/porta_in.o: ../../ece414_arnold_dennis/Lab03.X/porta_in.c  .generated_files/flags/default/221b0c9ae7d9f83089cffd972e6a1e310c4da622 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/364556228" 
	@${RM} ${OBJECTDIR}/_ext/364556228/porta_in.o.d 
	@${RM} ${OBJECTDIR}/_ext/364556228/porta_in.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/364556228/porta_in.o.d" -o ${OBJECTDIR}/_ext/364556228/porta_in.o ../../ece414_arnold_dennis/Lab03.X/porta_in.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
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
	
${OBJECTDIR}/_ext/328982905/adc_intf.o: ../JukeBox2.0.X/adc_intf.c  .generated_files/flags/default/b3763deb299798c836d7d98795c340ddd1df190b .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/adc_intf.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/adc_intf.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/adc_intf.o.d" -o ${OBJECTDIR}/_ext/328982905/adc_intf.o ../JukeBox2.0.X/adc_intf.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/glcdfont.o: ../JukeBox2.0.X/glcdfont.c  .generated_files/flags/default/28cd9f3b56bda24044a115300db2e69bf6affa15 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/glcdfont.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/glcdfont.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/glcdfont.o.d" -o ${OBJECTDIR}/_ext/328982905/glcdfont.o ../JukeBox2.0.X/glcdfont.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/tft_gfx.o: ../JukeBox2.0.X/tft_gfx.c  .generated_files/flags/default/818a1d9e2caf42c1147598a2000e55c8709f2096 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_gfx.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_gfx.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/tft_gfx.o.d" -o ${OBJECTDIR}/_ext/328982905/tft_gfx.o ../JukeBox2.0.X/tft_gfx.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/tft_master.o: ../JukeBox2.0.X/tft_master.c  .generated_files/flags/default/ea6eb39ffa3d1e33788eb2eacd8947856c4cbebe .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_master.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/tft_master.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/tft_master.o.d" -o ${OBJECTDIR}/_ext/328982905/tft_master.o ../JukeBox2.0.X/tft_master.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/328982905/ts_lcd.o: ../JukeBox2.0.X/ts_lcd.c  .generated_files/flags/default/9b5d5d7186e33bbbe1dd15b97f1dd96b10953089 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/328982905" 
	@${RM} ${OBJECTDIR}/_ext/328982905/ts_lcd.o.d 
	@${RM} ${OBJECTDIR}/_ext/328982905/ts_lcd.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/328982905/ts_lcd.o.d" -o ${OBJECTDIR}/_ext/328982905/ts_lcd.o ../JukeBox2.0.X/ts_lcd.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/364556228/portb_out.o: ../../ece414_arnold_dennis/Lab03.X/portb_out.c  .generated_files/flags/default/dffdb81ce695fa48f95cdd686130f67f1f5341a7 .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/364556228" 
	@${RM} ${OBJECTDIR}/_ext/364556228/portb_out.o.d 
	@${RM} ${OBJECTDIR}/_ext/364556228/portb_out.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/364556228/portb_out.o.d" -o ${OBJECTDIR}/_ext/364556228/portb_out.o ../../ece414_arnold_dennis/Lab03.X/portb_out.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
${OBJECTDIR}/_ext/364556228/porta_in.o: ../../ece414_arnold_dennis/Lab03.X/porta_in.c  .generated_files/flags/default/8139c9174eda9053fc2e12fbee75a38b4c9eee3a .generated_files/flags/default/fa77e48c5d6b209b0dbc904325b3870195f7a677
	@${MKDIR} "${OBJECTDIR}/_ext/364556228" 
	@${RM} ${OBJECTDIR}/_ext/364556228/porta_in.o.d 
	@${RM} ${OBJECTDIR}/_ext/364556228/porta_in.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MP -MMD -MF "${OBJECTDIR}/_ext/364556228/porta_in.o.d" -o ${OBJECTDIR}/_ext/364556228/porta_in.o ../../ece414_arnold_dennis/Lab03.X/porta_in.c    -DXPRJ_default=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)    
	
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
