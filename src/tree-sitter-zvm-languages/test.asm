IAATS91  CEEENTRY PPA=MAINPPA,AUTO=WORKSIZE                             IAA00010
         USING    WORKAREA,R13                                          IAA00020
*                                                                       IAA00030
         LA   R02,STRT_MSG                                              IAA00040
         LA   R03,DEST                                                  IAA00050
         LA   R04,FBCODE                                                IAA00060
         STM  R02,R04,PLIST                                             IAA00070
         LA   R01,PLIST                                                 IAA00080
         L    R15,MOUT                                                  IAA00090
         BALR R14,R15                                                   IAA00100
*                                                                       IAA00110
         PACK PCKA,ZNA                                                  IAA00120
         PACK PCKB,ZNB                                                  IAA00130
         ZAP  PCKSUM,PCKA                                               IAA00140
*                                                                       IAA00150
         L    R10,=F'10'                                                IAA00160
LOOP1    DS   0H                                                        IAA00170
         AP   PCKSUM,PCKB                                               IAA00180
         MVC  OUTSUM,SUMMSK                                             IAA00190
         ED   OUTSUM,PCKSUM                                             IAA00200
         MVC  SUMMSG+1(8),OUTSUM                                        IAA00210
         MVC  LINE_ST,SUMMSG                                            IAA00220
         LA   R02,LINE_MSG                                              IAA00230
         LA   R03,DEST                                                  IAA00240
         LA   R04,FBCODE                                                IAA00250
         STM  R02,R04,PLIST                                             IAA00260
         LA   R01,PLIST                                                 IAA00270
         L    R15,MOUT                                                  IAA00280
         BALR R14,R15                                                   IAA00290
         BRCT R10,X'04'                                                 IAA00300
         B    END1                                                      IAA00310
         B    LOOP1                                                     IAA00320
*                                                                       IAA00330
END1     DS   0H                                                        IAA00340
         LA   R02,DONE_MSG                                              IAA00350
         LA   R03,DEST                                                  IAA00360
         LA   R04,FBCODE                                                IAA00370
         STM  R02,R04,PLIST                                             IAA00380
         LA   R01,PLIST                                                 IAA00390
         L    R15,MOUT                                                  IAA00400
         BALR R14,R15                                                   IAA00410
*                                                                       IAA00420
         CEETERM  RC=0                                                  IAA00430
* ==============================================================        IAA00440
*  Constants and Variables                                              IAA00450
* ==============================================================        IAA00460
ZLEN     EQU 5                                                          IAA00470
PLEN     EQU ZLEN/2+1                                                   IAA00480
*                                                                       IAA00490
SUMMSG   DC  C'(xxxxxxxx) -- The sum    '                               IAA00500
SUMMSK   DC  X'4020202020202120'                                        IAA00510
ZNA      DC  ZL5'100'                                                   IAA00520
ZNB      DC  ZL5'50'                                                    IAA00530
*                                                                       IAA00540
PCKA     DS  PL(PLEN)                                                   IAA00550
PCKB     DS  PL(PLEN)                                                   IAA00560
PCKSUM   DS  PL(PLEN+1)                                                 IAA00570
OUTSUM   DS  CL(L'SUMMSK)                                               IAA00580
*                                                                       IAA00590
MOUT     DC     V(CEEMOUT)        The CEL Message service               IAA00600
*                                                                       IAA00610
LINE_MSG DS     0F                                                      IAA00620
         DC     AL2(LINE_END-LINE_ST)                                   IAA00630
LINE_ST  DS     CL25                                                    IAA00640
LINE_END EQU    *                                                       IAA00650
*                                                                       IAA00660
STRT_MSG DS     0F                                                      IAA00670
         DC     AL2(STRT_END-STRT_ST)                                   IAA00680
STRT_ST  DC     C'Starting the program.'                                IAA00690
STRT_END EQU    *                                                       IAA00700
*                                                                       IAA00710
*                                                                       IAA00720
DONE_MSG DS     0F                                                      IAA00730
         DC     AL2(DONE_END-DONE_ST)                                   IAA00740
DONE_ST  DC     C'Terminating the program.'                             IAA00750
DONE_END EQU    *                                                       IAA00760
*                                                                       IAA00770
DEST     DC     F'2'              The destination is the MSGFILE        IAA00780
*                                                                       IAA00790
MAINPPA  CEEPPA                                                         IAA00800
* ===================================================================   IAA00810
*  The Workarea and DSA                                                 IAA00820
* ===================================================================   IAA00830
WORKAREA DSECT                                                          IAA00840
         ORG    *+CEEDSASZ                                              IAA00850
PLIST    DS     0D                                                      IAA00860
PARM1    DS     A                                                       IAA00870
PARM2    DS     A                                                       IAA00880
PARM3    DS     A                                                       IAA00890
PARM4    DS     A                                                       IAA00900
PARM5    DS     A                                                       IAA00910
*                                                                       IAA00920
FBCODE   DS     3F                                                      IAA00930
*                                                                       IAA00940
         DS     0D                                                      IAA00950
WORKSIZE EQU    *-WORKAREA                                              IAA00960
         CEEDSA                   Mapping of the Dynamic Save Area      IAA00970
         CEECAA                   Mapping of the Common Anchor Area     IAA00980
*                                                                       IAA00990
R00      EQU   0                                                        IAA01000
R01      EQU   1                                                        IAA01010
R02      EQU   2                                                        IAA01020
R03      EQU   3                                                        IAA01030
R04      EQU   4                                                        IAA01040
R05      EQU   5                                                        IAA01050
R06      EQU   6                                                        IAA01060
R07      EQU   7                                                        IAA01070
R08      EQU   8                                                        IAA01080
R09      EQU   9                                                        IAA01090
R10      EQU   10                                                       IAA01100
R11      EQU   11                                                       IAA01110
R12      EQU   12                                                       IAA01120
R13      EQU   13                                                       IAA01130
R14      EQU   14                                                       IAA01140
R15      EQU   15                                                       IAA01150
         END   IAATS91            Nominate IAATS91 as the entry point   IAA01160
