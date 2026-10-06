/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047cece4; end: 1047cede3;  */

undefined8 FUN_1047cece4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20e150);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_78;
    _swift_dynamicCast(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_78;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010bff4ba0();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1047cede4; end: 1047cee03;  */

void FUN_1047cede4(void)

{
  _objc_opt_self(&PTR_PTR_1129d4aa8);
  return;
}



/* Entry: 1047cee04; end: 1047ceea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047cee04(undefined8 param_1)

{
  int iVar1;
  int iVar2;
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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f600);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f600);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047ceea4; end: 1047ceeb7; -[SCAdBottomTrayDecision bottomTrayType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047ceea4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f600);
}



/* Entry: 1047ceeb8; end: 1047cef03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ceeb8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f600) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cef04; end: 1047cef4f; -[SCAdBottomTrayDecision initWithBottomTrayType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cef04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f600) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cef50; end: 1047cef97; -[SCAdBottomTrayDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cef50(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f600));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047cef98; end: 1047cf017; -[SCAdBottomTrayDecision isEqual:] */

uint FUN_1047cef98(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cee04(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cf018; end: 1047cf01b; -[SCAdBottomTrayDecision copyWithZone:] */

void FUN_1047cf018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cf01c; end: 1047cf16f; -[SCAdBottomTrayDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e1b0);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047cf170; end: 1047cf233; -[SCAdBottomTrayDecision initWithCoder:] */

undefined8 FUN_1047cf170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar3 = 0xf20e1b0;
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
  uVar2 = param_3;
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  FUN_1046b8bb4(uVar2);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_3);
    uVar2 = param_1;
    _swift_getObjectType(param_1);
    _swift_deallocPartialClassInstance(param_1,uVar2,0x10,7);
    param_1 = 0;
  }
  else {
    func_0x00010bff9460(param_1);
    _objc_release(param_3);
  }
  return param_1;
}



/* Entry: 1047cf234; end: 1047cf24f; -[SCAdBottomTrayDecision description] */

void FUN_1047cf234(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cf250; end: 1047cf2cb; -[SCAdBottomTrayDecision init] */

void FUN_1047cf250(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdBottomTrayDecisionWrapper.swift",0x2d,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cf298);
  (*pcVar1)();
}



/* Entry: 1047cf2cc; end: 1047cf2cf; -[SCAdBottomTrayDecision .cxx_destruct] */

void FUN_1047cf2cc(void)

{
  return;
}



/* Entry: 1047cf2d0; end: 1047cf2ef;  */

void FUN_1047cf2d0(void)

{
  _objc_opt_self(&PTR_PTR_1129d4b78);
  return;
}



/* Entry: 1047cf2f0; end: 1047cf2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf2f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f600) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cf2f4; end: 1047cf393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047cf2f4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f630);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f630);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047cf394; end: 1047cf3a7; -[SCAdCaptionCtaDecision captionCtaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cf394(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f630);
}



/* Entry: 1047cf3a8; end: 1047cf3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf3a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f630) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cf3f4; end: 1047cf43f; -[SCAdCaptionCtaDecision initWithCaptionCtaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f630) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cf440; end: 1047cf487; -[SCAdCaptionCtaDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf440(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f630));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047cf488; end: 1047cf507; -[SCAdCaptionCtaDecision isEqual:] */

uint FUN_1047cf488(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cf2f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cf508; end: 1047cf50b; -[SCAdCaptionCtaDecision copyWithZone:] */

void FUN_1047cf508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cf50c; end: 1047cf597; -[SCAdCaptionCtaDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf50c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e200);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047cf598; end: 1047cf5c7;  */

void FUN_1047cf598(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047cf5c8(param_1);
  return;
}



/* Entry: 1047cf5c8; end: 1047cf673;  */

undefined8 FUN_1047cf5c8(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e200);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    func_0x00010bffc5a0();
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047cf674; end: 1047cf69b; -[SCAdCaptionCtaDecision initWithCoder:] */

void FUN_1047cf674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047cf5c8();
  return;
}



/* Entry: 1047cf69c; end: 1047cf6b7; -[SCAdCaptionCtaDecision description] */

void FUN_1047cf69c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cf6b8; end: 1047cf733; -[SCAdCaptionCtaDecision init] */

void FUN_1047cf6b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdCaptionCtaDecisionWrapper.swift",0x2d,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cf700);
  (*pcVar1)();
}



