/* Automatically generated by
	CCodeGenerator VMMaker.oscog-rsf.2127 uuid: 1a6d3cce-b752-4e79-905f-e1b6c155d910
 */

typedef struct {
	unsigned short	homeOffset;
	unsigned short	startpc;
	unsigned int	padToWord;
	unsigned		cmNumArgs : 8;
	unsigned		cmType : 3;
	unsigned		cmRefersToYoung : 1;
	unsigned		cpicHasMNUCaseOrCMIsFullBlock : 1;
	unsigned		cmUsageCount : 3;
	unsigned		cmUsesPenultimateLit : 1;
	unsigned		cbUsesInstVars : 1;
	unsigned		cmUnusedFlags : 2;
	unsigned		stackCheckOffset : 12;
 } CogBlockMethod;

typedef struct {
	sqLong	objectHeader;
	unsigned		cmNumArgs : 8;
	unsigned		cmType : 3;
	unsigned		cmRefersToYoung : 1;
	unsigned		cpicHasMNUCaseOrCMIsFullBlock : 1;
	unsigned		cmUsageCount : 3;
	unsigned		cmUsesPenultimateLit : 1;
	unsigned		cbUsesInstVars : 1;
	unsigned		cmUnusedFlags : 2;
	unsigned		stackCheckOffset : 12;
	unsigned short	blockSize;
	unsigned short	blockEntryOffset;
	sqInt	methodObject;
	sqInt	methodHeader;
	sqInt	selector;
 } CogMethod;
