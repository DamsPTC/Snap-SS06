/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104809560; end: 10480957f;  */

void FUN_104809560(void)

{
  _objc_opt_self(&PTR_PTR_1129d81e0);
  return;
}



/* Entry: 104809580; end: 10480961b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104809580(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090788) = param_1;
  if (param_3 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_113090790) = puVar1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480961c; end: 1048096bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480961c(void)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113090788) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_113090788);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  lVar1 = *(long *)(unaff_x20 + _DAT_113090790);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_68);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048096bc; end: 1048097fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048096bc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
    return 0;
  }
  plVar1 = &lStack_78;
  _swift_dynamicCast(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
  if (((ulong)plVar1 & 1) == 0) {
    return 0;
  }
  dVar7 = *(double *)(unaff_x20 + _DAT_113090788);
  dVar8 = *(double *)(lStack_78 + _DAT_113090788);
  lVar6 = *(long *)(unaff_x20 + _DAT_113090790);
  lVar5 = *(long *)(lStack_78 + _DAT_113090790);
  if (lVar6 == 0) {
    lVar3 = lVar5;
    _objc_retain(lVar5);
    _objc_release(lStack_78);
    if (lVar5 == 0) {
      uVar4 = 1;
      goto LAB_1048097cc;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = lStack_78;
    if (lVar5 != 0) {
      func_0x0001002ed07c(0);
      _objc_retain(lVar5);
      _objc_retain(lVar6);
      lVar2 = lVar6;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      uVar4 = (uint)lVar2;
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
  }
  _objc_release(lVar3);
LAB_1048097cc:
  return dVar7 == dVar8 & uVar4;
}



/* Entry: 1048097fc; end: 10480980b; -[SCTapTooltipConfig enableDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048097fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090788);
}



/* Entry: 10480980c; end: 10480981b; -[SCTapTooltipConfig forceDisplayDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480980c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090790));
  return;
}



/* Entry: 10480981c; end: 10480987f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480981c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090788) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090790) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104809880; end: 1048098ef; -[SCTapTooltipConfig initWithEnableDelay:forceDisplayDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104809880(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113090788) = param_1;
  *(undefined8 *)(param_2 + _DAT_113090790) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_2;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1048098f0; end: 104809923; -[SCTapTooltipConfig hash] */

undefined8 FUN_1048098f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10480961c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104809924; end: 1048099a3; -[SCTapTooltipConfig isEqual:] */

uint FUN_104809924(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048096bc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048099a4; end: 1048099a7; -[SCTapTooltipConfig copyWithZone:] */

void FUN_1048099a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048099a8; end: 104809a83; -[SCTapTooltipConfig encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048099a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090788);
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x445f454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f454c42414e45,0xec00000059414c45);
  func_0x00010bf92e80(uVar2,param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20fcd0);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104809a84; end: 104809ac3;  */

