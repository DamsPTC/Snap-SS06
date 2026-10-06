/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104285a64; end: 104285b43; -[SCAdLeadGenerationTrackConsent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306a7d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306a7d0))[1];
  _objc_retain(param_3);
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = 0x4c4542414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x44454b43454843;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44454b43454843,0xe700000000000000);
  func_0x00010bf92da0(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104285b44; end: 104285b73;  */

void FUN_104285b44(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104285b74(param_1);
  return;
}



/* Entry: 104285b74; end: 104285cf3;  */

undefined8 FUN_104285b74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0x4c4542414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4542414c,0xe500000000000000);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = 0x44454b43454843;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44454b43454843,0xe700000000000000);
      func_0x00010bf66ce0(param_1);
      _objc_release(uVar1);
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x00010c0213a0();
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



/* Entry: 104285cf4; end: 104285d1b; -[SCAdLeadGenerationTrackConsent initWithCoder:] */

void FUN_104285cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104285b74();
  return;
}



/* Entry: 104285d1c; end: 104285d37; -[SCAdLeadGenerationTrackConsent description] */

void FUN_104285d1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104285d38; end: 104285db3; -[SCAdLeadGenerationTrackConsent init] */

void FUN_104285d38(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLeadGenerationTrackConsentWrapper.swift",0x38,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104285d80);
  (*pcVar1)();
}



/* Entry: 104285db4; end: 104285dc7; -[SCAdLeadGenerationTrackConsent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a7d0 + 8))
  ;
  return;
}



/* Entry: 104285dc8; end: 104285de7;  */

void FUN_104285dc8(void)

{
  _objc_opt_self(&PTR_PTR_112992cf0);
  return;
}



/* Entry: 104285de8; end: 104285deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285de8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a7d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306a7d8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104285dec; end: 104285dff; -[SCAdLeadGenerationTrackEndPageInteraction userTappedCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104285dec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306a808);
}



/* Entry: 104285e00; end: 104285e97; -[SCAdLeadGenerationTrackEndPageInteraction initWithUserTappedCta:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285e00(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306a808) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104285e98; end: 104285edf; -[SCAdLeadGenerationTrackEndPageInteraction hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104285e98(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11306a808));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104285ee0; end: 104285f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104285ee0(undefined8 param_1)

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
      bVar4 = *(byte *)(unaff_x20 + _DAT_11306a808);
      bVar1 = *(byte *)(lStack_58 + _DAT_11306a808);
      _objc_release();
      bVar4 = bVar4 ^ bVar1 ^ 1;
      goto LAB_104285f6c;
    }
  }
  bVar4 = 0;
LAB_104285f6c:
  return bVar4 & 1;
}



/* Entry: 104285f84; end: 104286003; -[SCAdLeadGenerationTrackEndPageInteraction isEqual:] */

uint FUN_104285f84(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104285ee0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104286004; end: 104286007; -[SCAdLeadGenerationTrackEndPageInteraction copyWithZone:] */

void FUN_104286004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104286008; end: 104286127; -[SCAdLeadGenerationTrackEndPageInteraction encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x5041545f52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5041545f52455355,0xef4154435f444550);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104286128; end: 1042861b3; -[SCAdLeadGenerationTrackEndPageInteraction initWithCoder:] */

undefined8 FUN_104286128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0x5041545f52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5041545f52455355,0xef4154435f444550);
  func_0x00010bf66ce0(param_3);
  _objc_release(uVar1);
  func_0x00010c05f060(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1042861b4; end: 1042861cf; -[SCAdLeadGenerationTrackEndPageInteraction description] */

void FUN_1042861b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042861d0; end: 10428624b; -[SCAdLeadGenerationTrackEndPageInteraction init] */

void FUN_1042861d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLeadGenerationTrackEndPageInteractionWrapper.swift",0x43,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104286218);
  (*pcVar1)();
}



/* Entry: 10428624c; end: 10428624f; -[SCAdLeadGenerationTrackEndPageInteraction .cxx_destruct] */

void FUN_10428624c(void)

{
  return;
}



/* Entry: 104286250; end: 10428626f;  */

void FUN_104286250(void)

{
  _objc_opt_self(&PTR_PTR_112992dc8);
  return;
}



/* Entry: 104286270; end: 104286273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286270(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306a808) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104286274; end: 104286283; -[SCAdLeadGenerationTrackInfo submittedLead] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a838));
  return;
}



/* Entry: 104286284; end: 104286363; -[SCAdLeadGenerationTrackInfo formInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286284(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11306a840))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306a840);
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



/* Entry: 104286364; end: 104286413; -[SCAdLeadGenerationTrackInfo initWithSubmittedLead:formInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286364(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    _objc_retain(param_3);
    param_2 = -0x1000000000000000;
  }
  else {
    _objc_retain(param_3);
    lVar3 = param_4;
    _objc_retain(param_4);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + _DAT_11306a838) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306a840);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104286414; end: 10428654f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104286414(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  long *plVar2;
  long lStack_160;
  long lStack_158;
  undefined1 auStack_110 [8];
  undefined1 auStack_100 [16];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_allocWithZone();
  lStack_98 = param_1[1];
  lStack_a0 = *param_1;
  lStack_88 = param_1[3];
  lStack_90 = param_1[2];
  lStack_78 = param_1[5];
  lStack_80 = param_1[4];
  lStack_68 = param_1[7];
  lStack_70 = param_1[6];
  lStack_58 = param_1[9];
  lStack_60 = param_1[8];
  if (lStack_a0 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    lStack_c8 = param_1[5];
    lStack_d0 = param_1[4];
    lStack_b8 = param_1[7];
    lStack_c0 = param_1[6];
    lStack_a8 = param_1[9];
    lStack_b0 = param_1[8];
    lStack_e8 = param_1[1];
    lStack_f0 = *param_1;
    lStack_d8 = param_1[3];
    lStack_e0 = param_1[2];
    FUN_10428a35c(0);
    _objc_allocWithZone();
    FUN_104286ef8(&lStack_a0,&lStack_160,0x112dcc710,&UNK_10d98f0e0);
    plVar2 = &lStack_f0;
    FUN_104289a78();
    func_0x000104286f40(&lStack_a0,0x112dcc710,&UNK_10d98f0e0);
  }
  *(long **)(unaff_x20 + _DAT_11306a838) = plVar2;
  lStack_158 = param_1[0xb];
  lStack_160 = param_1[10];
  plVar2 = (long *)(unaff_x20 + _DAT_11306a840);
  plVar2[1] = lStack_158;
  *plVar2 = lStack_160;
  FUN_104286ef8(&lStack_160,auStack_100,0x112d56fe0,&UNK_10d91dda0);
  puVar1 = auStack_110;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  func_0x00010178e198(param_1);
  return puVar1;
}



/* Entry: 104286550; end: 104286583; -[SCAdLeadGenerationTrackInfo hash] */

