/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042b8860; end: 1042b8987; -[SCAdViewReceipt initWithViewReceipt:viewedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1042b8860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar4);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar6,param_4);
  _objc_release(param_4);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306b718);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  (**(code **)(lVar7 + 0x10))(param_1 + _DAT_1138133c0,lVar6,lVar3);
  plVar5 = &lStack_70;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  (**(code **)(lVar7 + 8))(lVar6,lVar3);
  return plVar5;
}



/* Entry: 1042b8988; end: 1042b8a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042b8988(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar7 = auStack_60;
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b718);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  lVar6 = 0;
  FUN_104256438();
  lVar5 = _DAT_1138133c0;
  iVar4 = *(int *)(lVar6 + 0x14);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(unaff_x20 + lVar5,(long)param_1 + (long)iVar4,lVar6);
  func_0x00010006c00c(uVar2,uVar3);
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  FUN_1042b8a48(param_1);
  return puVar7;
}



/* Entry: 1042b8a48; end: 1042b8a83;  */

undefined8 FUN_1042b8a48(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104256438();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1042b8a84; end: 1042b8a87; -[SCAdViewReceipt copyWithZone:] */

void FUN_1042b8a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042b8a88; end: 1042b8b4b; -[SCAdViewReceipt description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b8a88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined8 *puVar7;
  
  lVar5 = 0;
  FUN_104256438();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = _DAT_1138133c0;
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306b718);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11306b718))[1];
  *puVar7 = uVar1;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar6) = uVar2;
  iVar3 = *(int *)(lVar5 + 0x14);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)puVar7 + (long)iVar3,param_1 + lVar4,lVar6);
  func_0x00010006c00c(uVar1,uVar2);
  FUN_1042b8a48(puVar7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042b8b4c; end: 1042b8bc7; -[SCAdViewReceipt init] */

void FUN_1042b8b4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdViewReceiptWrapper.swift",
             0x29,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042b8b94);
  (*pcVar1)();
}



/* Entry: 1042b8bc8; end: 1042b8c17; -[SCAdViewReceipt .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b8bc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_11306b718),
                      ((undefined8 *)(param_1 + _DAT_11306b718))[1]);
  lVar1 = _DAT_1138133c0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x0001042b8c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 1042b8c18; end: 1042b8c1f;  */

void FUN_1042b8c18(void)

{
  if (lRam000000011306b748 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7f7e00);
  return;
}



/* Entry: 1042b8c20; end: 1042b8c57;  */

void FUN_1042b8c20(undefined8 param_1)

{
  if (lRam000000011306b748 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f7e00);
  return;
}



/* Entry: 1042b8c58; end: 1042b8ccf;  */

void FUN_1042b8c58(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dce5e08;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1042b8cd0; end: 1042b8d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1042b8cd0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11306b758);
      lVar4 = *(long *)(lStack_58 + _DAT_11306b758);
      lVar3 = *(long *)(unaff_x20 + _DAT_11306b760);
      lVar5 = *(long *)(lStack_58 + _DAT_11306b760);
      _objc_release();
      return lVar2 == lVar4 && lVar3 == lVar5;
    }
  }
  return false;
}



/* Entry: 1042b8d84; end: 1042b8d93; -[SCAdWakeUpUiTrackInfo tapsFromTopsnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b8d84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b758);
}



/* Entry: 1042b8d94; end: 1042b8da7; -[SCAdWakeUpUiTrackInfo tapsFromCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b8d94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b760);
}



/* Entry: 1042b8da8; end: 1042b8e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b8da8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b758) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b760) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b8e0c; end: 1042b8e6f; -[SCAdWakeUpUiTrackInfo initWithTapsFromTopsnap:tapsFromCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b8e0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306b758) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306b760) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b8e70; end: 1042b8ecb; -[SCAdWakeUpUiTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b8e70(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11306b758));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11306b760));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042b8ecc; end: 1042b8f4b; -[SCAdWakeUpUiTrackInfo isEqual:] */

uint FUN_1042b8ecc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042b8cd0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042b8f4c; end: 1042b8f4f; -[SCAdWakeUpUiTrackInfo copyWithZone:] */

void FUN_1042b8f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042b8f50; end: 1042b9027; -[SCAdWakeUpUiTrackInfo encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b8f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3150);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  uVar1 = 0x4f52465f53504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f52465f53504154,0xee00445241435f4d);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042b9028; end: 1042b90f7;  */

undefined8 FUN_1042b9028(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3150);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f52465f53504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f52465f53504154,0xee00445241435f4d);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  func_0x00010c0508a0(unaff_x20);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1042b90f8; end: 1042b91c7; -[SCAdWakeUpUiTrackInfo initWithCoder:] */

undefined8 FUN_1042b90f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3150);
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  uVar1 = 0x4f52465f53504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f52465f53504154,0xee00445241435f4d);
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  func_0x00010c0508a0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1042b91c8; end: 1042b91e3; -[SCAdWakeUpUiTrackInfo description] */