/* Entry: 1047cf734; end: 1047cf737; -[SCAdCaptionCtaDecision .cxx_destruct] */

void FUN_1047cf734(void)

{
  return;
}



/* Entry: 1047cf738; end: 1047cf757;  */

void FUN_1047cf738(void)

{
  _objc_opt_self(&PTR_PTR_1129d4c48);
  return;
}



/* Entry: 1047cf758; end: 1047cf75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf758(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f630) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cf75c; end: 1047cf7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047cf75c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f660);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f660);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047cf7fc; end: 1047cf80f; -[SCAdCardCtaAccessoryDecision cardCtaAccessoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cf7fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f660);
}



/* Entry: 1047cf810; end: 1047cf85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf810(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f660) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cf85c; end: 1047cf8a7; -[SCAdCardCtaAccessoryDecision initWithCardCtaAccessoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f660) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cf8a8; end: 1047cf8ef; -[SCAdCardCtaAccessoryDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf8a8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f660));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047cf8f0; end: 1047cf96f; -[SCAdCardCtaAccessoryDecision isEqual:] */

uint FUN_1047cf8f0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cf75c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cf970; end: 1047cf973; -[SCAdCardCtaAccessoryDecision copyWithZone:] */

void FUN_1047cf970(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cf974; end: 1047cfac7; -[SCAdCardCtaAccessoryDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cf974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20e250);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047cfac8; end: 1047cfb8b; -[SCAdCardCtaAccessoryDecision initWithCoder:] */

undefined8 FUN_1047cfac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar3 = 0xf20e250;
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017);
  uVar2 = param_3;
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  FUN_1046b8eb8(uVar2);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_3);
    uVar2 = param_1;
    _swift_getObjectType(param_1);
    _swift_deallocPartialClassInstance(param_1,uVar2,0x10,7);
    param_1 = 0;
  }
  else {
    func_0x00010bffcb60(param_1);
    _objc_release(param_3);
  }
  return param_1;
}



/* Entry: 1047cfb8c; end: 1047cfba7; -[SCAdCardCtaAccessoryDecision description] */

void FUN_1047cfb8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cfba8; end: 1047cfc23; -[SCAdCardCtaAccessoryDecision init] */

void FUN_1047cfba8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdCardCtaAccessoryDecisionWrapper.swift",0x33,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cfbf0);
  (*pcVar1)();
}



/* Entry: 1047cfc24; end: 1047cfc27; -[SCAdCardCtaAccessoryDecision .cxx_destruct] */

void FUN_1047cfc24(void)

{
  return;
}



/* Entry: 1047cfc28; end: 1047cfc47;  */

void FUN_1047cfc28(void)

{
  _objc_opt_self(&PTR_PTR_1129d4d18);
  return;
}



/* Entry: 1047cfc48; end: 1047cfc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cfc48(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f660) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cfc4c; end: 1047cfcff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047cfc4c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f690);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f690);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308f698);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308f698);
      _objc_release();
      return iVar1 == iVar2 && (int)uVar5 == (int)uVar6;
    }
  }
  return false;
}



/* Entry: 1047cfd00; end: 1047cfd0f; -[SCAdCardCtaDecision positioningMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cfd00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f690);
}



/* Entry: 1047cfd10; end: 1047cfd23; -[SCAdCardCtaDecision cardCtaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cfd10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f698);
}



/* Entry: 1047cfd24; end: 1047cfd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cfd24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f690) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f698) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cfd88; end: 1047cfdeb; -[SCAdCardCtaDecision initWithPositioningMode:cardCtaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cfd88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f690) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f698) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cfdec; end: 1047cfe47; -[SCAdCardCtaDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cfdec(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f690));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f698));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047cfe48; end: 1047cfec7; -[SCAdCardCtaDecision isEqual:] */