undefined8 FUN_104286550(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104286584();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104286584; end: 10428664b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286584(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_11306a838) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042884ac();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11306a840))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a840);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10428664c; end: 104286883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10428664c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long unaff_x20;
  long lStack_78;
  long alStack_70 [4];
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  FUN_104286ef8(param_1,alStack_70,0x112d387f8,&UNK_10d902650);
  if (alStack_70[3] == 0) {
    func_0x000104286f40(alStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar5 = &lStack_78;
    _swift_dynamicCast(plVar5,alStack_70,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar5 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11306a838) == 0) {
        uVar8 = (uint)(*(long *)(lStack_78 + _DAT_11306a838) == 0);
      }
      else {
        lVar9 = *(long *)(lStack_78 + _DAT_11306a838);
        if (lVar9 == 0) {
          lVar6 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar6 = 0;
          FUN_10428a35c();
        }
        alStack_70[0] = lVar9;
        alStack_70[3] = lVar6;
        _objc_retain(lVar9);
        plVar5 = alStack_70;
        FUN_104288688(plVar5);
        uVar8 = (uint)plVar5;
        func_0x000104286f40(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      uVar1 = *(undefined8 *)(lStack_78 + _DAT_11306a840);
      uVar3 = ((undefined8 *)(lStack_78 + _DAT_11306a840))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a840);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_11306a840))[1];
      if (uVar4 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar1,uVar3);
        if (uVar3 >> 0x3c < 0xf) {
          func_0x000100de78a0(uVar1,uVar3);
          func_0x000100de78a0(uVar2,uVar4);
          uVar7 = uVar2;
          func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
          func_0x0001000b44c0(uVar1,uVar3);
          _objc_release(lStack_78);
          func_0x0001000b44c0(uVar1,uVar3);
          func_0x0001000b44c0(uVar2,uVar4);
          uVar8 = uVar8 & (uint)uVar7;
          goto LAB_104286708;
        }
        func_0x000100de78a0(uVar2,uVar4);
        _objc_release(lStack_78);
      }
      else {
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        _objc_release(lStack_78);
        if (0xe < uVar3 >> 0x3c) {
          func_0x0001000b44c0(uVar2,uVar4);
          uVar8 = uVar8 & 1;
          goto LAB_104286708;
        }
      }
      func_0x0001000b44c0(uVar2,uVar4);
      func_0x0001000b44c0(uVar1,uVar3);
      uVar8 = 0;
      goto LAB_104286708;
    }
  }
  uVar8 = 0;
LAB_104286708:
  return uVar8 & 1;
}



/* Entry: 104286884; end: 104286913; -[SCAdLeadGenerationTrackInfo isEqual:] */

uint FUN_104286884(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10428664c(&uStack_40);
  _objc_release(param_1);
  func_0x000104286f40(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 104286914; end: 104286917; -[SCAdLeadGenerationTrackInfo copyWithZone:] */

void FUN_104286914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104286918; end: 1042869f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286918(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x455454494d425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455454494d425553,0xee004441454c5f44);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11306a840))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a840);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0eb0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1042869f4; end: 104286a43; -[SCAdLeadGenerationTrackInfo encodeWithCoder:] */

void FUN_1042869f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104286918(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104286a44; end: 104286a73;  */

void FUN_104286a44(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104286a74(param_1);
  return;
}



/* Entry: 104286a74; end: 104286c9b;  */

undefined8 FUN_104286a74(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar2 = (int)&uStack_90;
  uVar6 = 0;
  uVar3 = 0x455454494d425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455454494d425553,0xee004441454c5f44);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x000104286f40(&uStack_60,0x112d387f8,&UNK_10d902650);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_10428a35c(0);
    _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,uVar3,6);
    uVar3 = uStack_90;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0eb0);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x000104286f40(&uStack_60,0x112d387f8,&UNK_10d902650);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
    if ((uVar6 & 1) != 0) {
      func_0x00010006c00c(uStack_90,uStack_88);
      uVar5 = uStack_90;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uStack_90,uStack_88);
      func_0x00010006c090(uStack_90,uStack_88);
      goto LAB_104286c48;
    }
  }
  uVar5 = 0;
  uStack_90 = 0;
  uStack_88 = 0xf000000000000000;
LAB_104286c48:
  func_0x00010c04eee0();
  func_0x0001000b44c0(uStack_90,uStack_88);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar3);
  return unaff_x20;
}



/* Entry: 104286c9c; end: 104286cc3; -[SCAdLeadGenerationTrackInfo initWithCoder:] */

void FUN_104286c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104286a74();
  return;
}



/* Entry: 104286cc4; end: 104286cfb; -[SCAdLeadGenerationTrackInfo description] */

void FUN_104286cc4(void)