void FUN_1042b91c8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042b91e4; end: 1042b925f; -[SCAdWakeUpUiTrackInfo init] */

void FUN_1042b91e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdWakeUpUiTrackInfoWrapper.swift",0x2f,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042b922c);
  (*pcVar1)();
}



/* Entry: 1042b9260; end: 1042b9263; -[SCAdWakeUpUiTrackInfo .cxx_destruct] */

void FUN_1042b9260(void)

{
  return;
}



/* Entry: 1042b9264; end: 1042b9283;  */

void FUN_1042b9264(void)

{
  _objc_opt_self(&PTR_PTR_1129951f8);
  return;
}



/* Entry: 1042b9284; end: 1042b9287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b9284(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b758) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b760) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b9288; end: 1042b935b;  */

void FUN_1042b9288(void)

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



/* Entry: 1042b935c; end: 1042b937b;  */

void FUN_1042b935c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1042b937c; end: 1042bbde7;  */

void FUN_1042b937c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 auStack_440 [992];
  
  lVar1 = 0;
  func_0x00010463e554();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  FUN_104259764();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_440 +
           ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_1042bbde8(param_1,puVar2);
  _swift_getEnumCaseMultiPayload(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001042b9468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dce5e40 + ((ulong)puVar2 & 0xffffffff) * 2) * 4 + 0x1042b946c
            ))();
  return;
}



/* Entry: 1042bbde8; end: 1042bbe67;  */

undefined8 FUN_1042bbde8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1042bbe68; end: 1042bbef3; -[SCAdWebBrowserSessionEvent description] */

void FUN_1042bbe68(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_104259764();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1042bbef4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001042bbe2c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_104259764);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bbef4; end: 1042bc90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bbef4(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
  long extraout_x8;
  ulong *puVar7;
  undefined *puVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong auStack_2a0 [2];
  ulong uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  byte abStack_27f [7];
  undefined8 uStack_278;
  undefined1 auStack_270 [216];
  undefined8 auStack_198 [5];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  
  puVar17 = &uStack_170;
  lVar15 = 0x11306b848;
  uStack_280 = param_1;
  func_0x0001000285a8(0x11306b848,&UNK_10dce5e98);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar15 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)auStack_2a0 + lVar15);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar12 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (ulong *)(lVar10 - extraout_x12_01);
  lVar2 = 0;
  FUN_104259764();
  lVar19 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar19 + 0x38);
  puVar4 = (undefined *)0x1;
  (*pcVar9)(puVar11,1,1,lVar2);
  bVar6 = *(byte *)(param_2 + _DAT_11306b790);
  puVar7 = (ulong *)(ulong)bVar6;
  puVar8 = &UNK_100db50ec;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar6) {
  default:
    if ((char)((ulong *)(param_2 + _DAT_11306b798))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8dc);
      (*pcVar9)();
    }
    puVar12 = *(undefined8 **)(param_2 + _DAT_11306b798);
  case 0x37:
    func_0x0001042be4dc();
    *puVar11 = (ulong)puVar12;
    break;
  case 1:
    if (*(char *)((undefined8 *)(param_2 + _DAT_11306b7a8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8e8);
      (*pcVar9)();
    }
    uVar5 = *(undefined8 *)(param_2 + _DAT_11306b7a8);
    if (*(long *)(param_2 + _DAT_11306b7a0) == 0) {
      func_0x000100406b98(&uStack_170);
    }
    else {
      _objc_retain();
      FUN_1042cd98c(&uStack_278);
      func_0x0001018803e8(&uStack_278);
      _memcpy(&uStack_170,&uStack_278,0x101);
    }
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    _memcpy(puVar14,&uStack_170,0x101);
    puVar14[0x21] = uVar5;
    _swift_storeEnumTagMultiPayload(puVar14,lVar2,1);
    (*pcVar9)(puVar14,0,1,lVar2);
    goto code_r0x0001042bc8bc;
  case 2:
  case 0x30:
    func_0x0001042be4dc(puVar11);
    puVar12 = *(undefined8 **)(param_2 + _DAT_11306b7b0);
    *puVar11 = (ulong)puVar12;
  case 0x21:
    goto code_r0x0001042bc5dc;
  case 3:
    puVar7 = (ulong *)(param_2 + _DAT_11306b7b8);
    puVar14 = (undefined8 *)puVar7[1];
    if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8e0);
      (*pcVar9)();
    }
    if (*(byte *)(param_2 + _DAT_11306b7d0) == 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc904);
      (*pcVar9)();
    }
    uStack_288 = CONCAT44(uStack_288._4_4_,(uint)*(byte *)(param_2 + _DAT_11306b7d0));
    puVar8 = &DAT_11306b000;
  case 0x22:
    uStack_290 = CONCAT44(uStack_290._4_4_,(uint)*(byte *)(param_2 + *(long *)(puVar8 + 0x7d8)));
    if (*(byte *)(param_2 + *(long *)(puVar8 + 0x7d8)) == 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc910);
      (*pcVar9)();
    }
    auStack_2a0[1] = *puVar7;
  case 0x2e:
    puVar7 = (ulong *)_DAT_11306b7c0;
  case 0x26:
    puVar12 = *(undefined8 **)(param_2 + (long)puVar7);
    puVar17 = *(undefined8 **)(param_2 + _DAT_11306b7c8);
  case 0x24:
    func_0x0001042be4dc(puVar11);
    puVar7 = (ulong *)auStack_2a0[1];
  case 0x32:
    *puVar11 = (ulong)puVar7;
    puVar11[1] = (ulong)puVar14;
    puVar11[2] = (ulong)puVar12;
    puVar11[3] = (ulong)puVar17;
    bVar6 = (byte)uStack_288;
  case 0x2f:
    *(byte *)(puVar11 + 4) = bVar6 & 1;
  case 0x33:
    bVar6 = (byte)uStack_290;
  case 0x20:
    *(byte *)((long)puVar11 + 0x21) = bVar6 & 1;
    _swift_storeEnumTagMultiPayload(puVar11,lVar2,3);
  case 0x36:
    (*pcVar9)();
    _objc_retain(puVar17);
    _swift_bridgeObjectRetain(puVar14);
    goto code_r0x0001042bc5f4;
  case 4:
  case 0x2b:
    func_0x0001042be4dc(puVar11);
  case 0x1f:
    break;
  case 5:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 6:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    puVar12 = *(undefined8 **)(param_2 + _DAT_11306b7e0);
    *puVar11 = (ulong)puVar12;
    goto code_r0x0001042bc5dc;
  case 7:
    lVar15 = *(long *)(param_2 + _DAT_11306b7e8);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8e4);
      (*pcVar9)();
    }
    *puVar12 = *(undefined8 *)(lVar15 + _DAT_11308b420);
    uStack_288 = *(ulong *)(lVar15 + _DAT_11308b428);
    lVar3 = 0;
    func_0x00010463e554();
    uStack_290 = (ulong)*(int *)(lVar3 + 0x14);
    _objc_retain(uStack_288);
    func_0x00010465433c((long)puVar12 + uStack_290);
    iVar1 = *(int *)(lVar3 + 0x18);
    _objc_retain(*(undefined8 *)(lVar15 + _DAT_11308b430));
    func_0x0001046465c0((long)puVar12 + (long)iVar1);
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    uVar5 = 5;
    goto code_r0x0001042bc680;
  case 8:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 9:
    if ((char)((ulong *)(param_2 + _DAT_11306b7f0))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8d4);
      (*pcVar9)();
    }
    puVar12 = (undefined8 *)((long *)(param_2 + _DAT_11306b7f8))[1];
    if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc900);
      (*pcVar9)();
    }
    puVar14 = *(undefined8 **)(param_2 + _DAT_11306b7f0);
    puVar17 = *(undefined8 **)(param_2 + _DAT_11306b7f8);
  case 0x23:
    func_0x0001042be4dc();
    *puVar11 = (ulong)puVar14;
    puVar11[1] = (ulong)puVar17;
    puVar11[2] = (ulong)puVar12;
    uVar5 = 6;
