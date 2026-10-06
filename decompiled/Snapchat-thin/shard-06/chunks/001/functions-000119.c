/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10451efd4; end: 10451efe3; -[SCMapDrop showLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451efd4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083540);
}



/* Entry: 10451efe4; end: 10451efef; -[SCMapDrop addressString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451efe4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083548))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083548);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451eff0; end: 10451effb; -[SCMapDrop pinIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451eff0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083550))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083550);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451effc; end: 10451f053;  */

void FUN_10451effc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10451f054; end: 10451f063; -[SCMapDrop isSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451f054(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083558);
}



/* Entry: 10451f064; end: 10451f1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451f064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083500);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083508);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083510);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083518);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083520);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083528);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113083530) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_113083538) = (undefined1)param_14;
  *(undefined1 *)(unaff_x20 + _DAT_113083540) = param_14._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083548);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083550);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  *(undefined1 *)(unaff_x20 + _DAT_113083558) = param_20;
  _objc_msgSendSuper2(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451f1fc; end: 10451f35b; -[SCMapDrop initWithDropIdentifier:creatorIdentifier:coordinate:name:bitmojiID:selfieID:state:isCreator:showLabel:addressString:pinIcon:isSaved:] */

void FUN_10451f1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10,undefined1 param_11,undefined4 param_12,long param_13,
                  long param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_c8;
  long lStack_c0;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = uVar2;
  if (param_8 == 0) {
    uStack_c8 = 0;
    lStack_c0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c8 = uVar3;
    lStack_c0 = param_8;
  }
  if (param_9 == 0) {
    param_9 = 0;
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_13 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  if (param_14 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_14);
  }
  FUN_10451f064(param_1,param_2,param_5,param_4,param_6,uVar1,param_7,uVar2,lStack_c0,uStack_c8,
                param_9,uVar3,param_10,param_11);
  return;
}



/* Entry: 10451f35c; end: 10451f38b;  */

void FUN_10451f35c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10451f38c(param_1);
  return;
}



/* Entry: 10451f38c; end: 10451f4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451f38c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083500);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083508);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uVar2 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083510);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  uVar2 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083518);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083520);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083528);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113083530) = param_1[0xc];
  *(undefined1 *)(unaff_x20 + _DAT_113083538) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(unaff_x20 + _DAT_113083540) = *(undefined1 *)((long)param_1 + 0x69);
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uVar4 = param_1[0xe];
  uVar3 = param_1[0x11];
  uVar2 = param_1[0x10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083548);
  puVar1[1] = param_1[0xf];
  *puVar1 = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083550);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  func_0x000100402194(&uStack_40,auStack_b0);
  func_0x000100402194(&uStack_50,auStack_b0);
  func_0x000100402194(&uStack_60,auStack_b0);
  func_0x000101223174(&uStack_70,auStack_b0);
  func_0x000101223174(&uStack_80,auStack_b0);
  func_0x000101223174(&uStack_90,auStack_b0);
  func_0x000101223174(&uStack_a0,auStack_b0);
  FUN_10451f500(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_113083558) = *(undefined1 *)(param_1 + 0x12);
  _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451f500; end: 10451f533;  */

undefined8 FUN_10451f500(undefined8 param_1)

{
  (*(code *)(undefined *)0x10451e5c0)();
  return param_1;
}



/* Entry: 10451f534; end: 10451f537; -[SCMapDrop copyWithZone:] */

void FUN_10451f534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10451f538; end: 10451f56b; -[SCMapDrop description] */

void FUN_10451f538(void)

