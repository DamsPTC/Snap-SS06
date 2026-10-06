/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048edf3c; end: 1048edf63; -[FBSDKLoginButton logout] */

void FUN_1048edf3c(undefined8 param_1)

{
  _objc_retain();
  FUN_1048ed7f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048edf64; end: 1048edf97;  */

void FUN_1048edf64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048edf98; end: 1048ee07f; -[FBSDKLoginButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048edf98(long param_1)

{
  func_0x0001048ee5d4(param_1 + _DAT_11309c718);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c720));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c750 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309c758));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309c760));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c740 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c768 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c770 + 8));
  func_0x0001048ee5b4(param_1 + _DAT_11309c778);
  func_0x0001048ee5b4(param_1 + _DAT_11309c780);
  func_0x0001048ee5b4(param_1 + _DAT_11309c710);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11309c788));
  return;
}



/* Entry: 1048ee080; end: 1048ee087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ee080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_11309c718;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar3 + _DAT_11309c718,auStack_58,0,0);
  lVar1 = lVar3 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = param_1;
    FUN_10490ba50(param_1,param_2,param_3,param_4);
    if (((uint)param_4 & 0xff) == 1) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    }
    else {
      param_1 = 0;
    }
    _objc_msgSend(lVar1,PTR_s_loginButton_didCompleteWithResul_112525140,lVar3,uVar2,param_1);
    _objc_release(uVar2);
    _objc_release(param_1);
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1048ee088; end: 1048ee0a3;  */

void FUN_1048ee088(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1048ee0a4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1048ee0a4; end: 1048ee21f;  */

undefined * FUN_1048ee0a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1048ee220);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar4 = (undefined *)0x11309c2d0;
    func_0x0001048db364();
    lVar5 = 0;
    func_0x0001049ceb28();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1048ee218);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1048ee21c);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x0001049ceb28();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 1048ee220; end: 1048ee2c3;  */

uint FUN_1048ee220(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x21;
  uint uVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_3 + 0x10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(param_3 + 0x20);
    do {
      lVar3 = lVar3 + -1;
      uVar1 = *puVar5;
      _objc_retain();
      uVar2 = 0;
      (*param_1)();
      uVar4 = (uint)uVar2;
      _objc_release(uVar1);
      if (unaff_x21 != 0) break;
      puVar5 = puVar5 + 1;
    } while ((uVar2 & 1) == 0 && lVar3 != 0);
  }
  return uVar4 & 1;
}



/* Entry: 1048ee2c4; end: 1048ee367;  */

uint FUN_1048ee2c4(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x21;
  uint uVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_3 + 0x10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(param_3 + 0x28);
    do {
      lVar3 = lVar3 + -1;
      uVar1 = *puVar5;
      _swift_bridgeObjectRetain(uVar1);
      uVar2 = 0;
      (*param_1)();
      uVar4 = (uint)uVar2;
      _swift_bridgeObjectRelease(uVar1);
      if (unaff_x21 != 0) break;
      puVar5 = puVar5 + 2;
    } while ((uVar2 & 1) == 0 && lVar3 != 0);
  }
  return uVar4 & 1;
}



/* Entry: 1048ee368; end: 1048ee3f3;  */

uint FUN_1048ee368(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  plVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lVar2 == lVar4 && param_2 == plVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,param_2,lVar4,plVar3,0);
    uVar1 = (uint)lVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(plVar3);
  return uVar1 & 1;
}



/* Entry: 1048ee3f4; end: 1048ee4e3;  */

