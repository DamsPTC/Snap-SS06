/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042a77d8; end: 1042a7813; -[SCAdStickerInfoTrackInfo initWithCoder:] */

undefined8 FUN_1042a77d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1042a795c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1042a7814; end: 1042a783f; -[SCAdStickerInfoTrackInfo description] */

void FUN_1042a7814(void)

{
  undefined1 auStack_70 [96];
  
  func_0x0001042a78cc(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a7840; end: 1042a78bb; -[SCAdStickerInfoTrackInfo init] */

void FUN_1042a7840(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdStickerInfoTrackInfoWrapper.swift",0x32,2,0x72,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a7888);
  (*pcVar1)();
}



/* Entry: 1042a78bc; end: 1042a795b; -[SCAdStickerInfoTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a78bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b1d0));
  return;
}



/* Entry: 1042a795c; end: 1042a7bcf;  */

undefined8 FUN_1042a795c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f2680);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  uVar1 = uStack_b0;
  uVar9 = uStack_c0;
  if (lStack_a8 == 0) {
    func_0x00010006e7f4(&uStack_a0);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_104280db8(0);
    puVar4 = &uStack_c8;
    _swift_dynamicCast(puVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar3,6);
    uVar3 = uStack_c8;
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f26a0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar5);
  uVar5 = 0x5f52454b43495453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f52454b43495453,0xec000000455a4953);
  func_0x00010bf66d40(param_1);
  uVar6 = uVar1;
  uVar10 = uVar9;
  _objc_release(uVar5);
  uVar5 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f26c0);
  func_0x00010bf66d40(param_1);
  uVar7 = uVar6;
  uVar11 = uVar10;
  _objc_release(uVar5);
  uVar5 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f26e0);
  func_0x00010bf66d00(param_1);
  uVar8 = uVar7;
  uVar12 = uVar11;
  _objc_release(uVar5);
  uVar5 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f2700);
  func_0x00010bf66d00(param_1);
  _objc_release(uVar5);
  func_0x00010c007c20(uVar1,uVar9,uVar6,uVar10,uVar7,uVar11,uVar8,uVar12);
  _objc_release(uVar3);
  return unaff_x20;
}



/* Entry: 1042a7bd0; end: 1042a7bef;  */

void FUN_1042a7bd0(void)

{
  _objc_opt_self(&PTR_PTR_112994458);
  return;
}



/* Entry: 1042a7bf0; end: 1042a7cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042a7bf0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x0001048116c8(0);
  _objc_allocWithZone();
  uVar2 = param_1;
  _swift_bridgeObjectRetain();
  func_0x0001048109d4();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b228) = uVar2;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(uVar2);
  _objc_msgSendSuper2(auStack_50,puVar1);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_1);
  return puVar3;
}



/* Entry: 1042a7cac; end: 1042a7d4b;  */

void FUN_1042a7cac(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042a7d4c; end: 1042a7d6f;  */

void FUN_1042a7d4c(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1042a7d70; end: 1042a7dcf; -[SCAdStickerMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a7d70(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11306b228);
  if (lVar2 != 0) {
    _objc_retain();
    _objc_retain(lVar2);
    func_0x00010481135c();
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a7dd0);
  (*pcVar1)();
}



/* Entry: 1042a7dd0; end: 1042a7e17; -[SCAdStickerMetadata init] */

void FUN_1042a7dd0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdStickerMetadataWrapper.swift",0x2d,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a7e18);
  (*pcVar1)();
}



/* Entry: 1042a7e18; end: 1042a7fcf; -[SCAdStickerMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1042a7e18(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(0);
  lVar1 = param_1;
  if (*(long *)(param_1 + _DAT_11306b228) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    func_0x000104810cf0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1042a7fd0; end: 1042a804f; -[SCAdStickerMetadata isEqual:] */

uint FUN_1042a7fd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001042a7ec0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042a8050; end: 1042a8053; -[SCAdStickerMetadata copyWithZone:] */

void FUN_1042a8050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a8054; end: 1042a8137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8054(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_11306b228) != 0) {
    uVar2 = 0x415f594556525553;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415f594556525553,0xed0000524557534e);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    uVar2 = 0x5f45505954425553;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,0xee00594556525553);
    uVar3 = 0x55535f4445444f43;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a8138);
  (*pcVar1)();
}



/* Entry: 1042a8138; end: 1042a8187; -[SCAdStickerMetadata encodeWithCoder:] */