{
  undefined1 auStack_a8 [152];
  
  FUN_10451f68c(auStack_a8);
  FUN_10451f500(auStack_a8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10451f56c; end: 10451f5e7; -[SCMapDrop init] */

void FUN_10451f56c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapDropsAnnotationServices/SCMapDropWrapper.swift",0x33,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10451f5b4);
  (*pcVar1)();
}



/* Entry: 10451f5e8; end: 10451f68b; -[SCMapDrop .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451f5e8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083500 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083508 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083518 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083520 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083528 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083548 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113083550 + 8))
  ;
  return;
}



/* Entry: 10451f68c; end: 10451f7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451f68c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar10 = _DAT_113083510;
  uVar14 = ((undefined8 *)(param_2 + _DAT_113083500))[1];
  uVar12 = *(undefined8 *)(param_2 + _DAT_113083508);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113083508))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_113083518);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113083518))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_113083520);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113083530);
  uVar7 = *(undefined1 *)(param_2 + _DAT_113083538);
  uVar8 = *(undefined1 *)(param_2 + _DAT_113083540);
  puVar2 = (undefined8 *)(param_2 + _DAT_113083528);
  puVar3 = (undefined8 *)(param_2 + _DAT_113083548);
  puVar4 = (undefined8 *)(param_2 + _DAT_113083550);
  uVar9 = *(undefined1 *)(param_2 + _DAT_113083558);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113083500);
  param_1[1] = uVar14;
  param_1[2] = uVar12;
  param_1[3] = uVar5;
  uVar12 = *(undefined8 *)(param_2 + lVar10);
  param_1[5] = ((undefined8 *)(param_2 + lVar10))[1];
  param_1[4] = uVar12;
  param_1[6] = uVar13;
  param_1[7] = uVar6;
  uVar12 = puVar1[1];
  uVar14 = *puVar1;
  uVar13 = puVar2[1];
  uVar16 = puVar2[1];
  uVar15 = *puVar2;
  param_1[9] = puVar1[1];
  param_1[8] = uVar14;
  param_1[0xb] = uVar16;
  param_1[10] = uVar15;
  param_1[0xc] = uVar11;
  *(undefined1 *)(param_1 + 0xd) = uVar7;
  *(undefined1 *)((long)param_1 + 0x69) = uVar8;
  uVar14 = puVar3[1];
  uVar15 = *puVar3;
  uVar11 = puVar4[1];
  uVar17 = puVar4[1];
  uVar16 = *puVar4;
  param_1[0xf] = puVar3[1];
  param_1[0xe] = uVar15;
  param_1[0x11] = uVar17;
  param_1[0x10] = uVar16;
  *(undefined1 *)(param_1 + 0x12) = uVar9;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar11);
  return;
}



/* Entry: 10451f7cc; end: 10451f7eb;  */

void FUN_10451f7cc(void)

{
  _objc_opt_self(&PTR_PTR_1129cacc8);
  return;
}



/* Entry: 10451f7ec; end: 10451f7ff;  */

bool FUN_10451f7ec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10451f800; end: 10451f8d7;  */

void FUN_10451f800(void)

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



/* Entry: 10451f8d8; end: 10451f90f;  */

bool FUN_10451f8d8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10451f910; end: 10451f94f;  */

void FUN_10451f910(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13dd0;
  _swift_getWitnessTable(&UNK_10dd13dd0,&UNK_110783840);
  puRam0000000113083588 = puVar1;
  return;
}



/* Entry: 10451f950; end: 10451f95f;  */

undefined1  [16] FUN_10451f950(void)

{
  return ZEXT816(0x110783840);
}



/* Entry: 10451f960; end: 10451f9af;  */

void FUN_10451f960(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000113083590 != 0) {
    return;
  }
  puVar1 = &UNK_110783860;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000113083590 = param_1;
  return;
}



/* Entry: 10451f9b0; end: 10451f9cb;  */

void FUN_10451f9b0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10451f9cc; end: 10451faa3;  */

void FUN_10451f9cc(void)

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



/* Entry: 10451faa4; end: 10451fac3;  */

void FUN_10451faa4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10451fac4; end: 10451fb03;  */

void FUN_10451fac4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13f1c;
  _swift_getWitnessTable(&UNK_10dd13f1c,&UNK_1107838d8);
  puRam0000000113083598 = puVar1;
  return;
}