{
  undefined1 auStack_70 [96];
  
  _objc_retain();
  FUN_104286db4(auStack_70);
  func_0x00010178e198(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104286cfc; end: 104286d77; -[SCAdLeadGenerationTrackInfo init] */

void FUN_104286cfc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLeadGenerationTrackInfoWrapper.swift",0x35,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104286d44);
  (*pcVar1)();
}



/* Entry: 104286d78; end: 104286db3; -[SCAdLeadGenerationTrackInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286d78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a838));
  uVar2 = *(ulong *)(param_1 + _DAT_11306a840);
  uVar1 = ((ulong *)(param_1 + _DAT_11306a840))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104286db4; end: 104286ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286db4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [96];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0xf000000000000000;
  if (*(long *)(param_2 + _DAT_11306a838) == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
  }
  else {
    _objc_retain();
    func_0x000104289e88(&uStack_90);
    uStack_248 = uStack_88;
    uStack_250 = uStack_90;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_228 = uStack_68;
    uStack_230 = uStack_70;
    uStack_218 = uStack_78;
    uStack_220 = uStack_80;
  }
  func_0x000104286f40(&uStack_f0,0x112dcc710,&UNK_10d98f0e0);
  uStack_e8 = uStack_248;
  uStack_f0 = uStack_250;
  uStack_d8 = uStack_218;
  uStack_e0 = uStack_220;
  uStack_c8 = uStack_228;
  uStack_d0 = uStack_230;
  uStack_b8 = uStack_238;
  uStack_c0 = uStack_240;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11306a840);
  uVar2 = ((undefined8 *)(param_2 + _DAT_11306a840))[1];
  uStack_b0 = uStack_50;
  uStack_a8 = uStack_48;
  func_0x000100de78a0(uVar1,uVar2);
  _objc_release(param_2);
  func_0x0001000b44c0(uStack_a0,uStack_98);
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  uStack_178 = uStack_b8;
  uStack_180 = uStack_c0;
  uStack_1a8 = uStack_e8;
  uStack_1b0 = uStack_f0;
  uStack_198 = uStack_d8;
  uStack_1a0 = uStack_e0;
  uStack_168 = uStack_a8;
  uStack_170 = uStack_b0;
  uStack_148 = uStack_e8;
  uStack_150 = uStack_f0;
  uStack_138 = uStack_d8;
  uStack_140 = uStack_e0;
  uStack_128 = uStack_c8;
  uStack_130 = uStack_d0;
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_160 = uVar1;
  uStack_158 = uVar2;
  uStack_100 = uVar1;
  uStack_f8 = uVar2;
  uStack_a0 = uVar1;
  uStack_98 = uVar2;
  func_0x00010178e15c(&uStack_1b0,auStack_210);
  func_0x00010178e198(&uStack_150);
  param_1[5] = uStack_188;
  param_1[4] = uStack_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = uStack_168;
  param_1[8] = uStack_170;
  param_1[0xb] = uStack_158;
  param_1[10] = uStack_160;
  param_1[1] = uStack_1a8;
  *param_1 = uStack_1b0;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  return;
}



/* Entry: 104286ef8; end: 104286f7f;  */

undefined8 FUN_104286ef8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104286f80; end: 104286f9f;  */

void FUN_104286f80(void)

{
  _objc_opt_self(&PTR_PTR_112992e98);
  return;
}



/* Entry: 104286fa0; end: 104286faf; -[SCAdLeadGenerationTrackSubmittedField identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a870));
  return;
}



/* Entry: 104286fb0; end: 10428700b; -[SCAdLeadGenerationTrackSubmittedField value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104286fb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a878))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a878);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10428700c; end: 10428701f; -[SCAdLeadGenerationTrackSubmittedField subValues] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428700c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a880);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104287020; end: 10428702f; -[SCAdLeadGenerationTrackSubmittedField fieldInputMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104287020(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a888);
}



/* Entry: 104287030; end: 104287043; -[SCAdLeadGenerationTrackSubmittedField subFieldInputMethods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104287030(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a890);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104287044; end: 1042870a3;  */

void FUN_104287044(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1042870a4; end: 10428714f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042870a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a870) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a878);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a880) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a888) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a890) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104287150; end: 1042873bb; -[SCAdLeadGenerationTrackSubmittedField initWithIdentifier:value:subValues:fieldInputMethod:subFieldInputMethods:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104287150(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_5 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  if (param_7 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_7,PTR___sSSN_11034da80,PTR___sSuN_11034e220,PTR___sSSSHsWP_11034da90);
  }
  _objc_retain();
  *(undefined8 *)(param_1 + _DAT_11306a870) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306a878);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_11306a880) = param_5;
  *(undefined8 *)(param_1 + _DAT_11306a888) = param_6;
  *(long *)(param_1 + _DAT_11306a890) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042873bc; end: 1042873ef; -[SCAdLeadGenerationTrackSubmittedField hash] */

