/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048c5430; end: 1048c5467;  */

void FUN_1048c5430(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048c5468; end: 1048c5483; -[SCAttributedDataAcquisitionTask description] */

void FUN_1048c5468(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5484; end: 1048c54cb; -[SCAttributedDataAcquisitionTask init] */

void FUN_1048c5484(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedDataAcquisitionTaskWrapper.swift",0x3a,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c54cc);
  (*pcVar1)();
}



/* Entry: 1048c54cc; end: 1048c54cf; -[SCAttributedDataAcquisitionTask copyWithZone:] */

void FUN_1048c54cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c54d0; end: 1048c54d7; +[SCAttributedDataAcquisitionTask systemBlizzard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c54d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b330) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c54d8; end: 1048c5503; -[SCAttributedDataAcquisitionTask matchBlizzardDependenciesProvider:blizzardAppExtensionLifecycleObserver:systemBlizzard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c54d8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11309b330) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11309b330) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c5500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048c5504; end: 1048c5537;  */

void FUN_1048c5504(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c5538; end: 1048c55a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5538(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_50 [6];
  
  uVar1 = param_1;
  func_0x0001000b73bc();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_50;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_50 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_50 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_11309b330) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c55a8; end: 1048c570f;  */

int FUN_1048c55a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048c5624;
        goto LAB_1048c5608;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048c5608:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048c5624:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048c5710; end: 1048c574f;  */

void FUN_1048c5710(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd438e8;
  _swift_getWitnessTable(&UNK_10dd438e8,&UNK_1107b33c0);
  puRam000000011309b360 = puVar1;
  return;
}



/* Entry: 1048c5750; end: 1048c57ef;  */

void FUN_1048c5750(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048c57f0; end: 1048c5813;  */

void FUN_1048c57f0(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1048c5814; end: 1048c582f; -[SCAttributedExtensionsTask description] */

void FUN_1048c5814(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5830; end: 1048c5877; -[SCAttributedExtensionsTask init] */

void FUN_1048c5830(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedExtensionsTaskWrapper.swift",0x35,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c5878);
  (*pcVar1)();
}



/* Entry: 1048c5878; end: 1048c587b; -[SCAttributedExtensionsTask copyWithZone:] */

void FUN_1048c5878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c587c; end: 1048c5887; -[SCAttributedExtensionsTask matchSnapchattersDependencyMonitor:] */

void FUN_1048c587c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001048c5884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048c5888; end: 1048c58db;  */

void FUN_1048c5888(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c58dc; end: 1048c59cb;  */

uint FUN_1048c58dc(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1048c59cc; end: 1048c5a0b;  */

void FUN_1048c59cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd439d0;
  _swift_getWitnessTable(&UNK_10dd439d0,&UNK_1107b34a8);
  puRam000000011309b398 = puVar1;
  return;
}



/* Entry: 1048c5a0c; end: 1048c5a33;  */

void FUN_1048c5a0c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048c68e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048c5a34; end: 1048c5a4f; -[SCAttributedSnapchattersSubtask description] */

void FUN_1048c5a34(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5a50; end: 1048c5a97; -[SCAttributedSnapchattersSubtask init] */

void FUN_1048c5a50(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedFriendingTaskWrapper.swift",0x34,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c5a98);
  (*pcVar1)();
}



/* Entry: 1048c5a98; end: 1048c5adf; -[SCAttributedSnapchattersSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5a98(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b3a0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c5ae0; end: 1048c5b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048c5ae0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11309b3a0);
      cVar2 = *(char *)(lStack_58 + _DAT_11309b3a0);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048c5b80; end: 1048c5bff; -[SCAttributedSnapchattersSubtask isEqual:] */

uint FUN_1048c5b80(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c5ae0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048c5c00; end: 1048c5c07; +[SCAttributedSnapchattersSubtask prefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5c00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b3a0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5c08; end: 1048c5c43; -[SCAttributedSnapchattersSubtask matchDebugData:errorHandler:prefetch:grapheneLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5c08(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309b3a0);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c5c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 1048c5c44; end: 1048c5cef;  */

void FUN_1048c5c44(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048c5cf0; end: 1048c5d13; -[SCAttributedFriendingTask description] */

void FUN_1048c5cf0(void)

{
  _objc_retain();
  func_0x0001003e3980();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5d14; end: 1048c5d5b; -[SCAttributedFriendingTask init] */

void FUN_1048c5d14(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedFriendingTaskWrapper.swift",0x34,2,0x115,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c5d5c);
  (*pcVar1)();
}



/* Entry: 1048c5d5c; end: 1048c5dcf; +[SCAttributedFriendingTask addFriendsTakeoverSnapchatterDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 3;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5dd0; end: 1048c5dd7; +[SCAttributedFriendingTask incomingFriendsSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5dd0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 4;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5dd8; end: 1048c5ddf; +[SCAttributedFriendingTask addFriendsButtonBadgeRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5dd8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 6;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5de0; end: 1048c5de7; +[SCAttributedFriendingTask addFriendsButtonSuggestionsBadgeNumberSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5de0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 7;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5de8; end: 1048c5def; +[SCAttributedFriendingTask reliablePinning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5de8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 9;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5df0; end: 1048c5df7; +[SCAttributedFriendingTask interactivePopover] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5df0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 10;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5df8; end: 1048c5dff; +[SCAttributedFriendingTask badging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5df8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0xb;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5e00; end: 1048c5e07; +[SCAttributedFriendingTask outgoingSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5e00(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0xd;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5e08; end: 1048c5e0f; +[SCAttributedFriendingTask outgoingSnapchattersWithoutUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5e08(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0xe;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5e10; end: 1048c5e17; +[SCAttributedFriendingTask mutualFriendSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5e10(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0xf;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5e18; end: 1048c5e1f; +[SCAttributedFriendingTask recentAndSuggestedFriendSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5e18(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0x10;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5e20; end: 1048c5e27; +[SCAttributedFriendingTask liveActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5e20(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0x12;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5e28; end: 1048c5e2f; +[SCAttributedFriendingTask friendSyncDuplex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5e28(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0x15;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c5e30; end: 1048c6047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c5e30(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                  undefined4 param_26,code *param_27,undefined4 param_28,undefined4 param_29,
                  code *param_30,undefined4 param_31,undefined4 param_32,code *param_33,
                  undefined4 param_34,undefined4 param_35,code *param_36,undefined4 param_37,
                  undefined4 param_38,code *param_39,undefined4 param_40,undefined4 param_41,
                  code *param_42,undefined4 param_43,undefined4 param_44,code *param_45,
                  undefined4 param_46,undefined4 param_47,code *param_48,undefined4 param_49,
                  undefined4 param_50,code *param_51,undefined4 param_52,undefined4 param_53,
                  code *param_54,undefined4 param_55,undefined4 param_56,code *param_57,
                  undefined4 param_58,undefined4 param_59,code *param_60)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11309b3a8)) {
  case 0:
    param_60 = param_1;
    goto code_r0x0001048c601c;
  case 1:
    lVar2 = *(long *)(unaff_x20 + _DAT_11309b3b0);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c6048);
      (*pcVar1)();
    }
    goto code_r0x0001048c5fb8;
  case 2:
    param_60 = param_5;
    goto code_r0x0001048c601c;
  case 3:
    if ((char)((long *)(unaff_x20 + _DAT_11309b3b8))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c6044);
      (*pcVar1)();
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_11309b3b8);
    param_3 = param_7;
code_r0x0001048c5fb8:
    (*param_3)(lVar2);
    break;
  case 4:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)();
    break;
  case 7:
    (*param_18)();
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
    (*param_24)();
    break;
  case 10:
    param_60 = param_27;
    goto code_r0x0001048c601c;
  case 0xb:
    (*param_30)();
    break;
  case 0xc:
    (*param_33)();
    break;
  case 0xd:
    (*param_36)();
    break;
  case 0xe:
    (*param_39)();
    break;
  case 0xf:
    (*param_42)();
    break;
  case 0x10:
    param_60 = param_45;
    goto code_r0x0001048c601c;
  case 0x11:
    param_60 = param_48;
    goto code_r0x0001048c601c;
  case 0x12:
    param_60 = param_51;
    goto code_r0x0001048c601c;
  case 0x13:
    param_60 = param_54;
    goto code_r0x0001048c601c;
  case 0x14:
    param_60 = param_57;
    goto code_r0x0001048c601c;
  case 0x15:
code_r0x0001048c601c:
    (*param_60)();
  }
  return;
}



/* Entry: 1048c6048; end: 1048c6253; -[SCAttributedFriendingTask matchSnapAnyoneNativeMessagingListener:snapchatters:snapcodeWidget:addFriendsTakeoverSnapchatterDataProvider:incomingFriendsSync:contactSync:addFriendsButtonBadgeRepository:addFriendsButtonSuggestionsBadgeNumberSyncer:addFriendsButtonBadgeUpdater:reliablePinning:interactivePopover:badging:pinnedSuggestedSnapchatters:outgoingSnapchatters:outgoingSnapchattersWithoutUser:mutualFriendSnapchatters:recentAndSuggestedFriendSnapchatters:outgoingFriendZombieHeal:liveActivity:inAppNonSDNNotificationProcessor:friendRequestsReport:friendSyncDuplex:] */

void FUN_1048c6048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
  undefined1 auStack_2e0 [16];
  undefined8 uStack_2d0;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uStack_110 = param_9;
  uStack_130 = param_10;
  uStack_150 = param_11;
  uStack_170 = param_12;
  uStack_190 = param_13;
  uStack_1b0 = param_14;
  uStack_1d0 = param_15;
  uStack_1f0 = param_16;
  uStack_210 = param_17;
  uStack_230 = param_18;
  uStack_250 = param_19;
  uStack_270 = param_20;
  uStack_290 = param_21;
  uStack_2b0 = param_22;
  uStack_2d0 = param_23;
  uStack_2f0 = param_24;
  uStack_f0 = param_8;
  uStack_d0 = param_7;
  uStack_b0 = param_6;
  uStack_90 = param_5;
  uStack_70 = param_4;
  uStack_50 = param_3;
  _objc_retain();
  FUN_1048c5e30(0x1048c6904,auStack_60,0x1048c690c,auStack_80,0x1048c6934,auStack_a0,0x1048c691c,
                auStack_c0,0x1048c6938,auStack_e0,0x1048c693c,auStack_100,0x1048c6940,auStack_120,
                0x1048c6944,auStack_140,0x1048c6948,auStack_160,0x1048c694c,auStack_180,0x1048c6950,
                auStack_1a0,0x1048c6954,auStack_1c0,0x1048c6958,auStack_1e0,0x1048c695c,auStack_200,
                0x1048c6960,auStack_220,0x1048c6964,auStack_240,0x1048c6968,auStack_260,0x1048c696c,
                auStack_280,0x1048c6970,auStack_2a0,0x1048c6974,auStack_2c0,0x1048c6978,auStack_2e0,
                0x1048c697c,auStack_300);
  _objc_release(param_1);
  return;
}



/* Entry: 1048c6254; end: 1048c6257;  */

void FUN_1048c6254(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c6258; end: 1048c628b;  */

void FUN_1048c6258(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c628c; end: 1048c6307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c628c(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_60 [8];
  
  uVar4 = param_1;
  FUN_1048c6574();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar3 = auStack_60 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_60 + 6;
  }
  puVar2 = auStack_60;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_60 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309b3a0) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c6308; end: 1048c6573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6308(long param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long alStack_1a0 [4];
  long alStack_180 [38];
  
  if (param_2 == '\0') {
    FUN_1048c628c();
    lVar3 = 0;
    plVar5 = alStack_1a0;
    uVar7 = 1;
    uVar6 = 1;
    lVar4 = param_1;
  }
  else {
    if (param_2 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001048c63f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd43a70)[param_1] * 4 + 0x1048c6368))();
      return;
    }
    uVar6 = 0;
    plVar5 = alStack_180;
    uVar7 = 3;
    lVar3 = param_1;
    lVar4 = 0;
  }
  func_0x0001048c6594();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = uVar7;
  *(long *)(lVar2 + _DAT_11309b3b0) = lVar4;
  plVar1 = (long *)(lVar2 + _DAT_11309b3b8);
  *plVar1 = lVar3;
  *(undefined1 *)(plVar1 + 1) = uVar6;
  *plVar5 = lVar2;
  plVar5[1] = param_1;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c6574; end: 1048c65b3;  */

void FUN_1048c6574(void)

{
  _objc_opt_self(&PTR_PTR_1129e14e0);
  return;
}



/* Entry: 1048c65b4; end: 1048c685f;  */

int FUN_1048c65b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xea < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x15) {
      iVar2 = 4;
    }
    if (param_2 + 0x15 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048c6630;
        goto LAB_1048c6614;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048c6614:
      return ((uint)*param_1 | uVar1 << 8) - 0x15;
    }
  }
LAB_1048c6630:
  iVar2 = *param_1 - 0x16;
  if (*param_1 < 0x16) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048c6860; end: 1048c689f;  */

void FUN_1048c6860(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43b28;
  _swift_getWitnessTable(&UNK_10dd43b28,&UNK_1107b3620);
  puRam000000011309b410 = puVar1;
  return;
}



/* Entry: 1048c68a0; end: 1048c68a3;  */

void FUN_1048c68a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43bc8;
  _swift_getWitnessTable(&UNK_10dd43bc8,&UNK_1107b3590);
  puRam000000011309b418 = puVar1;
  return;
}



/* Entry: 1048c68a4; end: 1048c68e3;  */

void FUN_1048c68a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43bc8;
  _swift_getWitnessTable(&UNK_10dd43bc8,&UNK_1107b3590);
  puRam000000011309b418 = puVar1;
  return;
}



/* Entry: 1048c68e4; end: 1048c69a7;  */

ulong FUN_1048c68e4(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1048c69a8; end: 1048c69ab; -[SCAttributedSnapchattersSubtask copyWithZone:] */

void FUN_1048c69a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c69ac; end: 1048c69b3; -[SCAttributedFriendingTask copyWithZone:] */

void FUN_1048c69ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c69b4; end: 1048c6a53;  */

void FUN_1048c69b4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048c6a54; end: 1048c6a77;  */

void FUN_1048c6a54(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1048c6a78; end: 1048c6a93; -[SCAttributedGrapheneTask description] */

void FUN_1048c6a78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6a94; end: 1048c6adb; -[SCAttributedGrapheneTask init] */

void FUN_1048c6a94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedGrapheneTaskWrapper.swift",0x33,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c6adc);
  (*pcVar1)();
}



/* Entry: 1048c6adc; end: 1048c6adf; -[SCAttributedGrapheneTask copyWithZone:] */

void FUN_1048c6adc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c6ae0; end: 1048c6b1f; +[SCAttributedGrapheneTask resumeGraphene] */

void FUN_1048c6ae0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6b20; end: 1048c6b2b; -[SCAttributedGrapheneTask matchResumeGraphene:] */

void FUN_1048c6b20(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001048c6b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048c6b2c; end: 1048c6b7f;  */

void FUN_1048c6b2c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c6b80; end: 1048c6c6f;  */

uint FUN_1048c6b80(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1048c6c70; end: 1048c6caf;  */

void FUN_1048c6c70(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43cb0;
  _swift_getWitnessTable(&UNK_10dd43cb0,&UNK_1107b3708);
  puRam000000011309b450 = puVar1;
  return;
}



/* Entry: 1048c6cb0; end: 1048c6cd7;  */

void FUN_1048c6cb0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048c82c0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048c6cd8; end: 1048c6d1f; -[SCAttributedLensBuilderSubtask init] */

void FUN_1048c6cd8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c6d20);
  (*pcVar1)();
}



/* Entry: 1048c6d20; end: 1048c6d2b; -[SCAttributedLensBuilderSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6d20(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b458));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c6d2c; end: 1048c6d37; -[SCAttributedLensBuilderSubtask isEqual:] */

uint FUN_1048c6d2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c6fe4(&uStack_50,&DAT_11309b458);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048c6d38; end: 1048c6d47; +[SCAttributedLensBuilderSubtask getLensTemplates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6d38(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b458) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6d48; end: 1048c6d57; +[SCAttributedLensBuilderSubtask createLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6d48(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b458) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6d58; end: 1048c6d67; +[SCAttributedLensBuilderSubtask getLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6d58(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b458) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6d68; end: 1048c6d77; +[SCAttributedLensBuilderSubtask lensHttpRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6d68(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b458) = 3;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6d78; end: 1048c6dcb; -[SCAttributedLensBuilderSubtask matchGetLensTemplates:createLens:getLenses:lensHttpRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6d78(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309b458);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c6db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 1048c6dcc; end: 1048c6e13; -[SCAttributedARBarSubtask init] */

void FUN_1048c6dcc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0xb2,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c6e14);
  (*pcVar1)();
}



/* Entry: 1048c6e14; end: 1048c6e1f; -[SCAttributedARBarSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6e14(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b460));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c6e20; end: 1048c6e2b; -[SCAttributedARBarSubtask isEqual:] */

uint FUN_1048c6e20(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c6fe4(&uStack_50,&DAT_11309b460);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048c6e2c; end: 1048c6ebb;  */

uint FUN_1048c6e2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c6fe4(&uStack_50,param_4);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048c6ebc; end: 1048c6edb; +[SCAttributedARBarSubtask activationWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6ebc(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b460) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6edc; end: 1048c6eeb; +[SCAttributedARBarSubtask replyActivationWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6edc(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b460) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6eec; end: 1048c6efb; +[SCAttributedARBarSubtask miniCameraLensIconWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6eec(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b460) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c6efc; end: 1048c6f47; -[SCAttributedARBarSubtask matchActivationWorkflow:replyActivationWorkflow:miniCameraLensIconWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6efc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11309b460) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11309b460) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c6f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048c6f48; end: 1048c6f8f; -[SCAttributedLensCarouselPreviewSubtask init] */

void FUN_1048c6f48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0x121,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c6f90);
  (*pcVar1)();
}



/* Entry: 1048c6f90; end: 1048c6f9b; -[SCAttributedLensCarouselPreviewSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c6f90(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b468));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c6f9c; end: 1048c6fe3;  */

void FUN_1048c6f9c(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c6fe4; end: 1048c7083;  */

bool FUN_1048c6fe4(undefined8 param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048c7084; end: 1048c708f; -[SCAttributedLensCarouselPreviewSubtask isEqual:] */

uint FUN_1048c7084(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c6fe4(&uStack_50,&DAT_11309b468);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048c7090; end: 1048c709f; +[SCAttributedLensCarouselPreviewSubtask iconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c7090(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b468) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c70a0; end: 1048c70af; +[SCAttributedLensCarouselPreviewSubtask closeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c70a0(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b468) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c70b0; end: 1048c7107;  */

void FUN_1048c70b0(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + *param_3) = param_4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c7108; end: 1048c7123; -[SCAttributedLensCarouselPreviewSubtask matchIconProvider:closeButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c7108(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11309b468) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c7120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1048c7124; end: 1048c71cf;  */

void FUN_1048c7124(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048c71d0; end: 1048c71f3; -[SCAttributedLensTask description] */

void FUN_1048c71d0(void)

{
  _objc_retain();
  func_0x0001007dd768();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c71f4; end: 1048c723b; -[SCAttributedLensTask init] */

void FUN_1048c71f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0x1ec,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c723c);
  (*pcVar1)();
}



/* Entry: 1048c723c; end: 1048c7243; +[SCAttributedLensTask lensCarouselOnCameraWorkflowActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c723c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b470) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b478) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b480) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b488);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b490) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c7244; end: 1048c724b; +[SCAttributedLensTask lensInMainCameraStartupComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c7244(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b470) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b478) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b480) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b488);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b490) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c724c; end: 1048c7253; +[SCAttributedLensTask realTimeScanInMainCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c724c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b470) = 2;
  *(undefined8 *)(lVar2 + _DAT_11309b478) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b480) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b488);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b490) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c7254; end: 1048c728b; +[SCAttributedLensTask lensBuilder:] */

void FUN_1048c7254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1048c82e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


