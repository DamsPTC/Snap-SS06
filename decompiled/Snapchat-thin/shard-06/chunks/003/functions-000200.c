/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10469d584; end: 10469d5ff; -[SCAdTrackCommon init] */

void FUN_10469d584(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdTrackCommonWrapper.swift",0x33,2,0x90,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469d5cc);
  (*pcVar1)();
}



/* Entry: 10469d600; end: 10469d68b; -[SCAdTrackCommon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469d600(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308c9d0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c9e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308c9f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308c9f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ca20 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308ca38 + 8))
  ;
  return;
}



/* Entry: 10469d68c; end: 10469d8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469d68c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_278;
  undefined1 auStack_258 [160];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_11308c9d0);
  uVar7 = ((undefined8 *)(param_2 + _DAT_11308c9d0))[1];
  uVar12 = *(undefined8 *)(param_2 + _DAT_11308c9d8);
  lStack_278 = *(long *)(param_2 + _DAT_11308c9e0);
  bVar1 = lStack_278 == 0;
  if (bVar1) {
    _swift_bridgeObjectRetain();
    lStack_278 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    func_0x00010c067fc0();
  }
  uVar19 = *(undefined8 *)(param_2 + _DAT_11308c9e8);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11308c9f0);
  uVar8 = ((undefined8 *)(param_2 + _DAT_11308c9f0))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_11308c9f8);
  uVar9 = ((undefined8 *)(param_2 + _DAT_11308c9f8))[1];
  uVar15 = *(undefined8 *)(param_2 + _DAT_11308ca00);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11308ca08);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11308ca10);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11308ca18);
  uVar18 = *(undefined8 *)(param_2 + _DAT_11308ca28);
  uVar17 = *(undefined8 *)(param_2 + _DAT_11308ca30);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11308ca20);
  uVar10 = ((undefined8 *)(param_2 + _DAT_11308ca20))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_11308ca38);
  uVar11 = ((undefined8 *)(param_2 + _DAT_11308ca38))[1];
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _objc_release(param_2);
  lStack_1a0 = lStack_278;
  lStack_100 = lStack_278;
  uStack_1b8 = uVar2;
  uStack_1b0 = uVar7;
  uStack_1a8 = uVar12;
  uStack_198 = bVar1;
  uStack_190 = uVar19;
  uStack_188 = uVar3;
  uStack_180 = uVar8;
  uStack_178 = uVar4;
  uStack_170 = uVar9;
  uStack_168 = uVar15;
  uStack_160 = uVar13;
  uStack_158 = uVar16;
  uStack_150 = uVar14;
  uStack_148 = uVar5;
  uStack_140 = uVar10;
  uStack_138 = uVar18;
  uStack_130 = uVar17;
  uStack_128 = uVar6;
  uStack_120 = uVar11;
  uStack_118 = uVar2;
  uStack_110 = uVar7;
  uStack_108 = uVar12;
  uStack_f8 = bVar1;
  uStack_f0 = uVar19;
  uStack_e8 = uVar3;
  uStack_e0 = uVar8;
  uStack_d8 = uVar4;
  uStack_d0 = uVar9;
  uStack_c8 = uVar15;
  uStack_c0 = uVar13;
  uStack_b8 = uVar16;
  uStack_b0 = uVar14;
  uStack_a8 = uVar5;
  uStack_a0 = uVar10;
  uStack_98 = uVar18;
  uStack_90 = uVar17;
  uStack_88 = uVar6;
  uStack_80 = uVar11;
  func_0x000102c62cd4(&uStack_1b8,auStack_258);
  func_0x000102c62d10(&uStack_118);
  param_1[0xd] = uStack_150;
  param_1[0xc] = uStack_158;
  param_1[0xf] = uStack_140;
  param_1[0xe] = uStack_148;
  param_1[0x11] = uStack_130;
  param_1[0x10] = uStack_138;
  param_1[0x13] = uStack_120;
  param_1[0x12] = uStack_128;
  param_1[5] = uStack_190;
  param_1[4] = CONCAT71(uStack_197,uStack_198);
  param_1[7] = uStack_180;
  param_1[6] = uStack_188;
  param_1[9] = uStack_170;
  param_1[8] = uStack_178;
  param_1[0xb] = uStack_160;
  param_1[10] = uStack_168;
  param_1[1] = uStack_1b0;
  *param_1 = uStack_1b8;
  param_1[3] = lStack_1a0;
  param_1[2] = uStack_1a8;
  return;
}



/* Entry: 10469d8f0; end: 10469d937;  */

