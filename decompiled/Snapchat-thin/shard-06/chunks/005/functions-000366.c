/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a2c5d8; end: 104a2c72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2c5d8(ulong param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lRam000000011340b3d0 = lRam000000011340b3d0 + 1;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_1130a4f78;
  if (param_2 == 0) {
    lRam000000011340b3d8 = lRam000000011340b3d8 + 1;
  }
  else {
    if ((param_1 & 1) == 0) {
      lRam000000011340b3e0 = lRam000000011340b3e0 + 1;
      if ((param_3 & 1) == 0) {
        _swift_beginAccess(param_2 + _DAT_1130a4f78,auStack_60,0,0);
        puVar2 = (undefined1 *)(param_2 + lVar1);
        _swift_unknownObjectWeakLoadStrong();
        if (puVar2 != (undefined1 *)0x0) {
          puVar3 = puVar2;
          FUN_104a2dc34();
          puVar4 = &UNK_1107bf0b0;
          _swift_allocError(&UNK_1107bf0b0,puVar3,0,0);
          *puVar3 = 1;
          puVar5 = puVar4;
          __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
          _swift_errorRelease(puVar4);
          _objc_msgSend(puVar2,PTR_s_sessionManagerWithManager_didFai_112525608,param_2,puVar5);
          _objc_release(puVar5);
          _objc_release(param_2);
          _swift_unknownObjectRelease(puVar2);
          return;
        }
      }
      else {
        lRam000000011340b3e8 = lRam000000011340b3e8 + 1;
        func_0x000104a28ed0(param_4);
      }
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 104a2c72c; end: 104a2c7d7; -[SPTSessionManager initiateClientSessionWith:useWebSessionAsFallback:] */

void FUN_104a2c72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar2,param_3);
  _objc_retain(param_1);
  func_0x000104a28ca8(puVar2,param_4);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 104a2c7d8; end: 104a2cbfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2c7d8(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *apuStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b3f0 = lRam000000011340b3f0 + 1;
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 == 0) {
    lRam000000011340b3f8 = lRam000000011340b3f8 + 1;
    return;
  }
  if (param_2 == (undefined *)0x0) {
    FUN_104a2f4c4(param_1,puVar6,0x1130a4df0);
    puVar5 = puVar6;
    (**(code **)(lVar11 + 0x30))(puVar6,1,lVar1);
    if ((int)puVar5 != 1) {
      (**(code **)(lVar11 + 0x20))(lVar10,puVar6,lVar1);
      FUN_104a29c3c(lVar10);
      (**(code **)(lVar11 + 8))(lVar10,lVar1);
      goto LAB_104a2cbc0;
    }
    func_0x000104a2f430(puVar6,0x1130a4df0);
    lVar1 = _DAT_1130a4f78;
    lRam000000011340b410 = lRam000000011340b410 + 1;
    _swift_beginAccess(param_3 + _DAT_1130a4f78,apuStack_80,0,0);
    puVar6 = (undefined1 *)(param_3 + lVar1);
    _swift_unknownObjectWeakLoadStrong();
    if (puVar6 == (undefined1 *)0x0) goto LAB_104a2cbc0;
    puVar5 = puVar6;
    FUN_104a2dc34();
    puVar7 = &UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,puVar5,0,0);
    *puVar5 = 1;
    puVar8 = puVar7;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(puVar7);
    _objc_msgSend(puVar6,PTR_s_sessionManagerWithManager_didFai_112525608,param_3,puVar8);
  }
  else {
    lRam000000011340b400 = lRam000000011340b400 + 1;
    apuStack_80[0] = param_2;
    _swift_errorRetain(param_2);
    _swift_errorRetain(param_2);
    uVar9 = 0x1130a5048;
    FUN_104a204dc(0x1130a5048);
    uVar2 = 0;
    func_0x000104a1fec0(0);
    ppuVar3 = &puStack_88;
    _swift_dynamicCast(ppuVar3,apuStack_80,uVar9,uVar2,6);
    puVar8 = puStack_88;
    if (((ulong)ppuVar3 & 1) != 0) {
      apuStack_80[0] = puStack_88;
      uVar9 = 0x1130a4da8;
      FUN_104a2f39c(0x1130a4da8,0x104a1fec0,&UNK_10dd4cb74);
      __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(&puStack_88,uVar2,uVar9);
      lVar1 = _DAT_1130a4f78;
      if (puStack_88 == (undefined *)0x1) {
        lRam000000011340b408 = lRam000000011340b408 + 1;
        _swift_beginAccess(param_3 + _DAT_1130a4f78,apuStack_80,0,0);
        puVar6 = (undefined1 *)(param_3 + lVar1);
        _swift_unknownObjectWeakLoadStrong();
        if (puVar6 == (undefined1 *)0x0) {
          _swift_errorRelease(param_2);
          _objc_release(puVar8);
          goto LAB_104a2cbc0;
        }
        puVar5 = puVar6;
        FUN_104a2dc34();
        puVar7 = &UNK_1107bf0b0;
        _swift_allocError(&UNK_1107bf0b0,puVar5,0,0);
        *puVar5 = 2;
        puVar4 = puVar7;
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
        _swift_errorRelease(puVar7);
        _objc_msgSend(puVar6,PTR_s_sessionManagerWithManager_didFai_112525608,param_3,puVar4);
        _swift_errorRelease(param_2);
        _objc_release(puVar4);
        goto LAB_104a2cb94;
      }
      _objc_release(puVar8);
    }
    lVar1 = _DAT_1130a4f78;
    _swift_beginAccess(param_3 + _DAT_1130a4f78,apuStack_80,0,0);
    puVar6 = (undefined1 *)(param_3 + lVar1);
    _swift_unknownObjectWeakLoadStrong();
    if (puVar6 == (undefined1 *)0x0) {
      _swift_errorRelease(param_2);
      goto LAB_104a2cbc0;
    }
    puVar5 = puVar6;
    FUN_104a2dc34();
    puVar7 = &UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,puVar5,0,0);
    *puVar5 = 1;
    puVar8 = puVar7;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(puVar7);
    _objc_msgSend(puVar6,PTR_s_sessionManagerWithManager_didFai_112525608,param_3,puVar8);
    _swift_errorRelease(param_2);
  }
LAB_104a2cb94:
  _objc_release(puVar8);
  _swift_unknownObjectRelease(puVar6);
LAB_104a2cbc0:
  uVar9 = *(undefined8 *)(param_3 + _DAT_1130a4f80);
  *(undefined8 *)(param_3 + _DAT_1130a4f80) = 0;
  _objc_release(param_3);
  _objc_release(uVar9);
  return;
}



/* Entry: 104a2cbfc; end: 104a2cc27;  */

void FUN_104a2cbfc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104a2cc28; end: 104a2cc33; -[SPTSessionManager initiateWebSessionWith:] */

void FUN_104a2cc28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar2,param_3);
  _objc_retain(param_1);
  (*(code *)0x104a28ed0)(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 104a2cc34; end: 104a2cecf;  */

void FUN_104a2cc34(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar2,param_3);
  _objc_retain(param_1);
  (*param_4)(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 104a2ced0; end: 104a2cf8b; -[SPTSessionManager authorizationCodeFrom:] */

void FUN_104a2ced0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = puVar3;
  func_0x000104a2e038(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  if (param_2 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar2,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a2cf8c; end: 104a2cfdf;  */

void FUN_104a2cf8c(long param_1)

{
  lRam000000011340b420 = lRam000000011340b420 + 1;
  FUN_104a2eedc();
  if (param_1 != 0) {
    return;
  }
  lRam000000011340b4c8 = lRam000000011340b4c8 + 1;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIWindow_1126c3e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a2cfe0; end: 104a2d04f; -[SPTSessionManager presentationAnchorForWebAuthenticationSession:] */

void FUN_104a2cfe0(undefined *param_1)

{
  undefined *puVar1;
  
  lRam000000011340b420 = lRam000000011340b420 + 1;
  _objc_retain();
  puVar1 = param_1;
  FUN_104a2eedc();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011340b4c8 = lRam000000011340b4c8 + 1;
    puVar1 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
    _objc_allocWithZone(PTR__OBJC_CLASS___UIWindow_1126c3e70);
    _objc_msgSend();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a2d050; end: 104a2d0e3;  */

void FUN_104a2d050(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lRam000000011340b428 = lRam000000011340b428 + 1;
  FUN_104a2eedc();
  if (param_1 != 0) {
    lVar1 = param_1;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar1 != 0) {
      _objc_msgSend(lVar1,PTR_s_presentViewController_animated_c_112621588,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 104a2d0e4; end: 104a2d1df;  */

void FUN_104a2d0e4(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  
  lVar3 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar5,param_2);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar5,param_2 == 0,1);
  _swift_retain(uVar2);
  uVar4 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(puVar5,param_3);
  _swift_release(uVar2);
  _objc_release(uVar4);
  func_0x000104a2f430(puVar5,0x1130a4df0);
  return;
}



/* Entry: 104a2d1e0; end: 104a2d2f7;  */

undefined8
FUN_104a2d1e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  uVar1 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_104a2d0e4;
  puStack_68 = &UNK_1107beef0;
  uStack_60 = param_4;
  uStack_58 = param_5;
  __Block_copy(&puStack_80);
  _objc_msgSend();
  __Block_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  _swift_release(uStack_58);
  return unaff_x20;
}



/* Entry: 104a2d2f8; end: 104a2d427;  */

void FUN_104a2d2f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xfffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  FUN_104a26a88();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 104a2d428; end: 104a2d48b;  */

undefined1  [16] FUN_104a2d428(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 3 & 0xfffffffffffff8)) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_104a2d628;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 3 & 0xfffffffffffff8)) >> (uVar7 & 0x3f) & 1)
             != 0);
  }
  uVar5 = 0;
