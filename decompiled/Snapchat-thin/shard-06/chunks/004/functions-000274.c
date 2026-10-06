/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104873ed8; end: 10487403f;  */

int FUN_104873ed8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104873f54;
        goto LAB_104873f38;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104873f38:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104873f54:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104874040; end: 10487407f;  */

void FUN_104874040(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a0b4;
  _swift_getWitnessTable(&UNK_10dd3a0b4,&UNK_1107a6730);
  puRam0000000113093998 = puVar1;
  return;
}



/* Entry: 104874080; end: 10487412b;  */

void FUN_104874080(void)

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



/* Entry: 10487412c; end: 10487416b;  */

void FUN_10487412c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10487416c; end: 104874187; -[SCUserTwoFAGenerateCodeResult description] */

void FUN_10487416c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104874188; end: 1048741cf; -[SCUserTwoFAGenerateCodeResult init] */

void FUN_104874188(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAGenerateCodeResultWrapper.swift",0x3a,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048741d0);
  (*pcVar1)();
}



/* Entry: 1048741d0; end: 1048741d3; -[SCUserTwoFAGenerateCodeResult copyWithZone:] */

void FUN_1048741d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048741d4; end: 10487426f; +[SCUserTwoFAGenerateCodeResult successWithRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048741d4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130939a0) = 0;
  plVar1 = (long *)(lVar3 + _DAT_1130939a8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar3 + _DAT_1130939b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104874270; end: 10487430f; +[SCUserTwoFAGenerateCodeResult failureWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104874270(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130939a0) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130939a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar3 + _DAT_1130939b0);
  *plVar2 = param_3;
  plVar2[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104874310; end: 1048743f7; -[SCUserTwoFAGenerateCodeResult matchSuccess:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104874310(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_1130939a0) == '\x01') {
    lVar2 = ((undefined8 *)(param_1 + _DAT_1130939b0))[1];
    if (lVar2 == 0) {
      _objc_retain(param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1130939b0);
      _objc_retain(param_1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    }
    pcVar1 = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
  else {
    lVar2 = ((undefined8 *)(param_1 + _DAT_1130939a8))[1];
    if (lVar2 == 0) {
      _objc_retain(param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1130939a8);
      _objc_retain(param_1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    }
    pcVar1 = *(code **)(param_3 + 0x10);
  }
  (*pcVar1)(param_3,uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1048743f8; end: 10487442b;  */

void FUN_1048743f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10487442c; end: 10487446b; -[SCUserTwoFAGenerateCodeResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487442c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130939a8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130939b0 + 8))
  ;
  return;
}



/* Entry: 10487446c; end: 10487448b;  */

void FUN_10487446c(void)

{
  _objc_opt_self(&PTR_PTR_1129dec30);
  return;
}



/* Entry: 10487448c; end: 1048745f3;  */

int FUN_10487448c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104874508;
        goto LAB_1048744ec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048744ec:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104874508:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048745f4; end: 104874633;  */

void FUN_1048745f4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130939e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a1a4;
  _swift_getWitnessTable(&UNK_10dd3a1a4,&UNK_1107a6818);
  puRam00000001130939e0 = puVar1;
  return;
}



/* Entry: 104874634; end: 104874643; -[SCUserTwoFAStatus isSmsTwoFAEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104874634(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130939e8);
}



/* Entry: 104874644; end: 104874653; -[SCUserTwoFAStatus isOtpTwoFAEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104874644(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130939f0);
}



/* Entry: 104874654; end: 1048746b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104874654(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130939e8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_1130939f0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048746b8; end: 10487471b; -[SCUserTwoFAStatus initWithIsSmsTwoFAEnabled:isOtpTwoFAEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048746b8(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_1130939e8) = param_3;
  *(undefined1 *)(param_1 + _DAT_1130939f0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10487471c; end: 10487477b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487471c(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_1130939e8) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_1130939f0) = (byte)((uint)param_1 >> 8) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10487477c; end: 10487477f; -[SCUserTwoFAStatus copyWithZone:] */

void FUN_10487477c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104874780; end: 10487479b; -[SCUserTwoFAStatus description] */

void FUN_104874780(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10487479c; end: 104874837; -[SCUserTwoFAStatus init] */

void FUN_10487479c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAStatusWrapper.swift",0x2e,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048747e4);
  (*pcVar1)();
}



/* Entry: 104874838; end: 104874843; -[SCUserTwoFAVerifiedDevice deviceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104874838(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113093a20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113093a20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104874844; end: 10487484f; -[SCUserTwoFAVerifiedDevice deviceName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104874844(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113093a28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113093a28);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104874850; end: 1048748a7;  */

void FUN_104874850(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048748a8; end: 10487496f; -[SCUserTwoFAVerifiedDevice lastLoginTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048748a8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113815430,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104874970; end: 104874a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104874970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093a20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093a28);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x0001009f0578(param_5,unaff_x20 + _DAT_113815430);
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_5);
  return puVar2;
}



/* Entry: 104874a20; end: 104874b83; -[SCUserTwoFAVerifiedDevice initWithDeviceId:deviceName:lastLoginTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104874a20(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  undefined *puVar6;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0x112d373d8;
  puVar6 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_60 - extraout_x8;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar1 = puVar6;
  }
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_5 == 0) {
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar3,param_5);
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,param_5 == 0,1);
  plVar5 = (long *)(param_1 + _DAT_113093a20);
  *plVar5 = param_3;
  plVar5[1] = (long)puVar1;
  plVar5 = (long *)(param_1 + _DAT_113093a28);
  *plVar5 = param_4;
  plVar5[1] = (long)puVar6;
  func_0x0001009f0578(lVar3,param_1 + _DAT_113815430);
  plVar5 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(lVar3);
  return plVar5;
}



/* Entry: 104874b84; end: 104874c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104874b84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  _objc_allocWithZone();
  uVar5 = param_1[1];
  uVar6 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093a20);
  puVar1[1] = param_1[1];
  *puVar1 = uVar6;
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093a28);
  puVar1[1] = param_1[3];
  *puVar1 = uVar7;
  lVar3 = 0;
  FUN_104872ce4();
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar3 + 0x18),unaff_x20 + _DAT_113815430);
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _objc_msgSendSuper2(auStack_50,puVar2);
  FUN_104874c44(param_1);
  return puVar4;
}



/* Entry: 104874c44; end: 104874c7f;  */

undefined8 FUN_104874c44(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104872ce4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104874c80; end: 104874c83; -[SCUserTwoFAVerifiedDevice copyWithZone:] */

void FUN_104874c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104874c84; end: 104874d47; -[SCUserTwoFAVerifiedDevice description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104874c84(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = 0;
  FUN_104872ce4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_113093a20);
  uVar6 = puVar1[1];
  uVar8 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + _DAT_113093a28);
  uVar7 = puVar2[1];
  uVar10 = puVar2[1];
  uVar9 = *puVar2;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = puVar1[1];
  *puVar5 = uVar8;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = uVar10;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar3) = uVar9;
  func_0x0001009f0578(param_1 + _DAT_113815430,
                      (undefined1 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x18)));
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar6);
  FUN_104874c44(puVar5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104874d48; end: 104874dc3; -[SCUserTwoFAVerifiedDevice init] */

void FUN_104874d48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAVerifiedDeviceWrapper.swift",0x36,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104874d90);
  (*pcVar1)();
}



