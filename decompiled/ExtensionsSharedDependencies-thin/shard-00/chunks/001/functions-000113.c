/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0020b0ec; end: 0020b123;  */

void FUN_0020b0ec(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 0020b124; end: 0020b13f; -[SCAttributedDataAcquisitionTask description] */

void FUN_0020b124(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b140; end: 0020b187; -[SCAttributedDataAcquisitionTask init] */

void FUN_0020b140(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedDataAcquisitionTaskWrapper.swift",0x3a,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20b188);
  (*pcVar1)();
}



/* Entry: 0020b188; end: 0020b18b; -[SCAttributedDataAcquisitionTask copyWithZone:] */

void FUN_0020b188(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020b18c; end: 0020b193; +[SCAttributedDataAcquisitionTask blizzardDependenciesProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b18c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af75a8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b194; end: 0020b19b; +[SCAttributedDataAcquisitionTask blizzardAppExtensionLifecycleObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b194(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af75a8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b19c; end: 0020b1a3; +[SCAttributedDataAcquisitionTask systemBlizzard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b19c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af75a8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b1a4; end: 0020b1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b1a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af75a8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b1f4; end: 0020b21f; -[SCAttributedDataAcquisitionTask matchBlizzardDependenciesProvider:blizzardAppExtensionLifecycleObserver:systemBlizzard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b1f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af75a8) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af75a8) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0020b21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020b220; end: 0020b273;  */

void FUN_0020b220(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020b274; end: 0020b3db;  */

int FUN_0020b274(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0020b2f0;
        goto LAB_0020b2d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0020b2d4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_0020b2f0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0020b3dc; end: 0020b41b;  */

void FUN_0020b3dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af75d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ea9f8;
  _swift_getWitnessTable(&UNK_007ea9f8,&UNK_009bdb20);
  puRam0000000000af75d8 = puVar1;
  return;
}



/* Entry: 0020b41c; end: 0020b4bb;  */

void FUN_0020b41c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0020b4bc; end: 0020b4df;  */

void FUN_0020b4bc(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 0020b4e0; end: 0020b4fb; -[SCAttributedExtensionsTask description] */

void FUN_0020b4e0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b4fc; end: 0020b543; -[SCAttributedExtensionsTask init] */

void FUN_0020b4fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedExtensionsTaskWrapper.swift",0x35,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20b544);
  (*pcVar1)();
}



/* Entry: 0020b544; end: 0020b547; -[SCAttributedExtensionsTask copyWithZone:] */

void FUN_0020b544(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020b548; end: 0020b587; +[SCAttributedExtensionsTask snapchattersDependencyMonitor] */

void FUN_0020b548(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b588; end: 0020b593; -[SCAttributedExtensionsTask matchSnapchattersDependencyMonitor:] */

void FUN_0020b588(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0020b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020b594; end: 0020b5e7;  */

void FUN_0020b594(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020b5e8; end: 0020b6d7;  */

uint FUN_0020b5e8(uint *param_1,int param_2)

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



/* Entry: 0020b6d8; end: 0020b717;  */

void FUN_0020b6d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eaae0;
  _swift_getWitnessTable(&UNK_007eaae0,&UNK_009bdc08);
  puRam0000000000af7610 = puVar1;
  return;
}



/* Entry: 0020b718; end: 0020b73f;  */

void FUN_0020b718(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_0020c7a0();
  *param_1 = uVar1;
  return;
}



/* Entry: 0020b740; end: 0020b75b; -[SCAttributedSnapchattersSubtask description] */

void FUN_0020b740(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b75c; end: 0020b7a3; -[SCAttributedSnapchattersSubtask init] */

void FUN_0020b75c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedFriendingTaskWrapper.swift",0x34,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20b7a4);
  (*pcVar1)();
}



/* Entry: 0020b7a4; end: 0020b7eb; -[SCAttributedSnapchattersSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b7a4(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af7618));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020b7ec; end: 0020b88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0020b7ec(undefined8 param_1)

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
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_00af7618);
      cVar2 = *(char *)(lStack_58 + _DAT_00af7618);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 0020b88c; end: 0020b90b; -[SCAttributedSnapchattersSubtask isEqual:] */

uint FUN_0020b88c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0020b7ec(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0020b90c; end: 0020b913; +[SCAttributedSnapchattersSubtask debugData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b90c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7618) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b914; end: 0020b91b; +[SCAttributedSnapchattersSubtask errorHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b914(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7618) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b91c; end: 0020b923; +[SCAttributedSnapchattersSubtask prefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b91c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7618) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b924; end: 0020b92b; +[SCAttributedSnapchattersSubtask grapheneLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b924(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7618) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b92c; end: 0020b97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b92c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7618) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020b97c; end: 0020b9bb; -[SCAttributedSnapchattersSubtask matchDebugData:errorHandler:prefetch:grapheneLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020b97c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7618);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0020b9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 0020b9bc; end: 0020ba27;  */

void FUN_0020b9bc(void)

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



/* Entry: 0020ba28; end: 0020ba2b;  */

void FUN_0020ba28(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0020ba2c; end: 0020ba93;  */

void FUN_0020ba2c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0020ba94; end: 0020bab3;  */

void FUN_0020ba94(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 0020bab4; end: 0020bad7; -[SCAttributedFriendingTask description] */

void FUN_0020bab4(void)

{
  _objc_retain();
  FUN_0020c1f0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bad8; end: 0020bb1f; -[SCAttributedFriendingTask init] */

void FUN_0020bad8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedFriendingTaskWrapper.swift",0x34,2,0x115,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20bb20);
  (*pcVar1)();
}



/* Entry: 0020bb20; end: 0020bb23;  */

void FUN_0020bb20(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020bb24; end: 0020bb2b; +[SCAttributedFriendingTask snapAnyoneNativeMessagingListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bb24(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bb2c; end: 0020bbab; +[SCAttributedFriendingTask snapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00af7620) = 1;
  *(undefined8 *)(lVar3 + _DAT_00af7628) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_00abbf70;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bbac; end: 0020bbb3; +[SCAttributedFriendingTask snapcodeWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bbac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 2;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bbb4; end: 0020bc27; +[SCAttributedFriendingTask addFriendsTakeoverSnapchatterDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bbb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 3;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc28; end: 0020bc2f; +[SCAttributedFriendingTask incomingFriendsSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc28(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 4;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc30; end: 0020bc37; +[SCAttributedFriendingTask contactSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc30(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 5;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc38; end: 0020bc3f; +[SCAttributedFriendingTask addFriendsButtonBadgeRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc38(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 6;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc40; end: 0020bc47; +[SCAttributedFriendingTask addFriendsButtonSuggestionsBadgeNumberSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc40(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 7;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc48; end: 0020bc4f; +[SCAttributedFriendingTask addFriendsButtonBadgeUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc48(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 8;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc50; end: 0020bc57; +[SCAttributedFriendingTask reliablePinning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc50(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 9;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc58; end: 0020bc5f; +[SCAttributedFriendingTask interactivePopover] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc58(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 10;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc60; end: 0020bc67; +[SCAttributedFriendingTask badging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0xb;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc68; end: 0020bc6f; +[SCAttributedFriendingTask pinnedSuggestedSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc68(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0xc;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc70; end: 0020bc77; +[SCAttributedFriendingTask outgoingSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc70(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0xd;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc78; end: 0020bc7f; +[SCAttributedFriendingTask outgoingSnapchattersWithoutUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc78(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0xe;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc80; end: 0020bc87; +[SCAttributedFriendingTask mutualFriendSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc80(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0xf;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc88; end: 0020bc8f; +[SCAttributedFriendingTask recentAndSuggestedFriendSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc88(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0x10;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc90; end: 0020bc97; +[SCAttributedFriendingTask outgoingFriendZombieHeal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc90(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0x11;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bc98; end: 0020bc9f; +[SCAttributedFriendingTask liveActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bc98(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0x12;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bca0; end: 0020bca7; +[SCAttributedFriendingTask inAppNonSDNNotificationProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bca0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0x13;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bca8; end: 0020bcaf; +[SCAttributedFriendingTask friendRequestsReport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bca8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0x14;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bcb0; end: 0020bcb7; +[SCAttributedFriendingTask friendSyncDuplex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bcb0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = 0x15;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bcb8; end: 0020bd2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bcb8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7620) = param_3;
  *(undefined8 *)(lVar2 + _DAT_00af7628) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7630);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020bd2c; end: 0020bf43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020bd2c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
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
  switch(*(undefined1 *)(unaff_x20 + _DAT_00af7620)) {
  case 0:
    param_60 = param_1;
    goto code_r0x0020bf18;
  case 1:
    lVar2 = *(long *)(unaff_x20 + _DAT_00af7628);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20bf44);
      (*pcVar1)();
    }
    goto code_r0x0020beb4;
  case 2:
    param_60 = param_5;
    goto code_r0x0020bf18;
  case 3:
    if ((char)((long *)(unaff_x20 + _DAT_00af7630))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20bf40);
      (*pcVar1)();
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_00af7630);
    param_3 = param_7;
code_r0x0020beb4:
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
    goto code_r0x0020bf18;
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
    goto code_r0x0020bf18;
  case 0x11:
    param_60 = param_48;
    goto code_r0x0020bf18;
  case 0x12:
    param_60 = param_51;
    goto code_r0x0020bf18;
  case 0x13:
    param_60 = param_54;
    goto code_r0x0020bf18;
  case 0x14:
    param_60 = param_57;
    goto code_r0x0020bf18;
  case 0x15:
code_r0x0020bf18:
    (*param_60)();
  }
  return;
}



/* Entry: 0020bf44; end: 0020bf9b;  */

void FUN_0020bf44(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x20bf44);
  (*pcVar1)();
}



/* Entry: 0020bf9c; end: 0020c1a7; -[SCAttributedFriendingTask matchSnapAnyoneNativeMessagingListener:snapchatters:snapcodeWidget:addFriendsTakeoverSnapchatterDataProvider:incomingFriendsSync:contactSync:addFriendsButtonBadgeRepository:addFriendsButtonSuggestionsBadgeNumberSyncer:addFriendsButtonBadgeUpdater:reliablePinning:interactivePopover:badging:pinnedSuggestedSnapchatters:outgoingSnapchatters:outgoingSnapchattersWithoutUser:mutualFriendSnapchatters:recentAndSuggestedFriendSnapchatters:outgoingFriendZombieHeal:liveActivity:inAppNonSDNNotificationProcessor:friendRequestsReport:friendSyncDuplex:] */

void FUN_0020bf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_0020bd2c(0x20c7c0,auStack_60,0x20c7c8,auStack_80,0x20c7f0,auStack_a0,0x20c7d8,auStack_c0,
               0x20c7f4,auStack_e0,0x20c7f8,auStack_100,0x20c7fc,auStack_120,0x20c800,auStack_140,
               0x20c804,auStack_160,0x20c808,auStack_180,0x20c80c,auStack_1a0,0x20c810,auStack_1c0,
               0x20c814,auStack_1e0,0x20c818,auStack_200,0x20c81c,auStack_220,0x20c820,auStack_240,
               0x20c824,auStack_260,0x20c828,auStack_280,0x20c82c,auStack_2a0,0x20c830,auStack_2c0,
               0x20c834,auStack_2e0,0x20c838,auStack_300);
  _objc_release(param_1);
  return;
}



/* Entry: 0020c1a8; end: 0020c1ab;  */

void FUN_0020c1a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020c1ac; end: 0020c1df;  */

void FUN_0020c1ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020c1e0; end: 0020c1ef; -[SCAttributedFriendingTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020c1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af7628));
  return;
}



/* Entry: 0020c1f0; end: 0020c3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0020c1f0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + _DAT_00af7620)) {
  case 0:
    _objc_release();
    uVar2 = 0;
    uVar3 = 2;
    break;
  case 1:
    if (*(long *)(param_1 + _DAT_00af7628) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20c3c8);
      (*pcVar1)();
    }
    uVar2 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_00af7628) + _DAT_00af7618);
    _objc_release();
    uVar3 = 0;
    break;
  case 2:
    _objc_release();
    uVar3 = 2;
    uVar2 = 1;
    break;
  case 3:
    if ((char)((ulong *)(param_1 + _DAT_00af7630))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20c3c4);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_1 + _DAT_00af7630);
    _objc_release();
    uVar3 = 1;
    break;
  case 4:
    _objc_release();
    uVar2 = 2;
    uVar3 = 2;
    break;
  case 5:
    _objc_release();
    uVar3 = 2;
    uVar2 = 3;
    break;
  case 6:
    _objc_release();
    uVar3 = 2;
    uVar2 = 4;
    break;
  case 7:
    _objc_release();
    uVar3 = 2;
    uVar2 = 5;
    break;
  case 8:
    _objc_release();
    uVar3 = 2;
    uVar2 = 6;
    break;
  case 9:
    _objc_release();
    uVar3 = 2;
    uVar2 = 7;
    break;
  case 10:
    _objc_release();
    uVar3 = 2;
    uVar2 = 8;
    break;
  case 0xb:
    _objc_release();
    uVar3 = 2;
    uVar2 = 9;
    break;
  case 0xc:
    _objc_release();
    uVar3 = 2;
    uVar2 = 10;
    break;
  case 0xd:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0xb;
    break;
  case 0xe:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0xc;
    break;
  case 0xf:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0xd;
    break;
  case 0x10:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0xe;
    break;
  case 0x11:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0xf;
    break;
  case 0x12:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0x10;
    break;
  case 0x13:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0x11;
    break;
  case 0x14:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0x12;
    break;
  case 0x15:
    _objc_release();
    uVar3 = 2;
    uVar2 = 0x13;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 0020c3c8; end: 0020c41f;  */

void FUN_0020c3c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x20c3c8);
  (*pcVar1)();
}



/* Entry: 0020c420; end: 0020c45f;  */

void FUN_0020c420(void)

{
  _objc_opt_self(&PTR_PTR_00accf68);
  return;
}



/* Entry: 0020c460; end: 0020c71b;  */

int FUN_0020c460(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0020c4dc;
        goto LAB_0020c4c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0020c4c0:
      return ((uint)*param_1 | uVar1 << 8) - 0x15;
    }
  }
LAB_0020c4dc:
  iVar2 = *param_1 - 0x16;
  if (*param_1 < 0x16) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0020c71c; end: 0020c75b;  */

void FUN_0020c71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eac18;
  _swift_getWitnessTable(&UNK_007eac18,&UNK_009bdd80);
  puRam0000000000af7688 = puVar1;
  return;
}



/* Entry: 0020c75c; end: 0020c75f;  */

void FUN_0020c75c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eacb8;
  _swift_getWitnessTable(&UNK_007eacb8,&UNK_009bdcf0);
  puRam0000000000af7690 = puVar1;
  return;
}



/* Entry: 0020c760; end: 0020c79f;  */

void FUN_0020c760(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eacb8;
  _swift_getWitnessTable(&UNK_007eacb8,&UNK_009bdcf0);
  puRam0000000000af7690 = puVar1;
  return;
}



/* Entry: 0020c7a0; end: 0020c863;  */

ulong FUN_0020c7a0(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 0020c864; end: 0020c867; -[SCAttributedSnapchattersSubtask copyWithZone:] */

void FUN_0020c864(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020c868; end: 0020c86f; -[SCAttributedFriendingTask copyWithZone:] */

void FUN_0020c868(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020c870; end: 0020c90f;  */

void FUN_0020c870(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0020c910; end: 0020c933;  */

void FUN_0020c910(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 0020c934; end: 0020c94f; -[SCAttributedGrapheneTask description] */

void FUN_0020c934(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020c950; end: 0020c997; -[SCAttributedGrapheneTask init] */

void FUN_0020c950(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedGrapheneTaskWrapper.swift",0x33,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20c998);
  (*pcVar1)();
}



/* Entry: 0020c998; end: 0020c99b; -[SCAttributedGrapheneTask copyWithZone:] */

void FUN_0020c998(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020c99c; end: 0020c9db; +[SCAttributedGrapheneTask resumeGraphene] */

void FUN_0020c99c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020c9dc; end: 0020c9e7; -[SCAttributedGrapheneTask matchResumeGraphene:] */

void FUN_0020c9dc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0020c9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020c9e8; end: 0020ca3b;  */

void FUN_0020c9e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020ca3c; end: 0020cb2b;  */

uint FUN_0020ca3c(uint *param_1,int param_2)

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



/* Entry: 0020cb2c; end: 0020cb6b;  */

void FUN_0020cb2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af76c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eada0;
  _swift_getWitnessTable(&UNK_007eada0,&UNK_009bde68);
  puRam0000000000af76c8 = puVar1;
  return;
}



/* Entry: 0020cb6c; end: 0020cb93;  */

void FUN_0020cb6c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_0020db00();
  *param_1 = uVar1;
  return;
}



/* Entry: 0020cb94; end: 0020cbdb; -[SCAttributedLensBuilderSubtask init] */

void FUN_0020cb94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20cbdc);
  (*pcVar1)();
}



/* Entry: 0020cbdc; end: 0020cbe7; -[SCAttributedLensBuilderSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cbdc(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af76d0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020cbe8; end: 0020cbf3; -[SCAttributedLensBuilderSubtask isEqual:] */

uint FUN_0020cbe8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0020cf00(&uStack_50,&DAT_00af76d0);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0020cbf4; end: 0020cc03; +[SCAttributedLensBuilderSubtask getLensTemplates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cbf4(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76d0) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020cc04; end: 0020cc13; +[SCAttributedLensBuilderSubtask createLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cc04(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76d0) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020cc14; end: 0020cc23; +[SCAttributedLensBuilderSubtask getLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cc14(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76d0) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020cc24; end: 0020cc33; +[SCAttributedLensBuilderSubtask lensHttpRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cc24(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76d0) = 3;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020cc34; end: 0020cc73; -[SCAttributedLensBuilderSubtask matchGetLensTemplates:createLens:getLenses:lensHttpRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cc34(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af76d0);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0020cc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 0020cc74; end: 0020cc9b;  */

void FUN_0020cc74(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}


