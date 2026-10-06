/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044b09ac; end: 1044b0a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b09ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f1b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f1b8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f1c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307f1c8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b0a50; end: 1044b0b4f; -[SCStoriesPlaybackBundleStorySequence initWithStoryId:displayName:storySnaps:discoverMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b0a50(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_5 != 0) {
    uVar4 = 0;
    FUN_1044b8ee8(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar4);
  }
  _objc_retain();
  plVar1 = (long *)(param_1 + _DAT_11307f1b0);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11307f1b8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_11307f1c0) = param_5;
  *(undefined8 *)(param_1 + _DAT_11307f1c8) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b0b50; end: 1044b0b53; -[SCStoriesPlaybackBundleStorySequence copyWithZone:] */

void FUN_1044b0b50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b0b54; end: 1044b0b9f; -[SCStoriesPlaybackBundleStorySequence description] */

void FUN_1044b0b54(undefined8 param_1)

{
  undefined1 auStack_130 [272];
  
  _objc_retain();
  FUN_1044b1020(auStack_130);
  _objc_release(param_1);
  FUN_1044b0fec(auStack_130);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b0ba0; end: 1044b0c1b; -[SCStoriesPlaybackBundleStorySequence init] */

void FUN_1044b0ba0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackBundleStorySequenceWrapper.swift",0x4b,2,
             0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b0be8);
  (*pcVar1)();
}



/* Entry: 1044b0c1c; end: 1044b0c7b; -[SCStoriesPlaybackBundleStorySequence .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b0c1c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f1b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f1b8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f1c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307f1c8));
  return;
}



/* Entry: 1044b0c7c; end: 1044b0feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b0c7c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_480 [8];
  undefined8 *puStack_478;
  undefined1 auStack_458 [232];
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined1 auStack_280 [16];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
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
  undefined1 uStack_80;
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_1044a2b58();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = auStack_480 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  uStack_168 = param_1[1];
  uStack_170 = *param_1;
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307f1b0);
  puVar2[1] = uStack_168;
  *puVar2 = uStack_170;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307f1b8);
  puVar2[1] = uStack_178;
  *puVar2 = uStack_180;
  lVar4 = param_1[4];
  if (lVar4 == 0) {
    func_0x000101223174(&uStack_170,&puStack_160);
    func_0x000101223174(&uStack_180,&puStack_160);
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar4 + 0x10);
    if (lVar11 == 0) {
      func_0x000101223174(&uStack_170,&puStack_160);
      func_0x000101223174(&uStack_180,&puStack_160);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_478 = param_1;
      func_0x000101223174(&uStack_170,&puStack_160);
      func_0x000101223174(&uStack_180,&puStack_160);
      puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1044ade2c(0,lVar11,0);
      lVar4 = lVar4 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(lVar8 + 0x48);
      do {
        puVar7 = puStack_160;
        FUN_1044ae574(lVar4,lVar10);
        FUN_1044ae574(lVar10,puVar9);
        FUN_1044b8ee8(0);
        _objc_allocWithZone();
        puVar5 = puVar9;
        FUN_1044b7a3c();
        func_0x0001044ae5b8(lVar10);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puStack_160 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          FUN_1044ade2c(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_160 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puStack_160 + uVar1 * 8 + 0x20) = puVar5;
        lVar4 = lVar4 + lVar8;
        lVar11 = lVar11 + -1;
        param_1 = puStack_478;
        puVar7 = puStack_160;
      } while (lVar11 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11307f1c0) = puVar7;
  uStack_1b8 = param_1[0x1c];
  uStack_1c0 = param_1[0x1b];
  uStack_1a8 = param_1[0x1e];
  uStack_1b0 = param_1[0x1d];
  uStack_198 = param_1[0x20];
  uStack_1a0 = param_1[0x1f];
  uStack_190 = *(undefined1 *)(param_1 + 0x21);
  uStack_1f8 = param_1[0x14];
  uStack_200 = param_1[0x13];
  uStack_1e8 = param_1[0x16];
  uStack_1f0 = param_1[0x15];
  uStack_1d8 = param_1[0x18];
  uStack_1e0 = param_1[0x17];
  uStack_1c8 = param_1[0x1a];
  uStack_1d0 = param_1[0x19];
  uStack_238 = param_1[0xc];
  uStack_240 = param_1[0xb];
  uStack_228 = param_1[0xe];
  uStack_230 = param_1[0xd];
  uStack_218 = param_1[0x10];
  uStack_220 = param_1[0xf];
  uStack_208 = param_1[0x12];
  uStack_210 = param_1[0x11];
  uStack_268 = param_1[6];
  puStack_270 = (undefined *)param_1[5];
  uStack_258 = param_1[8];
  uStack_260 = param_1[7];
  uStack_248 = param_1[10];
  uStack_250 = param_1[9];
  iVar3 = (int)&puStack_270;
  func_0x0001044af0d0();
  if (iVar3 == 1) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    uStack_98 = uStack_1a8;
    uStack_a0 = uStack_1b0;
    uStack_88 = uStack_198;
    uStack_90 = uStack_1a0;
    uStack_80 = uStack_190;
    uStack_d8 = uStack_1e8;
    uStack_e0 = uStack_1f0;
    uStack_c8 = uStack_1d8;
    uStack_d0 = uStack_1e0;
    uStack_b8 = uStack_1c8;
    uStack_c0 = uStack_1d0;
    uStack_a8 = uStack_1b8;
    uStack_b0 = uStack_1c0;
    uStack_118 = uStack_228;
    uStack_120 = uStack_230;
    uStack_108 = uStack_218;
    uStack_110 = uStack_220;
    uStack_f8 = uStack_208;
    uStack_100 = uStack_210;
    uStack_e8 = uStack_1f8;
    uStack_f0 = uStack_200;
    uStack_158 = uStack_268;
    puStack_160 = puStack_270;
    uStack_148 = uStack_258;
    uStack_150 = uStack_260;
    uStack_138 = uStack_248;
    uStack_140 = uStack_250;
    uStack_128 = uStack_238;
    uStack_130 = uStack_240;
    FUN_1044abe24(0);
    _objc_allocWithZone();
    uStack_2a8 = uStack_1a8;
    uStack_2b0 = uStack_1b0;
    uStack_298 = uStack_198;
    uStack_2a0 = uStack_1a0;
    uStack_290 = uStack_190;
    uStack_2e8 = uStack_1e8;
    uStack_2f0 = uStack_1f0;
    uStack_2d8 = uStack_1d8;
    uStack_2e0 = uStack_1e0;
    uStack_2c8 = uStack_1c8;
    uStack_2d0 = uStack_1d0;
    uStack_2b8 = uStack_1b8;
    uStack_2c0 = uStack_1c0;
    uStack_328 = uStack_228;
    uStack_330 = uStack_230;
    uStack_318 = uStack_218;
    uStack_320 = uStack_220;
    uStack_308 = uStack_208;
    uStack_310 = uStack_210;
    uStack_2f8 = uStack_1f8;
    uStack_300 = uStack_200;
    uStack_368 = uStack_268;
    puStack_370 = puStack_270;
    uStack_358 = uStack_258;
    uStack_360 = uStack_260;
    uStack_348 = uStack_248;
    uStack_350 = uStack_250;
    uStack_338 = uStack_238;
    uStack_340 = uStack_240;
    FUN_1044b0854(&puStack_370,auStack_458);
    ppuVar6 = &puStack_160;
    FUN_1044ab8d0();
    func_0x0001044af130(&puStack_270);
  }
  *(undefined ***)(unaff_x20 + _DAT_11307f1c8) = ppuVar6;
  _objc_msgSendSuper2(auStack_280,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b0fec; end: 1044b101f;  */