undefined8 FUN_104809a84(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104809bb8(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104809ac4; end: 104809aff; -[SCTapTooltipConfig initWithCoder:] */

undefined8 FUN_104809ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104809bb8();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104809b00; end: 104809b2b; -[SCTapTooltipConfig description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104809b00(long param_1)

{
  func_0x00010bf885a0(*(undefined8 *)(param_1 + _DAT_113090790));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104809b2c; end: 104809ba7; -[SCTapTooltipConfig init] */

void FUN_104809b2c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdTapTooltipConfigWrapper.swift",
             0x2b,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104809b74);
  (*pcVar1)();
}



/* Entry: 104809ba8; end: 104809bb7; -[SCTapTooltipConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104809ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113090790));
  return;
}



/* Entry: 104809bb8; end: 104809cff;  */

undefined8 FUN_104809bb8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0x445f454c42414e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f454c42414e45,0xec00000059414c45);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20fcd0);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_2);
    _swift_unknownObjectRelease(param_2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_88;
    _swift_dynamicCast(puVar2,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_88;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010c00f7c0(param_1);
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 104809d00; end: 104809d1f;  */

void FUN_104809d00(void)

{
  _objc_opt_self(&PTR_PTR_1129d82c8);
  return;
}



/* Entry: 104809d20; end: 104809d5f;  */

undefined8 FUN_104809d20(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10480b2f0(param_1);
  func_0x0001017b656c(param_1);
  return uVar1;
}



/* Entry: 104809d60; end: 104809eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104809d60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130907c0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130907c8));
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_1130907d0))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130907d0);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130907d8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130907e0));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130907e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130907e8))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130907f0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130907f8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090800));
  if (((undefined8 *)(unaff_x20 + _DAT_113090808))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090808);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090810));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104809f00; end: 10480a24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104809f00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long unaff_x20;
  uint uVar27;
  uint uVar28;
  uint uStack_a4;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar25 = unaff_x20;
  _swift_getObjectType();
  FUN_10480b588(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar19 = &lStack_88;
    _swift_dynamicCast(plVar19,auStack_80,PTR___sypN_11034f1a8 + 8,lVar25,6);
    if (((ulong)plVar19 & 1) != 0) {
      lVar26 = *(long *)(unaff_x20 + _DAT_1130907c0);
      lVar25 = *(long *)(lStack_88 + _DAT_1130907c0);
      iVar5 = *(int *)(unaff_x20 + _DAT_1130907c8);
      iVar6 = *(int *)(lStack_88 + _DAT_1130907c8);
      uVar1 = *(undefined8 *)(lStack_88 + _DAT_1130907d0);
      uVar3 = ((undefined8 *)(lStack_88 + _DAT_1130907d0))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130907d0);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_1130907d0))[1];
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar3 >> 0x3c) goto LAB_10480a040;
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        uVar20 = uVar2;
        func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
        uStack_a4 = (uint)uVar20;
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar2,uVar4);
      }
      else if (uVar3 >> 0x3c < 0xf) {
LAB_10480a040:
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        func_0x0001000b44c0(uVar2,uVar4);
        func_0x0001000b44c0(uVar1,uVar3);
        uStack_a4 = 0;
      }
      else {
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        func_0x0001000b44c0(uVar2,uVar4);
        uStack_a4 = 1;
      }
      bVar7 = *(byte *)(unaff_x20 + _DAT_1130907d8);
      bVar8 = *(byte *)(lStack_88 + _DAT_1130907d8);
      bVar9 = *(byte *)(unaff_x20 + _DAT_1130907e0);
      bVar10 = *(byte *)(lStack_88 + _DAT_1130907e0);
      lVar22 = *(long *)(unaff_x20 + _DAT_1130907e8);
      if ((lVar22 == *(long *)(lStack_88 + _DAT_1130907e8)) &&
         (((long *)(unaff_x20 + _DAT_1130907e8))[1] == ((long *)(lStack_88 + _DAT_1130907e8))[1])) {
        uVar28 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar28 = (uint)lVar22 ^ 1;
      }
      bVar11 = *(byte *)(unaff_x20 + _DAT_1130907f0);
      bVar12 = *(byte *)(lStack_88 + _DAT_1130907f0);
      bVar13 = *(byte *)(unaff_x20 + _DAT_1130907f8);
      bVar14 = *(byte *)(lStack_88 + _DAT_1130907f8);
      bVar15 = *(byte *)(unaff_x20 + _DAT_113090800);
      bVar16 = *(byte *)(lStack_88 + _DAT_113090800);
      lVar22 = ((long *)(unaff_x20 + _DAT_113090808))[1];
      lVar23 = ((long *)(lStack_88 + _DAT_113090808))[1];
      uVar27 = (uint)(lVar22 == 0 && lVar23 == 0);
      if ((lVar22 != 0) && (lVar23 != 0)) {
        lVar21 = *(long *)(unaff_x20 + _DAT_113090808);
        if ((lVar21 == *(long *)(lStack_88 + _DAT_113090808)) && (lVar22 == lVar23)) {
          uVar27 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar27 = (uint)lVar21;
        }
      }
      bVar17 = *(byte *)(unaff_x20 + _DAT_113090810);
      bVar18 = *(byte *)(lStack_88 + _DAT_113090810);
      _objc_release(lStack_88);
      uVar24 = 0;
      if (((((((uint)(bVar7 ^ bVar8) | (lVar26 == lVar25 && iVar5 == iVar6) & uStack_a4 ^ 0xffffffff
              | bVar9 ^ bVar10 | uVar28) & 1) == 0) && (((bVar11 ^ bVar12) & 1) == 0)) &&
          (((bVar13 ^ bVar14) & 1) == 0)) && (((bVar15 ^ bVar16) & 1) == 0)) {
        uVar24 = uVar27 & ((bVar17 ^ bVar18) ^ 1);
      }
      goto LAB_10480a010;
    }
  }
  uVar24 = 0;
LAB_10480a010:
  return uVar24 & 1;
}



/* Entry: 10480a24c; end: 10480a25b; -[SCAdMediaARExperience unlockableId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10480a24c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130907c0);
}



/* Entry: 10480a25c; end: 10480a26b; -[SCAdMediaARExperience activationCameraPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10480a25c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130907c8);
}



/* Entry: 10480a26c; end: 10480a2df; -[SCAdMediaARExperience showcaseResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480a26c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130907d0))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130907d0);
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



/* Entry: 10480a2e0; end: 10480a2ef; -[SCAdMediaARExperience shouldMatchPrimaryCTAStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480a2e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130907d8);
}



/* Entry: 10480a2f0; end: 10480a2ff; -[SCAdMediaARExperience isShoppingLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480a2f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130907e0);
}



/* Entry: 10480a300; end: 10480a34b; -[SCAdMediaARExperience topSnapCTATitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480a300(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130907e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130907e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10480a34c; end: 10480a35b; -[SCAdMediaARExperience isWebNorthstarUiSingleProductOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480a34c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130907f0);
}



/* Entry: 10480a35c; end: 10480a36b; -[SCAdMediaARExperience shouldHideProductCardInArExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480a35c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130907f8);
}



/* Entry: 10480a36c; end: 10480a37b; -[SCAdMediaARExperience shouldEnableTryOnButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480a36c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090800);
}



/* Entry: 10480a37c; end: 10480a3d7; -[SCAdMediaARExperience ctaButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480a37c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090808))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090808);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10480a3d8; end: 10480a3e7; -[SCAdMediaARExperience isArEndCardExist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480a3d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090810);
}



/* Entry: 10480a3e8; end: 10480a66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480a3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130907c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130907c8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130907d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_1130907d8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130907e0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130907e8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_1130907f0) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_1130907f8) = param_9._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113090800) = param_9._2_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090808);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_113090810) = param_13;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480a670; end: 10480a7a7; -[SCAdMediaARExperience initWithUnlockableId:activationCameraPosition:showcaseResponse:shouldMatchPrimaryCTAStyle:isShoppingLens:topSnapCTATitle:isWebNorthstarUiSingleProductOnly:shouldHideProductCardInArExperience:shouldEnableTryOnButton:ctaButtonTitle:isArEndCardExist:] */

void FUN_10480a670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_90;
  
  if (param_5 == 0) {
    _objc_retain(param_8);
    _objc_retain(param_11);
    lStack_90 = 0;
    uVar4 = 0xf000000000000000;
    uVar3 = param_2;
  }
  else {
    _objc_retain(param_8);
    _objc_retain(param_11);
    lVar1 = param_5;
    _objc_retain(param_5);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    uVar3 = param_2;
    _objc_release(lVar1);
    uVar4 = param_2;
    lStack_90 = param_5;
  }
  uVar2 = param_8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  _objc_release(param_8);
  if (param_11 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_11);
  }
  func_0x00010480a52c(param_3,param_4,lStack_90,uVar4,param_6,param_7,uVar2,uVar3,param_9);
  return;
}



