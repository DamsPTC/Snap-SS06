/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104384728; end: 104384767;  */

void FUN_104384728(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1e88;
  _swift_getWitnessTable(&UNK_10dcf1e88,&UNK_110761470);
  puRam0000000113072950 = puVar1;
  return;
}



/* Entry: 104384768; end: 104384807;  */

void FUN_104384768(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104384808; end: 10438482b;  */

void FUN_104384808(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 10438482c; end: 1043848b7; -[SCMapMyStatus description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438482c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_1 + _DAT_113072958);
  if (lVar2 != 0) {
    _objc_retain();
    _objc_retain(lVar2);
    FUN_104386648(auStack_60);
    _objc_release(param_1);
    _objc_release(lVar2);
    _swift_bridgeObjectRelease(auStack_60[0]);
    _swift_bridgeObjectRelease(uStack_48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043848b8);
  (*pcVar1)();
}



/* Entry: 1043848b8; end: 1043848ff; -[SCMapMyStatus init] */

void FUN_1043848b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapMyStatusWrapper.swift",0x2e,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104384900);
  (*pcVar1)();
}



/* Entry: 104384900; end: 104384903; -[SCMapMyStatus copyWithZone:] */

void FUN_104384900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104384904; end: 10438499b; +[SCMapMyStatus statusWithStatusGroup:viewerUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384904(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_4,PTR___sSSN_11034da80);
  }
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113072958) = param_3;
  *(long *)(lVar2 + _DAT_113072960) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438499c; end: 1043849e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438499c(code *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_113072958) != 0) {
    (*param_1)(*(long *)(unaff_x20 + _DAT_113072958),*(undefined8 *)(unaff_x20 + _DAT_113072960));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043849e4);
  (*pcVar1)();
}



/* Entry: 1043849e4; end: 104384a77; -[SCMapMyStatus matchStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043849e4(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_113072958);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_113072960);
    if (lVar3 == 0) {
      _objc_retain(param_1);
    }
    else {
      _objc_retain(param_1);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
    }
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104384a78);
  (*pcVar1)();
}



/* Entry: 104384a78; end: 104384aab;  */

void FUN_104384a78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104384aac; end: 104384ae3; -[SCMapMyStatus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384aac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072958));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072960));
  return;
}



/* Entry: 104384ae4; end: 104384b03;  */

void FUN_104384ae4(void)

{
  _objc_opt_self(&PTR_PTR_1129a4aa0);
  return;
}



/* Entry: 104384b04; end: 104384bf3;  */

uint FUN_104384b04(uint *param_1,int param_2)

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



/* Entry: 104384bf4; end: 104384c33;  */

void FUN_104384bf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1f64;
  _swift_getWitnessTable(&UNK_10dcf1f64,&UNK_110761558);
  puRam0000000113072998 = puVar1;
  return;
}



/* Entry: 104384c34; end: 104384c3f; -[SCMapStatus identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384c34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130729a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130729a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104384c40; end: 104384c4f; -[SCMapStatus timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104384c40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130729a8);
}



/* Entry: 104384c50; end: 104384c5b; -[SCMapStatus userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384c50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130729b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130729b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104384c5c; end: 104384cb7; -[SCMapStatus locations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384c5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130729b8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000101487064(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104384cb8; end: 104384cc7; -[SCMapStatus sticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130729c0));
  return;
}



/* Entry: 104384cc8; end: 104384cd3; -[SCMapStatus locality] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384cc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130729c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130729c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104384cd4; end: 104384ce3; -[SCMapStatus pathStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104384cd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130729d0);
}



/* Entry: 104384ce4; end: 104384cf3; -[SCMapStatus animationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104384ce4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130729d8);
}



/* Entry: 104384cf4; end: 104384d03; -[SCMapStatus mapEffect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130729e0));
  return;
}



/* Entry: 104384d04; end: 104384d0f; -[SCMapStatus placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384d04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130729e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130729e8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104384d10; end: 104384d67;  */

void FUN_104384d10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104384d68; end: 104384d77; -[SCMapStatus maybeLive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104384d68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130729f0);
}



/* Entry: 104384d78; end: 104384d87; -[SCMapStatus liveConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130729f8));
  return;
}



/* Entry: 104384d88; end: 10438503f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104384d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130729a0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130729a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130729b0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130729b8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130729c0) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130729c8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130729d0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130729d8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_1130729e0) = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130729e8);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_1130729f0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_1130729f8) = param_17;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104385040; end: 1043851c7; -[SCMapStatus initWithIdentifier:timestamp:userId:locations:sticker:locality:pathStyle:animationStyle:mapEffect:placeId:maybeLive:liveConstraint:] */