undefined8 FUN_1042873bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042873f0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042873f0; end: 10428753f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042873f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  func_0x0001047f4578();
  __ss6HasherV8_combineyySuF();
  if (((undefined8 *)(unaff_x20 + _DAT_11306a878))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a878);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306a880);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a888));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306a890);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___sSSN_11034da80,PTR___sSuN_11034e220,PTR___sSSSHsWP_11034da90);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104287540; end: 10428777f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104287540(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long unaff_x20;
  uint uVar11;
  uint uVar12;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  FUN_104287780(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
    return 0;
  }
  plVar3 = &lStack_88;
  _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
  if (((ulong)plVar3 & 1) == 0) {
    return 0;
  }
  uVar9 = *(undefined8 *)(lStack_88 + _DAT_11306a870);
  uVar4 = 0;
  func_0x0001047f4c4c();
  auStack_80[0] = uVar9;
  lStack_68 = uVar4;
  _objc_retain(uVar9);
  puVar5 = auStack_80;
  func_0x0001047f4618(puVar5);
  func_0x00010006e7f4(auStack_80);
  lVar7 = ((long *)(unaff_x20 + _DAT_11306a878))[1];
  lVar8 = ((long *)(lStack_88 + _DAT_11306a878))[1];
  uVar10 = (uint)(lVar7 == 0 && lVar8 == 0);
  if (lVar7 != 0 && lVar8 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_11306a878);
    if (lVar6 == *(long *)(lStack_88 + _DAT_11306a878) && lVar7 == lVar8) {
      uVar10 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar10 = (uint)lVar6;
    }
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_11306a880);
  lVar7 = *(long *)(lStack_88 + _DAT_11306a880);
  uVar11 = (uint)(lVar8 == 0 && lVar7 == 0);
  if ((lVar8 != 0) && (lVar7 != 0)) {
    _swift_bridgeObjectRetain(lVar7);
    lVar6 = lVar8;
    _swift_bridgeObjectRetain(lVar8);
    uVar11 = (uint)lVar6;
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(lVar8);
    _swift_bridgeObjectRelease(lVar7);
  }
  iVar1 = *(int *)(unaff_x20 + _DAT_11306a888);
  iVar2 = *(int *)(lStack_88 + _DAT_11306a888);
  lVar8 = *(long *)(unaff_x20 + _DAT_11306a890);
  lVar7 = *(long *)(lStack_88 + _DAT_11306a890);
  if (lVar8 == 0) {
    _swift_bridgeObjectRetain(lVar7);
    _objc_release(lStack_88);
    if (lVar7 == 0) {
      uVar12 = 1;
      goto LAB_104287748;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  else {
    if (lVar7 != 0) {
      _swift_bridgeObjectRetain(lVar7);
      lVar6 = lVar8;
      _swift_bridgeObjectRetain(lVar8);
      uVar12 = (uint)lVar6;
      FUN_104288098();
      _swift_bridgeObjectRelease(lVar8);
      _swift_bridgeObjectRelease(lVar7);
      _objc_release(lStack_88);
      goto LAB_104287748;
    }
    _objc_release(lStack_88);
  }
  uVar12 = 0;
LAB_104287748:
  return (uint)puVar5 & uVar10 & uVar11 & iVar1 == iVar2 & uVar12;
}



/* Entry: 104287780; end: 1042877c7;  */

undefined8 FUN_104287780(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1042877c8; end: 104287847; -[SCAdLeadGenerationTrackSubmittedField isEqual:] */

uint FUN_1042877c8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104287540(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104287848; end: 10428784b; -[SCAdLeadGenerationTrackSubmittedField copyWithZone:] */

void FUN_104287848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10428784c; end: 104287a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428784c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a878))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a878);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x45554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a880);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = 0x554c41565f425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554c41565f425553,0xea00000000005345);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0f10);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a890);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar3,PTR___sSSN_11034da80,PTR___sSuN_11034e220,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f0f30);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104287a50; end: 104287a9f; -[SCAdLeadGenerationTrackSubmittedField encodeWithCoder:] */

void FUN_104287a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10428784c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104287aa0; end: 104287acf;  */

void FUN_104287aa0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104287ad0(param_1);
  return;
}



/* Entry: 104287ad0; end: 104287f63;  */

undefined8 FUN_104287ad0(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar5;
  int iVar6;
  
  uVar9 = 0;
  iVar4 = (int)&lStack_b0;
  iVar5 = (int)&lStack_b0;
  iVar6 = (int)&lStack_b0;
  uVar7 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  uVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (uVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar8);
    _swift_unknownObjectRelease(uVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar7 = 0;
    func_0x0001047f4c4c(0);
    puVar2 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&lStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar7,6);
    lVar3 = lStack_b0;
    if ((uVar9 & 1) == 0) {
      _objc_release(param_1);
    }
    else {
      uVar7 = 0x45554c4156;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c4156,0xe500000000000000);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar9 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        lVar10 = 0;
        lVar11 = 0;
      }
      else {
        _swift_dynamicCast(&lStack_b0,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
        lVar10 = lStack_a8;
        lVar11 = lStack_b0;
        if (iVar4 == 0) {
          lVar11 = 0;
          lVar10 = 0;
        }
      }
      uVar7 = 0x554c41565f425553;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554c41565f425553,0xea00000000005345);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar9 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        lVar12 = 0;
      }
      else {
        uVar7 = 0x112d550a0;
        func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
        _swift_dynamicCast(&lStack_b0,&uStack_80,puVar2 + 8,uVar7,6);
        lVar12 = lStack_b0;
        if (iVar5 == 0) {
          lVar12 = 0;
        }
      }
      uVar7 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0f10);
      uVar9 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar7);
      if (uVar9 < 5) {
        uVar7 = 0xd000000000000017;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f0f30)
        ;
        uVar9 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar9 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar9);
          _swift_unknownObjectRelease(uVar9);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          func_0x00010006e7f4(&uStack_80);
          lVar1 = 0;
        }
        else {
          uVar7 = 0x112e33f00;
          func_0x0001000285a8(0x112e33f00,&UNK_10da1d6e0);
          _swift_dynamicCast(&lStack_b0,&uStack_80,puVar2 + 8,uVar7,6);
          lVar1 = lStack_b0;
          if (iVar6 == 0) {
            lVar1 = 0;
          }
        }
        if (lVar10 == 0) {
          lVar11 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar11,lVar10);
          _swift_bridgeObjectRelease(lVar10);
        }
        if (lVar12 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar12;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (lVar12,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
          _swift_bridgeObjectRelease(lVar12);
        }
        if (lVar1 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = lVar1;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (lVar1,PTR___sSSN_11034da80,PTR___sSuN_11034e220,PTR___sSSSHsWP_11034da90);
          _swift_bridgeObjectRelease(lVar1);
        }
        func_0x00010c01bd00();
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar12);
        _objc_release(param_1);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(lVar3);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(lVar12);
      _swift_bridgeObjectRelease(lVar10);
    }
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104287f64; end: 104287f8b; -[SCAdLeadGenerationTrackSubmittedField initWithCoder:] */

void FUN_104287f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104287ad0();
  return;
}



/* Entry: 104287f8c; end: 104287fbf; -[SCAdLeadGenerationTrackSubmittedField description] */

void FUN_104287f8c(void)

