
/* Version info
 *  
 *  v005 : 2016-10-20
 *         directory listings changed to asciihex
 *
 *  v004 : 2016-10-09
 *         cat/send file fails if it tries to send a directory
 *         'c' and 'l' shortcut commands added for debugging
 *  
 *  v003 : 2016-10-08  yorgle@gmail.com
 *         Multiple serial device support added (-0:)
 *  
 *  v002 : 2016-10-07  yorgle@gmail.com
 *         Internal
 *  
 *  v001 : 2016-10-01  yorgle@gmail.com
 *         Initial version, bascic structure, directory P commands
 */

#define kStr_Version              "N0=SSDD1,v005"
/* Version string is the following format:
 *  {header}={deviceID},{device's version number}
 *  SSDD1 = Serial SD Drive 1
 *  
 *  Future versions may have a drive letter between the '-' and the 'N' for example.
 */

// Protocol Line response

#define kStr_Prot0                "-0:"

// Error responses
#define kStr_Error_NoCard         "E0=No card"
#define kStr_Error_InitFailed     "E1=SD Init failed"
#define kStr_Error_NoFatPartition "E2=No FAT"
#define kStr_Error_NotImplemented "E3=Nope"

#define kStr_Error_BadLine        "E4=Bad Line"
#define kStr_Error_LEcho          "E5="

#define kStr_Error_CmdFail        "E6=Failed"

#define kStr_Error_NibbleCount    "E7=Nibbles"
#define kStr_Error_NoFileWrite    "E8=No WR"
#define kStr_Error_FileNotFound   "E9=FNF"
#define kStr_Error_FileNotWR      "EA=FNWR"

// Notification responses
#define kStr_CardOk               "N1=Card OK"
#define kStr_CmdOK                "N2=OK"

#define kStr_FAType               "Nt=FAT" /* FAT32 */
#define kStr_Size                 "Ns="
#define kStr_SizeUnits                     ",meg"

#define kStr_Begin                "Nbf="  /* begin file content */
#define kStr_End                  "Nef="  /* end file content */

#define kStr_DataString           "NS="
#define kStr_Progress             "NP="

