/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104683588; end: 104683597; -[SCAdInteractionEvent locationXToScreenWidthRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104683588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c008);
}



/* Entry: 104683598; end: 1046835a7; -[SCAdInteractionEvent locationYToScreenHeightRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104683598(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c010);
}



/* Entry: 1046835a8; end: 1046835b7; -[SCAdInteractionEvent swipeFailReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046835a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c018);
}



/* Entry: 1046835b8; end: 10468368b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046835b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bfe8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308bff0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308bff8) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c000);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c008) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308c010) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308c018) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468368c; end: 10468376b; -[SCAdInteractionEvent initWithCommon:eventType:intentType:location:locationXToScreenWidthRatio:locationYToScreenHeightRatio:swipeFailReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468368c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_5;
  _swift_getObjectType();
  *(undefined8 *)(param_5 + _DAT_11308bfe8) = param_7;
  *(undefined8 *)(param_5 + _DAT_11308bff0) = param_8;
  *(undefined8 *)(param_5 + _DAT_11308bff8) = param_9;
  puVar1 = (undefined8 *)(param_5 + _DAT_11308c000);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_5 + _DAT_11308c008) = param_3;
  *(undefined8 *)(param_5 + _DAT_11308c010) = param_4;
  *(undefined8 *)(param_5 + _DAT_11308c018) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_5;
  lStack_68 = lVar3;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 10468376c; end: 104683887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468376c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1b8 [216];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  _objc_allocWithZone();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  FUN_104683cd0(param_1,auStack_1b8);
  puVar1 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308bfe8) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bff0) = param_1[0x14];
  *(undefined8 *)(unaff_x20 + _DAT_11308bff8) = param_1[0x15];
  uVar2 = param_1[0x16];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308c000);
  puVar1[1] = param_1[0x17];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c008) = param_1[0x18];
  *(undefined8 *)(unaff_x20 + _DAT_11308c010) = param_1[0x19];
  func_0x00010466e640(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11308c018) = param_1[0x1a];
  _objc_msgSendSuper2(auStack_1c8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104683888; end: 1046838bb; -[SCAdInteractionEvent hash] */

undefined8 FUN_104683888(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046838bc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046838bc; end: 1046839d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046838bc(void)

{
  double *pdVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308bff0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308bff8));
  pdVar1 = (double *)(unaff_x20 + _DAT_11308c000);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c008) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308c008);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c010) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308c010);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308c018));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046839d4; end: 104683b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046839d4(undefined8 param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ushort uVar17;
  double dVar18;
  double dVar19;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar9 = &lStack_78;
    _swift_dynamicCast(plVar9,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar9 & 1) != 0) {
      uVar12 = *(undefined8 *)(lStack_78 + _DAT_11308bfe8);
      uVar10 = 0;
      FUN_10469d938();
      auStack_70[0] = uVar12;
      lStack_58 = uVar10;
      _objc_retain(uVar12);
      puVar11 = auStack_70;
      FUN_10469c8c4(puVar11);
      func_0x00010006e7f4(auStack_70);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11308bff0);
      uVar10 = *(undefined8 *)(lStack_78 + _DAT_11308bff0);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11308bff8);
      uVar14 = *(undefined8 *)(lStack_78 + _DAT_11308bff8);
      dVar2 = *(double *)(unaff_x20 + _DAT_11308c008);
      dVar3 = *(double *)(lStack_78 + _DAT_11308c008);
      dVar4 = *(double *)(unaff_x20 + _DAT_11308c010);
      dVar5 = *(double *)(lStack_78 + _DAT_11308c010);
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11308c018);
      uVar16 = *(undefined8 *)(lStack_78 + _DAT_11308c018);
      dVar19 = ((double *)(unaff_x20 + _DAT_11308c000))[1];
      dVar18 = *(double *)(unaff_x20 + _DAT_11308c000);
      dVar7 = ((double *)(lStack_78 + _DAT_11308c000))[1];
      dVar6 = *(double *)(lStack_78 + _DAT_11308c000);
      _objc_release(lStack_78);
      uVar17 = NEON_uminv(CONCAT26(-(ushort)(dVar4 == dVar5),
                                   CONCAT24(-(ushort)(dVar2 == dVar3),
                                            CONCAT22(-(ushort)(dVar19 == dVar7),
                                                     -(ushort)(dVar18 == dVar6)))),2);
      uVar1 = 0;
      if ((int)uVar13 == (int)uVar14) {
        uVar1 = (uint)uVar17 & (uint)((int)uVar12 == (int)uVar10);
      }
      if ((int)uVar15 != (int)uVar16) {
        return 0;
      }
      return (uint)puVar11 & uVar1;
    }
  }
  return 0;
}



/* Entry: 104683b74; end: 104683bf3; -[SCAdInteractionEvent isEqual:] */

