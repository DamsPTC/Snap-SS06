/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10406363c; end: 104063677; -[AgeVerificationChallengeData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406363c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130524b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130524c0 + 8))
  ;
  return;
}



/* Entry: 104063678; end: 104063687;  */

undefined1  [16] FUN_104063678(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104063688; end: 1040636bf;  */

void FUN_104063688(undefined8 param_1)

{
  if (lRam00000001130524f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7e7750);
  return;
}



/* Entry: 1040636c0; end: 104063787;  */

undefined8 FUN_1040636c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104063788; end: 1040637a7;  */

void FUN_104063788(void)

{
  _objc_opt_self(&PTR_PTR_112982358);
  return;
}



/* Entry: 1040637a8; end: 1040637ab;  */

void FUN_1040637a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130524c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca518;
  _swift_getWitnessTable(&UNK_10dcca518,&UNK_11073c448);
  puRam00000001130524c8 = puVar1;
  return;
}



/* Entry: 1040637ac; end: 1040637eb;  */

void FUN_1040637ac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130524c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca518;
  _swift_getWitnessTable(&UNK_10dcca518,&UNK_11073c448);
  puRam00000001130524c8 = puVar1;
  return;
}



/* Entry: 1040637ec; end: 104063803;  */

undefined1  [16] FUN_1040637ec(void)

{
  return ZEXT816(0x11073c448);
}



/* Entry: 104063804; end: 10406395f;  */

void FUN_104063804(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  puStack_38 = puStack_40;
  puStack_30 = puStack_40;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 104063960; end: 10406397b;  */

void FUN_104063960(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10406397c; end: 10406399b; -[AgeVerificationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406397c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113052530));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406399c; end: 1040639ab; -[AgeVerificationScope challengeData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406399c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113052538));
  return;
}



/* Entry: 1040639ac; end: 104063a1f; -[AgeVerificationScope authenticationSessionPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040639ac(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113052540))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113052540);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104063a20; end: 104063a2f; -[AgeVerificationScope session] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104063a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113052548));
  return;
}



/* Entry: 104063a30; end: 104063abb; -[AgeVerificationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104063a30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113052550;
  _swift_beginAccess(param_1 + _DAT_113052550,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104063abc; end: 104063c5f; -[AgeVerificationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104063abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113052550;
  _swift_beginAccess(param_1 + _DAT_113052550,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104063c60; end: 104063d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104063c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113052550;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113052550,0);
  *(undefined8 *)(unaff_x20 + _DAT_113052530) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113052538) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113052540);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113052548) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar4;
}



/* Entry: 104063d68; end: 104063e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104063d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_113052550;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113052550,0);
  *(undefined8 *)(unaff_x20 + _DAT_113052530) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113052538) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113052540);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113052548) = param_6;
  FUN_1040640a4();
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar4 = &stack0xffffffffffffff88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar4;
}



/* Entry: 104063e5c; end: 104063fbb; -[AgeVerificationScope initWithUiContainer:delegate:challengeData:authenticationSessionPayload:session:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104063e5c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  if (param_6 == 0) {
    _swift_unknownObjectRetain(param_3);
    _swift_unknownObjectRetain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    param_2 = -0x1000000000000000;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    _swift_unknownObjectRetain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    lVar2 = param_6;
    _objc_retain(param_6);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar2);
  }
  lVar2 = _DAT_113052550;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113052550,0);
  *(undefined8 *)(param_1 + _DAT_113052530) = param_3;
  *(undefined8 *)(param_1 + _DAT_113052538) = param_5;
  plVar3 = (long *)(param_1 + _DAT_113052540);
  *plVar3 = param_6;
  plVar3[1] = param_2;
  _swift_beginAccess(param_1 + lVar2,auStack_68,1,0);
  lVar2 = param_1 + lVar2;
  _swift_unknownObjectWeakAssign(lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_113052548) = param_7;
  FUN_1040640a4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar2;
  _swift_unknownObjectRetain(param_3);
  plVar3 = &lStack_78;
  _objc_msgSendSuper2(plVar3,puVar1);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  return plVar3;
}



/* Entry: 104063fbc; end: 104064017; -[AgeVerificationScope init] */