LAB_104a2d628:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 104a2d48c; end: 104a2d58b;  */

undefined1  [16] FUN_104a2d48c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar2 = param_1;
      uVar3 = param_2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1) == 0
         )) goto LAB_104a2d56c;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(uVar3);
    uVar7 = 1;
  }
LAB_104a2d56c:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 104a2d58c; end: 104a2d63f;  */

undefined1  [16] FUN_104a2d58c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xfffffffffffff8)) >> (param_3 & 0x3f) & 1) !=
      0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_104a2d628;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xfffffffffffff8)) >> (param_3 & 0x3f) &
             1) != 0);
  }
  uVar4 = 0;
LAB_104a2d628:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 104a2d640; end: 104a2d7fb;  */

ulong FUN_104a2d640(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a2d724);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a2d728);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_104a2f328(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a2d7fc);
  (*pcVar2)();
}



/* Entry: 104a2d7fc; end: 104a2daab;  */

ulong FUN_104a2d7fc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2d984);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2d978);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_104a2f328(0,0x1130a4f40,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2d97c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2d980);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            _objc_retain(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        _objc_retain(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_104a2d640(uVar7,param_3,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x1130a4f40);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 104a2daac; end: 104a2dc33;  */

undefined * FUN_104a2daac(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b430 = lRam000000011340b430 + 1;
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar7,0x3a796669746f7073,0xe800000000000000);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000104a2f430(puVar7,0x1130a4df0);
    puVar3 = (undefined *)0x0;
    lRam000000011340b438 = lRam000000011340b438 + 1;
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    _objc_opt_self(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar3 = puVar4;
    _objc_msgSend(puVar4,PTR_s_canOpenURL__1125a8d68,puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return puVar3;
}



/* Entry: 104a2dc34; end: 104a2dc73;  */

void FUN_104a2dc34(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4d100;
  _swift_getWitnessTable(&UNK_10dd4d100,&UNK_1107bf0b0);
  puRam00000001130a4f90 = puVar1;
  return;
}



/* Entry: 104a2dc74; end: 104a2dca3;  */

void FUN_104a2dc74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
    return;
  }
  return;
}



/* Entry: 104a2dca4; end: 104a2df1f;  */

undefined1  [16] FUN_104a2dca4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lRam000000011340b440 = lRam000000011340b440 + 1;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    lVar8 = lVar10;
    func_0x000104a241f4(0,lVar10,0);
    puVar11 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar3 = *puVar11;
      lRam000000011340b4d0 = lRam000000011340b4d0 + 1;
      func_0x000104a238d4();
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000104a241f4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x20) = uVar3;
      *(long *)(puVar2 + uVar1 * 0x10 + 0x28) = lVar8;
      lVar10 = lVar10 + -1;
      puVar11 = puVar11 + 1;
    } while (lVar10 != 0);
  }
  puVar4 = puVar2;
  FUN_104a24e30();
  _swift_bridgeObjectRelease(puVar2);
  uVar3 = 0x1130a5068;
  FUN_104a204dc(0x1130a5068);
  uVar5 = 0x1130a5070;
  FUN_104a2f39c(0x1130a5070,FUN_104a2f584,PTR___sShyxGSTsMc_11034de90);
  uVar6 = uVar5;
  FUN_104a219a8();
  uVar7 = 0x20;
  uVar9 = 0xe100000000000000;
  __sSTsSy7ElementRpzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,uVar3,uVar5,uVar6);
  _swift_bridgeObjectRelease(puVar4);
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = uVar7;
  return auVar12;
}



/* Entry: 104a2df20; end: 104a2e433;  */

undefined * FUN_104a2df20(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_104a204dc(0x1130a4ff8);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_104a2f4c4(param_1,&uStack_90,0x1130a5000);
      uVar3 = uStack_88;
      uVar2 = uStack_90;
      uVar6 = uStack_90;
      uVar7 = uStack_88;
      FUN_104a2d428();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104a2e034);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_104a2f2b4(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104a2e038);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 104a2e434; end: 104a2e453;  */