code_r0x0001042bc584:
    _swift_storeEnumTagMultiPayload(puVar11,lVar2,uVar5);
    (*pcVar9)(puVar11,0,1,lVar2);
    _swift_bridgeObjectRetain(puVar12);
    goto code_r0x0001042bc754;
  case 10:
    if (*(long *)(param_2 + _DAT_11306b800) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8f8);
      (*pcVar9)();
    }
    _objc_retain();
    func_0x00010465c4f0(&uStack_170);
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    *(undefined8 *)((long)&uStack_288 + lVar15) = uStack_158;
    *(undefined8 *)((long)&uStack_290 + lVar15) = uStack_160;
    *(undefined8 *)((long)&uStack_278 + lVar15) = uStack_148;
    *(undefined8 *)(auStack_270 + lVar15 + -0x10) = uStack_150;
    *(undefined8 *)((long)auStack_2a0 + lVar15 + 8) = uStack_168;
    *puVar12 = uStack_170;
    auStack_270[lVar15] = uStack_140;
    uVar5 = 7;
code_r0x0001042bc680:
    _swift_storeEnumTagMultiPayload(puVar12,lVar2,uVar5);
    (*pcVar9)(puVar12,0,1,lVar2);
    puVar14 = puVar12;
code_r0x0001042bc8bc:
    func_0x0001042be444(puVar14,puVar11);
    goto code_r0x0001042bc754;
  case 0xb:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
  case 0x1e:
    break;
  case 0xc:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 0xd:
    puVar12 = (undefined8 *)((ulong *)(param_2 + _DAT_11306b808))[1];
    if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8f4);
      (*pcVar9)();
    }
    if ((char)((ulong *)(param_2 + _DAT_11306b810))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc908);
      (*pcVar9)();
    }
    uVar13 = *(ulong *)(param_2 + _DAT_11306b808);
    uVar16 = *(ulong *)(param_2 + _DAT_11306b810);
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    *puVar11 = uVar13;
    puVar11[1] = (ulong)puVar12;
    puVar11[2] = uVar16;
    uVar5 = 8;
    goto code_r0x0001042bc584;
  case 0xe:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
  case 0x35:
  case 0x34:
    break;
  case 0xf:
  case 0x31:
  case 0x29:
    func_0x0001042be4dc(puVar11);
    break;
  case 0x10:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 0x11:
    bVar6 = *(byte *)(param_2 + _DAT_11306b818);
    if (bVar6 == 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8ec);
      (*pcVar9)();
    }
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    *(byte *)puVar11 = bVar6 & 1;
    break;
  case 0x12:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 0x13:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 0x14:
    bVar6 = *(byte *)(param_2 + _DAT_11306b820);
    if (bVar6 == 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8f0);
      (*pcVar9)();
    }
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    *(byte *)puVar11 = bVar6 & 1;
    break;
  case 0x15:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 0x16:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 0x17:
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    break;
  case 0x18:
    puVar12 = *(undefined8 **)(param_2 + _DAT_11306b828);
    if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8d8);
      (*pcVar9)();
    }
  case 0x2d:
    func_0x0001042be4dc(puVar11);
    *puVar11 = (ulong)puVar12;