/* Entry: 104874dc4; end: 104874e13; -[SCUserTwoFAVerifiedDevice .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104874dc4(long param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093a20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093a28 + 8));
  param_1 = param_1 + _DAT_113815430;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104874e14; end: 104874e1b;  */

void FUN_104874e14(void)

{
  if (lRam0000000113093a58 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81fba8);
  return;
}



/* Entry: 104874e1c; end: 104874e53;  */

void FUN_104874e1c(undefined8 param_1)

{
  if (lRam0000000113093a58 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81fba8);
  return;
}



/* Entry: 104874e54; end: 104874ecb;  */

void FUN_104874e54(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10dd3a290;
  puStack_30 = &UNK_10dd3a290;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 104874ecc; end: 104874edf;  */

bool FUN_104874ecc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104874ee0; end: 104874fb7;  */

void FUN_104874ee0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104874fb8; end: 104874fd7;  */

void FUN_104874fb8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104874fd8; end: 104875017;  */

void FUN_104874fd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a2b0;
  _swift_getWitnessTable(&UNK_10dd3a2b0,&UNK_1107a6910);
  puRam0000000113093a68 = puVar1;
  return;
}



/* Entry: 104875018; end: 10487503b;  */

undefined1  [16] FUN_104875018(void)

{
  return ZEXT816(0x1107a6910);
}



