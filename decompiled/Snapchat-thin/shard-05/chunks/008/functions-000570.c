/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10428a3e0; end: 10428a3eb; -[SCAdLensCarouselTrackInfo lastInteractedLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a3e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306a958))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a958);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10428a3ec; end: 10428a443;  */

void FUN_10428a3ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10428a444; end: 10428a49f; -[SCAdLensCarouselTrackInfo lensSwipeInteractions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a444(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306a960);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1042b6c60(0);
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



/* Entry: 10428a4a0; end: 10428a4af; -[SCAdLensCarouselTrackInfo snapCreationInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a968));
  return;
}



/* Entry: 10428a4b0; end: 10428a4bf; -[SCAdLensCarouselTrackInfo deviceScreenHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a970));
  return;
}



/* Entry: 10428a4c0; end: 10428a4cf; -[SCAdLensCarouselTrackInfo deviceScreenWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306a978));
  return;
}



/* Entry: 10428a4d0; end: 10428a4df; -[SCAdLensCarouselTrackInfo carouselExitEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428a4d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a980);
}



/* Entry: 10428a4e0; end: 10428a5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a948) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a950);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306a958);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a960) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306a968) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a970) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a978) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306a980) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428a5cc; end: 10428a73f; -[SCAdLensCarouselTrackInfo initWithCarouselSize:lensSessionId:lastInteractedLensId:lensSwipeInteractions:snapCreationInfo:deviceScreenHeight:deviceScreenWidth:carouselExitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a5cc(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_6 != 0) {
    uVar4 = 0;
    FUN_1042b6c60(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar4);
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  *(undefined8 *)(param_1 + _DAT_11306a948) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306a950);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11306a958);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_11306a960) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306a968) = param_7;
  *(undefined8 *)(param_1 + _DAT_11306a970) = param_8;
  *(undefined8 *)(param_1 + _DAT_11306a978) = param_9;
  *(undefined8 *)(param_1 + _DAT_11306a980) = param_10;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428a740; end: 10428a76f;  */

void FUN_10428a740(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10428a770(param_1);
  return;
}



/* Entry: 10428a770; end: 10428ab37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428a770(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_1f0 [112];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
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
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
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
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_10425412c();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = auStack_1f0 + (-0x20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  *(undefined8 *)(unaff_x20 + _DAT_11306a948) = *param_1;
  uStack_e8 = param_1[2];
  uStack_f0 = param_1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306a950);
  puVar2[1] = uStack_e8;
  *puVar2 = uStack_f0;
  uStack_f8 = param_1[4];
  uStack_100 = param_1[3];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306a958);
  puVar2[1] = uStack_f8;
  *puVar2 = uStack_100;
  lVar3 = param_1[5];
  if (lVar3 == 0) {
    func_0x00010428bc34(&uStack_f0,&puStack_e0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010428bc34(&uStack_100,&puStack_e0,0x112d35ff8,&UNK_10d900cd0);
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar3 + 0x10);
    if (lVar9 == 0) {
      func_0x00010428bc34(&uStack_f0,&puStack_e0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010428bc34(&uStack_100,&puStack_e0,0x112d35ff8,&UNK_10d900cd0);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x00010428bc34(&uStack_f0,&puStack_e0,0x112d35ff8,&UNK_10d900cd0);
      func_0x00010428bc34(&uStack_100,&puStack_e0,0x112d35ff8,&UNK_10d900cd0);
      puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000104209f68(0,lVar9,0);
      lVar3 = lVar3 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lVar10 = *(long *)(lVar10 + 0x48);
      do {
        puVar6 = puStack_e0;
        func_0x0001034a253c(lVar3,lVar8);
        func_0x0001034a253c(lVar8,puVar7);
        FUN_1042b6c60(0);
        _objc_allocWithZone();
        puVar4 = puVar7;
        FUN_1042b2e9c();
        func_0x0001034a2580(lVar8);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puStack_e0 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x000104209f68(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_e0 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puStack_e0 + uVar1 * 8 + 0x20) = puVar4;
        lVar3 = lVar3 + lVar10;
        lVar9 = lVar9 + -1;
        puVar6 = puStack_e0;
      } while (lVar9 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11306a960) = puVar6;
  lVar3 = param_1[9];
  if (lVar3 == 1) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    uStack_d8 = param_1[7];
    puStack_e0 = (undefined *)param_1[6];
    uStack_d0 = param_1[8];
    uStack_98 = param_1[0xf];
    uStack_a0 = param_1[0xe];
    uStack_88 = param_1[0x11];
    uStack_90 = param_1[0x10];
    uStack_78 = param_1[0x13];
    uStack_80 = param_1[0x12];
    uStack_b8 = param_1[0xb];
    uStack_c0 = param_1[10];
    uStack_a8 = param_1[0xd];
    uStack_b0 = param_1[0xc];
    lStack_c8 = lVar3;
    FUN_1042b869c(0);
    _objc_allocWithZone();
    uStack_178 = param_1[7];
    uStack_180 = param_1[6];
    uStack_170 = param_1[8];
    uStack_138 = param_1[0xf];
    uStack_140 = param_1[0xe];
    uStack_128 = param_1[0x11];
    uStack_130 = param_1[0x10];
    uStack_118 = param_1[0x13];
    uStack_120 = param_1[0x12];
    uStack_158 = param_1[0xb];
    uStack_160 = param_1[10];
    uStack_148 = param_1[0xd];
    uStack_150 = param_1[0xc];
    lStack_168 = lVar3;
    func_0x000104255664(&uStack_180,auStack_1f0);
    ppuVar5 = &puStack_e0;
    FUN_1042b76f0();
  }
  *(undefined ***)(unaff_x20 + _DAT_11306a968) = ppuVar5;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a970) = puVar6;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306a978) = puVar6;
  func_0x0001034a2494(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_11306a980) = param_1[0x18];
  _objc_msgSendSuper2(auStack_110,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428ab38; end: 10428ab6b; -[SCAdLensCarouselTrackInfo hash] */

undefined8 FUN_10428ab38(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10428ab6c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10428ab6c; end: 10428ad73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428ab6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a948));
  if (((undefined8 *)(unaff_x20 + _DAT_11306a950))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a950);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a958))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a958);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a960);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1042b6c60(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  if (*(long *)(unaff_x20 + _DAT_11306a968) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042b6da4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar4);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a970);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a978);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306a980));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10428ad74; end: 10428b0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10428ad74(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x20;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lStack_88;
  long alStack_80 [4];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x00010428bc34(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,alStack_80,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11306a948);
      lVar5 = *(long *)(lStack_88 + _DAT_11306a948);
      lVar3 = ((long *)(unaff_x20 + _DAT_11306a950))[1];
      lVar4 = ((long *)(lStack_88 + _DAT_11306a950))[1];
      uVar9 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_11306a950);
        if (lVar2 == *(long *)(lStack_88 + _DAT_11306a950) && lVar3 == lVar4) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar2;
        }
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_11306a958))[1];
      lVar4 = ((long *)(lStack_88 + _DAT_11306a958))[1];
      uVar10 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_11306a958);
        if ((lVar2 == *(long *)(lStack_88 + _DAT_11306a958)) && (lVar3 == lVar4)) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar2;
        }
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_11306a960);
      lVar3 = *(long *)(lStack_88 + _DAT_11306a960);
      uVar11 = (uint)(lVar4 == 0 && lVar3 == 0);
      if ((lVar4 != 0) && (lVar3 != 0)) {
        _swift_bridgeObjectRetain(lVar3);
        lVar2 = lVar4;
        _swift_bridgeObjectRetain();
        uVar11 = (uint)lVar2;
        func_0x00010422a5f4();
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(lVar3);
      }
      if (*(long *)(unaff_x20 + _DAT_11306a968) == 0) {
        uVar12 = (uint)(*(long *)(lStack_88 + _DAT_11306a968) == 0);
      }
      else {
        lVar3 = *(long *)(lStack_88 + _DAT_11306a968);
        if (lVar3 == 0) {
          lVar4 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar4 = 0;
          FUN_1042b869c();
        }
        alStack_80[0] = lVar3;
        alStack_80[3] = lVar4;
        _objc_retain(lVar3);
        uVar12 = 0;
        FUN_1042b6fe4();
        func_0x00010006e7f4(alStack_80);
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_11306a970);
      lVar3 = *(long *)(lStack_88 + _DAT_11306a970);
      uVar13 = (uint)(lVar4 == 0 && lVar3 == 0);
      if ((lVar4 != 0) && (lVar3 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar3);
        _objc_retain();
        lVar2 = lVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar13 = (uint)lVar2;
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_11306a978);
      lVar3 = *(long *)(lStack_88 + _DAT_11306a978);
      uVar8 = (uint)(lVar4 == 0 && lVar3 == 0);
      if ((lVar4 != 0) && (lVar3 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar3);
        _objc_retain(lVar4);
        lVar2 = lVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar8 = (uint)lVar2;
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11306a980);
      uVar14 = *(undefined8 *)(lStack_88 + _DAT_11306a980);
      _objc_release(lStack_88);
      if ((lVar6 == lVar5 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13) == 1) {
        return uVar8 & (int)uVar7 == (int)uVar14;
      }
    }
  }
  return 0;
}