code_r0x0001042bc5dc:
    _swift_storeEnumTagMultiPayload();
    (*pcVar9)(puVar11,0,1,lVar2);
code_r0x0001042bc5f4:
    _objc_retain(puVar12);
    goto code_r0x0001042bc754;
  case 0x19:
    puVar4 = &DAT_11306b000;
  case 0x1d:
    func_0x0001042be4dc(puVar11,puVar4 + 0x848,&UNK_10dce5e98);
    break;
  case 0x1a:
    uVar13 = *(ulong *)(param_2 + _DAT_11306b830);
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8fc);
      (*pcVar9)();
    }
    uVar16 = ((ulong *)(param_2 + _DAT_11306b838))[1];
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc90c);
      (*pcVar9)();
    }
    uVar18 = *(ulong *)(param_2 + _DAT_11306b838);
    func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
    *puVar11 = uVar13;
    puVar11[1] = uVar18;
    puVar11[2] = uVar16;
    _swift_storeEnumTagMultiPayload(puVar11,lVar2,0xc);
    (*pcVar9)(puVar11,0,1,lVar2);
    _objc_retain(uVar13);
    _swift_bridgeObjectRetain(uVar16);
    goto code_r0x0001042bc754;
  case 0x1b:
    puVar7 = (ulong *)_DAT_11306b840;
  case 0x2c:
    puVar12 = *(undefined8 **)(param_2 + (long)puVar7);
    if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8d0);
      (*pcVar9)();
    }
  case 0x2a:
  case 0x27:
    func_0x0001042be4dc(puVar11);
    *puVar11 = (ulong)puVar12;
  case 0x28:
  case 0x25:
    goto code_r0x0001042bc5dc;
  }
  _swift_storeEnumTagMultiPayload();
  (*pcVar9)(puVar11,0,1,lVar2);
code_r0x0001042bc754:
  func_0x0001042be494(puVar11,lVar10,0x11306b848,&UNK_10dce5e98);
  lVar15 = lVar10;
  (**(code **)(lVar19 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar15 == 1) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1042bc8cc);
    (*pcVar9)();
  }
  func_0x0001042be4dc(puVar11,0x11306b848,&UNK_10dce5e98);
  _objc_release(param_2);
  func_0x0001042be400(lVar10,uStack_280,FUN_104259764);
  return;
}



/* Entry: 1042bc910; end: 1042bc957; -[SCAdWebBrowserSessionEvent init] */

void FUN_1042bc910(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdWebBrowserSessionEventWrapper.swift",0x34,2,0xdb,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bc958);
  (*pcVar1)();
}



/* Entry: 1042bc958; end: 1042bc98b; -[SCAdWebBrowserSessionEvent hash] */

undefined8 FUN_1042bc958(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042bc98c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042bc98c; end: 1042bd583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bc98c(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11306b790));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b798) + 1) == '\x01') {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b798);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b7a0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042ca8a8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b7a8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b7a8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b7b0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306b7b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306b7b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4);
    uVar2 = uVar4;
    func_0x00010bfde980();
    _objc_release(uVar4);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b7c0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b7c8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306b7d0);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306b7d8);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b7e0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b7e8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010465357c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b7f0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b7f0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306b7f8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306b7f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4);
    uVar2 = uVar4;
    func_0x00010bfde980();
    _objc_release(uVar4);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11306b800) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010465c5a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306b808))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306b808);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4);
    uVar2 = uVar4;
    func_0x00010bfde980();
    _objc_release(uVar4);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b810) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b810);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306b818);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306b820);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b828);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b830);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306b838))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306b838);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4);
    uVar2 = uVar4;
    func_0x00010bfde980();
    _objc_release(uVar4);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b840);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042bd584; end: 1042bd613; -[SCAdWebBrowserSessionEvent isEqual:] */