void FUN_104063fbc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AgeVerificationScope.AgeVerificationScope",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104063fe8);
  (*pcVar1)();
}



/* Entry: 104064018; end: 104064083; -[AgeVerificationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104064018(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113052530));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113052538));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113052540),
                      ((undefined8 *)(param_1 + _DAT_113052540))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113052548));
  param_1 = param_1 + _DAT_113052550;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 104064084; end: 1040640a3;  */

undefined1  [16] FUN_104064084(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1040640a4; end: 1040640c3;  */

void FUN_1040640a4(void)

{
  _objc_opt_self(&PTR_PTR_112982420);
  return;
}



/* Entry: 1040640c4; end: 1040640c7;  */

void FUN_1040640c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca640;
  _swift_getWitnessTable(&UNK_10dcca640,&UNK_11073c4d0);
  puRam0000000113052558 = puVar1;
  return;
}



/* Entry: 1040640c8; end: 104064107;  */

void FUN_1040640c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca640;
  _swift_getWitnessTable(&UNK_10dcca640,&UNK_11073c4d0);
  puRam0000000113052558 = puVar1;
  return;
}



/* Entry: 104064108; end: 10406410b;  */

void FUN_104064108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca6e0;
  _swift_getWitnessTable(&UNK_10dcca6e0,&UNK_11073c4f0);
  puRam0000000113052560 = puVar1;
  return;
}



/* Entry: 10406410c; end: 10406414b;  */

void FUN_10406410c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca6e0;
  _swift_getWitnessTable(&UNK_10dcca6e0,&UNK_11073c4f0);
  puRam0000000113052560 = puVar1;
  return;
}



/* Entry: 10406414c; end: 10406414f;  */

void FUN_10406414c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca780;
  _swift_getWitnessTable(&UNK_10dcca780,&UNK_11073c510);
  puRam0000000113052568 = puVar1;
  return;
}



/* Entry: 104064150; end: 10406418f;  */

void FUN_104064150(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca780;
  _swift_getWitnessTable(&UNK_10dcca780,&UNK_11073c510);
  puRam0000000113052568 = puVar1;
  return;
}



/* Entry: 104064190; end: 10406420f;  */

undefined1  [16] FUN_104064190(void)

{
  return ZEXT816(0x11073c4d0);
}



/* Entry: 104064210; end: 1040642bb;  */

void FUN_104064210(void)

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



/* Entry: 1040642bc; end: 1040642e3;  */

void FUN_1040642bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1040642e4; end: 1040642ef; -[AgeVerificationSession avSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040642e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113052598);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113052598))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1040642f0; end: 1040642fb; -[AgeVerificationSession appealSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040642f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130525a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130525a0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1040642fc; end: 104064343;  */

void FUN_1040642fc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104064344; end: 104064353; -[AgeVerificationSession context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104064344(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130525a8);
}



/* Entry: 104064354; end: 104064363; -[AgeVerificationSession blocking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104064354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130525b0);
}



/* Entry: 104064364; end: 1040643bb;  */

void FUN_104064364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_1040643bc(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1040643bc; end: 1040644ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040643bc(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  uVar7 = param_2;
  uStack_78 = param_4;
  _swift_getObjectType();
  uVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(uVar5 - 8);
  uVar6 = uVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_1;
  }
  uVar3 = 0xe000000000000000;
  if (param_2 != 0) {
    uVar3 = param_2;
  }
  uVar4 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar4 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    __s10Foundation4UUIDVACycfC(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar5);
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    uVar6 = uVar2;
    uVar7 = uVar3;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_113052598);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (ulong *)(unaff_x20 + _DAT_1130525a0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130525a8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130525b0) = uStack_78;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104064500; end: 10406454f; -[AgeVerificationSession initWithAppealSessionId:context:blocking:] */

void FUN_104064500(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  FUN_1040643bc();
  return;
}



/* Entry: 104064550; end: 1040645af; -[AgeVerificationSession init] */

void FUN_104064550(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AgeVerificationScope.AgeVerificationSession",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10406457c);
  (*pcVar1)();
}



/* Entry: 1040645b0; end: 1040645ef; -[AgeVerificationSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040645b0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113052598 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130525a0 + 8))
  ;
  return;
}



/* Entry: 1040645f0; end: 1040645f3;  */

void FUN_1040645f0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130525b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca8e0;
  _swift_getWitnessTable(&UNK_10dcca8e0,&UNK_11073c588);
  puRam00000001130525b8 = puVar1;
  return;
}