/* Entry: 10480a7a8; end: 10480a7db; -[SCAdMediaARExperience hash] */

undefined8 FUN_10480a7a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104809d60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10480a7dc; end: 10480a85b; -[SCAdMediaARExperience isEqual:] */

uint FUN_10480a7dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104809f00(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10480a85c; end: 10480a85f; -[SCAdMediaARExperience copyWithZone:] */

void FUN_10480a85c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10480a860; end: 10480abcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480a860(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x42414b434f4c4e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x42414b434f4c4e55,0xed000044495f454c);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20fd20);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_1130907d0))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130907d0);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20fd40);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f20fd60);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20fd80);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130907e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130907e8))[1]);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20fda0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000027;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f20fdc0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f20fdf0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20fe20);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090808))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090808);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20fe40);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20fe60);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10480abcc; end: 10480ac1b; -[SCAdMediaARExperience encodeWithCoder:] */

void FUN_10480abcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10480a860(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10480ac1c; end: 10480ac4b;  */

void FUN_10480ac1c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480ac4c(param_1);
  return;
}



/* Entry: 10480ac4c; end: 10480b1c3;  */

undefined8 FUN_10480ac4c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_100;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar3 = 0x42414b434f4c4e55;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x42414b434f4c4e55,0xed000044495f454c);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar3);
  uVar3 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20fd20);
  lVar4 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar3);
  if (lVar4 + 1U < 3) {
    uVar3 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20fd40);
    lVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar4 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    puVar1 = PTR___sypN_11034f1a8;
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      uVar3 = 0;
      uVar8 = 0xf000000000000000;
    }
    else {
      puVar5 = &uStack_c0;
      _swift_dynamicCast(puVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,
                         PTR___s10Foundation4DataVN_110350ae0,6);
      uVar3 = uStack_c0;
      uVar8 = uStack_b8;
      if ((int)puVar5 == 0) {
        uVar3 = 0;
        uVar8 = 0xf000000000000000;
      }
    }
    uVar6 = 0xd00000000000001d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f20fd60);
    func_0x00010bf66ce0();
    _objc_release(uVar6);
    uVar6 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20fd80);
    func_0x00010bf66ce0();
    _objc_release(uVar6);
    uVar6 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20fda0);
    lVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar4 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      _objc_release(param_1);
      func_0x0001000b44c0(uVar3,uVar8);
      func_0x00010006e7f4(&uStack_90);
    }
    else {
      puVar5 = &uStack_c0;
      _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar2 = uStack_b8;
      uVar6 = uStack_c0;
      if (((ulong)puVar5 & 1) != 0) {
        uVar7 = 0xd000000000000027;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f20fdc0)
        ;
        func_0x00010bf66ce0();
        _objc_release(uVar7);
        uVar7 = 0xd000000000000029;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f20fdf0)
        ;
        func_0x00010bf66ce0();
        _objc_release(uVar7);
        uVar7 = 0xd00000000000001b;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20fe20)
        ;
        func_0x00010bf66ce0();
        _objc_release(uVar7);
        uVar7 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20fe40)
        ;
        lVar4 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (lVar4 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010006e7f4(&uStack_90);
          uStack_100 = 0;
          uVar9 = 0;
        }
        else {
          puVar5 = &uStack_c0;
          _swift_dynamicCast(puVar5,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
          uVar9 = uStack_b8;
          uStack_100 = uStack_c0;
          if ((int)puVar5 == 0) {
            uStack_100 = 0;
            uVar9 = 0;
          }
        }
        uVar7 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20fe60)
        ;
        func_0x00010bf66ce0();
        _objc_release(uVar7);
        if (uVar8 >> 0x3c < 0xf) {
          func_0x00010006c00c(uVar3,uVar8);
          uVar7 = uVar3;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar8);
          func_0x0001000b44c0(uVar3,uVar8);
        }
        else {
          uVar7 = 0;
        }
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        if (uVar9 == 0) {
          uStack_100 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_100,uVar9);
          _swift_bridgeObjectRelease(uVar9);
        }
        func_0x00010c0591a0();
        func_0x0001000b44c0(uVar3,uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uStack_100);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      func_0x0001000b44c0(uVar3,uVar8);
    }
  }
  else {
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10480b1c4; end: 10480b1eb; -[SCAdMediaARExperience initWithCoder:] */

void FUN_10480b1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10480ac4c();
  return;
}