/* Entry: 10428b0b8; end: 10428b137; -[SCAdLensCarouselTrackInfo isEqual:] */

uint FUN_10428b0b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10428ad74(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10428b138; end: 10428b13b; -[SCAdLensCarouselTrackInfo copyWithZone:] */

void FUN_10428b138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10428b13c; end: 10428b3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428b13c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar1 = 0x4c4553554f524143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4553554f524143,0xed0000455a49535f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a950))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a950);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5345535f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5345535f534e454c,0xef44495f4e4f4953);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306a958))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a958);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f10b0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306a960);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1042b6c60(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f10d0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f10f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1110);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f1130);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f1150);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10428b3f8; end: 10428b447; -[SCAdLensCarouselTrackInfo encodeWithCoder:] */

void FUN_10428b3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10428b13c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10428b448; end: 10428b477;  */

void FUN_10428b448(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10428b478(param_1);
  return;
}



/* Entry: 10428b478; end: 10428bac3;  */

undefined8 FUN_10428b478(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 unaff_x20;
  long lVar10;
  long lStack_c8;
  long lStack_c0;
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
  
  uVar2 = 0x4c4553554f524143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4553554f524143,0xed0000455a49535f);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  uVar2 = 0x5345535f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5345535f534e454c,0xef44495f4e4f4953);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar10 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lStack_c0 = 0;
    lVar10 = 0;
  }
  else {
    plVar3 = &lStack_b0;
    _swift_dynamicCast(plVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar10 = lStack_a8;
    lStack_c0 = lStack_b0;
    if ((int)plVar3 == 0) {
      lStack_c0 = 0;
      lVar10 = 0;
    }
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f10b0);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
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
    lStack_c8 = 0;
    lVar4 = 0;
  }
  else {
    plVar3 = &lStack_b0;
    _swift_dynamicCast(plVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_a8;
    lStack_c8 = lStack_b0;
    if ((int)plVar3 == 0) {
      lStack_c8 = 0;
      lVar4 = 0;
    }
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f10d0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar5 = 0;
  }
  else {
    uVar2 = 0x11306a988;
    func_0x0001000285a8(0x11306a988,&UNK_10dce58c0);
    plVar3 = &lStack_b0;
    _swift_dynamicCast(plVar3,&uStack_80,puVar1 + 8,uVar2,6);
    lVar5 = lStack_b0;
    if ((int)plVar3 == 0) {
      lVar5 = 0;
    }
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f10f0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar6 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1042b869c(0);
    plVar3 = &lStack_b0;
    _swift_dynamicCast(plVar3,&uStack_80,puVar1 + 8,uVar2,6);
    lVar6 = lStack_b0;
    if ((int)plVar3 == 0) {
      lVar6 = 0;
    }
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1110);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar7 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar7 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar3 = &lStack_b0;
    _swift_dynamicCast(plVar3,&uStack_80,puVar1 + 8,uVar2,6);
    lVar7 = lStack_b0;
    if ((int)plVar3 == 0) {
      lVar7 = 0;
    }
  }
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f1130);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar3 = &lStack_b0;
    _swift_dynamicCast(plVar3,&uStack_80,puVar1 + 8,uVar2,6);
    lVar8 = lStack_b0;
    if ((int)plVar3 == 0) {
      lVar8 = 0;
    }
  }
  uVar9 = 0xf1f1150;
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_10420c6f4();
  if ((uVar9 & 0xff) != 1) {
    if (lVar10 == 0) {
      lStack_c0 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c0,lVar10);
      _swift_bridgeObjectRelease(lVar10);
    }
    if (lVar4 == 0) {
      lStack_c8 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_c8,lVar4);
      _swift_bridgeObjectRelease(lVar4);
    }
    if (lVar5 == 0) {
      lVar10 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042b6c60(0);
      lVar10 = lVar5;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar2);
      _swift_bridgeObjectRelease(lVar5);
    }
    func_0x00010bffcd20();
    _objc_release(lStack_c0);
    _objc_release(lStack_c8);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar8);
    return unaff_x20;
  }
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(lVar4);
  _swift_bridgeObjectRelease(lVar10);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10428bac4; end: 10428baeb; -[SCAdLensCarouselTrackInfo initWithCoder:] */