undefined8 FUN_1044b0fec(undefined8 param_1)

{
  (*(code *)(undefined *)0x104499f7c)();
  return param_1;
}



/* Entry: 1044b1020; end: 1044b12df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1020(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [248];
  
  lVar3 = 0;
  FUN_1044a2b58();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar7 = (long)&uStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f1b0);
  uVar4 = puVar10[1];
  uStack_178 = puVar10[1];
  uStack_180 = *puVar10;
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f1b8);
  uVar11 = puVar10[1];
  uStack_168 = puVar10[1];
  uStack_170 = *puVar10;
  uVar9 = *(ulong *)(param_2 + _DAT_11307f1c0);
  if (uVar9 == 0) {
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar4);
    puVar5 = (undefined *)0x0;
  }
  else {
    if (uVar9 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar9;
      if (-1 < (long)uVar9) {
        uVar6 = uVar9 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar6 == 0) {
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar4);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uStack_190 = param_1;
      puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar11);
      func_0x0001044ade60(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044b12e0);
        (*pcVar2)();
      }
      puVar5 = puStack_188;
      if ((uVar9 & 0xc000000000000001) == 0) {
        puVar10 = (undefined8 *)(uVar9 + 0x20);
        do {
          _objc_retain(*puVar10);
          FUN_1044b58a0(lVar7);
          uVar9 = *(ulong *)(puVar5 + 0x10);
          puStack_188 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
            func_0x0001044ade60(1 < *(ulong *)(puVar5 + 0x18),uVar9 + 1,1);
          }
          puVar5 = puStack_188;
          *(ulong *)(puStack_188 + 0x10) = uVar9 + 1;
          FUN_1044ae614(lVar7,puStack_188 +
                              *(long *)(lVar3 + 0x48) * uVar9 +
                              ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)));
          uVar6 = uVar6 - 1;
          puVar10 = puVar10 + 1;
          param_1 = uStack_190;
        } while (uVar6 != 0);
      }
      else {
        uVar8 = 0;
        do {
          func_0x0001033e3434(uVar8,uVar9);
          FUN_1044b58a0(lVar7 - extraout_x12);
          uVar1 = *(ulong *)(puVar5 + 0x10);
          puStack_188 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
            func_0x0001044ade60(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
          }
          puVar5 = puStack_188;
          uVar8 = uVar8 + 1;
          *(ulong *)(puStack_188 + 0x10) = uVar1 + 1;
          FUN_1044ae614(lVar7 - extraout_x12,
                        puStack_188 +
                        *(long *)(lVar3 + 0x48) * uVar1 +
                        ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)));
          param_1 = uStack_190;
        } while (uVar6 != uVar8);
      }
    }
  }
  puStack_160 = puVar5;
  if (*(long *)(param_2 + _DAT_11307f1c8) == 0) {
    func_0x0001044af0a4(auStack_158);
  }
  else {
    FUN_1044abbdc(auStack_158);
    func_0x0001044af0cc(auStack_158);
  }
  _memcpy(param_1,&uStack_180,0x109);
  return;
}



/* Entry: 1044b12e0; end: 1044b12ff;  */

void FUN_1044b12e0(void)

{
  _objc_opt_self(&PTR_PTR_1129bfad0);
  return;
}



/* Entry: 1044b1300; end: 1044b133f;  */

undefined8 FUN_1044b1300(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1044b16e0(param_1);
  FUN_1044b1a14(param_1);
  return uVar1;
}



/* Entry: 1044b1340; end: 1044b134b; -[SCStoriesPlaybackSingleSnapStorySequence storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1340(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f1f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f1f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b134c; end: 1044b1357; -[SCStoriesPlaybackSingleSnapStorySequence displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b134c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f200))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f200);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b1358; end: 1044b13af;  */

void FUN_1044b1358(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044b13b0; end: 1044b13bf; -[SCStoriesPlaybackSingleSnapStorySequence discoverMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b13b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f208));
  return;
}



/* Entry: 1044b13c0; end: 1044b141b; -[SCStoriesPlaybackSingleSnapStorySequence storySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b13c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f210);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b8ee8(0);
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



/* Entry: 1044b141c; end: 1044b14bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b141c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f1f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f200);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f208) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307f210) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b14c0; end: 1044b15bf; -[SCStoriesPlaybackSingleSnapStorySequence initWithStoryId:displayName:discoverMetadata:storySnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b14c0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_6 != 0) {
    uVar4 = 0;
    FUN_1044b8ee8(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar4);
  }
  _objc_retain();
  plVar1 = (long *)(param_1 + _DAT_11307f1f8);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11307f200);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307f208) = param_5;
  *(long *)(param_1 + _DAT_11307f210) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b15c0; end: 1044b15c3; -[SCStoriesPlaybackSingleSnapStorySequence copyWithZone:] */

void FUN_1044b15c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b15c4; end: 1044b1603; -[SCStoriesPlaybackSingleSnapStorySequence description] */

void FUN_1044b15c4(void)

