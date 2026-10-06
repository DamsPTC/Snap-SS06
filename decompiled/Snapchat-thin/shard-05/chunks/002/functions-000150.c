/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bcc70c; end: 103bcc70f; +[SCMemoriesBackupUtils showDebugBannerWithDebugBanner:notificationPool:type:] */

void FUN_103bcc70c(void)

{
  return;
}



/* Entry: 103bcc710; end: 103bcc74b; -[SCMemoriesBackupUtils init] */

void FUN_103bcc710(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcc74c; end: 103bcc77f;  */

void FUN_103bcc74c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bcc780; end: 103bcc7f7; +[SCMemoriesBackupUtils entrySnapsSourcesRawValueFromEntrySnapsSourcesRawValue:snapSource:] */

ulong FUN_103bcc780(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_3 | 8;
  if (param_4 != 7) {
    uVar1 = param_3;
  }
  uVar4 = param_3 | 0x40;
  if (param_4 != 6) {
    uVar4 = uVar1;
  }
  uVar1 = param_3 | 0x20;
  if (param_4 != 5) {
    uVar1 = param_3;
  }
  uVar3 = param_3 | 0x10;
  if (param_4 != 4) {
    uVar3 = uVar1;
  }
  if (param_4 < 6) {
    uVar4 = uVar3;
  }
  uVar1 = param_3 | 8;
  if (param_4 != 3) {
    uVar1 = param_3;
  }
  uVar3 = param_3 | 4;
  if (param_4 != 2) {
    uVar3 = uVar1;
  }
  uVar1 = param_3 | 2;
  if (param_4 != 1) {
    uVar1 = param_3;
  }
  uVar2 = param_3 | 1;
  if (param_4 != 0) {
    uVar2 = uVar1;
  }
  if (param_4 < 2) {
    uVar3 = uVar2;
  }
  if (param_4 < 4) {
    uVar4 = uVar3;
  }
  return uVar4;
}



/* Entry: 103bcc7f8; end: 103bcc867;  */

void FUN_103bcc7f8(void)

{
  func_0x000107c61168(&PTR_PTR_112940998);
  return;
}



/* Entry: 103bcc868; end: 103bcc897;  */

bool FUN_103bcc868(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103bcc898; end: 103bcc8a7; -[_TtC23CloudSyncStatusServices23CloudSyncStatusServices publisherObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcc898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4c88));
  return;
}



/* Entry: 103bcc8a8; end: 103bcc8b7; -[_TtC23CloudSyncStatusServices23CloudSyncStatusServices subscriberObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcc8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4c98));
  return;
}



/* Entry: 103bcc8b8; end: 103bcc973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103bcc8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4c80) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4c88) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4c90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4c98) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4ca0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103bcc974; end: 103bcc9d3; -[_TtC23CloudSyncStatusServices23CloudSyncStatusServices init] */

void FUN_103bcc974(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CloudSyncStatusServices.CloudSyncStatusServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcc9a0);
  (*pcVar1)();
}



/* Entry: 103bcc9d4; end: 103bcca3b; -[_TtC23CloudSyncStatusServices23CloudSyncStatusServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bcc9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bcca10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bcc9f4) */
/* WARNING: Removing unreachable block (ram,0x000103bcca14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcc9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff4c80));
  return;
}



/* Entry: 103bcca3c; end: 103bcca4f;  */

bool FUN_103bcca3c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103bcca50; end: 103bccafb;  */

void FUN_103bcca50(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bccafc; end: 103bccaff;  */

void FUN_103bccafc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61c60;
  func_0x000107c61520(&UNK_10dc61c60,&UNK_1106e3518);
  puRam0000000112ff4cd0 = puVar1;
  return;
}



/* Entry: 103bccb00; end: 103bccb3f;  */

void FUN_103bccb00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61c60;
  func_0x000107c61520(&UNK_10dc61c60,&UNK_1106e3518);
  puRam0000000112ff4cd0 = puVar1;
  return;
}



/* Entry: 103bccb40; end: 103bcccb3;  */

void FUN_103bccb40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103bcccb4; end: 103bcccc3; -[SCMemoriesBackupServiceStatus cloudSyncStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bcccb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff4cd8);
}