/* Entry: 10480b1ec; end: 10480b21f; -[SCAdMediaARExperience description] */

void FUN_10480b1ec(void)

{
  undefined1 auStack_68 [88];
  
  FUN_10480b43c(auStack_68);
  func_0x0001017b656c(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10480b220; end: 10480b29b; -[SCAdMediaARExperience init] */

void FUN_10480b220(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaARExperienceWrapper.swift"
             ,0x2c,2,0xad,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10480b268);
  (*pcVar1)();
}



/* Entry: 10480b29c; end: 10480b2ef; -[SCAdMediaARExperience .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b29c(long param_1)

{
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_1130907d0),
                      ((undefined8 *)(param_1 + _DAT_1130907d0))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130907e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090808 + 8))
  ;
  return;
}



/* Entry: 10480b2f0; end: 10480b43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b2f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_1130907c0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130907c8) = uVar2;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130907d0);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined1 *)(unaff_x20 + _DAT_1130907d8) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(unaff_x20 + _DAT_1130907e0) = *(undefined1 *)((long)param_1 + 0x21);
  uVar2 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130907e8);
  puVar1[1] = param_1[6];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_1130907f0) = *(undefined1 *)(param_1 + 7);
  uStack_48 = param_1[6];
  uStack_50 = param_1[5];
  *(undefined1 *)(unaff_x20 + _DAT_1130907f8) = *(undefined1 *)((long)param_1 + 0x39);
  *(undefined1 *)(unaff_x20 + _DAT_113090800) = *(undefined1 *)((long)param_1 + 0x3a);
  uVar2 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090808);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  *(undefined1 *)(unaff_x20 + _DAT_113090810) = *(undefined1 *)(param_1 + 10);
  FUN_10480b588(&uStack_40,auStack_70,0x112d56fe0,&UNK_10d91dda0);
  func_0x000100402194(&uStack_50,auStack_70);
  FUN_10480b588(&uStack_60,auStack_70,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480b43c; end: 10480b567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b43c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar14 = *(undefined8 *)(param_2 + _DAT_1130907c0);
  uVar13 = *(undefined8 *)(param_2 + _DAT_1130907c8);
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130907d0);
  uVar4 = ((undefined8 *)(param_2 + _DAT_1130907d0))[1];
  uVar7 = *(undefined1 *)(param_2 + _DAT_1130907d8);
  uVar8 = *(undefined1 *)(param_2 + _DAT_1130907e0);
  uVar9 = *(undefined1 *)(param_2 + _DAT_1130907f0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130907e8);
  uVar5 = ((undefined8 *)(param_2 + _DAT_1130907e8))[1];
  uVar10 = *(undefined1 *)(param_2 + _DAT_1130907f8);
  uVar11 = *(undefined1 *)(param_2 + _DAT_113090800);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113090808);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113090808))[1];
  uVar12 = *(undefined1 *)(param_2 + _DAT_113090810);
  func_0x000100de78a0(uVar1,uVar4);
  *param_1 = uVar14;
  param_1[1] = uVar13;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar7;
  *(undefined1 *)((long)param_1 + 0x21) = uVar8;
  param_1[5] = uVar2;
  param_1[6] = uVar5;
  *(undefined1 *)(param_1 + 7) = uVar9;
  *(undefined1 *)((long)param_1 + 0x39) = uVar10;
  *(undefined1 *)((long)param_1 + 0x3a) = uVar11;
  param_1[8] = uVar3;
  param_1[9] = uVar6;
  *(undefined1 *)(param_1 + 10) = uVar12;
  _swift_bridgeObjectRetain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar6);
  return;
}



/* Entry: 10480b568; end: 10480b587;  */

void FUN_10480b568(void)

{
  _objc_opt_self(&PTR_PTR_1129d83a0);
  return;
}



/* Entry: 10480b588; end: 10480b5cf;  */

undefined8 FUN_10480b588(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10480b5d0; end: 10480b61b; -[SCArExperienceSticker ctaText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b5d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090840);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090840))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10480b61c; end: 10480b62b; -[SCArExperienceSticker isLightBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10480b61c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090848);
}