void FUN_104385040(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12,undefined1 param_13)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if (param_4 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_3;
    uStack_90 = param_4;
  }
  if (param_5 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_3;
    uStack_a0 = param_5;
  }
  if (param_6 == 0) {
    uStack_b0 = 0;
  }
  else {
    param_3 = 0;
    func_0x000101487064();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    uStack_b0 = param_6;
  }
  _objc_retain(param_7);
  lVar1 = param_8;
  _objc_retain();
  _objc_retain();
  lVar2 = param_12;
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    param_8 = 0;
    uVar4 = 0;
    uVar3 = param_3;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
    uVar3 = param_3;
    _objc_release(lVar1);
    uVar4 = param_3;
  }
  if (lVar2 == 0) {
    param_12 = 0;
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
  }
  func_0x000104384ee4(param_1,uStack_90,uStack_98,uStack_a0,uStack_a8,uStack_b0,param_7,param_8,
                      uVar4,param_9,param_10,param_11,param_12,uVar3,param_13);
  return;
}



/* Entry: 1043851c8; end: 1043851f7;  */

void FUN_1043851c8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043851f8(param_1);
  return;
}



/* Entry: 1043851f8; end: 1043855ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043851f8(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_190 [2];
  undefined1 auStack_180 [80];
  long lStack_130;
  long lStack_128;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1043806e4();
  alStack_190[0] = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_190[0] + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)alStack_190 + lVar7);
  lVar12 = 0x113072220;
  func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar11 - extraout_x8_00;
  uVar9 = *param_1;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_1130729a0);
  puVar4[1] = param_1[1];
  *puVar4 = uVar9;
  *(undefined8 *)(unaff_x20 + _DAT_1130729a8) = param_1[2];
  uVar9 = param_1[3];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_1130729b0);
  puVar4[1] = param_1[4];
  *puVar4 = uVar9;
  uVar9 = param_1[4];
  uVar14 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_1130729b8) = uVar14;
  uVar13 = param_1[1];
  lStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_7f = *(undefined8 *)((long)param_1 + 0x71);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_88 = (undefined1)param_1[0xd];
  uStack_87 = (undefined7)((ulong)param_1[0xd] >> 8);
  if (lStack_b8 == 0) {
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar9);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uStack_e8 = param_1[0xb];
    uStack_f0 = param_1[10];
    uStack_e0 = param_1[0xc];
    uStack_d8 = (undefined1)param_1[0xd];
    uStack_cf = *(undefined8 *)((long)param_1 + 0x71);
    uStack_d7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
    uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
    uStack_108 = param_1[7];
    uStack_110 = param_1[6];
    uStack_f8 = param_1[9];
    uStack_100 = param_1[8];
    FUN_104383ef8(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar9);
    func_0x000104385a54(&uStack_c0,auStack_180,0x1130723c0,&UNK_10dcf18e0);
    puVar4 = &uStack_110;
    FUN_104383bdc();
  }
  *(undefined8 **)(unaff_x20 + _DAT_1130729c0) = puVar4;
  uVar9 = param_1[0x10];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_1130729c8);
  puVar4[1] = param_1[0x11];
  *puVar4 = uVar9;
  uVar9 = param_1[0x11];
  *(undefined8 *)(unaff_x20 + _DAT_1130729d0) = param_1[0x12];
  lVar5 = param_1[0x14];
  *(undefined8 *)(unaff_x20 + _DAT_1130729d8) = param_1[0x13];
  if (lVar5 == 1) {
    _swift_bridgeObjectRetain(uVar9);
    lVar5 = 0;
  }
  else {
    FUN_104383834(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar9);
    FUN_10437f904(lVar5);
    FUN_104382c90();
  }
  *(long *)(unaff_x20 + _DAT_1130729e0) = lVar5;
  uVar9 = param_1[0x15];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_1130729e8);
  puVar4[1] = param_1[0x16];
  *puVar4 = uVar9;
  uVar9 = param_1[0x16];
  *(undefined1 *)(unaff_x20 + _DAT_1130729f0) = *(undefined1 *)(param_1 + 0x17);
  lVar5 = 0;
  FUN_10437f914();
  func_0x000104385a54((long)param_1 + (long)*(int *)(lVar5 + 0x3c),lVar12,0x113072220,&UNK_10dcf2010
                     );
  lVar5 = lVar12;
  (**(code **)(alStack_190[0] + 0x30))(lVar12,1,lVar3);
  if ((int)lVar5 == 1) {
    _swift_bridgeObjectRetain(uVar9);
    plVar10 = (long *)0x0;
  }
  else {
    FUN_1043855ac(lVar12,puVar11);
    lVar6 = 0;
    FUN_104385fa0();
    lVar5 = lVar6;
    _objc_allocWithZone();
    uVar14 = *puVar11;
    *(undefined8 *)(lVar5 + _DAT_113072a28) = uVar14;
    *(undefined8 *)(lVar5 + _DAT_113072a30) = *(undefined8 *)((long)alStack_190 + lVar7 + 8);
    lVar12 = _DAT_113813460;
    iVar1 = *(int *)(lVar3 + 0x18);
    lVar7 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(lVar5 + lVar12,(long)puVar11 + (long)iVar1,lVar7);
    puVar2 = PTR_s_init_1125d9248;
    lStack_130 = lVar5;
    lStack_128 = lVar6;
    _swift_bridgeObjectRetain(uVar9);
    _objc_retain(uVar14);
    plVar10 = &lStack_130;
    _objc_msgSendSuper2(plVar10,puVar2);
    func_0x000104385a18(puVar11,FUN_1043806e4);
  }
  *(long **)(unaff_x20 + _DAT_1130729f8) = plVar10;
  puVar8 = &stack0xfffffffffffffee0;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  func_0x000104385a18(param_1,FUN_10437f914);
  return puVar8;
}



/* Entry: 1043855ac; end: 1043855ef;  */