uint FUN_1042bd584(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001042bcf30(&uStack_40);
  _objc_release(param_1);
  func_0x0001042be4dc(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042bd614; end: 1042bd617; -[SCAdWebBrowserSessionEvent copyWithZone:] */

void FUN_1042bd614(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042bd618; end: 1042bd62f; +[SCAdWebBrowserSessionEvent prefetchHintsLoadWithPrefetchMode:] */

void FUN_1042bd618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1042be52c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd630; end: 1042bd633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bd630(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_11306b7a0) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1042bd634; end: 1042bd683; +[SCAdWebBrowserSessionEvent webViewLoadWithWebViewLoadInfo:browserType:] */

void FUN_1042bd634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1042be6bc(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042bd684; end: 1042bd687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bd684(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_11306b7b0) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bd688; end: 1042bd6c7; +[SCAdWebBrowserSessionEvent htmlResponseStatusWithResponseStatus:] */

void FUN_1042bd688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1042be864(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042bd6c8; end: 1042bd6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bd6c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  FUN_1042bfdcc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306b790) = 3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7b0) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306b7b8);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_11306b7c0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_11306b7c8) = param_4;
  *(undefined1 *)(lVar5 + _DAT_11306b7d0) = param_5;
  *(undefined1 *)(lVar5 + _DAT_11306b7d8) = param_6;
  *(undefined8 *)(lVar5 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b840) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 1042bd6cc; end: 1042bd76f; +[SCAdWebBrowserSessionEvent gaHitWithHitType:hitLatency:hitTsMs:isPageView:isLandingPage:] */

void FUN_1042bd6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  FUN_1042bea00(param_3,param_2,param_4,param_5,param_6,param_7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042bd770; end: 1042bd787;  */

void FUN_1042bd770(void)

{
  func_0x0001042bf8e4(4);
  return;
}



/* Entry: 1042bd788; end: 1042bd79f; +[SCAdWebBrowserSessionEvent gaIncluded] */

void FUN_1042bd788(void)

{
  func_0x0001042bf8e4(4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd7a0; end: 1042bd7b7; +[SCAdWebBrowserSessionEvent openInBrowser] */

void FUN_1042bd7a0(void)

{
  func_0x0001042bf8e4(5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd7b8; end: 1042bd7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bd7b8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(long *)(lVar4 + _DAT_11306b7e0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bd7bc; end: 1042bd7fb; +[SCAdWebBrowserSessionEvent pixelRequestInterceptWithLatency:] */

void FUN_1042bd7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1042bebdc(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042bd7fc; end: 1042bd7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bd7fc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 7;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(long *)(lVar4 + _DAT_11306b7e8) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bd800; end: 1042bd837; +[SCAdWebBrowserSessionEvent browserEventWithEvent:] */

void FUN_1042bd800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001042bed7c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042bd838; end: 1042bd84f; +[SCAdWebBrowserSessionEvent prefetchHtmlLoad] */

void FUN_1042bd838(void)

{
  func_0x0001042bf8e4(8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd850; end: 1042bd853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bd850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1042bfdcc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306b790) = 9;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7e8) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306b7f0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar5 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b840) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1042bd854; end: 1042bd89f; +[SCAdWebBrowserSessionEvent browserMetadataEventWithBrowserType:url:] */

void FUN_1042bd854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_1042bef1c(param_3,param_4,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042bd8a0; end: 1042bd8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bd8a0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 10;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_11306b800) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bd8a4; end: 1042bd8db; +[SCAdWebBrowserSessionEvent userInteractionEventWithUserInteractionEvent:] */

void FUN_1042bd8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1042bf0cc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042bd8dc; end: 1042bd8f3;  */

void FUN_1042bd8dc(void)

{
  func_0x0001042bf8e4(0xb);
  return;
}



/* Entry: 1042bd8f4; end: 1042bd90b; +[SCAdWebBrowserSessionEvent exbTriggered] */

void FUN_1042bd8f4(void)

{
  func_0x0001042bf8e4(0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd90c; end: 1042bd923; +[SCAdWebBrowserSessionEvent exbInAppHtmlUrlResolveStart] */

void FUN_1042bd90c(void)

{
  func_0x0001042bf8e4(0xc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd924; end: 1042bd963; +[SCAdWebBrowserSessionEvent exbInAppHtmlUrlResolveSuccessWithUrl:htmlUrlResolveRedirectCount:] */

void FUN_1042bd924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_1042bf26c();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1042bd964; end: 1042bd97b; +[SCAdWebBrowserSessionEvent exbInAppHtmlUrlResolveNetworkError] */

void FUN_1042bd964(void)

{
  func_0x0001042bf8e4(0xe);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd97c; end: 1042bd993; +[SCAdWebBrowserSessionEvent exbInAppHtmlUrlResolveRedirectHintsMismatch] */

void FUN_1042bd97c(void)

{
  func_0x0001042bf8e4(0xf);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd994; end: 1042bd9ab; +[SCAdWebBrowserSessionEvent exbSubNav] */

void FUN_1042bd994(void)

{
  func_0x0001042bf8e4(0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd9ac; end: 1042bd9c3; +[SCAdWebBrowserSessionEvent detectCidParamsDropWithDropped:] */

void FUN_1042bd9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1042bf41c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd9c4; end: 1042bd9db; +[SCAdWebBrowserSessionEvent attemptDeeplink] */

void FUN_1042bd9c4(void)

{
  func_0x0001042bf8e4(0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd9dc; end: 1042bd9f3; +[SCAdWebBrowserSessionEvent deeplinkSucceed] */

void FUN_1042bd9dc(void)

{
  func_0x0001042bf8e4(0x13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bd9f4; end: 1042bda0b; +[SCAdWebBrowserSessionEvent dismissedInstanPageWithIsFallbackWebView:] */

void FUN_1042bd9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001042bf5b0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bda0c; end: 1042bda23; +[SCAdWebBrowserSessionEvent didTapExbButton] */

void FUN_1042bda0c(void)

{
  func_0x0001042bf8e4(0x15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bda24; end: 1042bda3b; +[SCAdWebBrowserSessionEvent didTapCopyLink] */

void FUN_1042bda24(void)

{
  func_0x0001042bf8e4(0x16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bda3c; end: 1042bda53; +[SCAdWebBrowserSessionEvent didPresentSkoverlay] */

void FUN_1042bda3c(void)

{
  func_0x0001042bf8e4(0x17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bda54; end: 1042bda8b; +[SCAdWebBrowserSessionEvent retargetPromptRenderedWithRenderedMs:] */

void FUN_1042bda54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001042bf744();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042bda8c; end: 1042bdaa3; +[SCAdWebBrowserSessionEvent retargetPromptTapped] */

void FUN_1042bda8c(void)

{
  func_0x0001042bf8e4(0x19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042bdaa4; end: 1042bdb07; +[SCAdWebBrowserSessionEvent retargetPromptExbOpenedWithExbOpenedMs:url:] */

void FUN_1042bdaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1042bfa74();
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042bdb08; end: 1042bdb3f; +[SCAdWebBrowserSessionEvent retargetPromptDismissedWithDismissMs:] */

void FUN_1042bdb08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1042bfc2c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042bdb40; end: 1042be023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bdb40(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
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
                  undefined4 param_58,undefined4 param_59,code *param_60,undefined4 param_61,
                  undefined4 param_62,code *param_63,undefined4 param_64,undefined4 param_65,
                  code *param_66,undefined4 param_67,undefined4 param_68,code *param_69,
                  undefined4 param_70,undefined4 param_71,code *param_72,undefined4 param_73,
                  undefined4 param_74,code *param_75,undefined4 param_76,undefined4 param_77,
                  code *param_78)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11306b790)) {
  case 0:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b798) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bdff0);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_11306b798));
    break;
  case 1:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b7a8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bdffc);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11306b7a0),
               *(undefined8 *)(unaff_x20 + _DAT_11306b7a8));
    break;
  case 2:
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11306b7b0));
    break;
  case 3:
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11306b7b8))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bdff4);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11306b7d0) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be018);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11306b7d8) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be024);
      (*pcVar1)();
    }
    (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_11306b7b8),lVar2,
               *(undefined8 *)(unaff_x20 + _DAT_11306b7c0),
               *(undefined8 *)(unaff_x20 + _DAT_11306b7c8),*(byte *)(unaff_x20 + _DAT_11306b7d0) & 1
               ,*(byte *)(unaff_x20 + _DAT_11306b7d8) & 1);
    break;
  case 4:
    goto code_r0x0001042bdf80;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)(*(undefined8 *)(unaff_x20 + _DAT_11306b7e0));
    break;
  case 7:
    if (*(long *)(unaff_x20 + _DAT_11306b7e8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bdff8);
      (*pcVar1)();
    }
    (*param_18)();
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b7f0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bdfe8);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_11306b7f8))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be014);
      (*pcVar1)();
    }
    (*param_24)(*(undefined8 *)(unaff_x20 + _DAT_11306b7f0),
                *(undefined8 *)(unaff_x20 + _DAT_11306b7f8));
    break;
  case 10:
    if (*(long *)(unaff_x20 + _DAT_11306b800) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be00c);
      (*pcVar1)();
    }
    (*param_27)();
    break;
  case 0xb:
    (*param_30)();
    break;
  case 0xc:
    (*param_33)();
    break;
  case 0xd:
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11306b808))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be008);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11306b810) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be01c);
      (*pcVar1)();
    }
    (*param_36)(*(undefined8 *)(unaff_x20 + _DAT_11306b808),lVar2,
                *(undefined8 *)(unaff_x20 + _DAT_11306b810));
    break;
  case 0xe:
    (*param_39)();
    break;
  case 0xf:
    (*param_42)();
    break;
  case 0x10:
    (*param_45)();
    break;
  case 0x11:
    if (*(byte *)(unaff_x20 + _DAT_11306b818) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be000);
      (*pcVar1)();
    }
    (*param_48)(*(byte *)(unaff_x20 + _DAT_11306b818) & 1);
    break;
  case 0x12:
    param_9 = param_51;
    goto code_r0x0001042bdf80;
  case 0x13:
    param_9 = param_54;
    goto code_r0x0001042bdf80;
  case 0x14:
    if (*(byte *)(unaff_x20 + _DAT_11306b820) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be004);
      (*pcVar1)();
    }
    (*param_57)(*(byte *)(unaff_x20 + _DAT_11306b820) & 1);
    break;
  case 0x15:
    param_9 = param_60;
    goto code_r0x0001042bdf80;
  case 0x16:
    param_9 = param_63;
    goto code_r0x0001042bdf80;
  case 0x17:
    param_9 = param_66;
    goto code_r0x0001042bdf80;
  case 0x18:
    if (*(long *)(unaff_x20 + _DAT_11306b828) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bdfec);
      (*pcVar1)();
    }
    (*param_69)();
    break;
  case 0x19:
    param_9 = param_72;