{
  undefined1 auStack_130 [272];
  
  _objc_retain();
  FUN_1044b1a48(auStack_130);
  FUN_1044b1a14(auStack_130);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b1604; end: 1044b167f; -[SCStoriesPlaybackSingleSnapStorySequence init] */

void FUN_1044b1604(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackSingleSnapStorySequenceWrapper.swift",0x4f,
             2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b164c);
  (*pcVar1)();
}



/* Entry: 1044b1680; end: 1044b16df; -[SCStoriesPlaybackSingleSnapStorySequence .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1680(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f1f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f200 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f208));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f210));
  return;
}



/* Entry: 1044b16e0; end: 1044b1a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b16e0(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_380 [8];
  undefined *apuStack_368 [29];
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
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
  undefined1 uStack_80;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1044a2b58();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = auStack_380 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar5 - extraout_x12;
  uStack_258 = param_1[1];
  uStack_260 = *param_1;
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307f1f8);
  puVar6[1] = uStack_258;
  *puVar6 = uStack_260;
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307f200);
  puVar6[1] = uStack_268;
  *puVar6 = uStack_270;
  uStack_98 = param_1[0x1d];
  uStack_a0 = param_1[0x1c];
  uStack_88 = param_1[0x1f];
  uStack_90 = param_1[0x1e];
  uStack_80 = *(undefined1 *)(param_1 + 0x20);
  uStack_d8 = param_1[0x15];
  uStack_e0 = param_1[0x14];
  uStack_c8 = param_1[0x17];
  uStack_d0 = param_1[0x16];
  uStack_b8 = param_1[0x19];
  uStack_c0 = param_1[0x18];
  uStack_a8 = param_1[0x1b];
  uStack_b0 = param_1[0x1a];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  iVar2 = (int)&uStack_160;
  func_0x0001044af0d0();
  if (iVar2 == 1) {
    FUN_1044b1d40(&uStack_260,&uStack_250,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b1d40(&uStack_270,&uStack_250,0x112d35ff8,&UNK_10d900cd0);
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_178 = uStack_88;
    uStack_180 = uStack_90;
    uStack_170 = uStack_80;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_208 = uStack_118;
    uStack_210 = uStack_120;
    uStack_1f8 = uStack_108;
    uStack_200 = uStack_110;
    uStack_1e8 = uStack_f8;
    uStack_1f0 = uStack_100;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_248 = uStack_158;
    uStack_250 = uStack_160;
    uStack_238 = uStack_148;
    uStack_240 = uStack_150;
    uStack_228 = uStack_138;
    uStack_230 = uStack_140;
    uStack_218 = uStack_128;
    uStack_220 = uStack_130;
    FUN_1044abe24(0);
    _objc_allocWithZone();
    FUN_1044b1d40(&uStack_260,apuStack_368,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b1d40(&uStack_270,apuStack_368,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b1d40(&uStack_160,apuStack_368,0x11307e938,&UNK_10dd09210);
    puVar6 = &uStack_250;
    FUN_1044ab8d0();
    func_0x0001044af130(&uStack_160);
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307f208) = puVar6;
  lVar7 = param_1[0x21];
  if (lVar7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar7 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar9 != 0) {
      apuStack_368[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1044ade2c(0,lVar9,0);
      lVar7 = lVar7 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lVar10 = *(long *)(lVar10 + 0x48);
      do {
        puVar8 = apuStack_368[0];
        FUN_1044ae574(lVar7,lVar3);
        FUN_1044ae574(lVar3,puVar5);
        FUN_1044b8ee8(0);
        _objc_allocWithZone();
        puVar4 = puVar5;
        FUN_1044b7a3c();
        func_0x0001044ae5b8(lVar3);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        apuStack_368[0] = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          FUN_1044ade2c(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_368[0] + 0x10) = uVar1 + 1;
        *(undefined1 **)(apuStack_368[0] + uVar1 * 8 + 0x20) = puVar4;
        lVar7 = lVar7 + lVar10;
        lVar9 = lVar9 + -1;
        puVar8 = apuStack_368[0];
      } while (lVar9 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11307f210) = puVar8;
  _objc_msgSendSuper2(auStack_280,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b1a14; end: 1044b1a47;  */

undefined8 FUN_1044b1a14(undefined8 param_1)

{
  (*(code *)(undefined *)0x10449dbc8)();
  return param_1;
}



/* Entry: 1044b1a48; end: 1044b1d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1a48(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [232];
  undefined *puStack_78;
  
  lVar3 = 0;
  FUN_1044a2b58();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar7 = (long)&uStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f1f8);
  uVar4 = puVar10[1];
  uStack_178 = puVar10[1];
  uStack_180 = *puVar10;
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f200);
  uVar11 = puVar10[1];
  uStack_168 = puVar10[1];
  uStack_170 = *puVar10;
  if (*(long *)(param_2 + _DAT_11307f208) == 0) {
    func_0x0001044af0a4(auStack_160);
  }
  else {
    FUN_1044abbdc(auStack_160);
    func_0x0001044af0cc(auStack_160);
  }
  uVar9 = *(ulong *)(param_2 + _DAT_11307f210);
  if (uVar9 == 0) {
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar4);
    _objc_release(param_2);
    puStack_78 = (undefined *)0x0;
  }
  else {
    if (uVar9 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar9;
      if (-1 < (long)uVar9) {
        uVar6 = uVar9 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar6 == 0) {
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar4);
      _objc_release(param_2);
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uStack_190 = param_1;
      puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar11);
      func_0x0001044ade60(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044b1d20);
        (*pcVar2)();
      }
      puVar5 = puStack_188;
      if ((uVar9 & 0xc000000000000001) == 0) {
        puVar10 = (undefined8 *)(uVar9 + 0x20);
        do {
          _objc_retain(*puVar10);
          FUN_1044b58a0(lVar7);
          uVar9 = *(ulong *)(puVar5 + 0x10);
          puStack_188 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
            func_0x0001044ade60(1 < *(ulong *)(puVar5 + 0x18),uVar9 + 1,1);
          }
          puVar5 = puStack_188;
          *(ulong *)(puStack_188 + 0x10) = uVar9 + 1;
          FUN_1044ae614(lVar7,puStack_188 +
                              *(long *)(lVar3 + 0x48) * uVar9 +
                              ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)));
          uVar6 = uVar6 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar6 != 0);
      }
      else {
        uVar8 = 0;
        do {
          func_0x0001033e3434(uVar8,uVar9);
          FUN_1044b58a0(lVar7 - extraout_x12);
          uVar1 = *(ulong *)(puVar5 + 0x10);
          puStack_188 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
            func_0x0001044ade60(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
          }
          puVar5 = puStack_188;
          uVar8 = uVar8 + 1;
          *(ulong *)(puStack_188 + 0x10) = uVar1 + 1;
          FUN_1044ae614(lVar7 - extraout_x12,
                        puStack_188 +
                        *(long *)(lVar3 + 0x48) * uVar1 +
                        ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)));
        } while (uVar6 != uVar8);
      }
      _objc_release(param_2);
      puStack_78 = puVar5;
      param_1 = uStack_190;
    }
  }
  _memcpy(param_1,&uStack_180,0x110);
  return;
}



/* Entry: 1044b1d20; end: 1044b1d3f;  */