/* Entry: 10451fb04; end: 10451fb27;  */

undefined1  [16] FUN_10451fb04(void)

{
  return ZEXT816(0x1107838d8);
}



/* Entry: 10451fb28; end: 10451fbff;  */

void FUN_10451fb28(void)

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



/* Entry: 10451fc00; end: 10451fc23;  */

void FUN_10451fc00(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10451fc24; end: 10451fc63;  */

void FUN_10451fc24(void)

{
  undefined *puVar1;
  
  if (puRam00000001130835a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13fcc;
  _swift_getWitnessTable(&UNK_10dd13fcc,&UNK_110783950);
  puRam00000001130835a0 = puVar1;
  return;
}



/* Entry: 10451fc64; end: 10451ff1b;  */

undefined1  [16] FUN_10451fc64(void)

{
  return ZEXT816(0x110783950);
}



/* Entry: 10451ff1c; end: 10451ffb7;  */

undefined8 * FUN_10451ff1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010451ff04(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10451ffb8; end: 10451fffb;  */

undefined8 * FUN_10451ffb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010286043c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10451fffc; end: 1045200b3;  */

int FUN_10451fffc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1045200b4; end: 1045201f3;  */

uint FUN_1045200b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  func_0x00010452010c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1045201f4; end: 10452021f;  */

long FUN_1045201f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104520220; end: 10452022f;  */

void FUN_104520220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 104520230; end: 104520303;  */

undefined8 * FUN_104520230(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  uVar2 = *(undefined1 *)(param_2 + 6);
  func_0x00010451ff04(uVar3,uVar1,uVar2);
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = uVar2;
  return param_1;
}



/* Entry: 104520304; end: 10452035f;  */

undefined8 * FUN_104520304(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar1 = *(undefined1 *)(param_2 + 6);
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  func_0x00010286043c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 104520360; end: 10452040b;  */

int FUN_104520360(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10452040c; end: 104520453;  */

uint FUN_10452040c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_104520454(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104520454; end: 10452056f;  */

ulong FUN_104520454(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) && (param_1[2] == param_2[2])) {
    uVar1 = param_1[3];
    if (uVar1 != param_2[3] || param_1[4] != param_2[4]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return uVar1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 104520570; end: 1045205e3;  */

undefined8 * FUN_104520570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1045205e4; end: 10452062f;  */

undefined8 * FUN_1045205e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 104520630; end: 1045206cf;  */

int FUN_104520630(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045206d0; end: 104520733; +[SCChatConfiguration defaultConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045206d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113083668) = 1;
  *(undefined1 *)(lVar1 + _DAT_113083670) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104520734; end: 10452083f; -[_TtC11SCChatScope11SCChatScope initWithChatIdentifier:attribution:delegate:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104520734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  func_0x0001045222f8();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113083668) = 1;
  *(undefined1 *)(lVar3 + _DAT_113083670) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  func_0x00010bffdb20(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _objc_release(plVar4);
  return param_1;
}



/* Entry: 104520840; end: 104520983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104520840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar3 = &lStack_60;
  lVar1 = 0;
  FUN_104521ef8();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113083628) = param_2;
  *(undefined8 *)(lVar2 + _DAT_113083630) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113083638) = param_1;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_60,puVar4);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_opt_self(PTR_PTR_1126ae6b8);
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffdb60();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _objc_release(plVar3);
  return unaff_x20;
}



/* Entry: 104520984; end: 104520a0f; -[_TtC11SCChatScope11SCChatScope initWithChatIdentifier:attribution:configuration:delegate:uiContainer:] */

void FUN_104520984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_7);
  FUN_104520840(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 104520a10; end: 104520a1f; -[_TtC11SCChatScope11SCChatScope chatIntentObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104520a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130835a8));
  return;
}



/* Entry: 104520a20; end: 104520a67; -[_TtC11SCChatScope11SCChatScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104520a20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130835b0;
  _swift_beginAccess(param_1 + _DAT_1130835b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104520a68; end: 104520abf; -[_TtC11SCChatScope11SCChatScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104520a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130835b0;
  _swift_beginAccess(param_1 + _DAT_1130835b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104520ac0; end: 104520acf; -[_TtC11SCChatScope11SCChatScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104520ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130835b8));
  return;
}



/* Entry: 104520ad0; end: 104520adf; -[_TtC11SCChatScope11SCChatScope quotedMessageSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104520ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130835c0));
  return;
}



/* Entry: 104520ae0; end: 104520be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104520ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar1 = _DAT_1130835b0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130835b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130835a8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_1130835b8) = param_3;
  puVar2 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _objc_retain(param_1);
  _objc_retain(param_3);
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_1130835c0) = puVar2;
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 104520be4; end: 104520c5f; -[_TtC11SCChatScope11SCChatScope initWithChatIntentObservable:delegate:uiContainer:] */

undefined8
FUN_104520be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  FUN_104521528(param_3,param_4,param_5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  return uVar1;
}



/* Entry: 104520c60; end: 104520c8b; -[_TtC11SCChatScope11SCChatScope init] */

void FUN_104520c60(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCChatScope.SCChatScope",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104520c8c);
  (*pcVar1)();
}



/* Entry: 104520c8c; end: 104520d2f; -[_TtC11SCChatScope11SCChatScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104520c8c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130835a8));
  func_0x000103b44224(param_1 + _DAT_1130835b0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130835b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130835c0));
  return;
}



/* Entry: 104520d30; end: 104520e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104520d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = param_1;
  func_0x000100385ee0();
  lVar3 = lVar2;
  _objc_allocWithZone();
  lVar1 = _DAT_1130835b0;
  _swift_unknownObjectWeakInit(lVar3 + _DAT_1130835b0,0);
  *(long *)(lVar3 + _DAT_1130835a8) = param_1;
  _swift_beginAccess(lVar3 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar3 + lVar1,param_2);
  *(undefined8 *)(lVar3 + _DAT_1130835b8) = param_3;
  puVar4 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  func_0x00010bfee200();
  *(undefined **)(lVar3 + _DAT_1130835c0) = puVar4;
  plVar5 = &lStack_78;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_2);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104520e68; end: 104520eff; -[_TtC11SCChatScope19SCChatScopeServices buildWithChatIntentObservable:delegate:uiContainer:] */

void FUN_104520e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104520d30(param_3,param_4,param_5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104520f00; end: 104521327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_104520f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **appuStack_c0 [2];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x0001045222f8();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113083668) = 1;
  *(undefined1 *)(lVar2 + _DAT_113083670) = 0;
  plVar3 = &lStack_70;
  lStack_70 = lVar2;
  lStack_68 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  lVar1 = 0;
  FUN_104521ef8();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113083628) = param_2;
  *(long **)(lVar2 + _DAT_113083630) = plVar3;
  *(undefined8 *)(lVar2 + _DAT_113083638) = param_1;
  puVar5 = PTR_s_init_1125d9248;
  lStack_80 = lVar2;
  lStack_78 = lVar1;
  _objc_retain(param_2);
  _objc_retain(plVar3);
  _objc_retain(param_1);
  plVar4 = &lStack_80;
  _objc_msgSendSuper2(plVar4,puVar5);
  puVar5 = PTR_PTR_1126ae6b8;
  _objc_opt_self();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000100385ee0();
  puVar7 = puVar6;
  _objc_allocWithZone();
  lVar2 = _DAT_1130835b0;
  _swift_unknownObjectWeakInit(puVar7 + _DAT_1130835b0,0);
  *(undefined **)(puVar7 + _DAT_1130835a8) = puVar5;
  _swift_beginAccess(puVar7 + lVar2,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(puVar7 + lVar2,param_3);
  *(undefined8 *)(puVar7 + _DAT_1130835b8) = param_4;
  puVar8 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _objc_retain(puVar5);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  func_0x00010bfee200();
  *(undefined **)(puVar7 + _DAT_1130835c0) = puVar8;
  ppuVar9 = &puStack_a8;
  puStack_a8 = puVar7;
  puStack_a0 = puVar6;
  _objc_msgSendSuper2(ppuVar9,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_3);
  appuStack_c0[0] = ppuVar9;
  func_0x00010008a7c8(&uStack_b0,appuStack_c0);
  func_0x000100083b20(appuStack_c0);
  _objc_release(puVar5);
  _swift_release(uStack_b0);
  _objc_release(plVar4);
  _objc_release(plVar3);
  _swift_unknownObjectRelease(appuStack_c0[0]);
  return ppuVar9;
}



/* Entry: 104521328; end: 1045213db; -[_TtC11SCChatScope19SCChatScopeServices buildWithChatIdentifier:attribution:delegate:uiContainer:] */

void FUN_104521328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104520f00(param_3,param_4,param_5,param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1045213dc; end: 1045214b3; -[_TtC11SCChatScope19SCChatScopeServices buildWithChatIdentifier:attribution:configuration:delegate:uiContainer:] */

void FUN_1045213dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x00010452113c(param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1045214b4; end: 1045214df; -[_TtC11SCChatScope19SCChatScopeServices init] */

void FUN_1045214b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCChatScope.SCChatScopeServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045214e0);
  (*pcVar1)();
}



/* Entry: 1045214e0; end: 1045214e3;  */

void FUN_1045214e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045214e4; end: 104521517;  */

void FUN_1045214e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104521518; end: 104521527; -[_TtC11SCChatScope19SCChatScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130835d0));
  return;
}



/* Entry: 104521528; end: 104521603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  lVar1 = _DAT_1130835b0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130835b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130835a8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_1130835b8) = param_3;
  puVar2 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _objc_retain(param_1);
  _objc_retain(param_3);
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_1130835c0) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104521604; end: 104521617;  */

undefined1  [16] FUN_104521604(void)

{
  return ZEXT816(0x110783cc8);
}



/* Entry: 104521618; end: 10452168b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083628) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083630) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113083638) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452168c; end: 10452169b; -[SCChatIntent attribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452168c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083628));
  return;
}



/* Entry: 10452169c; end: 1045216ab; -[SCChatIntent configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452169c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083630));
  return;
}



/* Entry: 1045216ac; end: 1045216bb; -[SCChatIntent identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045216ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083638));
  return;
}



/* Entry: 1045216bc; end: 10452172f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045216bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113083628) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083630) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113083638) = param_3;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104521730; end: 1045217bf; -[SCChatIntent initWithAttribution:configuration:identifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083628) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083630) = param_4;
  *(undefined8 *)(param_1 + _DAT_113083638) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1045217c0; end: 1045217ef;  */

void FUN_1045217c0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1045217f0(param_1);
  return;
}



/* Entry: 1045217f0; end: 104521933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045217f0(undefined8 *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_80;
  long lStack_78;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_80;
  _swift_getObjectType();
  uVar8 = *param_1;
  uVar1 = param_1[1];
  uVar9 = param_1[2];
  lVar3 = 0;
  func_0x000104523254();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_1130836e8) = uVar8;
  *(undefined8 *)(lVar4 + _DAT_1130836f0) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_1130836f8) = uVar9;
  plVar5 = &lStack_60;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113083628) = plVar5;
  uVar2 = *(ushort *)(param_1 + 3);
  puVar7 = (undefined1 *)0x0;
  if ((uVar2 & 0xff) != 2) {
    lVar3 = 0;
    func_0x0001045222f8();
    lVar4 = lVar3;
    _objc_allocWithZone();
    *(byte *)(lVar4 + _DAT_113083668) = (byte)uVar2 & 1;
    *(byte *)(lVar4 + _DAT_113083670) = (byte)(uVar2 >> 8) & 1;
    lStack_80 = lVar4;
    lStack_78 = lVar3;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar7 = (undefined1 *)plVar6;
  }
  *(undefined1 **)(unaff_x20 + _DAT_113083630) = puVar7;
  uVar8 = param_1[4];
  FUN_104522be0(uVar8,param_1[5],*(undefined1 *)(param_1 + 6));
  *(undefined8 *)(unaff_x20 + _DAT_113083638) = uVar8;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104521934; end: 104521967; -[SCChatIntent hash] */

undefined8 FUN_104521934(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104521968();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104521968; end: 104521a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521968(void)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_113083628);
  __ss6HasherVABycfC(auStack_c0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + _DAT_1130836e8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + _DAT_1130836f0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar2 + _DAT_1130836f8));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar2 = *(long *)(unaff_x20 + _DAT_113083630);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_108);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar2 + _DAT_113083668));
    uVar1 = (ulong)*(byte *)(lVar2 + _DAT_113083670);
    __ss6HasherV8_combineyys5UInt8VF(uVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  FUN_10452231c();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104521a98; end: 104521c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104521a98(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_68;
  long alStack_60 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_60);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,alStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar5 = *(long *)(lStack_68 + _DAT_113083628);
      uVar2 = 0;
      func_0x000104523254();
      alStack_60[0] = lVar5;
      alStack_60[3] = uVar2;
      _objc_retain(lVar5);
      uVar3 = 0;
      FUN_104522e64();
      func_0x00010006e7f4(alStack_60);
      if (*(long *)(unaff_x20 + _DAT_113083630) == 0) {
        uVar4 = (uint)(*(long *)(lStack_68 + _DAT_113083630) == 0);
      }
      else {
        lVar5 = *(long *)(lStack_68 + _DAT_113083630);
        if (lVar5 == 0) {
          uVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          uVar2 = 0;
          func_0x0001045222f8();
        }
        alStack_60[0] = lVar5;
        alStack_60[3] = uVar2;
        _objc_retain(lVar5);
        plVar1 = alStack_60;
        FUN_104521fdc(plVar1);
        uVar4 = (uint)plVar1;
        func_0x00010006e7f4(alStack_60);
      }
      lVar5 = *(long *)(lStack_68 + _DAT_113083638);
      uVar2 = 0;
      FUN_104522c9c();
      alStack_60[0] = lVar5;
      alStack_60[3] = uVar2;
      _objc_retain(lVar5);
      plVar1 = alStack_60;
      func_0x0001045223f4(plVar1);
      _objc_release(lStack_68);
      func_0x00010006e7f4(alStack_60);
      if ((uVar3 & 1) != 0) {
        uVar4 = uVar4 & (uint)plVar1;
        goto LAB_104521bfc;
      }
    }
  }
  uVar4 = 0;