code_r0x0001042bdf80:
    (*param_9)();
    break;
  case 0x1a:
    if (*(long *)(unaff_x20 + _DAT_11306b830) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be010);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_11306b838))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042be020);
      (*pcVar1)();
    }
    (*param_75)(*(long *)(unaff_x20 + _DAT_11306b830),*(undefined8 *)(unaff_x20 + _DAT_11306b838));
    break;
  case 0x1b:
    if (*(long *)(unaff_x20 + _DAT_11306b840) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042bdfe4);
      (*pcVar1)();
    }
    (*param_78)();
  }
  return;
}



/* Entry: 1042be024; end: 1042be2c3; -[SCAdWebBrowserSessionEvent matchPrefetchHintsLoad:webViewLoad:htmlResponseStatus:gaHit:gaIncluded:openInBrowser:pixelRequestIntercept:browserEvent:prefetchHtmlLoad:browserMetadataEvent:userInteractionEvent:exbTriggered:exbInAppHtmlUrlResolveStart:exbInAppHtmlUrlResolveSuccess:exbInAppHtmlUrlResolveNetworkError:exbInAppHtmlUrlResolveRedirectHintsMismatch:exbSubNav:detectCidParamsDrop:attemptDeeplink:deeplinkSucceed:dismissedInstanPage:didTapExbButton:didTapCopyLink:didPresentSkoverlay:retargetPromptRendered:retargetPromptTapped:retargetPromptExbOpened:retargetPromptDismissed:] */