uint FUN_104683b74(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046839d4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104683bf4; end: 104683bf7; -[SCAdInteractionEvent copyWithZone:] */

void FUN_104683bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104683bf8; end: 104683c43; -[SCAdInteractionEvent description] */

void FUN_104683bf8(undefined8 param_1)

{
  undefined1 auStack_f8 [216];
  
  _objc_retain();
  func_0x000104683d0c(auStack_f8);
  _objc_release(param_1);
  func_0x00010466e640(auStack_f8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104683c44; end: 104683cbf; -[SCAdInteractionEvent init] */

void FUN_104683c44(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdInteractionEventWrapper.swift",0x38,2,0x58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104683c8c);
  (*pcVar1)();
}



/* Entry: 104683cc0; end: 104683ccf; -[SCAdInteractionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bfe8));
  return;
}



/* Entry: 104683cd0; end: 104683dcb;  */

undefined8 FUN_104683cd0(undefined8 param_1,undefined8 param_2)

{
  FUN_104665cdc(param_2,param_1);
  return param_2;
}



/* Entry: 104683dcc; end: 104683deb;  */

void FUN_104683dcc(void)

{
  _objc_opt_self(&PTR_PTR_1129cfd18);
  return;
}



/* Entry: 104683dec; end: 104683dfb; -[SCAdLeadGenerationEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c048));
  return;
}



/* Entry: 104683dfc; end: 104683e13; -[SCAdLeadGenerationEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c050));
  return;
}



/* Entry: 104683e14; end: 104683f53; -[SCAdLeadGenerationEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683e14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c048) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c050) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104683f54; end: 104683fd7; -[SCAdLeadGenerationEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104683f54(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c048);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c050);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104683fd8; end: 1046840af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104683fd8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c048);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c050);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308c050);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046840b0; end: 10468412f; -[SCAdLeadGenerationEvent isEqual:] */

uint FUN_1046840b0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104683fd8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104684130; end: 104684133; -[SCAdLeadGenerationEvent copyWithZone:] */

void FUN_104684130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104684134; end: 1046841f3; -[SCAdLeadGenerationEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0x544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1046841f4; end: 104684223;  */

void FUN_1046841f4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104684224(param_1);
  return;
}



/* Entry: 104684224; end: 104684437;  */

undefined8 FUN_104684224(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_1046843e0:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_104684438(0,0x11308bd50,&PTR_PTR_1126b9150);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x544e455645;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1046843e0;
      }
      uVar2 = 0;
      FUN_104684438(0,0x11308c058,&PTR_PTR_1126b90f8);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c000060();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104684438; end: 104684477;  */

void FUN_104684438(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104684478; end: 10468449f; -[SCAdLeadGenerationEvent initWithCoder:] */

void FUN_104684478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104684224();
  return;
}



/* Entry: 1046844a0; end: 1046844bb; -[SCAdLeadGenerationEvent description] */

void FUN_1046844a0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046844bc; end: 104684537; -[SCAdLeadGenerationEvent init] */

void FUN_1046844bc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdLeadGenerationEventWrapper.swift",0x3b,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104684504);
  (*pcVar1)();
}



/* Entry: 104684538; end: 10468456f; -[SCAdLeadGenerationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684538(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c048));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c050));
  return;
}



/* Entry: 104684570; end: 10468458f;  */

void FUN_104684570(void)

{
  _objc_opt_self(&PTR_PTR_1129cfe10);
  return;
}



/* Entry: 104684590; end: 104684593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684590(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c048) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c050) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104684594; end: 1046845a3; -[SCAdLifecycleEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c088));
  return;
}



/* Entry: 1046845a4; end: 1046845b3; -[SCAdLifecycleEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046845a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c090));
  return;
}



/* Entry: 1046845b4; end: 10468467b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046845b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c088) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c090) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468467c; end: 1046846f3; -[SCAdLifecycleEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468467c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c088) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c090) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046846f4; end: 1046847fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046846f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_208 [8];
  undefined1 auStack_1f8 [120];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  _objc_allocWithZone();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x000102c62cd4(&uStack_e0,&uStack_180);
  puVar1 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308c088) = puVar1;
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_128 = param_1[0x1f];
  uStack_130 = param_1[0x1e];
  uStack_118 = param_1[0x21];
  uStack_120 = param_1[0x20];
  uStack_110 = *(undefined2 *)(param_1 + 0x22);
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  FUN_104666380(&uStack_180,auStack_1f8);
  puVar1 = &uStack_180;
  FUN_104687140();
  func_0x00010466e674(param_1);
  *(undefined8 **)(unaff_x20 + _DAT_11308c090) = puVar1;
  _objc_msgSendSuper2(auStack_208,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046847fc; end: 10468487b; -[SCAdLifecycleEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046847fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  uVar1 = param_1;
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  FUN_104685604();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10468487c; end: 10468498b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10468487c(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c088);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c090);
      uVar2 = 0;
      FUN_10468b45c();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      FUN_104685b6c(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_104684974;
    }
  }
  uVar5 = 0;
LAB_104684974:
  return uVar5 & 1;
}



/* Entry: 10468498c; end: 104684a0b; -[SCAdLifecycleEvent isEqual:] */

uint FUN_10468498c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468487c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104684a0c; end: 104684a0f; -[SCAdLifecycleEvent copyWithZone:] */

void FUN_104684a0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104684a10; end: 104684a93; -[SCAdLifecycleEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684a10(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_148 [160];
  undefined1 auStack_a8 [120];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c088);
  _objc_retain();
  _objc_retain(uVar1);
  FUN_10469d68c(auStack_148);
  _objc_retain(*(undefined8 *)(param_1 + _DAT_11308c090));
  func_0x000104689308(auStack_a8);
  _objc_release(param_1);
  func_0x00010466e674(auStack_148);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104684a94; end: 104684b0f; -[SCAdLifecycleEvent init] */

void FUN_104684a94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdLifecycleEventWrapper.swift",0x36,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104684adc);
  (*pcVar1)();
}



/* Entry: 104684b10; end: 104684b47; -[SCAdLifecycleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684b10(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c088));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c090));
  return;
}



/* Entry: 104684b48; end: 104684b67;  */

void FUN_104684b48(void)

{
  _objc_opt_self(&PTR_PTR_1129cfee8);
  return;
}



/* Entry: 104684b68; end: 104684b77; -[SCAdLifecycleEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c0c0));
  return;
}



/* Entry: 104684b78; end: 104684b87; -[SCAdLifecycleEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c0c8));
  return;
}



/* Entry: 104684b88; end: 104684b9f; -[SCAdLifecycleEventV2 touchPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c0d0));
  return;
}



/* Entry: 104684ba0; end: 104684d17; -[SCAdLifecycleEventV2 initWithCommon:event:touchPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104684ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c0c0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c0c8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308c0d0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104684d18; end: 104684deb; -[SCAdLifecycleEventV2 hash] */

undefined8 FUN_104684d18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104684d4c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104684dec; end: 104684f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104684dec(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return 0;
  }
  plVar2 = &lStack_68;
  _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
  if (((ulong)plVar2 & 1) == 0) {
    return 0;
  }
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_11308c0c0);
  func_0x00010c071ae0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c0c8);
  func_0x00010c071ae0(uVar3);
  lVar4 = *(long *)(unaff_x20 + _DAT_11308c0d0);
  if (lVar4 == 0) {
    lVar6 = *(long *)(lStack_68 + _DAT_11308c0d0);
    lVar4 = lVar6;
    _objc_retain(lVar6);
    _objc_release(lStack_68);
    if (lVar6 == 0) {
      uVar5 = 1;
      goto joined_r0x000104684ee8;
    }
    uVar5 = 0;
  }
  else {
    func_0x00010c071ae0();
    uVar5 = (uint)lVar4;
    lVar4 = lStack_68;
  }
  _objc_release(lVar4);