void FUN_1044b1d20(void)

{
  _objc_opt_self(&PTR_PTR_1129bfbb0);
  return;
}



/* Entry: 1044b1d40; end: 1044b1db7;  */

undefined8 FUN_1044b1d40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1044b1db8; end: 1044b1dc3; -[SCStoriesPlaybackMapStorySequence storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1db8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f240))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f240);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b1dc4; end: 1044b1dcf; -[SCStoriesPlaybackMapStorySequence displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1dc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f248))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f248);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b1dd0; end: 1044b1e27;  */

void FUN_1044b1dd0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044b1e28; end: 1044b1e83; -[SCStoriesPlaybackMapStorySequence storySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1e28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f250);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b8ee8(0);
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



/* Entry: 1044b1e84; end: 1044b1f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f240);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f248);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f250) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b1f10; end: 1044b1ff7; -[SCStoriesPlaybackMapStorySequence initWithStoryId:displayName:storySnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1f10(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar5 = 0;
  if (param_5 != 0) {
    uVar4 = 0;
    FUN_1044b8ee8();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar4);
    lVar5 = param_5;
  }
  plVar1 = (long *)(param_1 + _DAT_11307f240);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11307f248);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_11307f250) = lVar5;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b1ff8; end: 1044b2247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b1ff8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_c0 [16];
  undefined *apuStack_a8 [2];
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1044a2b58();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307f240);
  puVar2[1] = uStack_68;
  *puVar2 = uStack_70;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11307f248);
  puVar2[1] = uStack_78;
  *puVar2 = uStack_80;
  lVar3 = param_1[4];
  lStack_88 = lVar3;
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x10);
    if (lVar7 == 0) {
      FUN_1044b2644(&lStack_88,0x11307f258,&UNK_10dd0a368);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000101223174(&uStack_70,apuStack_a8);
      func_0x000101223174(&uStack_80,apuStack_a8);
      apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1044ade2c(0,lVar7,0);
      lVar3 = lVar3 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(lVar8 + 0x48);
      do {
        puVar9 = apuStack_a8[0];
        FUN_1044ae574(lVar3,lVar6);
        FUN_1044ae574(lVar6,puVar5);
        FUN_1044b8ee8(0);
        _objc_allocWithZone();
        puVar4 = puVar5;
        FUN_1044b7a3c();
        func_0x0001044ae5b8(lVar6);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        apuStack_a8[0] = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          FUN_1044ade2c(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        puVar9 = apuStack_a8[0];
        *(ulong *)(apuStack_a8[0] + 0x10) = uVar1 + 1;
        *(undefined1 **)(apuStack_a8[0] + uVar1 * 8 + 0x20) = puVar4;
        lVar3 = lVar3 + lVar8;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      FUN_1044b2644(&uStack_70,0x112d35ff8,&UNK_10d900cd0);
      FUN_1044b2644(&uStack_80,0x112d35ff8,&UNK_10d900cd0);
      FUN_1044b2644(&lStack_88,0x11307f258,&UNK_10dd0a368);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11307f250) = puVar9;
  _objc_msgSendSuper2(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b2248; end: 1044b224b; -[SCStoriesPlaybackMapStorySequence copyWithZone:] */

void FUN_1044b2248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b224c; end: 1044b22e3; -[SCStoriesPlaybackMapStorySequence description] */

void FUN_1044b224c(void)

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
  
  _objc_retain();
  FUN_1044b23b0(&uStack_70);
  uStack_28 = uStack_68;
  uStack_30 = uStack_70;
  FUN_1044b2644(&uStack_30,0x112d35ff8,&UNK_10d900cd0);
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  FUN_1044b2644(&uStack_40,0x112d35ff8,&UNK_10d900cd0);
  uStack_48 = uStack_50;
  FUN_1044b2644(&uStack_48,0x11307f258,&UNK_10dd0a368);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b22e4; end: 1044b235f; -[SCStoriesPlaybackMapStorySequence init] */

void FUN_1044b22e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackMapStorySequenceWrapper.swift",0x48,2,0x2e,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b232c);
  (*pcVar1)();
}



/* Entry: 1044b2360; end: 1044b23af; -[SCStoriesPlaybackMapStorySequence .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b2360(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f240 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f248 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f250));
  return;
}



/* Entry: 1044b23b0; end: 1044b2643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b23b0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_68;
  
  lVar4 = 0;
  FUN_1044a2b58();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar4 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f240);
  puVar1 = (undefined8 *)(param_2 + _DAT_11307f248);
  uStack_78 = puVar10[1];
  uStack_80 = *puVar10;
  uVar5 = puVar10[1];
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uVar11 = puVar1[1];
  uVar9 = *(ulong *)(param_2 + _DAT_11307f250);
  if (uVar9 == 0) {
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar5);
    _objc_release(param_2);
    puVar6 = (undefined *)0x0;
  }
  else {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar9;
      if (-1 < (long)uVar9) {
        uVar7 = uVar9 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar7 == 0) {
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar5);
      _objc_release(param_2);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar11);
      func_0x0001044ade60(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1044b2644);
        (*pcVar3)();
      }
      puVar6 = puStack_68;
      if ((uVar9 & 0xc000000000000001) == 0) {
        puVar10 = (undefined8 *)(uVar9 + 0x20);
        do {
          _objc_retain(*puVar10);
          FUN_1044b58a0(lVar4);
          uVar9 = *(ulong *)(puVar6 + 0x10);
          puStack_68 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
            func_0x0001044ade60(1 < *(ulong *)(puVar6 + 0x18),uVar9 + 1,1);
          }
          puVar6 = puStack_68;
          *(ulong *)(puStack_68 + 0x10) = uVar9 + 1;
          FUN_1044ae614(lVar4,puStack_68 +
                              *(long *)(lVar12 + 0x48) * uVar9 +
                              ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)));
          uVar7 = uVar7 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar7 != 0);
      }
      else {
        uVar8 = 0;
        do {
          func_0x0001033e3434(uVar8,uVar9);
          FUN_1044b58a0(lVar4 - extraout_x12);
          uVar2 = *(ulong *)(puVar6 + 0x10);
          puStack_68 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
            func_0x0001044ade60(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
          }
          puVar6 = puStack_68;
          uVar8 = uVar8 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
          FUN_1044ae614(lVar4 - extraout_x12,
                        puStack_68 +
                        *(long *)(lVar12 + 0x48) * uVar2 +
                        ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)));
        } while (uVar7 != uVar8);
      }
      _objc_release(param_2);
    }
  }
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[4] = puVar6;
  return;
}



/* Entry: 1044b2644; end: 1044b2683;  */