undefined8 FUN_10469d8f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10469d938; end: 10469d957;  */

void FUN_10469d938(void)

{
  _objc_opt_self(&PTR_PTR_1129d1968);
  return;
}



/* Entry: 10469d958; end: 10469d967; -[SCDpaImpressionEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469d958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ca68));
  return;
}



/* Entry: 10469d968; end: 10469d97f; -[SCDpaImpressionEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469d968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ca70));
  return;
}



/* Entry: 10469d980; end: 10469dabf; -[SCDpaImpressionEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469d980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308ca68) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308ca70) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10469dac0; end: 10469db43; -[SCDpaImpressionEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469dac0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308ca68);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308ca70);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10469db44; end: 10469dc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10469db44(undefined8 param_1)

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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308ca68);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308ca70);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308ca70);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 10469dc1c; end: 10469dc9b; -[SCDpaImpressionEvent isEqual:] */

uint FUN_10469dc1c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469db44(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469dc9c; end: 10469dc9f; -[SCDpaImpressionEvent copyWithZone:] */

void FUN_10469dc9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469dca0; end: 10469dd5f; -[SCDpaImpressionEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10469dd60; end: 10469dd8f;  */

void FUN_10469dd60(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10469dd90(param_1);
  return;
}



/* Entry: 10469dd90; end: 10469dfa3;  */

undefined8 FUN_10469dd90(long param_1)

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
LAB_10469df4c:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_10469dfa4(0,0x11308bd50,&PTR_PTR_1126b9150);
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
        goto LAB_10469df4c;
      }
      uVar2 = 0;
      FUN_10469dfa4(0,0x11308ca78,&PTR_PTR_1126b90d8);
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



/* Entry: 10469dfa4; end: 10469dfe3;  */

void FUN_10469dfa4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10469dfe4; end: 10469e00b; -[SCDpaImpressionEvent initWithCoder:] */

void FUN_10469dfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10469dd90();
  return;
}



/* Entry: 10469e00c; end: 10469e027; -[SCDpaImpressionEvent description] */

void FUN_10469e00c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469e028; end: 10469e0a3; -[SCDpaImpressionEvent init] */

void FUN_10469e028(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/DpaImpressionEventWrapper.swift",0x38,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469e070);
  (*pcVar1)();
}



/* Entry: 10469e0a4; end: 10469e0db; -[SCDpaImpressionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e0a4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ca68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308ca70));
  return;
}



/* Entry: 10469e0dc; end: 10469e0fb;  */

void FUN_10469e0dc(void)

{
  _objc_opt_self(&PTR_PTR_1129d1a98);
  return;
}