void FUN_1042a8138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042a8054(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a8188; end: 1042a81b7;  */

void FUN_1042a8188(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042a81b8(param_1);
  return;
}



/* Entry: 1042a81b8; end: 1042a8447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042a81b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar6 = auStack_a0;
  _swift_getObjectType();
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_1042a8400:
    uStack_60 = uStack_80;
    uStack_58 = uStack_78;
    uStack_50 = uStack_70;
    lStack_48 = lStack_68;
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    plVar4 = &lStack_90;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)plVar4 & 1) != 0) {
      uVar5 = 0x5f45505954425553;
      if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x11ffa6baa9adaaad)) {
        _swift_bridgeObjectRelease(0xee00594556525553);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(lStack_88);
        if ((uVar5 & 1) == 0) goto LAB_1042a83f4;
      }
      uVar2 = 0x415f594556525553;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x415f594556525553,0xed0000524557534e);
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
      if (lStack_68 == 0) goto LAB_1042a8400;
      uVar2 = 0;
      func_0x0001048116c8(0);
      plVar4 = &lStack_90;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        _objc_allocWithZone();
        *(long *)(unaff_x20 + _DAT_11306b228) = lStack_90;
        puVar1 = PTR_s_init_1125d9248;
        lVar3 = lStack_90;
        _objc_retain(lStack_90);
        _objc_msgSendSuper2(auStack_a0,puVar1);
        _objc_release(lVar3);
        _objc_release(param_1);
        _swift_getObjectType();
        _swift_deallocPartialClassInstance();
        return puVar6;
      }
    }
LAB_1042a83f4:
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 1042a8448; end: 1042a846f; -[SCAdStickerMetadata initWithCoder:] */

void FUN_1042a8448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042a81b8();
  return;
}



/* Entry: 1042a8470; end: 1042a84cb; +[SCAdStickerMetadata surveyWithAnswer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11306b228) = param_3;
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



/* Entry: 1042a84cc; end: 1042a84eb; -[SCAdStickerMetadata matchSurvey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a84cc(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_11306b228) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001042a84e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a84ec);
  (*pcVar1)();
}



/* Entry: 1042a84ec; end: 1042a851f;  */

void FUN_1042a84ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042a8520; end: 1042a852f; -[SCAdStickerMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b228));
  return;
}



/* Entry: 1042a8530; end: 1042a854f;  */

void FUN_1042a8530(void)

{
  _objc_opt_self(&PTR_PTR_112994550);
  return;
}



/* Entry: 1042a8550; end: 1042a863f;  */

uint FUN_1042a8550(uint *param_1,int param_2)

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



/* Entry: 1042a8640; end: 1042a867f;  */

void FUN_1042a8640(void)