{
  undefined1 auStack_58 [72];
  
  FUN_104288388(auStack_58);
  func_0x0001034ab024(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104287fc0; end: 10428803b; -[SCAdLeadGenerationTrackSubmittedField init] */

void FUN_104287fc0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLeadGenerationTrackSubmittedFieldWrapper.swift",0x3f,2,0x71,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104288008);
  (*pcVar1)();
}



/* Entry: 10428803c; end: 104288097; -[SCAdLeadGenerationTrackSubmittedField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428803c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a870));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a878 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a880));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306a890));
  return;
}



/* Entry: 104288098; end: 104288387;  */

undefined8 FUN_104288098(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 == param_2) {
    uVar8 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
    _swift_bridgeObjectRetain_n(param_1,2);
    _swift_bridgeObjectRetain(param_2);
    lVar4 = 0;
    do {
      if (uVar10 == 0) {
        do {
          lVar9 = lVar4 + 1;
          if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104288214);
            (*pcVar2)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
            uVar8 = 1;
            lVar4 = param_2;
            param_2 = param_1;
            goto LAB_1042881dc;
          }
          uVar10 = ((ulong *)(param_1 + 0x40))[lVar9];
          lVar4 = lVar4 + 1;
        } while (uVar10 == 0);
        uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
      }
      else {
        uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar9 = lVar4;
      }
      uVar6 = LZCOUNT(uVar5) | lVar9 << 6;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      lVar3 = *plVar1;
      uVar5 = plVar1[1];
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
      _swift_bridgeObjectRetain(uVar5);
      uVar6 = uVar5;
      func_0x000100029284();
      _swift_bridgeObjectRelease(uVar5);
    } while (((uVar6 & 1) != 0) &&
            (lVar4 = lVar9, *(long *)(*(long *)(param_2 + 0x38) + lVar3 * 8) == lVar11));
    uVar8 = 0;
    lVar4 = param_1;
LAB_1042881dc:
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 104288388; end: 10428844b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104288388(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(param_2 + _DAT_11306a870);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_1130901a8);
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130901b0);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11306a880);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11306a888);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11306a890);
  puVar2 = (undefined8 *)(param_2 + _DAT_11306a878);
  *param_1 = *(undefined8 *)(lVar3 + _DAT_1130901a0);
  param_1[1] = uVar4;
  uVar4 = puVar1[1];
  uVar9 = *puVar1;
  uVar8 = puVar2[1];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  param_1[3] = puVar1[1];
  param_1[2] = uVar9;
  param_1[5] = uVar11;
  param_1[4] = uVar10;
  param_1[6] = uVar6;
  param_1[7] = uVar5;
  param_1[8] = uVar7;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar7);
  return;
}



/* Entry: 10428844c; end: 10428846b;  */

void FUN_10428844c(void)

{
  _objc_opt_self(&PTR_PTR_112992f70);
  return;
}



/* Entry: 10428846c; end: 1042884ab;  */

undefined8 FUN_10428846c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104289a78(param_1);
  func_0x0001017b6434(param_1);
  return uVar1;
}



/* Entry: 1042884ac; end: 104288687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042884ac(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306a8c8);
  uVar1 = 0;
  FUN_10428844c(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar1);
  uVar1 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_11306a8d0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar1 = 0;
    FUN_104285dc8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar1);
    lVar5 = lVar4;
    func_0x00010bfde980();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a8d8));
  lVar4 = *(long *)(unaff_x20 + _DAT_11306a8e0);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    uVar2 = (ulong)*(byte *)(lVar4 + _DAT_11306a808);
    __ss6HasherV8_combineyys5UInt8VF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a8e8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a8f0));
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11306a8f8))[1] >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306a8f8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a900));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a908));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104288688; end: 1042889cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104288688(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uStack_9c;
  uint uStack_90;
  long lStack_88;
  long alStack_80 [4];
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  FUN_10428a37c(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
    return 0;
  }
  plVar11 = &lStack_88;
  _swift_dynamicCast(plVar11,alStack_80,PTR___sypN_11034f1a8 + 8,lVar14,6);
  if (((ulong)plVar11 & 1) == 0) {
    return 0;
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11306a8c8);
  uVar15 = *(undefined8 *)(lStack_88 + _DAT_11306a8c8);
  _swift_bridgeObjectRetain(uVar15);
  FUN_10422a5cc(uVar13,uVar15);
  _swift_bridgeObjectRelease(uVar15);
  lVar16 = *(long *)(unaff_x20 + _DAT_11306a8d0);
  lVar14 = *(long *)(lStack_88 + _DAT_11306a8d0);
  if (lVar16 == 0 || lVar14 == 0) {
    uStack_90 = (uint)(lVar16 == 0 && lVar14 == 0);
  }
  else {
    _swift_bridgeObjectRetain(lVar14);
    lVar12 = lVar16;
    _swift_bridgeObjectRetain();
    uStack_90 = (uint)lVar12;
    func_0x00010422a5e0();
    _swift_bridgeObjectRelease(lVar16);
    _swift_bridgeObjectRelease(lVar14);
  }
  iVar5 = *(int *)(unaff_x20 + _DAT_11306a8d8);
  iVar6 = *(int *)(lStack_88 + _DAT_11306a8d8);
  if (*(long *)(unaff_x20 + _DAT_11306a8e0) == 0) {
    uStack_9c = (uint)(*(long *)(lStack_88 + _DAT_11306a8e0) == 0);
  }
  else {
    lVar14 = *(long *)(lStack_88 + _DAT_11306a8e0);
    if (lVar14 == 0) {
      lVar16 = 0;
      alStack_80[1] = 0;
      alStack_80[2] = 0;
    }
    else {
      lVar16 = 0;
      FUN_104286250();
    }
    alStack_80[0] = lVar14;
    alStack_80[3] = lVar16;
    _objc_retain(lVar14);
    uStack_9c = (uint)alStack_80;
    FUN_104285ee0();
    func_0x00010006e7f4(alStack_80);
  }
  iVar7 = *(int *)(unaff_x20 + _DAT_11306a8e8);
  iVar8 = *(int *)(lStack_88 + _DAT_11306a8e8);
  iVar9 = *(int *)(unaff_x20 + _DAT_11306a8f0);
  iVar10 = *(int *)(lStack_88 + _DAT_11306a8f0);
  uVar15 = *(undefined8 *)(lStack_88 + _DAT_11306a8f8);
  uVar3 = ((undefined8 *)(lStack_88 + _DAT_11306a8f8))[1];
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_11306a8f8);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_11306a8f8))[1];
  if (uVar4 >> 0x3c < 0xf) {
    if (uVar3 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar15,uVar3);
      func_0x000100de78a0(uVar15,uVar3);
      func_0x000100de78a0(uVar17,uVar4);
      uVar18 = uVar17;
      func_0x000100e25fcc(uVar17,uVar4,uVar15,uVar3);
      uVar20 = (uint)uVar18;
      func_0x0001000b44c0(uVar15,uVar3);
      func_0x0001000b44c0(uVar15,uVar3);
      func_0x0001000b44c0(uVar17,uVar4);
      goto LAB_104288940;
    }
  }
  else if (0xe < uVar3 >> 0x3c) {
    func_0x000100de78a0(uVar15,uVar3);
    func_0x000100de78a0(uVar17,uVar4);
    func_0x0001000b44c0(uVar17,uVar4);
    uVar20 = 1;
    goto LAB_104288940;
  }
  func_0x000100de78a0(uVar15,uVar3);
  func_0x000100de78a0(uVar17,uVar4);
  func_0x0001000b44c0(uVar17,uVar4);
  func_0x0001000b44c0(uVar15,uVar3);
  uVar20 = 0;
LAB_104288940:
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_11306a900);
  uVar18 = *(undefined8 *)(lStack_88 + _DAT_11306a900);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11306a908);
  uVar19 = *(undefined8 *)(lStack_88 + _DAT_11306a908);
  _objc_release(lStack_88);
  uVar2 = 0;
  if (iVar7 == iVar8) {
    uVar2 = (uint)uVar13 & uStack_90 & iVar5 == iVar6 & uStack_9c;
  }
  uVar1 = 0;
  if (iVar9 == iVar10) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if ((int)uVar17 == (int)uVar18) {
    uVar2 = uVar1 & uVar20;
  }
  if ((int)uVar15 == (int)uVar19) {
    return uVar2;
  }
  return 0;
}



/* Entry: 1042889d0; end: 104288a13;  */

