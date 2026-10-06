/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00203ab4; end: 00203af3;  */

void FUN_00203ab4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e9438;
  _swift_getWitnessTable(&UNK_007e9438,&UNK_009bca68);
  puRam0000000000af7058 = puVar1;
  return;
}



/* Entry: 00203af4; end: 00203bab;  */

void FUN_00203af4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00203b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 00203bac; end: 00203c7f;  */

void FUN_00203bac(void)

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



/* Entry: 00203c80; end: 00203c9f;  */

void FUN_00203c80(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00203ca0; end: 00203cbb; -[SCAttributedBitmojiTask description] */

void FUN_00203ca0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00203cbc; end: 00203d03; -[SCAttributedBitmojiTask init] */

void FUN_00203cbc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedBitmojiTaskWrapper.swift",0x32,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x203d04);
  (*pcVar1)();
}



/* Entry: 00203d04; end: 00203d07; -[SCAttributedBitmojiTask copyWithZone:] */

void FUN_00203d04(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00203d08; end: 00203d0f; +[SCAttributedBitmojiTask notificationExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00203d08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7060) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00203d10; end: 00203d17; +[SCAttributedBitmojiTask messagesExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00203d10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7060) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00203d18; end: 00203d1f; +[SCAttributedBitmojiTask keyboardExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00203d18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7060) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00203d20; end: 00203d27; +[SCAttributedBitmojiTask lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00203d20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7060) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00203d28; end: 00203d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00203d28(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7060) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00203d78; end: 00203db3; -[SCAttributedBitmojiTask matchNotificationExtension:messagesExtension:keyboardExtension:lens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00203d78(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7060);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00203db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 00203db4; end: 00203e07;  */

void FUN_00203db4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00203e08; end: 00203f6f;  */

int FUN_00203e08(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00203e84;
        goto LAB_00203e68;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00203e68:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_00203e84:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00203f70; end: 00203faf;  */

void FUN_00203f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e9520;
  _swift_getWitnessTable(&UNK_007e9520,&UNK_009bcb50);
  puRam0000000000af7090 = puVar1;
  return;
}



/* Entry: 00203fb0; end: 00203fd7;  */

ulong FUN_00203fb0(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 00203fd8; end: 00203ff3; -[SCAttributedCOFConfigManagerSubTask description] */

void FUN_00203fd8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00203ff4; end: 0020403b; -[SCAttributedCOFConfigManagerSubTask init] */

void FUN_00203ff4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCOFTaskWrapper.swift",0x2e,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20403c);
  (*pcVar1)();
}



/* Entry: 0020403c; end: 00204083; -[SCAttributedCOFConfigManagerSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020403c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af70a8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00204084; end: 00204123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00204084(undefined8 param_1)

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
      cVar1 = *(char *)(unaff_x20 + _DAT_00af70a8);
      cVar2 = *(char *)(lStack_58 + _DAT_00af70a8);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 00204124; end: 002041a3; -[SCAttributedCOFConfigManagerSubTask isEqual:] */

uint FUN_00204124(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_00204084(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 002041a4; end: 002041ab; +[SCAttributedCOFConfigManagerSubTask initOnResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002041a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af70a8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002041ac; end: 002041b3; +[SCAttributedCOFConfigManagerSubTask initOnLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002041ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af70a8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002041b4; end: 002041bb; +[SCAttributedCOFConfigManagerSubTask initOnForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002041b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af70a8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002041bc; end: 0020420b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002041bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af70a8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020420c; end: 0020423b; -[SCAttributedCOFConfigManagerSubTask matchInitOnResume:initOnLogin:initOnForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020420c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af70a8) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af70a8) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00204234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020423c; end: 002042a7;  */

void FUN_0020423c(void)

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



/* Entry: 002042a8; end: 002042ab;  */

void FUN_002042a8(void)

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



/* Entry: 002042ac; end: 00204313;  */

void FUN_002042ac(void)

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



/* Entry: 00204314; end: 00204333;  */

void FUN_00204314(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00204334; end: 00204377; -[SCAttributedCOFTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204334(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_00af7098) == '\x02') && (*(long *)(param_1 + _DAT_00af70a0) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x204378);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204378; end: 002043bf; -[SCAttributedCOFTask init] */

void FUN_00204378(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCOFTaskWrapper.swift",0x2e,2,0xae,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2043c0);
  (*pcVar1)();
}



/* Entry: 002043c0; end: 002043c3;  */

void FUN_002043c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002043c4; end: 002043cb; +[SCAttributedCOFTask appStartExperimentLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002043c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7098) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af70a0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002043cc; end: 002043d3; +[SCAttributedCOFTask canaryStudy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002043cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7098) = 1;
  *(undefined8 *)(lVar1 + _DAT_00af70a0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002043d4; end: 0020443f; +[SCAttributedCOFTask configManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002043d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7098) = 2;
  *(undefined8 *)(lVar2 + _DAT_00af70a0) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204440; end: 00204447; +[SCAttributedCOFTask configRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204440(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7098) = 3;
  *(undefined8 *)(lVar1 + _DAT_00af70a0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204448; end: 0020444f; +[SCAttributedCOFTask sharedContainerRead] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204448(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7098) = 4;
  *(undefined8 *)(lVar1 + _DAT_00af70a0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204450; end: 002044ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204450(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7098) = param_3;
  *(undefined8 *)(lVar1 + _DAT_00af70a0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002044ac; end: 00204527; -[SCAttributedCOFTask matchAppStartExperimentLogger:canaryStudy:configManager:configRecovery:sharedContainerRead:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002044ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7098);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002044e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0020451c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x002044d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_6 + 0x10))(param_6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00204510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_7 + 0x10))(param_7);
    return;
  }
  if (*(long *)(param_1 + _DAT_00af70a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00204504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x204524);
  (*pcVar2)();
}



/* Entry: 00204528; end: 0020455b;  */

void FUN_00204528(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020455c; end: 0020456b; -[SCAttributedCOFTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020455c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af70a0));
  return;
}



/* Entry: 0020456c; end: 002045ab;  */

void FUN_0020456c(void)

{
  _objc_opt_self(&PTR_PTR_00acbdb0);
  return;
}



/* Entry: 002045ac; end: 00204867;  */

int FUN_002045ac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00204628;
        goto LAB_0020460c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0020460c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_00204628:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00204868; end: 002048a7;  */

void FUN_00204868(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e965c;
  _swift_getWitnessTable(&UNK_007e965c,&UNK_009bccc8);
  puRam0000000000af7100 = puVar1;
  return;
}



/* Entry: 002048a8; end: 002048ab;  */

void FUN_002048a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e96fc;
  _swift_getWitnessTable(&UNK_007e96fc,&UNK_009bcc38);
  puRam0000000000af7108 = puVar1;
  return;
}



/* Entry: 002048ac; end: 002048eb;  */

void FUN_002048ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e96fc;
  _swift_getWitnessTable(&UNK_007e96fc,&UNK_009bcc38);
  puRam0000000000af7108 = puVar1;
  return;
}



/* Entry: 002048ec; end: 00204933;  */

ulong FUN_002048ec(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 00204934; end: 00204937; -[SCAttributedCOFConfigManagerSubTask copyWithZone:] */

void FUN_00204934(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00204938; end: 0020493f; -[SCAttributedCOFTask copyWithZone:] */

void FUN_00204938(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00204940; end: 00204987; -[SCAttributedCameraLockedScreenCaptureSubTask init] */

void FUN_00204940(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x204988);
  (*pcVar1)();
}



/* Entry: 00204988; end: 00204993; -[SCAttributedCameraLockedScreenCaptureSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204988(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af7110));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00204994; end: 0020499f; -[SCAttributedCameraLockedScreenCaptureSubTask isEqual:] */

uint FUN_00204994(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_00204c5c(&uStack_50,&DAT_00af7110);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 002049a0; end: 002049af; +[SCAttributedCameraLockedScreenCaptureSubTask deepLinkProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002049a0(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7110) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002049b0; end: 002049bf; +[SCAttributedCameraLockedScreenCaptureSubTask invalidateSessionContents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002049b0(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7110) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002049c0; end: 002049df; -[SCAttributedCameraLockedScreenCaptureSubTask matchDeepLinkProcessing:invalidateSessionContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002049c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_00af7110) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x002049d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 002049e0; end: 00204a07;  */

void FUN_002049e0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 00204a08; end: 00204a4b;  */

void FUN_00204a08(void)

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



/* Entry: 00204a4c; end: 00204a67;  */

void FUN_00204a4c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204a68; end: 00204aaf; -[SCAttributedMicNotificationSubTask init] */

void FUN_00204a68(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x8d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x204ab0);
  (*pcVar1)();
}



/* Entry: 00204ab0; end: 00204abb; -[SCAttributedMicNotificationSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204ab0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af7118));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00204abc; end: 00204ac7; -[SCAttributedMicNotificationSubTask isEqual:] */

uint FUN_00204abc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_00204c5c(&uStack_50,&DAT_00af7118);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00204ac8; end: 00204b57;  */

uint FUN_00204ac8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_00204c5c(&uStack_50,param_4);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00204b58; end: 00204b5b;  */

void FUN_00204b58(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00204b5c; end: 00204b6b; +[SCAttributedMicNotificationSubTask callObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204b5c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7118) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204b6c; end: 00204b7b; +[SCAttributedMicNotificationSubTask callStatusUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204b6c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7118) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204b7c; end: 00204b97; -[SCAttributedMicNotificationSubTask matchCallObserver:callStatusUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204b7c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_00af7118) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00204b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 00204b98; end: 00204bbf;  */

void FUN_00204b98(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_00205e34();
  *param_1 = uVar1;
  return;
}



/* Entry: 00204bc0; end: 00204c07; -[SCAttributedCameraMainCameraStartupSubTask init] */

void FUN_00204bc0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x100,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x204c08);
  (*pcVar1)();
}



/* Entry: 00204c08; end: 00204c13; -[SCAttributedCameraMainCameraStartupSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204c08(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af7120));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00204c14; end: 00204c5b;  */

void FUN_00204c14(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00204c5c; end: 00204cfb;  */

bool FUN_00204c5c(undefined8 param_1,long *param_2)

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
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 00204cfc; end: 00204d07; -[SCAttributedCameraMainCameraStartupSubTask isEqual:] */

uint FUN_00204cfc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_00204c5c(&uStack_50,&DAT_00af7120);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00204d08; end: 00204d17; +[SCAttributedCameraMainCameraStartupSubTask geoFilterInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204d08(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7120) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204d18; end: 00204d27; +[SCAttributedCameraMainCameraStartupSubTask tooltipPriorityResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204d18(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7120) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204d28; end: 00204d37; +[SCAttributedCameraMainCameraStartupSubTask onboardingTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204d28(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7120) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204d38; end: 00204d47; +[SCAttributedCameraMainCameraStartupSubTask viewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204d38(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7120) = 3;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204d48; end: 00204d57; +[SCAttributedCameraMainCameraStartupSubTask uploadPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204d48(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7120) = 4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204d58; end: 00204daf;  */

void FUN_00204d58(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

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
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00204db0; end: 00204dfb; -[SCAttributedCameraMainCameraStartupSubTask matchGeoFilterInit:tooltipPriorityResolver:onboardingTooltip:viewDidAppear:uploadPrefetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00204db0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7120);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_3 = param_4;
    }
  }
  else {
    param_3 = param_5;
    if ((bVar1 != 2) && (param_3 = param_6, bVar1 != 3)) {
      param_3 = param_7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00204df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 00204dfc; end: 00204e9b;  */

void FUN_00204dfc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00204e9c; end: 00204ebf;  */

void FUN_00204e9c(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 00204ec0; end: 00204f07; -[SCAttributedCameraHardwareSubTask init] */

void FUN_00204ec0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x180,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x204f08);
  (*pcVar1)();
}



/* Entry: 00204f08; end: 00204f43; -[SCAttributedCameraHardwareSubTask hash] */

void FUN_00204f08(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00204f44; end: 00204fcf;  */

undefined8 FUN_00204f44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    puVar1 = &uStack_58;
    _swift_dynamicCast(puVar1,auStack_50,PTR___sypN_0099b8d8 + 8,unaff_x20,6);
    if (((ulong)puVar1 & 1) != 0) {
      _objc_release(uStack_58);
      return 1;
    }
  }
  return 0;
}



/* Entry: 00204fd0; end: 0020504f; -[SCAttributedCameraHardwareSubTask isEqual:] */

uint FUN_00204fd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_00204f44(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00205050; end: 0020508f; +[SCAttributedCameraHardwareSubTask frameHealthChecker] */

void FUN_00205050(undefined8 param_1)

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



/* Entry: 00205090; end: 0020509b; -[SCAttributedCameraHardwareSubTask matchFrameHealthChecker:] */

void FUN_00205090(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00205098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020509c; end: 00205147;  */

void FUN_0020509c(void)

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



/* Entry: 00205148; end: 0020516b; -[SCAttributedCameraTask description] */

void FUN_00205148(void)

{
  _objc_retain();
  func_0x00205b7c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020516c; end: 002051b3; -[SCAttributedCameraTask init] */

void FUN_0020516c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x277,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2051b4);
  (*pcVar1)();
}



/* Entry: 002051b4; end: 002051bb; +[SCAttributedCameraTask logging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002051b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7128) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7130) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7138) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7140) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7148) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002051bc; end: 002051c3; +[SCAttributedCameraTask viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002051bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7128) = 1;
  *(undefined8 *)(lVar1 + _DAT_00af7130) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7138) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7140) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7148) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002051c4; end: 002051cb; +[SCAttributedCameraTask nonCriticalfeatureActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002051c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7128) = 2;
  *(undefined8 *)(lVar1 + _DAT_00af7130) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7138) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7140) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7148) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002051cc; end: 002051d3; +[SCAttributedCameraTask lockScreenExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002051cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7128) = 3;
  *(undefined8 *)(lVar1 + _DAT_00af7130) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7138) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7140) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7148) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002051d4; end: 002051db; +[SCAttributedCameraTask lockScreenWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002051d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7128) = 4;
  *(undefined8 *)(lVar1 + _DAT_00af7130) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7138) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7140) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7148) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002051dc; end: 00205213; +[SCAttributedCameraTask lockedCameraCapture:] */

void FUN_002051dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_00205e54();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00205214; end: 0020521b; +[SCAttributedCameraTask warmupPreviewNavigationPageRouter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00205214(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7128) = 6;
  *(undefined8 *)(lVar1 + _DAT_00af7130) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7138) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7140) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7148) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020521c; end: 00205223; +[SCAttributedCameraTask warmupPreviewStartupWorkflowOnIdle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020521c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7128) = 7;
  *(undefined8 *)(lVar1 + _DAT_00af7130) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7138) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7140) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7148) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}