void FUN_1048ee3f4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x0001049ceb28();
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = auStack_70 + -uVar3;
  lVar5 = (long)puVar4 - uVar3;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = lVar1;
  func_0x0001048ee604();
  lVar2 = lVar6;
  __sSh15minimumCapacityShyxGSi_tcfC(lVar6,lVar1,lVar8);
  if (lVar6 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar7 + 0x48);
    pcVar9 = *(code **)(lVar7 + 0x10);
    lStack_68 = lVar2;
    do {
      (*pcVar9)(puVar4,param_1,lVar1);
      func_0x0001049013a4(lVar5,puVar4);
      (**(code **)(lVar7 + 8))(lVar5,lVar1);
      param_1 = param_1 + lVar8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 1048ee4e4; end: 1048ee51f;  */

undefined8 FUN_1048ee4e4(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1048ee520; end: 1048ee527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ee520(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *apuStack_88 [3];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  func_0x000100672b50(param_2,auStack_70);
  if (lStack_58 == 0) {
    FUN_1048ee4e4(auStack_70,0x11309c428);
    return;
  }
  uVar14 = 0x11309c408;
  func_0x0001048db364(0x11309c408);
  ppuVar5 = apuStack_88;
  _swift_dynamicCast(ppuVar5,auStack_70,PTR___sypN_11034f1a8 + 8,uVar14,6);
  if (((ulong)ppuVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(apuStack_88[0] + 0x10) == 0) goto LAB_1048edbc8;
  _swift_bridgeObjectRetain(apuStack_88[0]);
  lVar6 = 0x6469;
  uVar10 = 0;
  func_0x000100029284();
  if ((uVar10 & 1) == 0) {
    _swift_bridgeObjectRelease_n(apuStack_88[0],2);
    return;
  }
  plVar1 = (long *)(*(long *)(apuStack_88[0] + 0x38) + lVar6 * 0x10);
  puVar3 = (undefined *)*plVar1;
  puVar4 = (undefined *)plVar1[1];
  _swift_bridgeObjectRetain(puVar4);
  _swift_bridgeObjectRelease(apuStack_88[0]);
  if (param_3 == 0) {
    puVar7 = PTR_PTR_1126add30;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      puVar8 = puVar7;
      puVar11 = PTR_s_userID_112682300;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar8;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar8);
      if ((puVar7 == puVar3) && (puVar11 == puVar4)) {
        _swift_bridgeObjectRelease(puVar11);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (puVar7,puVar11,puVar3,puVar4,0);
        _swift_bridgeObjectRelease(puVar11);
        if (((ulong)puVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(apuStack_88[0]);
          apuStack_88[0] = puVar4;
          goto LAB_1048edbc8;
        }
      }
      if (*(long *)(apuStack_88[0] + 0x10) == 0) {
        _swift_bridgeObjectRelease(apuStack_88[0]);
LAB_1048edd20:
        uVar14 = 0;
        uVar13 = 0xe000000000000000;
      }
      else {
        _swift_bridgeObjectRetain(apuStack_88[0]);
        lVar6 = 0x656d616e;
        uVar10 = 0;
        func_0x000100029284();
        if ((uVar10 & 1) == 0) {
          _swift_bridgeObjectRelease_n(apuStack_88[0],2);
          goto LAB_1048edd20;
        }
        puVar2 = (undefined8 *)(*(long *)(apuStack_88[0] + 0x38) + lVar6 * 0x10);
        uVar14 = *puVar2;
        uVar13 = puVar2[1];
        _swift_bridgeObjectRetain(uVar13);
        _swift_bridgeObjectRelease_n(apuStack_88[0],2);
      }
      puVar2 = (undefined8 *)(lVar12 + _DAT_11309c770);
      _swift_beginAccess(puVar2,auStack_70,1,0);
      uVar9 = puVar2[1];
      *puVar2 = uVar14;
      puVar2[1] = uVar13;
      _swift_bridgeObjectRelease(uVar9);
      plVar1 = (long *)(lVar12 + _DAT_11309c768);
      _swift_beginAccess(plVar1,apuStack_88,1,0);
      apuStack_88[0] = (undefined *)plVar1[1];
      *plVar1 = (long)puVar3;
      plVar1[1] = (long)puVar4;
      goto LAB_1048edbc8;
    }
  }
  _swift_bridgeObjectRelease(puVar4);
LAB_1048edbc8:
  _swift_bridgeObjectRelease(apuStack_88[0]);
  return;
}



/* Entry: 1048ee528; end: 1048ee647;  */

void FUN_1048ee528(long param_1,long param_2)

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



/* Entry: 1048ee648; end: 1048ee667;  */

void FUN_1048ee648(void)

{
  FUN_1048ed7f4();
  return;
}



/* Entry: 1048ee668; end: 1048ee6ab;  */

void FUN_1048ee668(long param_1,long param_2)

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



/* Entry: 1048ee6ac; end: 1048ee6cb;  */

void FUN_1048ee6ac(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048ee6cc; end: 1048ee713; -[FBSDKLoginTooltipView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ee6cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c7f0;
  _swift_beginAccess(param_1 + _DAT_11309c7f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ee714; end: 1048ee757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ee714(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c7f0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c7f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 1048ee758; end: 1048ee7af; -[FBSDKLoginTooltipView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ee758(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c7f0;
  _swift_beginAccess(param_1 + _DAT_11309c7f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1048ee7b0; end: 1048eeaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ee7b0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c7f0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c7f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 1048eeaec; end: 1048eeb93;  */

undefined8 FUN_1048eeaec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  _swift_getObjectType();
  uVar1 = 0;
  func_0x0001049e125c(0);
  _objc_allocWithZone();
  _objc_msgSend();
  puVar2 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass(PTR_PTR_1126add20);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_allocWithZone(unaff_x20);
  FUN_1048ef6c8(uVar1,puVar2,unaff_x20);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return uVar1;
}



/* Entry: 1048eeb94; end: 1048eec3b; -[FBSDKLoginTooltipView init] */

undefined8 FUN_1048eeb94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  func_0x0001049e125c(0);
  _objc_allocWithZone();
  _objc_msgSend();
  puVar3 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass(PTR_PTR_1126add20);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_allocWithZone(uVar1);
  FUN_1048ef6c8(uVar2,puVar3,uVar1);
  uVar1 = param_1;
  _swift_getObjectType(param_1);
  _swift_deallocPartialClassInstance(param_1,uVar1,0x128,7);
  return uVar2;
}



/* Entry: 1048eec3c; end: 1048eee43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048eec3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11309c7f0,0);
  *(undefined1 *)(unaff_x20 + _DAT_11309c7e8) = 0;
  uVar2 = 0;
  func_0x0001049e125c();
  uVar4 = uVar2;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c7f8);
  puVar1[3] = uVar2;
  puVar1[4] = &PTR_DAT_1107b7c30;
  *puVar1 = uVar4;
  puVar3 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c800);
  uVar4 = 0;
  FUN_1048e9f18();
  puVar1[3] = uVar4;
  puVar1[4] = &PTR_DAT_1107b7018;
  *puVar1 = puVar3;
  FUN_1048f0840(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1048eee44; end: 1048ef003; -[FBSDKLoginTooltipView initWithTagline:message:colorStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048eee44(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar2 = param_2;
  }
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  _swift_unknownObjectWeakInit(param_1 + _DAT_11309c7f0,0);
  *(undefined1 *)(param_1 + _DAT_11309c7e8) = 0;
  uVar3 = 0;
  func_0x0001049e125c();
  uVar5 = uVar3;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c7f8);
  puVar1[3] = uVar3;
  puVar1[4] = &PTR_DAT_1107b7c30;
  *puVar1 = uVar5;
  puVar4 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c800);
  uVar5 = 0;
  FUN_1048e9f18();
  puVar1[3] = uVar5;
  puVar1[4] = &PTR_DAT_1107b7018;
  *puVar1 = puVar4;
  FUN_1048f0840(param_3,uVar2,param_4,param_2,param_5);
  return;
}



/* Entry: 1048ef004; end: 1048ef0ff;  */

undefined1 * FUN_1048ef004(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = param_1;
  func_0x0001000c6518(param_1,lVar1);
  puVar3 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(puVar3,lVar2,lVar1);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = param_2;
  func_0x0001000c6518(param_2,lVar1);
  lVar4 = (long)puVar3 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(lVar4,lVar2,lVar1);
  FUN_1048ef840(puVar3,lVar4);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar3;
}



/* Entry: 1048ef100; end: 1048ef207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ef100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_11309c7e8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c7e8,auStack_78,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    FUN_1048f0d90(param_1,param_2,param_3,param_4);
  }
  else {
    lVar1 = unaff_x20 + _DAT_11309c7f8;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    puVar4 = &UNK_1107b6c20;
    _swift_allocObject(&UNK_1107b6c20,0x38,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    *(undefined8 *)(puVar4 + 0x30) = param_4;
    pcVar5 = *(code **)(lVar3 + 8);
    _objc_retain();
    _objc_retain(param_3);
    (*pcVar5)(FUN_1048efac0,puVar4,uVar2,lVar3);
    _swift_release(puVar4);
  }
  return;
}



/* Entry: 1048ef208; end: 1048ef60f; -[FBSDKLoginTooltipView presentInView:withArrowPosition:direction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ef208(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_88 [24];
  
  lVar5 = _DAT_11309c7e8;
  _swift_beginAccess(param_3 + _DAT_11309c7e8,auStack_88,0,0);
  if (*(char *)(param_3 + lVar5) == '\x01') {
    uVar2 = param_5;
    _objc_retain(param_5);
    lVar5 = param_3;
    _objc_retain(param_3);
    FUN_1048f0d90(param_1,param_2,uVar2,param_6,lVar5);
  }
  else {
    lVar5 = param_3 + _DAT_11309c7f8;
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
    lVar1 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar2);
    puVar3 = &UNK_1107b6c80;
    _swift_allocObject(&UNK_1107b6c80,0x38,7);
    *(long *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    *(undefined8 *)(puVar3 + 0x30) = param_6;
    pcVar6 = *(code **)(lVar1 + 8);
    uVar4 = param_5;
    _objc_retain(param_5);
    lVar5 = param_3;
    _objc_retain(param_3);
    _objc_retain(uVar4);
    _objc_retain(lVar5);
    (*pcVar6)(0x1048efb40,puVar3,uVar2,lVar1);
    _swift_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1048ef610; end: 1048ef64b;  */

/* WARNING: Possible PIC construction at 0x0001048ef634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001048ef638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ef610(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_1048efaf8(unaff_x20 + _DAT_11309c7f0);
  lVar1 = *(long *)(((undefined8 *)(unaff_x20 + _DAT_11309c7f8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_11309c7f8));
  return;
}



/* Entry: 1048ef64c; end: 1048ef67f;  */

void FUN_1048ef64c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048ef680; end: 1048ef6c7; -[FBSDKLoginTooltipView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001048ef6ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001048ef6b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ef680(long param_1)

{
  long lVar1;
  
  FUN_1048efaf8(param_1 + _DAT_11309c7f0);
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_11309c7f8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11309c7f8));
  return;
}



/* Entry: 1048ef6c8; end: 1048ef83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048ef6c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = 0;
  func_0x0001049e125c();
  ppuStack_38 = &PTR_DAT_1107b7c30;
  uVar2 = 0;
  auStack_58[0] = param_1;
  uStack_40 = uVar1;
  FUN_1048e9f18();
  ppuStack_60 = &PTR_DAT_1107b7018;
  auStack_80[0] = param_2;
  uStack_68 = uVar2;
  _swift_unknownObjectWeakInit(param_3 + _DAT_11309c7f0,0);
  *(undefined1 *)(param_3 + _DAT_11309c7e8) = 0;
  func_0x0001048eeaa8(auStack_58,param_3 + _DAT_11309c7f8);
  func_0x0001048eeaa8(auStack_80,param_3 + _DAT_11309c800);
  _objc_msgSend(param_2,PTR_s_bundleForStrings_1125a6c30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x800000010f21ac70;
  uVar1 = 0xd000000000000014;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000014,0x800000010f21ac70,0x6b6f6f6265636146,0xeb000000004b4453,param_2,
             0xd000000000000041,0x800000010f21ac90,0xd000000000000028,0x800000010f21ace0);
  _objc_release(param_2);
  uVar2 = 0;
  FUN_1048f0840(0,0,uVar1,uVar3,0);
  func_0x0001000834e4(auStack_58);
  func_0x0001000834e4(auStack_80);
  return uVar2;
}



/* Entry: 1048ef840; end: 1048ef9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1048ef840(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = param_4;
  uStack_48 = param_6;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  lStack_78 = param_5;
  lStack_70 = param_7;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))();
  _swift_unknownObjectWeakInit(param_3 + _DAT_11309c7f0,0);
  *(undefined1 *)(param_3 + _DAT_11309c7e8) = 0;
  func_0x0001048eeaa8(auStack_68,param_3 + _DAT_11309c7f8);
  func_0x0001048eeaa8(auStack_90,param_3 + _DAT_11309c800);
  (**(code **)(param_7 + 8))(param_5,param_7);
  uVar3 = 0x800000010f21ac70;
  uVar1 = 0xd000000000000014;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000014,0x800000010f21ac70,0x6b6f6f6265636146,0xeb000000004b4453,param_5,
             0xd000000000000041,0x800000010f21ac90,0xd000000000000028,0x800000010f21ace0);
  _objc_release(param_5);
  uVar2 = 0;
  FUN_1048f0840(0,0,uVar1,uVar3,0);
  func_0x0001000834e4(auStack_68);
  func_0x0001000834e4(auStack_90);
  return uVar2;
}



/* Entry: 1048ef9dc; end: 1048efabf;  */

void FUN_1048ef9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_5 + -8);
  puVar2 = auStack_70 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(param_4 + -8);
  lVar3 = (long)puVar2 - (*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_68 = param_7;
  _objc_allocWithZone(param_3);
  (**(code **)(lVar1 + 0x10))(lVar3,param_1,param_4);
  (**(code **)(lVar4 + 0x10))(puVar2,param_2,param_5);
  FUN_1048ef840(lVar3,puVar2,param_3,param_4,param_5,param_6,uStack_68);
  return;
}



/* Entry: 1048efac0; end: 1048efac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048efac0(ulong param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar7 = _DAT_11309c7f0;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_1 == 0) {
    _swift_beginAccess(lVar4 + _DAT_11309c7f0,auStack_88,0,0);
    uVar8 = lVar4 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar8 == 0) {
      return;
    }
    uVar11 = uVar8;
    _objc_msgSend();
    if ((uVar11 & 1) != 0) {
      _objc_msgSend(uVar8,PTR_s_loginTooltipViewWillNotAppear__112525160,lVar4);
    }
    goto LAB_1048ef5dc;
  }
  _objc_retain();
  uVar8 = param_1;
  puVar12 = PTR_s_text_1126787e8;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar8);
  puVar1 = (ulong *)(lVar4 + _DAT_11309c888);
  _swift_beginAccess(puVar1,auStack_88,1,0);
  puVar13 = (undefined *)puVar1[1];
  if ((puVar13 == (undefined *)0x0) ||
     ((uVar11 != *puVar1 || puVar13 != puVar12 &&
      (uVar8 = uVar11,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar11,puVar12,*puVar1,puVar13,0), (uVar8 & 1) == 0)))) {
    puVar2 = (undefined8 *)(lVar4 + _DAT_11309c890);
    _swift_beginAccess(puVar2,auStack_a0,0,0);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    _swift_bridgeObjectRetain(uVar5);
    FUN_1048f2170(uVar11,puVar12,uVar3,uVar5);
    _swift_bridgeObjectRelease(uVar5);
  }
  uVar8 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = (ulong)puVar12;
  _swift_bridgeObjectRelease(uVar8);
  uVar11 = param_1;
  _objc_msgSend(param_1,PTR_s_isEnabled_1125fa010);
  lVar7 = _DAT_11309c7f0;
  _swift_beginAccess(lVar4 + _DAT_11309c7f0,auStack_b8,0,0);
  uVar8 = lVar4 + lVar7;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar8 == 0) {
    if ((int)uVar11 != 0) goto LAB_1048ef4f4;
LAB_1048ef598:
    uVar8 = lVar4 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar8 == 0) {
LAB_1048ef5e4:
      _objc_release(param_1);
      return;
    }
    uVar11 = uVar8;
    _objc_msgSend();
    puVar12 = PTR_s_loginTooltipViewWillNotAppear__112525160;
  }
  else {
    uVar9 = uVar8;
    _objc_msgSend();
    uVar10 = uVar11;
    if ((uVar9 & 1) != 0) {
      uVar10 = uVar8;
      _objc_msgSend(uVar8,PTR_s_loginTooltipView_shouldAppear__112525168,lVar4,uVar11);
    }
    _swift_unknownObjectRelease(uVar8);
    if ((uVar10 & 1) == 0) goto LAB_1048ef598;
LAB_1048ef4f4:
    FUN_1048f0d90(uVar15,uVar16,uVar6,uVar14);
    uVar8 = lVar4 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar8 == 0) goto LAB_1048ef5e4;
    uVar11 = uVar8;
    _objc_msgSend();
    puVar12 = PTR_s_loginTooltipViewWillAppear__112525170;
  }
  if ((uVar11 & 1) != 0) {
    _objc_msgSend(uVar8,puVar12,lVar4);
  }
  _objc_release(param_1);
LAB_1048ef5dc:
  _swift_unknownObjectRelease(uVar8);
  return;
}



/* Entry: 1048efac4; end: 1048efaef;  */

void FUN_1048efac4(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e4218);
  return;
}



/* Entry: 1048efaf0; end: 1048efaf7;  */

void FUN_1048efaf0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048efaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x308))();
  return;
}



/* Entry: 1048efaf8; end: 1048efb1b;  */

undefined8 FUN_1048efaf8(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1048efb1c; end: 1048efb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048efb1c(ulong param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar7 = _DAT_11309c7f0;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_1 == 0) {
    _swift_beginAccess(lVar4 + _DAT_11309c7f0,auStack_88,0,0);
    uVar8 = lVar4 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar8 == 0) {
      return;
    }
    uVar11 = uVar8;
    _objc_msgSend();
    if ((uVar11 & 1) != 0) {
      _objc_msgSend(uVar8,PTR_s_loginTooltipViewWillNotAppear__112525160,lVar4);
    }
    goto LAB_1048ef5dc;
  }
  _objc_retain();
  uVar8 = param_1;
  puVar12 = PTR_s_text_1126787e8;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar8);
  puVar1 = (ulong *)(lVar4 + _DAT_11309c888);
  _swift_beginAccess(puVar1,auStack_88,1,0);
  puVar13 = (undefined *)puVar1[1];
  if ((puVar13 == (undefined *)0x0) ||
     ((uVar11 != *puVar1 || puVar13 != puVar12 &&
      (uVar8 = uVar11,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar11,puVar12,*puVar1,puVar13,0), (uVar8 & 1) == 0)))) {
    puVar2 = (undefined8 *)(lVar4 + _DAT_11309c890);
    _swift_beginAccess(puVar2,auStack_a0,0,0);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    _swift_bridgeObjectRetain(uVar5);
    FUN_1048f2170(uVar11,puVar12,uVar3,uVar5);
    _swift_bridgeObjectRelease(uVar5);
  }
  uVar8 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = (ulong)puVar12;
  _swift_bridgeObjectRelease(uVar8);
  uVar11 = param_1;
  _objc_msgSend(param_1,PTR_s_isEnabled_1125fa010);
  lVar7 = _DAT_11309c7f0;
  _swift_beginAccess(lVar4 + _DAT_11309c7f0,auStack_b8,0,0);
  uVar8 = lVar4 + lVar7;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar8 == 0) {
    if ((int)uVar11 != 0) goto LAB_1048ef4f4;
LAB_1048ef598:
    uVar8 = lVar4 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar8 == 0) {
LAB_1048ef5e4:
      _objc_release(param_1);
      return;
    }
    uVar11 = uVar8;
    _objc_msgSend();
    puVar12 = PTR_s_loginTooltipViewWillNotAppear__112525160;
  }
  else {
    uVar9 = uVar8;
    _objc_msgSend();
    uVar10 = uVar11;
    if ((uVar9 & 1) != 0) {
      uVar10 = uVar8;
      _objc_msgSend(uVar8,PTR_s_loginTooltipView_shouldAppear__112525168,lVar4,uVar11);
    }
    _swift_unknownObjectRelease(uVar8);
    if ((uVar10 & 1) == 0) goto LAB_1048ef598;
LAB_1048ef4f4:
    FUN_1048f0d90(uVar15,uVar16,uVar6,uVar14);
    uVar8 = lVar4 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar8 == 0) goto LAB_1048ef5e4;
    uVar11 = uVar8;
    _objc_msgSend();
    puVar12 = PTR_s_loginTooltipViewWillAppear__112525170;
  }
  if ((uVar11 & 1) != 0) {
    _objc_msgSend(uVar8,puVar12,lVar4);
  }
  _objc_release(param_1);