undefined8 FUN_1044b2644(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1044b2684; end: 1044b26a3;  */

void FUN_1044b2684(void)

{
  _objc_opt_self(&PTR_PTR_1129bfc90);
  return;
}



/* Entry: 1044b26a4; end: 1044b26e3;  */

undefined8 FUN_1044b26a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1044b2b60(param_1);
  FUN_1044b2edc(param_1);
  return uVar1;
}



/* Entry: 1044b26e4; end: 1044b26ef; -[SCStoriesPlaybackSavedStorySequence displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b26e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f288))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f288);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b26f0; end: 1044b26fb; -[SCStoriesPlaybackSavedStorySequence storyTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b26f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f290))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f290);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b26fc; end: 1044b2707; -[SCStoriesPlaybackSavedStorySequence compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b26fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f298))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f298);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b2708; end: 1044b275f;  */

void FUN_1044b2708(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044b2760; end: 1044b276f; -[SCStoriesPlaybackSavedStorySequence discoverMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b2760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307f2a0));
  return;
}



/* Entry: 1044b2770; end: 1044b27cb; -[SCStoriesPlaybackSavedStorySequence storySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b2770(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f2a8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b8ee8(0);
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



/* Entry: 1044b27cc; end: 1044b27db; -[SCStoriesPlaybackSavedStorySequence viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b27cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f2b0);
}



/* Entry: 1044b27dc; end: 1044b28af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b27dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f288);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f290);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f298);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307f2a0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11307f2a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11307f2b0) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b28b0; end: 1044b2a1f; -[SCStoriesPlaybackSavedStorySequence initWithDisplayName:storyTitle:compositeStoryId:discoverMetadata:storySnaps:viewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b28b0(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  lVar5 = param_7;
  _objc_retain();
  if (lVar5 == 0) {
    param_7 = 0;
  }
  else {
    uVar6 = 0;
    FUN_1044b8ee8(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar6);
    _objc_release(lVar5);
  }
  plVar1 = (long *)(param_1 + _DAT_11307f288);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_11307f290);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11307f298);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307f2a0) = param_6;
  *(long *)(param_1 + _DAT_11307f2a8) = param_7;
  *(undefined8 *)(param_1 + _DAT_11307f2b0) = param_8;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b2a20; end: 1044b2a23; -[SCStoriesPlaybackSavedStorySequence copyWithZone:] */

void FUN_1044b2a20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b2a24; end: 1044b2a6f; -[SCStoriesPlaybackSavedStorySequence description] */

void FUN_1044b2a24(undefined8 param_1)

{
  undefined1 auStack_148 [296];
  
  _objc_retain();
  FUN_1044b2f10(auStack_148);
  _objc_release(param_1);
  FUN_1044b2edc(auStack_148);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b2a70; end: 1044b2aeb; -[SCStoriesPlaybackSavedStorySequence init] */

void FUN_1044b2a70(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackSavedStorySequenceWrapper.swift",0x4a,2,
             0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b2ab8);
  (*pcVar1)();
}