void FUN_104a2e434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lRam000000011340b350 = lRam000000011340b350 + 1;
  _swift_beginAccess(lVar1 + 0x10,auStack_48,0,0,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_104a2e454(param_1,param_2,param_4,1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 104a2e454; end: 104a2eedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_104a2e454(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  long extraout_x8;
  long extraout_x12;
  undefined **unaff_x20;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  ulong uVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **unaff_x26;
  undefined *puVar23;
  undefined **appuStack_170 [18];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  ppuVar19 = *(undefined ***)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppuVar19[8]);
  ppuVar8 = (undefined **)((long)appuStack_170 + (0x70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)))
  ;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppuVar16 = _DAT_1130a4f78;
  ppuVar17 = (undefined **)((long)ppuVar8 - extraout_x12);
  lRam000000011340b458 = lRam000000011340b458 + 1;
  if (((ulong)param_4 & 1) == 0) {
    puVar23 = (undefined *)0x1;
  }
  else {
    lRam000000011340b460 = lRam000000011340b460 + 1;
    puVar23 = (undefined *)0x4;
  }
  uVar2 = SUB81(puVar23,0);
  ppuVar18 = ppuVar17;
  if (((ulong)param_2 >> 0x3c < 0xf) && (param_3 == (undefined **)0x0)) {
    unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    lStack_d8 = lVar4;
    _objc_opt_self();
    func_0x000104a2356c(param_1,param_2);
    ppuStack_d0 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
    ppuStack_a0 = (undefined **)0x0;
    _objc_msgSend(unaff_x26,PTR_s_JSONObjectWithData_options_error_11254dfe0,param_1,0,&ppuStack_a0)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    ppuVar21 = ppuStack_a0;
    ppuVar16 = param_2;
    if (unaff_x26 == (undefined **)0x0) {
      param_4 = ppuStack_a0;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(param_4);
      ppuVar19 = (undefined **)0x11340b478;
      lRam000000011340b478 = lRam000000011340b478 + 1;
      _swift_willThrow();
      ppuVar18 = _DAT_1130a4f78;
      lRam000000011340b498 = lRam000000011340b498 + 1;
      _swift_beginAccess((undefined *)((long)unaff_x20 + (long)_DAT_1130a4f78),&ppuStack_a0,0,0);
      ppuVar7 = (undefined **)((long)unaff_x20 + (long)ppuVar18);
      _swift_unknownObjectWeakLoadStrong();
      if (ppuVar7 == (undefined **)0x0) {
        func_0x000104a2f200(ppuStack_d0,param_2);
        ppuVar6 = ppuVar21;
        _swift_errorRelease(ppuVar21);
        param_3 = ppuVar21;
        goto LAB_104a2eb3c;
      }
      ppuVar8 = ppuVar7;
      FUN_104a2dc34();
      ppuVar9 = (undefined **)&UNK_1107bf0b0;
      _swift_allocError(&UNK_1107bf0b0,ppuVar8,0,0);
      *(undefined1 *)ppuVar8 = uVar2;
      ppuVar8 = ppuVar9;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      _swift_errorRelease(ppuVar9);
      _objc_msgSend(ppuVar7,PTR_s_sessionManagerWithManager_didFai_112525608);
      func_0x000104a2f200(ppuStack_d0,param_2);
      _swift_unknownObjectRelease(ppuVar7);
      _swift_errorRelease(ppuVar21);
LAB_104a2e7ec:
      ppuVar6 = ppuVar8;
      _objc_release(ppuVar8);
      ppuVar18 = ppuVar7;
      param_3 = ppuVar21;
      param_4 = ppuVar9;
      goto LAB_104a2eb3c;
    }
    _objc_retain();
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&ppuStack_a0,unaff_x26);
    _swift_unknownObjectRelease(unaff_x26);
    uVar14 = 0x1130a4fe8;
    FUN_104a204dc(0x1130a4fe8);
    param_1 = (undefined **)PTR___sypN_11034f1a8;
    pppuVar5 = &ppuStack_b8;
    _swift_dynamicCast(pppuVar5,&ppuStack_a0,PTR___sypN_11034f1a8 + 8,uVar14,6);
    ppuVar7 = ppuStack_b8;
    if ((int)pppuVar5 == 0) {
      lRam000000011340b470 = lRam000000011340b470 + 1;
LAB_104a2e808:
      ppuVar18 = _DAT_1130a4f78;
      _swift_beginAccess((undefined *)((long)unaff_x20 + (long)_DAT_1130a4f78),&ppuStack_a0,0,0);
      ppuVar21 = (undefined **)((long)unaff_x20 + (long)ppuVar18);
      _swift_unknownObjectWeakLoadStrong();
      ppuVar6 = ppuStack_d0;
      if (ppuVar21 == (undefined **)0x0) goto LAB_104a2eb7c;
      ppuVar16 = ppuVar21;
      FUN_104a2dc34();
      param_3 = (undefined **)&UNK_1107bf0b0;
      _swift_allocError(&UNK_1107bf0b0,ppuVar16,0,0);
      *(undefined1 *)ppuVar16 = uVar2;
      param_4 = param_3;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      _swift_errorRelease(param_3);
      _objc_msgSend(ppuVar21,PTR_s_sessionManagerWithManager_didFai_112525608,unaff_x20,param_4);
      ppuVar6 = ppuStack_d0;
      ppuVar7 = unaff_x26;
    }
    else {
      unaff_x26 = ppuVar7;
      if (ppuStack_b8[2] != (undefined *)0x0) {
        _swift_bridgeObjectRetain(ppuStack_b8);
        lVar4 = 0x726f727265;
        uVar20 = 0;
        FUN_104a2d428(0x726f727265);
        if ((uVar20 & 1) == 0) {
          _swift_bridgeObjectRelease(ppuVar7);
          param_3 = unaff_x20;
        }
        else {
          FUN_104a2f214(ppuVar7[7] + lVar4 * 0x20,&ppuStack_a0);
          _swift_bridgeObjectRelease(ppuVar7);
          pppuVar5 = &ppuStack_b8;
          _swift_dynamicCast(pppuVar5,&ppuStack_a0,(undefined *)((long)param_1 + 8),
                             PTR___sSSN_11034da80,6);
          param_3 = unaff_x20;
          if (((ulong)pppuVar5 & 1) != 0) {
            _swift_bridgeObjectRelease(ppuVar7);
            _swift_bridgeObjectRelease(uStack_b0);
            lRam000000011340b480 = lRam000000011340b480 + 1;
            goto LAB_104a2e808;
          }
        }
      }
      if (ppuVar7[2] == (undefined *)0x0) {
LAB_104a2ea8c:
        _swift_bridgeObjectRelease(ppuVar7);
        ppuVar6 = ppuStack_d0;
      }
      else {
        _swift_bridgeObjectRetain(ppuVar7);
        lVar4 = 0x745f737365636361;
        uVar20 = 0xec0000006e656b6f;
        FUN_104a2d428(0x745f737365636361);
        if ((uVar20 & 1) == 0) {
          _swift_bridgeObjectRelease(ppuVar7);
          param_3 = unaff_x20;
          goto LAB_104a2ea8c;
        }
        FUN_104a2f214(ppuVar7[7] + lVar4 * 0x20,&ppuStack_a0);
        _swift_bridgeObjectRelease(ppuVar7);
        pppuVar5 = &ppuStack_b8;
        _swift_dynamicCast(pppuVar5,&ppuStack_a0,(undefined *)((long)param_1 + 8),
                           PTR___sSSN_11034da80,6);
        param_3 = unaff_x20;
        if (((ulong)pppuVar5 & 1) == 0) goto LAB_104a2ea8c;
        if (ppuVar7[2] == (undefined *)0x0) {
          _swift_bridgeObjectRelease();
        }
        else {
          appuStack_170[0x11] = ppuStack_b8;
          uStack_e0 = uStack_b0;
          _swift_bridgeObjectRetain(ppuVar7);
          lVar4 = 0x5f73657269707865;
          uVar20 = 0xea00000000006e69;
          FUN_104a2d428(0x5f73657269707865);
          if ((uVar20 & 1) != 0) {
            FUN_104a2f214(ppuVar7[7] + lVar4 * 0x20,&ppuStack_a0);
            _swift_bridgeObjectRelease(ppuVar7);
            pppuVar5 = &ppuStack_b8;
            _swift_dynamicCast(pppuVar5,&ppuStack_a0,(undefined *)((long)param_1 + 8),
                               PTR___sSdN_11034dd90,6);
            ppuVar6 = ppuStack_b8;
            if (((ulong)pppuVar5 & 1) == 0) {
LAB_104a2ebb4:
              _swift_bridgeObjectRelease(uStack_e0);
              goto LAB_104a2ea8c;
            }
            if (ppuVar7[2] == (undefined *)0x0) {
              _swift_bridgeObjectRelease(uStack_e0);
              goto LAB_104a2eba4;
            }
            _swift_bridgeObjectRetain(ppuVar7);
            lVar4 = 0x5f68736572666572;
            uVar20 = 0;
            FUN_104a2d428(0x5f68736572666572);
            if ((uVar20 & 1) == 0) goto LAB_104a2eb90;
            FUN_104a2f214(ppuVar7[7] + lVar4 * 0x20,&ppuStack_a0);
            _swift_bridgeObjectRelease(ppuVar7);
            pppuVar5 = &ppuStack_b8;
            _swift_dynamicCast(pppuVar5,&ppuStack_a0,(undefined *)((long)param_1 + 8),
                               PTR___sSSN_11034da80,6);
            ppuVar21 = ppuStack_b8;
            if (((ulong)pppuVar5 & 1) == 0) goto LAB_104a2ebb4;
            appuStack_170[0xf] = (undefined **)uStack_b0;
            __s10Foundation4DateV20timeIntervalSinceNowACSd_tcfC(ppuVar17,ppuVar6);
            if (ppuVar7[2] == (undefined *)0x0) {
              uStack_98 = 0;
              ppuStack_a0 = (undefined **)0x0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              _swift_bridgeObjectRetain(ppuVar7);
              lVar4 = 0x65706f6373;
              uVar20 = 0;
              FUN_104a2d428(0x65706f6373);
              if ((uVar20 & 1) == 0) {
                _swift_bridgeObjectRelease(ppuVar7);
                uStack_98 = 0;
                ppuStack_a0 = (undefined **)0x0;
                lStack_88 = 0;
                uStack_90 = 0;
              }
              else {
                FUN_104a2f214(ppuVar7[7] + lVar4 * 0x20,&ppuStack_a0);
                _swift_bridgeObjectRelease(ppuVar7);
              }
            }
            _swift_bridgeObjectRelease(ppuVar7);
            appuStack_170[0x10] = ppuVar21;
            if (lStack_88 == 0) {
              func_0x000104a2f430(&ppuStack_a0,0x1130a4ff0);
LAB_104a2ec38:
              lRam000000011340b4e0 = lRam000000011340b4e0 + 1;
              appuStack_170[0xe] = (undefined **)0x0;
              uStack_b0 = 0xe000000000000000;
            }
            else {
              pppuVar5 = &ppuStack_b8;
              _swift_dynamicCast(pppuVar5,&ppuStack_a0,(undefined *)((long)param_1 + 8),
                                 PTR___sSSN_11034da80,6);
              appuStack_170[0xe] = ppuStack_b8;
              if (((ulong)pppuVar5 & 1) == 0) goto LAB_104a2ec38;
            }
            FUN_104a24ec4(appuStack_170[0xe],uStack_b0);
            _swift_bridgeObjectRelease(uStack_b0);
            lVar4 = lStack_d8;
            pcVar3 = (code *)ppuVar19[2];
            (*pcVar3)(ppuVar8,ppuVar17,lStack_d8);
            puVar10 = (undefined *)0x0;
            FUN_104a26844();
            puVar23 = puVar10;
            _objc_allocWithZone();
            lRam000000011340b1a0 = lRam000000011340b1a0 + 1;
            puVar1 = (undefined8 *)(puVar23 + _DAT_1130a4ed8);
            *puVar1 = appuStack_170[0x11];
            puVar1[1] = uStack_e0;
            puVar1 = (undefined8 *)(puVar23 + _DAT_1130a4ee0);
            *puVar1 = appuStack_170[0x10];
            puVar1[1] = appuStack_170[0xf];
            (*pcVar3)(puVar23 + _DAT_113815b80,ppuVar8,lVar4);
            *(undefined ***)(puVar23 + _DAT_113815b88) = appuStack_170[0xe];
            unaff_x26 = &puStack_c8;
            puStack_c8 = puVar23;
            puStack_c0 = puVar10;
            _objc_msgSendSuper2(unaff_x26,PTR_s_init_1125d9248);
            ppuVar19 = (undefined **)ppuVar19[1];
            (*(code *)ppuVar19)(ppuVar8,lVar4);
            lRam000000011340b1f0 = lRam000000011340b1f0 + 1;
            param_1 = *(undefined ***)((long)unaff_x20 + _DAT_1130a4f68);
            ppuVar8 = unaff_x26;
            _objc_retain();
            _objc_msgSend(param_1,PTR_s_lock_1126058b8);
            puVar23 = *(undefined **)((long)unaff_x20 + _DAT_1130a4f70);
            *(undefined ***)((long)unaff_x20 + _DAT_1130a4f70) = unaff_x26;
            _objc_retain();
            _objc_release(puVar23);
            _objc_msgSend(param_1,PTR_s_unlock_11267dcf8);
            _objc_release(ppuVar8);
            ppuVar21 = _DAT_1130a4f78;
            if (((ulong)param_4 & 1) == 0) {
              _swift_beginAccess((undefined *)((long)unaff_x20 + (long)_DAT_1130a4f78),&ppuStack_a0,
                                 0,0);
              ppuVar9 = (undefined **)((long)unaff_x20 + (long)ppuVar21);
              _swift_unknownObjectWeakLoadStrong();
              ppuVar21 = ppuStack_d0;
              if (ppuVar9 == (undefined **)0x0) goto LAB_104a2ee94;
              _objc_msgSend();
              func_0x000104a2f200(ppuVar21,param_2);
              _objc_release(ppuVar8);
              _swift_unknownObjectRelease(ppuVar9);
            }
            else {
              lRam000000011340b490 = lRam000000011340b490 + 1;
              _swift_beginAccess((undefined *)((long)unaff_x20 + (long)_DAT_1130a4f78),&ppuStack_a0,
                                 0,0);
              ppuVar9 = (undefined **)((long)unaff_x20 + (long)ppuVar21);
              _swift_unknownObjectWeakLoadStrong();
              unaff_x26 = ppuStack_d0;
              if (ppuVar9 == (undefined **)0x0) {
LAB_104a2ee94:
                func_0x000104a2f200(ppuStack_d0,param_2);
                ppuVar9 = param_4;
              }
              else {
                ppuVar21 = &PTR_s_handleTrackingGesture__112525000;
                ppuVar6 = ppuVar9;
                _objc_msgSend();
                if (((ulong)ppuVar6 & 1) == 0) {
                  (*(code *)ppuVar19)(ppuVar17,lStack_d8);
                  func_0x000104a2f200(unaff_x26,param_2);
                  _swift_unknownObjectRelease(ppuVar9);
                  ppuVar7 = ppuVar17;
                  goto LAB_104a2e7ec;
                }
                _objc_msgSend(ppuVar9,PTR_s_sessionManagerWithManager_didRen_112525618,unaff_x20,
                              ppuVar8);
                func_0x000104a2f200(unaff_x26,param_2);
                _swift_unknownObjectRelease(ppuVar9);
              }
              _objc_release(ppuVar8);
            }
            ppuVar6 = ppuVar17;
            (*(code *)ppuVar19)(ppuVar17,lStack_d8);
            param_3 = ppuVar21;
            param_4 = ppuVar9;
            goto LAB_104a2eb3c;
          }
LAB_104a2eb90:
          _swift_bridgeObjectRelease(uStack_e0);
          _swift_bridgeObjectRelease(ppuVar7);
        }
LAB_104a2eba4:
        ppuVar6 = ppuStack_d0;
        _swift_bridgeObjectRelease(ppuVar7);
      }
      ppuVar18 = _DAT_1130a4f78;
      lRam000000011340b488 = lRam000000011340b488 + 1;
      _swift_beginAccess((undefined *)((long)unaff_x20 + (long)_DAT_1130a4f78),&ppuStack_a0,0,0);
      ppuVar21 = (undefined **)((long)unaff_x20 + (long)ppuVar18);
      _swift_unknownObjectWeakLoadStrong();
      ppuVar19 = ppuVar6;
      if (ppuVar21 == (undefined **)0x0) {
LAB_104a2eb7c:
        func_0x000104a2f200(ppuVar6,param_2);
        goto LAB_104a2eb3c;
      }
      ppuVar16 = ppuVar21;
      FUN_104a2dc34();
      param_3 = (undefined **)&UNK_1107bf0b0;
      _swift_allocError(&UNK_1107bf0b0,ppuVar16,0,0);
      *(undefined1 *)ppuVar16 = uVar2;
      param_4 = param_3;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      _swift_errorRelease(param_3);
      _objc_msgSend(ppuVar21,PTR_s_sessionManagerWithManager_didFai_112525608,unaff_x20,param_4);
    }
    func_0x000104a2f200(ppuVar6,param_2);
    _objc_release(param_4);
    ppuVar6 = ppuVar21;
    unaff_x26 = ppuVar7;
  }
  else {
    lRam000000011340b468 = lRam000000011340b468 + 1;
    _swift_beginAccess((undefined *)((long)unaff_x20 + (long)_DAT_1130a4f78),&ppuStack_a0,0,0);
    ppuVar6 = (undefined **)((long)unaff_x20 + (long)ppuVar16);
    _swift_unknownObjectWeakLoadStrong();
    if (ppuVar6 == (undefined **)0x0) goto LAB_104a2eb3c;
    ppuVar19 = ppuVar6;
    FUN_104a2dc34();
    ppuVar21 = (undefined **)&UNK_1107bf0b0;
    _swift_allocError(&UNK_1107bf0b0,ppuVar19,0,0);
    *(undefined1 *)ppuVar19 = uVar2;
    ppuVar19 = ppuVar21;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    _swift_errorRelease(ppuVar21);
    _objc_msgSend(ppuVar6,PTR_s_sessionManagerWithManager_didFai_112525608);
    _objc_release(ppuVar19);
    param_2 = ppuVar6;
  }
  _swift_unknownObjectRelease(ppuVar6);
  ppuVar16 = param_2;
  ppuVar18 = ppuVar21;