LAB_1048ef5dc:
  _swift_unknownObjectRelease(uVar8);
  return;
}



/* Entry: 1048efb2c; end: 1048efb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048efb2c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c7e8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c7e8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1048efb30; end: 1048efb33; -[FBSDKLoginTooltipView setShouldForceDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048efb30(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c7e8;
  func_0x000107c61428(param_1 + _DAT_11309c7e8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048efb34; end: 1048efb37; -[FBSDKLoginTooltipView setForceDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048efb34(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c7e8;
  func_0x000107c61428(param_1 + _DAT_11309c7e8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048efb38; end: 1048efb3b; -[FBSDKLoginTooltipView shouldForceDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048efb38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c7e8;
  func_0x000107c61428(param_1 + _DAT_11309c7e8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1048efb3c; end: 1048efb43; -[FBSDKLoginTooltipView forceDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048efb3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c7e8;
  func_0x000107c61428(param_1 + _DAT_11309c7e8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1048efb44; end: 1048efb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048efb44(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c7e8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c7e8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1048efb48; end: 1048efeab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048efb48(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  ulong uStack_78;
  ulong uStack_70;
  byte bStack_68;
  
  uVar2 = param_1 & 0xc000000000000001;
  if (uVar2 == 0) {
    uVar18 = *(ulong *)(param_1 + 0x10);
  }
  else {
    uVar18 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar18 = param_1;
    }
    __ss10__CocoaSetV5countSivg();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 == 0) {
    _swift_retain();
  }
  else {
    uVar17 = uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU);
    _swift_retain();
    func_0x000100403514(0,uVar17,0);
    if (uVar2 == 0) {
      uVar9 = param_1 + 0x38;
      __ss10_HashTableV11startBucketAB0D0Vvg
                (uVar9,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
      uVar17 = (ulong)*(uint *)(param_1 + 0x24);
    }
    else {
      uVar9 = param_1 & 0xffffffffffffff8;
      if ((long)param_1 < 0) {
        uVar9 = param_1;
      }
      __ss10__CocoaSetV10startIndexAB0D0Vvg();
    }
    bStack_68 = uVar2 != 0;
    uStack_78 = uVar9;
    uStack_70 = uVar17;
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efea4);
      (*pcVar7)();
    }
    uVar17 = 0;
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar9 = param_1;
    }
    do {
      while( true ) {
        bVar6 = bStack_68;
        uVar4 = uStack_70;
        uVar14 = uStack_78;
        if (uVar18 <= uVar17) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efe90);
          (*pcVar7)();
        }
        bVar8 = SCARRY8(uVar17,1);
        uVar17 = uVar17 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efe94);
          (*pcVar7)();
        }
        uVar15 = uStack_78;
        FUN_104903b6c(uStack_78,uStack_70,bStack_68,param_1);
        puVar1 = (undefined8 *)(uVar15 + _DAT_11309c830);
        _swift_beginAccess(puVar1,auStack_90,0,0);
        uVar10 = *puVar1;
        uVar3 = puVar1[1];
        _swift_bridgeObjectRetain(uVar3);
        _objc_release(uVar15);
        uVar15 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar15) {
          func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar15 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puVar5 + uVar15 * 0x10 + 0x20) = uVar10;
        *(undefined8 *)(puVar5 + uVar15 * 0x10 + 0x28) = uVar3;
        if (uVar2 == 0) break;
        if (bVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efea8);
          (*pcVar7)();
        }
        __ss10__CocoaSetV5IndexV16handleBitPatternSuvg(uVar14,uVar4);
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        else {
          _swift_isUniquelyReferenced_nonNull_native();
        }
        uVar10 = 0x11309c868;
        func_0x0001048db364(0x11309c868);
        pcVar7 = (code *)auStack_b0;
        __sSh5IndexV8_asCocoas02__C3SetVAAVvM(pcVar7,uVar10);
        __ss10__CocoaSetV9formIndex5after8isUniqueyAB0D0Vz_SbtF(uVar10,uVar14,uVar9);
        (*pcVar7)(auStack_b0,0);
        if (uVar17 == uVar18) goto LAB_1048efe54;
      }
      if ((bVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efeac);
        (*pcVar7)();
      }
      if (((long)uVar14 < 0) ||
         (uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f), (long)uVar15 <= (long)uVar14)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efe98);
        (*pcVar7)();
      }
      uVar12 = uVar14 >> 6;
      uVar11 = *(ulong *)(param_1 + 0x38 + uVar12 * 8);
      if ((uVar11 >> (uVar14 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efe9c);
        (*pcVar7)();
      }
      if (*(int *)(param_1 + 0x24) != (int)uVar4) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048efea0);
        (*pcVar7)();
      }
      uVar11 = uVar11 & -2L << (uVar14 & 0x3f);
      if (uVar11 == 0) {
        lVar16 = uVar12 << 6;
        puVar13 = (ulong *)(param_1 + 0x40 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar12) {
            func_0x0001048f0828(uVar14,uVar4,0);
            goto LAB_1048efe18;
          }
          uVar11 = *puVar13;
          lVar16 = lVar16 + 0x40;
          puVar13 = puVar13 + 1;
        } while (uVar11 == 0);
        func_0x0001048f0828(uVar14,uVar4,0);
        uVar14 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + lVar16;
      }
      else {
        uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | uVar14 & 0x7fffffffffffffc0;
      }
LAB_1048efe18:
      uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
      bStack_68 = 0;
      uStack_78 = uVar15;
    } while (uVar17 != uVar18);
LAB_1048efe54:
    func_0x0001048f0828(uStack_78,uStack_70,bStack_68);
  }
  return;
}



/* Entry: 1048efeac; end: 1048efef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048efeac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309c830);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309c830))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048efef8; end: 1048eff2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048efef8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_11309c830);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_11309c830) + 8))
  ;
  return auVar1;
}



/* Entry: 1048eff30; end: 1048effc7; -[FBSDKPermission hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048eff30(undefined8 param_1)

{
  func_0x000100e8b654();
  __sSy10FoundationE4hashSivg(PTR___sSSN_11034da80,param_1);
  return;
}



/* Entry: 1048effc8; end: 1048f0007;  */