undefined8 FUN_1043855ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1043806e4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1043855f0; end: 1043855f3; -[SCMapStatus copyWithZone:] */

void FUN_1043855f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043855f4; end: 10438567f; -[SCMapStatus description] */

void FUN_1043855f4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10437f914();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104385680(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000104385a18(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_10437f914);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104385680; end: 1043858f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104385680(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130729a0);
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar8;
  param_1[2] = *(undefined8 *)(param_2 + _DAT_1130729a8);
  puVar1 = (undefined8 *)(param_2 + _DAT_1130729b0);
  uVar10 = puVar1[1];
  uVar3 = *puVar1;
  uVar8 = *(undefined8 *)(param_2 + _DAT_1130729b8);
  param_1[4] = puVar1[1];
  param_1[3] = uVar3;
  param_1[5] = uVar8;
  if (*(long *)(param_2 + _DAT_1130729c0) == 0) {
    *(undefined8 *)((long)param_1 + 0x71) = 0;
    *(undefined8 *)((long)param_1 + 0x69) = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
  }
  else {
    FUN_104383df0(&uStack_a0);
    param_1[0xb] = uStack_78;
    param_1[10] = uStack_80;
    param_1[0xd] = CONCAT71(uStack_67,uStack_68);
    param_1[0xc] = uStack_70;
    *(undefined8 *)((long)param_1 + 0x71) = uStack_5f;
    *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_60,uStack_67);
    param_1[7] = uStack_98;
    param_1[6] = uStack_a0;
    param_1[9] = uStack_88;
    param_1[8] = uStack_90;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_1130729c8);
  uVar3 = puVar1[1];
  uVar7 = *puVar1;
  param_1[0x11] = puVar1[1];
  param_1[0x10] = uVar7;
  uVar7 = *(undefined8 *)(param_2 + _DAT_1130729d8);
  param_1[0x12] = *(undefined8 *)(param_2 + _DAT_1130729d0);
  param_1[0x13] = uVar7;
  lVar11 = *(long *)(param_2 + _DAT_1130729e0);
  if (lVar11 == 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar8);
    lVar11 = 1;
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    _objc_retain();
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar8);
    FUN_1043834f4();
  }
  param_1[0x14] = lVar11;
  puVar1 = (undefined8 *)(param_2 + _DAT_1130729e8);
  uVar8 = puVar1[1];
  uVar9 = *puVar1;
  param_1[0x16] = puVar1[1];
  param_1[0x15] = uVar9;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + _DAT_1130729f0);
  lVar11 = _DAT_1130729f8;
  lVar4 = 0;
  FUN_10437f914();
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c));
  lVar11 = *(long *)(param_2 + lVar11);
  if (lVar11 == 0) {
    lVar11 = 0;
    FUN_1043806e4();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(param_1,1,1,lVar11);
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + _DAT_113072a28);
    *param_1 = uVar9;
    param_1[1] = *(undefined8 *)(lVar11 + _DAT_113072a30);
    lVar4 = _DAT_113813460;
    lVar5 = 0;
    FUN_1043806e4();
    iVar2 = *(int *)(lVar5 + 0x18);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)param_1 + (long)iVar2,lVar11 + lVar4,lVar6);
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,0,1,lVar5);
    _objc_retain(uVar9);
  }
  _swift_bridgeObjectRetain(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1043858f4; end: 10438596f; -[SCMapStatus init] */

void FUN_1043858f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCMapStatusServices/SCMapStatusWrapper.swift"
             ,0x2c,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438593c);
  (*pcVar1)();
}