LAB_104a2eb3c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  ppuVar17[-0xc] = puVar23;
  ppuVar17[-0xb] = (undefined *)param_1;
  ppuVar17[-10] = (undefined *)unaff_x26;
  ppuVar17[-9] = (undefined *)ppuVar8;
  ppuVar17[-8] = (undefined *)param_4;
  ppuVar17[-7] = (undefined *)param_3;
  ppuVar17[-6] = (undefined *)ppuVar19;
  ppuVar17[-5] = (undefined *)ppuVar18;
  ppuVar17[-4] = (undefined *)unaff_x20;
  ppuVar17[-3] = (undefined *)ppuVar16;
  ppuVar17[-2] = &stack0xfffffffffffffff0;
  ppuVar17[-1] = FUN_104a2eedc;
  lRam000000011340b4a0 = lRam000000011340b4a0 + 1;
  puVar23 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_opt_self();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar23;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar23);
  uVar11 = 0;
  FUN_104a2f328(0,0x1130a5008,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar14 = uVar11;
  FUN_104a2f2c4();
  puVar23 = puVar10;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(puVar10,uVar11,uVar14)
  ;
  _objc_release(puVar10);
  puVar10 = puVar23;
  FUN_104a27cb8();
  _swift_bridgeObjectRelease(puVar23);
  ppuVar17[-0xe] = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar23 = *(undefined **)(((ulong)puVar10 & 0xfffffffffffff8) + 0x10);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar23 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((long)puVar10 < 0) {
      puVar23 = puVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar22;
  if (puVar23 != (undefined *)0x0) {
    uVar20 = 0;
    do {
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a2f0a8);
          (*pcVar3)();
        }
        uVar12 = *(ulong *)(puVar10 + uVar20 * 8 + 0x20);
        _objc_retain(uVar12);
      }
      else {
        uVar12 = uVar20;
        FUN_104a2d640(uVar20,puVar10,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x1130a4f58);
      }
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a2f09c);
        (*pcVar3)();
      }
      puVar22 = (undefined *)(uVar20 + 1);
      lRam000000011340b4e8 = lRam000000011340b4e8 + 1;
      uVar13 = uVar12;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = 0;
      FUN_104a2f328(0,0x1130a4f40,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      uVar15 = uVar13;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar13,uVar14);
      _objc_release(uVar12);
      _objc_release(uVar13);
      func_0x000104a2cde4(uVar15);
      uVar20 = uVar20 + 1;
    } while (puVar22 != puVar23);
    puVar22 = ppuVar17[-0xe];
  }
  _swift_bridgeObjectRelease(puVar10);
  if ((ulong)puVar22 >> 0x3e == 0) {
    puVar23 = *(undefined **)(((ulong)puVar22 & 0xfffffffffffff8) + 0x10);
  }
  else {
    puVar23 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
    if ((long)puVar22 < 0) {
      puVar23 = puVar22;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar23 != (undefined *)0x0) {
    ppuVar19 = (undefined **)0x0;
    do {
      if (((ulong)puVar22 & 0xc000000000000001) == 0) {
        if (*(undefined ***)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10) <= ppuVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a2f18c);
          (*pcVar3)();
        }
        ppuVar16 = *(undefined ***)(puVar22 + (long)ppuVar19 * 8 + 0x20);
        _objc_retain();
      }
      else {
        ppuVar16 = ppuVar19;
        FUN_104a2d640(ppuVar19,puVar22,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x1130a4f40);
      }
      puVar10 = (undefined *)((long)ppuVar19 + 1);
      if (SCARRY8((long)ppuVar19,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a2f188);
        (*pcVar3)();
      }
      lRam000000011340b4f0 = lRam000000011340b4f0 + 1;
      ppuVar8 = ppuVar16;
      _objc_msgSend(ppuVar16,PTR_s_isKeyWindow_1125fb1b0);
      if (((ulong)ppuVar8 & 1) != 0) {
        _swift_bridgeObjectRelease(puVar22);
        return ppuVar16;
      }
      _objc_release(ppuVar16);
      ppuVar19 = (undefined **)((long)ppuVar19 + 1);
    } while (puVar10 != puVar23);
  }
  _swift_bridgeObjectRelease(puVar22);
  return (undefined **)0x0;
}