void FUN_1048effc8(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_1048f0008(param_1,param_2);
  return;
}



/* Entry: 1048f0008; end: 1048f015b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f0008(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar7 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = &stack0xffffffffffffff90 + -uVar4;
  lVar5 = (long)puVar6 - uVar4;
  __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
            (lVar5,0xd00000000000001b,0x800000010f21ad10);
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
  }
  else {
    __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(puVar6,param_1,param_2);
    puVar3 = puVar6;
    __s10Foundation12CharacterSetV10isSuperset2ofSbAC_tF();
    pcVar8 = *(code **)(lVar7 + 8);
    (*pcVar8)(puVar6,lVar2);
    (*pcVar8)(lVar5,lVar2);
    if (((ulong)puVar3 & 1) != 0) {
      puVar1 = (ulong *)(unaff_x20 + _DAT_11309c830);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
      return;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_deallocPartialClassInstance();
  return;
}



/* Entry: 1048f015c; end: 1048f0183; -[FBSDKPermission initWithString:] */

void FUN_1048f015c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_1048f0008();
  return;
}



/* Entry: 1048f0184; end: 1048f0187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1048f0184(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  code *pcVar13;
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  char *pcStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar6 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_a8 = *(long *)(lVar6 + -8);
  uVar9 = *(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uStack_b0 = (long)&puStack_c0 - uVar9;
  lVar12 = uStack_b0 - uVar9;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar11 = (ulong *)(param_1 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar9 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar9 = uVar9 & *puVar11;
  uVar10 = uVar10 + 0x3f >> 6;
  pcStack_98 = "he FBSDKLoginTooltipView";
  lStack_a0 = lVar6;
  _swift_retain();
  lStack_90 = param_1;
  _swift_bridgeObjectRetain();
  lVar6 = 0;
  puStack_c0 = puVar11;
  uStack_b8 = uVar10;
  while( true ) {
    while (uVar9 == 0) {
      bVar5 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1048f07b4);
        (*pcVar13)();
      }
      if ((long)uVar10 <= lVar6) {
        _swift_release(lStack_90);
        return puStack_68;
      }
      uVar9 = puVar11[lVar6];
    }
    uVar10 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    puVar11 = (ulong *)(*(long *)(lStack_90 + 0x30) +
                       (lVar6 << 10 | LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) << 4));
    uVar1 = *puVar11;
    uVar2 = puVar11[1];
    FUN_1048f07b4();
    lVar7 = param_1;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar2);
    __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
              (lVar12,0xd00000000000001b,(ulong)pcStack_98 | 0x8000000000000000);
    uVar3 = uStack_b0;
    uVar10 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar10 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar10 == 0) break;
    lStack_88 = param_1;
    __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(uStack_b0,uVar1,uVar2);
    uVar10 = uVar3;
    __s10Foundation12CharacterSetV10isSuperset2ofSbAC_tF();
    lVar4 = lStack_a0;
    pcVar13 = *(code **)(lStack_a8 + 8);
    (*pcVar13)(uVar3,lStack_a0);
    (*pcVar13)(lVar12,lVar4);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(lStack_90);
      param_1 = lStack_88;
      goto LAB_1048f0770;
    }
    uVar9 = uVar9 - 1 & uVar9;
    puVar11 = (ulong *)(lVar7 + _DAT_11309c830);
    *puVar11 = uVar1;
    puVar11[1] = uVar2;
    lStack_70 = lStack_88;
    plVar8 = &lStack_78;
    lStack_78 = lVar7;
    _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
    FUN_104901168(&lStack_80,plVar8);
    param_1 = lStack_80;
    _objc_release();
    puVar11 = puStack_c0;
    uVar10 = uStack_b8;
  }
  _swift_release(lStack_90);
  _swift_bridgeObjectRelease(uVar2);
  (**(code **)(lStack_a8 + 8))(lVar12,lStack_a0);
LAB_1048f0770:
  _swift_deallocPartialClassInstance(lVar7,param_1,0x18,7);
  _swift_bridgeObjectRelease(puStack_68);
  return (undefined *)0x0;
}



/* Entry: 1048f0188; end: 1048f025f; +[FBSDKPermission permissionsFromRawPermissions:] */