{
  undefined *puVar1;
  
  if (puRam000000011306b260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce5bac;
  _swift_getWitnessTable(&UNK_10dce5bac,&UNK_110754f28);
  puRam000000011306b260 = puVar1;
  return;
}



/* Entry: 1042a8680; end: 1042a8713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  lVar1 = 0;
  if (param_1 != 0) {
    func_0x0001048116c8();
    _objc_allocWithZone();
    func_0x0001048109d4(param_1,param_2,param_3,lVar1);
    lVar1 = param_1;
  }
  *(long *)(unaff_x20 + _DAT_11306b268) = lVar1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a8714; end: 1042a8823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042a8714(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lStack_58;
  long alStack_50 [4];
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_50);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,alStack_50,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11306b268) != 0) {
        lVar4 = *(long *)(lStack_58 + _DAT_11306b268);
        if (lVar4 == 0) {
          uVar2 = 0;
          alStack_50[1] = 0;
          alStack_50[2] = 0;
        }
        else {
          uVar2 = 0;
          func_0x0001048116c8();
        }
        alStack_50[0] = lVar4;
        alStack_50[3] = uVar2;
        _objc_retain(lVar4);
        plVar1 = alStack_50;
        func_0x000104810db4(plVar1);
        uVar3 = (uint)plVar1;
        _objc_release(lStack_58);
        func_0x00010006e7f4(alStack_50);
        goto LAB_1042a8804;
      }
      lVar5 = *(long *)(lStack_58 + _DAT_11306b268);
      lVar4 = lVar5;
      _objc_retain(lVar5);
      _objc_release(lStack_58);
      if (lVar5 == 0) {
        uVar3 = 1;
        goto LAB_1042a8804;
      }
      _objc_release(lVar4);
    }
  }
  uVar3 = 0;
LAB_1042a8804:
  return uVar3 & 1;
}



/* Entry: 1042a8824; end: 1042a8833; -[SCAdSurveyTrackInfo answer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b268));
  return;
}



/* Entry: 1042a8834; end: 1042a887f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8834(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b268) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a8880; end: 1042a88d7; -[SCAdSurveyTrackInfo initWithAnswer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306b268) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1042a88d8; end: 1042a8973; -[SCAdSurveyTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1042a88d8(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = param_1;
  if (*(long *)(param_1 + _DAT_11306b268) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    func_0x000104810cf0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1042a8974; end: 1042a89f3; -[SCAdSurveyTrackInfo isEqual:] */

uint FUN_1042a8974(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042a8714(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042a89f4; end: 1042a89f7; -[SCAdSurveyTrackInfo copyWithZone:] */

void FUN_1042a89f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a89f8; end: 1042a8a7b; -[SCAdSurveyTrackInfo encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a89f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x524557534e41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524557534e41,0xe600000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1042a8a7c; end: 1042a8abb;  */

undefined8 FUN_1042a8a7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1042a8be0(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042a8abc; end: 1042a8af7; -[SCAdSurveyTrackInfo initWithCoder:] */

undefined8 FUN_1042a8abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1042a8be0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1042a8af8; end: 1042a8b53; -[SCAdSurveyTrackInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8af8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11306b268);
  if (lVar1 != 0) {
    _objc_retain();
    _objc_retain(lVar1);
    func_0x00010481135c();
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a8b54; end: 1042a8bcf; -[SCAdSurveyTrackInfo init] */

void FUN_1042a8b54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdSurveyTrackInfoWrapper.swift",0x2d,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a8b9c);
  (*pcVar1)();
}



/* Entry: 1042a8bd0; end: 1042a8bdf; -[SCAdSurveyTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b268));
  return;
}



/* Entry: 1042a8be0; end: 1042a8cd7;  */

undefined8 FUN_1042a8be0(long param_1)

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
  
  uVar1 = 0x524557534e41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524557534e41,0xe600000000000000);
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
    func_0x0001048116c8(0);
    puVar2 = &uStack_78;
    _swift_dynamicCast(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_78;
    if ((int)puVar2 == 0) {
      uVar1 = 0;
    }
  }
  func_0x00010bff3200();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 1042a8cd8; end: 1042a8cf7;  */

void FUN_1042a8cd8(void)

{
  _objc_opt_self(&PTR_PTR_112994620);
  return;
}



/* Entry: 1042a8cf8; end: 1042a8d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1042a8cf8(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long unaff_x20;
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
      bVar4 = *(byte *)(unaff_x20 + _DAT_11306b298);
      bVar1 = *(byte *)(lStack_58 + _DAT_11306b298);
      _objc_release();
      bVar4 = bVar4 ^ bVar1 ^ 1;
      goto LAB_1042a8d84;
    }
  }
  bVar4 = 0;
LAB_1042a8d84:
  return bVar4 & 1;
}



/* Entry: 1042a8d9c; end: 1042a8daf; -[SCAdToCallTrackInfo didCall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a8d9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b298);
}



/* Entry: 1042a8db0; end: 1042a8dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8db0(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306b298) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a8dfc; end: 1042a8e47; -[SCAdToCallTrackInfo initWithDidCall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8dfc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306b298) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a8e48; end: 1042a8e8f; -[SCAdToCallTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8e48(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11306b298));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042a8e90; end: 1042a8f0f; -[SCAdToCallTrackInfo isEqual:] */

uint FUN_1042a8e90(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042a8cf8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042a8f10; end: 1042a8f13; -[SCAdToCallTrackInfo copyWithZone:] */

void FUN_1042a8f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a8f14; end: 1042a901b; -[SCAdToCallTrackInfo encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a8f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x4c4c41435f444944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c41435f444944,0xe800000000000000);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a901c; end: 1042a909b; -[SCAdToCallTrackInfo initWithCoder:] */

undefined8 FUN_1042a901c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0x4c4c41435f444944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c41435f444944,0xe800000000000000);
  func_0x00010bf66ce0(param_3);
  _objc_release(uVar1);
  func_0x00010c00c620(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1042a909c; end: 1042a90b7; -[SCAdToCallTrackInfo description] */

void FUN_1042a909c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a90b8; end: 1042a9133; -[SCAdToCallTrackInfo init] */

void FUN_1042a90b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdToCallTrackInfoWrapper.swift",0x2d,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a9100);
  (*pcVar1)();
}



/* Entry: 1042a9134; end: 1042a9137; -[SCAdToCallTrackInfo .cxx_destruct] */

void FUN_1042a9134(void)

{
  return;
}



/* Entry: 1042a9138; end: 1042a9157;  */

void FUN_1042a9138(void)

{
  _objc_opt_self(&PTR_PTR_1129946f0);
  return;
}



/* Entry: 1042a9158; end: 1042a915b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9158(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306b298) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a915c; end: 1042a918b;  */

void FUN_1042a915c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042a93ac(param_1);
  return;
}



/* Entry: 1042a918c; end: 1042a9293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042a918c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  uint uVar4;
  long lVar5;
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
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_11306b2c8);
      lVar3 = *(long *)(lStack_58 + _DAT_11306b2c8);
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar3);
        _objc_release(lStack_58);
        if (lVar3 == 0) {
          uVar4 = 1;
          goto LAB_1042a9248;
        }
        _swift_bridgeObjectRelease(lVar3);
      }
      else {
        if (lVar3 != 0) {
          _swift_bridgeObjectRetain(lVar3);
          lVar2 = lVar5;
          _swift_bridgeObjectRetain(lVar5);
          uVar4 = (uint)lVar2;
          func_0x00010422a6a8();
          _swift_bridgeObjectRelease(lVar5);
          _swift_bridgeObjectRelease(lVar3);
          _objc_release(lStack_58);
          goto LAB_1042a9248;
        }
        _objc_release(lStack_58);
      }
    }
  }
  uVar4 = 0;
LAB_1042a9248:
  return uVar4 & 1;
}



/* Entry: 1042a9294; end: 1042a933b; -[SCAdToLensTrackInfo lensCarouselTrackInfoList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9294(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306b2c8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10428c074(0);
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



/* Entry: 1042a933c; end: 1042a93ab; -[SCAdToLensTrackInfo initWithLensCarouselTrackInfoList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a933c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  if (param_3 != 0) {
    FUN_10428c074();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,lVar2);
    lVar2 = param_3;
  }
  *(long *)(param_1 + _DAT_11306b2c8) = lVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a93ac; end: 1042a9543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a93ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_210 [200];
  undefined *puStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _swift_getObjectType();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      _swift_bridgeObjectRelease(param_1);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_148 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209fb8(0,lVar4,0);
      puVar5 = puStack_148;
      uVar2 = 0;
      FUN_10428c074(0);
      lVar6 = 0x20;
      do {
        puVar3 = (undefined8 *)(param_1 + lVar6);
        uStack_128 = puVar3[1];
        uStack_130 = *puVar3;
        uStack_118 = puVar3[3];
        uStack_120 = puVar3[2];
        uStack_108 = puVar3[5];
        uStack_110 = puVar3[4];
        uStack_f8 = puVar3[7];
        uStack_100 = puVar3[6];
        uStack_e8 = puVar3[9];
        uStack_f0 = puVar3[8];
        uStack_d8 = puVar3[0xb];
        uStack_e0 = puVar3[10];
        uStack_c8 = puVar3[0xd];
        uStack_d0 = puVar3[0xc];
        uStack_b8 = puVar3[0xf];
        uStack_c0 = puVar3[0xe];
        uStack_a8 = puVar3[0x11];
        uStack_b0 = puVar3[0x10];
        uStack_98 = puVar3[0x13];
        uStack_a0 = puVar3[0x12];
        uStack_88 = puVar3[0x15];
        uStack_90 = puVar3[0x14];
        uStack_78 = puVar3[0x17];
        uStack_80 = puVar3[0x16];
        uStack_70 = puVar3[0x18];
        _objc_allocWithZone(uVar2);
        func_0x0001034a23e8(&uStack_130,auStack_210);
        puVar3 = &uStack_130;
        FUN_10428a770();
        uVar1 = *(ulong *)(puVar5 + 0x10);
        puStack_148 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          func_0x000104209fb8(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
        }
        puVar5 = puStack_148;
        *(ulong *)(puStack_148 + 0x10) = uVar1 + 1;
        *(undefined8 **)(puStack_148 + uVar1 * 8 + 0x20) = puVar3;
        lVar6 = lVar6 + 200;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      _swift_bridgeObjectRelease(param_1);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306b2c8) = puVar5;
  _objc_msgSendSuper2(&stack0xfffffffffffffec0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a9544; end: 1042a95ef; -[SCAdToLensTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1042a9544(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(param_1 + _DAT_11306b2c8);
  if (lVar2 == 0) {
    _objc_retain(param_1);
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10428c074(0);
    _objc_retain(param_1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1042a95f0; end: 1042a966f; -[SCAdToLensTrackInfo isEqual:] */

uint FUN_1042a95f0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042a918c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042a9670; end: 1042a9673; -[SCAdToLensTrackInfo copyWithZone:] */

void FUN_1042a9670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a9674; end: 1042a9737; -[SCAdToLensTrackInfo encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11306b2c8);
  if (lVar2 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_1);
  }
  else {
    uVar1 = 0;
    FUN_10428c074(0);
    _objc_retain(param_3);
    _objc_retain(param_1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
  }
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f2800);
  func_0x00010bf93020(param_3);
  _swift_unknownObjectRelease(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a9738; end: 1042a9767;  */

void FUN_1042a9738(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042a9768(param_1);
  return;
}



/* Entry: 1042a9768; end: 1042a9897;  */

undefined8 FUN_1042a9768(long param_1)

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
  
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f2800);
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
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0x11306b2d0;
    func_0x0001000285a8(0x11306b2d0,&UNK_10dce5c88);
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = 0;
      FUN_10428c074(0);
      uVar1 = uStack_78;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_78,uVar4);
      _swift_bridgeObjectRelease(uStack_78);
      goto LAB_1042a9860;
    }
  }
  uVar1 = 0;