/* Entry: 104a2eedc; end: 104a2f1d3;  */

ulong FUN_104a2eedc(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lRam000000011340b4a0 = lRam000000011340b4a0 + 1;
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_opt_self();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar3 = 0;
  FUN_104a2f328(0,0x1130a5008,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar6 = uVar3;
  FUN_104a2f2c4();
  puVar8 = puVar2;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(puVar2,uVar3,uVar6);
  _objc_release(puVar2);
  puVar2 = puVar8;
  FUN_104a27cb8();
  _swift_bridgeObjectRelease(puVar8);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)puVar2 & 0xfffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((long)puVar2 < 0) {
      puVar10 = puVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (puVar10 != (undefined *)0x0) {
    uVar11 = 0;
    do {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2f0a8);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(puVar2 + uVar11 * 8 + 0x20);
        _objc_retain(uVar4);
      }
      else {
        uVar4 = uVar11;
        FUN_104a2d640(uVar11,puVar2,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x1130a4f58);
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2f09c);
        (*pcVar1)();
      }
      puVar12 = (undefined *)(uVar11 + 1);
      lRam000000011340b4e8 = lRam000000011340b4e8 + 1;
      uVar5 = uVar4;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      FUN_104a2f328(0,0x1130a4f40,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      uVar7 = uVar5;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
      func_0x000104a2cde4(uVar7);
      uVar11 = uVar11 + 1;
      puVar9 = puVar8;
    } while (puVar12 != puVar10);
  }
  _swift_bridgeObjectRelease(puVar2);
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar9 & 0xfffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((long)puVar9 < 0) {
      puVar8 = puVar9;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar8 != (undefined *)0x0) {
    uVar11 = 0;
    do {
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2f18c);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(puVar9 + uVar11 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar11;
        FUN_104a2d640(uVar11,puVar9,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x1130a4f40);
      }
      puVar2 = (undefined *)(uVar11 + 1);
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104a2f188);
        (*pcVar1)();
      }
      lRam000000011340b4f0 = lRam000000011340b4f0 + 1;
      uVar5 = uVar4;
      _objc_msgSend(uVar4,PTR_s_isKeyWindow_1125fb1b0);
      if ((uVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(puVar9);
        return uVar4;
      }
      _objc_release(uVar4);
      uVar11 = uVar11 + 1;
    } while (puVar2 != puVar8);
  }
  _swift_bridgeObjectRelease(puVar9);
  return 0;
}



/* Entry: 104a2f1d4; end: 104a2f1f3;  */

void FUN_104a2f1d4(void)

{
  _objc_opt_self(&PTR_PTR_1129ec588);
  return;
}



/* Entry: 104a2f1f4; end: 104a2f213;  */

void FUN_104a2f1f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_lookUpClassMethod_11034f490)(param_1,param_2,&DAT_10e8277e8);
  return;
}



/* Entry: 104a2f214; end: 104a2f24f;  */