void FUN_1048f0188(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar1 = param_3;
  FUN_1048f0530();
  _swift_bridgeObjectRelease(param_3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    _swift_getObjCClassMetadata(param_1);
    uVar2 = param_1;
    FUN_1048f07e8();
    lVar3 = lVar1;
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(lVar1,param_1,uVar2);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1048f0260; end: 1048f02fb; +[FBSDKPermission rawPermissionsFromPermissions:] */

void FUN_1048f0260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  FUN_1048f07e8();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,param_1,uVar1)
  ;
  uVar1 = param_3;
  FUN_1048efb48();
  _swift_bridgeObjectRelease(param_3);
  uVar2 = uVar1;
  func_0x000100403a6c(uVar1);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar2;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
            (uVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048f02fc; end: 1048f03ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048f02fc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar5 = &lStack_68;
    _swift_dynamicCast(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      lVar4 = *(long *)(lStack_68 + _DAT_11309c830);
      lVar2 = ((long *)(lStack_68 + _DAT_11309c830))[1];
      _swift_bridgeObjectRetain(lVar2);
      _objc_release(lStack_68);
      lVar1 = *(long *)(unaff_x20 + _DAT_11309c830);
      lVar3 = ((long *)(unaff_x20 + _DAT_11309c830))[1];
      if (lVar4 == lVar1 && lVar2 == lVar3) {
        _swift_bridgeObjectRelease(lVar2);
        uVar6 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar4,lVar2,lVar1,lVar3,0);
        uVar6 = (uint)lVar4;
        _swift_bridgeObjectRelease(lVar2);
      }
      goto LAB_1048f03c4;
    }
  }
  uVar6 = 0;
LAB_1048f03c4:
  return uVar6 & 1;
}



/* Entry: 1048f03f0; end: 1048f046f; -[FBSDKPermission isEqual:] */

uint FUN_1048f03f0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048f02fc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048f0470; end: 1048f04bb;  */

void FUN_1048f0470(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048f04bc; end: 1048f051b; -[FBSDKPermission init] */

void FUN_1048f04bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKLoginKit.FBPermission",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048f04e8);
  (*pcVar1)();
}



/* Entry: 1048f051c; end: 1048f052f; -[FBSDKPermission .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f051c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309c830 + 8))
  ;
  return;
}



/* Entry: 1048f0530; end: 1048f07b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1048f0530(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  code *pcVar13;
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  char *pcStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar6 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_a8 = *(long *)(lVar6 + -8);
  uVar9 = *(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uStack_b0 = (long)&puStack_c0 - uVar9;
  lVar12 = uStack_b0 - uVar9;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar11 = (ulong *)(param_1 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar9 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar9 = uVar9 & *puVar11;
  uVar10 = uVar10 + 0x3f >> 6;
  pcStack_98 = "he FBSDKLoginTooltipView";
  lStack_a0 = lVar6;
  _swift_retain();
  lStack_90 = param_1;
  _swift_bridgeObjectRetain();
  lVar6 = 0;
  puStack_c0 = puVar11;
  uStack_b8 = uVar10;
  while( true ) {
    while (uVar9 == 0) {
      bVar5 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1048f07b4);
        (*pcVar13)();
      }
      if ((long)uVar10 <= lVar6) {
        _swift_release(lStack_90);
        return puStack_68;
      }
      uVar9 = puVar11[lVar6];
    }
    uVar10 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    puVar11 = (ulong *)(*(long *)(lStack_90 + 0x30) +
                       (lVar6 << 10 | LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) << 4));
    uVar1 = *puVar11;
    uVar2 = puVar11[1];
    FUN_1048f07b4();
    lVar7 = param_1;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar2);
    __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
              (lVar12,0xd00000000000001b,(ulong)pcStack_98 | 0x8000000000000000);
    uVar3 = uStack_b0;
    uVar10 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar10 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar10 == 0) break;
    lStack_88 = param_1;
    __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(uStack_b0,uVar1,uVar2);
    uVar10 = uVar3;
    __s10Foundation12CharacterSetV10isSuperset2ofSbAC_tF();
    lVar4 = lStack_a0;
    pcVar13 = *(code **)(lStack_a8 + 8);
    (*pcVar13)(uVar3,lStack_a0);
    (*pcVar13)(lVar12,lVar4);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(lStack_90);
      param_1 = lStack_88;
      goto LAB_1048f0770;
    }
    uVar9 = uVar9 - 1 & uVar9;
    puVar11 = (ulong *)(lVar7 + _DAT_11309c830);
    *puVar11 = uVar1;
    puVar11[1] = uVar2;
    lStack_70 = lStack_88;
    plVar8 = &lStack_78;
    lStack_78 = lVar7;
    _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
    FUN_104901168(&lStack_80,plVar8);
    param_1 = lStack_80;
    _objc_release();
    puVar11 = puStack_c0;
    uVar10 = uStack_b8;
  }
  _swift_release(lStack_90);
  _swift_bridgeObjectRelease(uVar2);
  (**(code **)(lStack_a8 + 8))(lVar12,lStack_a0);
LAB_1048f0770:
  _swift_deallocPartialClassInstance(lVar7,param_1,0x18,7);
  _swift_bridgeObjectRelease(puStack_68);
  return (undefined *)0x0;
}



/* Entry: 1048f07b4; end: 1048f07df;  */

void FUN_1048f07b4(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e4588);
  return;
}



/* Entry: 1048f07e0; end: 1048f07e7;  */

void FUN_1048f07e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048f07e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x58))();
  return;
}



/* Entry: 1048f07e8; end: 1048f0837;  */

void FUN_1048f07e8(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam000000011309c860 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam000000011309c860;
  FUN_1048f07b4();
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  _swift_getWitnessTable(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,lVar1);
  puRam000000011309c860 = puVar2;
  return;
}



/* Entry: 1048f0838; end: 1048f083b; -[FBSDKPermission value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f0838(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309c830);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309c830))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048f083c; end: 1048f083f; -[FBSDKPermission description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f083c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309c830);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309c830))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048f0840; end: 1048f0d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1048f0840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  *(undefined8 *)(unaff_x20 + _DAT_11309c880) = 0x4018000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c888);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11309c890);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_11309c898);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar4 = _DAT_11309c8a0;
  uVar10 = param_2;
  _CFAbsoluteTimeGetCurrent();
  *(undefined8 *)(unaff_x20 + lVar4) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8a8) = 0x4018000000000000;
  lVar4 = _DAT_11309c8b0;
  FUN_1048f2b44();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar10;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c8d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c8e0) = 0;
  lVar4 = _DAT_11309c8e8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _swift_getInitializedObjCClass();
  puVar6 = puVar5;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar4) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8f0) = 0x401c000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c8f8) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c900) = 0x4067200000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11309c908) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c910) = 0xc004000000000000;
  *(undefined **)(unaff_x20 + _DAT_11309c918) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar4 = _DAT_11309c920;
  _swift_retain();
  puVar6 = puVar5;
  _objc_msgSend(puVar5,PTR_s_clearColor_1125ac538);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar4) = puVar6;
  _swift_beginAccess(puVar2,auStack_78,1,0);
  uVar10 = puVar2[1];
  *puVar2 = param_2;
  puVar2[1] = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar10);
  _swift_beginAccess(puVar1,auStack_90,1,0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRelease();
  *(undefined8 *)(unaff_x20 + _DAT_11309c928) = param_6;
  FUN_1048f2c68();
  puVar7 = &stack0xffffffffffffff60;
  _objc_msgSendSuper2(0,0,0,0,puVar7,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  FUN_1048f1c7c();
  FUN_1048f2170(param_4,param_5,param_2,param_3);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_3);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_msgSend();
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_msgSend(puVar7,PTR_s_addGestureRecognizer__11259bdb8,puVar6);
  uVar10 = *(undefined8 *)(puVar7 + _DAT_11309c8b8);
  *(undefined **)(puVar7 + _DAT_11309c8b8) = puVar6;
  _objc_retain(puVar6);
  _objc_release(uVar10);
  _objc_msgSend(puVar7,PTR_s_setOpaque__112652d30,0);
  _objc_release(puVar7);
  puVar8 = puVar5;
  _objc_msgSend(puVar5,PTR_s_clearColor_1125ac538);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar7,PTR_s_setBackgroundColor__112639330,puVar8);
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar9 = puVar7;
  _objc_msgSend(puVar7,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_msgSend(puVar9,PTR_s_setNeedsDisplayOnBoundsChange__112650990,1);
  _objc_release(puVar9);
  puVar9 = puVar7;
  _objc_msgSend(puVar7,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_msgSend(puVar5,PTR_s_blackColor_1125a4bf0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_msgSend(puVar9,PTR_s_setShadowColor__11265d3f8,puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar9 = puVar7;
  _objc_msgSend(puVar7,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_msgSend(0x3f000000,puVar9,PTR_s_setShadowOpacity__11265d428);
  _objc_release(puVar9);
  puVar9 = puVar7;
  _objc_msgSend(puVar7,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_msgSend(0,0x4000000000000000,puVar9,PTR_s_setShadowOffset__11265d410);
  _objc_release(puVar9);
  puVar9 = puVar7;
  _objc_msgSend(puVar7,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_msgSend(0x4014000000000000,puVar9,PTR_s_setShadowRadius__11265d438);
  _objc_release(puVar9);
  puVar9 = puVar7;
  _objc_msgSend(puVar7,PTR_s_layer_112600a48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_msgSend(puVar9,PTR_s_setMasksToBounds__11264e570,0);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar9);
  return puVar7;
}



/* Entry: 1048f0d90; end: 1048f0e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f0d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  
  *(bool *)((long)unaff_x20 + _DAT_11309c8d8) = param_4 == 1;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_11309c898);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1048f1eb4();
  _objc_msgSend();
  _objc_msgSend();
  puVar2 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (ulong *)0x0) {
    _objc_release();
    _objc_msgSend();
  }
  _objc_msgSend(param_3,PTR_s_addSubview__11259c880);
  _CFAbsoluteTimeGetCurrent();
  *(undefined8 *)((long)unaff_x20 + _DAT_11309c8a0) = param_1;
  *(undefined1 *)((long)unaff_x20 + _DAT_11309c8e0) = 0;
  FUN_1048f2498();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x0001048f0e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x288))();
  return;
}



/* Entry: 1048f0e84; end: 1048f0f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f0e84(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c880;
  _swift_beginAccess(unaff_x20 + _DAT_11309c880,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1048f0f94; end: 1048f0fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f0f94(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c928;
  _swift_beginAccess(unaff_x20 + _DAT_11309c928,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_1048f1c7c();
  return;
}



/* Entry: 1048f0fe4; end: 1048f1027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048f0fe4(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_11309c928;
  _swift_beginAccess(unaff_x20 + _DAT_11309c928,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1048f1028;
  return auVar2;
}



/* Entry: 1048f1028; end: 1048f1057;  */