/* Entry: 104385970; end: 104385a9b; -[SCMapStatus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104385970(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130729a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130729b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130729b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130729c0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130729c8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130729e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130729e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130729f8));
  return;
}



/* Entry: 104385a9c; end: 104385abb;  */

void FUN_104385a9c(void)

{
  _objc_opt_self(&PTR_PTR_1129a4b70);
  return;
}



/* Entry: 104385abc; end: 104385b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104385abc(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  
  puVar5 = auStack_50;
  _objc_allocWithZone();
  uVar6 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113072a28) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_113072a30) = param_1[1];
  lVar4 = 0;
  FUN_1043806e4();
  lVar3 = _DAT_113813460;
  iVar1 = *(int *)(lVar4 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(unaff_x20 + lVar3,(long)param_1 + (long)iVar1,lVar4);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(uVar6);
  _objc_msgSendSuper2(auStack_50,puVar2);
  FUN_1043801ec(param_1);
  return puVar5;
}



/* Entry: 104385b80; end: 104385b8f; -[SCMapStatusConstraint center] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104385b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072a28));
  return;
}



/* Entry: 104385b90; end: 104385b9f; -[SCMapStatusConstraint radius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104385b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072a30);
}



/* Entry: 104385ba0; end: 104385c37; -[SCMapStatusConstraint expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104385ba0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813460,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104385c38; end: 104385cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104385c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072a28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072a30) = param_1;
  lVar1 = _DAT_113813460;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_3,lVar2);
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_3,lVar2);
  return puVar3;
}



/* Entry: 104385cf8; end: 104385dff; -[SCMapStatusConstraint initWithCenter:radius:expirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104385cf8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar5,param_5);
  *(undefined8 *)(param_2 + _DAT_113072a28) = param_4;
  *(undefined8 *)(param_2 + _DAT_113072a30) = param_1;
  (**(code **)(lVar6 + 0x10))(param_2 + _DAT_113813460,lVar5,lVar3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = param_2;
  lStack_68 = lVar2;
  _objc_retain(param_4);
  plVar4 = &lStack_70;
  _objc_msgSendSuper2(plVar4,puVar1);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 104385e00; end: 104385e03; -[SCMapStatusConstraint copyWithZone:] */

void FUN_104385e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104385e04; end: 104385ecf; -[SCMapStatusConstraint description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104385e04(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  FUN_1043806e4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = _DAT_113813460;
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113072a28);
  *puVar5 = uVar6;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar4) = *(undefined8 *)(param_1 + _DAT_113072a30);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))
            ((undefined1 *)((long)puVar5 + (long)iVar1),param_1 + lVar2,lVar4);
  _objc_retain(uVar6);
  FUN_1043801ec(puVar5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104385ed0; end: 104385f4b; -[SCMapStatusConstraint init] */

void FUN_104385ed0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapStatusConstraintWrapper.swift",0x36,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104385f18);
  (*pcVar1)();
}



/* Entry: 104385f4c; end: 104385f97; -[SCMapStatusConstraint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104385f4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072a28));
  lVar1 = _DAT_113813460;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000104385f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 104385f98; end: 104385f9f;  */

void FUN_104385f98(void)

{
  if (lRam0000000113072a60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7ffc68);
  return;
}



/* Entry: 104385fa0; end: 104385fd7;  */

void FUN_104385fa0(undefined8 param_1)

{
  if (lRam0000000113072a60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ffc68);
  return;
}



/* Entry: 104385fd8; end: 10438608f;  */