void FUN_1042889d0(undefined8 *param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000104289e88(&uStack_70);
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 104288a14; end: 104288a63; -[SCAdLeadGenerationTrackSubmittedLead collectedFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104288a14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306a8c8);
  FUN_10428844c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104288a64; end: 104288abf; -[SCAdLeadGenerationTrackSubmittedLead consentCheckboxes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104288a64(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a8d0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104285dc8(0);
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



/* Entry: 104288ac0; end: 104288acf; -[SCAdLeadGenerationTrackSubmittedLead leadPreferredStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104288ac0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a8d8);
}



/* Entry: 104288ad0; end: 104288adf; -[SCAdLeadGenerationTrackSubmittedLead endPageInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104288ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a8e0));
  return;
}



/* Entry: 104288ae0; end: 104288aef; -[SCAdLeadGenerationTrackSubmittedLead strategyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104288ae0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a8e8);
}



/* Entry: 104288af0; end: 104288aff; -[SCAdLeadGenerationTrackSubmittedLead autofillConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104288af0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a8f0);
}



/* Entry: 104288b00; end: 104288b73; -[SCAdLeadGenerationTrackSubmittedLead leadCertificateData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104288b00(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11306a8f8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306a8f8);
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



/* Entry: 104288b74; end: 104288b83; -[SCAdLeadGenerationTrackSubmittedLead phoneVerificationMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104288b74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a900);
}



/* Entry: 104288b84; end: 104288b93; -[SCAdLeadGenerationTrackSubmittedLead submissionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104288b84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a908);
}



/* Entry: 104288b94; end: 104288d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104288b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a8c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a8d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a8d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a8e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a8e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a8f0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a8f8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a900) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306a908) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104288d7c; end: 104288eb7; -[SCAdLeadGenerationTrackSubmittedLead initWithCollectedFields:consentCheckboxes:leadPreferredStatus:endPageInteraction:strategyType:autofillConfig:leadCertificateData:phoneVerificationMethod:submissionSource:] */

void FUN_104288d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_10428844c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_104285dc8(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  }
  _objc_retain();
  if (param_9 == 0) {
    uVar1 = 0xf000000000000000;
  }
  else {
    lVar2 = param_9;
    _objc_retain(param_9);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_9);
    _objc_release(lVar2);
  }
  func_0x000104288c88(param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar1,param_10,
                      param_11);
  return;
}



/* Entry: 104288eb8; end: 104288ee7;  */

undefined8 FUN_104288eb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104289a78();
  func_0x0001017b6434(param_1);
  return uVar1;
}



/* Entry: 104288ee8; end: 104288f1b; -[SCAdLeadGenerationTrackSubmittedLead hash] */

undefined8 FUN_104288ee8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042884ac();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104288f1c; end: 104288f9b; -[SCAdLeadGenerationTrackSubmittedLead isEqual:] */

uint FUN_104288f1c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104288688(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104288f9c; end: 104288f9f; -[SCAdLeadGenerationTrackSubmittedLead copyWithZone:] */

void FUN_104288f9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104288fa0; end: 10428929f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104288fa0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a8c8);
  uVar1 = 0;
  FUN_10428844c(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0f90);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a8d0);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_104285dc8(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0fb0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0fd0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f0ff0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5947455441525453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5947455441525453,0xed0000455059545f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4c4c49464f545541;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c49464f545541,0xef4749464e4f435f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11306a8f8))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a8f8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1010);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f1030);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f1050);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042892a0; end: 1042892ef; -[SCAdLeadGenerationTrackSubmittedLead encodeWithCoder:] */