/* Entry: 1044b2aec; end: 1044b2b5f; -[SCStoriesPlaybackSavedStorySequence .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b2aec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f288 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f290 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f298 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f2a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f2a8));
  return;
}



/* Entry: 1044b2b60; end: 1044b2edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b2b60(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_3a0 [8];
  undefined8 *puStack_398;
  undefined *apuStack_378 [29];
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
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
  undefined1 uStack_80;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1044a2b58();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = auStack_3a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar5 - extraout_x12;
  uStack_258 = param_1[1];
  uStack_260 = *param_1;
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307f288);
  puVar6[1] = uStack_258;
  *puVar6 = uStack_260;
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307f290);
  puVar6[1] = uStack_268;
  *puVar6 = uStack_270;
  uStack_278 = param_1[5];
  uStack_280 = param_1[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_11307f298);
  puVar6[1] = uStack_278;
  *puVar6 = uStack_280;
  uStack_148 = param_1[9];
  uStack_150 = param_1[8];
  uStack_138 = param_1[0xb];
  uStack_140 = param_1[10];
  uStack_108 = param_1[0x11];
  uStack_110 = param_1[0x10];
  uStack_f8 = param_1[0x13];
  uStack_100 = param_1[0x12];
  uStack_128 = param_1[0xd];
  uStack_130 = param_1[0xc];
  uStack_118 = param_1[0xf];
  uStack_120 = param_1[0xe];
  uStack_c8 = param_1[0x19];
  uStack_d0 = param_1[0x18];
  uStack_b8 = param_1[0x1b];
  uStack_c0 = param_1[0x1a];
  uStack_e8 = param_1[0x15];
  uStack_f0 = param_1[0x14];
  uStack_d8 = param_1[0x17];
  uStack_e0 = param_1[0x16];
  uStack_98 = param_1[0x1f];
  uStack_a0 = param_1[0x1e];
  uStack_88 = param_1[0x21];
  uStack_90 = param_1[0x20];
  uStack_a8 = param_1[0x1d];
  uStack_b0 = param_1[0x1c];
  uStack_80 = *(undefined1 *)(param_1 + 0x22);
  iVar2 = (int)&uStack_160;
  func_0x0001044af0d0();
  if (iVar2 == 1) {
    FUN_1044b3228(&uStack_260,&uStack_250,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b3228(&uStack_270,&uStack_250,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b3228(&uStack_280,&uStack_250,0x112d35ff8,&UNK_10d900cd0);
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_178 = uStack_88;
    uStack_180 = uStack_90;
    uStack_170 = uStack_80;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_208 = uStack_118;
    uStack_210 = uStack_120;
    uStack_1f8 = uStack_108;
    uStack_200 = uStack_110;
    uStack_1e8 = uStack_f8;
    uStack_1f0 = uStack_100;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_248 = uStack_158;
    uStack_250 = uStack_160;
    uStack_238 = uStack_148;
    uStack_240 = uStack_150;
    uStack_228 = uStack_138;
    uStack_230 = uStack_140;
    uStack_218 = uStack_128;
    uStack_220 = uStack_130;
    FUN_1044abe24(0);
    _objc_allocWithZone();
    FUN_1044b3228(&uStack_260,apuStack_378,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b3228(&uStack_270,apuStack_378,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b3228(&uStack_280,apuStack_378,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044b3228(&uStack_160,apuStack_378,0x11307e938,&UNK_10dd09210);
    puVar6 = &uStack_250;
    FUN_1044ab8d0();
    func_0x0001044af130(&uStack_160);
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307f2a0) = puVar6;
  lVar8 = param_1[0x23];
  if (lVar8 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar8 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar9 != 0) {
      apuStack_378[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_398 = param_1;
      FUN_1044ade2c(0,lVar9,0);
      lVar8 = lVar8 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lVar10 = *(long *)(lVar10 + 0x48);
      do {
        puVar7 = apuStack_378[0];
        FUN_1044ae574(lVar8,lVar3);
        FUN_1044ae574(lVar3,puVar5);
        FUN_1044b8ee8(0);
        _objc_allocWithZone();
        puVar4 = puVar5;
        FUN_1044b7a3c();
        func_0x0001044ae5b8(lVar3);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        apuStack_378[0] = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          FUN_1044ade2c(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_378[0] + 0x10) = uVar1 + 1;
        *(undefined1 **)(apuStack_378[0] + uVar1 * 8 + 0x20) = puVar4;
        lVar8 = lVar8 + lVar10;
        lVar9 = lVar9 + -1;
        puVar7 = apuStack_378[0];
        param_1 = puStack_398;
      } while (lVar9 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11307f2a8) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_11307f2b0) = param_1[0x24];
  _objc_msgSendSuper2(auStack_290,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b2edc; end: 1044b2f0f;  */

undefined8 FUN_1044b2edc(undefined8 param_1)

{
  (*(code *)(undefined *)0x10449cf40)();
  return param_1;
}



/* Entry: 1044b2f10; end: 1044b3207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b2f10(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1b0 [8];
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [232];
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  FUN_1044a2b58();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar6 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f288);
  uVar11 = puVar10[1];
  uStack_188 = puVar10[1];
  uStack_190 = *puVar10;
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f290);
  uVar4 = puVar10[1];
  uStack_178 = puVar10[1];
  uStack_180 = *puVar10;
  puVar10 = (undefined8 *)(param_2 + _DAT_11307f298);
  uVar12 = puVar10[1];
  uStack_168 = puVar10[1];
  uStack_170 = *puVar10;
  uStack_1a0 = param_1;
  if (*(long *)(param_2 + _DAT_11307f2a0) == 0) {
    func_0x0001044af0a4(auStack_160);
  }
  else {
    FUN_1044abbdc(auStack_160);
    func_0x0001044af0cc(auStack_160);
  }
  uVar9 = *(ulong *)(param_2 + _DAT_11307f2a8);
  if (uVar9 == 0) {
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar4);
    puVar5 = (undefined *)0x0;
  }
  else {
    if (uVar9 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar9;
      if (-1 < (long)uVar9) {
        uVar8 = uVar9 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar8 == 0) {
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar4);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uStack_1a8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
      puStack_198 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar12);
      func_0x0001044ade60(0,uStack_1a8,0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044b3208);
        (*pcVar2)();
      }
      puVar5 = puStack_198;
      if ((uVar9 & 0xc000000000000001) == 0) {
        puVar10 = (undefined8 *)(uVar9 + 0x20);
        do {
          _objc_retain(*puVar10);
          FUN_1044b58a0(puVar6);
          uVar9 = *(ulong *)(puVar5 + 0x10);
          puStack_198 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
            func_0x0001044ade60(1 < *(ulong *)(puVar5 + 0x18),uVar9 + 1,1);
          }
          puVar5 = puStack_198;
          *(ulong *)(puStack_198 + 0x10) = uVar9 + 1;
          FUN_1044ae614(puVar6,puStack_198 +
                               *(long *)(lVar3 + 0x48) * uVar9 +
                               ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)));
          uVar8 = uVar8 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar8 != 0);
      }
      else {
        uVar7 = 0;
        do {
          func_0x0001033e3434(uVar7,uVar9);
          FUN_1044b58a0((long)puVar6 - extraout_x12);
          uVar1 = *(ulong *)(puVar5 + 0x10);
          puStack_198 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
            func_0x0001044ade60(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
          }
          puVar5 = puStack_198;
          uVar7 = uVar7 + 1;
          *(ulong *)(puStack_198 + 0x10) = uVar1 + 1;
          FUN_1044ae614((long)puVar6 - extraout_x12,
                        puStack_198 +
                        *(long *)(lVar3 + 0x48) * uVar1 +
                        ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)));
        } while (uVar8 != uVar7);
      }
    }
  }
  uStack_70 = *(undefined8 *)(param_2 + _DAT_11307f2b0);
  puStack_78 = puVar5;
  _memcpy(uStack_1a0,&uStack_190,0x128);
  return;
}



/* Entry: 1044b3208; end: 1044b3227;  */

void FUN_1044b3208(void)

{
  _objc_opt_self(&PTR_PTR_1129bfd68);
  return;
}



/* Entry: 1044b3228; end: 1044b326f;  */