/* Entry: 10469e0fc; end: 10469e0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e0fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308ca68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308ca70) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469e100; end: 10469e10f; -[SCSponsoredSnapAdView startTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469e100(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308caa8);
}



/* Entry: 10469e110; end: 10469e11f; -[SCSponsoredSnapAdView viewDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469e110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308cab0);
}



/* Entry: 10469e120; end: 10469e137; -[SCSponsoredSnapAdView viewSeqNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469e120(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308cab8);
}



/* Entry: 10469e138; end: 10469e293; -[SCSponsoredSnapAdView initWithStartTimestampMs:viewDurationMs:viewSeqNum:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e138(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_11308caa8) = param_1;
  *(undefined8 *)(param_3 + _DAT_11308cab0) = param_2;
  *(undefined8 *)(param_3 + _DAT_11308cab8) = param_5;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469e294; end: 10469e327; -[SCSponsoredSnapAdView hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e294(long param_1)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308caa8) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308caa8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308cab0) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308cab0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308cab8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10469e328; end: 10469e3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10469e328(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
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
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      dVar4 = *(double *)(unaff_x20 + _DAT_11308caa8);
      dVar5 = *(double *)(lStack_68 + _DAT_11308caa8);
      dVar6 = *(double *)(unaff_x20 + _DAT_11308cab0);
      dVar7 = *(double *)(lStack_68 + _DAT_11308cab0);
      lVar2 = *(long *)(unaff_x20 + _DAT_11308cab8);
      lVar3 = *(long *)(lStack_68 + _DAT_11308cab8);
      _objc_release();
      return lVar2 == lVar3 && (dVar6 == dVar7 && dVar4 == dVar5);
    }
  }
  return false;
}



/* Entry: 10469e400; end: 10469e47f; -[SCSponsoredSnapAdView isEqual:] */

uint FUN_10469e400(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469e328(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469e480; end: 10469e483; -[SCSponsoredSnapAdView copyWithZone:] */

void FUN_10469e480(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469e484; end: 10469e49f; -[SCSponsoredSnapAdView description] */

void FUN_10469e484(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469e4a0; end: 10469e53b; -[SCSponsoredSnapAdView init] */

void FUN_10469e4a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/SponsoredSnapAdViewWrapper.swift",0x39,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469e4e8);
  (*pcVar1)();
}



/* Entry: 10469e53c; end: 10469e53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308caa8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cab0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308cab8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469e540; end: 10469e54f; -[SCSponsoredSnapBannerEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cae8));
  return;
}



/* Entry: 10469e550; end: 10469e567; -[SCSponsoredSnapBannerEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308caf0));
  return;
}



/* Entry: 10469e568; end: 10469e6a7; -[SCSponsoredSnapBannerEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cae8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308caf0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10469e6a8; end: 10469e72b; -[SCSponsoredSnapBannerEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10469e6a8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cae8);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308caf0);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10469e72c; end: 10469e803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10469e72c(undefined8 param_1)

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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cae8);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308caf0);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308caf0);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 10469e804; end: 10469e883; -[SCSponsoredSnapBannerEvent isEqual:] */

uint FUN_10469e804(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469e72c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469e884; end: 10469e887; -[SCSponsoredSnapBannerEvent copyWithZone:] */

void FUN_10469e884(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469e888; end: 10469e8a3; -[SCSponsoredSnapBannerEvent description] */

void FUN_10469e888(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469e8a4; end: 10469e91f; -[SCSponsoredSnapBannerEvent init] */

void FUN_10469e8a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/SponsoredSnapBannerEventWrapper.swift",0x3e,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469e8ec);
  (*pcVar1)();
}



/* Entry: 10469e920; end: 10469e957; -[SCSponsoredSnapBannerEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e920(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cae8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308caf0));
  return;
}



/* Entry: 10469e958; end: 10469e977;  */

void FUN_10469e958(void)

{
  _objc_opt_self(&PTR_PTR_1129d1c48);
  return;
}



/* Entry: 10469e978; end: 10469e97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e978(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cae8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308caf0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469e97c; end: 10469e98b; -[SCSponsoredSnapEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e97c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cb20));
  return;
}



/* Entry: 10469e98c; end: 10469e99b; -[SCSponsoredSnapEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cb28));
  return;
}



/* Entry: 10469e99c; end: 10469e9ab; -[SCSponsoredSnapEvent viewLoggingEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cb30));
  return;
}



/* Entry: 10469e9ac; end: 10469ea93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469e9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cb20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cb28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308cb30) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469ea94; end: 10469eb23; -[SCSponsoredSnapEvent initWithCommon:event:viewLoggingEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ea94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cb20) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cb28) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308cb30) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10469eb24; end: 10469eb9f;  */

undefined8
FUN_10469eb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10469ef88(param_1,param_2,param_3,param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x00010189a59c(param_3,param_4);
  return uVar1;
}



/* Entry: 10469eba0; end: 10469ec77; -[SCSponsoredSnapEvent hash] */

undefined8 FUN_10469eba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010469ebd4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10469ec78; end: 10469edcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10469ec78(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  long alStack_60 [4];
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_60);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,alStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar2 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_11308cb20);
      func_0x00010c071ae0();
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cb28);
      func_0x00010c071ae0(uVar3);
      if (*(long *)(unaff_x20 + _DAT_11308cb30) == 0) {
        lVar7 = *(long *)(lStack_68 + _DAT_11308cb30);
        lVar6 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_68);
        if (lVar7 == 0) {
          uVar5 = 1;
        }
        else {
          _objc_release(lVar6);
          uVar5 = 0;
        }
      }
      else {
        lVar6 = *(long *)(lStack_68 + _DAT_11308cb30);
        if (lVar6 == 0) {
          uVar4 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          uVar4 = 0;
          FUN_1046a0100();
        }
        alStack_60[0] = lVar6;
        alStack_60[3] = uVar4;
        _objc_retain(lVar6);
        plVar2 = alStack_60;
        FUN_10469f778(plVar2);
        uVar5 = (uint)plVar2;
        _objc_release(lStack_68);
        func_0x00010006e7f4(alStack_60);
      }
      if (iVar1 != 0) {
        return (uint)uVar3 & uVar5;
      }
    }
  }
  return 0;
}