/* Entry: 103bcccc4; end: 103bcccd3; -[SCMemoriesBackupServiceStatus isBackingUpNow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bcccc4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff4ce0);
}



/* Entry: 103bcccd4; end: 103bccce3; -[SCMemoriesBackupServiceStatus mayUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bcccd4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff4ce8);
}



/* Entry: 103bccce4; end: 103bcccf3; -[SCMemoriesBackupServiceStatus requiresUpgrade] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bccce4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff4cf0);
}



/* Entry: 103bcccf4; end: 103bcce0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcccf4(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4cd8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ff4ce0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff4ce8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112ff4cf0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcce0c; end: 103bcce97; -[SCMemoriesBackupServiceStatus initWithCloudSyncStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcce0c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff4cd8) = param_3;
  *(undefined1 *)(param_1 + _DAT_112ff4ce0) = param_4;
  *(undefined1 *)(param_1 + _DAT_112ff4ce8) = param_5;
  *(undefined1 *)(param_1 + _DAT_112ff4cf0) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcce98; end: 103bccf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103bcce98(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar3 = &lStack_58;
    func_0x000107c6147c(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      if (((*(long *)(unaff_x20 + _DAT_112ff4cd8) == *(long *)(lStack_58 + _DAT_112ff4cd8)) &&
          (*(char *)(unaff_x20 + _DAT_112ff4ce0) == *(char *)(lStack_58 + _DAT_112ff4ce0))) &&
         (*(char *)(unaff_x20 + _DAT_112ff4ce8) == *(char *)(lStack_58 + _DAT_112ff4ce8))) {
        bVar4 = *(byte *)(unaff_x20 + _DAT_112ff4cf0);
        bVar1 = *(byte *)(lStack_58 + _DAT_112ff4cf0);
        func_0x000107c61170();
        bVar4 = bVar4 ^ bVar1 ^ 1;
        goto LAB_103bccf54;
      }
      func_0x000107c61170();
    }
  }
  bVar4 = 0;
LAB_103bccf54:
  return bVar4 & 1;
}



/* Entry: 103bccf8c; end: 103bccffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103bccf8c(long param_1)

{
  long unaff_x20;
  
  if (((*(long *)(unaff_x20 + _DAT_112ff4cd8) == *(long *)(param_1 + _DAT_112ff4cd8)) &&
      (*(char *)(unaff_x20 + _DAT_112ff4ce0) == *(char *)(param_1 + _DAT_112ff4ce0))) &&
     (*(char *)(unaff_x20 + _DAT_112ff4ce8) == *(char *)(param_1 + _DAT_112ff4ce8))) {
    return (*(byte *)(unaff_x20 + _DAT_112ff4cf0) ^ *(byte *)(param_1 + _DAT_112ff4cf0) ^ 1) & 1;
  }
  return 0;
}



/* Entry: 103bccffc; end: 103bcd07b; -[SCMemoriesBackupServiceStatus isEqual:] */

uint FUN_103bccffc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103bcce98(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103bcd07c; end: 103bcd0a3; -[SCMemoriesBackupServiceStatus isEqualWithOtherStatus:] */

uint FUN_103bcd07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103bccf8c(param_3);
  return (uint)param_3 & 1;
}



/* Entry: 103bcd0a4; end: 103bcd123; -[SCMemoriesBackupServiceStatus init] */

void FUN_103bcd0a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CloudSyncStatusServices.MemoriesBackupServiceStatus",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcd0d0);
  (*pcVar1)();
}



/* Entry: 103bcd124; end: 103bcd1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bcd124(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4d20) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4d28) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103bcd1a8; end: 103bcd203; -[_TtC23SCMemPlatBackupServices21MemPlatBackupServices init] */

void FUN_103bcd1a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupServices.MemPlatBackupServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcd1d4);
  (*pcVar1)();
}



/* Entry: 103bcd204; end: 103bcd23b; -[_TtC23SCMemPlatBackupServices21MemPlatBackupServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcd204(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff4d20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4d28));
  return;
}



/* Entry: 103bcd23c; end: 103bcd24f;  */