void FUN_1048f1028(undefined8 param_1,ulong param_2)

{
  _swift_endAccess();
  if ((param_2 & 1) == 0) {
    FUN_1048f1c7c();
  }
  return;
}



/* Entry: 1048f1058; end: 1048f1063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048f1058(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309c888);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1048f1064; end: 1048f113b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f1064(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong *unaff_x20;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)((long)unaff_x20 + _DAT_11309c888);
  puVar4 = auStack_58;
  plVar2 = plVar1;
  _swift_beginAccess(plVar1,puVar4,1,0);
  puVar5 = (undefined1 *)plVar1[1];
  if (param_2 == (undefined1 *)0x0) {
    if (puVar5 == (undefined1 *)0x0) goto LAB_1048f1118;
  }
  else if ((puVar5 != (undefined1 *)0x0) &&
          (((long *)*plVar1 == param_1 && puVar5 == param_2 ||
           (plVar2 = param_1, puVar4 = param_2,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (param_1,param_2,*plVar1,puVar5,0), ((ulong)plVar2 & 1) != 0))))
  goto LAB_1048f1118;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x148))();
  FUN_1048f2170(param_1,param_2,plVar2,puVar4);
  _swift_bridgeObjectRelease(puVar4);
LAB_1048f1118:
  lVar3 = plVar1[1];
  *plVar1 = (long)param_1;
  plVar1[1] = (long)param_2;
  _swift_bridgeObjectRelease(lVar3);
  return;
}



/* Entry: 1048f113c; end: 1048f11c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048f113c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  lVar4 = 0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0xbcbb);
  }
  *param_1 = lVar4;
  lVar3 = _DAT_11309c888;
  *(long *)(lVar4 + 0x28) = unaff_x20;
  *(long *)(lVar4 + 0x30) = lVar3;
  puVar1 = (undefined8 *)(unaff_x20 + lVar3);
  _swift_beginAccess(puVar1,lVar4,1,0);
  uVar2 = puVar1[1];
  *(undefined8 *)(lVar4 + 0x18) = *puVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  _swift_bridgeObjectRetain();
  auVar5._8_8_ = (undefined8 *)(lVar4 + 0x18);
  auVar5._0_8_ = FUN_1048f11c8;
  return auVar5;
}



/* Entry: 1048f11c8; end: 1048f12bf;  */

void FUN_1048f11c8(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + 0x18);
  uVar7 = *(ulong *)(lVar4 + 0x20);
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar7);
    FUN_1048f1064(plVar6,uVar7);
    uVar2 = *(ulong *)(lVar4 + 0x20);
    goto LAB_1048f12a4;
  }
  puVar5 = *(ulong **)(lVar4 + 0x28);
  puVar1 = (ulong *)((long)puVar5 + *(long *)(lVar4 + 0x30));
  uVar2 = puVar1[1];
  if (uVar7 == 0) {
    if (uVar2 == 0) goto LAB_1048f1294;
LAB_1048f1254:
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x148))();
    FUN_1048f2170(plVar6,uVar7,param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    puVar5 = *(ulong **)(lVar4 + 0x28);
  }
  else {
    if (uVar2 == 0) goto LAB_1048f1254;
    plVar3 = (long *)*puVar1;
    if (plVar6 != plVar3 || uVar7 != uVar2) {
      param_1 = plVar6;
      param_2 = uVar7;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (plVar6,uVar7,plVar3,uVar2,0);
      puVar5 = *(ulong **)(lVar4 + 0x28);
      if (((ulong)param_1 & 1) == 0) goto LAB_1048f1254;
    }
  }
LAB_1048f1294:
  puVar5 = (ulong *)((long)puVar5 + *(long *)(lVar4 + 0x30));
  uVar2 = puVar5[1];
  *puVar5 = (ulong)plVar6;
  puVar5[1] = uVar7;
LAB_1048f12a4:
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1048f12c0; end: 1048f131b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048f12c0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309c890);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1048f131c; end: 1048f13eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f131c(ulong param_1,undefined1 *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong *unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (ulong *)((long)unaff_x20 + _DAT_11309c890);
  puVar3 = auStack_58;
  _swift_beginAccess(puVar1,puVar3,1,0);
  puVar4 = (undefined1 *)puVar1[1];
  if (param_2 == (undefined1 *)0x0) {
    if (puVar4 == (undefined1 *)0x0) goto LAB_1048f13c8;
  }
  else if ((puVar4 != (undefined1 *)0x0) &&
          ((*puVar1 == param_1 && puVar4 == param_2 ||
           (uVar2 = param_1, puVar3 = param_2,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (param_1,param_2,*puVar1,puVar4,0), (uVar2 & 1) != 0)))) goto LAB_1048f13c8;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x130))();
  FUN_1048f2170();
  _swift_bridgeObjectRelease(puVar3);
LAB_1048f13c8:
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = (ulong)param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1048f13ec; end: 1048f1477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048f13ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  lVar4 = 0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x796c);
  }
  *param_1 = lVar4;
  lVar3 = _DAT_11309c890;
  *(long *)(lVar4 + 0x28) = unaff_x20;
  *(long *)(lVar4 + 0x30) = lVar3;
  puVar1 = (undefined8 *)(unaff_x20 + lVar3);
  _swift_beginAccess(puVar1,lVar4,1,0);
  uVar2 = puVar1[1];
  *(undefined8 *)(lVar4 + 0x18) = *puVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  _swift_bridgeObjectRetain();
  auVar5._8_8_ = (undefined8 *)(lVar4 + 0x18);
  auVar5._0_8_ = FUN_1048f1478;
  return auVar5;
}



/* Entry: 1048f1478; end: 1048f1567;  */

void FUN_1048f1478(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *param_1;
  uVar7 = *(ulong *)(lVar5 + 0x18);
  uVar8 = *(ulong *)(lVar5 + 0x20);
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar8);
    FUN_1048f131c(uVar7,uVar8);
    uVar2 = *(ulong *)(lVar5 + 0x20);
    goto LAB_1048f154c;
  }
  puVar6 = *(ulong **)(lVar5 + 0x28);
  puVar1 = (ulong *)((long)puVar6 + *(long *)(lVar5 + 0x30));
  uVar2 = puVar1[1];
  if (uVar8 == 0) {
    if (uVar2 == 0) goto LAB_1048f153c;
LAB_1048f1504:
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x130))();
    FUN_1048f2170();
    _swift_bridgeObjectRelease(param_2);
    puVar6 = *(ulong **)(lVar5 + 0x28);
  }
  else {
    if (uVar2 == 0) goto LAB_1048f1504;
    uVar4 = *puVar1;
    if (uVar7 != uVar4 || uVar8 != uVar2) {
      uVar3 = uVar7;
      param_2 = uVar8;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar7,uVar8,uVar4,uVar2,0);
      puVar6 = *(ulong **)(lVar5 + 0x28);
      if ((uVar3 & 1) == 0) goto LAB_1048f1504;
    }
  }
LAB_1048f153c:
  puVar6 = (ulong *)((long)puVar6 + *(long *)(lVar5 + 0x30));
  uVar2 = puVar6[1];
  *puVar6 = uVar7;
  puVar6[1] = uVar8;
LAB_1048f154c:
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar5);
  return;
}