void FUN_104385fd8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 104386090; end: 1043860eb; -[SCMapStatusGroup statuses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386090(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113072a70);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104385a9c(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043860ec; end: 1043860fb; -[SCMapStatusGroup type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043860ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072a78);
}



/* Entry: 1043860fc; end: 104386157; -[SCMapStatusGroup text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043860fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072a80))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072a80);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104386158; end: 104386167; -[SCMapStatusGroup zoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104386158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072a88);
}



/* Entry: 104386168; end: 104386177; -[SCMapStatusGroup hiddenInExplore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104386168(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072a90);
}



/* Entry: 104386178; end: 104386223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072a70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072a78) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072a80);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113072a88) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113072a90) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104386224; end: 104386303; -[SCMapStatusGroup initWithStatuses:type:text:zoom:hiddenInExplore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386224(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  _swift_getObjectType();
  if (param_4 != 0) {
    param_3 = 0;
    FUN_104385a9c();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(long *)(param_2 + _DAT_113072a70) = param_4;
  *(undefined8 *)(param_2 + _DAT_113072a78) = param_5;
  plVar1 = (long *)(param_2 + _DAT_113072a80);
  *plVar1 = param_6;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_113072a88) = param_1;
  *(undefined1 *)(param_2 + _DAT_113072a90) = param_7;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104386304; end: 104386507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386304(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_10437f914();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = (long)puVar7 - extraout_x12;
  lVar3 = *param_1;
  lStack_68 = lVar3;
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar3 + 0x10);
    if (lVar9 != 0) {
      plStack_98 = param_1;
      func_0x00010438302c(0,lVar9,0);
      lVar3 = lVar3 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
      lVar6 = *(long *)(lVar6 + 0x48);
      do {
        FUN_104386898(lVar3,lVar8);
        FUN_104386898(lVar8,puVar7);
        FUN_104385a9c(0);
        _objc_allocWithZone();
        puVar4 = puVar7;
        FUN_1043851f8();
        func_0x0001043868dc(lVar8);
        uVar1 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          func_0x00010438302c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puVar5 + uVar1 * 8 + 0x20) = puVar4;
        lVar3 = lVar3 + lVar6;
        lVar9 = lVar9 + -1;
        param_1 = plStack_98;
      } while (lVar9 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113072a70) = puVar5;
  *(long *)(unaff_x20 + _DAT_113072a78) = param_1[1];
  lVar3 = param_1[2];
  plVar2 = (long *)(unaff_x20 + _DAT_113072a80);
  plVar2[1] = param_1[3];
  *plVar2 = lVar3;
  *(long *)(unaff_x20 + _DAT_113072a88) = param_1[4];
  func_0x000104386918(&lStack_68,0x113072920,&UNK_10dcf1e40);
  *(char *)(unaff_x20 + _DAT_113072a90) = (char)param_1[5];
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104386508; end: 10438650b; -[SCMapStatusGroup copyWithZone:] */

void FUN_104386508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438650c; end: 10438658f; -[SCMapStatusGroup description] */

void FUN_10438650c(undefined8 param_1)

{
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  _objc_retain();
  FUN_104386648(auStack_70);
  _objc_release(param_1);
  uStack_28 = auStack_70[0];
  func_0x000104386918(&uStack_28,0x113072920,&UNK_10dcf1e40);
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  func_0x000104386918(&uStack_40,0x112d35ff8,&UNK_10d900cd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104386590; end: 10438660b; -[SCMapStatusGroup init] */

void FUN_104386590(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapStatusGroupWrapper.swift",0x31,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043865d8);
  (*pcVar1)();
}



/* Entry: 10438660c; end: 104386647; -[SCMapStatusGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438660c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072a70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072a80 + 8))
  ;
  return;
}



/* Entry: 104386648; end: 104386897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386648(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  
  lVar5 = 0;
  FUN_10437f914();
  lVar5 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = *(ulong *)(param_2 + _DAT_113072a70);
  if (uVar12 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar12;
      if (-1 < (long)uVar12) {
        uVar8 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar8 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104383060(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104386898);
        (*pcVar4)();
      }
      puVar7 = puStack_78;
      if ((uVar12 & 0xc000000000000001) == 0) {
        puVar13 = (undefined8 *)(uVar12 + 0x20);
        do {
          _objc_retain(*puVar13);
          FUN_104385680(puVar10);
          uVar12 = *(ulong *)(puVar7 + 0x10);
          puStack_78 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
            func_0x000104383060(1 < *(ulong *)(puVar7 + 0x18),uVar12 + 1,1);
          }
          puVar7 = puStack_78;
          *(ulong *)(puStack_78 + 0x10) = uVar12 + 1;
          FUN_104386978(puVar10,puStack_78 +
                                *(long *)(lVar5 + 0x48) * uVar12 +
                                ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)));
          uVar8 = uVar8 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar8 != 0);
      }
      else {
        uVar11 = 0;
        do {
          func_0x00010264be7c(uVar11,uVar12);
          FUN_104385680((long)puVar10 - extraout_x12);
          uVar1 = *(ulong *)(puVar7 + 0x10);
          puStack_78 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            func_0x000104383060(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
          }
          puVar7 = puStack_78;
          uVar11 = uVar11 + 1;
          *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
          FUN_104386978((long)puVar10 - extraout_x12,
                        puStack_78 +
                        *(long *)(lVar5 + 0x48) * uVar1 +
                        ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)));
        } while (uVar8 != uVar11);
      }
    }
  }
  uVar9 = *(undefined8 *)(param_2 + _DAT_113072a78);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113072a80);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113072a80))[1];
  uVar14 = *(undefined8 *)(param_2 + _DAT_113072a88);
  uVar3 = *(undefined1 *)(param_2 + _DAT_113072a90);
  _swift_bridgeObjectRetain();
  *param_1 = puVar7;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar14;
  *(undefined1 *)(param_1 + 5) = uVar3;
  return;
}



/* Entry: 104386898; end: 104386957;  */

undefined8 FUN_104386898(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10437f914();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104386958; end: 104386977;  */

void FUN_104386958(void)

{
  _objc_opt_self(&PTR_PTR_1129a4d70);
  return;
}



/* Entry: 104386978; end: 1043869bb;  */

undefined8 FUN_104386978(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10437f914();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1043869bc; end: 104386a07; -[SCMapStatusViewEvent statusId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043869bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072ac0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072ac0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104386a08; end: 104386a63; -[SCMapStatusViewEvent userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386a08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072ac8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072ac8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104386a64; end: 104386a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072ac0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072ac8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104386a68; end: 104386b83; -[SCMapStatusViewEvent initWithStatusId:userId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386a68(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113072ac0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_113072ac8);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104386b84; end: 104386b87; -[SCMapStatusViewEvent copyWithZone:] */

void FUN_104386b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104386b88; end: 104386ba3; -[SCMapStatusViewEvent description] */

void FUN_104386b88(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104386ba4; end: 104386c1f; -[SCMapStatusViewEvent init] */

void FUN_104386ba4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapStatusViewEventWrapper.swift",0x35,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104386bec);
  (*pcVar1)();
}



/* Entry: 104386c20; end: 104386c5f; -[SCMapStatusViewEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386c20(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072ac0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072ac8 + 8))
  ;
  return;
}



/* Entry: 104386c60; end: 104386c7f;  */

void FUN_104386c60(void)

{
  _objc_opt_self(&PTR_PTR_1129a4e58);
  return;
}



/* Entry: 104386c80; end: 104386c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072ac0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072ac8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104386c84; end: 104386d2f;  */

void FUN_104386c84(void)

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



/* Entry: 104386d30; end: 104386d6f;  */

void FUN_104386d30(undefined1 *param_1,long *param_2)

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



/* Entry: 104386d70; end: 104386de7; -[SCMapStoryThumbnail description] */

void FUN_104386d70(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x00010438153c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104386de8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000104381500(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104386de8; end: 10438718b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104386de8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long alStack_90 [5];
  code *pcStack_68;
  
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar6 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar6 - extraout_x12;
  lVar10 = 0x113072b20;
  func_0x0001000285a8(0x113072b20,&UNK_10dcf20a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar7 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_00;
  lVar3 = 0;
  func_0x00010438153c();
  lVar10 = *(long *)(lVar3 + -8);
  pcVar11 = *(code **)(lVar10 + 0x38);
  (*pcVar11)(lVar8,1,1,lVar3);
  if (*(char *)(param_2 + _DAT_113072af8) == '\x01') {
    pcStack_68 = pcVar11;
    func_0x000104387548(param_2 + _DAT_113072b08,lVar6,0x112d36580,&UNK_10d9016d0);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar12 = *(long *)(lVar4 + -8);
    lVar9 = lVar6;
    (**(code **)(lVar12 + 0x30))(lVar6,1,lVar4);
    if ((int)lVar9 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104387180);
      (*pcVar11)();
    }
    lVar9 = ((undefined8 *)(param_2 + _DAT_113072b10))[1];
    alStack_90[4] = lVar10;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104387188);
      (*pcVar11)();
    }
    lVar10 = ((long *)(param_2 + _DAT_113072b18))[1];
    alStack_90[2] = param_2;
    alStack_90[3] = param_1;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10438718c);
      (*pcVar11)();
    }
    alStack_90[1] = *(undefined8 *)(param_2 + _DAT_113072b10);
    alStack_90[0] = *(long *)(param_2 + _DAT_113072b18);
    func_0x000104387508(lVar8,0x113072b20,&UNK_10dcf20a0);
    lVar5 = 0x113072668;
    func_0x0001000285a8(0x113072668,&UNK_10dcf1cc0);
    puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x30));
    plVar2 = (long *)(lVar8 + *(int *)(lVar5 + 0x40));
    (**(code **)(lVar12 + 0x10))(lVar8,lVar6,lVar4);
    lVar5 = alStack_90[0];
    *puVar1 = alStack_90[1];
    puVar1[1] = lVar9;
    *plVar2 = lVar5;
    plVar2[1] = lVar10;
    _swift_storeEnumTagMultiPayload(lVar8,lVar3,1);
    (*pcStack_68)(lVar8,0,1,lVar3);
    pcVar11 = *(code **)(lVar12 + 8);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar10);
    (*pcVar11)(lVar6,lVar4);
    param_1 = alStack_90[3];
    param_2 = alStack_90[2];
    lVar10 = alStack_90[4];
  }
  else {
    func_0x000104387548(param_2 + _DAT_113072b00,lVar9,0x112d36580,&UNK_10d9016d0);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar12 = *(long *)(lVar4 + -8);
    lVar6 = lVar9;
    (**(code **)(lVar12 + 0x30))(lVar9,1,lVar4);
    if ((int)lVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104387184);
      (*pcVar11)();
    }
    func_0x000104387508(lVar8,0x113072b20,&UNK_10dcf20a0);
    (**(code **)(lVar12 + 0x10))(lVar8,lVar9,lVar4);
    _swift_storeEnumTagMultiPayload(lVar8,lVar3,0);
    (*pcVar11)(lVar8,0,1,lVar3);
    (**(code **)(lVar12 + 8))(lVar9,lVar4);
  }
  func_0x000104387548(lVar8,lVar7,0x113072b20,&UNK_10dcf20a0);
  lVar6 = lVar7;
  (**(code **)(lVar10 + 0x30))(lVar7,1,lVar3);
  if ((int)lVar6 != 1) {
    _objc_release(param_2);
    func_0x000104387590(lVar7,param_1);
    func_0x000104387508(lVar8,0x113072b20,&UNK_10dcf20a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10438717c);
  (*pcVar11)();
}



/* Entry: 10438718c; end: 1043871d3; -[SCMapStoryThumbnail init] */

void FUN_10438718c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapStoryThumbnailWrapper.swift",0x34,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043871d4);
  (*pcVar1)();
}



/* Entry: 1043871d4; end: 1043871d7; -[SCMapStoryThumbnail copyWithZone:] */

void FUN_1043871d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043871d8; end: 104387263; +[SCMapStoryThumbnail nonencryptedWithUrl:] */

void FUN_1043871d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = puVar3;
  FUN_104387778(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104387264; end: 10438733b; +[SCMapStoryThumbnail encryptedWithUrl:key:iv:] */

void FUN_104387264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  puVar2 = puVar4;
  FUN_10438791c(puVar4,param_4,param_2,param_5,uVar3);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar3);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10438733c; end: 104387507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438733c(code *param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  code *pcVar4;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = puVar2 + -extraout_x12;
  if (*(char *)(unaff_x20 + _DAT_113072af8) == '\x01') {
    func_0x000104387548(unaff_x20 + _DAT_113072b08,puVar2,0x112d36580,&UNK_10d9016d0);
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar5 = *(long *)(lVar1 + -8);
    puVar6 = puVar2;
    (**(code **)(lVar5 + 0x30))(puVar2,1,lVar1);
    if ((int)puVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1043874fc);
      (*pcVar4)();
    }
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_113072b10))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104387504);
      (*pcVar4)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_113072b18))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104387508);
      (*pcVar4)();
    }
    (*param_3)(puVar2,*(undefined8 *)(unaff_x20 + _DAT_113072b10),lVar3,
               *(undefined8 *)(unaff_x20 + _DAT_113072b18));
    pcVar4 = *(code **)(lVar5 + 8);
    puVar6 = puVar2;
  }
  else {
    func_0x000104387548(unaff_x20 + _DAT_113072b00,puVar6,0x112d36580,&UNK_10d9016d0);
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar5 = *(long *)(lVar1 + -8);
    puVar2 = puVar6;
    (**(code **)(lVar5 + 0x30))(puVar6,1,lVar1);
    if ((int)puVar2 == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104387500);
      (*pcVar4)();
    }
    (*param_1)(puVar6);
    pcVar4 = *(code **)(lVar5 + 8);
  }
  (*pcVar4)(puVar6,lVar1);
  return;
}