/* Entry: 1040645f4; end: 104064633;  */

void FUN_1040645f4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130525b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca8e0;
  _swift_getWitnessTable(&UNK_10dcca8e0,&UNK_11073c588);
  puRam00000001130525b8 = puVar1;
  return;
}



/* Entry: 104064634; end: 104064643;  */

undefined1  [16] FUN_104064634(void)

{
  return ZEXT816(0x11073c588);
}



/* Entry: 104064644; end: 104064663;  */

void FUN_104064644(void)

{
  _objc_opt_self(&PTR_PTR_112982518);
  return;
}



/* Entry: 104064664; end: 104064677;  */

bool FUN_104064664(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104064678; end: 10406474f;  */

void FUN_104064678(void)

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



/* Entry: 104064750; end: 10406476f;  */

void FUN_104064750(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104064770; end: 1040647af;  */

void FUN_104064770(void)

{
  undefined *puVar1;
  
  if (puRam00000001130525e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca9c0;
  _swift_getWitnessTable(&UNK_10dcca9c0,&UNK_11073c680);
  puRam00000001130525e8 = puVar1;
  return;
}



/* Entry: 1040647b0; end: 10406482f;  */

undefined1  [16] FUN_1040647b0(void)

{
  return ZEXT816(0x11073c680);
}



/* Entry: 104064830; end: 10406487f;  */

undefined8 * FUN_104064830(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000104064808(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000104064824(uVar3,uVar2);
  return param_1;
}



/* Entry: 104064880; end: 1040648bb;  */

undefined8 * FUN_104064880(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000104064824(uVar3,uVar2);
  return param_1;
}



/* Entry: 1040648bc; end: 104064a47;  */

int FUN_1040648bc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 2) & 0x7e | (uint)(*(byte *)(param_1 + 2) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104064a48; end: 104064a67; -[_TtC19GoogleSignInService19GoogleSignInService googleSignInManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064a48(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130525f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104064a68; end: 104064ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064a68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130525f0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104064ab4; end: 104064b13; -[_TtC19GoogleSignInService19GoogleSignInService init] */

void FUN_104064ab4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GoogleSignInService.GoogleSignInService",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104064ae0);
  (*pcVar1)();
}



/* Entry: 104064b14; end: 104064b43; -[_TtC19GoogleSignInService19GoogleSignInService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130525f0));
  return;
}



/* Entry: 104064b44; end: 104064b67; -[SCGoogleSignInResult description] */

void FUN_104064b44(void)

{
  FUN_10406547c();
  func_0x000104064824();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104064b68; end: 104064baf; -[SCGoogleSignInResult init] */

void FUN_104064b68(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "GoogleSignInService/GoogleSignInResultWrapper.swift",0x33,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104064bb0);
  (*pcVar1)();
}



/* Entry: 104064bb0; end: 104064c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064bb0(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113052620) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113052628) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113052630) = 0;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_30,puVar1);
  return;
}



/* Entry: 104064c20; end: 104064d07; +[SCGoogleSignInResult success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113052620) = 0;
  *(undefined8 *)(lVar2 + _DAT_113052628) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113052630) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104064d08; end: 104064deb; +[SCGoogleSignInResult failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113052620) = 1;
  *(undefined8 *)(lVar2 + _DAT_113052628) = 0;
  *(undefined8 *)(lVar2 + _DAT_113052630) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104064dec; end: 104064e3b; -[SCGoogleSignInResult matchSuccess:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064dec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113052620) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_113052630) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104064e18);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113052628) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104064e38);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000104064e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 104064e3c; end: 104064ef7; -[SCGoogleSignInResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064e3c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113052628));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113052630));
  return;
}



/* Entry: 104064ef8; end: 104064f0f;  */

void FUN_104064ef8(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 104064f10; end: 104064f57; -[SCGoogleSignInError description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104064f10(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_113052638) == '\0') &&
     (*(char *)(param_1 + _DAT_113052640 + 8) == '\x01')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104064f58);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104064f58; end: 104064f9f; -[SCGoogleSignInError init] */

void FUN_104064f58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "GoogleSignInService/GoogleSignInResultWrapper.swift",0x33,2,0x86,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104064fa0);
  (*pcVar1)();
}



/* Entry: 104064fa0; end: 10406504b; -[SCGoogleSignInError hash] */

void FUN_104064fa0(void)

{
  func_0x000104064fc0();
  return;
}



/* Entry: 10406504c; end: 104065147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10406504c(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
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
    plVar3 = &lStack_58;
    _swift_dynamicCast(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      if (*(char *)(unaff_x20 + _DAT_113052638) == *(char *)(lStack_58 + _DAT_113052638)) {
        if (*(char *)(unaff_x20 + _DAT_113052638) != '\0') {
          _objc_release();
          return true;
        }
        lVar4 = *(long *)(unaff_x20 + _DAT_113052640);
        lVar2 = ((long *)(unaff_x20 + _DAT_113052640))[1];
        lVar5 = *(long *)(lStack_58 + _DAT_113052640);
        cVar1 = (char)((long *)(lStack_58 + _DAT_113052640))[1];
        _objc_release();
        if ((char)lVar2 == '\x01') {
          return cVar1 == '\x01';
        }
        return cVar1 != '\x01' && lVar4 == lVar5;
      }
      _objc_release();
    }
  }
  return false;
}



/* Entry: 104065148; end: 104065227; -[SCGoogleSignInError isEqual:] */

uint FUN_104065148(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10406504c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104065228; end: 10406528b; +[SCGoogleSignInError requestGoogleSignInFailWithErrorCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104065228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113052638) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113052640);
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



/* Entry: 10406528c; end: 104065293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406528c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113052638) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113052640);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104065294; end: 1040652a3; +[SCGoogleSignInError noPresentingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104065294(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113052638) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113052640);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040652a4; end: 104065307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040652a4(undefined1 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113052638) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113052640);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104065308; end: 10406530f; +[SCGoogleSignInError noValidGoogleUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104065308(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113052638) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113052640);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104065310; end: 1040653eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104065310(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113052638) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113052640);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040653ec; end: 104065447; -[SCGoogleSignInError matchRequestGoogleSignInFail:noPresentingView:noValidGoogleUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040653ec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113052638) == '\0') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_113052640) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000104065434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113052640));
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104065448);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_113052638) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010406540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104065440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 104065448; end: 10406547b;  */

void FUN_104065448(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10406547c; end: 104065533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10406547c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + _DAT_113052620) == '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_113052630);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10406552c);
      (*pcVar1)();
    }
    if (*(char *)(lVar3 + _DAT_113052638) == '\0') {
      if ((char)((ulong *)(lVar3 + _DAT_113052640))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104065534);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(lVar3 + _DAT_113052640);
      uVar2 = 0x80;
    }
    else {
      uVar4 = (ulong)(*(char *)(lVar3 + _DAT_113052638) != '\x01');
      uVar2 = 0x81;
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + _DAT_113052628);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104065530);
      (*pcVar1)();
    }
    _objc_retain(uVar4);
    uVar2 = 0;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 104065534; end: 104065573;  */