bool FUN_103bcd23c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103bcd250; end: 103bcd2fb;  */

void FUN_103bcd250(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bcd2fc; end: 103bcd337;  */

void FUN_103bcd2fc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103bcd338; end: 103bcd40f;  */

void FUN_103bcd338(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bcd410; end: 103bcd427;  */

void FUN_103bcd410(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103bcd428; end: 103bcd453; +[SCSnapUploadWorkflowError errorDomain] */

void FUN_103bcd428(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1ac460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcd454; end: 103bcd48f; -[SCSnapUploadWorkflowError init] */

void FUN_103bcd454(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcd490; end: 103bcd4c3;  */

void FUN_103bcd490(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bcd4c4; end: 103bcd4db; -[SCSnapUploadWorkflowError .cxx_destruct] */

void FUN_103bcd4c4(void)

{
  return;
}



/* Entry: 103bcd4dc; end: 103bcd51b;  */

void FUN_103bcd4dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61da0;
  func_0x000107c61520(&UNK_10dc61da0,&UNK_1106e36a8);
  puRam0000000112ff4d58 = puVar1;
  return;
}



/* Entry: 103bcd51c; end: 103bcd51f;  */

void FUN_103bcd51c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61e40;
  func_0x000107c61520(&UNK_10dc61e40,&UNK_1106e36c8);
  puRam0000000112ff4d60 = puVar1;
  return;
}



/* Entry: 103bcd520; end: 103bcd55f;  */

void FUN_103bcd520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61e40;
  func_0x000107c61520(&UNK_10dc61e40,&UNK_1106e36c8);
  puRam0000000112ff4d60 = puVar1;
  return;
}



/* Entry: 103bcd560; end: 103bcd57f;  */

undefined1  [16] FUN_103bcd560(void)

{
  return ZEXT816(0x1106e36a8);
}



/* Entry: 103bcd580; end: 103bcd59f;  */

void FUN_103bcd580(void)

{
  func_0x000107c61168(&PTR_PTR_112940cc8);
  return;
}



/* Entry: 103bcd5a0; end: 103bcd5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcd5a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4d90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcd5ec; end: 103bcd64b; -[SCSnapUploadWorkflowServices init] */

void FUN_103bcd5ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapUploadWorkflowAPI.SCSnapUploadWorkflowServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcd618);
  (*pcVar1)();
}



/* Entry: 103bcd64c; end: 103bcd65b; -[SCSnapUploadWorkflowServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcd64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4d90));
  return;
}



/* Entry: 103bcd65c; end: 103bcd813;  */

undefined1  [16] FUN_103bcd65c(void)

{
  return ZEXT816(0x1106e3740);
}



/* Entry: 103bcd814; end: 103bcd82b; -[SCSnapUploadWorkflowConfig updateType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103bcd814(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112ff4dc0);
}



/* Entry: 103bcd82c; end: 103bcd90f; -[SCSnapUploadWorkflowConfig initWithUpdateType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcd82c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined4 *)(param_1 + _DAT_112ff4dc0) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcd910; end: 103bcd913; -[SCSnapUploadWorkflowConfig copyWithZone:] */

void FUN_103bcd910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bcd914; end: 103bcd92f; -[SCSnapUploadWorkflowConfig description] */

void FUN_103bcd914(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcd930; end: 103bcd977; -[SCSnapUploadWorkflowConfig init] */

void FUN_103bcd930(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCSnapUploadWorkflowAPI/SnapUploadWorkflowConfigWrapper.swift",0x3d,2,0x23,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcd978);
  (*pcVar1)();
}



/* Entry: 103bcd978; end: 103bcd993; +[SCSnapUploadWorkflowConfigBuilder snapUploadWorkflowConfig] */

void FUN_103bcd978(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcd994; end: 103bcda0b; +[SCSnapUploadWorkflowConfigBuilder snapUploadWorkflowConfigWithExistingSnapUploadWorkflowConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcd994(long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  
  func_0x000107c614ec();
  func_0x000107c610f8();
  if (param_3 == 0) {
    func_0x000107c453e4();
  }
  else {
    func_0x000107c61174();
    func_0x000107c453e4();
    puVar1 = (undefined4 *)(param_1 + _DAT_112ff4dc8);
    *puVar1 = *(undefined4 *)(param_3 + _DAT_112ff4dc0);
    *(undefined1 *)(puVar1 + 1) = 0;
    func_0x000107c61170(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcda0c; end: 103bcda23; -[SCSnapUploadWorkflowConfigBuilder withUpdateType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcda0c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + _DAT_112ff4dc8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103bcda24; end: 103bcda43;  */

void FUN_103bcda24(void)

{
  func_0x000107c61168(&PTR_PTR_112940e38);
  return;
}



/* Entry: 103bcda44; end: 103bcdabb; -[SCSnapUploadWorkflowConfigBuilder build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcda44(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined4 *)(param_1 + _DAT_112ff4dc8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar3 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_103bcda24();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined4 *)(lVar2 + _DAT_112ff4dc0) = uVar3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcdabc; end: 103bcdb33; -[SCSnapUploadWorkflowConfigBuilder safeBuildAndReturnError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdabc(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined4 *)(param_1 + _DAT_112ff4dc8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar3 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_103bcda24();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined4 *)(lVar2 + _DAT_112ff4dc0) = uVar3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcdb34; end: 103bcdb87; -[SCSnapUploadWorkflowConfigBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdb34(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined4 *)(param_1 + _DAT_112ff4dc8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcdb88; end: 103bcdb8b;  */

void FUN_103bcdb88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bcdb8c; end: 103bcdbdf;  */

void FUN_103bcdb8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bcdbe0; end: 103bcdbe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdbe0(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112ff4dc0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcdbe8; end: 103bcdbf7; -[SCSnapUploadWorkflowResult snapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdbe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4e20));
  return;
}



/* Entry: 103bcdbf8; end: 103bcdc07; -[SCSnapUploadWorkflowResult uploadedByteCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bcdbf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff4e28);
}



/* Entry: 103bcdc08; end: 103bcdc17; -[SCSnapUploadWorkflowResult baseMediaByteCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bcdc08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff4e30);
}



/* Entry: 103bcdc18; end: 103bcdc2b; -[SCSnapUploadWorkflowResult overlayByteCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bcdc18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff4e38);
}



/* Entry: 103bcdc2c; end: 103bcdd4f; -[SCSnapUploadWorkflowResult initWithSnapDoc:uploadedByteCount:baseMediaByteCount:overlayByteCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdc2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff4e20) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff4e28) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff4e30) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff4e38) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103bcdd50; end: 103bcdd53; -[SCSnapUploadWorkflowResult copyWithZone:] */

void FUN_103bcdd50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bcdd54; end: 103bcdd6f; -[SCSnapUploadWorkflowResult description] */

void FUN_103bcdd54(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcdd70; end: 103bcddeb; -[SCSnapUploadWorkflowResult init] */

void FUN_103bcdd70(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCSnapUploadWorkflowAPI/SnapUploadWorkflowResultWrapper.swift",0x3d,2,0x36,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcddb8);
  (*pcVar1)();
}



/* Entry: 103bcddec; end: 103bcddfb; -[SCSnapUploadWorkflowResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcddec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4e20));
  return;
}



/* Entry: 103bcddfc; end: 103bcde1b;  */

void FUN_103bcddfc(void)

{
  func_0x000107c61168(&PTR_PTR_112940fb8);
  return;
}



/* Entry: 103bcde1c; end: 103bcde1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcde1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4e20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4e28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4e30) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4e38) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcde20; end: 103bcde3f; -[_TtC51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices crFeaturedStoryThumbnailGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcde20(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff4e68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcde40; end: 103bcde8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcde40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4e68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcde8c; end: 103bcdee3; -[_TtC51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices initWithCrFeaturedStoryThumbnailGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcde8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff4e68) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103bcdee4; end: 103bcdf43; -[_TtC51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices init] */

void FUN_103bcdee4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesCRFeaturedStoryThumbnailGeneratorServices.SCMemoriesCRFeaturedStoryThumbnailGeneratorServices"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcdf10);
  (*pcVar1)();
}



/* Entry: 103bcdf44; end: 103bcdf53; -[_TtC51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices51SCMemoriesCRFeaturedStoryThumbnailGeneratorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdf44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff4e68));
  return;
}



/* Entry: 103bcdf54; end: 103bcdfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdf54(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ff4e98;
  lVar2 = unaff_x20;
  FUN_103bcec7c();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4ea0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcdfbc; end: 103bce02f; -[SCBatterySticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcdfbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ff4e98;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_103bcec7c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112ff4ea0) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bce030; end: 103bce09f; -[SCBatterySticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bce030(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112ff4e98;
  lVar3 = param_1;
  FUN_103bcec7c();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCBatterySticker/BatterySticker.swift",0x25,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bce0a0);
  (*pcVar2)();
}



/* Entry: 103bce0a0; end: 103bce17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103bce0a0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x000103bce668(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ff4ea0);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112ff4ea0);
      func_0x000107c61174(uVar3);
      func_0x000107c60118(uVar5,uVar3);
      uVar4 = (uint)uVar5;
      func_0x000107c61170(lStack_58);
      func_0x000107c61170(uVar3);
      goto LAB_103bce168;
    }
  }
  uVar4 = 0;
LAB_103bce168:
  return uVar4 & 1;
}



/* Entry: 103bce180; end: 103bce1ff; -[SCBatterySticker isEqual:] */

uint FUN_103bce180(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103bce0a0(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103bce200; end: 103bce22b; -[SCBatterySticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103bce200(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112ff4e98);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x5504762;
}



/* Entry: 103bce22c; end: 103bce233; -[SCBatterySticker infoType] */

undefined8 FUN_103bce22c(void)

{
  return 4;
}



/* Entry: 103bce234; end: 103bce23f; -[SCBatterySticker stickerId] */

void FUN_103bce234(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x59524554544142;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x59524554544142,0xe700000000000000);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103bce240; end: 103bce24b; -[SCBatterySticker shortLoggingName] */

void FUN_103bce240(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x59524554544142;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x59524554544142,0xe700000000000000);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103bce24c; end: 103bce2c3;  */

void FUN_103bce24c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x59524554544142;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x59524554544142,0xe700000000000000);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103bce2c4; end: 103bce2d3; -[SCBatterySticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bce2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4e98));
  return;
}



/* Entry: 103bce2d4; end: 103bce2e3; -[SCBatterySticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bce2d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4ea0));
  return;
}



/* Entry: 103bce2e4; end: 103bce2eb; -[SCBatterySticker supportedFlows] */

undefined8 FUN_103bce2e4(void)

{
  return 0;
}



/* Entry: 103bce2ec; end: 103bce2fb; -[SCBatterySticker intrinsicSize] */

undefined1  [16] FUN_103bce2ec(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 103bce2fc; end: 103bce4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103bce2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ff4e98);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ff4ea0);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x000103bce668(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x000103bce668(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 103bce4ac; end: 103bce5cf; -[SCBatterySticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_103bce4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103bce668(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x000103bce668(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_103bce2fc(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bce5d0; end: 103bce62f; -[SCBatterySticker init] */

void FUN_103bce5d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBatterySticker.BatterySticker",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bce5fc);
  (*pcVar1)();
}



/* Entry: 103bce630; end: 103bce6a7; -[SCBatterySticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bce64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bce650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bce630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4e98));
  return;
}



/* Entry: 103bce6a8; end: 103bce6c7;  */

void FUN_103bce6a8(void)

{
  func_0x000107c61168(&PTR_PTR_112941158);
  return;
}



/* Entry: 103bce6c8; end: 103bce6db;  */

void FUN_103bce6c8(void)

{
  uRam000000011380cf78 = 0x4057c00000000000;
  uRam000000011380cf70 = 0x406ea00000000000;
  return;
}



/* Entry: 103bce6dc; end: 103bce7fb;  */

void FUN_103bce6dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1106e3940;
  func_0x000107c613fc(&UNK_1106e3940,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_1106e3a58;
  func_0x000107c613fc(&UNK_1106e3a58,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1106e3a80;
  func_0x000107c613fc(&UNK_1106e3a80,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dc620d0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c6157c(param_2);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10dc620e0,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}