uint FUN_1047cfe48(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cfc4c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cfec8; end: 1047cfecb; -[SCAdCardCtaDecision copyWithZone:] */

void FUN_1047cfec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cfecc; end: 1047cffa3; -[SCAdCardCtaDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cfecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20e2b0);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  uVar1 = 0x4154435f44524143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4154435f44524143,0xed0000455059545f);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047cffa4; end: 1047cffd3;  */

void FUN_1047cffa4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047cffd4(param_1);
  return;
}



/* Entry: 1047cffd4; end: 1047d00ef;  */

undefined8 FUN_1047cffd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  
  uVar3 = 0xf20e2b0;
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
  uVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  func_0x0001046b9ce4(uVar2);
  if ((uVar3 & 0xff) != 1) {
    uVar1 = 0x4154435f44524143;
    uVar3 = 0x5059545f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4154435f44524143);
    uVar2 = param_1;
    func_0x00010bf66f40(param_1);
    _objc_release(uVar1);
    FUN_1046b90e4(uVar2);
    if ((uVar3 & 0xff) != 1) {
      func_0x00010c037ca0();
      _objc_release(param_1);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047d00f0; end: 1047d0117; -[SCAdCardCtaDecision initWithCoder:] */

void FUN_1047d00f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047cffd4();
  return;
}



/* Entry: 1047d0118; end: 1047d0133; -[SCAdCardCtaDecision description] */

void FUN_1047d0118(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d0134; end: 1047d01af; -[SCAdCardCtaDecision init] */

void FUN_1047d0134(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdCardCtaDecisionWrapper.swift",
             0x2a,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d017c);
  (*pcVar1)();
}



/* Entry: 1047d01b0; end: 1047d01b3; -[SCAdCardCtaDecision .cxx_destruct] */

void FUN_1047d01b0(void)

{
  return;
}



/* Entry: 1047d01b4; end: 1047d01d3;  */

void FUN_1047d01b4(void)

{
  _objc_opt_self(&PTR_PTR_1129d4de8);
  return;
}



/* Entry: 1047d01d4; end: 1047d01d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d01d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f690) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f698) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d01d8; end: 1047d02a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d01d8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f6c8);
      iVar2 = *(int *)(lStack_68 + _DAT_11308f6c8);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11308f6d0);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308f6d0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308f6d8);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_11308f6d8);
      _objc_release();
      return (iVar1 == iVar2 && (int)uVar6 == (int)uVar7) && (int)uVar5 == (int)uVar8;
    }
  }
  return false;
}



/* Entry: 1047d02a8; end: 1047d02b7; -[SCAdEndCardDecision endCardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d02a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f6c8);
}



/* Entry: 1047d02b8; end: 1047d02c7; -[SCAdEndCardDecision screenshotCardStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d02b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f6d0);
}



/* Entry: 1047d02c8; end: 1047d02db; -[SCAdEndCardDecision reviewCardStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d02c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f6d8);
}



/* Entry: 1047d02dc; end: 1047d034f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d02dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f6c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f6d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f6d8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d0350; end: 1047d03c3; -[SCAdEndCardDecision initWithEndCardType:screenshotCardStyle:reviewCardStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f6c8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f6d0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308f6d8) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d03c4; end: 1047d0433; -[SCAdEndCardDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d03c4(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f6c8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f6d0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f6d8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d0434; end: 1047d04b3; -[SCAdEndCardDecision isEqual:] */

uint FUN_1047d0434(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d01d8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d04b4; end: 1047d04b7; -[SCAdEndCardDecision copyWithZone:] */

void FUN_1047d04b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d04b8; end: 1047d05af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d04b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x445241435f444e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45,0xed0000455059545f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20e300);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20e320);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047d05b0; end: 1047d05ff; -[SCAdEndCardDecision encodeWithCoder:] */

void FUN_1047d05b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047d04b8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d0600; end: 1047d062f;  */

void FUN_1047d0600(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d0630(param_1);
  return;
}



/* Entry: 1047d0630; end: 1047d0787;  */