void FUN_104065534(void)

{
  _objc_opt_self(&PTR_PTR_1129826b0);
  return;
}



/* Entry: 104065574; end: 10406581f;  */

int FUN_104065574(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040655f0;
        goto LAB_1040655d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040655d4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1040655f0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104065820; end: 10406585f;  */

void FUN_104065820(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccabac;
  _swift_getWitnessTable(&UNK_10dccabac,&UNK_11073c928);
  puRam0000000113052698 = puVar1;
  return;
}



/* Entry: 104065860; end: 104065863;  */

void FUN_104065860(void)

{
  undefined *puVar1;
  
  if (puRam00000001130526a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccac4c;
  _swift_getWitnessTable(&UNK_10dccac4c,&UNK_11073c898);
  puRam00000001130526a0 = puVar1;
  return;
}



/* Entry: 104065864; end: 1040658a3;  */

void FUN_104065864(void)

{
  undefined *puVar1;
  
  if (puRam00000001130526a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccac4c;
  _swift_getWitnessTable(&UNK_10dccac4c,&UNK_11073c898);
  puRam00000001130526a0 = puVar1;
  return;
}



/* Entry: 1040658a4; end: 1040658db;  */

void FUN_1040658a4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1040658dc; end: 1040658df; -[SCGoogleSignInError copyWithZone:] */

void FUN_1040658dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1040658e0; end: 1040658e7; -[SCGoogleSignInResult copyWithZone:] */

void FUN_1040658e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1040658e8; end: 104065903;  */

void FUN_1040658e8(undefined8 param_1)

{
  FUN_104065904();
  uRam00000001138130a0 = param_1;
  return;
}



/* Entry: 104065904; end: 104065b0b;  */

undefined * FUN_104065904(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar3 = PTR_PTR_1126adb78;
  _objc_allocWithZone();
  func_0x00010bfee200();
  lVar4 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 6;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  if (lRam00000001130526a8 != -1) {
    _swift_once(0x1130526a8,FUN_104065b0c);
  }
  uVar8 = uRam00000001138130a8;
  uVar5 = 0;
  func_0x000104065cec(0,0x1130526b0,&PTR_PTR_1126deae0);
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  lVar1 = lRam00000001130526b8;
  _objc_retain(uVar8);
  if (lVar1 != -1) {
    _swift_once(0x1130526b8,FUN_104065bbc);
  }
  uVar8 = uRam00000001138130b0;
  *(undefined8 *)(lVar4 + 0x58) = uVar5;
  *(undefined8 *)(lVar4 + 0x40) = uVar8;
  lVar1 = lRam00000001130526c0;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x1130526c0,0x104065c6c);
  }
  uVar2 = uRam00000001138130b8;
  *(undefined8 *)(lVar4 + 0x78) = uVar5;
  *(undefined8 *)(lVar4 + 0x60) = uVar2;
  uVar8 = 0x112d538a8;
  func_0x000104065cec(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(uVar2);
  __sSo7NSArrayC10FoundationE12arrayLiteralABypd_tcfC(lVar4);
  func_0x000107c57f48(puVar3);
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126af7d0;
  _objc_allocWithZone(PTR_PTR_1126af7d0);
  func_0x00010bfee200();
  puVar9 = puVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar9;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar9);
    puVar9 = puVar7;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar7,uVar8);
    func_0x00010006c090(puVar7,uVar8);
  }
  func_0x000107c5a494(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar9);
  return puVar6;
}