/* Entry: 10480b62c; end: 10480b63b; -[SCArExperienceSticker showDelayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10480b62c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090850);
}



/* Entry: 10480b63c; end: 10480b64b; -[SCArExperienceSticker animationDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10480b63c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090858);
}



/* Entry: 10480b64c; end: 10480b65b; -[SCArExperienceSticker stickerCustomPlacement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090860));
  return;
}



/* Entry: 10480b65c; end: 10480b707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090840);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113090848) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113090850) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090858) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090860) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480b708; end: 10480b7c7; -[SCArExperienceSticker initWithCtaText:isLightBackground:showDelayMs:animationDurationMs:stickerCustomPlacement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b708(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_3;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_3 + _DAT_113090840);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  *(undefined1 *)(param_3 + _DAT_113090848) = param_6;
  *(undefined8 *)(param_3 + _DAT_113090850) = param_1;
  *(undefined8 *)(param_3 + _DAT_113090858) = param_2;
  *(undefined8 *)(param_3 + _DAT_113090860) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_3;
  lStack_58 = lVar3;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 10480b7c8; end: 10480b8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b7c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  byte abStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  byte bStack_37;
  
  _objc_allocWithZone();
  uVar3 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090840);
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_113090848) = *(undefined1 *)(param_1 + 2);
  uVar3 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113090850) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113090858) = uVar3;
  if (*(byte *)(param_1 + 5) == 2) {
    pbVar2 = (byte *)0x0;
  }
  else {
    uStack_40 = param_1[8];
    uStack_50 = param_1[6];
    abStack_58[0] = *(byte *)(param_1 + 5) & 1;
    uStack_48 = (undefined1)param_1[7];
    uStack_38 = (undefined1)*(undefined2 *)(param_1 + 9);
    bStack_37 = (byte)((ushort)*(undefined2 *)(param_1 + 9) >> 8) & 1;
    FUN_104809560(0);
    _objc_allocWithZone();
    pbVar2 = abStack_58;
    FUN_104808b34();
  }
  *(byte **)(unaff_x20 + _DAT_113090860) = pbVar2;
  _objc_msgSendSuper2(auStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480b8b8; end: 10480b8eb; -[SCArExperienceSticker hash] */

undefined8 FUN_10480b8b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10480b8ec();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10480b8ec; end: 10480b9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480b8ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090840);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090840))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090848));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113090850) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113090850);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113090858) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113090858);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (*(long *)(unaff_x20 + _DAT_113090860) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104808c48();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10480b9fc; end: 10480bbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10480b9fc(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_88;
  long alStack_80 [4];
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,alStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar6 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_113090840);
      if (lVar8 == *(long *)(lStack_88 + _DAT_113090840) &&
          ((long *)(unaff_x20 + _DAT_113090840))[1] == ((long *)(lStack_88 + _DAT_113090840))[1]) {
        uVar4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar4 = (uint)lVar8;
      }
      bVar2 = *(byte *)(unaff_x20 + _DAT_113090848);
      bVar3 = *(byte *)(lStack_88 + _DAT_113090848);
      dVar10 = *(double *)(unaff_x20 + _DAT_113090850);
      dVar11 = *(double *)(lStack_88 + _DAT_113090850);
      dVar12 = *(double *)(unaff_x20 + _DAT_113090858);
      dVar13 = *(double *)(lStack_88 + _DAT_113090858);
      if (*(long *)(unaff_x20 + _DAT_113090860) == 0) {
        lVar9 = *(long *)(lStack_88 + _DAT_113090860);
        lVar8 = lVar9;
        _objc_retain(lVar9);
        _objc_release(lStack_88);
        if (lVar9 == 0) {
          uVar5 = 1;
        }
        else {
          _objc_release(lVar8);
          uVar5 = 0;
        }
      }
      else {
        lVar8 = *(long *)(lStack_88 + _DAT_113090860);
        if (lVar8 == 0) {
          uVar7 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar7 = 0;
          FUN_104809560();
        }
        alStack_80[0] = lVar8;
        alStack_80[3] = uVar7;
        _objc_retain(lVar8);
        plVar6 = alStack_80;
        FUN_104808d3c(plVar6);
        uVar5 = (uint)plVar6;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      uVar1 = 0;
      if (dVar12 == dVar13) {
        uVar1 = uVar4 & ((bVar2 ^ bVar3) ^ 0xffffffff) & (uint)(dVar10 == dVar11);
      }
      return uVar1 & uVar5;
    }
  }
  return 0;
}



/* Entry: 10480bbac; end: 10480bc2b; -[SCArExperienceSticker isEqual:] */

uint FUN_10480bbac(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10480b9fc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10480bc2c; end: 10480bc2f; -[SCArExperienceSticker copyWithZone:] */

void FUN_10480bc2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10480bc30; end: 10480bdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480bc30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090840);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090840))[1]);
  uVar1 = 0x545845545f415443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545845545f415443,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20feb0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090850);
  uVar2 = 0x4c45445f574f4853;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c45445f574f4853,0xed0000534d5f5941);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090858);
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20fed0);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20fef0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10480bdcc; end: 10480be1b; -[SCArExperienceSticker encodeWithCoder:] */

void FUN_10480bdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10480bc30(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10480be1c; end: 10480be4b;  */

void FUN_10480be1c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480be4c(param_1);
  return;
}



/* Entry: 10480be4c; end: 10480c11f;  */

undefined8 FUN_10480be4c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = 0;
  iVar2 = (int)&uStack_b0;
  uVar3 = 0x545845545f415443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545845545f415443,0xe800000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar7 = uStack_90;
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar3 = uStack_b0;
    if ((uVar5 & 1) != 0) {
      uVar6 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20feb0);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar6);
      uVar6 = 0x4c45445f574f4853;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c45445f574f4853,0xed0000534d5f5941);
      func_0x00010bf66da0(param_1);
      uVar8 = uVar7;
      _objc_release(uVar6);
      uVar6 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20fed0);
      func_0x00010bf66da0(param_1);
      _objc_release(uVar6);
      uVar6 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20fef0);
      lVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (lVar4 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
        _swift_unknownObjectRelease(lVar4);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        FUN_104809560(0);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar6,6);
        uVar6 = uStack_b0;
        if (iVar2 == 0) {
          uVar6 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uStack_a8);
      _swift_bridgeObjectRelease(uStack_a8);
      func_0x00010c006d80(uVar7,uVar8);
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_release(uVar6);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10480c120; end: 10480c147; -[SCArExperienceSticker initWithCoder:] */