/* Entry: 10487503c; end: 104875113;  */

void FUN_10487503c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104875114; end: 104875133;  */

void FUN_104875114(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104875134; end: 104875173;  */

void FUN_104875134(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a390;
  _swift_getWitnessTable(&UNK_10dd3a390,&UNK_1107a6988);
  puRam0000000113093a70 = puVar1;
  return;
}



/* Entry: 104875174; end: 10487519b;  */

undefined1  [16] FUN_104875174(void)

{
  return ZEXT816(0x1107a6988);
}



/* Entry: 10487519c; end: 1048751db;  */

void FUN_10487519c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a450;
  _swift_getWitnessTable(&UNK_10dd3a450,&UNK_1107a6a00);
  puRam0000000113093a78 = puVar1;
  return;
}



/* Entry: 1048751dc; end: 104875287;  */

void FUN_1048751dc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104875288; end: 1048752bf;  */

void FUN_104875288(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1048752c0; end: 10487539b;  */

void FUN_1048752c0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10487539c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10487539c; end: 1048753c3;  */

undefined1  [16] FUN_10487539c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1048753c4; end: 104875403;  */

void FUN_1048753c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a510;
  _swift_getWitnessTable(&UNK_10dd3a510,&UNK_1107a6a78);
  puRam0000000113093a80 = puVar1;
  return;
}



/* Entry: 104875404; end: 104875407;  */

void FUN_104875404(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a5b0;
  _swift_getWitnessTable(&UNK_10dd3a5b0,&UNK_1107a6a98);
  puRam0000000113093a88 = puVar1;
  return;
}



/* Entry: 104875408; end: 104875447;  */

void FUN_104875408(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3a5b0;
  _swift_getWitnessTable(&UNK_10dd3a5b0,&UNK_1107a6a98);
  puRam0000000113093a88 = puVar1;
  return;
}



/* Entry: 104875448; end: 10487548f;  */

undefined1  [16] FUN_104875448(void)

{
  return ZEXT816(0x1107a6a78);
}



/* Entry: 104875490; end: 10487549f; -[_TtC24SCTaskManagementServices24SCTaskManagementServices performerThrottler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093aa0));
  return;
}



/* Entry: 1048754a0; end: 104875513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048754a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093a90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113093a98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113093aa0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104875514; end: 1048755a3; -[_TtC24SCTaskManagementServices24SCTaskManagementServices initWithPerformerProvider:performerThrottler:appLifecycleManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875514(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113093a90) = param_5;
  *(undefined8 *)(param_1 + _DAT_113093a98) = param_3;
  *(undefined8 *)(param_1 + _DAT_113093aa0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1048755a4; end: 104875603; -[_TtC24SCTaskManagementServices24SCTaskManagementServices init] */

void FUN_1048755a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTaskManagementServices.SCTaskManagementServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048755d0);
  (*pcVar1)();
}



/* Entry: 104875604; end: 10487564b; -[_TtC24SCTaskManagementServices24SCTaskManagementServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875604(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093a90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093a98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113093aa0));
  return;
}



/* Entry: 10487564c; end: 10487566b; -[SCMainActorThrottlerServices mainActorThrottler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487564c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113093ad0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10487566c; end: 104875703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487566c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093ad0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104875704; end: 104875763; -[SCMainActorThrottlerServices init] */

void FUN_104875704(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MainActorThrottlerServices.MainActorThrottlerServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104875730);
  (*pcVar1)();
}



/* Entry: 104875764; end: 104875773; -[SCMainActorThrottlerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113093ad0));
  return;
}



/* Entry: 104875774; end: 10487580b;  */

int FUN_104875774(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 2)) {
    uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10487580c; end: 10487581b; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService criticalSectionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487580c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093b08));
  return;
}