void FUN_1042892a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104288fa0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042892f0; end: 10428931f;  */

void FUN_1042892f0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104289320(param_1);
  return;
}



/* Entry: 104289320; end: 10428993f;  */

undefined8 FUN_104289320(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 unaff_x20;
  ulong uVar9;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f0f90);
  uVar9 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar9);
    _swift_unknownObjectRelease(uVar9);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
    goto LAB_1042896cc;
  }
  uVar2 = 0x11306a910;
  func_0x0001000285a8(0x11306a910,&UNK_10dce5878);
  puVar1 = PTR___sypN_11034f1a8;
  puVar3 = &uStack_b0;
  _swift_dynamicCast(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar2,6);
  uVar9 = uStack_b0;
  if (((ulong)puVar3 & 1) == 0) {
LAB_104289468:
    _objc_release(param_1);
  }
  else {
    uVar2 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f0fb0);
    uVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar4 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar4);
      _swift_unknownObjectRelease(uVar4);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&uStack_80);
      uVar4 = 0;
    }
    else {
      uVar2 = 0x11306a918;
      func_0x0001000285a8(0x11306a918,&UNK_10dce5880);
      puVar3 = &uStack_b0;
      _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,uVar2,6);
      uVar4 = uStack_b0;
      if ((int)puVar3 == 0) {
        uVar4 = 0;
      }
    }
    uVar2 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f0fd0);
    uVar5 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    if (uVar5 < 3) {
      uVar2 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f0ff0);
      uVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar5 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar5);
        _swift_unknownObjectRelease(uVar5);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar5 = 0;
      }
      else {
        uVar2 = 0;
        FUN_104286250(0);
        puVar3 = &uStack_b0;
        _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,uVar2,6);
        uVar5 = uStack_b0;
        if ((int)puVar3 == 0) {
          uVar5 = 0;
        }
      }
      uVar2 = 0x5947455441525453;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5947455441525453,0xed0000455059545f);
      uVar6 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar2);
      if (uVar6 < 3) {
        uVar2 = 0x4c4c49464f545541;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c49464f545541,0xef4749464e4f435f)
        ;
        uVar6 = param_1;
        func_0x00010bf66f40();
        _objc_release(uVar2);
        if (uVar6 < 3) {
          uVar2 = 0xd000000000000015;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000015,0x800000010f1f1010);
          uVar6 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (uVar6 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar6);
            _swift_unknownObjectRelease(uVar6);
          }
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            func_0x00010006e7f4(&uStack_80);
            uStack_b8 = 0;
            uVar6 = 0xf000000000000000;
          }
          else {
            puVar3 = &uStack_b0;
            _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
            uVar6 = uStack_a8;
            uStack_b8 = uStack_b0;
            if ((int)puVar3 == 0) {
              uStack_b8 = 0;
              uVar6 = 0xf000000000000000;
            }
          }
          uVar2 = 0xd000000000000019;
          uVar8 = 0xf1f1030;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019);
          func_0x00010bf66f40();
          _objc_release(uVar2);
          FUN_10428a34c();
          if ((uVar8 & 0xff) != 1) {
            uVar2 = 0xd000000000000011;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000011,0x800000010f1f1050);
            uVar7 = param_1;
            func_0x00010bf66f40();
            _objc_release(uVar2);
            if (uVar7 < 3) {
              uVar2 = 0;
              FUN_10428844c(0);
              uVar7 = uVar9;
              __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar9,uVar2);
              _swift_bridgeObjectRelease(uVar9);
              if (uVar4 == 0) {
                uStack_c0 = 0;
              }
              else {
                uVar2 = 0;
                FUN_104285dc8(0);
                uStack_c0 = uVar4;
                __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,uVar2);
                _swift_bridgeObjectRelease(uVar4);
              }
              if (uVar6 >> 0x3c < 0xf) {
                func_0x00010006c00c(uStack_b8,uVar6);
                uVar9 = uStack_b8;
                __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uStack_b8,uVar6);
                func_0x0001000b44c0(uStack_b8,uVar6);
              }
              else {
                uVar9 = 0;
              }
              func_0x00010bfff720();
              _objc_release(uVar5);
              func_0x0001000b44c0(uStack_b8,uVar6);
              _objc_release(uVar7);
              _objc_release(uStack_c0);
              _objc_release(uVar9);
              _objc_release(param_1);
              return unaff_x20;
            }
          }
          _swift_bridgeObjectRelease(uVar9);
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uVar4);
          func_0x0001000b44c0(uStack_b8,uVar6);
          param_1 = uVar5;
          goto LAB_104289468;
        }
      }
      _objc_release(uVar5);
    }
    _swift_bridgeObjectRelease(uVar9);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uVar4);
  }
LAB_1042896cc:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104289940; end: 104289967; -[SCAdLeadGenerationTrackSubmittedLead initWithCoder:] */

void FUN_104289940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104289320();
  return;
}



/* Entry: 104289968; end: 10428999f; -[SCAdLeadGenerationTrackSubmittedLead description] */

void FUN_104289968(void)