void FUN_10480c120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10480be4c();
  return;
}



/* Entry: 10480c148; end: 10480c193; -[SCArExperienceSticker description] */

void FUN_10480c148(undefined8 param_1)

{
  undefined1 auStack_70 [80];
  
  _objc_retain();
  FUN_10480c24c(auStack_70);
  _objc_release(param_1);
  FUN_10480c32c(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10480c194; end: 10480c20f; -[SCArExperienceSticker init] */

void FUN_10480c194(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/ArExperienceStickerWrapper.swift"
             ,0x2c,2,0x65,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10480c1dc);
  (*pcVar1)();
}



/* Entry: 10480c210; end: 10480c24b; -[SCArExperienceSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480c210(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090840 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113090860));
  return;
}



/* Entry: 10480c24c; end: 10480c32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480c24c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113090840);
  uVar2 = ((undefined8 *)(param_2 + _DAT_113090840))[1];
  uVar3 = *(undefined1 *)(param_2 + _DAT_113090848);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113090850);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113090858);
  lVar4 = *(long *)(param_2 + _DAT_113090860);
  if (lVar4 == 0) {
    _swift_bridgeObjectRetain(uVar2);
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 2;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    _objc_retain(lVar4);
    FUN_10480926c(&uStack_80);
    _objc_release(lVar4);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[6] = uStack_78;
  param_1[5] = uStack_80;
  param_1[8] = uStack_68;
  param_1[7] = uStack_70;
  *(undefined2 *)(param_1 + 9) = uStack_60;
  return;
}



/* Entry: 10480c32c; end: 10480c35f;  */

undefined8 FUN_10480c32c(undefined8 param_1)

{
  FUN_10474b500();
  return param_1;
}



/* Entry: 10480c360; end: 10480c37f;  */

void FUN_10480c360(void)

{
  _objc_opt_self(&PTR_PTR_1129d84c0);
  return;
}



/* Entry: 10480c380; end: 10480c41b; -[SCAdMediaSurvey questions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480c380(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090890);
  FUN_10480ded0(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10480c41c; end: 10480c487; -[SCAdMediaSurvey initWithQuestions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480c41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_10480ded0(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  *(undefined8 *)(param_1 + _DAT_113090890) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480c488; end: 10480c4b7;  */

void FUN_10480c488(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480c4b8(param_1);
  return;
}



/* Entry: 10480c4b8; end: 10480c7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480c4b8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _swift_getObjectType();
  uVar18 = *(ulong *)(param_1 + 0x10);
  if (uVar18 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001046c71b8(0,uVar18,0);
    uVar21 = 0;
    do {
      puVar20 = puStack_70;
      if (*(ulong *)(param_1 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10480c7cc);
        (*pcVar9)();
      }
      puVar1 = (undefined8 *)(param_1 + 0x20 + uVar21 * 0x20);
      uVar15 = *puVar1;
      uVar3 = puVar1[1];
      uVar16 = puVar1[2];
      lVar4 = puVar1[3];
      lVar10 = 0;
      FUN_10480ded0();
      lVar11 = lVar10;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar11 + _DAT_1130908c8);
      *puVar1 = uVar15;
      puVar1[1] = uVar3;
      *(undefined8 *)(lVar11 + _DAT_1130908d0) = uVar16;
      lVar22 = *(long *)(lVar4 + 0x10);
      if (lVar22 == 0) {
        _swift_bridgeObjectRetain(uVar3);
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_bridgeObjectRetain_n(uVar3,2);
        _swift_bridgeObjectRetain(lVar4);
        func_0x0001046c71ec(0,lVar22,0);
        puVar17 = puStack_78;
        lVar12 = 0;
        FUN_10480e858();
        puVar19 = (undefined1 *)(lVar4 + 0x32);
        do {
          uVar16 = *(undefined8 *)(puVar19 + -0x12);
          uVar15 = *(undefined8 *)(puVar19 + -10);
          uVar6 = puVar19[-2];
          uVar7 = puVar19[-1];
          uVar5 = *puVar19;
          lVar13 = lVar12;
          _objc_allocWithZone();
          puVar1 = (undefined8 *)(lVar13 + _DAT_113090910);
          *puVar1 = uVar16;
          puVar1[1] = uVar15;
          *(undefined1 *)(lVar13 + _DAT_113090918) = uVar6;
          *(undefined1 *)(lVar13 + _DAT_113090920) = uVar7;
          *(undefined1 *)(lVar13 + _DAT_113090928) = uVar5;
          puVar8 = PTR_s_init_1125d9248;
          lStack_88 = lVar13;
          lStack_80 = lVar12;
          _swift_bridgeObjectRetain(uVar15);
          plVar14 = &lStack_88;
          _objc_msgSendSuper2(plVar14,puVar8);
          uVar2 = *(ulong *)(puVar17 + 0x10);
          puStack_78 = puVar17;
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar2) {
            func_0x0001046c71ec(1 < *(ulong *)(puVar17 + 0x18),uVar2 + 1,1);
          }
          puVar17 = puStack_78;
          *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
          *(long **)(puStack_78 + uVar2 * 8 + 0x20) = plVar14;
          puVar19 = puVar19 + 0x18;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(uVar3);
      }
      *(undefined **)(lVar11 + _DAT_1130908d8) = puVar17;
      plVar14 = &lStack_98;
      lStack_98 = lVar11;
      lStack_90 = lVar10;
      _objc_msgSendSuper2(plVar14,PTR_s_init_1125d9248);
      uVar2 = *(ulong *)(puVar20 + 0x10);
      puStack_70 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
        func_0x0001046c71b8(1 < *(ulong *)(puVar20 + 0x18),uVar2 + 1,1);
      }
      puVar20 = puStack_70;
      uVar21 = uVar21 + 1;
      *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
      *(long **)(puStack_70 + uVar2 * 8 + 0x20) = plVar14;
    } while (uVar21 != uVar18);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_113090890) = puVar20;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480c7cc; end: 10480c99f; -[SCAdMediaSurvey hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10480c7cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090890);
  uVar1 = 0;
  FUN_10480ded0(0);
  _objc_retain(param_1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10480c9a0; end: 10480ca1f; -[SCAdMediaSurvey isEqual:] */

uint FUN_10480c9a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010480c8e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10480ca20; end: 10480ca23; -[SCAdMediaSurvey copyWithZone:] */

void FUN_10480ca20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10480ca24; end: 10480cad7; -[SCAdMediaSurvey encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480ca24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090890);
  uVar1 = 0;
  FUN_10480ded0(0);
  _objc_retain(param_3);
  _objc_retain(param_1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x4e4f495453455551;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495453455551,0xe900000000000053);
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10480cad8; end: 10480cb07;  */

void FUN_10480cad8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10480cb08(param_1);
  return;
}