LAB_1042a9860:
  func_0x00010c023260();
  _objc_release(uVar1);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1042a9898; end: 1042a98bf; -[SCAdToLensTrackInfo initWithCoder:] */

void FUN_1042a9898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042a9768();
  return;
}



/* Entry: 1042a98c0; end: 1042a98e7; -[SCAdToLensTrackInfo description] */

void FUN_1042a98c0(void)

{
  _objc_retain();
  FUN_1042a9974();
  _swift_bridgeObjectRelease();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a98e8; end: 1042a9963; -[SCAdToLensTrackInfo init] */

void FUN_1042a98e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdToLensTrackInfoWrapper.swift",0x2d,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a9930);
  (*pcVar1)();
}



/* Entry: 1042a9964; end: 1042a9973; -[SCAdToLensTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306b2c8));
  return;
}



/* Entry: 1042a9974; end: 1042a9b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1042a9974(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(ulong *)(param_1 + _DAT_11306b2c8);
  if (uVar3 == 0) {
    _objc_release();
    puVar4 = (undefined *)0x0;
  }
  else {
    if (uVar3 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar5 = uVar3;
      if (-1 < (long)uVar3) {
        uVar5 = uVar3 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar4;
    if (uVar5 == 0) {
      _objc_release(param_1);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000104209dac(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a9b24);
        (*pcVar1)();
      }
      uVar6 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          uVar2 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
          _objc_retain(uVar2);
        }
        else {
          uVar2 = uVar6;
          func_0x000104208dfc(uVar6,uVar3);
        }
        FUN_10428bc7c(&uStack_130);
        _objc_release(uVar2);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          func_0x000104209dac(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        }
        uVar6 = uVar6 + 1;
        *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x28) = uStack_128;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x20) = uStack_130;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x58) = uStack_f8;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x50) = uStack_100;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x68) = uStack_e8;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x60) = uStack_f0;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x38) = uStack_118;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x30) = uStack_120;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x48) = uStack_108;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x40) = uStack_110;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x98) = uStack_b8;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x90) = uStack_c0;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xa8) = uStack_a8;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xa0) = uStack_b0;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x78) = uStack_d8;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x70) = uStack_e0;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x88) = uStack_c8;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0x80) = uStack_d0;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xe0) = uStack_70;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 200) = uStack_88;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xc0) = uStack_90;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xd8) = uStack_78;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xd0) = uStack_80;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xb8) = uStack_98;
        *(undefined8 *)(puVar4 + uVar2 * 200 + 0xb0) = uStack_a0;
      } while (uVar5 != uVar6);
      _objc_release(param_1);
    }
  }
  return puVar4;
}



/* Entry: 1042a9b24; end: 1042a9b43;  */