joined_r0x000104684ee8:
  if (iVar1 == 0) {
    return 0;
  }
  return (uint)uVar3 & uVar5;
}



/* Entry: 104684f08; end: 104684f87; -[SCAdLifecycleEventV2 isEqual:] */

uint FUN_104684f08(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104684dec(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104684f88; end: 104684f8b; -[SCAdLifecycleEventV2 copyWithZone:] */

void FUN_104684f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104684f8c; end: 104684fa7; -[SCAdLifecycleEventV2 description] */

void FUN_104684f8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104684fa8; end: 104685023; -[SCAdLifecycleEventV2 init] */

void FUN_104684fa8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdLifecycleEventV2Wrapper.swift",0x38,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104684ff0);
  (*pcVar1)();
}



/* Entry: 104685024; end: 10468506b; -[SCAdLifecycleEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104685024(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c0c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c0c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c0d0));
  return;
}



/* Entry: 10468506c; end: 10468508b;  */

void FUN_10468506c(void)

{
  _objc_opt_self(&PTR_PTR_1129cffb8);
  return;
}



/* Entry: 10468508c; end: 10468508f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468508c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c0c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c0c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c0d0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104685090; end: 104685117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104685090(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308c100) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c108) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11308c110) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11308c118) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c120) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104685118; end: 104685127; -[SCAdLifecycleTimestampParseResult topsnapPresentTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104685118(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c100);
}



/* Entry: 104685128; end: 104685137; -[SCAdLifecycleTimestampParseResult attachmentTriggeredTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104685128(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c108);
}



/* Entry: 104685138; end: 104685147; -[SCAdLifecycleTimestampParseResult attachmentPresentedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104685138(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c110);
}



/* Entry: 104685148; end: 104685157; -[SCAdLifecycleTimestampParseResult attachmentDismissTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104685148(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c118);
}



/* Entry: 104685158; end: 104685167; -[SCAdLifecycleTimestampParseResult topsnapDisappearTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104685158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308c120);
}



/* Entry: 104685168; end: 104685203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104685168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c100) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c108) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c110) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308c118) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308c120) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104685204; end: 1046852a7; -[SCAdLifecycleTimestampParseResult initWithTopsnapPresentTsMs:attachmentTriggeredTsMs:attachmentPresentedTsMs:attachmentDismissTsMs:topsnapDisappearTsMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104685204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_6;
  _swift_getObjectType();
  *(undefined8 *)(param_6 + _DAT_11308c100) = param_1;
  *(undefined8 *)(param_6 + _DAT_11308c108) = param_2;
  *(undefined8 *)(param_6 + _DAT_11308c110) = param_3;
  *(undefined8 *)(param_6 + _DAT_11308c118) = param_4;
  *(undefined8 *)(param_6 + _DAT_11308c120) = param_5;
  lStack_60 = param_6;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046852a8; end: 1046852c7; -[SCAdLifecycleTimestampParseResult hash] */

void FUN_1046852a8(void)

{
  FUN_1046852c8();
  return;
}



/* Entry: 1046852c8; end: 1046853a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046852c8(void)

{
  long unaff_x20;
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c100) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c100);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c108) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c108);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c110) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c110);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c118) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c118);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308c120) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11308c120);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046853a8; end: 1046854c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1046853a8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar2 = &lStack_98;
    _swift_dynamicCast(plVar2,auStack_90,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      dVar3 = *(double *)(unaff_x20 + _DAT_11308c100);
      dVar4 = *(double *)(lStack_98 + _DAT_11308c100);
      dVar5 = *(double *)(unaff_x20 + _DAT_11308c108);
      dVar6 = *(double *)(lStack_98 + _DAT_11308c108);
      dVar7 = *(double *)(unaff_x20 + _DAT_11308c110);
      dVar8 = *(double *)(lStack_98 + _DAT_11308c110);
      dVar9 = *(double *)(unaff_x20 + _DAT_11308c118);
      dVar10 = *(double *)(lStack_98 + _DAT_11308c118);
      dVar11 = *(double *)(unaff_x20 + _DAT_11308c120);
      dVar12 = *(double *)(lStack_98 + _DAT_11308c120);
      _objc_release();
      return dVar11 == dVar12 &&
             (dVar9 == dVar10 && (dVar7 == dVar8 && (dVar5 == dVar6 && dVar3 == dVar4)));
    }
  }
  return false;
}



/* Entry: 1046854c8; end: 104685547; -[SCAdLifecycleTimestampParseResult isEqual:] */

uint FUN_1046854c8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046853a8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104685548; end: 10468554b; -[SCAdLifecycleTimestampParseResult copyWithZone:] */

void FUN_104685548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468554c; end: 104685567; -[SCAdLifecycleTimestampParseResult description] */

void FUN_10468554c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104685568; end: 104685603; -[SCAdLifecycleTimestampParseResult init] */

void FUN_104685568(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdLifecycleTimestampParseResultWrapper.swift",0x45,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046855b0);
  (*pcVar1)();
}



/* Entry: 104685604; end: 104685b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104685604(void)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308c150));
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c158);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c160) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c160);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_11308c168);
  if (lVar5 == 0) {
    lVar5 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar5);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar5);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c170) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104692530();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar5);
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c178);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c180) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c180);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_11308c188);
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar5);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar5);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308c190))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c190);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c198);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c1a0);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c1a8);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c1b0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c1b0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c1b8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c1b8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c1c0);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308c1c8))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c1c8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c1d0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c1d0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308c1d8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = *(ulong *)(unaff_x20 + _DAT_11308c1d8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar6;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c1e0);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  bVar2 = *(byte *)(unaff_x20 + _DAT_11308c1e8);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308c1f0) + 1) == '\x01') {
    uVar4 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308c1f0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  if (*(long *)(unaff_x20 + _DAT_11308c1f8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104692530();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104685b6c; end: 10468620f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104685b6c(double *******param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  double *******pppppppdVar4;
  double *******pppppppdVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  double *******pppppppdVar10;
  double *******pppppppdVar11;
  double *******pppppppdVar12;
  uint uVar13;
  uint uVar14;
  double *******unaff_x20;
  undefined8 uVar15;
  double *******pppppppdVar16;
  double *******pppppppdVar17;
  uint uVar18;
  undefined8 uVar19;
  double ******ppppppdVar20;
  uint unaff_w22;
  double *******unaff_x23;
  double *******unaff_x24;
  double *******pppppppdStack_68;
  double *******pppppppdStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  pppppppdVar17 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,&pppppppdStack_60);
  if (lStack_48 == 0) {
LAB_104685c10:
    pppppppdStack_68 = (double *******)&pppppppdStack_60;
code_r0x000104685c14:
    func_0x00010006e7f4(pppppppdStack_68);
code_r0x000104685c18:
    goto LAB_1046861b0;
  }
  uVar8 = 0;
  pppppppdVar10 = (double *******)&pppppppdStack_60;
  pppppppdVar11 = (double *******)(PTR___sypN_11034f1a8 + 8);
  _swift_dynamicCast();
  if ((uVar8 & 1) == 0) goto LAB_1046861b0;
  bVar3 = *(byte *)((long)unaff_x20 + _DAT_11308c150);
  pppppppdVar12 = (double *******)(ulong)bVar3;
  bVar6 = bVar3 == *(byte *)((long)pppppppdStack_68 + _DAT_11308c150);
  if (!bVar6) goto LAB_1046861ac;
  ppppppdVar20 = (double ******)&UNK_10dd25a10;
  uVar14 = (uint)*(byte *)(pppppppdVar12 + 0x21ba4b42);
  uVar13 = uVar14 * 4 + 0x4685c04;
  bVar7 = bVar6;
  pppppppdVar16 = pppppppdStack_68;
  pppppppdVar4 = param_1;
  pppppppdVar5 = unaff_x24;
  switch(bVar3) {
  default:
    goto code_r0x000104685c04;
  case 1:
  case 0x33:
  case 0x53:
  case 0x90:
  case 0xe0:
    pppppppdVar12 = (double *******)&DAT_11308c000;
code_r0x000104685dac:
    pppppppdVar12 = (double *******)pppppppdVar12[0x2b];
code_r0x000104685db0:
    pppppppdVar17 = (double *******)(ulong)*(byte *)((long)unaff_x20 + (long)pppppppdVar12);
code_r0x000104685db4:
    unaff_x20 = (double *******)(ulong)((int)pppppppdVar17 == 2);
    param_1 = (double *******)(ulong)*(byte *)((long)pppppppdStack_68 + (long)pppppppdVar12);
code_r0x000104685dc4:
    _objc_release();
    uVar13 = 0;
    if ((int)param_1 == 2) {
      uVar13 = (uint)unaff_x20;
    }
    unaff_x20 = (double *******)(ulong)uVar13;
    bVar7 = (int)pppppppdVar17 == 2;
code_r0x000104685dd4:
    bVar6 = true;
    if (!bVar7) {
      bVar6 = (int)param_1 == 2;
    }
code_r0x000104685dd8:
    uVar13 = (uint)unaff_x20;
    uVar18 = (uint)param_1;
    uVar14 = (uint)pppppppdVar17;
    if (!bVar6) {
code_r0x000104685ddc:
      uVar13 = uVar14 ^ uVar18 ^ 1;
    }
code_r0x0001046861b4:
    return uVar13 & 1;
  case 2:
    pppppppdVar12 = (double *******)((long)unaff_x20 + (long)_DAT_11308c160);
    ppppppdVar20 = _DAT_11308c160;
  case 0xe8:
    ppppppdVar20 = (double ******)((long)pppppppdStack_68 + (long)ppppppdVar20);
    uVar13 = (uint)*(byte *)(ppppppdVar20 + 1);
    bVar6 = *(char *)(pppppppdVar12 + 1) == '\x01';
code_r0x000104685c74:
    if (!bVar6) {
      if (uVar13 != 1) {
        bVar6 = (int)*pppppppdVar12 == (int)*ppppppdVar20;
code_r0x000104685e54:
        if (bVar6) goto code_r0x000104685e58;
      }
LAB_1046861ac:
      _objc_release(pppppppdStack_68);
LAB_1046861b0:
      uVar13 = 0;
      goto code_r0x0001046861b4;
    }
    if (uVar13 != 1) {
code_r0x000104685c80:
      goto LAB_1046861ac;
    }
code_r0x000104685e58:
    pppppppdVar12 = (double *******)&DAT_11308c000;
code_r0x000104685e5c:
    pppppppdVar17 = *(double ********)((long)unaff_x20 + (long)pppppppdVar12[0x2d]);
    param_1 = *(double ********)((long)pppppppdStack_68 + (long)pppppppdVar12[0x2d]);
    if (pppppppdVar17 != (double *******)0x0) {
      unaff_x24 = pppppppdStack_68;
      if (param_1 != (double *******)0x0) {
code_r0x000104685e74:
        pppppppdVar16 = pppppppdVar17;
        func_0x0001002ed07c(0);
        _objc_retain(param_1);
        _objc_retain();
        unaff_x23 = pppppppdVar16;
        pppppppdVar5 = unaff_x24;
code_r0x000104685ea0:
        pppppppdStack_68 = pppppppdVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(unaff_x23);
        _objc_release(param_1);
        if (((ulong)pppppppdVar16 & 1) != 0) goto code_r0x000104686134;
code_r0x000104685ec0:
      }
      goto LAB_1046861ac;
    }
    if (param_1 != (double *******)0x0) goto LAB_1046861ac;
code_r0x000104686134:
    if (*(long *)((long)unaff_x20 + _DAT_11308c170) == 0) {
      pppppppdVar12 = _DAT_11308c178;
      if (*(long *)((long)pppppppdStack_68 + _DAT_11308c170) != 0) goto LAB_1046861ac;
    }
    else {
      ppppppdVar20 = *(double *******)((long)pppppppdStack_68 + _DAT_11308c170);
      if (ppppppdVar20 == (double ******)0x0) {
        lVar9 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
      }
      else {
        lVar9 = 0;
        FUN_104693c20();
      }
      pppppppdStack_60 = (double *******)ppppppdVar20;
      lStack_48 = lVar9;
      _objc_retain(ppppppdVar20);
      uVar8 = 0;
      FUN_1046929e0();
      func_0x00010006e7f4(&pppppppdStack_60);
      pppppppdVar12 = _DAT_11308c178;
      if ((uVar8 & 1) == 0) goto LAB_1046861ac;
    }
code_r0x000104685f60:
    pppppppdVar17 = (double *******)(ulong)*(byte *)((long)unaff_x20 + (long)pppppppdVar12);
code_r0x000104685f64:
    bVar3 = *(byte *)((long)pppppppdStack_68 + (long)pppppppdVar12);
    param_1 = (double *******)(ulong)bVar3;
    _objc_release();
    uVar13 = 0;
    if (bVar3 == 2) {
      uVar13 = (uint)((int)pppppppdVar17 == 2);
    }
    unaff_x20 = (double *******)(ulong)uVar13;
code_r0x000104685f80:
    uVar13 = (uint)unaff_x20;
    uVar18 = (uint)param_1;
    uVar14 = (uint)pppppppdVar17;
    if ((uVar14 == 2) || (uVar18 == 2)) goto code_r0x0001046861b4;
    goto code_r0x000104685ddc;
  case 3:
  case 0x6d:
  case 0x95:
    pppppppdVar12 = (double *******)((long)unaff_x20 + (long)_DAT_11308c180);
    uVar14 = (uint)*(byte *)(pppppppdVar12 + 1);
    ppppppdVar20 = _DAT_11308c180;
  case 0x28:
    ppppppdVar20 = (double ******)((long)pppppppdStack_68 + (long)ppppppdVar20);
    uVar13 = (uint)*(byte *)(ppppppdVar20 + 1);
code_r0x000104685c9c:
    if (uVar14 == 1) {
      if (uVar13 == 1) {
code_r0x000104685edc:
        pppppppdVar16 = *(double ********)((long)unaff_x20 + _DAT_11308c188);
        unaff_x23 = *(double ********)((long)pppppppdStack_68 + _DAT_11308c188);
        if (pppppppdVar16 != (double *******)0x0) {
          uVar13 = 0;
          if (unaff_x23 != (double *******)0x0) {
            func_0x0001002ed07c(0);
            _objc_retain(unaff_x23);
            param_1 = pppppppdStack_68;
code_r0x000104685f14:
            _objc_retain(pppppppdVar16);
            unaff_x24 = pppppppdVar16;
code_r0x000104685f24:
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
            unaff_x20 = pppppppdVar16;
            pppppppdVar4 = param_1;
code_r0x000104685f3c:
            pppppppdStack_68 = pppppppdVar4;
            uVar13 = (uint)unaff_x20;
          }
code_r0x000104685f40:
          _objc_release(pppppppdStack_68);
          goto code_r0x0001046861b4;
        }
        pppppppdVar17 = unaff_x23;
        _objc_retain(unaff_x23);
        _objc_release(pppppppdStack_68);
        pppppppdStack_68 = pppppppdVar17;
joined_r0x000104686040:
        if (unaff_x23 == (double *******)0x0) {
code_r0x000104686180:
          uVar13 = 1;
          goto code_r0x0001046861b4;
        }
      }
    }
    else {
code_r0x000104685ec4:
      if ((uVar13 != 1) && ((int)*pppppppdVar12 == (int)*ppppppdVar20)) goto code_r0x000104685edc;
    }
    goto LAB_1046861ac;
  case 4:
    pppppppdVar12 = (double *******)((long)unaff_x20 + (long)_DAT_11308c190);
    ppppppdVar20 = _DAT_11308c190;
  case 0x32:
  case 0x52:
    pppppppdVar10 = (double *******)pppppppdVar12[1];
    ppppppdVar20 = (double ******)((long)pppppppdStack_68 + (long)ppppppdVar20);
    unaff_x20 = (double *******)ppppppdVar20[1];
code_r0x000104685d40:
    if (pppppppdVar10 != (double *******)0x0) {
      uVar13 = 0;
      if (unaff_x20 != (double *******)0x0) {
code_r0x000104685d48:
        pppppppdVar12 = (double *******)*pppppppdVar12;
        pppppppdVar11 = (double *******)*ppppppdVar20;
code_r0x000104685d50:
        bVar6 = pppppppdVar12 == pppppppdVar11;
code_r0x000104685d54:
        pppppppdVar16 = pppppppdVar12;
        if (bVar6 && pppppppdVar10 == unaff_x20) {
code_r0x000104685c04:
          _objc_release();
code_r0x000104685c08:
          unaff_x20 = (double *******)0x1;
code_r0x000104685c0c:
          uVar13 = (uint)unaff_x20;
          goto code_r0x0001046861b4;
        }
code_r0x000104685d5c:
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (pppppppdVar16);
        pppppppdVar17 = pppppppdStack_68;
code_r0x000104685d70:
        pppppppdStack_68 = pppppppdVar17;
        unaff_x20 = pppppppdVar16;
code_r0x000104685d78:
        uVar13 = (uint)unaff_x20;
      }
      goto code_r0x000104685f40;
    }
code_r0x0001046860d0:
    _swift_bridgeObjectRetain(unaff_x20);
    _objc_release(pppppppdStack_68);
    if (unaff_x20 == (double *******)0x0) goto code_r0x000104686180;
    _swift_bridgeObjectRelease(unaff_x20);
    goto LAB_1046861b0;
  case 8:
    pppppppdVar12 = _DAT_11308c198;
  case 0x8d:
  case 0xc5:
    goto code_r0x000104685db0;
  case 9:
    bVar3 = *(byte *)((long)pppppppdStack_68 + _DAT_11308c1a0);
    pppppppdVar12 = _DAT_11308c1a8;
    if (*(byte *)((long)unaff_x20 + _DAT_11308c1a0) == 2) goto joined_r0x000104686128;
    if (bVar3 == 2) goto LAB_1046861ac;
    bVar3 = *(byte *)((long)unaff_x20 + _DAT_11308c1a0) ^ bVar3;
    goto joined_r0x000104686194;
  case 10:
    pppppppdVar12 = (double *******)&DAT_11308c000;
  case 0xb1:
  case 0xe9:
  case 0xf1:
  case 0xf9:
    ppppppdVar20 = pppppppdVar12[0x36];
code_r0x000104685c24:
    cVar2 = *(char *)((undefined8 *)((long)pppppppdStack_68 + (long)ppppppdVar20) + 1);
    if (*(char *)((undefined8 *)((long)unaff_x20 + (long)ppppppdVar20) + 1) == '\x01') {
      _objc_release();
      bVar6 = cVar2 == '\x01';
code_r0x000104685c44:
      uVar13 = (uint)bVar6;
      goto code_r0x0001046861b4;
    }
    uVar15 = *(undefined8 *)((long)unaff_x20 + (long)ppppppdVar20);
    uVar19 = *(undefined8 *)((long)pppppppdStack_68 + (long)ppppppdVar20);
    _objc_release();
    if (cVar2 != '\x01') {
      bVar6 = (int)uVar15 == (int)uVar19;
code_r0x000104685e38:
      uVar13 = (uint)bVar6;
      goto code_r0x0001046861b4;
    }
    goto LAB_1046861b0;
  case 0xb:
    pppppppdVar12 = (double *******)((long)unaff_x20 + (long)_DAT_11308c1b8);
    uVar14 = (uint)*(byte *)(pppppppdVar12 + 1);
    ppppppdVar20 = _DAT_11308c1b8;
  case 0x6c:
    ppppppdVar20 = (double ******)((long)pppppppdStack_68 + (long)ppppppdVar20);
    uVar13 = (uint)*(byte *)(ppppppdVar20 + 1);
code_r0x000104685cec:
    if (uVar14 != 1) {
      if ((uVar13 != 1) && ((int)*pppppppdVar12 == (int)*ppppppdVar20)) goto code_r0x000104685fac;
      goto LAB_1046861ac;
    }
    if (uVar13 != 1) goto LAB_1046861ac;
code_r0x000104685fac:
    bVar3 = *(byte *)((long)pppppppdStack_68 + _DAT_11308c1c0);
    if (*(byte *)((long)unaff_x20 + _DAT_11308c1c0) != 2) {
      if ((bVar3 != 2) && (((*(byte *)((long)unaff_x20 + _DAT_11308c1c0) ^ bVar3) & 1) == 0))
      goto code_r0x000104686094;
      goto LAB_1046861ac;
    }
    if (bVar3 != 2) goto LAB_1046861ac;
code_r0x000104686094:
    puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_11308c1c8);
    pppppppdVar17 = (double *******)puVar1[1];
    unaff_x20 = (double *******)((undefined8 *)((long)pppppppdStack_68 + _DAT_11308c1c8))[1];
    if (pppppppdVar17 == (double *******)0x0) goto code_r0x0001046860d0;
    uVar13 = 0;
    if (unaff_x20 == (double *******)0x0) goto code_r0x000104685f40;
    pppppppdVar16 = (double *******)*puVar1;
    if ((pppppppdVar16 != *(double ********)((long)pppppppdStack_68 + _DAT_11308c1c8)) ||
       (pppppppdVar17 != unaff_x20)) goto code_r0x000104685d5c;
    goto code_r0x000104685c04;
  case 0xc:
    ppppppdVar20 = _DAT_11308c1d0;
  case 0x80:
    pppppppdVar12 = (double *******)((long)unaff_x20 + (long)ppppppdVar20);
    uVar14 = (uint)*(byte *)(pppppppdVar12 + 1);
code_r0x000104685d8c:
    ppppppdVar20 = (double ******)((long)pppppppdStack_68 + (long)ppppppdVar20);
code_r0x000104685d90:
    uVar13 = (uint)*(byte *)(ppppppdVar20 + 1);
code_r0x000104685d94:
    bVar6 = uVar14 == 1;
code_r0x000104685d98:
    if (!bVar6) {
      if (uVar13 != 1) {
        pppppppdVar12 = (double *******)*pppppppdVar12;
code_r0x000104685fdc:
        if ((int)pppppppdVar12 == (int)*ppppppdVar20) goto code_r0x000104685fe8;
      }
      goto LAB_1046861ac;
    }
code_r0x000104685d9c:
    bVar6 = uVar13 == 1;
code_r0x000104685da0:
    if (!bVar6) goto LAB_1046861ac;
code_r0x000104685fe8:
    pppppppdVar12 = (double *******)((long)unaff_x20 + (long)_DAT_11308c1d8);
    ppppppdVar20 = _DAT_11308c1d8;
code_r0x000104685ff4:
    cVar2 = *(char *)((double *)((long)pppppppdStack_68 + (long)ppppppdVar20) + 1);
    if (*(char *)(pppppppdVar12 + 1) != '\x01') {
      if ((cVar2 != '\x01') &&
         ((double)*pppppppdVar12 == *(double *)((long)pppppppdStack_68 + (long)ppppppdVar20)))
      goto code_r0x00010468610c;
      goto LAB_1046861ac;
    }
    if (cVar2 != '\x01') goto LAB_1046861ac;
code_r0x00010468610c:
    bVar3 = *(byte *)((long)pppppppdStack_68 + _DAT_11308c1e0);
    pppppppdVar12 = _DAT_11308c1e8;
    if (*(byte *)((long)unaff_x20 + _DAT_11308c1e0) != 2) {
      if (bVar3 != 2) {
        bVar3 = *(byte *)((long)unaff_x20 + _DAT_11308c1e0) ^ bVar3;
joined_r0x000104686194:
        if ((bVar3 & 1) == 0) goto code_r0x000104685f60;
      }
      goto LAB_1046861ac;
    }
joined_r0x000104686128:
    if (bVar3 != 2) goto LAB_1046861ac;
    goto code_r0x000104685f60;
  case 0xd:
  case 0x37:
  case 0x3c:
  case 0x57:
  case 0x5c:
  case 99:
    puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_11308c1f0);
    unaff_x20 = (double *******)*puVar1;
    unaff_w22 = (uint)*(byte *)(puVar1 + 1);
    pppppppdVar17 = *(double ********)((long)pppppppdStack_68 + _DAT_11308c1f0);
    param_1 = (double *******)
              (ulong)*(byte *)((undefined8 *)((long)pppppppdStack_68 + _DAT_11308c1f0) + 1);
  case 0x68:
    _objc_release();
    if (unaff_w22 == 1) {
      unaff_x20 = (double *******)(ulong)((int)param_1 == 1);
code_r0x000104685e1c:
      uVar13 = (uint)unaff_x20;
    }
    else {
      uVar13 = (uint)((int)param_1 != 1 && unaff_x20 == pppppppdVar17);
    }
    goto code_r0x0001046861b4;
  case 0x14:
    pppppppdVar12 = _DAT_11308c1f8;
  case 0x30:
  case 0x50:
    pppppppdVar17 = *(double ********)((long)unaff_x20 + (long)pppppppdVar12);
code_r0x000104685d0c:
    if (pppppppdVar17 != (double *******)0x0) {
      unaff_x20 = *(double ********)((long)pppppppdStack_68 + (long)pppppppdVar12);
      param_1 = pppppppdStack_68;
code_r0x000104685d18:
      if (unaff_x20 == (double *******)0x0) {
        uVar15 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
      }
      else {
        uVar15 = 0;
        FUN_104693c20();
      }
      pppppppdStack_60 = unaff_x20;
      lStack_48 = uVar15;
      _objc_retain(unaff_x20);
      pppppppdVar17 = (double *******)&pppppppdStack_60;
      FUN_1046929e0(pppppppdVar17);
      uVar13 = (uint)pppppppdVar17;
      _objc_release(param_1);
      func_0x00010006e7f4(&pppppppdStack_60);
      goto code_r0x0001046861b4;
    }
    unaff_x23 = *(double ********)((long)pppppppdStack_68 + (long)pppppppdVar12);
    pppppppdVar17 = unaff_x23;
    _objc_retain(unaff_x23);
    _objc_release(pppppppdStack_68);
    pppppppdStack_68 = pppppppdVar17;
    goto joined_r0x000104686040;
  case 0x18:
  case 0x40:
  case 0x61:
    goto code_r0x000104685d8c;
  case 0x19:
  case 0x21:
  case 0x23:
  case 0x6b:
  case 0x7f:
  case 0x93:
  case 0xa7:
  case 0xaf:
  case 0xb7:
  case 0xcb:
  case 0xdf:
  case 0xe7:
  case 0xef:
  case 0xf7:
    goto code_r0x000104685c0c;
  case 0x1a:
  case 0xe1:
    goto code_r0x000104685e1c;
  case 0x1b:
  case 0x1d:
  case 0x25:
  case 0x29:
  case 0x78:
  case 0x86:
  case 0xbe:
  case 0xfe:
    goto code_r0x000104685c08;
  case 0x1c:
    goto code_r0x000104685e38;
  case 0x1e:
    goto code_r0x000104685f24;
  case 0x20:
    goto code_r0x000104685da0;
  case 0x22:
    goto code_r0x000104685f14;
  case 0x24:
  case 0x83:
  case 0xb3:
  case 0xbb:
  case 0xeb:
  case 0xf3:
  case 0xfb:
    goto code_r0x000104685fdc;
  case 0x26:
    goto code_r0x000104685d0c;
  case 0x27:
  case 0x2b:
  case 0x76:
  case 0x9e:
  case 0xa0:
  case 0xd6:
    goto LAB_104685c10;
  case 0x2a:
    goto code_r0x000104685c9c;
  case 0x2c:
    goto code_r0x000104685d70;
  case 0x31:
  case 0x51:
    goto code_r0x000104685d94;
  case 0x34:
  case 0x54:
    goto code_r0x000104685d9c;
  case 0x35:
  case 0x3a:
  case 0x3e:
  case 0x55:
  case 0x5a:
  case 0x5e:
  case 0x65:
    goto code_r0x000104685d98;
  case 0x36:
  case 0x38:
  case 0x42:
  case 0x56:
  case 0x58:
    goto code_r0x000104685d90;
  case 0x39:
  case 0x59:
    goto code_r0x000104685db4;
  case 0x3b:
  case 0x5b:
  case 0x8c:
  case 0xf0:
    goto code_r0x000104685d54;
  case 0x3d:
  case 0x5d:
  case 100:
    goto code_r0x000104685dc4;
  case 0x3f:
    goto code_r0x000104685d40;
  case 0x41:
    goto code_r0x000104685dac;
  case 0x5f:
    goto code_r0x000104685d50;
  case 0x60:
  case 0x7c:
    goto code_r0x000104685dd8;
  case 0x62:
  case 0xf8:
    goto code_r0x000104685dd4;
  case 0x69:
  case 0x7d:
  case 0x8f:
  case 0x91:
  case 0xa5:
  case 0xad:
  case 0xb5:
  case 199:
  case 0xc9:
  case 0xdd:
  case 0xe5:
  case 0xed:
  case 0xf5:
    goto code_r0x000104685c18;
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0xa6:
  case 0xae:
  case 0xb6:
  case 0xca:
  case 0xde:
  case 0xe6:
  case 0xee:
  case 0xf6:
    goto code_r0x000104685ea0;
  case 0x6e:
  case 0x96:
  case 0xce:
    goto code_r0x000104685ec0;
  case 0x81:
  case 0xb9:
    goto code_r0x000104685c24;
  case 0x82:
  case 0xb2:
  case 0xba:
  case 0xea:
  case 0xf2:
  case 0xfa:
    goto code_r0x000104685e5c;
  case 0x8e:
  case 0xc6:
    goto code_r0x000104685e54;
  case 0x94:
    goto code_r0x000104685c44;
  case 0xa4:
  case 0xac:
  case 0xb4:
    goto code_r0x000104685d78;
  case 0xa8:
    goto code_r0x000104685f80;
  case 0xa9:
    goto code_r0x000104685cec;
  case 0xaa:
    goto code_r0x000104685ec4;
  case 0xb0:
    goto code_r0x000104685ff4;
  case 0xb8:
    goto code_r0x000104685c74;
  case 0xc4:
    goto code_r0x000104685e74;
  case 200:
    goto code_r0x000104685d48;
  case 0xcc:
    goto code_r0x000104685f64;
  case 0xcd:
    goto code_r0x000104685c80;
  case 0xd8:
    goto code_r0x000104685c14;
  case 0xdc:
  case 0xe4:
  case 0xec:
  case 0xf4:
    goto code_r0x000104685d18;
  case 0xe2:
    goto code_r0x000104685f3c;
  }
}



/* Entry: 104686210; end: 1046862e3;  */

void FUN_104686210(void)

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



/* Entry: 1046862e4; end: 104686303;  */

void FUN_1046862e4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104686304; end: 10468633b; -[SCAdLifecycleType description] */

void FUN_104686304(void)

{
  undefined1 auStack_88 [120];
  
  _objc_retain();
  func_0x000104689308(auStack_88);
  FUN_10468a048(auStack_88);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468633c; end: 104686383; -[SCAdLifecycleType init] */

void FUN_10468633c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdLifecycleTypeWrapper.swift",0x35,2,0xdc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104686384);
  (*pcVar1)();
}



/* Entry: 104686384; end: 1046863b7; -[SCAdLifecycleType hash] */

undefined8 FUN_104686384(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104685604();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046863b8; end: 104686437; -[SCAdLifecycleType isEqual:] */

uint FUN_1046863b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104685b6c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104686438; end: 10468643b; -[SCAdLifecycleType copyWithZone:] */

void FUN_104686438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468643c; end: 104686453; +[SCAdLifecycleType topSnapPresent] */

void FUN_10468643c(void)

{
  func_0x00010468b124(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104686454; end: 10468646b; +[SCAdLifecycleType topSnapDidDisappearWithIsExitAd:] */

void FUN_104686454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10468a08c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468646c; end: 10468646f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468646c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_10468b45c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11308c150) = 2;
  *(undefined1 *)(lVar5 + _DAT_11308c158) = 2;
  plVar1 = (long *)(lVar5 + _DAT_11308c160);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_11308c168) = param_2;
  *(undefined8 *)(lVar5 + _DAT_11308c170) = param_3;
  *(undefined1 *)(lVar5 + _DAT_11308c178) = param_4;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c180);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11308c188) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c190);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_11308c198) = 2;
  *(undefined1 *)(lVar5 + _DAT_11308c1a0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11308c1a8) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c1b0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c1b8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c1c0) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c1c8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c1d0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c1d8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c1e0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11308c1e8) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308c1f0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11308c1f8) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 104686470; end: 1046864eb; +[SCAdLifecycleType attachmentTriggerWithAttachmentTriggerType:collectionItemIndex:touchPoint:attachmentPeeked:] */