/* Entry: 1048f1568; end: 1048f1737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f1568(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong *unaff_x20;
  double dVar4;
  double dVar5;
  
  lVar2 = param_2;
  _objc_msgSend(param_2,PTR_s_window_1126876a0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      _objc_msgSend(lVar3,PTR_s_view_1126849e8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar2 != 0) {
        _objc_msgSend(param_2,PTR_s_bounds_1125a5ca8);
        _CGRectGetMidX();
        dVar4 = param_1;
        _objc_msgSend(param_2,PTR_s_bounds_1125a5ca8);
        _CGRectGetMinY();
        _objc_msgSend(lVar2,PTR_s_convertPoint_fromCoordinateSpace_1125b1e18,param_2);
        _objc_msgSend(*(undefined8 *)((long)unaff_x20 + _DAT_11309c8b0),PTR_s_bounds_1125a5ca8);
        _CGRectGetHeight();
        dVar4 = dVar4 - (param_1 + 0.0 + 20.0);
        dVar5 = dVar4 + -11.0;
        _objc_msgSend(lVar2,PTR_s_bounds_1125a5ca8);
        _CGRectGetMinY();
        bVar1 = dVar5 < dVar4;
        if (bVar1) {
          _objc_msgSend(param_2,PTR_s_bounds_1125a5ca8);
          _CGRectGetMidX();
          dVar5 = dVar4;
          _objc_msgSend(param_2,PTR_s_bounds_1125a5ca8);
          _CGRectGetMaxY();
          _objc_msgSend(dVar4,dVar5,lVar2,PTR_s_convertPoint_fromCoordinateSpace_1125b1e18,param_2);
        }
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x278))(lVar2,bVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 1048f1738; end: 1048f17af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f1738(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_11309c8e0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_11309c8e0) = 1;
    puVar1 = &UNK_1107b6cc8;
    _swift_allocObject(&UNK_1107b6cc8,0x18,7);
    _swift_unknownObjectWeakInit(puVar1 + 0x10);
    _swift_retain(puVar1);
    FUN_1048f1b14(FUN_1048f3128,puVar1);
    _swift_release_n(puVar1,2);
  }
  return;
}



/* Entry: 1048f17b0; end: 1048f1b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f17b0(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  double dVar11;
  double dVar12;
  undefined1 auStack_280 [128];
  undefined1 auStack_200 [128];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  undefined *puStack_158;
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
  undefined *puStack_100;
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
  
  _objc_msgSend();
  dVar11 = param_3 * 0.5 - *(double *)(unaff_x20 + _DAT_11309c8d0);
  _objc_msgSend(dVar11);
  dVar12 = -(param_4 * -0.5 * -0.999);
  if (*(char *)(unaff_x20 + _DAT_11309c8d8) == '\0') {
    dVar12 = param_4 * -0.5 * -0.999;
  }
  puVar2 = PTR_PTR_1126add40;
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_msgSend(&puStack_100,0x3f50624dd2f1a9fc,0x3f50624dd2f1a9fc,0x3f50624dd2f1a9fc);
  _objc_msgSend(auStack_200,dVar11 * -0.999,dVar12,0,puVar2,
                PTR_s_CATransform3DMakeTranslation_ty__112525188);
  lVar3 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uStack_b8;
  uStack_140 = uStack_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_178 = uStack_f8;
  puStack_180 = puStack_100;
  puStack_168 = (undefined *)uStack_e8;
  puStack_170 = (undefined *)uStack_f0;
  puStack_158 = (undefined *)uStack_d8;
  pcStack_160 = (code *)uStack_e0;
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  _objc_msgSend(auStack_280,puVar2,PTR_s_CATransform3DConcat_b__112525190,&puStack_180,auStack_200);
  _objc_msgSend(lVar3,PTR_s_setTransform__112664080,auStack_280);
  _objc_release(lVar3);
  _objc_msgSend();
  puVar4 = &UNK_1107b6cf0;
  _swift_allocObject(&UNK_1107b6cf0,0x28,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(double *)(puVar4 + 0x18) = param_3 * 0.5;
  *(undefined **)(puVar4 + 0x20) = puVar2;
  puVar5 = &UNK_1107b6d18;
  _swift_allocObject(&UNK_1107b6d18,0x20,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  puVar6 = &UNK_1107b6d40;
  _swift_allocObject(&UNK_1107b6d40,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_160 = FUN_1048f3320;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0x42000000;
  puStack_170 = &UNK_1000f6b44;
  puStack_168 = &UNK_1107b6d58;
  ppuVar8 = &puStack_180;
  puStack_158 = puVar4;
  __Block_copy(ppuVar8);
  puVar9 = puStack_158;
  _objc_retain();
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(unaff_x20);
  _objc_retain(puVar2);
  _swift_retain(puVar4);
  _swift_release(puVar9);
  puVar9 = &UNK_1107b6d90;
  _swift_allocObject(&UNK_1107b6d90,0x30,7);
  *(code **)(puVar9 + 0x10) = FUN_1048f3480;
  *(undefined **)(puVar9 + 0x18) = puVar5;
  *(code **)(puVar9 + 0x20) = FUN_1048f3500;
  *(undefined **)(puVar9 + 0x28) = puVar6;
  pcStack_160 = FUN_1048f3660;
  puStack_180 = puVar1;
  uStack_178 = 0x42000000;
  puStack_170 = &UNK_100288f10;
  puStack_168 = &UNK_1107b6da8;
  ppuVar10 = &puStack_180;
  puStack_158 = puVar9;
  __Block_copy(ppuVar10);
  puVar9 = puStack_158;
  _swift_retain(puVar5);
  _swift_retain(puVar6);
  _swift_release(puVar9);
  _objc_msgSend(0x3fc9999999999999,0,puVar7,PTR_s_animateWithDuration_delay_option_11259e6b8,0,
                ppuVar8,ppuVar10);
  __Block_release(ppuVar10);
  __Block_release(ppuVar8);
  _objc_release(puVar2);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(puVar6);
  return;
}



/* Entry: 1048f1b14; end: 1048f1c7b;  */