/* Entry: 104065b0c; end: 104065b27;  */

void FUN_104065b0c(undefined8 param_1)

{
  FUN_104065b28();
  uRam00000001138130a8 = param_1;
  return;
}



/* Entry: 104065b28; end: 104065bbb;  */

undefined * FUN_104065b28(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126deae8;
  _objc_allocWithZone(PTR_PTR_1126deae8);
  func_0x00010bfee200();
  uVar2 = 0xd000000000000035;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x800000010f1e49d0);
  func_0x000107c57c38(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126deae0;
  _objc_allocWithZone(PTR_PTR_1126deae0);
  func_0x00010bfee200();
  func_0x000107c5a0f8();
  func_0x000107c599dc(puVar3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 104065bbc; end: 104065bd7;  */

void FUN_104065bbc(undefined8 param_1)

{
  FUN_104065bd8();
  uRam00000001138130b0 = param_1;
  return;
}



/* Entry: 104065bd8; end: 104065d2b;  */

undefined * FUN_104065bd8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126deae8;
  _objc_allocWithZone(PTR_PTR_1126deae8);
  func_0x00010bfee200();
  uVar2 = 0x100000000000005e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x100000000000005e,0x800000010f1e4970);
  func_0x000107c57c38(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126deae0;
  _objc_allocWithZone(PTR_PTR_1126deae0);
  func_0x00010bfee200();
  func_0x000107c5a0f8();
  func_0x000107c599dc(puVar3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 104065d2c; end: 104065d2f;  */

void FUN_104065d2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (((uint)param_2 & 0xff) == 1) {
    if (param_1 == 0) {
      func_0x000104067c94();
    }
    else if (param_1 == 1) {
      func_0x000104067d64();
    }
    else {
      func_0x000104067e34();
    }
  }
  else {
    lVar3 = param_1;
    func_0x000104067f04();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    _swift_allocObject();
    puVar1 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar2 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar4 + 0x38) = puVar1;
    *(undefined **)(lVar4 + 0x40) = puVar2;
    *(long *)(lVar4 + 0x20) = param_1;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(lVar3,param_2,lVar4);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 104065d30; end: 104065dfb;  */

void FUN_104065d30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (((uint)param_2 & 0xff) == 1) {
    if (param_1 == 0) {
      func_0x000104067c94();
    }
    else if (param_1 == 1) {
      func_0x000104067d64();
    }
    else {
      func_0x000104067e34();
    }
  }
  else {
    lVar3 = param_1;
    func_0x000104067f04();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    _swift_allocObject();
    puVar1 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar2 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar4 + 0x38) = puVar1;
    *(undefined **)(lVar4 + 0x40) = puVar2;
    *(long *)(lVar4 + 0x20) = param_1;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(lVar3,param_2,lVar4);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 104065dfc; end: 104065edb;  */

undefined8 FUN_104065dfc(ulong *param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar2 = *param_2;
  cVar1 = (char)param_2[1];
  if ((char)param_1[1] == '\x01') {
    if (uVar3 == 0) {
      if (cVar1 != '\x01' || uVar2 != 0) {
        return 0;
      }
    }
    else if (uVar3 == 1) {
      if (cVar1 != '\x01' || uVar2 != 1) {
        return 0;
      }
    }
    else if (cVar1 != '\x01' || uVar2 < 2) {
      return 0;
    }
  }
  else if (cVar1 == '\x01' || uVar3 != uVar2) {
    return 0;
  }
  return 1;
}



/* Entry: 104065edc; end: 104065f1b;  */

void FUN_104065edc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130526d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccacf8;
  _swift_getWitnessTable(&UNK_10dccacf8,&UNK_11073ca90);
  puRam00000001130526d0 = puVar1;
  return;
}



/* Entry: 104065f1c; end: 104065f1f;  */

void FUN_104065f1c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130526d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccada8;
  _swift_getWitnessTable(&UNK_10dccada8,&UNK_11073cb20);
  puRam00000001130526d8 = puVar1;
  return;
}



/* Entry: 104065f20; end: 104065f5f;  */

void FUN_104065f20(void)

{
  undefined *puVar1;
  
  if (puRam00000001130526d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccada8;
  _swift_getWitnessTable(&UNK_10dccada8,&UNK_11073cb20);
  puRam00000001130526d8 = puVar1;
  return;
}