/* Entry: 10487581c; end: 1048758e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487581c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  func_0x0001000285a8(0x112ea3498,&UNK_10dab5900);
  uVar1 = param_1;
  func_0x0001000bda74(param_1);
  uVar2 = 0x113093b10;
  func_0x0001000285a8(0x113093b10,&UNK_10dd3a708);
  pcVar3 = FUN_1048758e4;
  func_0x0001000cb480(FUN_1048758e4,0,uVar2);
  _swift_release(uVar1);
  *(code **)(unaff_x20 + _DAT_113093b00) = pcVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113093b08) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048758e4; end: 104875963;  */

void FUN_1048758e4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *param_2;
  pcVar2 = (code *)0x0;
  if (lVar3 != 0) {
    uVar1 = 0x113093b40;
    func_0x0001000285a8(0x113093b40,&UNK_10dd3a738);
    func_0x0001000b637c(lVar3,uVar1);
    pcVar2 = FUN_104875964;
    func_0x0001000bfde0(FUN_104875964,0,&UNK_1107a6c68);
    _swift_release(lVar3);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 104875964; end: 1048759a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875964(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_2;
  uVar1 = *(undefined1 *)(lVar2 + _DAT_113093b50);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_113093b58);
  *param_1 = *(undefined8 *)(lVar2 + _DAT_113093b48);
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1048759a8; end: 104875a67; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService initWithObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048759a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112ea3498,&UNK_10dab5900);
  _objc_retain();
  uVar1 = param_3;
  func_0x0001000bda74();
  uVar2 = 0x113093b10;
  func_0x0001000285a8(0x113093b10,&UNK_10dd3a708);
  pcVar3 = FUN_1048758e4;
  func_0x0001000cb480(FUN_1048758e4,0,uVar2);
  _swift_release();
  *(code **)(param_1 + _DAT_113093b00) = pcVar3;
  *(undefined8 *)(param_1 + _DAT_113093b08) = param_3;
  func_0x000100096638();
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104875a68; end: 104875ac3; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService init] */

void FUN_104875a68(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCriticalSectionObservableService.SCCriticalSectionObservableService",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104875a94);
  (*pcVar1)();
}



/* Entry: 104875ac4; end: 104875afb; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875ac4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113093b00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113093b08));
  return;
}



/* Entry: 104875afc; end: 104875b0b; -[SCCriticalSection reason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104875afc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113093b48);
}



/* Entry: 104875b0c; end: 104875b1b; -[SCCriticalSection enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104875b0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113093b50);
}



/* Entry: 104875b1c; end: 104875b2f; -[SCCriticalSection ongoingCriticalSectionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104875b1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113093b58);
}



/* Entry: 104875b30; end: 104875c17; -[SCCriticalSection initWithReason:enabled:ongoingCriticalSectionCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875b30(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113093b48) = param_3;
  *(undefined1 *)(param_1 + _DAT_113093b50) = param_4;
  *(undefined8 *)(param_1 + _DAT_113093b58) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104875c18; end: 104875c1b; -[SCCriticalSection copyWithZone:] */

void FUN_104875c18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104875c1c; end: 104875c37; -[SCCriticalSection description] */

void FUN_104875c1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104875c38; end: 104875cd3; -[SCCriticalSection init] */

void FUN_104875c38(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCriticalSectionObservableService/SCCriticalSectionWrapper.swift",0x41,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104875c80);
  (*pcVar1)();
}



/* Entry: 104875cd4; end: 104875ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104875cd4(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093b48) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113093b50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113093b58) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104875cec; end: 104875dff;  */

void FUN_104875cec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x0001000bdd80();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar5 + 0x10))(puVar4,param_2,lVar2);
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
  if ((int)puVar3 == 1) {
    lVar5 = *(long *)(param_3 + -8);
    (**(code **)(lVar5 + 0x20))(param_1,puVar4,param_3);
  }
  else {
    (**(code **)(lVar5 + 8))(param_2,lVar2);
    uVar1 = *(undefined8 *)(&stack0xffffffffffffffc8 + -extraout_x8);
    (*(code *)*puVar4)(param_1);
    _swift_release(uVar1);
    lVar5 = *(long *)(param_3 + -8);
    (**(code **)(lVar5 + 0x10))(param_2,param_1,param_3);
    _swift_storeEnumTagMultiPayload(param_2,lVar2,1);
  }
  (**(code **)(lVar5 + 0x38))(param_1,0,1,param_3);
  return;
}