void FUN_104686470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  FUN_10468a220(param_3,param_4,param_5,param_6);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046864ec; end: 1046864ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046864ec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_10468b45c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11308c150) = 3;
  *(undefined1 *)(lVar5 + _DAT_11308c158) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c160);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11308c168) = 0;
  *(undefined8 *)(lVar5 + _DAT_11308c170) = 0;
  *(undefined1 *)(lVar5 + _DAT_11308c178) = 2;
  plVar2 = (long *)(lVar5 + _DAT_11308c180);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_11308c188) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c190);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_11308c198) = 2;
  *(undefined1 *)(lVar5 + _DAT_11308c1a0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11308c1a8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c1b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c1b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c1c0) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c1c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c1d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c1d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11308c1e0) = 2;
  *(undefined1 *)(lVar5 + _DAT_11308c1e8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308c1f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11308c1f8) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1046864f0; end: 10468653f; +[SCAdLifecycleType attachmentDidTriggerWithAttachmentTriggerType:collectionItemIndex:] */

void FUN_1046864f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  FUN_10468a3e4(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104686540; end: 10468658b; +[SCAdLifecycleType attachmentTriggerFailWithError:] */

void FUN_104686540(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  func_0x00010468a594();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10468658c; end: 1046865a3;  */

void FUN_10468658c(void)

{
  func_0x00010468b124(5);
  return;
}



/* Entry: 1046865a4; end: 1046865d3; +[SCAdLifecycleType attachmentWillAppear] */

void FUN_1046865a4(void)

{
  func_0x00010468b124(5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046865d4; end: 104686603; +[SCAdLifecycleType attachmentDidAppear] */

void FUN_1046865d4(void)

{
  func_0x00010468b124(6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104686604; end: 10468661b; +[SCAdLifecycleType attachmentDismiss] */

void FUN_104686604(void)

{
  func_0x00010468b124(7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468661c; end: 104686633; +[SCAdLifecycleType backgroundOnAttachment:] */

void FUN_10468661c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10468a744(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104686634; end: 10468664f; +[SCAdLifecycleType foregroundOnAttachment:isExternal:] */

void FUN_104686634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10468a8dc(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104686650; end: 104686667; +[SCAdLifecycleType webviewWithEventType:] */

void FUN_104686650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10468aa80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104686668; end: 1046866cf; +[SCAdLifecycleType deeplinkWithEventType:customProductPageEnabled:url:] */

void FUN_104686668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_10468ac18(param_3,param_4,param_5,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046866d0; end: 1046866ef; +[SCAdLifecycleType appInstallWithEventType:visibleLoadTimeSec:pageLoadedOnExit:pageLoadedOnEntry:] */

void FUN_1046866d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10468add8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046866f0; end: 104686707; +[SCAdLifecycleType focusItemChangedWithItemIndex:] */

void FUN_1046866f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10468af8c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