void FUN_1042a9b24(void)

{
  _objc_opt_self(&PTR_PTR_1129947c0);
  return;
}



/* Entry: 1042a9b44; end: 1042a9be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1042a9b44(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long unaff_x20;
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
      bVar4 = *(byte *)(unaff_x20 + _DAT_11306b300);
      bVar1 = *(byte *)(lStack_58 + _DAT_11306b300);
      _objc_release();
      bVar4 = bVar4 ^ bVar1 ^ 1;
      goto LAB_1042a9bd0;
    }
  }
  bVar4 = 0;
LAB_1042a9bd0:
  return bVar4 & 1;
}



/* Entry: 1042a9be8; end: 1042a9bfb; -[SCAdToMessageTrackInfo didMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042a9be8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b300);
}



/* Entry: 1042a9bfc; end: 1042a9c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9bfc(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306b300) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a9c48; end: 1042a9c93; -[SCAdToMessageTrackInfo initWithDidMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9c48(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306b300) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a9c94; end: 1042a9cdb; -[SCAdToMessageTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9c94(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11306b300));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042a9cdc; end: 1042a9d5b; -[SCAdToMessageTrackInfo isEqual:] */

uint FUN_1042a9cdc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042a9b44(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042a9d5c; end: 1042a9d5f; -[SCAdToMessageTrackInfo copyWithZone:] */

void FUN_1042a9d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042a9d60; end: 1042a9e77; -[SCAdToMessageTrackInfo encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x5353454d5f444944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5353454d5f444944,0xeb00000000454741);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042a9e78; end: 1042a9eff; -[SCAdToMessageTrackInfo initWithCoder:] */

undefined8 FUN_1042a9e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0x5353454d5f444944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5353454d5f444944,0xeb00000000454741);
  func_0x00010bf66ce0(param_3);
  _objc_release(uVar1);
  func_0x00010c00c660(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1042a9f00; end: 1042a9f1b; -[SCAdToMessageTrackInfo description] */

void FUN_1042a9f00(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042a9f1c; end: 1042a9f97; -[SCAdToMessageTrackInfo init] */

void FUN_1042a9f1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdToMessageTrackInfoWrapper.swift",0x30,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042a9f64);
  (*pcVar1)();
}



/* Entry: 1042a9f98; end: 1042a9f9b; -[SCAdToMessageTrackInfo .cxx_destruct] */

void FUN_1042a9f98(void)

{
  return;
}



/* Entry: 1042a9f9c; end: 1042a9fbb;  */

void FUN_1042a9f9c(void)

{
  _objc_opt_self(&PTR_PTR_112994890);
  return;
}



/* Entry: 1042a9fbc; end: 1042a9fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042a9fbc(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306b300) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042a9fc0; end: 1042a9fef;  */

void FUN_1042a9fc0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042aa478(param_1);
  return;
}