void FUN_1048f1b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1107b6f08;
  _swift_allocObject(&UNK_1107b6f08,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = (code *)0x1048f5468;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107b6f20;
  puStack_68 = puVar3;
  __Block_copy(&puStack_90);
  puVar3 = puStack_68;
  _objc_retain();
  _swift_release(puVar3);
  puVar3 = &UNK_1107b6f58;
  _swift_allocObject(&UNK_1107b6f58,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  pcStack_70 = FUN_1048f547c;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_1107b6f70;
  puStack_68 = puVar3;
  __Block_copy(&puStack_90);
  puVar3 = puStack_68;
  _swift_retain(param_2);
  _swift_release(puVar3);
  _objc_msgSend(0x3fd3333333333333,0,puVar2,PTR_s_animateWithDuration_delay_option_11259e6b8,0,
                ppuVar4,ppuVar5);
  __Block_release(ppuVar5);
  __Block_release(ppuVar4);
  return;
}



/* Entry: 1048f1c7c; end: 1048f1eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f1c7c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong *unaff_x20;
  long lStack_38;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x118))();
  if (param_1 == 0) {
    if (lRam000000011309c1c0 != -1) {
      _swift_once(0x11309c1c0,FUN_1048f26e4);
    }
    uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c918);
    *(undefined8 *)((long)unaff_x20 + _DAT_11309c918) = uRam000000011309c870;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0x3fbeb851eb851eb8,0x3fd0a3d70a3d70a4,0x3fe199999999999a,0x3ff0000000000000);
    uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c8e8);
    *(undefined **)((long)unaff_x20 + _DAT_11309c8e8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0x3fe3333333333333,0x3fe75c28f5c28f5c,0x3ff0000000000000,0x3ff0000000000000);
  }
  else {
    if (param_1 != 1) {
      lStack_38 = param_1;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_1107b6e48,&lStack_38,&UNK_1107b6e48,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048f1eb4);
      (*pcVar1)();
    }
    if (lRam000000011309c1c8 != -1) {
      _swift_once(0x11309c1c8,0x1048f27f0);
    }
    uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c918);
    *(undefined8 *)((long)unaff_x20 + _DAT_11309c918) = uRam000000011309c878;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0x3fc0a3d70a3d70a4,0x3ff0000000000000);
    uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c8e8);
    *(undefined **)((long)unaff_x20 + _DAT_11309c8e8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone();
    _objc_msgSend(0x3fe6147ae147ae14,0x3ff0000000000000);
  }
  uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c920);
  *(undefined **)((long)unaff_x20 + _DAT_11309c920) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)((long)unaff_x20 + _DAT_11309c8b0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,PTR_s_setTextColor__112662688,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1048f1eb4; end: 1048f216f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1048f1eb4(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_msgSend();
  _objc_release(puVar4);
  if ((undefined *)0x1 < puVar5 + -1) {
    param_3 = param_4;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_11309c898);
  dVar6 = 17.0;
  if (17.0 < *pdVar1 + -7.0) {
    dVar6 = *pdVar1 + -7.0;
  }
  param_3 = param_3 + -11.0;
  dVar10 = param_3 + -6.0 + -14.0;
  if (dVar6 <= dVar10) {
    dVar10 = dVar6;
  }
  *pdVar1 = dVar10 + 7.0;
  dVar6 = 16.5;
  uVar7 = 0x4031800000000000;
  uVar12 = uVar7;
  if (*(char *)(unaff_x20 + _DAT_11309c8d8) == '\0') {
    uVar12 = 0x4030800000000000;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11309c8b0);
  _objc_msgSend(uVar8,PTR_s_bounds_1125a5ca8);
  _CGRectGetWidth();
  uVar11 = uVar7;
  _objc_msgSend(uVar8,PTR_s_bounds_1125a5ca8);
  _CGRectGetHeight();
  _objc_msgSend(0x4030800000000000,uVar12,uVar7,uVar11,uVar8,PTR_s_setFrame__112645658);
  _objc_msgSend(uVar8,PTR_s_bounds_1125a5ca8);
  _CGRectGetHeight();
  _objc_msgSend(uVar8,PTR_s_bounds_1125a5ca8);
  _CGRectGetWidth();
  dVar13 = dVar6 + 20.0 + 1.0 + 20.0;
  fVar9 = (float)(dVar13 + -14.0) * 0.5;
  _roundf();
  lVar2 = _DAT_11309c8c0;
  dVar6 = (double)fVar9;
  *(double *)(unaff_x20 + _DAT_11309c8c0) = dVar6;
  lVar3 = _DAT_11309c8c8;
  *(double *)(unaff_x20 + _DAT_11309c8c8) = dVar6;
  dVar10 = dVar10 - dVar6;
  if (11.0 <= dVar10) {
    dVar13 = dVar10 + dVar13;
    if (dVar13 <= param_3) goto LAB_1048f20dc;
    dVar13 = dVar13 - param_3;
    dVar10 = dVar10 - dVar13;
    *(double *)(unaff_x20 + lVar2) = dVar13 + dVar6;
    dVar13 = dVar6 - dVar13;
  }
  else {
    dVar13 = 11.0 - dVar10;
    dVar10 = dVar10 + dVar13;
    *(double *)(unaff_x20 + lVar2) = dVar6 - dVar13;
    dVar13 = dVar13 + dVar6;
  }
  *(double *)(unaff_x20 + lVar3) = dVar13;
LAB_1048f20dc:
  *(double *)(unaff_x20 + _DAT_11309c8d0) = (*pdVar1 - dVar10) + 6.0;
  return dVar10 + -6.0;
}



/* Entry: 1048f2170; end: 1048f2497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2170(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uStack_88;
  
  uVar10 = 0;
  if (param_2 != 0) {
    uVar10 = param_1;
  }
  lVar1 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  uVar8 = 0;
  if (param_4 != 0) {
    uVar8 = param_3;
  }
  uVar2 = 0xe000000000000000;
  if (param_4 != 0) {
    uVar2 = param_4;
  }
  _swift_bridgeObjectRetain_n(param_4,2);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar2);
  uVar11 = uVar2 >> 0x38 & 0xf;
  uVar3 = uVar8 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar11;
  }
  if (uVar3 != 0) {
    uVar3 = 0;
    __sSS9hasSuffixySbSSF(0x20,0xe100000000000000,uVar8,uVar2);
    if ((uVar3 & 1) == 0) {
      __sSS6appendyySSF(0x20,0xe100000000000000);
      uVar11 = uVar2 >> 0x38 & 0xf;
    }
  }
  uStack_88 = uVar2 & 0x2000000000000000;
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar10,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  uVar3 = uVar8;
  __sSS5countSivg(uVar8,uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  uVar5 = uVar8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  _objc_msgSend(puVar4,PTR_s_initWithString__1125f1410,uVar5);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _swift_getInitializedObjCClass();
  _objc_msgSend(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar4,PTR_s_addAttribute_value_range__11259b570,
                *(undefined8 *)PTR__NSFontAttributeName_1103457f0,puVar6,0,uVar3);
  uVar10 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(puVar4,PTR_s_addAttribute_value_range__11259b570,uVar10,puVar7,0,uVar3);
  _objc_release(puVar7);
  uVar3 = uVar8 & 0xffffffffffff;
  if (uStack_88 != 0) {
    uVar3 = uVar11;
  }
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_allocWithZone(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_msgSend(0x3fdb5b5b5b5b5b5b,0x3fe0f0f0f0f0f0f1,0x3fe8f8f8f8f8f8f9,0x3ff0000000000000);
    __sSS5countSivg(uVar8,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    _objc_msgSend(puVar4,PTR_s_addAttribute_value_range__11259b570,uVar10,puVar7,0,uVar8);
    _objc_release(puVar7);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11309c8b0);
  _objc_msgSend(uVar9,PTR_s_setAttributedText__1126387e8,puVar4);
  uVar10 = 0x4067200000000000;
  uVar12 = 0x7fefffffffffffff;
  _objc_msgSend(0x4067200000000000,0x7fefffffffffffff,uVar9,PTR_s_sizeThatFits__11266cf90);
  _objc_msgSend(0,0,uVar10,uVar12,uVar9,PTR_s_setBounds__11263a898);
  FUN_1048f1eb4();
  _objc_msgSend(unaff_x20,PTR_s_setFrame__112645658);
  _objc_msgSend(unaff_x20,PTR_s_setNeedsDisplay_112650978);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1048f2498; end: 1048f25e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2498(double param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  code *pcVar4;
  double dVar5;
  
  _swift_getObjectType();
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
  puVar1 = PTR__swift_isaMask_11034f488;
  pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x100);
  (*pcVar4)();
  if (0.0 < param_1) {
    puVar3 = unaff_x20;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (ulong *)0x0) {
      _objc_release();
      _CFAbsoluteTimeGetCurrent();
      lVar2 = _DAT_11309c8a0;
      dVar5 = param_1 - *(double *)((long)unaff_x20 + _DAT_11309c8a0);
      (*pcVar4)();
      param_1 = param_1 - dVar5;
      if ((param_1 <= 0.0) &&
         (_CFAbsoluteTimeGetCurrent(), (*(double *)((long)unaff_x20 + lVar2) - param_1) + 6.0 <= 0.0
         )) {
                    /* WARNING: Could not recover jumptable at 0x0001048f25e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((*(ulong *)puVar1 & *unaff_x20) + 0x280))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d290)();
      return;
    }
  }
  return;
}



/* Entry: 1048f25e4; end: 1048f2647;  */

void FUN_1048f25e4(void)

{
  undefined8 unaff_x20;
  
  _swift_getObjectType();
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(unaff_x20,PTR_s_cancelPreviousPerformRequestsWit_1125a9490)
  ;
  return;
}



/* Entry: 1048f2648; end: 1048f265f;  */

void FUN_1048f2648(void)

{
  return;
}



/* Entry: 1048f2660; end: 1048f26e3;  */

void FUN_1048f2660(void)

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



/* Entry: 1048f26e4; end: 1048f28f7;  */

void FUN_1048f26e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001028b6d3c();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  _objc_msgSend(0x3fdb9b9b9b9b9b9c,0x3fe3939393939394,0x3feebebebebebebf,0x3ff0000000000000);
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined **)(param_1 + 0x20) = puVar2;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  _objc_msgSend(0x3fd2525252525252,0x3fdd1d1d1d1d1d1d,0x3fe8d8d8d8d8d8d9,0x3ff0000000000000);
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined **)(param_1 + 0x28) = puVar2;
  lRam000000011309c870 = param_1;
  return;
}



/* Entry: 1048f28f8; end: 1048f293b; -[FBSDKTooltipView displayDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f28f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c880;
  _swift_beginAccess(param_1 + _DAT_11309c880,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1048f293c; end: 1048f298b; -[FBSDKTooltipView setDisplayDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f293c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c880;
  _swift_beginAccess(param_2 + _DAT_11309c880,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1048f298c; end: 1048f29cf; -[FBSDKTooltipView colorStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f298c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c928;
  _swift_beginAccess(param_1 + _DAT_11309c928,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1048f29d0; end: 1048f2a37; -[FBSDKTooltipView setColorStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f29d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c928;
  _swift_beginAccess(param_1 + _DAT_11309c928,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  FUN_1048f1c7c();
  _objc_release(param_1);
  return;
}



/* Entry: 1048f2a38; end: 1048f2a43; -[FBSDKTooltipView message] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2a38(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c888);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048f2a44; end: 1048f2a4f; -[FBSDKTooltipView setMessage:] */

void FUN_1048f2a44(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_1048f1064(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048f2a50; end: 1048f2a5b; -[FBSDKTooltipView tagline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f2a50(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c890);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048f2a5c; end: 1048f2acf;  */

void FUN_1048f2a5c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048f2ad0; end: 1048f2adb; -[FBSDKTooltipView setTagline:] */

void FUN_1048f2ad0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_1048f131c(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