/* Entry: 10469edd0; end: 10469ee4f; -[SCSponsoredSnapEvent isEqual:] */

uint FUN_10469edd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469ec78(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469ee50; end: 10469ee53; -[SCSponsoredSnapEvent copyWithZone:] */

void FUN_10469ee50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469ee54; end: 10469eec3; -[SCSponsoredSnapEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ee54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11308cb30);
  if (lVar2 != 0) {
    _objc_retain();
    _objc_retain(lVar2);
    lVar1 = lVar2;
    FUN_10469feb4();
    _objc_release(param_1);
    _objc_release(lVar2);
    _swift_bridgeObjectRelease(lVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469eec4; end: 10469ef3f; -[SCSponsoredSnapEvent init] */

void FUN_10469eec4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/SponsoredSnapEventWrapper.swift",0x38,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469ef0c);
  (*pcVar1)();
}



/* Entry: 10469ef40; end: 10469ef87; -[SCSponsoredSnapEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ef40(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cb20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cb28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cb30));
  return;
}



/* Entry: 10469ef88; end: 10469f073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469ef88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11308cb20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cb28) = param_2;
  if (param_3 == 1) {
    _objc_retain(param_1);
    _objc_retain(param_2);
    param_3 = 0;
  }
  else {
    FUN_1046a0100(0);
    _objc_allocWithZone();
    _objc_retain(param_1);
    _objc_retain(param_2);
    func_0x00010189a58c(param_3,param_4);
    FUN_10469fb0c(param_3,(uint)param_4 & 0x1ff);
  }
  *(long *)(unaff_x20 + _DAT_11308cb30) = param_3;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469f074; end: 10469f093;  */

void FUN_10469f074(void)

{
  _objc_opt_self(&PTR_PTR_1129d1d18);
  return;
}



/* Entry: 10469f094; end: 10469f13f;  */

void FUN_10469f094(void)

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



/* Entry: 10469f140; end: 10469f17f;  */

void FUN_10469f140(undefined1 *param_1,long *param_2)

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



/* Entry: 10469f180; end: 10469f19b; -[SCSponsoredSnapViewFiringReason description] */

void FUN_10469f180(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469f19c; end: 10469f1e3; -[SCSponsoredSnapViewFiringReason init] */

void FUN_10469f19c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/SponsoredSnapViewFiringReasonWrapper.swift",0x43,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469f1e4);
  (*pcVar1)();
}



/* Entry: 10469f1e4; end: 10469f22b; -[SCSponsoredSnapViewFiringReason hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f1e4(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11308cb60));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10469f22c; end: 10469f2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10469f22c(undefined8 param_1)

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
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11308cb60);
      cVar2 = *(char *)(lStack_58 + _DAT_11308cb60);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 10469f2cc; end: 10469f34b; -[SCSponsoredSnapViewFiringReason isEqual:] */

uint FUN_10469f2cc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469f22c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469f34c; end: 10469f357; -[SCSponsoredSnapViewFiringReason copyWithZone:] */

void FUN_10469f34c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469f358; end: 10469f367; +[SCSponsoredSnapViewFiringReason background] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f358(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308cb60) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469f368; end: 10469f3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f368(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11308cb60) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469f3b4; end: 10469f3bb; +[SCSponsoredSnapViewFiringReason chatFeedSessionEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f3b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308cb60) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469f3bc; end: 10469f44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f3bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308cb60) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469f44c; end: 10469f467; -[SCSponsoredSnapViewFiringReason matchBackground:chatFeedSessionEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f44c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11308cb60) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010469f464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 10469f468; end: 10469f4bb;  */

void FUN_10469f468(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10469f4bc; end: 10469f623;  */

int FUN_10469f4bc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10469f538;
        goto LAB_10469f51c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10469f51c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10469f538:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10469f624; end: 10469f663;  */

void FUN_10469f624(void)

{
  undefined *puVar1;
  
  if (puRam000000011308cb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26578;
  _swift_getWitnessTable(&UNK_10dd26578,&UNK_110796810);
  puRam000000011308cb90 = puVar1;
  return;
}



/* Entry: 10469f664; end: 10469f777;  */

void FUN_10469f664(undefined8 param_1,uint param_2)

{
  _objc_allocWithZone();
  FUN_10469fb0c(param_1,param_2 & 0x1ff);
  return;
}



/* Entry: 10469f778; end: 10469f8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10469f778(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar9 = *(ulong *)(unaff_x20 + _DAT_11308cb98);
      lVar7 = *(long *)(lStack_68 + _DAT_11308cb98);
      uVar8 = (ulong)(uVar9 == 0 && lVar7 == 0);
      if (uVar9 != 0 && lVar7 != 0) {
        _swift_bridgeObjectRetain(lVar7);
        uVar8 = uVar9;
        _swift_bridgeObjectRetain();
        FUN_1046656d4();
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(lVar7);
      }
      uVar10 = *(undefined8 *)(lStack_68 + _DAT_11308cba0);
      uVar4 = 0;
      func_0x00010469f49c();
      auStack_60[0] = uVar10;
      lStack_48 = uVar4;
      _objc_retain(uVar10);
      puVar5 = auStack_60;
      FUN_10469f22c(puVar5);
      func_0x00010006e7f4(auStack_60);
      bVar1 = *(byte *)(unaff_x20 + _DAT_11308cba8);
      bVar2 = *(byte *)(lStack_68 + _DAT_11308cba8);
      _objc_release(lStack_68);
      if ((uVar8 & 1) != 0) {
        uVar6 = (uint)puVar5 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_10469f8a8;
      }
    }
  }
  uVar6 = 0;
LAB_10469f8a8:
  return uVar6 & 1;
}



/* Entry: 10469f8c4; end: 10469f903;  */

undefined1  [16] FUN_10469f8c4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_10469feb4();
  _objc_release(param_1);
  auVar2._8_4_ = param_2 & 0x1ff;
  auVar2._0_8_ = uVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}



/* Entry: 10469f904; end: 10469f95f; -[SCSponsoredSnapViewLoggingEvent adViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f904(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308cb98);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010469e51c(0);
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



/* Entry: 10469f960; end: 10469f96f; -[SCSponsoredSnapViewLoggingEvent firingReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cba0));
  return;
}



/* Entry: 10469f970; end: 10469f97f; -[SCSponsoredSnapViewLoggingEvent isGenericProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10469f970(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308cba8);
}



/* Entry: 10469f980; end: 10469fa67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469f980(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cb98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cba0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11308cba8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469fa68; end: 10469fb0b; -[SCSponsoredSnapViewLoggingEvent initWithAdViews:firingReason:isGenericProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469fa68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  if (param_3 != 0) {
    func_0x00010469e51c();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,lVar3);
    lVar3 = param_3;
  }
  *(long *)(param_1 + _DAT_11308cb98) = lVar3;
  *(undefined8 *)(param_1 + _DAT_11308cba0) = param_4;
  *(undefined1 *)(param_1 + _DAT_11308cba8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 10469fb0c; end: 10469fd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469fb0c(long param_1,uint param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long alStack_a0 [2];
  undefined1 auStack_90 [16];
  long alStack_80 [2];
  
  _swift_getObjectType();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar8 != 0) {
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104670758(0,lVar8,0);
      puVar7 = puStack_a8;
      lVar3 = 0;
      func_0x00010469e51c();
      puVar9 = (undefined8 *)(param_1 + 0x30);
      do {
        uVar10 = puVar9[-2];
        uVar11 = puVar9[-1];
        uVar6 = *puVar9;
        lVar4 = lVar3;
        _objc_allocWithZone();
        *(undefined8 *)(lVar4 + _DAT_11308caa8) = uVar10;
        *(undefined8 *)(lVar4 + _DAT_11308cab0) = uVar11;
        *(undefined8 *)(lVar4 + _DAT_11308cab8) = uVar6;
        plVar5 = &lStack_b8;
        lStack_b8 = lVar4;
        lStack_b0 = lVar3;
        _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puStack_a8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x000104670758(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puVar9 + 3;
        *(ulong *)(puStack_a8 + 0x10) = uVar1 + 1;
        *(long **)(puStack_a8 + uVar1 * 8 + 0x20) = plVar5;
        lVar8 = lVar8 + -1;
        puVar7 = puStack_a8;
      } while (lVar8 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11308cb98) = puVar7;
  lVar3 = 0;
  func_0x00010469f49c();
  lVar8 = lVar3;
  _objc_allocWithZone();
  bVar2 = (param_2 & 0xff) == 1;
  plVar5 = alStack_80;
  if (!bVar2) {
    plVar5 = alStack_a0;
  }
  *(bool *)(lVar8 + _DAT_11308cb60) = bVar2;
  *plVar5 = lVar8;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308cba0) = plVar5;
  _swift_bridgeObjectRelease(param_1);
  *(byte *)(unaff_x20 + _DAT_11308cba8) = (byte)(param_2 >> 8) & 1;
  _objc_msgSendSuper2(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10469fd04; end: 10469fd37; -[SCSponsoredSnapViewLoggingEvent hash] */

undefined8 FUN_10469fd04(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010469f6a4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10469fd38; end: 10469fdb7; -[SCSponsoredSnapViewLoggingEvent isEqual:] */

uint FUN_10469fd38(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10469f778(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10469fdb8; end: 10469fdbb; -[SCSponsoredSnapViewLoggingEvent copyWithZone:] */

void FUN_10469fdb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10469fdbc; end: 10469fdff; -[SCSponsoredSnapViewLoggingEvent description] */

void FUN_10469fdbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10469feb4();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10469fe00; end: 10469fe7b; -[SCSponsoredSnapViewLoggingEvent init] */

void FUN_10469fe00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/SponsoredSnapViewLoggingEventWrapper.swift",0x43,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10469fe48);
  (*pcVar1)();
}



/* Entry: 10469fe7c; end: 10469feb3; -[SCSponsoredSnapViewLoggingEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10469fe7c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cb98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cba0));
  return;
}



/* Entry: 10469feb4; end: 1046a00ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10469feb4(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  uVar8 = *(ulong *)(param_1 + _DAT_11308cb98);
  if (uVar8 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    if (uVar8 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar8;
      if (-1 < (long)uVar8) {
        uVar7 = uVar8 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar7 != 0) {
      func_0x00010467078c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a0100);
        (*pcVar1)();
      }
      if ((uVar8 & 0xc000000000000001) == 0) {
        uVar9 = 0;
        lVar10 = *(long *)(puVar6 + 0x10);
        lVar11 = lVar10 * 0x18;
        do {
          uVar2 = lVar10 + uVar9;
          lVar3 = *(long *)(uVar8 + 0x20 + uVar9 * 8);
          uVar12 = *(undefined8 *)(lVar3 + _DAT_11308caa8);
          uVar13 = *(undefined8 *)(lVar3 + _DAT_11308cab0);
          uVar5 = *(undefined8 *)(lVar3 + _DAT_11308cab8);
          lVar3 = uVar2 + 1;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
            func_0x00010467078c(1 < *(ulong *)(puVar6 + 0x18),lVar3,1);
          }
          uVar9 = uVar9 + 1;
          *(long *)(puVar6 + 0x10) = lVar3;
          *(undefined8 *)(puVar6 + lVar11 + 0x20) = uVar12;
          *(undefined8 *)(puVar6 + lVar11 + 0x28) = uVar13;
          *(undefined8 *)(puVar6 + lVar11 + 0x30) = uVar5;
          lVar11 = lVar11 + 0x18;
        } while (uVar7 != uVar9);
      }
      else {
        uVar9 = 0;
        do {
          uVar2 = uVar9;
          func_0x000102061f10(uVar9,uVar8);
          uVar12 = *(undefined8 *)(uVar2 + _DAT_11308caa8);
          uVar13 = *(undefined8 *)(uVar2 + _DAT_11308cab0);
          uVar5 = *(undefined8 *)(uVar2 + _DAT_11308cab8);
          _swift_unknownObjectRelease();
          uVar2 = *(ulong *)(puVar6 + 0x10);
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
            func_0x00010467078c(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
          }
          uVar9 = uVar9 + 1;
          *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puVar6 + uVar2 * 0x18 + 0x20) = uVar12;
          *(undefined8 *)(puVar6 + uVar2 * 0x18 + 0x28) = uVar13;
          *(undefined8 *)(puVar6 + uVar2 * 0x18 + 0x30) = uVar5;
        } while (uVar7 != uVar9);
      }
    }
  }
  iVar4 = 0x100;
  if (*(char *)(param_1 + _DAT_11308cba8) == '\0') {
    iVar4 = 0;
  }
  if (*(char *)(*(long *)(param_1 + _DAT_11308cba0) + _DAT_11308cb60) == '\x01') {
    iVar4 = iVar4 + 1;
  }
  auVar14._8_4_ = iVar4;
  auVar14._0_8_ = puVar6;
  auVar14._12_4_ = 0;
  return auVar14;
}



/* Entry: 1046a0100; end: 1046a011f;  */

void FUN_1046a0100(void)

{
  _objc_opt_self(&PTR_PTR_1129d1eb0);
  return;
}



/* Entry: 1046a0120; end: 1046a012f; -[SCTooltipImpressionEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cbd8));
  return;
}



/* Entry: 1046a0130; end: 1046a0147; -[SCTooltipImpressionEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cbe0));
  return;
}



/* Entry: 1046a0148; end: 1046a0287; -[SCTooltipImpressionEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a0148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cbd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cbe0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a0288; end: 1046a030b; -[SCTooltipImpressionEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a0288(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cbd8);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cbe0);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a030c; end: 1046a03e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a030c(undefined8 param_1)

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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cbd8);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308cbe0);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308cbe0);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046a03e4; end: 1046a0463; -[SCTooltipImpressionEvent isEqual:] */

uint FUN_1046a03e4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046a030c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a0464; end: 1046a0467; -[SCTooltipImpressionEvent copyWithZone:] */

void FUN_1046a0464(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