/* Entry: 1042a9ff0; end: 1042a9fff; -[SCAdTopSnapInteractionInfo interactionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042a9ff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b330);
}



/* Entry: 1042aa000; end: 1042aa00f; -[SCAdTopSnapInteractionInfo attachmentTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042aa000(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b338);
}



/* Entry: 1042aa010; end: 1042aa01f; -[SCAdTopSnapInteractionInfo productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b340));
  return;
}



/* Entry: 1042aa020; end: 1042aa02f; -[SCAdTopSnapInteractionInfo tileIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b348));
  return;
}



/* Entry: 1042aa030; end: 1042aa03f; -[SCAdTopSnapInteractionInfo collectionItemIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b350));
  return;
}



/* Entry: 1042aa040; end: 1042aa04f; -[SCAdTopSnapInteractionInfo sourceRelativeLocationX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b358));
  return;
}



/* Entry: 1042aa050; end: 1042aa05f; -[SCAdTopSnapInteractionInfo sourceRelativeLocationY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b360));
  return;
}



/* Entry: 1042aa060; end: 1042aa06f; -[SCAdTopSnapInteractionInfo screenRelativeLocationX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b368));
  return;
}



/* Entry: 1042aa070; end: 1042aa07f; -[SCAdTopSnapInteractionInfo screenRelativeLocationY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b370));
  return;
}



/* Entry: 1042aa080; end: 1042aa08f; -[SCAdTopSnapInteractionInfo screenLocationX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b378));
  return;
}



/* Entry: 1042aa090; end: 1042aa09f; -[SCAdTopSnapInteractionInfo screenLocationY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b380));
  return;
}



/* Entry: 1042aa0a0; end: 1042aa0af; -[SCAdTopSnapInteractionInfo interactionTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042aa0a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b388);
}