/* Entry: 10480cb08; end: 10480cc67;  */

undefined8 FUN_10480cb08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  
  uVar1 = 0x4e4f495453455551;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f495453455551,0xe900000000000053);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0x113090898;
    func_0x0001000285a8(0x113090898,&UNK_10dd362b8);
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = 0;
      FUN_10480ded0(0);
      uVar1 = uStack_78;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_78,uVar4);
      _swift_bridgeObjectRelease(uStack_78);
      func_0x00010c03c5a0();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10480cc68; end: 10480cc8f; -[SCAdMediaSurvey initWithCoder:] */

void FUN_10480cc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10480cb08();
  return;
}



/* Entry: 10480cc90; end: 10480ccfb; -[SCAdMediaSurvey description] */

void FUN_10480cc90(undefined8 param_1)

{
  _objc_retain();
  FUN_10480cd88();
  _swift_bridgeObjectRelease();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10480ccfc; end: 10480cd77; -[SCAdMediaSurvey init] */

void FUN_10480ccfc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaSurveyWrapper.swift",0x26,
             2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10480cd44);
  (*pcVar1)();
}



/* Entry: 10480cd78; end: 10480cd87; -[SCAdMediaSurvey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480cd78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090890));
  return;
}



/* Entry: 10480cd88; end: 10480d0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10480cd88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar15 = *(ulong *)(param_1 + _DAT_113090890);
  if (uVar15 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar16 = uVar15;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    func_0x00010155299c(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10480d0b8);
      (*pcVar9)();
    }
    uVar19 = 0;
    puVar17 = puVar8;
    do {
      if ((uVar15 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar15 & 0xffffffffffffff8) + 0x10) <= (long)uVar19) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10480d09c);
          (*pcVar9)();
        }
        uVar10 = *(ulong *)(uVar15 + 0x20 + uVar19 * 8);
        _objc_retain();
      }
      else {
        uVar10 = uVar19;
        func_0x0001030b6a84(uVar19,uVar15);
      }
      uVar1 = *(undefined8 *)(uVar10 + _DAT_1130908c8);
      uVar3 = ((undefined8 *)(uVar10 + _DAT_1130908c8))[1];
      uVar14 = *(undefined8 *)(uVar10 + _DAT_1130908d0);
      uVar13 = *(ulong *)(uVar10 + _DAT_1130908d8);
      if (uVar13 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
        if (uVar11 == 0) goto LAB_10480cff8;
LAB_10480ce90:
        _swift_bridgeObjectRetain(uVar3);
        func_0x0001015529b8(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10480d098);
          (*pcVar9)();
        }
        uVar20 = 0;
        do {
          if ((uVar13 & 0xc000000000000001) == 0) {
            uVar12 = *(ulong *)(uVar13 + uVar20 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar12 = uVar20;
            func_0x0001030b6c20();
          }
          uVar2 = *(undefined8 *)(uVar12 + _DAT_113090910);
          uVar4 = ((undefined8 *)(uVar12 + _DAT_113090910))[1];
          uVar5 = *(undefined1 *)(uVar12 + _DAT_113090918);
          uVar6 = *(undefined1 *)(uVar12 + _DAT_113090920);
          uVar7 = *(undefined1 *)(uVar12 + _DAT_113090928);
          _swift_bridgeObjectRetain(uVar4);
          _objc_release(uVar12);
          uVar12 = *(ulong *)(puVar17 + 0x10);
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar12) {
            func_0x0001015529b8(1 < *(ulong *)(puVar17 + 0x18),uVar12 + 1,1);
          }
          uVar20 = uVar20 + 1;
          *(ulong *)(puVar17 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puVar17 + uVar12 * 0x18 + 0x20) = uVar2;
          *(undefined8 *)(puVar17 + uVar12 * 0x18 + 0x28) = uVar4;
          puVar17[uVar12 * 0x18 + 0x30] = uVar5;
          puVar17[uVar12 * 0x18 + 0x31] = uVar6;
          puVar17[uVar12 * 0x18 + 0x32] = uVar7;
        } while (uVar11 != uVar20);
        _objc_release(uVar10);
        puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar11 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar11 = uVar13;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (uVar11 != 0) goto LAB_10480ce90;
LAB_10480cff8:
        _swift_bridgeObjectRetain(uVar3);
        _objc_release(uVar10);
        puVar18 = puVar17;
      }
      uVar10 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar10) {
        func_0x00010155299c(1 < *(ulong *)(puVar8 + 0x18),uVar10 + 1,1);
      }
      uVar19 = uVar19 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar8 + uVar10 * 0x20 + 0x20) = uVar1;
      *(undefined8 *)(puVar8 + uVar10 * 0x20 + 0x28) = uVar3;
      *(undefined8 *)(puVar8 + uVar10 * 0x20 + 0x30) = uVar14;
      *(undefined **)(puVar8 + uVar10 * 0x20 + 0x38) = puVar17;
      puVar17 = puVar18;
    } while (uVar19 != uVar16);
  }
  return puVar8;
}



/* Entry: 10480d0b8; end: 10480d0d7;  */