{
  undefined1 auStack_60 [80];
  
  _objc_retain();
  func_0x000104289e88(auStack_60);
  func_0x0001017b6434(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042899a0; end: 104289a1b; -[SCAdLeadGenerationTrackSubmittedLead init] */

void FUN_1042899a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLeadGenerationTrackSubmittedLeadWrapper.swift",0x3e,2,0xa9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042899e8);
  (*pcVar1)();
}



/* Entry: 104289a1c; end: 104289a77; -[SCAdLeadGenerationTrackSubmittedLead .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104289a1c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a8c8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a8d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a8e0));
  uVar2 = *(ulong *)(param_1 + _DAT_11306a8f8);
  uVar1 = ((ulong *)(param_1 + _DAT_11306a8f8))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104289a78; end: 10428a34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104289a78(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  long lVar21;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _swift_getObjectType();
  lVar16 = *param_1;
  lVar21 = *(long *)(lVar16 + 0x10);
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar21 != 0) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000104209f00(0,lVar21,0);
    puVar19 = puStack_80;
    lVar13 = 0;
    FUN_10428844c();
    puVar18 = (undefined8 *)(lVar16 + 0x30);
    do {
      uVar14 = puVar18[-2];
      uVar6 = puVar18[-1];
      uVar2 = *puVar18;
      uVar7 = puVar18[1];
      uVar3 = puVar18[2];
      uVar8 = puVar18[3];
      uVar4 = puVar18[4];
      uVar9 = puVar18[5];
      uVar17 = puVar18[6];
      lVar16 = lVar13;
      _objc_allocWithZone();
      func_0x0001047f4c4c(0);
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain_n(uVar7,2);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar4);
      func_0x0001047f4c70(uVar14,uVar6,uVar2,uVar7);
      *(undefined8 *)(lVar16 + _DAT_11306a870) = uVar14;
      puVar1 = (undefined8 *)(lVar16 + _DAT_11306a878);
      *puVar1 = uVar3;
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar16 + _DAT_11306a880) = uVar4;
      *(undefined8 *)(lVar16 + _DAT_11306a888) = uVar9;
      *(undefined8 *)(lVar16 + _DAT_11306a890) = uVar17;
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar7);
      plVar15 = &lStack_90;
      lStack_90 = lVar16;
      lStack_88 = lVar13;
      _objc_msgSendSuper2(plVar15,PTR_s_init_1125d9248);
      uVar5 = *(ulong *)(puVar19 + 0x10);
      puStack_80 = puVar19;
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar5) {
        func_0x000104209f00(1 < *(ulong *)(puVar19 + 0x18),uVar5 + 1,1);
      }
      puVar18 = puVar18 + 9;
      *(ulong *)(puStack_80 + 0x10) = uVar5 + 1;
      *(long **)(puStack_80 + uVar5 * 8 + 0x20) = plVar15;
      lVar21 = lVar21 + -1;
      puVar19 = puStack_80;
    } while (lVar21 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_11306a8c8) = puVar19;
  lVar21 = param_1[1];
  if (lVar21 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar16 = *(long *)(lVar21 + 0x10);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar16 != 0) {
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209ecc(0,lVar16,0);
      puVar19 = puStack_80;
      lVar13 = 0;
      FUN_104285dc8();
      puVar20 = (undefined1 *)(lVar21 + 0x30);
      do {
        uVar14 = *(undefined8 *)(puVar20 + -0x10);
        uVar2 = *(undefined8 *)(puVar20 + -8);
        uVar10 = *puVar20;
        lVar21 = lVar13;
        _objc_allocWithZone();
        puVar18 = (undefined8 *)(lVar21 + _DAT_11306a7d0);
        *puVar18 = uVar14;
        puVar18[1] = uVar2;
        *(undefined1 *)(lVar21 + _DAT_11306a7d8) = uVar10;
        puVar12 = PTR_s_init_1125d9248;
        lStack_d0 = lVar21;
        lStack_c8 = lVar13;
        _swift_bridgeObjectRetain(uVar2);
        plVar15 = &lStack_d0;
        _objc_msgSendSuper2(plVar15,puVar12);
        uVar5 = *(ulong *)(puVar19 + 0x10);
        puStack_80 = puVar19;
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar5) {
          func_0x000104209ecc(1 < *(ulong *)(puVar19 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(puStack_80 + 0x10) = uVar5 + 1;
        *(long **)(puStack_80 + uVar5 * 8 + 0x20) = plVar15;
        puVar20 = puVar20 + 0x18;
        lVar16 = lVar16 + -1;
        puVar19 = puStack_80;
      } while (lVar16 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a8d0) = puVar19;
  *(long *)(unaff_x20 + _DAT_11306a8d8) = param_1[2];
  bVar11 = *(byte *)(param_1 + 3);
  if (bVar11 == 2) {
    plVar15 = (long *)0x0;
  }
  else {
    lVar16 = 0;
    FUN_104286250();
    lVar21 = lVar16;
    _objc_allocWithZone();
    *(byte *)(lVar21 + _DAT_11306a808) = bVar11 & 1;
    plVar15 = &lStack_c0;
    lStack_c0 = lVar21;
    lStack_b8 = lVar16;
    _objc_msgSendSuper2(plVar15,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306a8e0) = plVar15;
  lVar21 = param_1[5];
  *(long *)(unaff_x20 + _DAT_11306a8e8) = param_1[4];
  *(long *)(unaff_x20 + _DAT_11306a8f0) = lVar21;
  lStack_78 = param_1[7];
  puStack_80 = (undefined *)param_1[6];
  plVar15 = (long *)(unaff_x20 + _DAT_11306a8f8);
  plVar15[1] = lStack_78;
  *plVar15 = (long)puStack_80;
  lVar21 = param_1[9];
  *(long *)(unaff_x20 + _DAT_11306a900) = param_1[8];
  *(long *)(unaff_x20 + _DAT_11306a908) = lVar21;
  FUN_10428a37c(&puStack_80,auStack_a0,0x112d56fe0,&UNK_10d91dda0);
  _objc_msgSendSuper2(auStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428a34c; end: 10428a35b;  */

undefined1  [16] FUN_10428a34c(ulong param_1)

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



/* Entry: 10428a35c; end: 10428a37b;  */

void FUN_10428a35c(void)

{
  _objc_opt_self(&PTR_PTR_112993060);
  return;
}



/* Entry: 10428a37c; end: 10428a3c3;  */

undefined8 FUN_10428a37c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10428a3c4; end: 10428a3d3; -[SCAdLensCarouselTrackInfo carouselSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428a3c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a948);
}



/* Entry: 10428a3d4; end: 10428a3df; -[SCAdLensCarouselTrackInfo lensSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a3d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a950))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a950);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