long FUN_104a2f214(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104a2f250; end: 104a2f28f;  */

void FUN_104a2f250(void)

{
  func_0x000104a2c048();
  return;
}



/* Entry: 104a2f290; end: 104a2f2b3;  */

undefined8 FUN_104a2f290(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104a2f2b4; end: 104a2f2c3;  */

undefined8 * FUN_104a2f2b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 104a2f2c4; end: 104a2f317;  */

void FUN_104a2f2c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a5010 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104a2f328(0xff,0x1130a5008,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  _swift_getWitnessTable(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam00000001130a5010 = puVar2;
  return;
}



/* Entry: 104a2f318; end: 104a2f327;  */

void FUN_104a2f318(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 104a2f328; end: 104a2f367;  */

void FUN_104a2f328(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104a2f368; end: 104a2f39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2f368(void)

{
  long lVar1;
  long unaff_x20;
  
  lRam000000011340b418 = lRam000000011340b418 + 1;
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130a4f80);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d290)(lVar1,PTR_s_start_112671080);
    return;
  }
  return;
}



/* Entry: 104a2f39c; end: 104a2f4bb;  */

void FUN_104a2f39c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104a2f4bc; end: 104a2f4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2f4bc(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lRam000000011340b3b8 = lRam000000011340b3b8 + 1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_1130a4f78;
  if (lVar2 == 0) {
    lRam000000011340b3c0 = lRam000000011340b3c0 + 1;
  }
  else {
    if ((param_1 & 1) == 0) {
      lRam000000011340b3c8 = lRam000000011340b3c8 + 1;
      _swift_beginAccess(lVar2 + _DAT_1130a4f78,auStack_60,0,0);
      puVar3 = (undefined1 *)(lVar2 + lVar1);
      _swift_unknownObjectWeakLoadStrong();
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = puVar3;
        FUN_104a2dc34();
        puVar5 = &UNK_1107bf0b0;
        _swift_allocError(&UNK_1107bf0b0,puVar4,0,0);
        *puVar4 = 1;
        puVar6 = puVar5;
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
        _swift_errorRelease(puVar5);
        _objc_msgSend(puVar3,PTR_s_sessionManagerWithManager_didFai_112525608,lVar2,puVar6);
        _objc_release(puVar6);
        _objc_release(lVar2);
        _swift_unknownObjectRelease(puVar3);
        return;
      }
    }
    _objc_release();
  }
  return;
}



/* Entry: 104a2f4c4; end: 104a2f507;  */

undefined8 FUN_104a2f4c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_104a204dc();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104a2f508; end: 104a2f50f;  */

void FUN_104a2f508(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lRam000000011340b428 = lRam000000011340b428 + 1;
  FUN_104a2eedc();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      _objc_msgSend(lVar3,PTR_s_presentViewController_animated_c_112621588,uVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 104a2f510; end: 104a2f583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2f510(ulong param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar7 = 0;
  __s10Foundation3URLVMa();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  lRam000000011340b3d0 = lRam000000011340b3d0 + 1;
  _swift_beginAccess(lVar7 + 0x10,auStack_48,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _DAT_1130a4f78;
  if (lVar7 == 0) {
    lRam000000011340b3d8 = lRam000000011340b3d8 + 1;
  }
  else {
    if ((param_1 & 1) == 0) {
      lRam000000011340b3e0 = lRam000000011340b3e0 + 1;
      if ((bVar1 & 1) == 0) {
        _swift_beginAccess(lVar7 + _DAT_1130a4f78,auStack_60,0,0);
        puVar3 = (undefined1 *)(lVar7 + lVar2);
        _swift_unknownObjectWeakLoadStrong();
        if (puVar3 != (undefined1 *)0x0) {
          puVar4 = puVar3;
          FUN_104a2dc34();
          puVar5 = &UNK_1107bf0b0;
          _swift_allocError(&UNK_1107bf0b0,puVar4,0,0);
          *puVar4 = 1;
          puVar6 = puVar5;
          __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
          _swift_errorRelease(puVar5);
          _objc_msgSend(puVar3,PTR_s_sessionManagerWithManager_didFai_112525608,lVar7,puVar6);
          _objc_release(puVar6);
          _objc_release(lVar7);
          _swift_unknownObjectRelease(puVar3);
          return;
        }
      }
      else {
        lRam000000011340b3e8 = lRam000000011340b3e8 + 1;
        func_0x000104a28ed0(unaff_x20 + (uVar8 + 0x19 & (uVar8 ^ 0xffffffffffffffff)));
      }
    }
    _objc_release(lVar7);
  }
  return;
}



/* Entry: 104a2f584; end: 104a2f5db;  */

void FUN_104a2f584(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam00000001130a5078 != 0) {
    return;
  }
  puVar1 = PTR___sSSN_11034da80;
  __sShMa(param_1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam00000001130a5078 = param_1;
  return;
}



/* Entry: 104a2f5dc; end: 104a2f653;  */

void FUN_104a2f5dc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 104a2f654; end: 104a2f6ff;  */

void FUN_104a2f654(void)

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



/* Entry: 104a2f700; end: 104a2f713;  */

void FUN_104a2f700(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (4 < uVar1) {
    uVar1 = 5;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 104a2f714; end: 104a2f73b;  */

void FUN_104a2f714(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104a2fc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 104a2f73c; end: 104a2f783;  */

void FUN_104a2f73c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  FUN_104a2fc80();
  uVar2 = uVar1;
  func_0x000104a2fcc0();
  uVar3 = uVar2;
  FUN_104a2029c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104a2f784; end: 104a2f8bf;  */

void FUN_104a2f784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 104a2f8c0; end: 104a2fa43;  */

long FUN_104a2f8c0(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  byte *unaff_x20;
  undefined1 auStack_80 [80];
  
  puVar11 = auStack_80;
  bVar3 = *unaff_x20;
  lRam000000011340b538 = lRam000000011340b538 + 1;
  lVar8 = 0x1130a5050;
  FUN_104a204dc();
  _swift_initStackObject();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  uVar9 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar8 + 0x20) = uVar9;
  lRam000000011340b4f8 = lRam000000011340b4f8 + 1;
  *(undefined1 **)(lVar8 + 0x28) = puVar11;
  uVar9 = 0xd000000000000019;
  pcVar1 = "Failed to renew session";
  uVar4 = 0xd000000000000016;
  plVar5 = (long *)0x11340b518;
  if (bVar3 != 3) {
    pcVar1 = "spotify-action://authorize";
    uVar4 = 0xd000000000000017;
    plVar5 = (long *)0x11340b520;
  }
  pcVar2 = "User denied the access";
  uVar6 = 0xd000000000000020;
  plVar7 = (long *)0x11340b510;
  if (bVar3 != 2) {
    pcVar2 = pcVar1;
    uVar6 = uVar4;
    plVar7 = plVar5;
  }
  pcVar1 = "Authorization failed";
  plVar5 = (long *)0x11340b500;
  if (bVar3 != 0) {
    uVar9 = 0xd000000000000014;
    pcVar1 = "he authorization";
    plVar5 = (long *)0x11340b508;
  }
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar6 = uVar9;
    plVar7 = plVar5;
  }
  *plVar7 = *plVar7 + 1;
  *(undefined **)(lVar8 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar8 + 0x30) = uVar6;
  *(ulong *)(lVar8 + 0x38) = (ulong)pcVar2 | 0x8000000000000000;
  lVar10 = lVar8;
  FUN_104a2df20(lVar8);
  _swift_setDeallocating(lVar8);
  FUN_104a2fa8c((undefined8 *)(lVar8 + 0x20));
  return lVar10;
}



/* Entry: 104a2fa44; end: 104a2fa8b;  */

undefined1  [16] FUN_104a2fa44(void)

{
  undefined1 auVar1 [16];
  
  lRam000000011340b528 = lRam000000011340b528 + 1;
  auVar1._8_8_ = 0x800000010f22bb90;
  auVar1._0_8_ = 0xd00000000000001c;
  return auVar1;
}



/* Entry: 104a2fa8c; end: 104a2facb;  */

undefined8 FUN_104a2fa8c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1130a5000;
  FUN_104a204dc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104a2facc; end: 104a2facf;  */

void FUN_104a2facc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a5080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4d060;
  _swift_getWitnessTable(&UNK_10dd4d060,&UNK_1107bf0b0);
  puRam00000001130a5080 = puVar1;
  return;
}



/* Entry: 104a2fad0; end: 104a2fb0f;  */

void FUN_104a2fad0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a5080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4d060;
  _swift_getWitnessTable(&UNK_10dd4d060,&UNK_1107bf0b0);
  puRam00000001130a5080 = puVar1;
  return;
}



/* Entry: 104a2fb10; end: 104a2fc7f;  */

void FUN_104a2fb10(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 104a2fc80; end: 104a2fcff;  */

void FUN_104a2fc80(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a5088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4d188;
  _swift_getWitnessTable(&UNK_10dd4d188,&UNK_1107bf0b0);
  puRam00000001130a5088 = puVar1;
  return;
}



/* Entry: 104a2fd00; end: 104a2fd07;  */

void FUN_104a2fd00(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4d100;
  _swift_getWitnessTable(&UNK_10dd4d100,&UNK_1107bf0b0);
  puRam00000001130a4f90 = puVar1;
  return;
}



/* Entry: 104a2fd08; end: 104a2fffb;  */

undefined * FUN_104a2fd08(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar10 = 0;
  __s10Foundation12URLQueryItemVMa();
  lVar12 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    func_0x000104a24210(0,lVar17,0);
    uVar1 = param_1 + 0x40;
    uVar11 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar14 = 0;
    iVar7 = *(int *)(param_1 + 0x24);
    do {
      if (((long)uVar11 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar11)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a2ffe8);
        (*pcVar9)();
      }
      uVar20 = uVar11 >> 6;
      uVar19 = 1L << (uVar11 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar20 * 8) & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a2ffec);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a2fff0);
        (*pcVar9)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 0x10);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      lRam000000011340b540 = lRam000000011340b540 + 1;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
                (&stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar3,uVar5,
                 uVar4,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      _swift_bridgeObjectRelease(uVar5);
      uVar16 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        func_0x000104a24210(1 < *(ulong *)(puVar8 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar16 + 1;
      (**(code **)(lVar12 + 0x20))
                (puVar8 + *(long *)(lVar12 + 0x48) * uVar16 +
                          ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),
                 &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar10);
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar16 <= (long)uVar11) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a2fff4);
        (*pcVar9)();
      }
      uVar13 = *(ulong *)(uVar1 + uVar20 * 8);
      if ((uVar13 & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a2fff8);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a2fffc);
        (*pcVar9)();
      }
      uVar13 = uVar13 & -2L << (uVar11 & 0x3f);
      if (uVar13 == 0) {
        lVar18 = uVar20 << 6;
        puVar15 = (ulong *)(param_1 + 0x48 + uVar20 * 8);
        do {
          uVar20 = uVar20 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar20) {
            FUN_104a30168(uVar11,iVar7,0);
            goto LAB_104a2fde8;
          }
          uVar19 = *puVar15;
          lVar18 = lVar18 + 0x40;
          puVar15 = puVar15 + 1;
        } while (uVar19 == 0);
        FUN_104a30168(uVar11,iVar7,0);
        uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar18;
      }
      else {
        uVar20 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | uVar11 & 0x7fffffffffffffc0;
      }
LAB_104a2fde8:
      lVar14 = lVar14 + 1;
      uVar11 = uVar16;
    } while (lVar14 != lVar17);
  }
  return puVar8;
}



/* Entry: 104a2fffc; end: 104a30167;  */