LAB_104521bfc:
  return uVar4 & 1;
}



/* Entry: 104521c18; end: 104521c97; -[SCChatIntent isEqual:] */

uint FUN_104521c18(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104521a98(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104521c98; end: 104521c9b; -[SCChatIntent copyWithZone:] */

void FUN_104521c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104521c9c; end: 104521ccf; -[SCChatIntent description] */

void FUN_104521c9c(void)

{
  undefined1 auStack_48 [56];
  
  FUN_104521d94(auStack_48);
  FUN_104521ec4(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104521cd0; end: 104521d4b; -[SCChatIntent init] */

void FUN_104521cd0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCChatScope/SCChatIntentWrapper.swift",0x25,2
             ,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104521d18);
  (*pcVar1)();
}



/* Entry: 104521d4c; end: 104521d93; -[SCChatIntent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521d4c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083628));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083630));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083638));
  return;
}



/* Entry: 104521d94; end: 104521ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521d94(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(param_2 + _DAT_113083628);
  lVar4 = *(long *)(param_2 + _DAT_113083630);
  if (lVar4 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = 0x100;
    if (*(char *)(lVar4 + _DAT_113083670) == '\0') {
      uVar5 = 0;
    }
    uVar5 = uVar5 | *(byte *)(lVar4 + _DAT_113083668);
  }
  uVar6 = *(undefined8 *)(lVar2 + _DAT_1130836e8);
  uVar7 = *(undefined8 *)(lVar2 + _DAT_1130836f0);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_1130836f8);
  lVar2 = *(long *)(param_2 + _DAT_113083638);
  if (*(char *)(lVar2 + _DAT_1130836a0) == '\x01') {
    puVar3 = (undefined8 *)(lVar2 + _DAT_1130836b0);
    lVar2 = puVar3[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104521ec0);
      (*pcVar1)();
    }
    uVar9 = 1;
  }
  else {
    puVar3 = (undefined8 *)(lVar2 + _DAT_1130836a8);
    lVar2 = puVar3[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104521ec4);
      (*pcVar1)();
    }
    uVar9 = 0;
  }
  uVar10 = *puVar3;
  _swift_bridgeObjectRetain();
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  *(ushort *)(param_1 + 3) = uVar5;
  param_1[4] = uVar10;
  param_1[5] = lVar2;
  *(undefined1 *)(param_1 + 6) = uVar9;
  return;
}



/* Entry: 104521ec4; end: 104521ef7;  */

undefined8 FUN_104521ec4(undefined8 param_1)

{
  FUN_104520220();
  return param_1;
}



/* Entry: 104521ef8; end: 104521f17;  */

void FUN_104521ef8(void)

{
  _objc_opt_self(&PTR_PTR_1129caf80);
  return;
}



/* Entry: 104521f18; end: 104521f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521f18(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113083668) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113083670) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104521f7c; end: 104521fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104521f7c(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113083668) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113083670) = (byte)((uint)param_1 >> 8) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104521fdc; end: 104522097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104521fdc(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar5 = &lStack_58;
    _swift_dynamicCast(plVar5,auStack_50,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      bVar6 = *(byte *)(unaff_x20 + _DAT_113083668);
      bVar1 = *(byte *)(lStack_58 + _DAT_113083668);
      bVar2 = *(byte *)(unaff_x20 + _DAT_113083670);
      bVar3 = *(byte *)(lStack_58 + _DAT_113083670);
      _objc_release();
      bVar6 = (bVar6 ^ bVar1 | bVar2 ^ bVar3) ^ 1;
      goto LAB_104522080;
    }
  }
  bVar6 = 0;
LAB_104522080:
  return bVar6 & 1;
}



/* Entry: 104522098; end: 1045220a7; -[SCChatConfiguration presenceEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104522098(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083668);
}



/* Entry: 1045220a8; end: 1045220b7; -[SCChatConfiguration showServerLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1045220a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083670);
}



/* Entry: 1045220b8; end: 10452211b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045220b8(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113083668) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113083670) = param_2;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10452211c; end: 10452217f; -[SCChatConfiguration initWithPresenceEnabled:showServerLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452211c(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113083668) = param_3;
  *(undefined1 *)(param_1 + _DAT_113083670) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104522180; end: 1045221db; -[SCChatConfiguration hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104522180(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_113083668));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_113083670));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1045221dc; end: 10452225b; -[SCChatConfiguration isEqual:] */

uint FUN_1045221dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104521fdc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10452225c; end: 10452225f; -[SCChatConfiguration copyWithZone:] */

void FUN_10452225c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104522260; end: 10452227b; -[SCChatConfiguration description] */

void FUN_104522260(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452227c; end: 104522317; -[SCChatConfiguration init] */

void FUN_10452227c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCChatScope/SCChatConfigurationWrapper.swift"
             ,0x2c,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045222c4);
  (*pcVar1)();
}