undefined8 FUN_1044b3228(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1044b3270; end: 1044b32cb; -[SCStoriesSnapPlaybackAudioStitchInfo audioStitchId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3270(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f2e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f2e0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b32cc; end: 1044b32db; -[SCStoriesSnapPlaybackAudioStitchInfo snapsPerRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b32cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f2e8);
}



/* Entry: 1044b32dc; end: 1044b32eb; -[SCStoriesSnapPlaybackAudioStitchInfo snapsPerColumn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b32dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f2f0);
}



/* Entry: 1044b32ec; end: 1044b3347; -[SCStoriesSnapPlaybackAudioStitchInfo snaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b32ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307f2f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044b3e64(0);
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



/* Entry: 1044b3348; end: 1044b33db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f2e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307f2e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307f2f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f2f8) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b33dc; end: 1044b34b3; -[SCStoriesSnapPlaybackAudioStitchInfo initWithAudioStitchId:snapsPerRow:snapsPerColumn:snaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b33dc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar4 = 0;
  if (param_6 != 0) {
    uVar3 = 0;
    FUN_1044b3e64();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar3);
    lVar4 = param_6;
  }
  plVar1 = (long *)(param_1 + _DAT_11307f2e0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307f2e8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11307f2f0) = param_5;
  *(long *)(param_1 + _DAT_11307f2f8) = lVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b34b4; end: 1044b34e3;  */

void FUN_1044b34b4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044b34e4(param_1);
  return;
}



/* Entry: 1044b34e4; end: 1044b371f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b34e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_b8;
  long lStack_b0;
  undefined *apuStack_a8 [2];
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_11307f2e0);
  puVar11[1] = uStack_78;
  *puVar11 = uStack_80;
  uVar3 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307f2e8) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11307f2f0) = uVar3;
  lVar8 = param_1[4];
  lStack_88 = lVar8;
  if (lVar8 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar8 + 0x10);
    if (lVar9 == 0) {
      func_0x0001044b384c(&lStack_88,0x11307f300,&UNK_10dd0a3c8);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000101223174(&uStack_80,apuStack_a8);
      apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001044ade94(0,lVar9,0);
      puVar10 = apuStack_a8[0];
      lVar6 = 0;
      FUN_1044b3e64();
      puVar11 = (undefined8 *)(lVar8 + 0x40);
      do {
        uVar3 = puVar11[-4];
        uVar4 = puVar11[-3];
        uVar13 = puVar11[-2];
        uVar14 = puVar11[-1];
        uVar12 = *puVar11;
        lVar8 = lVar6;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar8 + _DAT_11307f330);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        *(undefined8 *)(lVar8 + _DAT_11307f338) = uVar13;
        *(undefined8 *)(lVar8 + _DAT_11307f340) = uVar14;
        *(undefined8 *)(lVar8 + _DAT_11307f348) = uVar12;
        puVar5 = PTR_s_init_1125d9248;
        lStack_b8 = lVar8;
        lStack_b0 = lVar6;
        _swift_bridgeObjectRetain(uVar4);
        plVar7 = &lStack_b8;
        _objc_msgSendSuper2(plVar7,puVar5);
        uVar2 = *(ulong *)(puVar10 + 0x10);
        apuStack_a8[0] = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
          func_0x0001044ade94(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
        }
        puVar10 = apuStack_a8[0];
        puVar11 = puVar11 + 5;
        *(ulong *)(apuStack_a8[0] + 0x10) = uVar2 + 1;
        *(long **)(apuStack_a8[0] + uVar2 * 8 + 0x20) = plVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      func_0x0001044b384c(&uStack_80,0x112d35ff8,&UNK_10d900cd0);
      func_0x0001044b384c(&lStack_88,0x11307f300,&UNK_10dd0a3c8);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11307f2f8) = puVar10;
  _objc_msgSendSuper2(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b3720; end: 1044b3723; -[SCStoriesSnapPlaybackAudioStitchInfo copyWithZone:] */

void FUN_1044b3720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b3724; end: 1044b3793; -[SCStoriesSnapPlaybackAudioStitchInfo description] */

void FUN_1044b3724(void)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  _objc_retain();
  FUN_1044b388c(&uStack_50);
  uStack_18 = uStack_48;
  uStack_20 = uStack_50;
  func_0x0001044b384c(&uStack_20,0x112d35ff8,&UNK_10d900cd0);
  uStack_28 = uStack_30;
  func_0x0001044b384c(&uStack_28,0x11307f300,&UNK_10dd0a3c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b3794; end: 1044b380f; -[SCStoriesSnapPlaybackAudioStitchInfo init] */

void FUN_1044b3794(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackAudioStitchInfoWrapper.swift",0x4b,2,
             0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b37dc);
  (*pcVar1)();
}



/* Entry: 1044b3810; end: 1044b388b; -[SCStoriesSnapPlaybackAudioStitchInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3810(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f2e0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f2f8));
  return;
}



/* Entry: 1044b388c; end: 1044b3b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b388c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11307f2e0);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11307f2e0))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_11307f2e8);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11307f2f0);
  uVar11 = *(ulong *)(param_2 + _DAT_11307f2f8);
  if (uVar11 == 0) {
    _swift_bridgeObjectRetain(uVar3);
    _objc_release(param_2);
    puVar15 = (undefined *)0x0;
  }
  else {
    if (uVar11 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar10 = uVar11;
      if (-1 < (long)uVar11) {
        uVar10 = uVar11 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar15;
    if (uVar10 == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _objc_release(param_2);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(uVar3);
      func_0x0001044adec8(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1044b3b4c);
        (*pcVar5)();
      }
      if ((uVar11 & 0xc000000000000001) == 0) {
        plVar9 = (long *)(uVar11 + 0x20);
        do {
          lVar7 = *plVar9;
          uVar2 = *(undefined8 *)(lVar7 + _DAT_11307f330);
          uVar4 = ((undefined8 *)(lVar7 + _DAT_11307f330))[1];
          uVar16 = *(undefined8 *)(lVar7 + _DAT_11307f338);
          uVar17 = *(undefined8 *)(lVar7 + _DAT_11307f340);
          uVar8 = *(undefined8 *)(lVar7 + _DAT_11307f348);
          uVar11 = *(ulong *)(puVar15 + 0x10);
          uVar12 = *(ulong *)(puVar15 + 0x18);
          _swift_bridgeObjectRetain(uVar4);
          if (uVar12 >> 1 <= uVar11) {
            func_0x0001044adec8(1 < uVar12,uVar11 + 1,1);
          }
          *(ulong *)(puVar15 + 0x10) = uVar11 + 1;
          *(undefined8 *)(puVar15 + uVar11 * 0x28 + 0x20) = uVar2;
          *(undefined8 *)(puVar15 + uVar11 * 0x28 + 0x28) = uVar4;
          *(undefined8 *)(puVar15 + uVar11 * 0x28 + 0x30) = uVar16;
          *(undefined8 *)(puVar15 + uVar11 * 0x28 + 0x38) = uVar17;
          *(undefined8 *)(puVar15 + uVar11 * 0x28 + 0x40) = uVar8;
          uVar10 = uVar10 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar10 != 0);
      }
      else {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          func_0x0001044bfa5c(uVar12,uVar11);
          uVar2 = *(undefined8 *)(uVar6 + _DAT_11307f330);
          uVar4 = ((undefined8 *)(uVar6 + _DAT_11307f330))[1];
          uVar16 = *(undefined8 *)(uVar6 + _DAT_11307f338);
          uVar17 = *(undefined8 *)(uVar6 + _DAT_11307f340);
          uVar8 = *(undefined8 *)(uVar6 + _DAT_11307f348);
          _swift_bridgeObjectRetain(uVar4);
          _swift_unknownObjectRelease(uVar6);
          uVar6 = *(ulong *)(puVar15 + 0x10);
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar6) {
            func_0x0001044adec8(1 < *(ulong *)(puVar15 + 0x18),uVar6 + 1,1);
          }
          uVar12 = uVar12 + 1;
          *(ulong *)(puVar15 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puVar15 + uVar6 * 0x28 + 0x20) = uVar2;
          *(undefined8 *)(puVar15 + uVar6 * 0x28 + 0x28) = uVar4;
          *(undefined8 *)(puVar15 + uVar6 * 0x28 + 0x30) = uVar16;
          *(undefined8 *)(puVar15 + uVar6 * 0x28 + 0x38) = uVar17;
          *(undefined8 *)(puVar15 + uVar6 * 0x28 + 0x40) = uVar8;
        } while (uVar10 != uVar12);
      }
      _objc_release(param_2);
    }
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar13;
  param_1[3] = uVar14;
  param_1[4] = puVar15;
  return;
}



/* Entry: 1044b3b4c; end: 1044b3b6b;  */

void FUN_1044b3b4c(void)

{
  _objc_opt_self(&PTR_PTR_1129bfe58);
  return;
}



/* Entry: 1044b3b6c; end: 1044b3be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3b6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f330);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307f338) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11307f340) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11307f348) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b3be8; end: 1044b3c43; -[SCStoriesSnapPlaybackAudioStitchSnap submissionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3be8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f330))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f330);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b3c44; end: 1044b3c53; -[SCStoriesSnapPlaybackAudioStitchSnap startTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b3c44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f338);
}



/* Entry: 1044b3c54; end: 1044b3c63; -[SCStoriesSnapPlaybackAudioStitchSnap endTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b3c54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f340);
}



/* Entry: 1044b3c64; end: 1044b3c73; -[SCStoriesSnapPlaybackAudioStitchSnap positionIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b3c64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f348);
}



/* Entry: 1044b3c74; end: 1044b3d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f330);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307f338) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307f340) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307f348) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b3d08; end: 1044b3db3; -[SCStoriesSnapPlaybackAudioStitchSnap initWithSubmissionId:startTime:endTime:positionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3d08(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_3 + _DAT_11307f330);
  *plVar1 = param_5;
  plVar1[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_11307f338) = param_1;
  *(undefined8 *)(param_3 + _DAT_11307f340) = param_2;
  *(undefined8 *)(param_3 + _DAT_11307f348) = param_6;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b3db4; end: 1044b3db7; -[SCStoriesSnapPlaybackAudioStitchSnap copyWithZone:] */

void FUN_1044b3db4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b3db8; end: 1044b3dd3; -[SCStoriesSnapPlaybackAudioStitchSnap description] */

void FUN_1044b3db8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b3dd4; end: 1044b3e4f; -[SCStoriesSnapPlaybackAudioStitchSnap init] */

void FUN_1044b3dd4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackAudioStitchSnapWrapper.swift",0x4b,2,
             0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b3e1c);
  (*pcVar1)();
}