undefined1  [16] FUN_104a2fffc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b548 = lRam000000011340b548 + 1;
  __s10Foundation13URLComponentsVACycfC(lVar6);
  FUN_104a2fd08();
  __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs();
  __s10Foundation13URLComponentsV5querySSSgvg();
  if (param_2 == 0) {
    (**(code **)(lVar8 + 8))(lVar6,lVar2);
    puVar4 = (undefined1 *)0x0;
    uVar3 = 0xf000000000000000;
  }
  else {
    uStack_78 = param_1;
    lStack_70 = param_2;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
    FUN_104a219a8();
    uVar3 = 0;
    puVar4 = puVar5;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar5,0,PTR___sSSN_11034da80,param_1);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
    _swift_bridgeObjectRelease(param_2);
    (**(code **)(lVar8 + 8))(lVar6,lVar2);
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 104a30168; end: 104a30173;  */

void FUN_104a30168(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 104a30174; end: 104a30213; +[OIDExternalUserAgentIOSCustomBrowser CustomBrowserChrome] */

void FUN_104a30174(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bdc33a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110da7fb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c057de0();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a30214; end: 104a302ab; +[OIDExternalUserAgentIOSCustomBrowser CustomBrowserFirefox] */

void FUN_104a30214(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bdc3380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110da7ff8);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c057de0();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a302ac; end: 104a3034b; +[OIDExternalUserAgentIOSCustomBrowser CustomBrowserOpera] */

void FUN_104a302ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bdc33a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110da8078);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c057de0();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a3034c; end: 104a3036f; +[OIDExternalUserAgentIOSCustomBrowser CustomBrowserSafari] */

void FUN_104a3034c(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
  _objc_alloc();
  func_0x00010c057dc0(param_1,param_2,&PTR___NSConcreteGlobalBlock_1107bf1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a30370; end: 104a30377;  */

void FUN_104a30370(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(param_2);
  return;
}



/* Entry: 104a30378; end: 104a30547; +[OIDExternalUserAgentIOSCustomBrowser URLTransformationSchemeSubstitutionHTTPS:HTTP:] */

void FUN_104a30378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain();
  _objc_retain();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104a3043c;
  puStack_48 = &UNK_1107bf1d8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a30548; end: 104a305df; +[OIDExternalUserAgentIOSCustomBrowser URLTransformationSchemeConcatPrefix:] */

void FUN_104a30548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104a305e0;
  puStack_40 = &UNK_110cd0aa0;
  uStack_38 = param_3;
  _objc_retain();
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104a305e0; end: 104a306bf;  */

void FUN_104a305e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae320;
  func_0x00010bdc2fc0(PTR_PTR_1126ae320);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25cda0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a306c0; end: 104a306cb; -[OIDExternalUserAgentIOSCustomBrowser initWithURLTransformation:] */

void FUN_104a306c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithURLTransformation_canOpe_1125f3988,param_3,0,0);
  return;
}



/* Entry: 104a306cc; end: 104a3079b; -[OIDExternalUserAgentIOSCustomBrowser initWithURLTransformation:canOpenURLScheme:appStoreURL:] */

undefined1 *
FUN_104a306cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  _objc_retain();
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3508;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = param_3;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar3 + 8);
    *(undefined8 *)((long)puVar3 + 8) = uVar4;
    _objc_release(uVar5);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x18),param_5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 104a3079c; end: 104a3097f; -[OIDExternalUserAgentIOSCustomBrowser presentExternalUserAgentRequest:session:] */

undefined * FUN_104a3079c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0dfec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf2cf00();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e9b60();
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar6 = (undefined *)0x0;
      goto LAB_104a30908;
    }
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  uVar4 = param_3;
  func_0x00010bf9e6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = *(undefined **)(param_1 + 8);
  (**(code **)(puVar5 + 0x10))(puVar5,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c0e9b60();
LAB_104a30908:
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104a30980; end: 104a3098b; -[OIDExternalUserAgentIOSCustomBrowser dismissExternalUserAgentAnimated:completion:] */

void FUN_104a30980(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x000104a30988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3);
  return;
}



/* Entry: 104a3098c; end: 104a30993; -[OIDExternalUserAgentIOSCustomBrowser URLTransformation] */

undefined8 FUN_104a3098c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a30994; end: 104a3099b; -[OIDExternalUserAgentIOSCustomBrowser canOpenURLScheme] */

undefined8 FUN_104a30994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a3099c; end: 104a309a3; -[OIDExternalUserAgentIOSCustomBrowser appStoreURL] */

undefined8 FUN_104a3099c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a309a4; end: 104a309df; -[OIDExternalUserAgentIOSCustomBrowser .cxx_destruct] */

void FUN_104a309a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a309e0; end: 104a309e7; -[OIDExternalUserAgentIOS init] */

void FUN_104a309e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c038eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithPresentingViewController_1125ebda8,0)
  ;
  return;
}



/* Entry: 104a309e8; end: 104a30a5f; -[OIDExternalUserAgentIOS initWithPresentingViewController:] */

undefined1 * FUN_104a309e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + 8),param_3);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104a30a60; end: 104a30a87; -[OIDExternalUserAgentIOS initWithPresentingViewController:prefersEphemeralSession:] */

void FUN_104a30a60(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x00010c038ea0();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 104a30a88; end: 104a30de3; -[OIDExternalUserAgentIOS presentExternalUserAgentRequest:session:] */

bool FUN_104a30a88(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain();
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    bVar1 = false;
    goto LAB_104a30d78;
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  _objc_storeWeak(param_1 + 0x18,param_4);
  uVar2 = param_3;
  func_0x00010bf9e6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _UIAccessibilityIsGuidedAccessEnabled();
  if ((uVar3 & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = param_3;
    func_0x00010c124a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78;
    _objc_alloc();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104a30de4;
    puStack_68 = &UNK_11095af40;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c057940();
    func_0x00010c1e1200();
    func_0x00010c1e03e0(puVar4);
    _objc_storeStrong(param_1 + 0x30,puVar4);
    puVar5 = puVar4;
    func_0x00010c24d960();
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar3);
    uVar3 = 0;
    _objc_destroyWeak();
    if (((ulong)puVar5 & 1) == 0) goto LAB_104a30bd8;
LAB_104a30d24:
    bVar1 = true;
  }
  else {
LAB_104a30bd8:
    _UIAccessibilityIsGuidedAccessEnabled();
    if ((uVar3 & 1) == 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar3 = param_3;
      func_0x00010c124a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___SFAuthenticationSession_1126ae330;
      _objc_alloc();
      _objc_copyWeak(auStack_88,auStack_58);
      func_0x00010c057940();
      _objc_storeStrong(param_1 + 0x28,puVar4);
      puVar5 = puVar4;
      func_0x00010c24d960();
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_88);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_58);
      if (((ulong)puVar5 & 1) != 0) goto LAB_104a30d24;
    }
    bVar1 = *(long *)(param_1 + 8) != 0;
    if (*(long *)(param_1 + 8) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0e9b60();
      _objc_release(puVar4);
      if (((ulong)puVar5 & 1) != 0) goto LAB_104a30d24;
      func_0x00010bf39f80(param_1);
      puVar4 = PTR_PTR_1126ae328;
      func_0x00010bf991e0(PTR_PTR_1126ae328);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9fb00(param_4);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
      _objc_alloc(PTR__OBJC_CLASS___SFSafariViewController_1126d6d00);
      func_0x00010c057840();
      func_0x00010c18b5e0();
      _objc_storeWeak(param_1 + 0x20,puVar4);
      func_0x00010c10eda0(*(undefined8 *)(param_1 + 8));
    }
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
LAB_104a30d78:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104a30de4; end: 104a30f9f;  */

void FUN_104a30de4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
    if (param_2 == 0) {
      puVar2 = PTR_PTR_1126ae328;
      func_0x00010bf991e0(PTR_PTR_1126ae328);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf9fb00();
      _objc_release(lVar3);
    }
    else {
      puVar2 = (undefined *)(param_1 + 0x18);
      _objc_loadWeakRetained(puVar2);
      func_0x00010c13d480();
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a30fa0; end: 104a3107b; -[OIDExternalUserAgentIOS dismissExternalUserAgentAnimated:completion:] */

void FUN_104a30fa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    goto LAB_104a3104c;
  }
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  lVar3 = *(long *)(param_1 + 0x30);
  _objc_retain();
  func_0x00010bf39f80(param_1);
  lVar4 = lVar3;
  if ((lVar3 == 0) && (lVar4 = lVar2, lVar2 == 0)) {
    if (lVar1 == 0) goto LAB_104a31024;
    func_0x00010bf84b00(lVar1,param_2,1,param_4);
  }
  else {
    func_0x00010bf2dba0(lVar4);
LAB_104a31024:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_104a3104c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104a3107c; end: 104a310cb; -[OIDExternalUserAgentIOS cleanUp] */

void FUN_104a3107c(long param_1)

{
  undefined8 uVar1;
  
  _objc_storeWeak(param_1 + 0x20,0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x18,0);
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}



/* Entry: 104a310cc; end: 104a3118f; -[OIDExternalUserAgentIOS safariViewControllerDidFinish:] */

void FUN_104a310cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar1);
  if ((lVar1 == param_3) && (*(char *)(param_1 + 0x11) == '\x01')) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf39f80(param_1);
    puVar2 = PTR_PTR_1126ae328;
    func_0x00010bf991e0(PTR_PTR_1126ae328,param_2,0xfffffffffffffffd,0,
                        &PTR____CFConstantStringClassReference_110da80f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9fb00(lVar1,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104a31190; end: 104a311d7; -[OIDExternalUserAgentIOS presentationAnchorForWebAuthenticationSession:] */

void FUN_104a31190(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a311d8; end: 104a31223; -[OIDExternalUserAgentIOS .cxx_destruct] */

void FUN_104a311d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a31224; end: 104a312fb; +[OIDErrorUtilities errorWithCode:underlyingError:description:] */

void FUN_104a31224(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_4,*(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
  }
  if (param_5 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_5,
                        *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110da8d98,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a312fc; end: 104a3133f; +[OIDErrorUtilities isOAuthErrorDomain:] */

bool FUN_104a312fc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  if (param_3 == &PTR____CFConstantStringClassReference_110da8df8 ||
      param_3 == &PTR____CFConstantStringClassReference_110da8dd8) {
    return true;
  }
  return param_3 == &PTR____CFConstantStringClassReference_110da8db8;
}



/* Entry: 104a31340; end: 104a31417; +[OIDErrorUtilities resourceServerAuthorizationErrorWithCode:errorResponse:underlyingError:] */

void FUN_104a31340(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_4,&PTR____CFConstantStringClassReference_110da8e98);
  }
  if (param_5 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_5,*(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110da8e18,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a31418; end: 104a317cb; +[OIDErrorUtilities OAuthErrorWithDomain:OAuthResponse:underlyingError:] */

void FUN_104a31418(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c078ec0();
  if ((param_4 != 0) && ((int)puVar1 != 0)) {
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        if (param_5 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar1);
        }
        uVar2 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar5);
        _objc_release(uVar3);
        uVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        if ((uVar4 & 1) == 0) {
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
        }
        uVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar5);
        _objc_release(uVar3);
        uVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        if ((uVar4 & 1) == 0) {
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
        }
        puVar5 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0();
        if (uVar6 != 0) {
          func_0x00010bf070e0(puVar5);
          func_0x00010bf070e0(puVar5);
        }
        if (uVar7 != 0) {
          puVar8 = puVar5;
          func_0x00010c08fa60();
          if (puVar8 != (undefined *)0x0) {
            func_0x00010bf070e0(puVar5);
          }
          func_0x00010bf070e0(puVar5);
        }
        puVar8 = puVar5;
        func_0x00010c08fa60();
        if (puVar8 == (undefined *)0x0) {
          func_0x00010bf06ba0(puVar5);
        }
        func_0x00010c1d0640(puVar1);
        _objc_opt_class(param_1);
        func_0x00010bdc1d40();
        param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar2);
        goto LAB_104a31788;
      }
    }
  }
  _objc_opt_class(param_1);
  puVar1 = param_5;
  func_0x00010c09e4e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf991e0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_104a31788:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a317cc; end: 104a318c3; +[OIDErrorUtilities HTTPErrorWithHTTPResponse:data:] */

void FUN_104a317cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar1,param_2,puVar2,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
    }
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar3 = param_3;
  func_0x00010c252ee0(param_3);
  func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8e38,uVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a318c4; end: 104a31917; +[OIDErrorUtilities OAuthErrorCodeFromString:] */