/* Entry: 104875e00; end: 104875e27;  */

void FUN_104875e00(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104875cec(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104875e28; end: 104875f03;  */

void FUN_104875e28(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  lVar2 = 0;
  func_0x0001000bdd80(0,lVar4);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001000c74f0(puVar5);
  puVar3 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
    lVar2 = *(long *)(lVar4 + -8);
  }
  else {
    lVar2 = *(long *)(lVar4 + -8);
    (**(code **)(lVar2 + 0x20))(param_1,puVar5,lVar4);
  }
  (**(code **)(lVar2 + 0x38))(param_1,bVar1,1,lVar4);
  return;
}



/* Entry: 104875f04; end: 104875f8f;  */

void FUN_104875f04(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(long **)(unaff_x22 + 0x30) = unaff_x20;
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar1 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104875f90,0,0);
  return;
}



/* Entry: 104875f90; end: 1048760d7;  */

void FUN_104875f90(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  FUN_104896b90(uVar6,FUN_104876208,unaff_x22 + 0x10,uVar5);
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar5);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
    plVar2 = (long *)0x20;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1048760d8;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    plVar4 = (long *)0x70;
    _swift_task_alloc();
    plVar2[2] = (long)plVar4;
    *plVar4 = (long)plVar2;
    plVar4[1] = (long)FUN_104894f24;
                    /* WARNING: Could not recover jumptable at 0x000104894f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_104167d8c)(plVar4,uVar3,0,0,FUN_104876488,uVar6,uVar5);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x58) + 0x20);
  (*pcVar7)(uVar6,*(undefined8 *)(unaff_x22 + 0x50),uVar5);
  (*pcVar7)(uVar3,uVar6,uVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001048760d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1048760d8; end: 104876127;  */

void FUN_1048760d8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x68));
  uVar2 = *(undefined8 *)(lVar1 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000104876124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 104876128; end: 104876207;  */

void FUN_104876128(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x0001000bdd80();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(lVar5 + 0x10))(puVar4,param_2,lVar2);
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
    lVar2 = *(long *)(param_3 + -8);
  }
  else {
    lVar2 = *(long *)(param_3 + -8);
    (**(code **)(lVar2 + 0x20))(param_1,puVar4,param_3);
  }
  (**(code **)(lVar2 + 0x38))(param_1,bVar1,1,param_3);
  return;
}



/* Entry: 104876208; end: 10487622f;  */

void FUN_104876208(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104876128(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104876230; end: 104876487;  */

void FUN_104876230(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_b0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar12 = *(long *)(uVar3 - 8);
  uVar4 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1048906dc();
  (**(code **)(lVar12 + 0x68))
            (lVar13,*(undefined4 *)
                     (&PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_1107a6fd8)[uVar4 & 0xff],
             uVar3);
  func_0x0001000295c4(0);
  lVar2 = lVar13;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar13);
  (**(code **)(lVar12 + 8))(lVar13,uVar3);
  puVar5 = &UNK_1107a6f98;
  _swift_allocObject(&UNK_1107a6f98,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uStack_b0;
  pcStack_70 = FUN_1048771fc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1107a6fb0;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  _swift_retain(param_2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar7;
  func_0x0001001c7f30();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&puStack_98,uVar7,uVar8,lVar1,param_2);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar9,ppuVar6);
  __Block_release(ppuVar6);
  _objc_release(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar1);
  (**(code **)(lVar10 + 8))(lVar11,lStack_a8);
  _swift_release(puStack_68);
  return;
}



/* Entry: 104876488; end: 10487648f;  */

void FUN_104876488(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_b0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar12 = *(long *)(uVar3 - 8);
  uVar4 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1048906dc();
  (**(code **)(lVar12 + 0x68))
            (lVar13,*(undefined4 *)
                     (&PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_1107a6fd8)[uVar4 & 0xff],
             uVar3);
  func_0x0001000295c4(0);
  lVar2 = lVar13;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar13);
  (**(code **)(lVar12 + 8))(lVar13,uVar3);
  puVar5 = &UNK_1107a6f98;
  _swift_allocObject(&UNK_1107a6f98,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = uStack_b0;
  pcStack_70 = FUN_1048771fc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1107a6fb0;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  _swift_retain();
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar7;
  func_0x0001001c7f30();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&puStack_98,uVar7,uVar8,lVar1,unaff_x20);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar9,ppuVar6);
  __Block_release(ppuVar6);
  _objc_release(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar1);
  (**(code **)(lVar10 + 8))(lVar11,lStack_a8);
  _swift_release(puStack_68);
  return;
}