void FUN_1042be024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30)

{
  undefined1 auStack_3e0 [16];
  undefined8 uStack_3d0;
  undefined1 auStack_3c0 [16];
  undefined8 uStack_3b0;
  undefined1 auStack_3a0 [16];
  undefined8 uStack_390;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined1 auStack_340 [16];
  undefined8 uStack_330;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
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
  
  uStack_130 = param_9;
  uStack_150 = param_10;
  uStack_170 = param_11;
  uStack_190 = param_12;
  uStack_1b0 = param_13;
  uStack_1d0 = param_14;
  uStack_1f0 = param_15;
  uStack_210 = param_16;
  uStack_230 = param_17;
  uStack_250 = param_18;
  uStack_270 = param_19;
  uStack_290 = param_20;
  uStack_2b0 = param_21;
  uStack_2d0 = param_22;
  uStack_2f0 = param_23;
  uStack_310 = param_24;
  uStack_330 = param_25;
  uStack_350 = param_26;
  uStack_370 = param_27;
  uStack_390 = param_28;
  uStack_3b0 = param_29;
  uStack_3d0 = param_30;
  uStack_110 = param_8;
  uStack_f0 = param_7;
  uStack_d0 = param_6;
  uStack_b0 = param_5;
  uStack_90 = param_4;
  uStack_70 = param_3;
  _objc_retain();
  FUN_1042bdb40(FUN_1042bff94,auStack_80,0x1042bffa4,auStack_a0,0x1042bffb8,auStack_c0,FUN_1042bffc8
                ,auStack_e0,FUN_1042c0030,auStack_100,0x1042c00c8,auStack_120,FUN_1042c00b0,
                auStack_140,0x1042c00b4,auStack_160,0x1042c00cc,auStack_180,0x1042c003c,auStack_1a0,
                0x1042c00b8,auStack_1c0,0x1042c00d0,auStack_1e0,0x1042c00d4,auStack_200,0x1042c0040,
                auStack_220,0x1042c00d8,auStack_240,0x1042c00dc,auStack_260,0x1042c00e0,auStack_280,
                0x1042c0048,auStack_2a0,0x1042c00e4,auStack_2c0,0x1042c00e8,auStack_2e0,0x1042c00bc,
                auStack_300,0x1042c00ec,auStack_320,0x1042c00f0,auStack_340,0x1042c00f4,auStack_360,
                0x1042c00c0,auStack_380,0x1042c00f8,auStack_3a0,0x1042c005c,auStack_3c0,0x1042c00c4,
                auStack_3e0);
  _objc_release(param_1);
  return;
}