void FUN_10480d0b8(void)

{
  _objc_opt_self(&PTR_PTR_1129d85b0);
  return;
}



/* Entry: 10480d0d8; end: 10480d12f;  */

void FUN_10480d0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_10480d308(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10480d130; end: 10480d17b; -[SCAdMediaSurveyQuestion text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480d130(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130908c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130908c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10480d17c; end: 10480d18b; -[SCAdMediaSurveyQuestion type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10480d17c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130908d0);
}



/* Entry: 10480d18c; end: 10480d1db; -[SCAdMediaSurveyQuestion choices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480d18c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130908d8);
  FUN_10480e858(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10480d1dc; end: 10480d25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480d1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130908c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130908d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130908d8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480d260; end: 10480d307; -[SCAdMediaSurveyQuestion initWithText:type:choices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480d260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = 0;
  FUN_10480e858(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_1130908c8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130908d0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130908d8) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480d308; end: 10480d4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480d308(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130908c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130908d0) = param_3;
  lVar13 = *(long *)(param_4 + 0x10);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(param_4);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_2);
    func_0x0001046c71ec(0,lVar13,0);
    puVar14 = puStack_68;
    lVar7 = 0;
    FUN_10480e858();
    puVar11 = (undefined1 *)(param_4 + 0x32);
    do {
      uVar12 = *(undefined8 *)(puVar11 + -0x12);
      uVar10 = *(undefined8 *)(puVar11 + -10);
      uVar4 = puVar11[-2];
      uVar5 = puVar11[-1];
      uVar3 = *puVar11;
      lVar8 = lVar7;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar8 + _DAT_113090910);
      *puVar1 = uVar12;
      puVar1[1] = uVar10;
      *(undefined1 *)(lVar8 + _DAT_113090918) = uVar4;
      *(undefined1 *)(lVar8 + _DAT_113090920) = uVar5;
      *(undefined1 *)(lVar8 + _DAT_113090928) = uVar3;
      puVar6 = PTR_s_init_1125d9248;
      lStack_78 = lVar8;
      lStack_70 = lVar7;
      _swift_bridgeObjectRetain(uVar10);
      plVar9 = &lStack_78;
      _objc_msgSendSuper2(plVar9,puVar6);
      uVar2 = *(ulong *)(puVar14 + 0x10);
      puStack_68 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
        func_0x0001046c71ec(1 < *(ulong *)(puVar14 + 0x18),uVar2 + 1,1);
      }
      puVar14 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(long **)(puStack_68 + uVar2 * 8 + 0x20) = plVar9;
      puVar11 = puVar11 + 0x18;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_1130908d8) = puVar14;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10480d4f8; end: 10480d52b; -[SCAdMediaSurveyQuestion hash] */

undefined8 FUN_10480d4f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10480d52c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10480d52c; end: 10480d5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10480d52c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130908c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130908c8))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130908d0));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130908d8);
  uVar1 = 0;
  FUN_10480e858(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10480d5f0; end: 10480d70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10480d5f0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_1130908c8);
      if (lVar2 == *(long *)(lStack_68 + _DAT_1130908c8) &&
          ((long *)(unaff_x20 + _DAT_1130908c8))[1] == ((long *)(lStack_68 + _DAT_1130908c8))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar2;
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1130908d0);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_1130908d0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130908d8);
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_1130908d8);
      _swift_bridgeObjectRetain(uVar5);
      func_0x00010470d440(uVar4,uVar5);
      _objc_release(lStack_68);
      _swift_bridgeObjectRelease(uVar5);
      return uVar1 & (uint)uVar4 & (uint)((int)uVar6 == (int)uVar7);
    }
  }
  return 0;
}