/* Entry: 104876490; end: 104876573;  */

void FUN_104876490(long *param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x12;
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  lVar1 = *(long *)(*param_1 + 0x50);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  lStack_60 = lVar1;
  func_0x000100075034(lVar3,&UNK_1000ca6b0,auStack_70,lVar1);
  (**(code **)(lVar4 + 0x10))(puVar2,lVar3,lVar1);
  func_0x000103969044(puVar2,param_2,lVar1);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  return;
}



/* Entry: 104876574; end: 104876613;  */

void FUN_104876574(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(long *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  lVar4 = *unaff_x20;
  lVar3 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  lVar3 = *(long *)(lVar4 + 0x50);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104876614;
  plVar2[5] = uVar1;
  plVar2[6] = (long)unaff_x20;
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  plVar2[7] = lVar4;
  lVar3 = 0;
  __sSqMa(0,lVar4);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar1;
  lVar3 = *(long *)(lVar4 + -8);
  plVar2[0xb] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104875f90,0,0);
  return;
}



/* Entry: 104876614; end: 10487665b;  */

void FUN_104876614(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10487665c,0,0);
  return;
}



/* Entry: 10487665c; end: 104876727;  */

/* WARNING: Removing unreachable block (ram,0x0001048766c8) */

void FUN_10487665c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_1048da008(*(undefined8 *)(unaff_x22 + 0x40),0x10487720c,unaff_x22 + 0x10,lVar2,
                *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
                *(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar1 + 8))(uVar3,lVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000104876724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104876728; end: 104876737;  */

void FUN_104876728(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104876738; end: 104876877;  */

void FUN_104876738(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar1;
  long unaff_x21;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_3 + -8);
  uStack_a8 = param_5;
  uStack_a0 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(extraout_x12 + 0x50);
  lVar4 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar1 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_80 = lVar5;
  func_0x000100075034(lVar1,&UNK_1000ca6b0,auStack_90,lVar5);
  lStack_80 = *(undefined8 *)(lVar5 + 0x10);
  lStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_2;
  FUN_1048da008(uStack_a0,FUN_104876878,auStack_90,lVar5,param_3,param_4,puVar2);
  (**(code **)(lVar4 + 8))(lVar1,lVar5);
  if (unaff_x21 != 0) {
    (**(code **)(lVar3 + 0x20))(uStack_a8,puVar2,param_3);
  }
  return;
}



/* Entry: 104876878; end: 104876933;  */

void FUN_104876878(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010487688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x10))
            (param_1,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 104876934; end: 1048769ef;  */

long * FUN_104876934(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar1 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if ((*(uint *)(lVar1 + 0x50) & 0x1000f8) == 0 && uVar3 + 1 < 0x19) {
    uVar2 = (uint)*(byte *)((long)param_2 + uVar3);
    if (1 < *(byte *)((long)param_2 + uVar3)) {
      uVar2 = (int)*param_2 + 2;
    }
    if (uVar2 == 1) {
      (**(code **)(lVar1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar3) = 1;
      return param_1;
    }
    lVar1 = param_2[1];
    lVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar2 + 0x17 & (uVar2 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar1);
  return param_1;
}



/* Entry: 1048769f0; end: 104876b8b;  */

uint * FUN_1048769f0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104876aa0;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104876aa0:
  if (uVar4 == 1) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  else {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104876b38;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104876b38:
  if (uVar4 == 1) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    *(byte *)((long)param_1 + uVar3) = 0;
    _swift_retain(uVar2);
  }
  return param_1;
}