undefined8 FUN_1047d0630(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  
  uVar1 = 0x445241435f444e45;
  uVar3 = 0x5059545f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45);
  uVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  func_0x0001046b9378(uVar2);
  if ((uVar3 & 0xff) != 1) {
    uVar1 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20e300);
    uVar2 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar1);
    if (uVar2 < 2) {
      uVar1 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20e320);
      uVar2 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar1);
      if (uVar2 < 3) {
        func_0x00010c00fe20();
        _objc_release(param_1);
        return unaff_x20;
      }
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047d0788; end: 1047d07af; -[SCAdEndCardDecision initWithCoder:] */

void FUN_1047d0788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d0630();
  return;
}



/* Entry: 1047d07b0; end: 1047d07cb; -[SCAdEndCardDecision description] */

void FUN_1047d07b0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d07cc; end: 1047d0847; -[SCAdEndCardDecision init] */

void FUN_1047d07cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdEndCardDecisionWrapper.swift",
             0x2a,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d0814);
  (*pcVar1)();
}



/* Entry: 1047d0848; end: 1047d084b; -[SCAdEndCardDecision .cxx_destruct] */

void FUN_1047d0848(void)

{
  return;
}



/* Entry: 1047d084c; end: 1047d086b;  */

void FUN_1047d084c(void)

{
  _objc_opt_self(&PTR_PTR_1129d4ec0);
  return;
}



/* Entry: 1047d086c; end: 1047d086f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d086c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f6c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f6d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f6d8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d0870; end: 1047d090f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d0870(undefined8 param_1)

{
  int iVar1;
  int iVar2;
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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f708);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f708);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047d0910; end: 1047d0923; -[SCAdFavoriteButtonDecision favoriteButtonType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d0910(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f708);
}



/* Entry: 1047d0924; end: 1047d096f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0924(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f708) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d0970; end: 1047d09bb; -[SCAdFavoriteButtonDecision initWithFavoriteButtonType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f708) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d09bc; end: 1047d0a03; -[SCAdFavoriteButtonDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d09bc(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f708));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047d0a04; end: 1047d0a83; -[SCAdFavoriteButtonDecision isEqual:] */

uint FUN_1047d0a04(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047d0870(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047d0a84; end: 1047d0a87; -[SCAdFavoriteButtonDecision copyWithZone:] */

void FUN_1047d0a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047d0a88; end: 1047d0b13; -[SCAdFavoriteButtonDecision encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20e370);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047d0b14; end: 1047d0b43;  */

void FUN_1047d0b14(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047d0b44(param_1);
  return;
}



/* Entry: 1047d0b44; end: 1047d0bef;  */

undefined8 FUN_1047d0b44(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20e370);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    func_0x00010c011780();
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047d0bf0; end: 1047d0c17; -[SCAdFavoriteButtonDecision initWithCoder:] */

void FUN_1047d0bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047d0b44();
  return;
}



/* Entry: 1047d0c18; end: 1047d0c33; -[SCAdFavoriteButtonDecision description] */

void FUN_1047d0c18(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047d0c34; end: 1047d0caf; -[SCAdFavoriteButtonDecision init] */

void FUN_1047d0c34(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdFavoriteButtonDecisionWrapper.swift",0x31,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047d0c7c);
  (*pcVar1)();
}



/* Entry: 1047d0cb0; end: 1047d0cb3; -[SCAdFavoriteButtonDecision .cxx_destruct] */

void FUN_1047d0cb0(void)

{
  return;
}



/* Entry: 1047d0cb4; end: 1047d0cd3;  */

void FUN_1047d0cb4(void)

{
  _objc_opt_self(&PTR_PTR_1129d4fa0);
  return;
}



/* Entry: 1047d0cd4; end: 1047d0cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047d0cd4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f708) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047d0cd8; end: 1047d0d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047d0cd8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
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
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f738);
      iVar2 = *(int *)(lStack_58 + _DAT_11308f738);
      _objc_release();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 1047d0d78; end: 1047d0d8b; -[SCAdHeaderDecision headlineType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047d0d78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f738);
}