void FUN_10428bac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10428b478();
  return;
}



/* Entry: 10428baec; end: 10428bb37; -[SCAdLensCarouselTrackInfo description] */

void FUN_10428baec(undefined8 param_1)

{
  undefined1 auStack_e8 [200];
  
  _objc_retain();
  FUN_10428bc7c(auStack_e8);
  _objc_release(param_1);
  func_0x0001034a2494(auStack_e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10428bb38; end: 10428bbb3; -[SCAdLensCarouselTrackInfo init] */

void FUN_10428bb38(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLensCarouselTrackInfoWrapper.swift",0x33,2,0x85,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10428bb80);
  (*pcVar1)();
}



/* Entry: 10428bbb4; end: 10428bc7b; -[SCAdLensCarouselTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428bbb4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a950 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a958 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306a960));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a968));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306a970));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306a978));
  return;
}



/* Entry: 10428bc7c; end: 10428c073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428bc7c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined8 uVar7;
  long extraout_x12;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
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
  
  lVar5 = 0;
  FUN_10425412c();
  lVar5 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = *(undefined8 *)(param_2 + _DAT_11306a948);
  uStack_e0 = *(undefined8 *)(param_2 + _DAT_11306a950);
  uVar13 = ((undefined8 *)(param_2 + _DAT_11306a950))[1];
  uStack_e8 = *(undefined8 *)(param_2 + _DAT_11306a958);
  puVar16 = (undefined *)((undefined8 *)(param_2 + _DAT_11306a958))[1];
  uVar14 = *(ulong *)(param_2 + _DAT_11306a960);
  if (uVar14 == 0) {
    _swift_bridgeObjectRetain(puVar16);
    _swift_bridgeObjectRetain(uVar13);
    puVar8 = (undefined *)0x0;
  }
  else {
    uStack_100 = uVar13;
    if (uVar14 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar14;
      if (-1 < (long)uVar14) {
        uVar10 = uVar14 & 0xffffffffffffff8;
      }
      puStack_110 = puVar16;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar16 = puStack_110;
    }
    puStack_110 = puVar16;
    if (uVar10 == 0) {
      _swift_bridgeObjectRetain(puVar16);
      uVar13 = uStack_100;
      _swift_bridgeObjectRetain(uStack_100);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uStack_120 = uVar17;
      puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uStack_100);
      _swift_bridgeObjectRetain(puStack_110);
      func_0x000104209f9c(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10428c074);
        (*pcVar4)();
      }
      puVar8 = puStack_d8;
      lStack_130 = param_2;
      if ((uVar14 & 0xc000000000000001) == 0) {
        puVar15 = (undefined8 *)(uVar14 + 0x20);
        do {
          _objc_retain(*puVar15);
          FUN_1042b1924(lVar6);
          uVar14 = *(ulong *)(puVar8 + 0x10);
          puStack_d8 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
            func_0x000104209f9c(1 < *(ulong *)(puVar8 + 0x18),uVar14 + 1,1);
          }
          puVar8 = puStack_d8;
          *(ulong *)(puStack_d8 + 0x10) = uVar14 + 1;
          FUN_10428c094(lVar6,puStack_d8 +
                              *(long *)(lVar5 + 0x48) * uVar14 +
                              ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)));
          uVar10 = uVar10 - 1;
          param_2 = lStack_130;
          uVar13 = uStack_100;
          puVar15 = puVar15 + 1;
          puVar16 = puStack_110;
          uVar17 = uStack_120;
        } while (uVar10 != 0);
      }
      else {
        uVar12 = 0;
        do {
          func_0x00010420946c(uVar12,uVar14);
          FUN_1042b1924(lVar6 - extraout_x12);
          uVar3 = *(ulong *)(puVar8 + 0x10);
          puStack_d8 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
            func_0x000104209f9c(1 < *(ulong *)(puVar8 + 0x18),uVar3 + 1,1);
          }
          puVar8 = puStack_d8;
          uVar12 = uVar12 + 1;
          *(ulong *)(puStack_d8 + 0x10) = uVar3 + 1;
          FUN_10428c094(lVar6 - extraout_x12,
                        puStack_d8 +
                        *(long *)(lVar5 + 0x48) * uVar3 +
                        ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)));
          param_2 = lStack_130;
          uVar13 = uStack_100;
          puVar16 = puStack_110;
          uVar17 = uStack_120;
        } while (uVar10 != uVar12);
      }
    }
  }
  if (*(long *)(param_2 + _DAT_11306a968) == 0) {
    uVar9 = 0;
    uVar11 = 0;
    uStack_108 = 0;
    puStack_110 = (undefined *)0x0;
    uStack_f8 = 1;
    uStack_100 = 0;
    uStack_128 = 0;
    lStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    _objc_retain();
    FUN_1042b842c(&puStack_d8);
    uStack_108 = uStack_d0;
    puStack_110 = puStack_d8;
    uStack_f8 = uStack_c0;
    uStack_100 = uStack_c8;
    uStack_118 = uStack_a0;
    uStack_120 = uStack_a8;
    uStack_128 = uStack_b0;
    lStack_130 = uStack_b8;
    uStack_138 = uStack_80;
    uStack_140 = uStack_88;
    uStack_148 = uStack_90;
    uStack_150 = uStack_98;
    uVar9 = uStack_78;
    uVar11 = uStack_70;
  }
  lVar5 = *(long *)(param_2 + _DAT_11306a970);
  bVar1 = lVar5 == 0;
  if (bVar1) {
    lVar5 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lVar6 = *(long *)(param_2 + _DAT_11306a978);
  bVar2 = lVar6 == 0;
  if (!bVar2) {
    func_0x00010c067fc0();
  }
  uVar7 = *(undefined8 *)(param_2 + _DAT_11306a980);
  *param_1 = uVar17;
  param_1[1] = uStack_e0;
  param_1[2] = uVar13;
  param_1[3] = uStack_e8;
  param_1[4] = puVar16;
  param_1[5] = puVar8;
  param_1[7] = uStack_108;
  param_1[6] = puStack_110;
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_128;
  param_1[10] = lStack_130;
  param_1[0xd] = uStack_118;
  param_1[0xc] = uStack_120;
  param_1[0xf] = uStack_148;
  param_1[0xe] = uStack_150;
  param_1[0x11] = uStack_138;
  param_1[0x10] = uStack_140;
  param_1[0x12] = uVar9;
  param_1[0x13] = uVar11;
  param_1[0x14] = lVar5;
  *(bool *)(param_1 + 0x15) = bVar1;
  param_1[0x16] = lVar6;
  *(bool *)(param_1 + 0x17) = bVar2;
  param_1[0x18] = uVar7;
  return;
}



/* Entry: 10428c074; end: 10428c093;  */

void FUN_10428c074(void)

{
  _objc_opt_self(&PTR_PTR_112993170);
  return;
}



/* Entry: 10428c094; end: 10428c12f;  */

undefined8 FUN_10428c094(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10425412c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10428c130; end: 10428c13f; -[SCAdLifecycleTimestamps adResponseParseCompleteTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9b8);
}



/* Entry: 10428c140; end: 10428c14f; -[SCAdLifecycleTimestamps adInsertionCompleteTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c140(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9c0);
}



/* Entry: 10428c150; end: 10428c15f; -[SCAdLifecycleTimestamps topSnapFullyPresentTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9c8);
}



/* Entry: 10428c160; end: 10428c16f; -[SCAdLifecycleTimestamps attachmentPageLoadedTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c160(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9d0);
}



/* Entry: 10428c170; end: 10428c17f; -[SCAdLifecycleTimestamps attachmentTriggeredTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9d8);
}



/* Entry: 10428c180; end: 10428c18f; -[SCAdLifecycleTimestamps attachmentFullyPresentedTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c180(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9e0);
}



/* Entry: 10428c190; end: 10428c19f; -[SCAdLifecycleTimestamps attachmentDismissTriggerTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9e8);
}



/* Entry: 10428c1a0; end: 10428c1af; -[SCAdLifecycleTimestamps topSnapDismissTriggerTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c1a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9f0);
}



/* Entry: 10428c1b0; end: 10428c1bf; -[SCAdLifecycleTimestamps navigationStartTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c1b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306a9f8);
}



/* Entry: 10428c1c0; end: 10428c1cf; -[SCAdLifecycleTimestamps htmlDownloadedTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c1c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aa00);
}



/* Entry: 10428c1d0; end: 10428c1df; -[SCAdLifecycleTimestamps domContentLoadedTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c1d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aa08);
}



/* Entry: 10428c1e0; end: 10428c1ef; -[SCAdLifecycleTimestamps paintTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c1e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aa10);
}



/* Entry: 10428c1f0; end: 10428c1ff; -[SCAdLifecycleTimestamps fullyLoadedTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c1f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aa18);
}



/* Entry: 10428c200; end: 10428c20f; -[SCAdLifecycleTimestamps navigationFinishTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aa20);
}



/* Entry: 10428c210; end: 10428c21f; -[SCAdLifecycleTimestamps firstGATimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aa28);
}



/* Entry: 10428c220; end: 10428c22f; -[SCAdLifecycleTimestamps topSnapPlaybackBeginTimestampInMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428c220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aa30);
}



/* Entry: 10428c230; end: 10428c53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428c230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306a9b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9c0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9d8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9e0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9e8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9f0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306a9f8) = in_stack_00000000;
  *(undefined8 *)(unaff_x20 + _DAT_11306aa00) = in_stack_00000008;
  *(undefined8 *)(unaff_x20 + _DAT_11306aa08) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + _DAT_11306aa10) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + _DAT_11306aa18) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + _DAT_11306aa20) = in_stack_00000028;
  *(undefined8 *)(unaff_x20 + _DAT_11306aa28) = in_stack_00000030;
  *(undefined8 *)(unaff_x20 + _DAT_11306aa30) = in_stack_00000038;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428c540; end: 10428c6cf; -[SCAdLifecycleTimestamps initWithAdResponseParseCompleteTimestampInMillis:adInsertionCompleteTimestampInMillis:topSnapFullyPresentTimestampInMillis:attachmentPageLoadedTimestampInMillis:attachmentTriggeredTimestampInMillis:attachmentFullyPresentedTimestampInMillis:attachmentDismissTriggerTimestampInMillis:topSnapDismissTriggerTimestampInMillis:navigationStartTimestampInMillis:htmlDownloadedTimestampInMillis:domContentLoadedTimestampInMillis:paintTimestampInMillis:fullyLoadedTimestampInMillis:navigationFinishTimestampInMillis:firstGATimestampInMillis:topSnapPlaybackBeginTimestampInMillis:] */

void FUN_10428c540(void)

{
  func_0x00010428c3b8();
  return;
}



/* Entry: 10428c6d0; end: 10428c6ef; -[SCAdLifecycleTimestamps hash] */

void FUN_10428c6d0(void)

{
  FUN_10428c6f0();
  return;
}



/* Entry: 10428c6f0; end: 10428c92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428c6f0(void)

{
  long unaff_x20;
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9b8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9b8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9c0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9c0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9c8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9c8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9d0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9d0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9d8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9d8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9e0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9e0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9e8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9e8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9f0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9f0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306a9f8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306a9f8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306aa00) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306aa00);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306aa08) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306aa08);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306aa10) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306aa10);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306aa18) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306aa18);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306aa20) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306aa20);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306aa28) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306aa28);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306aa30) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306aa30);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10428c930; end: 10428cbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10428c930(undefined8 param_1)

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
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
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
      dVar3 = *(double *)(unaff_x20 + _DAT_11306a9b8);
      dVar15 = *(double *)(lStack_98 + _DAT_11306a9b8);
      dVar16 = *(double *)(unaff_x20 + _DAT_11306a9c0);
      dVar4 = *(double *)(lStack_98 + _DAT_11306a9c0);
      dVar17 = *(double *)(unaff_x20 + _DAT_11306a9c8);
      dVar5 = *(double *)(lStack_98 + _DAT_11306a9c8);
      dVar18 = *(double *)(unaff_x20 + _DAT_11306a9d0);
      dVar6 = *(double *)(lStack_98 + _DAT_11306a9d0);
      dVar19 = *(double *)(unaff_x20 + _DAT_11306a9d8);
      dVar7 = *(double *)(lStack_98 + _DAT_11306a9d8);
      dVar20 = *(double *)(unaff_x20 + _DAT_11306a9e0);
      dVar8 = *(double *)(lStack_98 + _DAT_11306a9e0);
      dVar21 = *(double *)(unaff_x20 + _DAT_11306a9e8);
      dVar9 = *(double *)(lStack_98 + _DAT_11306a9e8);
      dVar22 = *(double *)(unaff_x20 + _DAT_11306a9f0);
      dVar10 = *(double *)(lStack_98 + _DAT_11306a9f0);
      dVar23 = *(double *)(unaff_x20 + _DAT_11306a9f8);
      dVar11 = *(double *)(lStack_98 + _DAT_11306a9f8);
      dVar24 = *(double *)(unaff_x20 + _DAT_11306aa00);
      dVar12 = *(double *)(lStack_98 + _DAT_11306aa00);
      dVar25 = *(double *)(unaff_x20 + _DAT_11306aa08);
      dVar13 = *(double *)(lStack_98 + _DAT_11306aa08);
      dVar26 = *(double *)(unaff_x20 + _DAT_11306aa10);
      dVar14 = *(double *)(lStack_98 + _DAT_11306aa10);
      dVar33 = *(double *)(unaff_x20 + _DAT_11306aa18);
      dVar34 = *(double *)(lStack_98 + _DAT_11306aa18);
      dVar27 = *(double *)(unaff_x20 + _DAT_11306aa20);
      dVar28 = *(double *)(lStack_98 + _DAT_11306aa20);
      dVar29 = *(double *)(unaff_x20 + _DAT_11306aa28);
      dVar30 = *(double *)(lStack_98 + _DAT_11306aa28);
      dVar31 = *(double *)(unaff_x20 + _DAT_11306aa30);
      dVar32 = *(double *)(lStack_98 + _DAT_11306aa30);
      _objc_release();
      return dVar31 == dVar32 &&
             (dVar29 == dVar30 &&
             (dVar27 == dVar28 &&
             (dVar33 == dVar34 &&
             (dVar26 == dVar14 &&
             (dVar25 == dVar13 &&
             (dVar24 == dVar12 &&
             (dVar23 == dVar11 &&
             (dVar22 == dVar10 &&
             (dVar21 == dVar9 &&
             (dVar20 == dVar8 &&
             (dVar19 == dVar7 &&
             (dVar18 == dVar6 && (dVar17 == dVar5 && (dVar16 == dVar4 && dVar3 == dVar15))))))))))))
             ));
    }
  }
  return false;
}



/* Entry: 10428cbb0; end: 10428cc2f; -[SCAdLifecycleTimestamps isEqual:] */

uint FUN_10428cbb0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10428c930(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10428cc30; end: 10428cc33; -[SCAdLifecycleTimestamps copyWithZone:] */

void FUN_10428cc30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10428cc34; end: 10428d07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428cc34(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a9b8);
  uVar1 = 0xd00000000000002e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1f11b0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a9c0);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1f11e0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306a9c8);
  uVar2 = 0xd00000000000002a;
  uVar1 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f1210);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306a9d0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f1240);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a9d8);
  uVar1 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1f1270);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a9e0);
  uVar1 = 0xd00000000000002e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1f12a0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a9e8);
  uVar1 = 0xd00000000000002e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1f12d0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a9f0);
  uVar1 = 0xd00000000000002c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f1f1300);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306a9f8);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f1330);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306aa00);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f1360);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306aa08);
  uVar1 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f1390);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306aa10);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f13c0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306aa18);
  uVar1 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1f13e0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306aa20);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f1410);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306aa28);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f1440);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306aa30);
  uVar1 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1f1460);
  func_0x00010bf92e80(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10428d07c; end: 10428d0cb; -[SCAdLifecycleTimestamps encodeWithCoder:] */

void FUN_10428d07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10428cc34(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10428d0cc; end: 10428d10b;  */

undefined8 FUN_10428d0cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10428daf0(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10428d10c; end: 10428d147; -[SCAdLifecycleTimestamps initWithCoder:] */

undefined8 FUN_10428d10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10428daf0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10428d148; end: 10428d173; -[SCAdLifecycleTimestamps description] */

void FUN_10428d148(void)

{
  undefined1 auStack_90 [128];
  
  FUN_10428da08(auStack_90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10428d174; end: 10428d1bb; -[SCAdLifecycleTimestamps init] */

void FUN_10428d174(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLifecycleTimestampsWrapper.swift",0x31,2,0xd1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10428d1bc);
  (*pcVar1)();
}



/* Entry: 10428d1bc; end: 10428d1d7; +[SCAdLifecycleTimestampsBuilder adLifecycleTimestamps] */

void FUN_10428d1bc(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10428d1d8; end: 10428d217; +[SCAdLifecycleTimestampsBuilder adLifecycleTimestampsWithExistingAdLifecycleTimestamps:] */

void FUN_10428d1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_10428dec4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10428d218; end: 10428d22f; -[SCAdLifecycleTimestampsBuilder withAdResponseParseCompleteTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d218(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa38);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d230; end: 10428d247; -[SCAdLifecycleTimestampsBuilder withAdInsertionCompleteTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d230(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa40);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d248; end: 10428d25f; -[SCAdLifecycleTimestampsBuilder withTopSnapFullyPresentTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d248(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa48);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d260; end: 10428d277; -[SCAdLifecycleTimestampsBuilder withAttachmentPageLoadedTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d260(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa50);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d278; end: 10428d28f; -[SCAdLifecycleTimestampsBuilder withAttachmentTriggeredTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d278(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa58);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d290; end: 10428d2a7; -[SCAdLifecycleTimestampsBuilder withAttachmentFullyPresentedTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d290(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa60);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d2a8; end: 10428d2bf; -[SCAdLifecycleTimestampsBuilder withAttachmentDismissTriggerTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d2a8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa68);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d2c0; end: 10428d2d7; -[SCAdLifecycleTimestampsBuilder withTopSnapDismissTriggerTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d2c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa70);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d2d8; end: 10428d2ef; -[SCAdLifecycleTimestampsBuilder withNavigationStartTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d2d8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa78);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d2f0; end: 10428d307; -[SCAdLifecycleTimestampsBuilder withHtmlDownloadedTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d2f0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa80);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d308; end: 10428d31f; -[SCAdLifecycleTimestampsBuilder withDomContentLoadedTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d308(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa88);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d320; end: 10428d337; -[SCAdLifecycleTimestampsBuilder withPaintTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d320(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa90);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d338; end: 10428d34f; -[SCAdLifecycleTimestampsBuilder withFullyLoadedTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d338(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aa98);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d350; end: 10428d367; -[SCAdLifecycleTimestampsBuilder withNavigationFinishTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d350(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aaa0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d368; end: 10428d37f; -[SCAdLifecycleTimestampsBuilder withFirstGATimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d368(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aaa8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d380; end: 10428d397; -[SCAdLifecycleTimestampsBuilder withTopSnapPlaybackBeginTimestampInMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d380(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306aab0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10428d398; end: 10428d7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d398(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa38);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_78 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_78 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa40);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_80 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_80 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa48);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_88 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_88 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa50);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_90 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_90 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa58);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_98 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_98 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa60);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_a0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_a0 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa68);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_a8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_a8 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa70);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_b0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_b0 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa78);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar4 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa80);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar5 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa88);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar6 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar6 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa90);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar7 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa98);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aaa0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aaa8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar10 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar10 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aab0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar3 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_10428e134();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11306a9b8) = uStack_78;
  *(undefined8 *)(lVar2 + _DAT_11306a9c0) = uStack_80;
  *(undefined8 *)(lVar2 + _DAT_11306a9c8) = uStack_88;
  *(undefined8 *)(lVar2 + _DAT_11306a9d0) = uStack_90;
  *(undefined8 *)(lVar2 + _DAT_11306a9d8) = uStack_98;
  *(undefined8 *)(lVar2 + _DAT_11306a9e0) = uStack_a0;
  *(undefined8 *)(lVar2 + _DAT_11306a9e8) = uStack_a8;
  *(undefined8 *)(lVar2 + _DAT_11306a9f0) = uStack_b0;
  *(undefined8 *)(lVar2 + _DAT_11306a9f8) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_11306aa00) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_11306aa08) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_11306aa10) = uVar7;
  *(undefined8 *)(lVar2 + _DAT_11306aa18) = uVar8;
  *(undefined8 *)(lVar2 + _DAT_11306aa20) = uVar9;
  *(undefined8 *)(lVar2 + _DAT_11306aa28) = uVar10;
  *(undefined8 *)(lVar2 + _DAT_11306aa30) = uVar3;
  lStack_70 = lVar2;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428d7b0; end: 10428d7f3; -[SCAdLifecycleTimestampsBuilder build] */

void FUN_10428d7b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10428d398();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10428d7f4; end: 10428d837; -[SCAdLifecycleTimestampsBuilder safeBuildAndReturnError:] */

void FUN_10428d7f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10428d398();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10428d838; end: 10428d9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428d838(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa50);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aa98);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aaa0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aaa8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306aab0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428d9b0; end: 10428d9cf; -[SCAdLifecycleTimestampsBuilder init] */

void FUN_10428d9b0(void)

{
  FUN_10428d838();
  return;
}



/* Entry: 10428d9d0; end: 10428d9d3;  */

void FUN_10428d9d0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10428d9d4; end: 10428da07;  */

void FUN_10428d9d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10428da08; end: 10428daef; -[SCAdLifecycleTimestamps .cxx_destruct] */

void FUN_10428da08(void)

{
  return;
}



/* Entry: 10428daf0; end: 10428dec3;  */

void FUN_10428daf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = 0xd00000000000002e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1f11b0);
  func_0x00010bf66da0(param_2);
  uVar6 = param_1;
  _objc_release(uVar1);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1f11e0);
  func_0x00010bf66da0(param_2);
  uVar7 = uVar6;
  _objc_release(uVar1);
  uVar5 = 0xd00000000000002a;
  uVar1 = uVar5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f1210);
  func_0x00010bf66da0(param_2);
  uVar8 = uVar7;
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f1240);
  func_0x00010bf66da0(param_2);
  uVar1 = uVar8;
  _objc_release(uVar5);
  uVar2 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1f1270);
  func_0x00010bf66da0(param_2);
  uVar5 = uVar1;
  _objc_release(uVar2);
  uVar3 = 0xd00000000000002e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1f12a0);
  func_0x00010bf66da0(param_2);
  uVar2 = uVar5;
  _objc_release(uVar3);
  uVar4 = 0xd00000000000002e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1f12d0);
  func_0x00010bf66da0(param_2);
  uVar3 = uVar2;
  _objc_release(uVar4);
  uVar4 = 0xd00000000000002c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f1f1300);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f1330);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f1360);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f1390);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f13c0);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1f13e0);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f1410);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f1440);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  uVar4 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1f1460);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar4);
  func_0x00010bff1e40(param_1,uVar6,uVar7,uVar8,uVar1,uVar5,uVar2,uVar3);
  return;
}