/* Entry: 1042be2c4; end: 1042be2f7;  */

void FUN_1042be2c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042be2f8; end: 1042be51b; -[SCAdWebBrowserSessionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042be2f8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b7a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b7b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b7b8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b7c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b7c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b7e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b7e8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b7f8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b800));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b808 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b828));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b830));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b838 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b840));
  return;
}



/* Entry: 1042be51c; end: 1042be52b;  */

ulong FUN_1042be51c(ulong param_1)

{
  if (0x1b < param_1) {
    param_1 = 0x1c;
  }
  return param_1;
}



/* Entry: 1042be52c; end: 1042be6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042be52c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 0;
  plVar1 = (long *)(lVar4 + _DAT_11306b798);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042be6bc; end: 1042be863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042be6bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_11306b7a0) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1042be864; end: 1042be9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042be864(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_11306b7b0) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bea00; end: 1042bebdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bea00(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  FUN_1042bfdcc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306b790) = 3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7b0) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306b7b8);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_11306b7c0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_11306b7c8) = param_4;
  *(undefined1 *)(lVar5 + _DAT_11306b7d0) = param_5;
  *(undefined1 *)(lVar5 + _DAT_11306b7d8) = param_6;
  *(undefined8 *)(lVar5 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b840) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 1042bebdc; end: 1042bef1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bebdc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(long *)(lVar4 + _DAT_11306b7e0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bef1c; end: 1042bf0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bef1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1042bfdcc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306b790) = 9;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7e8) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306b7f0);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar5 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b840) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1042bf0cc; end: 1042bf26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bf0cc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 10;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_11306b800) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bf26c; end: 1042bf41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bf26c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1042bfdcc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11306b790) = 0xd;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b800) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11306b808);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b810);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(lVar5 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar5 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar5 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11306b840) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1042bf41c; end: 1042bfa73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bf41c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1042bfdcc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11306b790) = 0x11;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar3 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar3 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar3 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(char *)(lVar3 + _DAT_11306b818) = (char)param_1;
  *(undefined1 *)(lVar3 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar3 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar3 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11306b840) = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042bfa74; end: 1042bfc2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bfa74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 0x1a;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(long *)(lVar4 + _DAT_11306b830) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306b840) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1042bfc2c; end: 1042bfdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042bfc2c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1042bfdcc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306b790) = 0x1b;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7a0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11306b7b0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7c8) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306b7d0) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b7d8) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b7e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b7e8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b7f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b800) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b808);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b810);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11306b818) = 2;
  *(undefined1 *)(lVar4 + _DAT_11306b820) = 2;
  *(undefined8 *)(lVar4 + _DAT_11306b828) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306b830) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306b838);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_11306b840) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1042bfdcc; end: 1042bfdeb;  */

void FUN_1042bfdcc(void)

{
  _objc_opt_self(&PTR_PTR_1129952d0);
  return;
}



/* Entry: 1042bfdec; end: 1042bff53;  */

int FUN_1042bfdec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x1b) {
      iVar2 = 4;
    }
    if (param_2 + 0x1b >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042bfe68;
        goto LAB_1042bfe4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042bfe4c:
      return ((uint)*param_1 | uVar1 << 8) - 0x1b;
    }
  }
LAB_1042bfe68:
  iVar2 = *param_1 - 0x1c;
  if (*param_1 < 0x1c) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042bff54; end: 1042bff93;  */

void FUN_1042bff54(void)

{
  undefined *puVar1;
  
  if (puRam000000011306b878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce5ee0;
  _swift_getWitnessTable(&UNK_10dce5ee0,&UNK_110755010);
  puRam000000011306b878 = puVar1;
  return;
}



/* Entry: 1042bff94; end: 1042bffc7;  */

void FUN_1042bff94(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001042bffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1042bffc8; end: 1042c002f;  */

void FUN_1042bffc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_4,param_5 & 1,param_6 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042c0030; end: 1042c005f;  */

void FUN_1042c0030(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001042c0038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1042c0060; end: 1042c00af;  */

void FUN_1042c0060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1042c00b0; end: 1042c00fb;  */

void FUN_1042c00b0(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001042bffc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1042c00fc; end: 1042c0123;  */

void FUN_1042c00fc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x00010bf1f3c0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1042c0124; end: 1042c0133; -[SCAdWebViewAutofillInfo isConsentPromptShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c0124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b880));
  return;
}