undefined ** FUN_104a318c4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111174450;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = (undefined **)0xffffffffffff1000;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010c067fc0(ppuVar1);
  }
  _objc_release(ppuVar1);
  return ppuVar2;
}



/* Entry: 104a31918; end: 104a31957; +[OIDErrorUtilities raiseException:] */

void FUN_104a31918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010c11f060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a31958; end: 104a31987; +[OIDErrorUtilities raiseException:message:] */

void FUN_104a31958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110dc4658);
  return;
}



/* Entry: 104a31988; end: 104a31b57; -[OIDIDToken initWithIDTokenString:] */

undefined1 * FUN_104a31988(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_init_1125d9248;
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126e3518;
  uStack_40 = param_1;
  _objc_retain();
  _objc_msgSendSuper2(&uStack_40,puVar1);
  uVar3 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if (1 < uVar4) {
    puVar6 = (undefined1 *)puVar2;
    _objc_opt_class();
    uVar4 = uVar3;
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined1 **)((long)puVar2 + 8) = puVar6;
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = (undefined1 *)puVar2;
    _objc_opt_class();
    uVar4 = uVar3;
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined1 **)((long)puVar2 + 0x10) = puVar6;
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126ae338;
    if ((*(long *)((long)puVar2 + 8) != 0) && (*(long *)((long)puVar2 + 0x10) != 0)) {
      puVar6 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      func_0x00010bfac720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129240(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (((*(long *)((long)puVar2 + 0x18) != 0) &&
          (((*(long *)((long)puVar2 + 0x28) != 0 && (*(long *)((long)puVar2 + 0x20) != 0)) &&
           (*(long *)((long)puVar2 + 0x30) != 0)))) && (*(long *)((long)puVar2 + 0x38) != 0)) {
        puVar6 = (undefined1 *)puVar2;
        _objc_retain(puVar2);
        goto LAB_104a31b30;
      }
    }
  }
  puVar6 = (undefined1 *)0x0;
LAB_104a31b30:
  _objc_release(uVar3);
  _objc_release(puVar2);
  return puVar6;
}



/* Entry: 104a31b58; end: 104a31b87; +[OIDIDToken fieldMap] */

void FUN_104a31b58(void)

{
  if (lRam00000001136a15c8 != -1) {
    FUN_104a32240();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a15c0);
  return;
}



/* Entry: 104a31b88; end: 104a31dd3;  */

void FUN_104a31b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a15c0;
  puRam00000001136a15c0 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar4 = PTR_PTR_1126ae338;
  func_0x00010bdc2de0(PTR_PTR_1126ae338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8318,puVar3,puVar4)
  ;
  func_0x00010c1d0640(puRam00000001136a15c0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8278);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8338,puVar3);
  func_0x00010c1d0640(puRam00000001136a15c0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da8298);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8358,puVar3,
                      &PTR___NSConcreteGlobalBlock_1107bf228);
  func_0x00010c1d0640(puRam00000001136a15c0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da82b8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8378,puVar3,
                      &PTR___NSConcreteGlobalBlock_1107bf248);
  func_0x00010c1d0640(puRam00000001136a15c0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da82d8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c02dc00(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8398,puVar3,
                      &PTR___NSConcreteGlobalBlock_1107bf268);
  func_0x00010c1d0640(puRam00000001136a15c0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110da82f8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae338;
  _objc_alloc(PTR_PTR_1126ae338);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c02dbe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da83b8,puVar3);
  func_0x00010c1d0640(puRam00000001136a15c0,param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110e3ec38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a31dd4; end: 104a31fa3;  */

void FUN_104a31dd4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class();
  puVar4 = param_2;
  _objc_opt_isKindOfClass();
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    puVar4 = param_2;
    _objc_opt_isKindOfClass();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar4 = param_2;
    _objc_retain();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    _objc_retain();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar4);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = puVar1;
      _objc_retain(puVar1);
    }
    else {
      puVar2 = puVar1;
      func_0x00010c0b4ca0(puVar1);
      func_0x00010bf655e0((double)(long)puVar2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a31fa4; end: 104a3209b; +[OIDIDToken parseJWTSection:] */

void FUN_104a31fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_opt_class(param_1);
  func_0x00010bf15e00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  _objc_retain();
  if (lVar2 != 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110da83d8);
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a3209c; end: 104a32187; +[OIDIDToken base64urlNoPaddingDecode:] */

void FUN_104a3209c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c130f80(uVar1,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110dae918,2,0,uVar2);
  func_0x00010c130f80(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc1338,
                      &PTR____CFConstantStringClassReference_110dacf38,2,0,uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  while (PTR__OBJC_CLASS___NSData_1126ae778 = puVar3, (uVar2 & 3) != 0) {
    func_0x00010bf070e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110db9ab8);
    uVar2 = uVar1;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  }
  _objc_alloc(puVar3);
  func_0x00010bff6b20();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a32188; end: 104a3218f; -[OIDIDToken header] */

undefined8 FUN_104a32188(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