/* Entry: 104387508; end: 1043875d3;  */

undefined8 FUN_104387508(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1043875d4; end: 104387627; -[SCMapStoryThumbnail matchNonencrypted:encrypted:] */

void FUN_1043875d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10438733c(FUN_104387d5c,auStack_40,FUN_104387d98,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 104387628; end: 1043876bb;  */

void FUN_104387628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_2,param_4);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1043876bc; end: 1043876ef;  */

void FUN_1043876bc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043876f0; end: 104387777; -[SCMapStoryThumbnail .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043876f0(long param_1)

{
  FUN_104387508(param_1 + _DAT_113072b00,0x112d36580,&UNK_10d9016d0);
  FUN_104387508(param_1 + _DAT_113072b08,0x112d36580,&UNK_10d9016d0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072b10 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072b18 + 8))
  ;
  return;
}



/* Entry: 104387778; end: 10438791b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104387778(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,lVar2);
  pcVar6 = *(code **)(lVar7 + 0x38);
  (*pcVar6)(lVar5,0,1,lVar2);
  (*pcVar6)(lVar4,1,1,lVar2);
  lVar7 = 0;
  FUN_104387af8();
  lVar2 = lVar7;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113072af8) = 0;
  func_0x000104387548(lVar5,lVar2 + _DAT_113072b00,0x112d36580,&UNK_10d9016d0);
  func_0x000104387548(lVar4,lVar2 + _DAT_113072b08,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_113072b10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113072b18);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar7;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104387508(lVar4,0x112d36580,&UNK_10d9016d0);
  func_0x000104387508(lVar5,0x112d36580,&UNK_10d9016d0);
  return plVar3;
}



/* Entry: 10438791c; end: 104387aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438791c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  uStack_80 = param_2;
  uStack_78 = param_4;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x38);
  (*pcVar8)(lVar6,1,1,lVar3);
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,lVar3);
  (*pcVar8)(lVar5,0,1,lVar3);
  lVar7 = 0;
  FUN_104387af8();
  lVar3 = lVar7;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113072af8) = 1;
  func_0x000104387548(lVar6,lVar3 + _DAT_113072b00,0x112d36580,&UNK_10d9016d0);
  func_0x000104387548(lVar5,lVar3 + _DAT_113072b08,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar3 + _DAT_113072b10);
  *puVar1 = uStack_80;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113072b18);
  *puVar1 = uStack_78;
  puVar1[1] = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar7;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  plVar4 = &lStack_70;
  _objc_msgSendSuper2(plVar4,puVar2);
  func_0x000104387508(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x000104387508(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 104387af0; end: 104387af7;  */

void FUN_104387af0(void)

{
  if (lRam0000000113072b50 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7ffd40);
  return;
}



/* Entry: 104387af8; end: 104387b2f;  */

void FUN_104387af8(undefined8 param_1)

{
  if (lRam0000000113072b50 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ffd40);
  return;
}



/* Entry: 104387b30; end: 104387bb3;  */

void FUN_104387b30(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dcf20c8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dcf20e0;
    puStack_28 = &UNK_10dcf20e0;
    lStack_38 = lStack_40;
    _swift_updateClassMetadata2(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 104387bb4; end: 104387d1b;  */

int FUN_104387bb4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104387c30;
        goto LAB_104387c14;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104387c14:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104387c30:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104387d1c; end: 104387d5b;  */

void FUN_104387d1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf211c;
  _swift_getWitnessTable(&UNK_10dcf211c,&UNK_110761640);
  puRam0000000113072b60 = puVar1;
  return;
}



/* Entry: 104387d5c; end: 104387d97;  */

void FUN_104387d5c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104387d98; end: 104387d9f;  */

void FUN_104387d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_4);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