/* Entry: 10428dec4; end: 10428e133;  */

/* WARNING: Possible PIC construction at 0x00010428def8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010428defc) */

void FUN_10428dec4(long param_1)

{
  if (param_1 == 0) {
    func_0x00010428e154();
    _objc_allocWithZone();
  }
  else {
    func_0x00010428e154();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10428e134; end: 10428e173;  */

void FUN_10428e134(void)

{
  _objc_opt_self(&PTR_PTR_112993278);
  return;
}



/* Entry: 10428e174; end: 10428e177;  */

void FUN_10428e174(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10428e178; end: 10428e1bf; -[SCAdLiveReviewTrackInfo displayedReviewIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e178(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306ab08);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10428e1c0; end: 10428e1cf; -[SCAdLiveReviewTrackInfo tappedReviewIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab10));
  return;
}



/* Entry: 10428e1d0; end: 10428e233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e1d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ab08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab10) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428e234; end: 10428e2b7; -[SCAdLiveReviewTrackInfo initWithDisplayedReviewIds:tappedReviewIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  *(undefined8 *)(param_1 + _DAT_11306ab08) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306ab10) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10428e2b8; end: 10428e34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e2b8(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ab08) = param_1;
  if (param_3 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ab10) = puVar1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428e350; end: 10428e383; -[SCAdLiveReviewTrackInfo hash] */

undefined8 FUN_10428e350(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10428e384();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10428e384; end: 10428e43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e384(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ab08);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ab10);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10428e440; end: 10428e57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10428e440(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ab08);
      func_0x00010142cfc4(uVar2,*(undefined8 *)(lStack_68 + _DAT_11306ab08));
      lVar7 = *(long *)(unaff_x20 + _DAT_11306ab10);
      lVar6 = *(long *)(lStack_68 + _DAT_11306ab10);
      if (lVar7 == 0) {
        lVar4 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 != 0) {
          uVar5 = 0;
          goto LAB_10428e54c;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar4 = lStack_68;
        if (lVar6 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar6);
          _objc_retain(lVar7);
          lVar3 = lVar7;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar7);
          _objc_release(lVar6);
        }
LAB_10428e54c:
        _objc_release(lVar4);
      }
      uVar5 = (uint)uVar2 & uVar5;
      goto LAB_10428e558;
    }
  }
  uVar5 = 0;
LAB_10428e558:
  return uVar5 & 1;
}



/* Entry: 10428e57c; end: 10428e5fb; -[SCAdLiveReviewTrackInfo isEqual:] */

uint FUN_10428e57c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10428e440(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10428e5fc; end: 10428e5ff; -[SCAdLiveReviewTrackInfo copyWithZone:] */

void FUN_10428e5fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10428e600; end: 10428e6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e600(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ab08);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f0bb0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f14d0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10428e6c4; end: 10428e713; -[SCAdLiveReviewTrackInfo encodeWithCoder:] */

void FUN_10428e6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10428e600(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10428e714; end: 10428e743;  */

void FUN_10428e714(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10428e744(param_1);
  return;
}



/* Entry: 10428e744; end: 10428e967;  */

undefined8 FUN_10428e744(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f0bb0);
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
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_88;
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f14d0);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
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
        func_0x00010006e7f4(&uStack_60);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_88;
        _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
        uVar5 = uStack_88;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      uVar6 = uVar2;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_11034da80);
      _swift_bridgeObjectRelease(uVar2);
      func_0x00010c00d700();
      _objc_release(uVar6);
      _objc_release(param_1);
      _objc_release(uVar5);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}