/* Entry: 1044b3e50; end: 1044b3e63; -[SCStoriesSnapPlaybackAudioStitchSnap .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f330 + 8))
  ;
  return;
}



/* Entry: 1044b3e64; end: 1044b3e83;  */

void FUN_1044b3e64(void)

{
  _objc_opt_self(&PTR_PTR_1129bff38);
  return;
}



/* Entry: 1044b3e84; end: 1044b3e93; -[SCStoriesSnapPlaybackCaptureInfo orientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044b3e84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f378);
}



/* Entry: 1044b3e94; end: 1044b3eef; -[SCStoriesSnapPlaybackCaptureInfo encryptedGeoLogString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3e94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f380))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f380);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b3ef0; end: 1044b3ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307f378) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f380);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b3ef4; end: 1044b3fe3; -[SCStoriesSnapPlaybackCaptureInfo initWithOrientation:encryptedGeoLogString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b3ef4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11307f378) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11307f380);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b3fe4; end: 1044b3fe7; -[SCStoriesSnapPlaybackCaptureInfo copyWithZone:] */

void FUN_1044b3fe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044b3fe8; end: 1044b4003; -[SCStoriesSnapPlaybackCaptureInfo description] */

void FUN_1044b3fe8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044b4004; end: 1044b407f; -[SCStoriesSnapPlaybackCaptureInfo init] */

void FUN_1044b4004(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackCaptureInfoWrapper.swift",0x47,2,0x26,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044b404c);
  (*pcVar1)();
}



/* Entry: 1044b4080; end: 1044b4093; -[SCStoriesSnapPlaybackCaptureInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b4080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307f380 + 8))
  ;
  return;
}



/* Entry: 1044b4094; end: 1044b40b3;  */

void FUN_1044b4094(void)

{
  _objc_opt_self(&PTR_PTR_1129c0018);
  return;
}



/* Entry: 1044b40b4; end: 1044b40b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b40b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307f378) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307f380);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044b40b8; end: 1044b40c3; -[SCStoriesSnapPlaybackCreatorInfo creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b40b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f3b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f3b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b40c4; end: 1044b40cf; -[SCStoriesSnapPlaybackCreatorInfo creatorUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b40c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f3b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f3b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b40d0; end: 1044b40db; -[SCStoriesSnapPlaybackCreatorInfo creatorDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044b40d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307f3c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307f3c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044b40dc; end: 1044b40eb; -[SCStoriesSnapPlaybackCreatorInfo showAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044b40dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f3c8);
}


