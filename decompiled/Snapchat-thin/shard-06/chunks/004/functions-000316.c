/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10492998c; end: 104929a9f;  */

void FUN_10492998c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar3 = auStack_60 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar2 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar2 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_3 == 0,1);
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  func_0x000100028790(lVar1,param_5);
  _swift_beginAccess();
  func_0x000100ed9c6c(puVar3,lVar1);
  _swift_endAccess(auStack_58);
  FUN_1049349e8(puVar3,0x11309c628);
  return;
}



/* Entry: 104929aa0; end: 104929b1b;  */

undefined1  [16] FUN_104929aa0(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028790();
  _swift_beginAccess();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 0x104934dc4;
  return auVar2;
}



/* Entry: 104929b1c; end: 104929ba3;  */

void FUN_104929b1c(undefined8 param_1)

{
  undefined8 uVar1;
  long *in_x3;
  undefined8 in_x5;
  
  if (*in_x3 != -1) {
    _swift_once(in_x3,in_x5);
  }
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028790();
  _swift_beginAccess();
  FUN_104934c24(uVar1,param_1,0x11309c628);
  return;
}



/* Entry: 104929ba4; end: 104929c23;  */

void FUN_104929ba4(undefined8 param_1)

{
  undefined8 uVar1;
  long *in_x4;
  undefined8 in_x6;
  undefined1 auStack_38 [24];
  
  if (*in_x4 != -1) {
    _swift_once(in_x4,in_x6);
  }
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028790();
  _swift_beginAccess();
  func_0x000100ed9c6c(param_1,uVar1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 104929c24; end: 104929c37;  */

void FUN_104929c24(void)

{
  puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 104929c38; end: 104929dd7;  */

undefined8 FUN_104929c38(void)

{
  if (lRam000000011309d050 != -1) {
    _swift_once(0x11309d050,FUN_104929c24);
  }
  return 0x1138157c8;
}



/* Entry: 104929dd8; end: 104929e3b;  */

void FUN_104929dd8(undefined8 *param_1)

{
  long *in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined1 auStack_38 [24];
  
  if (*in_x3 != -1) {
    _swift_once(in_x3,in_x5);
  }
  _swift_beginAccess(in_x4,auStack_38,0,0);
  *param_1 = *in_x4;
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 104929e3c; end: 104929ebf;  */

void FUN_104929e3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *in_x4;
  undefined8 *in_x5;
  undefined8 in_x6;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  lVar3 = *in_x4;
  _swift_bridgeObjectRetain(uVar2);
  if (lVar3 != -1) {
    _swift_once(in_x4,in_x6);
  }
  _swift_beginAccess(in_x5,auStack_58,1,0);
  uVar1 = *in_x5;
  *in_x5 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104929ec0; end: 104929ec3;  */

void FUN_104929ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _swift_beginAccess(0x113815730,auStack_68,1,0);
  uVar1 = uRam0000000113815730;
  uRam0000000113815730 = param_1;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRelease(uVar1);
  _swift_beginAccess(0x113815738,auStack_80,1,0);
  uVar1 = uRam0000000113815740;
  uRam0000000113815738 = param_2;
  uRam0000000113815740 = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(0x113815758,auStack_98,1,0);
  uVar1 = uRam0000000113815758;
  uRam0000000113815758 = param_4;
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRelease(uVar1);
  _swift_beginAccess(0x113815748,auStack_b0,1,0);
  uVar1 = uRam0000000113815750;
  uRam0000000113815748 = 0;
  uRam0000000113815750 = 0;
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(0x113815760,auStack_c8,1,0);
  uVar1 = puRam0000000113815760;
  puRam0000000113815760 = puVar2;
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104929ec4; end: 104929f43; +[FBAEMReporter configureWithNetworker:appID:reporter:] */

void FUN_104929ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  func_0x00010492ffbc(param_3,param_4,param_2,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104929f44; end: 104929f47;  */

void FUN_104929f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x113815730,auStack_78,1,0);
  uVar1 = uRam0000000113815730;
  uRam0000000113815730 = param_1;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRelease(uVar1);
  _swift_beginAccess(0x113815738,auStack_90,1,0);
  uVar1 = uRam0000000113815740;
  uRam0000000113815738 = param_2;
  uRam0000000113815740 = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(0x113815758,auStack_a8,1,0);
  uVar1 = uRam0000000113815758;
  uRam0000000113815758 = param_4;
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRelease(uVar1);
  _swift_beginAccess(0x113815748,auStack_c0,1,0);
  uVar1 = uRam0000000113815750;
  uRam0000000113815748 = param_5;
  uRam0000000113815750 = param_6;
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(0x113815760,auStack_d8,1,0);
  uVar1 = uRam0000000113815760;
  uRam0000000113815760 = param_7;
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104929f48; end: 10492a01f; +[FBAEMReporter configureWithNetworker:appID:reporter:analyticsAppID:store:] */

void FUN_104929f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_7);
  FUN_104930114(param_3,param_4,uVar1,param_5,param_6,param_2,param_7);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_7);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10492a020; end: 10492a05f;  */

void FUN_10492a020(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815768,auStack_38,1,0);
  uRam0000000113815768 = 0;
  return;
}



/* Entry: 10492a060; end: 10492a09f; +[FBAEMReporter enable] */

void FUN_10492a060(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815768,auStack_38,1,0);
  uRam0000000113815768 = 0;
  return;
}



/* Entry: 10492a0a0; end: 10492a143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10492a0a0(long param_1)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815768,auStack_48,0,0);
  if ((cRam0000000113815768 == '\x01') && (FUN_104930274(), param_1 != 0)) {
    if ((*(byte *)(param_1 + _DAT_11309d838) & 1) == 0) {
      FUN_10492a14c(1,0,0);
      func_0x00010492a470(param_1);
    }
    else {
      FUN_104930fe4(param_1);
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10492a144; end: 10492a14b;  */

undefined * FUN_10492a144(double param_1,undefined *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  undefined8 uVar20;
  undefined8 unaff_x24;
  long lVar21;
  undefined8 unaff_x26;
  ulong *puVar22;
  undefined8 unaff_x27;
  ulong *puVar23;
  undefined8 unaff_x28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_170 [8];
  long alStack_168 [4];
  undefined1 auStack_148 [48];
  ulong auStack_118 [17];
  undefined auStack_90 [8];
  undefined *apuStack_88 [2];
  undefined *apuStack_78 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined *)0x11309c5e0;
  puVar4 = puVar6;
  func_0x0001048db364();
  puVar4 = auStack_90 + -(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar21 = *(long *)(lVar5 + -8);
  lVar17 = (long)puVar4 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_104934c24(param_2,puVar4,0x11309c5e0);
  puVar9 = puVar4;
  (**(code **)(lVar21 + 0x30))(puVar4,1,lVar5);
  if ((int)puVar9 == 1) {
    FUN_1049349e8(puVar4,0x11309c5e0);
  }
  else {
    lVar16 = lVar17;
    (**(code **)(lVar21 + 0x20))(lVar17,puVar4,lVar5);
    __s10Foundation3URLV5querySSSgvg();
    lVar14 = 0;
    if (puVar4 != (undefined *)0x0) {
      lVar14 = lVar16;
    }
    puVar6 = (undefined *)0xe000000000000000;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
    }
    param_2 = PTR_PTR_1126add58;
    _swift_getInitializedObjCClass();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar14,puVar6);
    _swift_bridgeObjectRelease(puVar6);
    puVar6 = param_2;
    _objc_msgSend(param_2,PTR_s_dictionaryWithQueryString__1125ba1d8,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar4 = puVar6;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _objc_release(puVar6);
    if (*(long *)(puVar4 + 0x10) == 0) {
LAB_10493050c:
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      _swift_bridgeObjectRetain(puVar4);
      lVar14 = 0x696c7070615f6c61;
      uVar13 = 0;
      func_0x000100029284();
      if ((uVar13 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar4);
        goto LAB_10493050c;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x38) + lVar14 * 0x10);
      puVar6 = (undefined *)*puVar1;
      unaff_x24 = puVar1[1];
      _swift_bridgeObjectRetain(unaff_x24);
      _swift_bridgeObjectRelease_n(puVar4,2);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar6,unaff_x24);
      _swift_bridgeObjectRelease(unaff_x24);
      apuStack_78[0] = (undefined *)0x0;
      puVar9 = param_2;
      _objc_msgSend(param_2,PTR_s_objectForJSONString_error__1126159d8,puVar6,apuStack_78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar4 = apuStack_78[0];
      if (puVar9 == (undefined *)0x0) {
        puVar9 = apuStack_78[0];
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(puVar9);
        _swift_willThrow();
        _swift_errorRelease(puVar4);
        param_2 = puVar4;
      }
      else {
        _objc_retain();
        __ss018_bridgeAnyObjectToB0yypyXlSgF(apuStack_78,puVar9);
        _swift_unknownObjectRelease(puVar9);
        uVar8 = 0x11309d9a8;
        func_0x0001048db364(0x11309d9a8);
        ppuVar7 = apuStack_88;
        _swift_dynamicCast(ppuVar7,apuStack_78,PTR___sypN_11034f1a8 + 8,uVar8,6);
        puVar4 = puVar9;
        if (((ulong)ppuVar7 & 1) != 0) {
          uVar8 = 0;
          FUN_1049246d8(0);
          puVar9 = apuStack_88[0];
          FUN_10491ead0(apuStack_88[0],uVar8);
          (**(code **)(lVar21 + 8))(lVar17,lVar5);
          puVar4 = puVar9;
          goto LAB_104930528;
        }
      }
    }
    (**(code **)(lVar21 + 8))(lVar17,lVar5);
  }
  puVar9 = (undefined *)0x0;
LAB_104930528:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar17 + -0x70) = unaff_d9;
  *(undefined8 *)(lVar17 + -0x68) = unaff_d8;
  *(undefined8 *)(lVar17 + -0x60) = unaff_x28;
  *(undefined8 *)(lVar17 + -0x58) = unaff_x27;
  *(undefined8 *)(lVar17 + -0x50) = unaff_x26;
  *(long *)(lVar17 + -0x48) = lVar21;
  *(undefined8 *)(lVar17 + -0x40) = unaff_x24;
  *(undefined **)(lVar17 + -0x38) = puVar6;
  *(long *)(lVar17 + -0x30) = lVar17;
  *(undefined **)(lVar17 + -0x28) = param_2;
  *(undefined **)(lVar17 + -0x20) = puVar4;
  *(long *)(lVar17 + -0x18) = lVar5;
  *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar17 + -8) = FUN_104930594;
  lVar5 = 0x11309c628;
  func_0x0001048db364();
  lVar16 = (lVar17 + -0xe0) - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = 0;
  __s10Foundation4DateVMa();
  lVar18 = *(long *)(lVar21 + -8);
  uVar13 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar16 - uVar13;
  if (((ulong)puVar9 & 1) == 0) {
    *(ulong *)(lVar17 + -0xd8) = lVar14 - uVar13;
    *(long *)(lVar17 + -0xd0) = lVar14;
    if (lRam000000011309d038 != -1) {
      _swift_once(0x11309d038,FUN_1049292fc);
    }
    *(long *)(lVar17 + -200) = lVar18;
    puVar11 = (ulong *)(lVar17 - 0x88);
    _swift_beginAccess(0x113815790,puVar11,0,0);
    puVar2 = puRam0000000113815790;
    *(long *)(lVar17 + -0xc0) = lVar21;
    puVar19 = (ulong *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
    if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
      puVar22 = (ulong *)puVar19[2];
    }
    else {
      puVar22 = puVar19;
      if ((long)puRam0000000113815790 < 0) {
        puVar22 = puRam0000000113815790;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar2);
    puVar6 = PTR__swift_isaMask_11034f488;
    puVar23 = (ulong *)0x0;
    do {
      if (puVar22 == puVar23) {
        _swift_bridgeObjectRelease(puVar2);
        if (lRam000000011309d040 != -1) {
          _swift_once(0x11309d040,FUN_104929514);
        }
        func_0x000100028790(lVar5,0x113815798);
        _swift_beginAccess();
        FUN_104934c24(lVar5,lVar16,0x11309c628);
        lVar5 = *(long *)(lVar17 + -200);
        uVar8 = *(undefined8 *)(lVar17 + -0xc0);
        lVar21 = lVar16;
        (**(code **)(lVar5 + 0x30))(lVar16,1,uVar8);
        if ((int)lVar21 != 1) {
          uVar20 = *(undefined8 *)(lVar17 + -0xd8);
          (**(code **)(lVar5 + 0x20))(uVar20,lVar16,uVar8);
          uVar15 = *(undefined8 *)(lVar17 + -0xd0);
          __s10Foundation4DateVACycfC(uVar15);
          __s10Foundation4DateV17timeIntervalSinceySdACF(uVar20);
          pcVar3 = *(code **)(lVar5 + 8);
          (*pcVar3)(uVar15,uVar8);
          (*pcVar3)(uVar20,uVar8);
          if (86400.0 <= param_1) {
            return (undefined *)0x1;
          }
          if (lRam000000011309d030 != -1) {
            _swift_once(0x11309d030,FUN_104929090);
          }
          _swift_beginAccess(0x113815788,lVar17 + -0xb8,0,0);
          return (undefined *)(ulong)(*(long *)(lRam0000000113815788 + 0x10) == 0);
        }
        FUN_1049349e8(lVar16,0x11309c628);
        return (undefined *)0x1;
      }
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if ((ulong *)puVar19[2] <= puVar23) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104930858);
          (*pcVar3)();
        }
        puVar10 = (ulong *)puVar2[(long)puVar23 + 4];
        _objc_retain();
        puVar12 = puVar11;
      }
      else {
        puVar10 = puVar23;
        puVar12 = puVar2;
        FUN_10491ac20();
      }
      if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104930854);
        (*pcVar3)();
      }
      (**(code **)((*(ulong *)puVar6 & *puVar10) + 0x128))();
      puVar11 = puVar12;
      _objc_release(puVar10);
      puVar23 = (ulong *)((long)puVar23 + 1);
    } while (puVar12 == (ulong *)0x0);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(puVar12);
  }
  return (undefined *)0x1;
}



/* Entry: 10492a14c; end: 10492a85b;  */

void FUN_10492a14c(byte param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_c0 = *(long *)(lVar2 + -8);
  lVar11 = (long)&lStack_d0 - (*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_b8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  lStack_d0 = *(long *)(lVar3 + -8);
  lVar2 = lVar11 - (*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar3;
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_78,0,0);
  uVar5 = uRam0000000113815770;
  puVar4 = &UNK_1107b86d0;
  _swift_allocObject(&UNK_1107b86d0,0x29,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(long *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = unaff_x20;
  puVar4[0x28] = param_1 & 1;
  func_0x000102dfce94(param_2,param_3);
  lVar3 = param_3;
  func_0x000102dfce94(param_2);
  _objc_retain(uVar5);
  puVar6 = puVar4;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  if ((puVar6 == (undefined *)0xd000000000000028) && (lVar3 == -0x7ffffffef0de2fb0)) {
    _swift_bridgeObjectRelease(0x800000010f21d050);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(lVar3);
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10492c634(param_2,param_3);
      _objc_release(uVar5);
      _swift_release_n(puVar4,2);
      func_0x000100dc2b4c(param_2,param_3);
      return;
    }
  }
  pcStack_88 = FUN_104931448;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000b0c7c;
  puStack_90 = &UNK_1107b86e8;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar4;
  __Block_copy(ppuVar7);
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar6);
  uVar9 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar10 = 0x112d4af98;
  func_0x000104931470(0x112d4af98,0x11309c6f8,puVar1,PTR___sSayxGSTsMc_11034dd08);
  lVar3 = lStack_b8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar11,&puStack_b0,uVar9,uVar10,lStack_b8,uVar8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar11,ppuVar7);
  __Block_release(ppuVar7);
  _objc_release(uVar5);
  _swift_release_n(puVar4,2);
  func_0x000100dc2b4c(param_2,param_3);
  (**(code **)(lStack_c0 + 8))(lVar11,lVar3);
  (**(code **)(lStack_d0 + 8))(lVar2,lStack_c8);
  _swift_release(puStack_80);
  return;
}



/* Entry: 10492a85c; end: 10492a993; +[FBAEMReporter handle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10492a85c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar3 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  _swift_getObjCClassMetadata(param_1);
  _swift_beginAccess(0x113815768,auStack_48,0,0);
  if ((cRam0000000113815768 == '\x01') &&
     (puVar2 = puVar3, FUN_104930274(), puVar2 != (undefined1 *)0x0)) {
    if (puVar2[_DAT_11309d838] == '\x01') {
      FUN_104930fe4(puVar2);
    }
    else {
      FUN_10492a14c(1,0,0);
      func_0x00010492a470(puVar2);
    }
    _objc_release(puVar2);
  }
  FUN_1049349e8(puVar3,0x11309c5e0);
  return;
}



/* Entry: 10492a994; end: 10492aa43; +[FBAEMReporter parseURL:] */

void FUN_10492a994(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar3 = &stack0xffffffffffffffe0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  puVar2 = puVar3;
  FUN_104930274(puVar3);
  FUN_1049349e8(puVar3,0x11309c5e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10492aa44; end: 10492ab4b;  */

void FUN_10492aa44(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined1 auStack_68 [24];
  
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if ((iVar2 != 0) &&
     (_swift_beginAccess(0x113815768,auStack_68,0,0), cRam0000000113815768 == '\x01')) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar3 = &UNK_1107b8720;
      _swift_allocObject(&UNK_1107b8720,0x48,7);
      *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
      *(ulong *)(puVar3 + 0x18) = param_1;
      *(ulong *)(puVar3 + 0x20) = param_2;
      *(undefined8 *)(puVar3 + 0x28) = param_3;
      *(undefined8 *)(puVar3 + 0x30) = param_4;
      *(undefined8 *)(puVar3 + 0x38) = param_5;
      *(undefined8 *)(puVar3 + 0x40) = param_6;
      _swift_bridgeObjectRetain(param_6);
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_4);
      _objc_retain(param_5);
      FUN_10492a14c(0,FUN_1049314b8,puVar3);
      _swift_release(puVar3);
    }
  }
  return;
}



/* Entry: 10492ab4c; end: 10492b8af;  */

void FUN_10492ab4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_80,0,0);
  if (*(long *)(lRam0000000113815788 + 0x10) == 0) {
    return;
  }
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_98,0,0);
  if (uRam0000000113815790 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uRam0000000113815790 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uRam0000000113815790 & 0xffffffffffffff8;
    if ((long)uRam0000000113815790 < 0) {
      uVar3 = uRam0000000113815790;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 == 0) {
    return;
  }
  if (lRam000000011309d060 != -1) {
    _swift_once(0x11309d060,FUN_104936ee0);
  }
  uVar3 = uRam0000000113815790;
  uVar4 = uRam0000000113815790;
  _swift_bridgeObjectRetain();
  FUN_1049376d8();
  _swift_bridgeObjectRelease(uVar3);
  _swift_beginAccess(0x11381576c,auStack_b0,0,0);
  if ((cRam000000011381576c != '\x01') || (*(long *)(uVar4 + 0x10) == 0)) {
LAB_10492ad08:
    _swift_bridgeObjectRelease(uVar4);
    func_0x00010492b378(param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  uVar3 = *(ulong *)(uVar4 + 0x20) & 0xffffffffffff;
  if ((*(ulong *)(uVar4 + 0x28) & 0x2000000000000000) != 0) {
    uVar3 = *(ulong *)(uVar4 + 0x28) >> 0x38 & 0xf;
  }
  if (uVar3 == 0) goto LAB_10492ad08;
  if ((param_8 != 0) && (*(long *)(param_8 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_8);
    lVar5 = 0x65746e6f635f6266;
    uVar3 = 0;
    func_0x000100029284(0x65746e6f635f6266);
    if ((uVar3 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_8 + 0x38) + lVar5 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(param_8);
      puVar6 = &uStack_c8;
      _swift_dynamicCast(puVar6,&puStack_110,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      uStack_120 = uStack_c8;
      uStack_118 = uStack_c0;
      if ((int)puVar6 == 0) {
        uStack_120 = 0;
        uStack_118 = 0;
      }
      goto LAB_10492ad5c;
    }
    _swift_bridgeObjectRelease(param_8);
  }
  uStack_120 = 0;
  uStack_118 = 0;
LAB_10492ad5c:
  _swift_beginAccess(0x113815730,&uStack_c8,0,0);
  lVar5 = lRam0000000113815730;
  if (lRam0000000113815730 != 0) {
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0xe000000000000000;
    _swift_beginAccess(0x113815738,auStack_e0,0,0);
    lVar2 = lRam0000000113815740;
    uVar8 = 0x296c6c756e28;
    if (lRam0000000113815740 != 0) {
      uVar8 = uRam0000000113815738;
    }
    lVar1 = -0x1a00000000000000;
    if (lRam0000000113815740 != 0) {
      lVar1 = lRam0000000113815740;
    }
    _swift_unknownObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar2);
    __sSS6appendyySSF(uVar8,lVar1);
    _swift_bridgeObjectRelease(lVar1);
    __sSS6appendyySSF(0x2f,0xe100000000000000);
    __sSS6appendyySSF(0x727474615f6d6561,0xef6e6f6974756269);
    uVar8 = uStack_108;
    puVar7 = puStack_110;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_110,uStack_108);
    _swift_bridgeObjectRelease(uVar8);
    uVar3 = uVar4;
    FUN_1049314cc(uVar4,uStack_120,uStack_118);
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uStack_118);
    uVar4 = uVar3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar3);
    uVar8 = 0x544547;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544547,0xe300000000000000);
    puVar9 = &UNK_1107b8b78;
    _swift_allocObject(&UNK_1107b8b78,0x48,7);
    *(undefined8 *)(puVar9 + 0x10) = param_2;
    *(undefined8 *)(puVar9 + 0x18) = param_5;
    *(undefined8 *)(puVar9 + 0x20) = param_6;
    *(undefined8 *)(puVar9 + 0x28) = param_7;
    *(undefined8 *)(puVar9 + 0x30) = param_3;
    *(undefined8 *)(puVar9 + 0x38) = param_4;
    *(long *)(puVar9 + 0x40) = param_8;
    pcStack_f0 = FUN_104934dfc;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0x42000000;
    puStack_100 = &UNK_101201f78;
    puStack_f8 = &UNK_1107b8b90;
    ppuVar10 = &puStack_110;
    puStack_e8 = puVar9;
    __Block_copy(ppuVar10);
    puVar9 = puStack_e8;
    _objc_retain(param_7);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_6);
    _swift_release(puVar9);
    _objc_msgSend(lVar5,PTR_s_startGraphRequestWithGraphPath_p_112525210,puVar7,uVar4,0,uVar8,
                  ppuVar10);
    _swift_unknownObjectRelease(lVar5);
    __Block_release(ppuVar10);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar8);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uStack_118);
  return;
}



/* Entry: 10492b8b0; end: 10492b99f; +[FBAEMReporter recordAndUpdateEvent:currency:value:parameters:] */

void FUN_10492b8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  if (param_6 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  _swift_getObjCClassMetadata(param_1);
  uVar1 = param_5;
  _objc_retain(param_5);
  FUN_10492aa44(param_3,param_2,param_4,uVar2,param_5,param_6);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10492b9a0; end: 10492b9a7;  */

ulong * FUN_10492b9a0(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  ulong *puVar11;
  undefined auStack_78 [24];
  
  puVar8 = param_2;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
    puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  else {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      puVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  if (puVar4 == (undefined *)0x0) {
    PTR__swift_isaMask_11034f488 = (undefined *)puVar1;
    return (ulong *)0x0;
  }
  puVar11 = (ulong *)(puVar4 + -1);
  PTR__swift_isaMask_11034f488 = (undefined *)puVar1;
  if (!SBORROW8((long)puVar4,1)) {
    bVar10 = false;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104932414);
            (*pcVar9)();
          }
          if (*(ulong **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104932418);
            (*pcVar9)();
          }
          puVar5 = *(ulong **)(param_1 + (long)puVar11 * 8 + 0x20);
          _objc_retain();
        }
        else {
          puVar5 = puVar11;
          puVar8 = param_1;
          FUN_10491ac20();
        }
        puVar6 = puVar5;
        (**(code **)((*puVar1 & *puVar5) + 0x158))();
        if (((ulong)puVar6 & 1) != 0) {
          puVar8 = auStack_78;
          _swift_beginAccess(0x113815758,puVar8,0,0);
          if (((uRam0000000113815758 != 0) &&
              (uVar7 = uRam0000000113815758, puVar8 = PTR_s_shouldCutoff_1126694f0, _objc_msgSend(),
              uVar2 = uRam0000000113815758, (uVar7 & 1) == 0)) && (uRam0000000113815758 != 0)) {
            _swift_unknownObjectRetain(uRam0000000113815758);
            puVar4 = param_2;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
            uVar7 = uVar2;
            puVar8 = PTR_s_isReportingEvent__112525218;
            _objc_msgSend(uVar2,PTR_s_isReportingEvent__112525218,puVar4);
            _objc_release(puVar4);
            _swift_unknownObjectRelease(uVar2);
            if ((int)uVar7 != 0) {
              _objc_release(puVar5);
              return (ulong *)0x0;
            }
          }
        }
        pcVar9 = *(code **)((*puVar1 & *puVar5) + 0x128);
        (*pcVar9)();
        if (puVar8 != (undefined *)0x0) break;
        if (!bVar10) goto LAB_104932384;
        _objc_release(puVar5);
        if (puVar11 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
LAB_1049323d0:
        bVar10 = true;
        bVar3 = SBORROW8((long)puVar11,1);
        puVar11 = (ulong *)((long)puVar11 + -1);
        if (bVar3) goto LAB_1049323dc;
      }
      _swift_bridgeObjectRelease(puVar8);
LAB_104932384:
      puVar8 = param_2;
      puVar4 = param_3;
      (**(code **)((*puVar1 & *puVar5) + 0x268))
                (param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0);
      if (((ulong)puVar8 & 1) != 0) {
        return puVar5;
      }
      (*pcVar9)();
      puVar8 = puVar4;
      _objc_release(puVar5);
      if (puVar4 == (undefined *)0x0) {
        if (puVar11 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        goto LAB_1049323d0;
      }
      _swift_bridgeObjectRelease(puVar4);
      if (puVar11 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      bVar3 = SBORROW8((long)puVar11,1);
      puVar11 = (ulong *)((long)puVar11 + -1);
    } while (!bVar3);
  }
LAB_1049323dc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1049323e0);
  (*pcVar9)();
}



/* Entry: 10492b9a8; end: 10492bd5b;  */

void FUN_10492b9a8(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_78,0,0);
  uVar2 = uRam0000000113815788;
  puVar1 = PTR__swift_isaMask_11034f488;
  pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_2) + 0x268);
  _swift_bridgeObjectRetain(uRam0000000113815788);
  (*pcVar4)(param_3,param_4,param_5,param_6,param_7,param_8,uVar2,1,param_9 & 1);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = uRam0000000113815788;
  pcVar4 = *(code **)((*(ulong *)puVar1 & *param_2) + 0x270);
  uVar3 = uRam0000000113815788;
  _swift_bridgeObjectRetain();
  (*pcVar4)();
  _swift_bridgeObjectRelease(uVar2);
  if ((uVar3 & 1) != 0) {
    FUN_10492bd5c();
  }
  FUN_104930c68();
  return;
}



/* Entry: 10492bd5c; end: 10492c3f3;  */

void FUN_10492bd5c(double param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  code *pcVar21;
  undefined8 unaff_x20;
  code *pcVar22;
  long lVar23;
  code *pcVar24;
  ulong *puVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [32];
  
  lVar18 = 0x11309c628;
  func_0x0001048db364();
  uVar15 = *(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puStack_110 = auStack_120 + -uVar15;
  lVar16 = (long)puStack_110 - uVar15;
  lVar3 = 0;
  lStack_f0 = lVar16;
  __s10Foundation4DateVMa();
  lVar17 = *(long *)(lVar3 + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar16 - uVar15;
  lVar23 = (lVar16 - uVar15) - uVar15;
  puVar4 = &UNK_1107b87e8;
  _swift_allocObject(&UNK_1107b87e8,0x18,7);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lRam000000011309d038;
  _swift_retain_n(puVar10,2);
  if (lVar14 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  lStack_e8 = lVar16 - uVar15;
  _swift_beginAccess(0x113815790,auStack_90,0,0);
  puVar1 = puRam0000000113815790;
  if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
    puVar19 = *(ulong **)(((ulong)puRam0000000113815790 & 0xfffffffffffff8) + 0x10);
  }
  else {
    puVar19 = (ulong *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
    if ((long)puRam0000000113815790 < 0) {
      puVar19 = puRam0000000113815790;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  lStack_118 = lVar16;
  lStack_100 = lVar23;
  lStack_f8 = lVar18;
  if (puVar19 == (ulong *)0x0) {
    lVar18 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((long)puVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10492c3c4);
      (*pcVar22)();
    }
    lStack_108 = lVar3;
    _swift_bridgeObjectRetain(puVar1);
    puVar11 = PTR__swift_isaMask_11034f488;
    puVar25 = (ulong *)0x0;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)puVar1 & 0xc000000000000001) == 0) {
        puVar6 = (ulong *)puVar1[(long)puVar25 + 4];
        _objc_retain();
      }
      else {
        puVar6 = puVar25;
        FUN_10491ac20(puVar25,puVar1);
      }
      puVar7 = puVar6;
      (**(code **)((*(ulong *)puVar11 & *puVar6) + 0x248))();
      if (((ulong)puVar7 & 1) == 0) {
        puVar7 = puVar6;
        FUN_10493186c();
        puVar8 = puVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar10;
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          func_0x0001014f1044(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
        }
        uVar15 = *(ulong *)(puVar9 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar15) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          func_0x0001014f1044(puVar10,uVar15 + 1,1,puVar9);
        }
        *(ulong *)(puVar10 + 0x10) = uVar15 + 1;
        *(ulong **)(puVar10 + uVar15 * 8 + 0x20) = puVar7;
        uVar20 = *(ulong *)(puVar4 + 0x10);
        puVar7 = puVar6;
        _objc_retain();
        uVar15 = uVar20;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)uVar15 == 0) || ((long)uVar20 < 0)) ||
           (uVar15 = uVar20, (uVar20 >> 0x3e & 1) != 0)) {
          if (uVar20 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar20 & 0xfffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar20 & 0xffffffffffffff8;
            if ((long)uVar20 < 0) {
              uVar5 = uVar20;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(uVar5);
          }
          uVar15 = 0;
          FUN_104915298(0,uVar5 + 1,1,uVar20);
          *(ulong *)(puVar4 + 0x10) = uVar15;
        }
        uVar5 = uVar15 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar5 + 0x10);
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar20) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_104915298(uVar5,uVar20 + 1,1,uVar15);
          *(ulong *)(puVar4 + 0x10) = uVar5;
          uVar5 = uVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar5 + 0x10) = uVar20 + 1;
        *(ulong **)(uVar5 + uVar20 * 8 + 0x20) = puVar7;
      }
      puVar25 = (ulong *)((long)puVar25 + 1);
      _objc_release(puVar6);
    } while (puVar19 != puVar25);
    _swift_bridgeObjectRelease(puVar1);
    lVar18 = *(long *)(puVar10 + 0x10);
    lVar3 = lStack_108;
  }
  if (lVar18 == 0) {
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(puVar10);
    return;
  }
  puVar11 = &UNK_1107b8810;
  _swift_allocObject(&UNK_1107b8810,0x28,7);
  *(undefined **)(puVar11 + 0x10) = puVar10;
  *(undefined8 *)(puVar11 + 0x18) = unaff_x20;
  *(undefined **)(puVar11 + 0x20) = puVar4;
  lVar18 = lRam000000011309d048;
  _swift_bridgeObjectRetain(puVar10);
  _swift_retain(puVar4);
  if (lVar18 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  lVar16 = lStack_f8;
  func_0x000100028790(lStack_f8,0x1138157b0);
  _swift_beginAccess();
  lVar14 = lStack_f0;
  FUN_104934c24(lVar16,lStack_f0,0x11309c628);
  pcVar22 = *(code **)(lVar17 + 0x30);
  lVar23 = lVar14;
  (*pcVar22)(lVar14,1,lVar3);
  lVar18 = lStack_100;
  if ((int)lVar23 == 1) {
    FUN_1049349e8(lVar14,0x11309c628);
    dVar26 = param_1;
  }
  else {
    pcVar24 = *(code **)(lVar17 + 0x20);
    (*pcVar24)(lStack_100,lVar14,lVar3);
    lVar14 = lStack_e8;
    __s10Foundation4DateVACycfC(lStack_e8);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar18);
    pcVar21 = *(code **)(lVar17 + 8);
    dVar26 = param_1;
    (*pcVar21)(lVar14,lVar3);
    (*pcVar21)(lVar18,lVar3);
    puVar2 = puStack_110;
    if (param_1 < 0.0) {
      FUN_104934c24(lVar16,puStack_110,0x11309c628);
      puVar12 = puVar2;
      (*pcVar22)(puVar2,1,lVar3);
      lVar18 = lStack_118;
      if ((int)puVar12 == 1) {
        FUN_1049349e8(puVar2,0x11309c628);
        dVar26 = 0.0;
      }
      else {
        (*pcVar24)(lStack_118,puVar2,lVar3);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        lVar14 = lStack_e8;
        dVar28 = dVar26;
        __s10Foundation4DateVACycfC(lStack_e8);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        (*pcVar21)(lVar14,lVar3);
        (*pcVar21)(lVar18,lVar3);
        dVar26 = dVar26 - dVar28;
      }
      dVar28 = dVar26;
      if (dVar26 <= 3.0) {
        dVar28 = 3.0;
      }
      if (lRam000000011309d028 != -1) {
        _swift_once(0x11309d028,FUN_1049288f4);
      }
      _swift_beginAccess(0x113815770,auStack_c0,0,0);
      uVar13 = uRam0000000113815770;
      _objc_retain(uRam0000000113815770);
      _swift_retain(puVar11);
      FUN_104931bc8(uVar13,dVar28,0,0x104932578,puVar11);
      _objc_release(uVar13);
      _swift_release(puVar11);
      goto LAB_10492c2bc;
    }
  }
  FUN_10492e820(puVar10,unaff_x20,puVar4);
LAB_10492c2bc:
  lVar14 = lVar16;
  (*pcVar22)(lVar16,1,lVar3);
  lVar18 = lStack_e8;
  if ((int)lVar14 == 0) {
    (**(code **)(lVar17 + 0x10))(lStack_e8,lVar16,lVar3);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar17 + 8))(lVar18,lVar3);
    _swift_bridgeObjectRelease(puVar10);
    dVar27 = 3.0;
    dVar28 = dVar26 + 3.0;
  }
  else {
    _swift_bridgeObjectRelease(puVar10);
    dVar28 = 3.0;
    lVar18 = lStack_e8;
    dVar27 = dVar26;
  }
  __s10Foundation4DateVACycfC(lVar18);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar17 + 8))(lVar18,lVar3);
  if (dVar28 < dVar27 + 3.0) {
    dVar28 = dVar27 + 3.0;
  }
  FUN_104932024(dVar28);
  _swift_release(puVar4);
  _swift_release(puVar11);
  return;
}



/* Entry: 10492c3f4; end: 10492c3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10492c3f4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_1c0 [272];
  undefined8 uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  ulong *apuStack_78 [3];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (ulong *)PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _swift_getInitializedObjCClass();
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_60,0,0);
  uVar8 = uRam0000000113815790;
  FUN_1049246d8(0);
  uVar6 = uVar8;
  _swift_bridgeObjectRetain();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar8);
  apuStack_78[0] = (ulong *)0x0;
  puVar10 = (ulong *)PTR_s_archivedDataWithRootObject_requi_11259ff88;
  _objc_msgSend(puVar5,PTR_s_archivedDataWithRootObject_requi_11259ff88,uVar6,0,apuStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar7 = apuStack_78[0];
  _objc_retain();
  if (puVar5 == (ulong *)0x0) {
    puVar9 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    puVar5 = puVar9;
    _swift_errorRelease();
    puStack_a8 = puVar9;
  }
  else {
    puVar9 = puVar5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar5);
    _swift_beginAccess(0x113815778,apuStack_78,0,0);
    puVar4 = puRam0000000113815780;
    uVar8 = uRam0000000113815778;
    if (puRam0000000113815780 != (ulong *)0x0) {
      _swift_bridgeObjectRetain(puRam0000000113815780);
      puVar5 = puVar9;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar9,puVar10);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,puVar4);
      _swift_bridgeObjectRelease(puVar4);
      _objc_msgSend(puVar5,PTR_s_writeToFile_atomically__11268d368,uVar8,1);
      _objc_release(puVar5);
      _objc_release(uVar8);
      uVar6 = uVar8;
    }
    puVar5 = puVar9;
    func_0x00010006c090(puVar9,puVar10);
    puVar7 = puVar10;
    puStack_a8 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar11 = auStack_1c0;
  pcStack_88 = FUN_104930e54;
  puVar10 = (ulong *)0x11309c610;
  uStack_b0 = uVar6;
  puStack_a0 = puVar9;
  puStack_98 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001048db364();
  _swift_initStackObject();
  puVar10[3] = 10;
  puVar10[2] = 5;
  puVar10[4] = 0x6e676961706d6163;
  puVar10[5] = 0xeb0000000064695f;
  puVar7 = puVar10;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0xe0))();
  puVar2 = PTR___sSSN_11034da80;
  puVar10[6] = (ulong)puVar7;
  puVar10[7] = (ulong)puVar11;
  puVar10[9] = (ulong)puVar2;
  puVar10[10] = 0x69737265766e6f63;
  puVar3 = PTR___sSiN_11034deb0;
  puVar10[0xb] = 0xef617461645f6e6f;
  puVar10[0xc] = 0;
  puVar10[0xf] = (ulong)puVar3;
  puVar10[0x10] = 0xd000000000000010;
  puVar10[0x11] = 0x800000010f21d350;
  puVar10[0x12] = 0;
  puVar10[0x15] = (ulong)puVar3;
  puVar10[0x16] = 0x6e656b6f74;
  puVar10[0x17] = 0xe500000000000000;
  uVar1 = ((ulong *)((long)puVar5 + _DAT_11309d810))[1];
  puVar10[0x18] = *(ulong *)((long)puVar5 + _DAT_11309d810);
  puVar10[0x19] = uVar1;
  puVar10[0x1b] = (ulong)puVar2;
  puVar10[0x1c] = 0x6c665f79616c6564;
  puVar10[0x21] = (ulong)puVar2;
  puVar10[0x1d] = 0xea0000000000776f;
  puVar10[0x1e] = 0x726576726573;
  puVar10[0x1f] = 0xe600000000000000;
  _swift_bridgeObjectRetain();
  puVar5 = puVar10;
  func_0x000100214a84(puVar10);
  _swift_setDeallocating(puVar10);
  uVar8 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar10 + 4,5,uVar8);
  return puVar5;
}



/* Entry: 10492c3fc; end: 10492c553; +[FBAEMReporter attributedInvocation:event:currency:value:parameters:configurations:] */

void FUN_10492c3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  FUN_1049246d8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  if (param_7 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  uVar2 = 0x11309d950;
  func_0x0001048db364(0x11309d950);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_8,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  uVar2 = param_6;
  _objc_retain(param_6);
  uVar3 = param_3;
  FUN_1049321e4(param_3,param_4,uVar1,param_5,uVar4,param_6,param_7,param_8);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_8);
  _swift_bridgeObjectRelease(param_7);
  _swift_bridgeObjectRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10492c554; end: 10492c55f; +[FBAEMReporter isDoubleCounting:event:] */

uint FUN_10492c554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104932584();
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10492c560; end: 10492c633;  */

void FUN_10492c560(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_48,0x21,0);
  FUN_10492f2b4();
  uVar3 = uRam0000000113815790 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  uVar2 = uRam0000000113815790;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_104915298(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_2;
  uRam0000000113815790 = uVar2;
  _swift_endAccess(auStack_48);
  _objc_retain(param_2);
  FUN_104930c68();
  return;
}



/* Entry: 10492c634; end: 10492ca43;  */

void FUN_10492c634(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  
  lVar12 = lRam000000011309d050;
  if (param_1 != 0) {
    _swift_retain(param_2);
    if (lVar12 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    puVar4 = &UNK_1107b8c18;
    _swift_allocObject(&UNK_1107b8c18,0x20,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    _swift_beginAccess(0x1138157c8,&puStack_d8,0x21,0);
    puVar11 = puRam00000001138157c8;
    _swift_retain(param_2);
    puVar5 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar10 = puVar11;
    if (((ulong)puVar5 & 1) == 0) {
      puVar10 = (undefined *)0x0;
      puRam00000001138157c8 = puVar11;
      func_0x0001049153d0(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
    }
    uVar6 = *(ulong *)(puVar10 + 0x10);
    puVar11 = puVar10;
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      puRam00000001138157c8 = puVar10;
      func_0x0001049153d0(puVar11,uVar6 + 1,1,puVar10);
    }
    *(ulong *)(puVar11 + 0x10) = uVar6 + 1;
    *(code **)(puVar11 + uVar6 * 0x10 + 0x20) = FUN_104934bec;
    *(undefined **)(puVar11 + uVar6 * 0x10 + 0x28) = puVar4;
    puRam00000001138157c8 = puVar11;
    _swift_endAccess(&puStack_d8);
    func_0x000100dc2b4c(param_1,param_2);
  }
  uVar6 = (ulong)(param_4 & 1);
  FUN_104930594();
  if ((uVar6 & 1) == 0) {
    if (lRam000000011309d050 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    _swift_beginAccess(0x1138157c8,&puStack_d8,1,0);
    puVar4 = puRam00000001138157c8;
    lVar12 = *(long *)(puRam00000001138157c8 + 0x10);
    if (lVar12 != 0) {
      _swift_bridgeObjectRetain(puRam00000001138157c8);
      puVar13 = (undefined8 *)(puVar4 + 0x28);
      do {
        pcVar2 = (code *)puVar13[-1];
        uVar8 = *puVar13;
        auStack_78[0] = 0;
        _swift_retain(uVar8);
        (*pcVar2)(auStack_78);
        _swift_release(uVar8);
        puVar13 = puVar13 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = puRam00000001138157c8;
    }
    puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    _swift_beginAccess(0x113815769,auStack_78,1,0);
    if ((bRam0000000113815769 & 1) == 0) {
      bRam0000000113815769 = 1;
      _swift_beginAccess(0x113815730,auStack_90,0,0);
      lVar12 = lRam0000000113815730;
      if (lRam0000000113815730 != 0) {
        puStack_d8 = (undefined *)0x0;
        uStack_d0 = 0xe000000000000000;
        _swift_beginAccess(0x113815738,auStack_a8,0,0);
        lVar3 = lRam0000000113815740;
        uVar8 = 0x296c6c756e28;
        if (lRam0000000113815740 != 0) {
          uVar8 = uRam0000000113815738;
        }
        lVar1 = -0x1a00000000000000;
        if (lRam0000000113815740 != 0) {
          lVar1 = lRam0000000113815740;
        }
        _swift_unknownObjectRetain(lVar12);
        _swift_bridgeObjectRetain(lVar3);
        __sSS6appendyySSF(uVar8,lVar1);
        _swift_bridgeObjectRelease(lVar1);
        __sSS6appendyySSF(0x2f,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000016,0x800000010f21d400);
        uVar8 = uStack_d0;
        puVar11 = puStack_d8;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d8,uStack_d0);
        _swift_bridgeObjectRelease(uVar8);
        FUN_1049308b4();
        uVar7 = uVar8;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
        _swift_bridgeObjectRelease(uVar8);
        uVar8 = 0x544547;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544547,0xe300000000000000);
        puVar4 = &UNK_1107b8bc8;
        _swift_allocObject(&UNK_1107b8bc8,0x18,7);
        *(undefined8 *)(puVar4 + 0x10) = param_3;
        pcStack_b8 = FUN_104934be4;
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_101201f78;
        puStack_c0 = &UNK_1107b8be0;
        ppuVar9 = &puStack_d8;
        puStack_b0 = puVar4;
        __Block_copy(ppuVar9);
        _swift_release(puStack_b0);
        _objc_msgSend(lVar12,PTR_s_startGraphRequestWithGraphPath_p_112525210,puVar11,uVar7,0,uVar8,
                      ppuVar9);
        _swift_unknownObjectRelease(lVar12);
        __Block_release(ppuVar9);
        _objc_release(puVar11);
        _objc_release(uVar7);
        _objc_release(uVar8);
      }
    }
  }
  return;
}



/* Entry: 10492ca44; end: 10492ca4b;  */

bool FUN_10492ca44(double param_1,ulong param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [48];
  ulong auStack_88 [3];
  
  lVar6 = 0x11309c628;
  func_0x0001048db364();
  puVar13 = auStack_e0 + -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lStack_c8 = *(long *)(lVar7 + -8);
  uVar12 = *(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_d0 = (long)puVar13 - uVar12;
  lStack_d8 = lStack_d0 - uVar12;
  if ((param_2 & 1) == 0) {
    if (lRam000000011309d038 != -1) {
      _swift_once(0x11309d038,FUN_1049292fc);
    }
    puVar10 = auStack_88;
    _swift_beginAccess(0x113815790,puVar10,0,0);
    puVar2 = puRam0000000113815790;
    puVar14 = (ulong *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
    lStack_c0 = lVar7;
    if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
      puVar15 = (ulong *)puVar14[2];
    }
    else {
      puVar15 = puVar14;
      if ((long)puRam0000000113815790 < 0) {
        puVar15 = puRam0000000113815790;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar2);
    puVar1 = PTR__swift_isaMask_11034f488;
    puVar16 = (ulong *)0x0;
    do {
      if (puVar15 == puVar16) {
        _swift_bridgeObjectRelease(puVar2);
        if (lRam000000011309d040 != -1) {
          _swift_once(0x11309d040,FUN_104929514);
        }
        func_0x000100028790(lVar6,0x113815798);
        _swift_beginAccess();
        FUN_104934c24(lVar6,puVar13,0x11309c628);
        lVar4 = lStack_c0;
        lVar7 = lStack_c8;
        puVar9 = puVar13;
        (**(code **)(lStack_c8 + 0x30))(puVar13,1,lStack_c0);
        lVar6 = lStack_d8;
        if ((int)puVar9 != 1) {
          (**(code **)(lVar7 + 0x20))(lStack_d8,puVar13,lVar4);
          lVar3 = lStack_d0;
          __s10Foundation4DateVACycfC(lStack_d0);
          __s10Foundation4DateV17timeIntervalSinceySdACF(lVar6);
          pcVar5 = *(code **)(lVar7 + 8);
          (*pcVar5)(lVar3,lVar4);
          (*pcVar5)(lVar6,lVar4);
          if (86400.0 <= param_1) {
            return true;
          }
          if (lRam000000011309d030 != -1) {
            _swift_once(0x11309d030,FUN_104929090);
          }
          _swift_beginAccess(0x113815788,auStack_b8,0,0);
          return *(long *)(lRam0000000113815788 + 0x10) == 0;
        }
        FUN_1049349e8(puVar13,0x11309c628);
        return true;
      }
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if ((ulong *)puVar14[2] <= puVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104930858);
          (*pcVar5)();
        }
        puVar8 = (ulong *)puVar2[(long)puVar16 + 4];
        _objc_retain();
        puVar11 = puVar10;
      }
      else {
        puVar8 = puVar16;
        puVar11 = puVar2;
        FUN_10491ac20();
      }
      if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104930854);
        (*pcVar5)();
      }
      (**(code **)((*(ulong *)puVar1 & *puVar8) + 0x128))();
      puVar10 = puVar11;
      _objc_release(puVar8);
      puVar16 = (ulong *)((long)puVar16 + 1);
    } while (puVar11 == (ulong *)0x0);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(puVar11);
  }
  return true;
}



/* Entry: 10492ca4c; end: 10492cd93;  */

void FUN_10492ca4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar2 + -8);
  lVar11 = (long)&lStack_110 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_108 = *(long *)(lVar3 + -8);
  lVar12 = lVar11 - (*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar3;
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_80,0,0);
  uVar5 = uRam0000000113815770;
  FUN_104934c24(param_1,&uStack_a0,0x11309c428);
  FUN_104934c24(&uStack_a0,auStack_c0,0x11309c428);
  puVar4 = &UNK_1107b8c40;
  lVar3 = 0x40;
  _swift_allocObject(&UNK_1107b8c40,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = uStack_98;
  *(undefined8 *)(puVar4 + 0x20) = uStack_a0;
  *(undefined8 *)(puVar4 + 0x38) = uStack_88;
  *(undefined8 *)(puVar4 + 0x30) = uStack_90;
  _swift_errorRetain(param_2);
  _swift_errorRetain(param_2);
  _objc_retain(uVar5);
  puVar6 = puVar4;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  if ((puVar6 == (undefined *)0xd000000000000028) && (lVar3 == -0x7ffffffef0de2fb0)) {
    _swift_bridgeObjectRelease(0x800000010f21d050);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(lVar3);
    if (((ulong)puVar6 & 1) == 0) {
      FUN_104932fe0(param_2,auStack_c0);
      _objc_release(uVar5);
      _swift_release_n(puVar4,2);
      _swift_errorRelease(param_2);
      FUN_1049349e8(auStack_c0,0x11309c428);
      return;
    }
  }
  pcStack_d0 = FUN_104934c10;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000b0c7c;
  puStack_d8 = &UNK_1107b8c58;
  ppuVar7 = &puStack_f0;
  puStack_c8 = puVar4;
  __Block_copy(ppuVar7);
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  lStack_110 = lVar13;
  func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar6);
  uVar9 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar10 = 0x112d4af98;
  func_0x000104931470(0x112d4af98,0x11309c6f8,puVar1,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar11,&puStack_f8,uVar9,uVar10,lVar2,uVar8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,lVar11,ppuVar7);
  __Block_release(ppuVar7);
  _objc_release(uVar5);
  _swift_release_n(puVar4,2);
  _swift_errorRelease(param_2);
  FUN_1049349e8(auStack_c0,0x11309c428);
  (**(code **)(lStack_110 + 8))(lVar11,lVar2);
  (**(code **)(lStack_108 + 8))(lVar12,lStack_100);
  _swift_release(puStack_c8);
  return;
}



/* Entry: 10492cd94; end: 10492cd97;  */

void FUN_10492cd94(undefined *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar5;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  undefined8 unaff_x23;
  undefined8 *puVar7;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined **)(puVar1 + -0x28) = unaff_x21;
    *(undefined **)(puVar1 + -0x20) = unaff_x20;
    *(undefined **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
      return;
    }
    uVar4 = 0;
    func_0x00010491bee4(0);
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar5 = *puVar7;
      _objc_allocWithZone(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      FUN_104918ebc();
      FUN_104932664();
      _objc_release(uVar5);
      lVar6 = lVar6 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
    unaff_x24 = *(undefined8 *)(puVar1 + -0x40);
    unaff_x23 = *(undefined8 *)(puVar1 + -0x38);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    _swift_getInitializedObjCClass();
    if (lRam000000011309d030 != -1) {
      _swift_once(0x11309d030,FUN_104929090);
    }
    _swift_beginAccess(0x113815788,puVar1 + -0x50,0,0);
    uVar5 = uRam0000000113815788;
    _swift_bridgeObjectRetain(uRam0000000113815788);
    uVar4 = 0x11309d950;
    func_0x0001048db364(0x11309d950);
    uVar3 = uVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar5,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar5);
    *(undefined8 *)(puVar1 + -0x58) = 0;
    unaff_x21 = PTR_s_archivedDataWithRootObject_requi_11259ff88;
    _objc_msgSend(puVar2,PTR_s_archivedDataWithRootObject_requi_11259ff88,uVar3,0,puVar1 + -0x58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    unaff_x19 = *(undefined **)(puVar1 + -0x58);
    _objc_retain();
    if (puVar2 == (undefined *)0x0) {
      unaff_x20 = unaff_x19;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(unaff_x19);
      _swift_willThrow();
      param_1 = unaff_x20;
      _swift_errorRelease();
      unaff_x21 = unaff_x20;
    }
    else {
      unaff_x20 = puVar2;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar2);
      param_1 = unaff_x20;
      func_0x00010006c090(unaff_x20,unaff_x21);
      unaff_x19 = puVar2;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x38)) break;
    unaff_x30 = FUN_104932f54;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0x60;
  }
  return;
}



/* Entry: 10492cd98; end: 10492ce1f; +[FBAEMReporter loadConfigurationWithRefreshForced:block:] */

void FUN_10492cd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    lVar2 = 0;
  }
  else {
    puVar1 = &UNK_1107b8970;
    _swift_allocObject(&UNK_1107b8970,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    lVar2 = 0x10493496c;
  }
  _swift_getObjCClassMetadata(param_1);
  FUN_10492a14c(param_3,lVar2,puVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10492ce20; end: 10492ce23;  */

long FUN_10492ce20(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = 0x11309d990;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x65746e6f635f6266;
  *(undefined8 *)(lVar1 + 0x28) = 0xee007364695f746e;
  puVar4 = PTR___sSSN_11034da80;
  lVar2 = param_4;
  if (param_4 == 0) {
    param_3 = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    puVar4 = (undefined *)0x0;
    lVar2 = 0;
  }
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(long *)(lVar1 + 0x38) = lVar2;
  *(undefined **)(lVar1 + 0x48) = puVar4;
  *(undefined8 *)(lVar1 + 0x50) = 0x5f676f6c61746163;
  *(undefined8 *)(lVar1 + 0x58) = 0xea00000000006469;
  puVar4 = PTR___sSSN_11034da80;
  lVar2 = param_2;
  if (param_2 == 0) {
    param_1 = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    puVar4 = (undefined *)0x0;
    lVar2 = 0;
  }
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined **)(lVar1 + 0x78) = puVar4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  lVar2 = lVar1;
  func_0x000102bcb3b0(lVar1);
  _swift_setDeallocating(lVar1);
  uVar3 = 0x11309d670;
  func_0x0001048db364(0x11309d670);
  _swift_arrayDestroy((undefined8 *)(lVar1 + 0x20),2,uVar3);
  lVar1 = lVar2;
  FUN_10492df18(lVar2);
  _swift_bridgeObjectRelease(lVar2);
  return lVar1;
}



/* Entry: 10492ce24; end: 10492d1af;  */

void FUN_10492ce24(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_108 = *(long *)(lVar2 + -8);
  puVar12 = auStack_120 + -(*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_100 = lVar2;
  __s8Dispatch0A3QoSVMa();
  lStack_118 = *(long *)(lVar3 + -8);
  lVar2 = (long)puVar12 - (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar3;
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_80,0,0);
  uVar5 = uRam0000000113815770;
  FUN_104934c24(param_1,&uStack_a0,0x11309c428);
  FUN_104934c24(&uStack_a0,auStack_c0,0x11309c428);
  puVar4 = &UNK_1107b8a88;
  lVar3 = 0x50;
  _swift_allocObject(&UNK_1107b8a88,0x50,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = uStack_98;
  *(undefined8 *)(puVar4 + 0x20) = uStack_a0;
  *(undefined8 *)(puVar4 + 0x38) = uStack_88;
  *(undefined8 *)(puVar4 + 0x30) = uStack_90;
  *(code **)(puVar4 + 0x40) = param_4;
  *(undefined **)(puVar4 + 0x48) = param_5;
  _swift_errorRetain(param_2);
  _swift_retain(param_5);
  _swift_errorRetain(param_2);
  _swift_retain(param_5);
  _objc_retain(uVar5);
  puVar6 = puVar4;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  if ((puVar6 == (undefined *)0xd000000000000028) && (lVar3 == -0x7ffffffef0de2fb0)) {
    _swift_bridgeObjectRelease(0x800000010f21d050);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(lVar3);
    if (((ulong)puVar6 & 1) == 0) {
      if (param_2 == 0) {
        uVar11 = 0;
        FUN_104933424();
        if ((uVar11 & 1) != 0) {
          (*param_4)();
        }
      }
      _objc_release(uVar5);
      _swift_release_n(puVar4,2);
      _swift_errorRelease(param_2);
      FUN_1049349e8(auStack_c0,0x11309c428);
      goto LAB_10492d174;
    }
  }
  pcStack_d0 = FUN_104934a24;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000b0c7c;
  puStack_d8 = &UNK_1107b8aa0;
  ppuVar7 = &puStack_f0;
  puStack_c8 = puVar4;
  __Block_copy(ppuVar7);
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar6);
  uVar9 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar10 = 0x112d4af98;
  func_0x000104931470(0x112d4af98,0x11309c6f8,puVar1,PTR___sSayxGSTsMc_11034dd08);
  lVar3 = lStack_100;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar12,&puStack_f8,uVar9,uVar10,lStack_100,uVar8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,puVar12,ppuVar7);
  __Block_release(ppuVar7);
  _objc_release(uVar5);
  _swift_release_n(puVar4,2);
  _swift_errorRelease(param_2);
  FUN_1049349e8(auStack_c0,0x11309c428);
  _swift_release(param_5);
  (**(code **)(lStack_108 + 8))(puVar12,lVar3);
  (**(code **)(lStack_118 + 8))(lVar2,lStack_110);
  param_5 = puStack_c8;
LAB_10492d174:
  _swift_release(param_5);
  return;
}



/* Entry: 10492d1b0; end: 10492d1b3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10492d1b0(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long alStack_58 [5];
  
  FUN_104934c24(param_1,alStack_58 + 1,0x11309c428);
  if (alStack_58[4] == 0) {
    FUN_1049349e8(alStack_58 + 1,0x11309c428);
LAB_1049334d8:
    alStack_58[2] = 0;
    alStack_58[1] = 0;
    alStack_58[4] = 0;
    alStack_58[3] = 0;
LAB_1049334e0:
    FUN_1049349e8(alStack_58 + 1,0x11309c428);
LAB_1049334f0:
    alStack_58[2] = 0;
    alStack_58[1] = 0;
    alStack_58[4] = 0;
    alStack_58[3] = 0;
LAB_1049334f8:
    FUN_1049349e8(alStack_58 + 1,0x11309c428);
  }
  else {
    uVar5 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar1 = PTR___sypN_11034f1a8;
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,PTR___sypN_11034f1a8 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if ((((ulong)plVar2 & 1) == 0) || (alStack_58[0] == 0)) goto LAB_1049334d8;
    if (*(long *)(alStack_58[0] + 0x10) == 0) {
LAB_10493356c:
      alStack_58[2] = 0;
      alStack_58[1] = 0;
      alStack_58[4] = 0;
      alStack_58[3] = 0;
    }
    else {
      _swift_bridgeObjectRetain(alStack_58[0]);
      lVar3 = 0x61746164;
      uVar6 = 0;
      func_0x000100029284(0x61746164);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_10493356c;
      }
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar3 * 0x20,alStack_58 + 1);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (alStack_58[4] == 0) goto LAB_1049334e0;
    uVar5 = 0x11309d6d0;
    func_0x0001048db364(0x11309d6d0);
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,puVar1 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if ((((ulong)plVar2 & 1) == 0) || (alStack_58[0] == 0)) goto LAB_1049334f0;
    if (*(long *)(alStack_58[0] + 0x10) == 0) {
      _swift_bridgeObjectRelease(alStack_58[0]);
      goto LAB_1049334f0;
    }
    func_0x0001000bb420(alStack_58[0] + 0x20,alStack_58 + 1);
    _swift_bridgeObjectRelease(lVar4);
    uVar5 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,puVar1 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if ((((ulong)plVar2 & 1) == 0) || (alStack_58[0] == 0)) goto LAB_1049334f0;
    if (*(long *)(alStack_58[0] + 0x10) == 0) {
LAB_104933660:
      alStack_58[2] = 0;
      alStack_58[1] = 0;
      alStack_58[4] = 0;
      alStack_58[3] = 0;
    }
    else {
      _swift_bridgeObjectRetain(alStack_58[0]);
      uVar6 = 0;
      lVar3 = -0x2fffffffffffffe0;
      func_0x000100029284(0xd000000000000020);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_104933660;
      }
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar3 * 0x20,alStack_58 + 1);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (alStack_58[4] == 0) goto LAB_1049334f8;
    uVar5 = 0;
    func_0x000104934c68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,puVar1 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if (((ulong)plVar2 & 1) != 0) goto LAB_104933530;
  }
  func_0x000104934c68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar4 = 0;
  __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(0);
LAB_104933530:
  lVar3 = lVar4;
  _objc_msgSend(lVar4,PTR_s_boolValue_1125a5698);
  _objc_release(lVar4);
  return lVar3;
}



/* Entry: 10492d1b4; end: 10492d273; +[FBAEMReporter loadCatalogOptimizationWith:contentID:block:] */

void FUN_10492d1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  __Block_copy();
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  puVar1 = &UNK_1107b8948;
  _swift_allocObject(&UNK_1107b8948,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  _swift_getObjCClassMetadata(param_1);
  _objc_retain(param_3);
  func_0x00010492bae8();
  _objc_release(param_3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10492d274; end: 10492d277;  */

long FUN_10492d274(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126add58;
  _swift_getInitializedObjCClass();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  auStack_d0[0] = 0;
  puVar7 = PTR_s_JSONStringForObject_error_invali_11254e010;
  _objc_msgSend(puVar1,PTR_s_JSONStringForObject_error_invali_11254e010,param_1,auStack_d0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = auStack_d0[0];
  if (puVar1 == (undefined *)0x0) {
    uVar2 = auStack_d0[0];
    _objc_retain(auStack_d0[0]);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar3);
    _objc_release(uVar2);
    _swift_willThrow();
    _swift_errorRelease(uVar3);
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_retain(uVar3);
    _objc_release(puVar1);
  }
  lVar4 = 0x11309d990;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  *(undefined8 *)(lVar4 + 0x20) = 0x7369747265766461;
  *(undefined8 *)(lVar4 + 0x28) = 0xee007364695f7265;
  puVar1 = PTR___sSSN_11034da80;
  if (puVar7 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    puVar1 = (undefined *)0x0;
  }
  *(undefined **)(lVar4 + 0x30) = puVar6;
  *(undefined **)(lVar4 + 0x38) = puVar7;
  *(undefined **)(lVar4 + 0x48) = puVar1;
  *(undefined8 *)(lVar4 + 0x50) = 0x65746e6f635f6266;
  *(undefined8 *)(lVar4 + 0x58) = 0xef617461645f746e;
  puVar1 = PTR___sSSN_11034da80;
  lVar5 = param_3;
  if (param_3 == 0) {
    param_2 = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    puVar1 = (undefined *)0x0;
    lVar5 = 0;
  }
  *(undefined8 *)(lVar4 + 0x60) = param_2;
  *(long *)(lVar4 + 0x68) = lVar5;
  *(undefined **)(lVar4 + 0x78) = puVar1;
  _swift_bridgeObjectRetain(param_3);
  lVar5 = lVar4;
  func_0x000102bcb3b0(lVar4);
  _swift_setDeallocating(lVar4);
  uVar3 = 0x11309d670;
  func_0x0001048db364(0x11309d670);
  _swift_arrayDestroy((undefined8 *)(lVar4 + 0x20),2,uVar3);
  lVar4 = lVar5;
  FUN_10492df18(lVar5);
  _swift_bridgeObjectRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10492d278();
    return lVar5;
  }
  return lVar4;
}



/* Entry: 10492d278; end: 10492dccf;  */

void FUN_10492d278(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_b8;
  ulong uStack_a8;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((param_2 != 0) || (*(long *)(param_1 + 0x18) == 0)) {
    return;
  }
  FUN_104934c24(param_1,&uStack_80,0x11309c428);
  if (lStack_68 == 0) goto LAB_10492d56c;
  uVar4 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  puVar5 = PTR___sypN_11034f1a8;
  puVar1 = &uStack_98;
  _swift_dynamicCast(puVar1,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
  uVar7 = uStack_98;
  if (((ulong)puVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(uStack_98 + 0x10) == 0) {
LAB_10492d358:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uStack_98);
    lVar2 = 0x61746164;
    uVar8 = 0;
    func_0x000100029284(0x61746164);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_10492d358;
    }
    func_0x0001000bb420(*(long *)(uVar7 + 0x38) + lVar2 * 0x20,&uStack_80);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_bridgeObjectRelease(uVar7);
  if (lStack_68 == 0) {
LAB_10492d56c:
    FUN_1049349e8(&uStack_80,0x11309c428);
    return;
  }
  uVar3 = 0x11309d6d0;
  func_0x0001048db364(0x11309d6d0);
  puVar1 = &uStack_98;
  _swift_dynamicCast(puVar1,&uStack_80,puVar5 + 8,uVar3,6);
  uVar7 = uStack_98;
  if (((ulong)puVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(uStack_98 + 0x10) == 0) goto LAB_10492d67c;
  func_0x0001000bb420(uStack_98 + 0x20,&uStack_80);
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = &uStack_98;
  _swift_dynamicCast(puVar1,&uStack_80,puVar5 + 8,uVar4,6);
  uVar7 = uStack_98;
  if (((ulong)puVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(uStack_98 + 0x10) == 0) goto LAB_10492d67c;
  _swift_bridgeObjectRetain(uStack_98);
  lVar2 = 0x73736563637573;
  uVar8 = 0;
  func_0x000100029284(0x73736563637573);
  if ((uVar8 & 1) == 0) {
LAB_10492d674:
    _swift_bridgeObjectRelease(uVar7);
    goto LAB_10492d67c;
  }
  func_0x0001000bb420(*(long *)(uVar7 + 0x38) + lVar2 * 0x20,&uStack_80);
  _swift_bridgeObjectRelease(uVar7);
  uVar4 = 0;
  func_0x000104934c68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar1 = &uStack_98;
  _swift_dynamicCast(puVar1,&uStack_80,puVar5 + 8,uVar4,6);
  uVar8 = uStack_98;
  if (((ulong)puVar1 & 1) == 0) goto LAB_10492d67c;
  uVar9 = uStack_98;
  _objc_msgSend(uStack_98,PTR_s_boolValue_1125a5698);
  if ((int)uVar9 == 0) {
    _swift_bridgeObjectRelease(uVar7);
    if (lRam000000011309d028 != -1) {
      _swift_once(0x11309d028,FUN_1049288f4);
    }
    _swift_beginAccess(0x113815770,&uStack_80,0,0);
    uVar4 = uRam0000000113815770;
    puVar5 = &UNK_1107b8ad8;
    _swift_allocObject(&UNK_1107b8ad8,0x48,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_7;
    *(undefined8 *)(puVar5 + 0x20) = param_8;
    *(undefined8 *)(puVar5 + 0x28) = param_4;
    *(undefined8 *)(puVar5 + 0x30) = param_5;
    *(undefined8 *)(puVar5 + 0x38) = param_6;
    *(undefined8 *)(puVar5 + 0x40) = param_9;
    _swift_bridgeObjectRetain();
    _objc_retain(uVar4);
    _swift_bridgeObjectRetain(param_5);
    _objc_retain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_104931bc8(uVar4,0,1,FUN_104934a98,puVar5);
  }
  else {
    if (*(long *)(uVar7 + 0x10) == 0) {
LAB_10492d660:
      _objc_release(uVar8);
LAB_10492d67c:
      _swift_bridgeObjectRelease(uVar7);
      return;
    }
    _swift_bridgeObjectRetain(uVar7);
    lVar2 = 0x64696c61765f7369;
    uVar9 = 0xee00686374616d5f;
    func_0x000100029284(0x64696c61765f7369);
    if ((uVar9 & 1) == 0) {
      _objc_release(uVar8);
      goto LAB_10492d674;
    }
    func_0x0001000bb420(*(long *)(uVar7 + 0x38) + lVar2 * 0x20,&uStack_80);
    _swift_bridgeObjectRelease(uVar7);
    puVar1 = &uStack_98;
    _swift_dynamicCast(puVar1,&uStack_80,puVar5 + 8,uVar4,6);
    uVar9 = uStack_98;
    if (((ulong)puVar1 & 1) == 0) goto LAB_10492d660;
    if (*(long *)(uVar7 + 0x10) == 0) {
LAB_10492d690:
      uStack_b8 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uVar7);
      lVar2 = -0x2fffffffffffffeb;
      uVar6 = 0;
      func_0x000100029284(0xd000000000000015);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar7);
        goto LAB_10492d690;
      }
      func_0x0001000bb420(*(long *)(uVar7 + 0x38) + lVar2 * 0x20,&uStack_80);
      _swift_bridgeObjectRelease(uVar7);
      puVar1 = &uStack_98;
      _swift_dynamicCast(puVar1,&uStack_80,puVar5 + 8,PTR___sSSN_11034da80,6);
      uStack_b8 = uStack_90;
      if ((int)puVar1 == 0) {
        uStack_b8 = 0;
      }
    }
    if (*(long *)(uVar7 + 0x10) == 0) {
LAB_10492d6e8:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uVar7);
      uVar6 = 0;
      lVar2 = -0x2ffffffffffffff0;
      func_0x000100029284(0xd000000000000010);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar7);
        goto LAB_10492d6e8;
      }
      func_0x0001000bb420(*(long *)(uVar7 + 0x38) + lVar2 * 0x20,&uStack_80);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_bridgeObjectRelease(uVar7);
    if (lStack_68 == 0) {
      FUN_1049349e8(&uStack_80,0x11309c428);
      uStack_a8 = 0;
    }
    else {
      puVar1 = &uStack_98;
      _swift_dynamicCast(puVar1,&uStack_80,puVar5 + 8,uVar4,6);
      uStack_a8 = uStack_98;
      if ((int)puVar1 == 0) {
        uStack_a8 = 0;
      }
    }
    if (lRam000000011309d060 != -1) {
      _swift_once(0x11309d060,FUN_104936ee0);
    }
    if (lRam000000011309d038 != -1) {
      _swift_once(0x11309d038,FUN_1049292fc);
    }
    _swift_beginAccess(0x113815790,&uStack_80,0,0);
    uVar7 = uRam0000000113815790;
    uVar6 = uRam0000000113815790;
    _swift_bridgeObjectRetain();
    FUN_104937d04();
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uStack_b8);
    uVar7 = uVar9;
    _objc_msgSend(uVar9,PTR_s_boolValue_1125a5698);
    lVar2 = lRam000000011309d028;
    if ((uVar7 & 1) == 0) {
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uStack_a8);
      goto LAB_10492d658;
    }
    if (uVar6 == 0) {
      _objc_release(uVar9);
      _objc_release(uVar8);
      uVar6 = uStack_a8;
      goto LAB_10492d658;
    }
    _objc_retain();
    if (lVar2 != -1) {
      _swift_once(0x11309d028,FUN_1049288f4);
    }
    _swift_beginAccess(0x113815770,&uStack_98,0,0);
    uVar4 = uRam0000000113815770;
    puVar5 = &UNK_1107b8b00;
    _swift_allocObject(&UNK_1107b8b00,0x58,7);
    *(undefined8 *)(puVar5 + 0x10) = param_4;
    *(undefined8 *)(puVar5 + 0x18) = param_5;
    *(undefined8 *)(puVar5 + 0x20) = param_6;
    *(ulong *)(puVar5 + 0x28) = uVar6;
    *(ulong *)(puVar5 + 0x30) = uStack_a8;
    *(undefined8 *)(puVar5 + 0x38) = param_3;
    *(undefined8 *)(puVar5 + 0x40) = param_7;
    *(undefined8 *)(puVar5 + 0x48) = param_8;
    *(undefined8 *)(puVar5 + 0x50) = param_9;
    _swift_bridgeObjectRetain();
    _objc_retain(uVar6);
    _objc_retain(uVar4);
    _swift_bridgeObjectRetain(param_5);
    _objc_retain(param_6);
    _objc_retain(uStack_a8);
    _swift_bridgeObjectRetain(param_8);
    FUN_104931bc8(uVar4,0,1,FUN_104934ac8,puVar5);
    _objc_release(uVar9);
    _objc_release(uStack_a8);
    _objc_release(uVar6);
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  _swift_release(puVar5);
  uVar6 = uVar8;
LAB_10492d658:
  _objc_release(uVar6);
  return;
}



/* Entry: 10492dcd0; end: 10492dde7; +[FBAEMReporter loadRuleMatch:event:currency:value:parameters:] */

void FUN_10492dcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  if (param_7 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  _swift_getObjCClassMetadata(param_1);
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x00010492b014(param_3,param_4,puVar2,param_5,puVar3,param_6,param_7);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
  return;
}



/* Entry: 10492dde8; end: 10492ddf3; +[FBAEMReporter shouldReportConversionInCatalogLevel:event:] */

uint FUN_10492dde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104932430();
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10492ddf4; end: 10492de5b;  */

uint FUN_10492ddf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  (*param_5)();
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10492de5c; end: 10492dec7; +[FBAEMReporter isContentOptimized:] */

uint FUN_10492de5c(undefined8 param_1,undefined8 param_2,long param_3)

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
  }
  else {
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104933424(&uStack_40);
  FUN_1049349e8(&uStack_40,0x11309c428);
  return uVar1 & 1;
}



/* Entry: 10492dec8; end: 10492df17; +[FBAEMReporter requestParameters] */

void FUN_10492dec8(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1049308b4();
  uVar1 = param_1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10492df18; end: 10492e1d7;  */

undefined * FUN_10492df18(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_150 [24];
  long lStack_138;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_bridgeObjectRetain(param_1);
  lVar14 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar14 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_98 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar2;
      FUN_104934c24(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_88,0x11309c428);
      FUN_104934c24(auStack_88,auStack_150,0x11309c428);
      if (lStack_138 == 0) {
        _swift_bridgeObjectRetain(uVar2);
        puVar8 = auStack_150;
      }
      else {
        func_0x000100102924(auStack_150,auStack_b8);
        FUN_104934c24(&uStack_98,&uStack_e8,0x11309d998);
        func_0x000100102924(auStack_b8,auStack_108);
        uVar5 = uStack_e0;
        uVar4 = uStack_e8;
        uVar9 = *(ulong *)(puVar3 + 0x10);
        if (uVar9 < *(ulong *)(puVar3 + 0x18)) {
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          func_0x000100102b0c(uVar9 + 1,1);
        }
        __ss6HasherV5_seedABSi_tcfC(auStack_150,*(undefined8 *)(puVar3 + 0x28));
        puVar8 = auStack_150;
        __sSS4hash4intoys6HasherVz_tF(puVar8,uVar4,uVar5);
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar12 = (ulong)puVar8 & (uVar13 ^ 0xffffffffffffffff);
        uVar11 = uVar12 >> 6;
        uVar9 = -1L << (uVar12 & 0x3f) &
                (*(ulong *)(puVar3 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar7 = false;
          uVar9 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar11 + 1;
            if ((uVar12 == uVar9) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10492e1d8);
              (*pcVar6)();
            }
            uVar11 = 0;
            if (uVar12 != uVar9) {
              uVar11 = uVar12;
            }
            bVar7 = (bool)(uVar12 == uVar9 | bVar7);
          } while (*(ulong *)(puVar3 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar3 + uVar11 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar11 * 0x40;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
        uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar11 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar3 + uVar11 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        func_0x000100102924(auStack_108,*(long *)(puVar3 + 0x38) + uVar9 * 0x20);
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        puVar8 = auStack_d8;
      }
      FUN_1049349e8(puVar8,0x11309c428);
      FUN_1049349e8(&uStack_98,0x11309d998);
    }
    bVar7 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10492e1d4);
      (*pcVar6)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar14) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release(param_1);
  return puVar3;
}



/* Entry: 10492e1d8; end: 10492e28f; +[FBAEMReporter catalogRequestParameters:contentID:] */

void FUN_10492e1d8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  FUN_10493170c(param_3,uVar1,param_4,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10492e290; end: 10492e33b; +[FBAEMReporter ruleMatchRequestParameters:content:] */

void FUN_10492e290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  if (param_4 == 0) {
    param_4 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  uVar1 = param_3;
  FUN_1049314cc(param_3,param_4,puVar3);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar3);
  uVar2 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10492e33c; end: 10492e33f;  */

bool FUN_10492e33c(double param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [32];
  
  lVar2 = 0x11309c628;
  func_0x0001048db364();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)puVar6 - uVar5;
  lVar9 = lVar8 - uVar5;
  if (lRam000000011309d040 != -1) {
    _swift_once(0x11309d040,FUN_104929514);
  }
  func_0x000100028790(lVar2,0x113815798);
  _swift_beginAccess();
  FUN_104934c24(lVar2,puVar6,0x11309c628);
  puVar4 = puVar6;
  (**(code **)(lVar10 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_1049349e8(puVar6,0x11309c628);
    bVar1 = false;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar9,puVar6,lVar3);
    __s10Foundation4DateVACycfC(lVar8);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar9);
    pcVar7 = *(code **)(lVar10 + 8);
    (*pcVar7)(lVar8,lVar3);
    (*pcVar7)(lVar9,lVar3);
    bVar1 = param_1 < 86400.0;
  }
  return bVar1;
}



/* Entry: 10492e340; end: 10492e357; +[FBAEMReporter isConfigRefreshTimestampValid] */

uint FUN_10492e340(uint param_1)

{
  FUN_1049336b4();
  return param_1 & 1;
}



/* Entry: 10492e358; end: 10492e373; +[FBAEMReporter shouldRefreshWithIsForced:] */

uint FUN_10492e358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104930594(param_3);
  return (uint)param_3 & 1;
}



/* Entry: 10492e374; end: 10492e377;  */

bool FUN_10492e374(double param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [32];
  
  lVar2 = 0x11309c628;
  func_0x0001048db364();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)puVar6 - uVar5;
  lVar9 = lVar8 - uVar5;
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  func_0x000100028790(lVar2,0x1138157b0);
  _swift_beginAccess();
  FUN_104934c24(lVar2,puVar6,0x11309c628);
  puVar4 = puVar6;
  (**(code **)(lVar10 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_1049349e8(puVar6,0x11309c628);
    bVar1 = false;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar9,puVar6,lVar3);
    __s10Foundation4DateVACycfC(lVar8);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar9);
    pcVar7 = *(code **)(lVar10 + 8);
    (*pcVar7)(lVar8,lVar3);
    (*pcVar7)(lVar9,lVar3);
    bVar1 = param_1 < 0.0;
  }
  return bVar1;
}



/* Entry: 10492e378; end: 10492e38f; +[FBAEMReporter shouldDelayAggregationRequest] */

uint FUN_10492e378(uint param_1)

{
  func_0x00010493383c();
  return param_1 & 1;
}



/* Entry: 10492e390; end: 10492e393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10492e390(ulong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_140 [272];
  
  puVar6 = auStack_140;
  lVar3 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = 10;
  *(undefined8 *)(lVar3 + 0x10) = 5;
  *(undefined8 *)(lVar3 + 0x20) = 0x6e676961706d6163;
  *(undefined8 *)(lVar3 + 0x28) = 0xeb0000000064695f;
  lVar4 = lVar3;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0xe0))();
  puVar1 = PTR___sSSN_11034da80;
  *(long *)(lVar3 + 0x30) = lVar4;
  *(undefined1 **)(lVar3 + 0x38) = puVar6;
  *(undefined **)(lVar3 + 0x48) = puVar1;
  *(undefined8 *)(lVar3 + 0x50) = 0x69737265766e6f63;
  puVar2 = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar3 + 0x58) = 0xef617461645f6e6f;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined **)(lVar3 + 0x78) = puVar2;
  *(undefined8 *)(lVar3 + 0x80) = 0xd000000000000010;
  *(undefined8 *)(lVar3 + 0x88) = 0x800000010f21d350;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined **)(lVar3 + 0xa8) = puVar2;
  *(undefined8 *)(lVar3 + 0xb0) = 0x6e656b6f74;
  *(undefined8 *)(lVar3 + 0xb8) = 0xe500000000000000;
  uVar5 = ((undefined8 *)((long)param_1 + _DAT_11309d810))[1];
  *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)((long)param_1 + _DAT_11309d810);
  *(undefined8 *)(lVar3 + 200) = uVar5;
  *(undefined **)(lVar3 + 0xd8) = puVar1;
  *(undefined8 *)(lVar3 + 0xe0) = 0x6c665f79616c6564;
  *(undefined **)(lVar3 + 0x108) = puVar1;
  *(undefined8 *)(lVar3 + 0xe8) = 0xea0000000000776f;
  *(undefined8 *)(lVar3 + 0xf0) = 0x726576726573;
  *(undefined8 *)(lVar3 + 0xf8) = 0xe600000000000000;
  _swift_bridgeObjectRetain();
  lVar4 = lVar3;
  func_0x000100214a84(lVar3);
  _swift_setDeallocating(lVar3);
  uVar5 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy((undefined8 *)(lVar3 + 0x20),5,uVar5);
  return lVar4;
}



/* Entry: 10492e394; end: 10492e49b;  */

void FUN_10492e394(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 != 0) {
    lVar1 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    _swift_errorRetain(param_2);
    __ss11_StringGutsV4growyySiF(0x31);
    __sSS6appendyySSF(0xd00000000000002f,0x800000010f21d450);
    uVar2 = 0x11309d9a0;
    lStack_48 = param_2;
    func_0x0001048db364(0x11309d9a0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&lStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    *(undefined **)(lVar1 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar1 + 0x20) = uStack_40;
    *(undefined8 *)(lVar1 + 0x28) = uStack_38;
    __ss5print_9separator10terminatoryypd_S2StF(lVar1,0x20,0xe100000000000000,10,0xe100000000000000)
    ;
    _swift_bridgeObjectRelease(lVar1);
    _swift_errorRelease(param_2);
  }
  return;
}



/* Entry: 10492e49c; end: 10492e4c7; +[FBAEMReporter sendDebuggingRequest:] */

void FUN_10492e49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104930fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10492e4c8; end: 10492e4d3; +[FBAEMReporter debuggingRequestParameters:] */

void FUN_10492e4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104930e54();
  _objc_release(param_3);
  uVar2 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10492e4d4; end: 10492e637;  */

void FUN_10492e4d4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _swift_beginAccess(0x113815760,auStack_68,0,0);
  lVar3 = lRam0000000113815760;
  if (lRam0000000113815760 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    _swift_unknownObjectRetain(lRam0000000113815760);
    uVar1 = 0xd000000000000034;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f21d0c0);
    lVar2 = lVar3;
    _objc_msgSend(lVar3,PTR_s_fb_objectForKey__1125c5f60,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _swift_unknownObjectRelease(lVar3);
    if (lVar2 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    lStack_38 = lStack_78;
    uStack_40 = uStack_80;
    if (lStack_78 != 0) {
      lVar3 = 0;
      __s10Foundation4DateVMa();
      uVar1 = param_1;
      _swift_dynamicCast(param_1,&uStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
      pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      uVar4 = (uint)uVar1 ^ 1;
      goto LAB_10492e620;
    }
  }
  FUN_1049349e8(&uStack_50,0x11309c428);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar4 = 1;
LAB_10492e620:
  (*pcVar5)(param_1,uVar4,1,lVar3);
  return;
}



/* Entry: 10492e638; end: 10492e6db; +[FBAEMReporter loadMinAggregationRequestTimestamp] */

void FUN_10492e638(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10492e4d4(puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10492e6dc; end: 10492e6df;  */

void FUN_10492e6dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar5 = (long)puVar6 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar5,param_1);
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  func_0x000100028790(lVar1,0x1138157b0);
  (**(code **)(lVar7 + 0x10))(puVar6,lVar5,lVar2);
  (**(code **)(lVar7 + 0x38))(puVar6,0,1,lVar2);
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  func_0x000100ed9cbc(puVar6,lVar1);
  _swift_endAccess(auStack_68);
  _swift_beginAccess(0x113815760,auStack_68,0,0);
  lVar1 = lRam0000000113815760;
  if (lRam0000000113815760 != 0) {
    lVar3 = lRam0000000113815760;
    _swift_unknownObjectRetain(lRam0000000113815760);
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    uVar4 = 0xd000000000000034;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f21d0c0);
    _objc_msgSend(lVar1,PTR_s_fb_setObject_forKey__1125c5f88,lVar3,uVar4);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  (**(code **)(lVar7 + 8))(lVar5,lVar2);
  return;
}



/* Entry: 10492e6e0; end: 10492e6e3; +[FBAEMReporter updateAggregationRequestTimestamp:] */

void FUN_10492e6e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar5 = (long)puVar6 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar5,param_1);
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  func_0x000100028790(lVar1,0x1138157b0);
  (**(code **)(lVar7 + 0x10))(puVar6,lVar5,lVar2);
  (**(code **)(lVar7 + 0x38))(puVar6,0,1,lVar2);
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  func_0x000100ed9cbc(puVar6,lVar1);
  _swift_endAccess(auStack_68);
  _swift_beginAccess(0x113815760,auStack_68,0,0);
  lVar1 = lRam0000000113815760;
  if (lRam0000000113815760 != 0) {
    lVar3 = lRam0000000113815760;
    _swift_unknownObjectRetain(lRam0000000113815760);
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    uVar4 = 0xd000000000000034;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f21d0c0);
    _objc_msgSend(lVar1,PTR_s_fb_setObject_forKey__1125c5f88,lVar3,uVar4);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  (**(code **)(lVar7 + 8))(lVar5,lVar2);
  return;
}



/* Entry: 10492e6e4; end: 10492e71f;  */

undefined * FUN_10492e6e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000104915df0();
  _swift_release(puVar1);
  return puVar2;
}



/* Entry: 10492e720; end: 10492e78f; +[FBAEMReporter loadConfigurations] */

void FUN_10492e720(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000104915df0();
  _swift_release(puVar3);
  uVar2 = 0x11309d950;
  func_0x0001048db364(0x11309d950);
  puVar3 = puVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10492e790; end: 10492e7cf; +[FBAEMReporter addConfigurations:] */

void FUN_10492e790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  FUN_104932f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10492e7d0; end: 10492e7d3;  */

/* WARNING: Removing unreachable block (ram,0x000104933b0c) */
/* WARNING: Removing unreachable block (ram,0x000104933a30) */

void FUN_10492e7d0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(0x113815778,auStack_58,0,0);
  lVar2 = lRam0000000113815780;
  lVar1 = lRam0000000113815778;
  if (lRam0000000113815780 != 0) {
    _objc_allocWithZone(PTR__OBJC_CLASS___NSData_1126ae778);
    _swift_bridgeObjectRetain(lVar2);
    FUN_10492f0d0(lVar1,lVar2,1);
    if (lVar1 != 0) {
      func_0x000104934c68(0,0x112d7e120,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      lVar2 = 0x11309d6d8;
      func_0x0001048db364();
      _swift_allocObject();
      *(undefined8 *)(lVar2 + 0x18) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 2;
      uVar5 = 0x112d38dd0;
      uVar3 = 0;
      func_0x000104934c68(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      uVar3 = 0;
      FUN_1049246d8();
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      lVar4 = lVar1;
      _objc_retain(lVar1);
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(lVar1);
      _objc_release(lVar4);
      __sSo17NSKeyedUnarchiverC10FoundationE16unarchivedObject9ofClasses4fromypSgSayyXlXpG_AC4DataVtKFZ
                (auStack_80,lVar2,lVar1,uVar5);
      _objc_release(lVar4);
      func_0x00010006c090(lVar1,uVar5);
      _swift_bridgeObjectRelease(lVar2);
      if (lStack_68 == 0) {
        FUN_1049349e8(auStack_80,0x11309c428);
      }
      else {
        uVar5 = 0x11309d958;
        func_0x0001048db364(0x11309d958);
        puVar6 = auStack_88;
        _swift_dynamicCast(puVar6,auStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
        if (((ulong)puVar6 & 1) != 0) {
          return;
        }
      }
    }
  }
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 10492e7d4; end: 10492e817; +[FBAEMReporter loadReportData] */

void FUN_10492e7d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1049339b8();
  uVar1 = 0;
  FUN_1049246d8(0);
  uVar2 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10492e818; end: 10492e81f; +[FBAEMReporter saveReportData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10492e818(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_1c0 [272];
  undefined8 uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  ulong *apuStack_78 [3];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (ulong *)PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _swift_getInitializedObjCClass();
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_60,0,0);
  uVar8 = uRam0000000113815790;
  FUN_1049246d8(0);
  uVar6 = uVar8;
  _swift_bridgeObjectRetain();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar8);
  apuStack_78[0] = (ulong *)0x0;
  puVar10 = (ulong *)PTR_s_archivedDataWithRootObject_requi_11259ff88;
  _objc_msgSend(puVar5,PTR_s_archivedDataWithRootObject_requi_11259ff88,uVar6,0,apuStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar7 = apuStack_78[0];
  _objc_retain();
  if (puVar5 == (ulong *)0x0) {
    puVar9 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    puVar5 = puVar9;
    _swift_errorRelease();
    puStack_a8 = puVar9;
  }
  else {
    puVar9 = puVar5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar5);
    _swift_beginAccess(0x113815778,apuStack_78,0,0);
    puVar4 = puRam0000000113815780;
    uVar8 = uRam0000000113815778;
    if (puRam0000000113815780 != (ulong *)0x0) {
      _swift_bridgeObjectRetain(puRam0000000113815780);
      puVar5 = puVar9;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar9,puVar10);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,puVar4);
      _swift_bridgeObjectRelease(puVar4);
      _objc_msgSend(puVar5,PTR_s_writeToFile_atomically__11268d368,uVar8,1);
      _objc_release(puVar5);
      _objc_release(uVar8);
      uVar6 = uVar8;
    }
    puVar5 = puVar9;
    func_0x00010006c090(puVar9,puVar10);
    puVar7 = puVar10;
    puStack_a8 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar11 = auStack_1c0;
  pcStack_88 = FUN_104930e54;
  puVar10 = (ulong *)0x11309c610;
  uStack_b0 = uVar6;
  puStack_a0 = puVar9;
  puStack_98 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001048db364();
  _swift_initStackObject();
  puVar10[3] = 10;
  puVar10[2] = 5;
  puVar10[4] = 0x6e676961706d6163;
  puVar10[5] = 0xeb0000000064695f;
  puVar7 = puVar10;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0xe0))();
  puVar2 = PTR___sSSN_11034da80;
  puVar10[6] = (ulong)puVar7;
  puVar10[7] = (ulong)puVar11;
  puVar10[9] = (ulong)puVar2;
  puVar10[10] = 0x69737265766e6f63;
  puVar3 = PTR___sSiN_11034deb0;
  puVar10[0xb] = 0xef617461645f6e6f;
  puVar10[0xc] = 0;
  puVar10[0xf] = (ulong)puVar3;
  puVar10[0x10] = 0xd000000000000010;
  puVar10[0x11] = 0x800000010f21d350;
  puVar10[0x12] = 0;
  puVar10[0x15] = (ulong)puVar3;
  puVar10[0x16] = 0x6e656b6f74;
  puVar10[0x17] = 0xe500000000000000;
  uVar1 = ((ulong *)((long)puVar5 + _DAT_11309d810))[1];
  puVar10[0x18] = *(ulong *)((long)puVar5 + _DAT_11309d810);
  puVar10[0x19] = uVar1;
  puVar10[0x1b] = (ulong)puVar2;
  puVar10[0x1c] = 0x6c665f79616c6564;
  puVar10[0x21] = (ulong)puVar2;
  puVar10[0x1d] = 0xea0000000000776f;
  puVar10[0x1e] = 0x726576726573;
  puVar10[0x1f] = 0xe600000000000000;
  _swift_bridgeObjectRetain();
  puVar5 = puVar10;
  func_0x000100214a84(puVar10);
  _swift_setDeallocating(puVar10);
  uVar8 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar10 + 4,5,uVar8);
  return puVar5;
}



/* Entry: 10492e820; end: 10492ef3b;  */

void FUN_10492e820(undefined *param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  long lVar20;
  long alStack_200 [2];
  undefined8 uStack_1f0;
  undefined8 auStack_1e8 [6];
  undefined1 auStack_1b8 [24];
  long alStack_1a0 [12];
  undefined auStack_140 [8];
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined *)((long)alStack_1a0 + lVar1 + 0x60);
  puVar2 = PTR_PTR_1126add78;
  _swift_getInitializedObjCClass();
  uVar3 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar3);
  puStack_128 = (undefined *)0x0;
  puVar15 = (undefined *)0x0;
  puVar4 = puVar2;
  puVar12 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
  puVar14 = param_1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar5 = puStack_128;
  _objc_retain();
  if (puVar4 == (undefined *)0x0) {
    puVar7 = puVar5;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar5);
    _swift_willThrow();
    _swift_errorRelease(puVar7);
    param_2 = puVar7;
  }
  else {
    puVar2 = puVar4;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar4);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar7);
    puVar6 = puVar2;
    puVar13 = puVar12;
    puVar14 = puVar7;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC();
    puVar5 = param_3;
    param_1 = puVar12;
    if (puVar13 == (undefined *)0x0) {
      func_0x00010006c090(puVar2);
    }
    else {
      puVar7 = (undefined *)0x113815730;
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      _swift_beginAccess(0x113815730,auStack_88);
      puVar4 = puRam0000000113815730;
      if (puRam0000000113815730 == (undefined *)0x0) {
        func_0x00010006c090(puVar2);
        _swift_bridgeObjectRelease(puVar13);
        unaff_x25 = puVar13;
        unaff_x26 = puVar6;
      }
      else {
        puStack_128 = (undefined *)0x0;
        uStack_120 = 0xe000000000000000;
        _swift_beginAccess(0x113815738,auStack_a0,0,0);
        lVar8 = lRam0000000113815740;
        uVar3 = 0x296c6c756e28;
        if (lRam0000000113815740 != 0) {
          uVar3 = uRam0000000113815738;
        }
        lVar9 = -0x1a00000000000000;
        if (lRam0000000113815740 != 0) {
          lVar9 = lRam0000000113815740;
        }
        puStack_130 = param_2;
        _swift_unknownObjectRetain(puVar4);
        _swift_bridgeObjectRetain(lVar8);
        __sSS6appendyySSF(uVar3,lVar9);
        _swift_bridgeObjectRelease(lVar9);
        __sSS6appendyySSF(0x2f,0xe100000000000000);
        unaff_x27 = 0xef736e6f69737265;
        __sSS6appendyySSF(0x766e6f635f6d6561,0xef736e6f69737265);
        uVar3 = uStack_120;
        puVar7 = puStack_128;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_128,uStack_120);
        puStack_138 = puVar7;
        _swift_bridgeObjectRelease(uVar3);
        unaff_x28 = (undefined *)0x11309c610;
        func_0x0001048db364();
        _swift_initStackObject();
        *(undefined8 *)(unaff_x28 + 0x18) = 2;
        *(undefined8 *)(unaff_x28 + 0x10) = 1;
        *(undefined8 *)(unaff_x28 + 0x20) = 0x766e6f635f6d6561;
        puVar7 = PTR___sSSN_11034da80;
        *(undefined **)(unaff_x28 + 0x48) = PTR___sSSN_11034da80;
        *(undefined8 *)(unaff_x28 + 0x28) = 0xef736e6f69737265;
        *(undefined **)(unaff_x28 + 0x30) = puVar6;
        *(undefined **)(unaff_x28 + 0x38) = puVar13;
        puVar5 = unaff_x28;
        func_0x000100214a84();
        _swift_setDeallocating(unaff_x28);
        FUN_1049349e8(unaff_x28 + 0x20,0x11309c418);
        unaff_x25 = puVar5;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (puVar5,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        _swift_bridgeObjectRelease(puVar5);
        unaff_x26 = (undefined *)0x54534f50;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54534f50,0xe400000000000000);
        puVar5 = &UNK_1107b89e8;
        _swift_allocObject(&UNK_1107b89e8,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puStack_130;
        *(undefined **)(puVar5 + 0x18) = param_3;
        pcStack_108 = FUN_1049349d8;
        puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_120 = 0x42000000;
        puStack_118 = &UNK_101201f78;
        puStack_110 = &UNK_1107b8a00;
        puVar7 = auStack_140 + 0x18;
        puStack_100 = puVar5;
        __Block_copy();
        param_2 = puStack_100;
        _swift_retain(param_3);
        _swift_release(param_2);
        puVar5 = puStack_138;
        puVar14 = puStack_138;
        puVar15 = unaff_x25;
        _objc_msgSend(puVar4,PTR_s_startGraphRequestWithGraphPath_p_112525210,puStack_138,unaff_x25,
                      0,unaff_x26,puVar7);
        func_0x00010006c090(puVar2);
        _swift_unknownObjectRelease(puVar4);
        __Block_release(puVar7);
        _objc_release(puVar5);
        _objc_release(unaff_x25);
        _objc_release(unaff_x26);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    *(undefined **)((long)alStack_1a0 + lVar1) = unaff_x28;
    *(undefined8 *)((long)alStack_1a0 + lVar1 + 8) = unaff_x27;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x10) = unaff_x26;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x18) = unaff_x25;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x20) = puVar4;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x28) = puVar2;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x30) = param_1;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x38) = param_2;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x40) = puVar7;
    *(undefined **)((long)alStack_1a0 + lVar1 + 0x48) = puVar5;
    *(undefined1 **)((long)alStack_1a0 + lVar1 + 0x50) = &stack0xfffffffffffffff0;
    *(undefined8 *)((long)alStack_1a0 + lVar1 + 0x58) = 0x10492ec48;
    lVar8 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    lVar17 = *(long *)(lVar8 + -8);
    lVar18 = (long)alStack_200 + (lVar1 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
    lVar9 = 0;
    __s8Dispatch0A3QoSVMa();
    lVar20 = *(long *)(lVar9 + -8);
    lVar19 = lVar18 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
    if (puVar12 == (undefined *)0x0) {
      *(long *)((long)alStack_200 + lVar1) = lVar9;
      if (lRam000000011309d028 != -1) {
        _swift_once(0x11309d028,FUN_1049288f4);
      }
      _swift_beginAccess(0x113815770,auStack_1b8 + lVar1,0,0);
      uVar3 = uRam0000000113815770;
      puVar7 = &UNK_1107b8a38;
      _swift_allocObject(&UNK_1107b8a38,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar15;
      *(undefined **)(puVar7 + 0x18) = puVar14;
      *(undefined **)((long)alStack_200 + lVar1 + 8) = puVar15;
      lVar9 = 2;
      _swift_retain_n(puVar15);
      _objc_retain(uVar3);
      puVar4 = puVar7;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
      if ((puVar4 == (undefined *)0xd000000000000028) && (lVar9 == -0x7ffffffef0de2fb0)) {
        _swift_bridgeObjectRelease(0x800000010f21d050);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(lVar9);
        if (((ulong)puVar4 & 1) == 0) {
          uVar16 = *(undefined8 *)((long)alStack_200 + lVar1 + 8);
          func_0x000104933ba4(uVar16);
          _swift_release(uVar16);
          _objc_release(uVar3);
          _swift_release_n(puVar7,2);
          return;
        }
      }
      *(undefined8 *)((long)auStack_1e8 + lVar1 + 0x20) = 0x1049349e0;
      *(undefined **)((long)auStack_1e8 + lVar1 + 0x28) = puVar7;
      *(undefined **)((long)auStack_1e8 + lVar1) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)((long)auStack_1e8 + lVar1 + 8) = 0x42000000;
      *(undefined **)((long)auStack_1e8 + lVar1 + 0x10) = &UNK_1000b0c7c;
      *(undefined **)((long)auStack_1e8 + lVar1 + 0x18) = &UNK_1107b8a50;
      lVar9 = (long)auStack_1e8 + lVar1;
      __Block_copy(lVar9);
      _swift_retain(puVar7);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar19);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)((long)&uStack_1f0 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar16 = 0x112d4af88;
      func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      _swift_retain(puVar4);
      uVar10 = 0x11309c6f0;
      func_0x0001048db364(0x11309c6f0);
      uVar11 = 0x112d4af98;
      func_0x000104931470(0x112d4af98,0x11309c6f8,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                          PTR___sSayxGSTsMc_11034dd08);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar18,(long)&uStack_1f0 + lVar1,uVar10,uVar11,lVar8,uVar16);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar19,lVar18,lVar9);
      __Block_release(lVar9);
      _swift_release(*(undefined8 *)((long)alStack_200 + lVar1 + 8));
      _objc_release(uVar3);
      _swift_release_n(puVar7,2);
      (**(code **)(lVar17 + 8))(lVar18,lVar8);
      (**(code **)(lVar20 + 8))(lVar19,*(undefined8 *)((long)alStack_200 + lVar1));
      _swift_release(*(undefined8 *)((long)auStack_1e8 + lVar1 + 0x28));
    }
    return;
  }
  return;
}



/* Entry: 10492ef3c; end: 10492ef5f; +[FBAEMReporter sendAggregationRequest] */

void FUN_10492ef3c(void)

{
  _swift_getObjCClassMetadata();
  FUN_10492bd5c();
  return;
}



/* Entry: 10492ef60; end: 10492ef6b; +[FBAEMReporter aggregationRequestParameters:] */

void FUN_10492ef60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10493186c();
  _objc_release(param_3);
  uVar2 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10492ef6c; end: 10492efd7;  */

void FUN_10492ef6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  (*param_4)();
  _objc_release(param_3);
  uVar2 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10492efd8; end: 10492efeb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10492efd8(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *puVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined1 *puVar32;
  ulong uStack_140;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  FUN_104933ca4();
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_80,1,0);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)((long)puRam0000000113815788 + 0x10) == 0) {
    return;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000104915df0();
  _swift_release(puVar20);
  lVar7 = (long)puRam0000000113815788;
  puVar24 = (ulong *)((long)puRam0000000113815788 + 0x40);
  uVar25 = 1L << ((ulong)*(byte *)((long)puRam0000000113815788 + 0x20) & 0x3f);
  uVar28 = 0xffffffffffffffff;
  if ((long)uVar25 < 0x40) {
    uVar28 = ~(-1L << (uVar25 & 0x3f));
  }
  uVar28 = uVar28 & *puVar24;
  _swift_bridgeObjectRetain();
  bVar6 = false;
  lVar27 = 0;
  do {
    while (uVar28 == 0) {
      bVar10 = SCARRY8(lVar27,1);
      lVar27 = lVar27 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934858);
        (*pcVar9)();
      }
      if ((long)(uVar25 + 0x3f >> 6) <= lVar27) {
        _swift_release(lVar7);
        lVar7 = (long)puRam0000000113815788;
        puRam0000000113815788 = puVar11;
        _swift_bridgeObjectRelease(lVar7);
        if (!bVar6) {
          return;
        }
        FUN_104932de0();
        return;
      }
      uVar28 = puVar24[lVar27];
    }
    uVar5 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar22 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar27 << 6;
    puVar31 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar22 * 0x10);
    uVar5 = *puVar31;
    uVar4 = puVar31[1];
    uVar22 = *(ulong *)(*(long *)(lVar7 + 0x38) + uVar22 * 8);
    if ((uVar5 == 0x544c5541464544 && uVar4 == 0xe700000000000000) ||
       (uVar30 = uVar5,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar5,uVar4,0x544c5541464544,0xe700000000000000,0), (uVar30 & 1) != 0)) {
      uVar30 = uVar22 >> 0x3e;
      if (uVar30 == 0) {
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
        if (uVar12 == 0) goto LAB_1049341d4;
LAB_10493413c:
        uStack_140 = uVar12 - 1;
        if (SBORROW8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934884);
          (*pcVar9)();
        }
        if ((uVar22 & 0xc000000000000001) != 0) {
          _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar22);
          FUN_10491aa8c(uStack_140,uVar22);
          goto joined_r0x0001049341f8;
        }
        if ((long)uStack_140 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934888);
          (*pcVar9)();
        }
        if (*(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10) <= uStack_140) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10493488c);
          (*pcVar9)();
        }
        uStack_140 = *(ulong *)(uVar22 + uStack_140 * 8 + 0x20);
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        _objc_retain();
        if (uVar30 != 0) goto LAB_104934238;
LAB_1049341fc:
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (uVar12 != 0) goto LAB_10493413c;
LAB_1049341d4:
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        uStack_140 = 0;
joined_r0x0001049341f8:
        if (uVar30 == 0) goto LAB_1049341fc;
LAB_104934238:
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934864);
        (*pcVar9)();
      }
      uVar12 = uVar22;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((uVar30 != 0) || ((uVar12 & 1) == 0)) {
        FUN_10492fdd8(uVar22,FUN_104915284);
      }
      uVar30 = uVar22 & 0xffffffffffffff8;
      if (*(long *)(uVar30 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934868);
        (*pcVar9)();
      }
      lVar26 = *(long *)(uVar30 + 0x10) + -1;
      uVar13 = *(undefined8 *)(uVar30 + lVar26 * 8 + 0x20);
      *(long *)(uVar30 + 0x10) = lVar26;
      _objc_release(uVar13);
    }
    else {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar22);
      uStack_140 = 0;
    }
    if (uVar22 >> 0x3e == 0) {
      uVar30 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar30 = uVar22 & 0xffffffffffffff8;
      if ((long)uVar22 < 0) {
        uVar30 = uVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar20;
    if (uVar30 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar22 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493485c);
              (*pcVar9)();
            }
            uVar14 = *(ulong *)(uVar22 + 0x20 + uVar12 * 8);
            _objc_retain();
          }
          else {
            uVar14 = uVar12;
            FUN_10491aa8c(uVar12,uVar22);
          }
          bVar10 = SCARRY8(uVar12,1);
          uVar12 = uVar12 + 1;
          if (bVar10) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104934854);
            (*pcVar9)();
          }
          if (lRam000000011309d038 != -1) {
            _swift_once(0x11309d038,FUN_1049292fc);
          }
          _swift_beginAccess(0x113815790,auStack_98,0,0);
          puVar8 = puRam0000000113815790;
          if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
            puVar32 = *(undefined1 **)(((ulong)puRam0000000113815790 & 0xfffffffffffff8) + 0x10);
            lVar26 = _DAT_11309d710;
          }
          else {
            puVar32 = (undefined1 *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
            if ((long)puRam0000000113815790 < 0) {
              puVar32 = puRam0000000113815790;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            lVar26 = _DAT_11309d710;
          }
          _DAT_11309d710 = lVar26;
          if (puVar32 == (undefined1 *)0x0) break;
          puVar2 = (ulong *)(uVar14 + _DAT_11309d728);
          _swift_bridgeObjectRetain(puVar8);
          _swift_beginAccess(uVar14 + lVar26,auStack_b0,0,0);
          puVar21 = auStack_c8;
          _swift_beginAccess(puVar2,puVar21,0,0);
          puVar31 = (ulong *)0x0;
          do {
            if (((ulong)puVar8 & 0xc000000000000001) == 0) {
              if (*(ulong **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= puVar31) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x104934850);
                (*pcVar9)();
              }
              puVar15 = *(ulong **)(puVar8 + (long)puVar31 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar15 = puVar31;
              puVar21 = puVar8;
              FUN_10491ac20();
            }
            puVar19 = PTR__swift_isaMask_11034f488;
            puVar1 = (undefined1 *)((long)puVar31 + 1);
            if (SCARRY8((long)puVar31,1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493484c);
              (*pcVar9)();
            }
            puVar16 = puVar15;
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0x1b8))();
            puVar17 = puVar16;
            (**(code **)((*(ulong *)puVar19 & *puVar15) + 0x128))();
            if (puVar16 == *(ulong **)(uVar14 + lVar26)) {
              puVar29 = (undefined1 *)puVar2[1];
              if (puVar21 == (undefined1 *)0x0) {
                _objc_release(puVar15);
                if (puVar29 == (undefined1 *)0x0) {
LAB_1049344d4:
                  _swift_bridgeObjectRelease(puVar8);
LAB_1049344f8:
                  _objc_retain();
                  puVar19 = puVar20;
                  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
                  if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
                     (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar20 >> 0x3e == 0) {
                      puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
                    }
                    else {
                      puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
                      if ((long)puVar20 < 0) {
                        puVar18 = puVar20;
                      }
                      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
                    }
                    puVar19 = (undefined *)0x0;
                    FUN_104915284(0,puVar18 + 1,1,puVar20);
                  }
                  uVar23 = (ulong)puVar19 & 0xffffffffffffff8;
                  uVar3 = *(ulong *)(uVar23 + 0x10);
                  puVar20 = puVar19;
                  if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar3) {
                    puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar23 + 0x18));
                    FUN_104915284(puVar20,uVar3 + 1,1,puVar19);
                    uVar23 = (ulong)puVar20 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar23 + 0x10) = uVar3 + 1;
                  *(ulong *)(uVar23 + uVar3 * 8 + 0x20) = uVar14;
                  _objc_release(uVar14);
                  goto LAB_104934574;
                }
              }
              else {
                if (puVar29 == (undefined1 *)0x0) goto LAB_1049343e0;
                if (puVar17 == (ulong *)*puVar2 && puVar21 == puVar29) {
                  _swift_bridgeObjectRelease(puVar8);
                  _swift_bridgeObjectRelease(puVar21);
                  _objc_release(puVar15);
                  goto LAB_1049344f8;
                }
                puVar29 = puVar21;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                _swift_bridgeObjectRelease(puVar21);
                _objc_release(puVar15);
                puVar21 = puVar29;
                if (((ulong)puVar17 & 1) != 0) goto LAB_1049344d4;
              }
            }
            else {
LAB_1049343e0:
              puVar29 = puVar21;
              _objc_release(puVar15);
              _swift_bridgeObjectRelease(puVar21);
              puVar21 = puVar29;
            }
            puVar31 = (ulong *)((long)puVar31 + 1);
          } while (puVar1 != puVar32);
          _objc_release(uVar14);
          _swift_bridgeObjectRelease(puVar8);
          bVar6 = true;
          if (uVar12 == uVar30) goto LAB_10493461c;
        }
        _objc_release(uVar14);
        bVar6 = true;
LAB_104934574:
      } while (uVar12 != uVar30);
    }
LAB_10493461c:
    _swift_bridgeObjectRelease(uVar22);
    if (uStack_140 != 0) {
      uVar22 = uStack_140;
      _objc_retain();
      puVar19 = puVar20;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
         (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar20 >> 0x3e == 0) {
          puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
        }
        else {
          puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
          if ((long)puVar20 < 0) {
            puVar18 = puVar20;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
        }
        puVar19 = (undefined *)0x0;
        FUN_104915284(0,puVar18 + 1,1,puVar20);
      }
      uVar12 = (ulong)puVar19 & 0xffffffffffffff8;
      uVar30 = *(ulong *)(uVar12 + 0x10);
      puVar20 = puVar19;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar30) {
        puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_104915284(puVar20,uVar30 + 1,1,puVar19);
        uVar12 = (ulong)puVar20 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar30 + 1;
      *(ulong *)(uVar12 + uVar30 * 8 + 0x20) = uVar22;
    }
    puVar19 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar22 = uVar5;
    uVar30 = uVar4;
    func_0x000100029284();
    uVar12 = (ulong)~(uint)uVar30 & 1;
    lVar26 = *(long *)(puVar11 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(puVar11 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104934860);
      (*pcVar9)();
    }
    if (*(long *)(puVar11 + 0x18) < lVar26) {
      func_0x00010491d520(lVar26,puVar19);
      uVar22 = uVar5;
      uVar12 = uVar4;
      func_0x000100029284();
      if (((uint)uVar30 & 1) != ((uint)uVar12 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1049348a0);
        (*pcVar9)();
      }
    }
    else if (((ulong)puVar19 & 1) == 0) {
      FUN_10491d3ac();
    }
    if ((uVar30 & 1) == 0) {
      *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) | 1L << (uVar22 & 0x3f);
      puVar31 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar22 * 0x10);
      *puVar31 = uVar5;
      puVar31[1] = uVar4;
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934890);
        (*pcVar9)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar22 * 8);
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar13);
    }
    uVar28 = uVar28 - 1 & uVar28;
    _objc_release(uStack_140);
  } while( true );
}



/* Entry: 10492efec; end: 10492efef;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10492efec(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *puVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined1 *puVar32;
  ulong uStack_140;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_80,1,0);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)((long)puRam0000000113815788 + 0x10) == 0) {
    return;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000104915df0();
  _swift_release(puVar20);
  lVar7 = (long)puRam0000000113815788;
  puVar24 = (ulong *)((long)puRam0000000113815788 + 0x40);
  uVar25 = 1L << ((ulong)*(byte *)((long)puRam0000000113815788 + 0x20) & 0x3f);
  uVar28 = 0xffffffffffffffff;
  if ((long)uVar25 < 0x40) {
    uVar28 = ~(-1L << (uVar25 & 0x3f));
  }
  uVar28 = uVar28 & *puVar24;
  _swift_bridgeObjectRetain();
  bVar6 = false;
  lVar27 = 0;
  do {
    while (uVar28 == 0) {
      bVar10 = SCARRY8(lVar27,1);
      lVar27 = lVar27 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934858);
        (*pcVar9)();
      }
      if ((long)(uVar25 + 0x3f >> 6) <= lVar27) {
        _swift_release(lVar7);
        lVar7 = (long)puRam0000000113815788;
        puRam0000000113815788 = puVar11;
        _swift_bridgeObjectRelease(lVar7);
        if (!bVar6) {
          return;
        }
        FUN_104932de0();
        return;
      }
      uVar28 = puVar24[lVar27];
    }
    uVar5 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar22 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar27 << 6;
    puVar31 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar22 * 0x10);
    uVar5 = *puVar31;
    uVar4 = puVar31[1];
    uVar22 = *(ulong *)(*(long *)(lVar7 + 0x38) + uVar22 * 8);
    if ((uVar5 == 0x544c5541464544 && uVar4 == 0xe700000000000000) ||
       (uVar30 = uVar5,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar5,uVar4,0x544c5541464544,0xe700000000000000,0), (uVar30 & 1) != 0)) {
      uVar30 = uVar22 >> 0x3e;
      if (uVar30 == 0) {
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
        if (uVar12 == 0) goto LAB_1049341d4;
LAB_10493413c:
        uStack_140 = uVar12 - 1;
        if (SBORROW8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934884);
          (*pcVar9)();
        }
        if ((uVar22 & 0xc000000000000001) != 0) {
          _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar22);
          FUN_10491aa8c(uStack_140,uVar22);
          goto joined_r0x0001049341f8;
        }
        if ((long)uStack_140 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934888);
          (*pcVar9)();
        }
        if (*(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10) <= uStack_140) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10493488c);
          (*pcVar9)();
        }
        uStack_140 = *(ulong *)(uVar22 + uStack_140 * 8 + 0x20);
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        _objc_retain();
        if (uVar30 != 0) goto LAB_104934238;
LAB_1049341fc:
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (uVar12 != 0) goto LAB_10493413c;
LAB_1049341d4:
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        uStack_140 = 0;
joined_r0x0001049341f8:
        if (uVar30 == 0) goto LAB_1049341fc;
LAB_104934238:
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934864);
        (*pcVar9)();
      }
      uVar12 = uVar22;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((uVar30 != 0) || ((uVar12 & 1) == 0)) {
        FUN_10492fdd8(uVar22,FUN_104915284);
      }
      uVar30 = uVar22 & 0xffffffffffffff8;
      if (*(long *)(uVar30 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934868);
        (*pcVar9)();
      }
      lVar26 = *(long *)(uVar30 + 0x10) + -1;
      uVar13 = *(undefined8 *)(uVar30 + lVar26 * 8 + 0x20);
      *(long *)(uVar30 + 0x10) = lVar26;
      _objc_release(uVar13);
    }
    else {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar22);
      uStack_140 = 0;
    }
    if (uVar22 >> 0x3e == 0) {
      uVar30 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar30 = uVar22 & 0xffffffffffffff8;
      if ((long)uVar22 < 0) {
        uVar30 = uVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar20;
    if (uVar30 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar22 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493485c);
              (*pcVar9)();
            }
            uVar14 = *(ulong *)(uVar22 + 0x20 + uVar12 * 8);
            _objc_retain();
          }
          else {
            uVar14 = uVar12;
            FUN_10491aa8c(uVar12,uVar22);
          }
          bVar10 = SCARRY8(uVar12,1);
          uVar12 = uVar12 + 1;
          if (bVar10) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104934854);
            (*pcVar9)();
          }
          if (lRam000000011309d038 != -1) {
            _swift_once(0x11309d038,FUN_1049292fc);
          }
          _swift_beginAccess(0x113815790,auStack_98,0,0);
          puVar8 = puRam0000000113815790;
          if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
            puVar32 = *(undefined1 **)(((ulong)puRam0000000113815790 & 0xfffffffffffff8) + 0x10);
            lVar26 = _DAT_11309d710;
          }
          else {
            puVar32 = (undefined1 *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
            if ((long)puRam0000000113815790 < 0) {
              puVar32 = puRam0000000113815790;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            lVar26 = _DAT_11309d710;
          }
          _DAT_11309d710 = lVar26;
          if (puVar32 == (undefined1 *)0x0) break;
          puVar2 = (ulong *)(uVar14 + _DAT_11309d728);
          _swift_bridgeObjectRetain(puVar8);
          _swift_beginAccess(uVar14 + lVar26,auStack_b0,0,0);
          puVar21 = auStack_c8;
          _swift_beginAccess(puVar2,puVar21,0,0);
          puVar31 = (ulong *)0x0;
          do {
            if (((ulong)puVar8 & 0xc000000000000001) == 0) {
              if (*(ulong **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= puVar31) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x104934850);
                (*pcVar9)();
              }
              puVar15 = *(ulong **)(puVar8 + (long)puVar31 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar15 = puVar31;
              puVar21 = puVar8;
              FUN_10491ac20();
            }
            puVar19 = PTR__swift_isaMask_11034f488;
            puVar1 = (undefined1 *)((long)puVar31 + 1);
            if (SCARRY8((long)puVar31,1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493484c);
              (*pcVar9)();
            }
            puVar16 = puVar15;
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0x1b8))();
            puVar17 = puVar16;
            (**(code **)((*(ulong *)puVar19 & *puVar15) + 0x128))();
            if (puVar16 == *(ulong **)(uVar14 + lVar26)) {
              puVar29 = (undefined1 *)puVar2[1];
              if (puVar21 == (undefined1 *)0x0) {
                _objc_release(puVar15);
                if (puVar29 == (undefined1 *)0x0) {
LAB_1049344d4:
                  _swift_bridgeObjectRelease(puVar8);
LAB_1049344f8:
                  _objc_retain();
                  puVar19 = puVar20;
                  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
                  if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
                     (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar20 >> 0x3e == 0) {
                      puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
                    }
                    else {
                      puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
                      if ((long)puVar20 < 0) {
                        puVar18 = puVar20;
                      }
                      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
                    }
                    puVar19 = (undefined *)0x0;
                    FUN_104915284(0,puVar18 + 1,1,puVar20);
                  }
                  uVar23 = (ulong)puVar19 & 0xffffffffffffff8;
                  uVar3 = *(ulong *)(uVar23 + 0x10);
                  puVar20 = puVar19;
                  if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar3) {
                    puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar23 + 0x18));
                    FUN_104915284(puVar20,uVar3 + 1,1,puVar19);
                    uVar23 = (ulong)puVar20 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar23 + 0x10) = uVar3 + 1;
                  *(ulong *)(uVar23 + uVar3 * 8 + 0x20) = uVar14;
                  _objc_release(uVar14);
                  goto LAB_104934574;
                }
              }
              else {
                if (puVar29 == (undefined1 *)0x0) goto LAB_1049343e0;
                if (puVar17 == (ulong *)*puVar2 && puVar21 == puVar29) {
                  _swift_bridgeObjectRelease(puVar8);
                  _swift_bridgeObjectRelease(puVar21);
                  _objc_release(puVar15);
                  goto LAB_1049344f8;
                }
                puVar29 = puVar21;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                _swift_bridgeObjectRelease(puVar21);
                _objc_release(puVar15);
                puVar21 = puVar29;
                if (((ulong)puVar17 & 1) != 0) goto LAB_1049344d4;
              }
            }
            else {
LAB_1049343e0:
              puVar29 = puVar21;
              _objc_release(puVar15);
              _swift_bridgeObjectRelease(puVar21);
              puVar21 = puVar29;
            }
            puVar31 = (ulong *)((long)puVar31 + 1);
          } while (puVar1 != puVar32);
          _objc_release(uVar14);
          _swift_bridgeObjectRelease(puVar8);
          bVar6 = true;
          if (uVar12 == uVar30) goto LAB_10493461c;
        }
        _objc_release(uVar14);
        bVar6 = true;
LAB_104934574:
      } while (uVar12 != uVar30);
    }
LAB_10493461c:
    _swift_bridgeObjectRelease(uVar22);
    if (uStack_140 != 0) {
      uVar22 = uStack_140;
      _objc_retain();
      puVar19 = puVar20;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
         (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar20 >> 0x3e == 0) {
          puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
        }
        else {
          puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
          if ((long)puVar20 < 0) {
            puVar18 = puVar20;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
        }
        puVar19 = (undefined *)0x0;
        FUN_104915284(0,puVar18 + 1,1,puVar20);
      }
      uVar12 = (ulong)puVar19 & 0xffffffffffffff8;
      uVar30 = *(ulong *)(uVar12 + 0x10);
      puVar20 = puVar19;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar30) {
        puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_104915284(puVar20,uVar30 + 1,1,puVar19);
        uVar12 = (ulong)puVar20 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar30 + 1;
      *(ulong *)(uVar12 + uVar30 * 8 + 0x20) = uVar22;
    }
    puVar19 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar22 = uVar5;
    uVar30 = uVar4;
    func_0x000100029284();
    uVar12 = (ulong)~(uint)uVar30 & 1;
    lVar26 = *(long *)(puVar11 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(puVar11 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104934860);
      (*pcVar9)();
    }
    if (*(long *)(puVar11 + 0x18) < lVar26) {
      func_0x00010491d520(lVar26,puVar19);
      uVar22 = uVar5;
      uVar12 = uVar4;
      func_0x000100029284();
      if (((uint)uVar30 & 1) != ((uint)uVar12 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1049348a0);
        (*pcVar9)();
      }
    }
    else if (((ulong)puVar19 & 1) == 0) {
      FUN_10491d3ac();
    }
    if ((uVar30 & 1) == 0) {
      *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) | 1L << (uVar22 & 0x3f);
      puVar31 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar22 * 0x10);
      *puVar31 = uVar5;
      puVar31[1] = uVar4;
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934890);
        (*pcVar9)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar22 * 8);
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar13);
    }
    uVar28 = uVar28 - 1 & uVar28;
    _objc_release(uStack_140);
  } while( true );
}



/* Entry: 10492eff0; end: 10492f003; +[FBAEMReporter clearCache] */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10492eff0(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *puVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined1 *puVar32;
  ulong uStack_140;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  FUN_104933ca4();
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_80,1,0);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)((long)puRam0000000113815788 + 0x10) == 0) {
    return;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000104915df0();
  _swift_release(puVar20);
  lVar7 = (long)puRam0000000113815788;
  puVar24 = (ulong *)((long)puRam0000000113815788 + 0x40);
  uVar25 = 1L << ((ulong)*(byte *)((long)puRam0000000113815788 + 0x20) & 0x3f);
  uVar28 = 0xffffffffffffffff;
  if ((long)uVar25 < 0x40) {
    uVar28 = ~(-1L << (uVar25 & 0x3f));
  }
  uVar28 = uVar28 & *puVar24;
  _swift_bridgeObjectRetain();
  bVar6 = false;
  lVar27 = 0;
  do {
    while (uVar28 == 0) {
      bVar10 = SCARRY8(lVar27,1);
      lVar27 = lVar27 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934858);
        (*pcVar9)();
      }
      if ((long)(uVar25 + 0x3f >> 6) <= lVar27) {
        _swift_release(lVar7);
        lVar7 = (long)puRam0000000113815788;
        puRam0000000113815788 = puVar11;
        _swift_bridgeObjectRelease(lVar7);
        if (!bVar6) {
          return;
        }
        FUN_104932de0();
        return;
      }
      uVar28 = puVar24[lVar27];
    }
    uVar5 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar22 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar27 << 6;
    puVar31 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar22 * 0x10);
    uVar5 = *puVar31;
    uVar4 = puVar31[1];
    uVar22 = *(ulong *)(*(long *)(lVar7 + 0x38) + uVar22 * 8);
    if ((uVar5 == 0x544c5541464544 && uVar4 == 0xe700000000000000) ||
       (uVar30 = uVar5,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar5,uVar4,0x544c5541464544,0xe700000000000000,0), (uVar30 & 1) != 0)) {
      uVar30 = uVar22 >> 0x3e;
      if (uVar30 == 0) {
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
        if (uVar12 == 0) goto LAB_1049341d4;
LAB_10493413c:
        uStack_140 = uVar12 - 1;
        if (SBORROW8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934884);
          (*pcVar9)();
        }
        if ((uVar22 & 0xc000000000000001) != 0) {
          _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar22);
          FUN_10491aa8c(uStack_140,uVar22);
          goto joined_r0x0001049341f8;
        }
        if ((long)uStack_140 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934888);
          (*pcVar9)();
        }
        if (*(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10) <= uStack_140) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10493488c);
          (*pcVar9)();
        }
        uStack_140 = *(ulong *)(uVar22 + uStack_140 * 8 + 0x20);
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        _objc_retain();
        if (uVar30 != 0) goto LAB_104934238;
LAB_1049341fc:
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (uVar12 != 0) goto LAB_10493413c;
LAB_1049341d4:
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        uStack_140 = 0;
joined_r0x0001049341f8:
        if (uVar30 == 0) goto LAB_1049341fc;
LAB_104934238:
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934864);
        (*pcVar9)();
      }
      uVar12 = uVar22;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((uVar30 != 0) || ((uVar12 & 1) == 0)) {
        FUN_10492fdd8(uVar22,FUN_104915284);
      }
      uVar30 = uVar22 & 0xffffffffffffff8;
      if (*(long *)(uVar30 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934868);
        (*pcVar9)();
      }
      lVar26 = *(long *)(uVar30 + 0x10) + -1;
      uVar13 = *(undefined8 *)(uVar30 + lVar26 * 8 + 0x20);
      *(long *)(uVar30 + 0x10) = lVar26;
      _objc_release(uVar13);
    }
    else {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar22);
      uStack_140 = 0;
    }
    if (uVar22 >> 0x3e == 0) {
      uVar30 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar30 = uVar22 & 0xffffffffffffff8;
      if ((long)uVar22 < 0) {
        uVar30 = uVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar20;
    if (uVar30 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar22 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493485c);
              (*pcVar9)();
            }
            uVar14 = *(ulong *)(uVar22 + 0x20 + uVar12 * 8);
            _objc_retain();
          }
          else {
            uVar14 = uVar12;
            FUN_10491aa8c(uVar12,uVar22);
          }
          bVar10 = SCARRY8(uVar12,1);
          uVar12 = uVar12 + 1;
          if (bVar10) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104934854);
            (*pcVar9)();
          }
          if (lRam000000011309d038 != -1) {
            _swift_once(0x11309d038,FUN_1049292fc);
          }
          _swift_beginAccess(0x113815790,auStack_98,0,0);
          puVar8 = puRam0000000113815790;
          if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
            puVar32 = *(undefined1 **)(((ulong)puRam0000000113815790 & 0xfffffffffffff8) + 0x10);
            lVar26 = _DAT_11309d710;
          }
          else {
            puVar32 = (undefined1 *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
            if ((long)puRam0000000113815790 < 0) {
              puVar32 = puRam0000000113815790;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            lVar26 = _DAT_11309d710;
          }
          _DAT_11309d710 = lVar26;
          if (puVar32 == (undefined1 *)0x0) break;
          puVar2 = (ulong *)(uVar14 + _DAT_11309d728);
          _swift_bridgeObjectRetain(puVar8);
          _swift_beginAccess(uVar14 + lVar26,auStack_b0,0,0);
          puVar21 = auStack_c8;
          _swift_beginAccess(puVar2,puVar21,0,0);
          puVar31 = (ulong *)0x0;
          do {
            if (((ulong)puVar8 & 0xc000000000000001) == 0) {
              if (*(ulong **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= puVar31) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x104934850);
                (*pcVar9)();
              }
              puVar15 = *(ulong **)(puVar8 + (long)puVar31 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar15 = puVar31;
              puVar21 = puVar8;
              FUN_10491ac20();
            }
            puVar19 = PTR__swift_isaMask_11034f488;
            puVar1 = (undefined1 *)((long)puVar31 + 1);
            if (SCARRY8((long)puVar31,1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493484c);
              (*pcVar9)();
            }
            puVar16 = puVar15;
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0x1b8))();
            puVar17 = puVar16;
            (**(code **)((*(ulong *)puVar19 & *puVar15) + 0x128))();
            if (puVar16 == *(ulong **)(uVar14 + lVar26)) {
              puVar29 = (undefined1 *)puVar2[1];
              if (puVar21 == (undefined1 *)0x0) {
                _objc_release(puVar15);
                if (puVar29 == (undefined1 *)0x0) {
LAB_1049344d4:
                  _swift_bridgeObjectRelease(puVar8);
LAB_1049344f8:
                  _objc_retain();
                  puVar19 = puVar20;
                  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
                  if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
                     (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar20 >> 0x3e == 0) {
                      puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
                    }
                    else {
                      puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
                      if ((long)puVar20 < 0) {
                        puVar18 = puVar20;
                      }
                      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
                    }
                    puVar19 = (undefined *)0x0;
                    FUN_104915284(0,puVar18 + 1,1,puVar20);
                  }
                  uVar23 = (ulong)puVar19 & 0xffffffffffffff8;
                  uVar3 = *(ulong *)(uVar23 + 0x10);
                  puVar20 = puVar19;
                  if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar3) {
                    puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar23 + 0x18));
                    FUN_104915284(puVar20,uVar3 + 1,1,puVar19);
                    uVar23 = (ulong)puVar20 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar23 + 0x10) = uVar3 + 1;
                  *(ulong *)(uVar23 + uVar3 * 8 + 0x20) = uVar14;
                  _objc_release(uVar14);
                  goto LAB_104934574;
                }
              }
              else {
                if (puVar29 == (undefined1 *)0x0) goto LAB_1049343e0;
                if (puVar17 == (ulong *)*puVar2 && puVar21 == puVar29) {
                  _swift_bridgeObjectRelease(puVar8);
                  _swift_bridgeObjectRelease(puVar21);
                  _objc_release(puVar15);
                  goto LAB_1049344f8;
                }
                puVar29 = puVar21;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                _swift_bridgeObjectRelease(puVar21);
                _objc_release(puVar15);
                puVar21 = puVar29;
                if (((ulong)puVar17 & 1) != 0) goto LAB_1049344d4;
              }
            }
            else {
LAB_1049343e0:
              puVar29 = puVar21;
              _objc_release(puVar15);
              _swift_bridgeObjectRelease(puVar21);
              puVar21 = puVar29;
            }
            puVar31 = (ulong *)((long)puVar31 + 1);
          } while (puVar1 != puVar32);
          _objc_release(uVar14);
          _swift_bridgeObjectRelease(puVar8);
          bVar6 = true;
          if (uVar12 == uVar30) goto LAB_10493461c;
        }
        _objc_release(uVar14);
        bVar6 = true;
LAB_104934574:
      } while (uVar12 != uVar30);
    }
LAB_10493461c:
    _swift_bridgeObjectRelease(uVar22);
    if (uStack_140 != 0) {
      uVar22 = uStack_140;
      _objc_retain();
      puVar19 = puVar20;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
         (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar20 >> 0x3e == 0) {
          puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
        }
        else {
          puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
          if ((long)puVar20 < 0) {
            puVar18 = puVar20;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
        }
        puVar19 = (undefined *)0x0;
        FUN_104915284(0,puVar18 + 1,1,puVar20);
      }
      uVar12 = (ulong)puVar19 & 0xffffffffffffff8;
      uVar30 = *(ulong *)(uVar12 + 0x10);
      puVar20 = puVar19;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar30) {
        puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_104915284(puVar20,uVar30 + 1,1,puVar19);
        uVar12 = (ulong)puVar20 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar30 + 1;
      *(ulong *)(uVar12 + uVar30 * 8 + 0x20) = uVar22;
    }
    puVar19 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar22 = uVar5;
    uVar30 = uVar4;
    func_0x000100029284();
    uVar12 = (ulong)~(uint)uVar30 & 1;
    lVar26 = *(long *)(puVar11 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(puVar11 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104934860);
      (*pcVar9)();
    }
    if (*(long *)(puVar11 + 0x18) < lVar26) {
      func_0x00010491d520(lVar26,puVar19);
      uVar22 = uVar5;
      uVar12 = uVar4;
      func_0x000100029284();
      if (((uint)uVar30 & 1) != ((uint)uVar12 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1049348a0);
        (*pcVar9)();
      }
    }
    else if (((ulong)puVar19 & 1) == 0) {
      FUN_10491d3ac();
    }
    if ((uVar30 & 1) == 0) {
      *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) | 1L << (uVar22 & 0x3f);
      puVar31 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar22 * 0x10);
      *puVar31 = uVar5;
      puVar31[1] = uVar4;
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934890);
        (*pcVar9)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar22 * 8);
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar13);
    }
    uVar28 = uVar28 - 1 & uVar28;
    _objc_release(uStack_140);
  } while( true );
}



/* Entry: 10492f004; end: 10492f007; +[FBAEMReporter clearConfigurations] */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10492f004(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *puVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined1 *puVar32;
  ulong uStack_140;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_80,1,0);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)((long)puRam0000000113815788 + 0x10) == 0) {
    return;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000104915df0();
  _swift_release(puVar20);
  lVar7 = (long)puRam0000000113815788;
  puVar24 = (ulong *)((long)puRam0000000113815788 + 0x40);
  uVar25 = 1L << ((ulong)*(byte *)((long)puRam0000000113815788 + 0x20) & 0x3f);
  uVar28 = 0xffffffffffffffff;
  if ((long)uVar25 < 0x40) {
    uVar28 = ~(-1L << (uVar25 & 0x3f));
  }
  uVar28 = uVar28 & *puVar24;
  _swift_bridgeObjectRetain();
  bVar6 = false;
  lVar27 = 0;
  do {
    while (uVar28 == 0) {
      bVar10 = SCARRY8(lVar27,1);
      lVar27 = lVar27 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934858);
        (*pcVar9)();
      }
      if ((long)(uVar25 + 0x3f >> 6) <= lVar27) {
        _swift_release(lVar7);
        lVar7 = (long)puRam0000000113815788;
        puRam0000000113815788 = puVar11;
        _swift_bridgeObjectRelease(lVar7);
        if (!bVar6) {
          return;
        }
        FUN_104932de0();
        return;
      }
      uVar28 = puVar24[lVar27];
    }
    uVar5 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar22 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar27 << 6;
    puVar31 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar22 * 0x10);
    uVar5 = *puVar31;
    uVar4 = puVar31[1];
    uVar22 = *(ulong *)(*(long *)(lVar7 + 0x38) + uVar22 * 8);
    if ((uVar5 == 0x544c5541464544 && uVar4 == 0xe700000000000000) ||
       (uVar30 = uVar5,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar5,uVar4,0x544c5541464544,0xe700000000000000,0), (uVar30 & 1) != 0)) {
      uVar30 = uVar22 >> 0x3e;
      if (uVar30 == 0) {
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
        if (uVar12 == 0) goto LAB_1049341d4;
LAB_10493413c:
        uStack_140 = uVar12 - 1;
        if (SBORROW8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934884);
          (*pcVar9)();
        }
        if ((uVar22 & 0xc000000000000001) != 0) {
          _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar22);
          FUN_10491aa8c(uStack_140,uVar22);
          goto joined_r0x0001049341f8;
        }
        if ((long)uStack_140 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x104934888);
          (*pcVar9)();
        }
        if (*(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10) <= uStack_140) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10493488c);
          (*pcVar9)();
        }
        uStack_140 = *(ulong *)(uVar22 + uStack_140 * 8 + 0x20);
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        _objc_retain();
        if (uVar30 != 0) goto LAB_104934238;
LAB_1049341fc:
        uVar12 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (uVar12 != 0) goto LAB_10493413c;
LAB_1049341d4:
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar22);
        uStack_140 = 0;
joined_r0x0001049341f8:
        if (uVar30 == 0) goto LAB_1049341fc;
LAB_104934238:
        uVar12 = uVar22 & 0xffffffffffffff8;
        if ((uVar22 & 0x8000000000000000) != 0) {
          uVar12 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934864);
        (*pcVar9)();
      }
      uVar12 = uVar22;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((uVar30 != 0) || ((uVar12 & 1) == 0)) {
        FUN_10492fdd8(uVar22,FUN_104915284);
      }
      uVar30 = uVar22 & 0xffffffffffffff8;
      if (*(long *)(uVar30 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934868);
        (*pcVar9)();
      }
      lVar26 = *(long *)(uVar30 + 0x10) + -1;
      uVar13 = *(undefined8 *)(uVar30 + lVar26 * 8 + 0x20);
      *(long *)(uVar30 + 0x10) = lVar26;
      _objc_release(uVar13);
    }
    else {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar22);
      uStack_140 = 0;
    }
    if (uVar22 >> 0x3e == 0) {
      uVar30 = *(ulong *)((uVar22 & 0xfffffffffffff8) + 0x10);
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar30 = uVar22 & 0xffffffffffffff8;
      if ((long)uVar22 < 0) {
        uVar30 = uVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar20;
    if (uVar30 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar22 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493485c);
              (*pcVar9)();
            }
            uVar14 = *(ulong *)(uVar22 + 0x20 + uVar12 * 8);
            _objc_retain();
          }
          else {
            uVar14 = uVar12;
            FUN_10491aa8c(uVar12,uVar22);
          }
          bVar10 = SCARRY8(uVar12,1);
          uVar12 = uVar12 + 1;
          if (bVar10) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104934854);
            (*pcVar9)();
          }
          if (lRam000000011309d038 != -1) {
            _swift_once(0x11309d038,FUN_1049292fc);
          }
          _swift_beginAccess(0x113815790,auStack_98,0,0);
          puVar8 = puRam0000000113815790;
          if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
            puVar32 = *(undefined1 **)(((ulong)puRam0000000113815790 & 0xfffffffffffff8) + 0x10);
            lVar26 = _DAT_11309d710;
          }
          else {
            puVar32 = (undefined1 *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
            if ((long)puRam0000000113815790 < 0) {
              puVar32 = puRam0000000113815790;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            lVar26 = _DAT_11309d710;
          }
          _DAT_11309d710 = lVar26;
          if (puVar32 == (undefined1 *)0x0) break;
          puVar2 = (ulong *)(uVar14 + _DAT_11309d728);
          _swift_bridgeObjectRetain(puVar8);
          _swift_beginAccess(uVar14 + lVar26,auStack_b0,0,0);
          puVar21 = auStack_c8;
          _swift_beginAccess(puVar2,puVar21,0,0);
          puVar31 = (ulong *)0x0;
          do {
            if (((ulong)puVar8 & 0xc000000000000001) == 0) {
              if (*(ulong **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= puVar31) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x104934850);
                (*pcVar9)();
              }
              puVar15 = *(ulong **)(puVar8 + (long)puVar31 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar15 = puVar31;
              puVar21 = puVar8;
              FUN_10491ac20();
            }
            puVar19 = PTR__swift_isaMask_11034f488;
            puVar1 = (undefined1 *)((long)puVar31 + 1);
            if (SCARRY8((long)puVar31,1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10493484c);
              (*pcVar9)();
            }
            puVar16 = puVar15;
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0x1b8))();
            puVar17 = puVar16;
            (**(code **)((*(ulong *)puVar19 & *puVar15) + 0x128))();
            if (puVar16 == *(ulong **)(uVar14 + lVar26)) {
              puVar29 = (undefined1 *)puVar2[1];
              if (puVar21 == (undefined1 *)0x0) {
                _objc_release(puVar15);
                if (puVar29 == (undefined1 *)0x0) {
LAB_1049344d4:
                  _swift_bridgeObjectRelease(puVar8);
LAB_1049344f8:
                  _objc_retain();
                  puVar19 = puVar20;
                  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
                  if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
                     (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar20 >> 0x3e == 0) {
                      puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
                    }
                    else {
                      puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
                      if ((long)puVar20 < 0) {
                        puVar18 = puVar20;
                      }
                      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
                    }
                    puVar19 = (undefined *)0x0;
                    FUN_104915284(0,puVar18 + 1,1,puVar20);
                  }
                  uVar23 = (ulong)puVar19 & 0xffffffffffffff8;
                  uVar3 = *(ulong *)(uVar23 + 0x10);
                  puVar20 = puVar19;
                  if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar3) {
                    puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar23 + 0x18));
                    FUN_104915284(puVar20,uVar3 + 1,1,puVar19);
                    uVar23 = (ulong)puVar20 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar23 + 0x10) = uVar3 + 1;
                  *(ulong *)(uVar23 + uVar3 * 8 + 0x20) = uVar14;
                  _objc_release(uVar14);
                  goto LAB_104934574;
                }
              }
              else {
                if (puVar29 == (undefined1 *)0x0) goto LAB_1049343e0;
                if (puVar17 == (ulong *)*puVar2 && puVar21 == puVar29) {
                  _swift_bridgeObjectRelease(puVar8);
                  _swift_bridgeObjectRelease(puVar21);
                  _objc_release(puVar15);
                  goto LAB_1049344f8;
                }
                puVar29 = puVar21;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                _swift_bridgeObjectRelease(puVar21);
                _objc_release(puVar15);
                puVar21 = puVar29;
                if (((ulong)puVar17 & 1) != 0) goto LAB_1049344d4;
              }
            }
            else {
LAB_1049343e0:
              puVar29 = puVar21;
              _objc_release(puVar15);
              _swift_bridgeObjectRelease(puVar21);
              puVar21 = puVar29;
            }
            puVar31 = (ulong *)((long)puVar31 + 1);
          } while (puVar1 != puVar32);
          _objc_release(uVar14);
          _swift_bridgeObjectRelease(puVar8);
          bVar6 = true;
          if (uVar12 == uVar30) goto LAB_10493461c;
        }
        _objc_release(uVar14);
        bVar6 = true;
LAB_104934574:
      } while (uVar12 != uVar30);
    }
LAB_10493461c:
    _swift_bridgeObjectRelease(uVar22);
    if (uStack_140 != 0) {
      uVar22 = uStack_140;
      _objc_retain();
      puVar19 = puVar20;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar19 == 0) || ((long)puVar20 < 0)) ||
         (puVar19 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar20 >> 0x3e == 0) {
          puVar18 = *(undefined **)(((ulong)puVar20 & 0xfffffffffffff8) + 0x10);
        }
        else {
          puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
          if ((long)puVar20 < 0) {
            puVar18 = puVar20;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
        }
        puVar19 = (undefined *)0x0;
        FUN_104915284(0,puVar18 + 1,1,puVar20);
      }
      uVar12 = (ulong)puVar19 & 0xffffffffffffff8;
      uVar30 = *(ulong *)(uVar12 + 0x10);
      puVar20 = puVar19;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar30) {
        puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_104915284(puVar20,uVar30 + 1,1,puVar19);
        uVar12 = (ulong)puVar20 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar30 + 1;
      *(ulong *)(uVar12 + uVar30 * 8 + 0x20) = uVar22;
    }
    puVar19 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar22 = uVar5;
    uVar30 = uVar4;
    func_0x000100029284();
    uVar12 = (ulong)~(uint)uVar30 & 1;
    lVar26 = *(long *)(puVar11 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(puVar11 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104934860);
      (*pcVar9)();
    }
    if (*(long *)(puVar11 + 0x18) < lVar26) {
      func_0x00010491d520(lVar26,puVar19);
      uVar22 = uVar5;
      uVar12 = uVar4;
      func_0x000100029284();
      if (((uint)uVar30 & 1) != ((uint)uVar12 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1049348a0);
        (*pcVar9)();
      }
    }
    else if (((ulong)puVar19 & 1) == 0) {
      FUN_10491d3ac();
    }
    if ((uVar30 & 1) == 0) {
      *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar11 + (uVar22 >> 6) * 8 + 0x40) | 1L << (uVar22 & 0x3f);
      puVar31 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar22 * 0x10);
      *puVar31 = uVar5;
      puVar31[1] = uVar4;
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104934890);
        (*pcVar9)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar22 * 8);
      *(undefined **)(*(long *)(puVar11 + 0x38) + uVar22 * 8) = puVar20;
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar13);
    }
    uVar28 = uVar28 - 1 & uVar28;
    _objc_release(uStack_140);
  } while( true );
}



/* Entry: 10492f008; end: 10492f05b;  */

void FUN_10492f008(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10492f05c; end: 10492f097; -[FBAEMReporter init] */

void FUN_10492f05c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10492f098; end: 10492f0cb;  */

void FUN_10492f098(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10492f0cc; end: 10492f0cf; -[FBAEMReporter .cxx_destruct] */

void FUN_10492f0cc(void)

{
  return;
}



/* Entry: 10492f0d0; end: 10492f1b3;  */

undefined * FUN_10492f0d0(ulong param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *unaff_x20;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  puVar8 = PTR_s_initWithContentsOfFile_options_e_1125de9e0;
  uVar5 = param_1;
  _objc_msgSend();
  _objc_release(param_1);
  uVar2 = 0;
  if (unaff_x20 == (undefined *)0x0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release();
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = puVar8;
  if ((uVar5 & 1) != 0) {
    puVar7 = (undefined *)(*(ulong *)(param_3 + 0x18) >> 1);
    if ((long)puVar7 < (long)puVar8) {
      if ((long)(puVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10492f2b4);
        (*pcVar1)();
      }
      puVar7 = (undefined *)(*(ulong *)(param_3 + 0x18) & 0xfffffffffffffffe);
      if ((long)puVar7 <= (long)puVar8) {
        puVar7 = puVar8;
      }
    }
  }
  puVar8 = *(undefined **)(param_3 + 0x10);
  if ((long)puVar7 <= (long)puVar8) {
    puVar7 = puVar8;
  }
  if (puVar7 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar3 = (undefined *)0x11309d6d8;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar7 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar7 = puVar4 + -0x20;
    }
    *(undefined **)(puVar3 + 0x10) = puVar8;
    *(long *)(puVar3 + 0x18) = ((long)puVar7 >> 3) << 1;
  }
  puVar7 = puVar3 + 0x20;
  puVar4 = param_3 + 0x20;
  if ((uVar2 & 1) == 0) {
    _memcpy(puVar7,puVar4,(long)puVar8 << 3);
  }
  else {
    if (puVar3 != param_3 || puVar4 + (long)puVar8 * 8 <= puVar7) {
      _memmove(puVar7,puVar4,(long)puVar8 << 3);
    }
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  _swift_release(param_3);
  return puVar3;
}



/* Entry: 10492f1b4; end: 10492f2b3;  */

undefined * FUN_10492f1b4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f2b4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar3 = (undefined *)0x11309d6d8;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 10492f2b4; end: 10492f323;  */

void FUN_10492f2b4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xfffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if ((long)uVar3 < 0) {
        uVar1 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
    }
    uVar2 = 0;
    FUN_104915298(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 10492f324; end: 10492f7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10492f324(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar21 = param_3[1];
  if (lVar21 < 1) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lVar14 = *param_3;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar17 = 0;
    do {
      lVar9 = _DAT_11309d710;
      lVar16 = lVar17 + 1;
      if (lVar16 < lVar21) {
        lVar11 = *(long *)(lVar14 + lVar16 * 8);
        plVar18 = (long *)(lVar14 + lVar17 * 8);
        plVar13 = plVar18 + 2;
        lVar15 = *plVar18;
        _swift_beginAccess(lVar11 + _DAT_11309d710,auStack_b0,0,0);
        lVar16 = _DAT_11309d710;
        lVar11 = *(long *)(lVar11 + lVar9);
        _swift_beginAccess(lVar15 + _DAT_11309d710,auStack_c8,0,0);
        lVar15 = *(long *)(lVar15 + lVar16);
        lVar9 = lVar17 + 2;
        do {
          lVar12 = lVar9;
          lVar9 = _DAT_11309d710;
          lVar16 = lVar21;
          if (lVar21 == lVar12) break;
          lVar1 = plVar13[-1];
          lVar16 = *plVar13;
          _swift_beginAccess(lVar16 + _DAT_11309d710,auStack_e0,0,0);
          lVar20 = _DAT_11309d710;
          lVar19 = *(long *)(lVar16 + lVar9);
          _swift_beginAccess(lVar1 + _DAT_11309d710,auStack_f8,0,0);
          plVar13 = plVar13 + 1;
          lVar9 = lVar12 + 1;
          lVar16 = lVar12;
        } while (lVar11 < lVar15 != *(long *)(lVar1 + lVar20) <= lVar19);
        if (lVar11 < lVar15) {
          if (lVar16 < lVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7c4);
            (*pcVar2)();
          }
          if (lVar17 < lVar16) {
            puVar7 = (undefined8 *)(lVar14 + lVar16 * 8);
            puVar8 = (undefined8 *)(lVar14 + lVar17 * 8);
            lVar9 = lVar16;
            lVar21 = lVar17;
            do {
              puVar7 = puVar7 + -1;
              lVar9 = lVar9 + -1;
              if (lVar21 != lVar9) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7e4);
                  (*pcVar2)();
                }
                uVar10 = *puVar8;
                *puVar8 = *puVar7;
                *puVar7 = uVar10;
              }
              lVar21 = lVar21 + 1;
              puVar8 = puVar8 + 1;
            } while (lVar21 < lVar9);
          }
        }
      }
      lVar21 = param_3[1];
      lVar9 = lVar16;
      if (lVar16 < lVar21) {
        if (SBORROW8(lVar16,lVar17)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7c0);
          (*pcVar2)();
        }
        if (lVar16 - lVar17 < param_4) {
          if (SCARRY8(lVar17,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7c8);
            (*pcVar2)();
          }
          lVar14 = lVar17 + param_4;
          if (lVar21 <= lVar17 + param_4) {
            lVar14 = lVar21;
          }
          if (lVar14 < lVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7cc);
            (*pcVar2)();
          }
          if (lVar16 != lVar14) {
            lVar11 = *param_3;
            plVar13 = (long *)(lVar11 + lVar16 * 8 + -8);
            lVar21 = lVar17 - lVar16;
            do {
              lVar15 = *(long *)(lVar11 + lVar16 * 8);
              lVar9 = lVar21;
              plVar18 = plVar13;
              do {
                lVar12 = _DAT_11309d710;
                lVar20 = *plVar18;
                _swift_beginAccess(lVar15 + _DAT_11309d710,auStack_80,0,0);
                lVar1 = _DAT_11309d710;
                lVar15 = *(long *)(lVar15 + lVar12);
                _swift_beginAccess(lVar20 + _DAT_11309d710,auStack_98,0,0);
                if (*(long *)(lVar20 + lVar1) <= lVar15) break;
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7d0);
                  (*pcVar2)();
                }
                lVar12 = *plVar18;
                lVar15 = plVar18[1];
                *plVar18 = lVar15;
                plVar18[1] = lVar12;
                bVar3 = lVar9 != -1;
                lVar9 = lVar9 + 1;
                plVar18 = plVar18 + -1;
              } while (bVar3);
              lVar16 = lVar16 + 1;
              plVar13 = plVar13 + 1;
              lVar21 = lVar21 + -1;
              lVar9 = lVar14;
            } while (lVar16 != lVar14);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar9 < lVar17) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7b4);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_104915184(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar22 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar22) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_104915184(puVar6,uVar22 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar22 + 1;
      *(long *)(puVar6 + uVar22 * 0x10 + 0x20) = lVar17;
      *(long *)(puVar6 + uVar22 * 0x10 + 0x28) = lVar9;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7e8);
        (*pcVar2)();
      }
      FUN_10492f7f0(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10492f784;
      lVar14 = *param_3;
      lVar21 = param_3[1];
      lVar17 = lVar9;
    } while (lVar9 < lVar21);
  }
  puVar6 = puStack_58;
  lVar21 = *param_1;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7f0);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar22 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar22) {
    lVar14 = *param_3;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7ec);
      (*pcVar2)();
    }
    lVar9 = uVar22 - 1;
    lVar16 = *(long *)(puVar6 + uVar22 * 0x10);
    lVar17 = *(long *)(puVar6 + lVar9 * 0x10 + 0x28);
    FUN_10492fa5c(lVar14 + lVar16 * 8,lVar14 + *(long *)(puVar6 + lVar9 * 0x10 + 0x20) * 8,
                  lVar14 + lVar17 * 8,lVar21);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar16) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7b8);
      (*pcVar2)();
    }
    puVar4 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar22 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10492f7bc);
      (*pcVar2)();
    }
    *(long *)(puVar6 + uVar22 * 0x10) = lVar16;
    *(long *)((long)(puVar6 + uVar22 * 0x10) + 8) = lVar17;
    puStack_58 = puVar6;
    FUN_10492fd30(lVar9);
    puVar6 = puStack_58;
    uVar22 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_10492f784:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Entry: 10492f7f0; end: 10492fa5b;  */

undefined8 FUN_10492f7f0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar12 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
LAB_10492f8a8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa24);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa2c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa38);
            (*pcVar4)();
          }
          if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa40);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 <= lVar7 + lVar3) {
            lVar10 = uVar6 - 2;
            if (lVar3 <= lVar12) {
              lVar10 = lVar9;
            }
            goto LAB_10492f948;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa44);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar7 = plVar1[1];
          bVar5 = SBORROW8(lVar7,lVar2);
          lVar7 = lVar7 - lVar2;
        }
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa34);
          (*pcVar4)();
        }
        lVar2 = uVar8 + lVar9 * 0x10;
        lVar12 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa3c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar2 - lVar12 < lVar7) {
          return 1;
        }
      }
      else {
        lVar2 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar2 + -0x38),*(long *)(lVar2 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa1c);
          (*pcVar4)();
        }
        lVar12 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa20);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar7;
        if (SBORROW8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa28);
          (*pcVar4)();
        }
        if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa30);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar12 + lVar3 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40))
        goto LAB_10492f8a8;
        plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
        lVar2 = *plVar1;
        lVar7 = plVar1[1];
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa48);
          (*pcVar4)();
        }
        lVar10 = uVar6 - 2;
        if (lVar7 - lVar2 <= lVar12) {
          lVar10 = lVar9;
        }
      }
LAB_10492f948:
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa10);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa5c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar2 = plVar1[1];
      FUN_10492fa5c(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar2 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar2 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa14);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10492fa18);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar2;
      *param_1 = uVar8;
      FUN_10492fd30(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 10492fa5c; end: 10492fd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10492fa5c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = (long)param_2 - (long)param_1;
  lVar7 = lVar6 + 7;
  if (-1 < lVar6) {
    lVar7 = lVar6;
  }
  lVar7 = lVar7 >> 3;
  lVar4 = (long)param_3 - (long)param_2;
  lVar9 = lVar4 + 7;
  if (-1 < lVar4) {
    lVar9 = lVar4;
  }
  lVar9 = lVar9 >> 3;
  if (lVar7 < lVar9) {
    if ((param_4 != param_1) || (param_1 + lVar7 <= param_4)) {
      _memmove(param_4,param_1,lVar7 << 3);
    }
    plVar8 = param_4 + lVar7;
    plVar11 = param_1;
    lVar7 = _DAT_11309d710;
    if (7 < lVar6) {
      do {
        _DAT_11309d710 = lVar7;
        if (param_3 <= param_2) break;
        lVar9 = *param_2;
        lVar4 = *param_4;
        _swift_beginAccess(lVar9 + lVar7,auStack_78,0,0);
        lVar6 = _DAT_11309d710;
        lVar7 = *(long *)(lVar9 + lVar7);
        _swift_beginAccess(lVar4 + _DAT_11309d710,auStack_90,0,0);
        if (lVar7 < *(long *)(lVar4 + lVar6)) {
          plVar5 = param_4;
          plVar10 = param_2;
          param_2 = param_2 + 1;
        }
        else {
          plVar5 = param_4 + 1;
          plVar10 = param_4;
        }
        param_4 = plVar5;
        if (plVar11 != plVar10) {
          *plVar11 = *plVar10;
        }
        plVar11 = plVar11 + 1;
        lVar7 = _DAT_11309d710;
      } while (param_4 < plVar8);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar9 <= param_4)) {
      _memmove(param_4,param_2,lVar9 << 3);
    }
    plVar10 = param_4 + lVar9;
    plVar8 = plVar10;
    plVar11 = param_2;
    if (7 < lVar4) {
      while (plVar8 = plVar10, plVar11 = param_2, param_1 < param_2) {
        plVar2 = param_2 + -1;
        plVar5 = param_3;
        while( true ) {
          lVar7 = _DAT_11309d710;
          param_3 = plVar5 + -1;
          plVar8 = plVar10 + -1;
          lVar9 = *plVar8;
          lVar4 = *plVar2;
          _swift_beginAccess(lVar9 + _DAT_11309d710,auStack_78,0,0);
          lVar6 = _DAT_11309d710;
          lVar7 = *(long *)(lVar9 + lVar7);
          _swift_beginAccess(lVar4 + _DAT_11309d710,auStack_90,0,0);
          if (lVar7 < *(long *)(lVar4 + lVar6)) break;
          if (plVar5 != plVar10) {
            *param_3 = *plVar8;
          }
          plVar10 = plVar8;
          plVar5 = param_3;
          if (plVar8 <= param_4) goto LAB_10492fccc;
        }
        if (plVar5 != param_2) {
          *param_3 = *plVar2;
        }
        plVar8 = plVar10;
        plVar11 = plVar2;
        param_2 = plVar2;
        if (plVar10 <= param_4) break;
      }
    }
  }
LAB_10492fccc:
  uVar3 = (long)plVar8 - (long)param_4;
  uVar1 = uVar3 + 7;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((plVar11 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar11)) {
    _memmove(plVar11,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 10492fd30; end: 10492fdb7;  */

undefined1  [16] FUN_10492fd30(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    func_0x00010492fdc4();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,lVar1 + 0x30,(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10492fdb8);
  (*pcVar3)();
}



/* Entry: 10492fdb8; end: 10492fdd7;  */

void FUN_10492fdb8(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar1 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
  }
  (*(code *)0x104915028)(0,uVar1,0,param_1);
  return;
}



/* Entry: 10492fdd8; end: 10492fe3b;  */

void FUN_10492fdd8(ulong param_1,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar1 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010492fe18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,uVar1,0,param_1);
  return;
}



/* Entry: 10492fe3c; end: 10492fe4f;  */

ulong FUN_10492fe3c(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffbc);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffb0);
        (*pcVar1)();
      }
      uVar2 = 0;
      (*(code *)0x10491bee4)(0);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffb4);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffb8);
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
          FUN_10491aa8c(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10492fe50; end: 104930113;  */

ulong FUN_10492fe50(undefined8 *param_1,long param_2,ulong param_3,code *param_4,code *param_5)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffbc);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffb0);
        (*pcVar1)();
      }
      uVar2 = 0;
      (*param_4)(0);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffb4);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10492ffb8);
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
          (*param_5)(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 104930114; end: 104930273;  */

void FUN_104930114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x113815730,auStack_78,1,0);
  uVar1 = uRam0000000113815730;
  uRam0000000113815730 = param_1;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRelease(uVar1);
  _swift_beginAccess(0x113815738,auStack_90,1,0);
  uVar1 = uRam0000000113815740;
  uRam0000000113815738 = param_2;
  uRam0000000113815740 = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(0x113815758,auStack_a8,1,0);
  uVar1 = uRam0000000113815758;
  uRam0000000113815758 = param_4;
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRelease(uVar1);
  _swift_beginAccess(0x113815748,auStack_c0,1,0);
  uVar1 = uRam0000000113815750;
  uRam0000000113815748 = param_5;
  uRam0000000113815750 = param_6;
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(0x113815760,auStack_d8,1,0);
  uVar1 = uRam0000000113815760;
  uRam0000000113815760 = param_7;
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104930274; end: 104930593;  */

undefined * FUN_104930274(double param_1,undefined *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  undefined8 uVar20;
  undefined8 unaff_x24;
  long lVar21;
  undefined8 unaff_x26;
  ulong *puVar22;
  undefined8 unaff_x27;
  ulong *puVar23;
  undefined8 unaff_x28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_170 [8];
  long alStack_168 [4];
  undefined1 auStack_148 [48];
  ulong auStack_118 [17];
  undefined auStack_90 [8];
  undefined *apuStack_88 [2];
  undefined *apuStack_78 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined *)0x11309c5e0;
  puVar4 = puVar6;
  func_0x0001048db364();
  puVar4 = auStack_90 + -(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar21 = *(long *)(lVar5 + -8);
  lVar17 = (long)puVar4 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_104934c24(param_2,puVar4,0x11309c5e0);
  puVar9 = puVar4;
  (**(code **)(lVar21 + 0x30))(puVar4,1,lVar5);
  if ((int)puVar9 == 1) {
    FUN_1049349e8(puVar4,0x11309c5e0);
  }
  else {
    lVar16 = lVar17;
    (**(code **)(lVar21 + 0x20))(lVar17,puVar4,lVar5);
    __s10Foundation3URLV5querySSSgvg();
    lVar14 = 0;
    if (puVar4 != (undefined *)0x0) {
      lVar14 = lVar16;
    }
    puVar6 = (undefined *)0xe000000000000000;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
    }
    param_2 = PTR_PTR_1126add58;
    _swift_getInitializedObjCClass();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar14,puVar6);
    _swift_bridgeObjectRelease(puVar6);
    puVar6 = param_2;
    _objc_msgSend(param_2,PTR_s_dictionaryWithQueryString__1125ba1d8,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar4 = puVar6;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _objc_release(puVar6);
    if (*(long *)(puVar4 + 0x10) == 0) {
LAB_10493050c:
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      _swift_bridgeObjectRetain(puVar4);
      lVar14 = 0x696c7070615f6c61;
      uVar13 = 0;
      func_0x000100029284();
      if ((uVar13 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar4);
        goto LAB_10493050c;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x38) + lVar14 * 0x10);
      puVar6 = (undefined *)*puVar1;
      unaff_x24 = puVar1[1];
      _swift_bridgeObjectRetain(unaff_x24);
      _swift_bridgeObjectRelease_n(puVar4,2);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar6,unaff_x24);
      _swift_bridgeObjectRelease(unaff_x24);
      apuStack_78[0] = (undefined *)0x0;
      puVar9 = param_2;
      _objc_msgSend(param_2,PTR_s_objectForJSONString_error__1126159d8,puVar6,apuStack_78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar4 = apuStack_78[0];
      if (puVar9 == (undefined *)0x0) {
        puVar9 = apuStack_78[0];
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(puVar9);
        _swift_willThrow();
        _swift_errorRelease(puVar4);
        param_2 = puVar4;
      }
      else {
        _objc_retain();
        __ss018_bridgeAnyObjectToB0yypyXlSgF(apuStack_78,puVar9);
        _swift_unknownObjectRelease(puVar9);
        uVar8 = 0x11309d9a8;
        func_0x0001048db364(0x11309d9a8);
        ppuVar7 = apuStack_88;
        _swift_dynamicCast(ppuVar7,apuStack_78,PTR___sypN_11034f1a8 + 8,uVar8,6);
        puVar4 = puVar9;
        if (((ulong)ppuVar7 & 1) != 0) {
          uVar8 = 0;
          FUN_1049246d8(0);
          puVar9 = apuStack_88[0];
          FUN_10491ead0(apuStack_88[0],uVar8);
          (**(code **)(lVar21 + 8))(lVar17,lVar5);
          puVar4 = puVar9;
          goto LAB_104930528;
        }
      }
    }
    (**(code **)(lVar21 + 8))(lVar17,lVar5);
  }
  puVar9 = (undefined *)0x0;
LAB_104930528:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar17 + -0x70) = unaff_d9;
  *(undefined8 *)(lVar17 + -0x68) = unaff_d8;
  *(undefined8 *)(lVar17 + -0x60) = unaff_x28;
  *(undefined8 *)(lVar17 + -0x58) = unaff_x27;
  *(undefined8 *)(lVar17 + -0x50) = unaff_x26;
  *(long *)(lVar17 + -0x48) = lVar21;
  *(undefined8 *)(lVar17 + -0x40) = unaff_x24;
  *(undefined **)(lVar17 + -0x38) = puVar6;
  *(long *)(lVar17 + -0x30) = lVar17;
  *(undefined **)(lVar17 + -0x28) = param_2;
  *(undefined **)(lVar17 + -0x20) = puVar4;
  *(long *)(lVar17 + -0x18) = lVar5;
  *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar17 + -8) = FUN_104930594;
  lVar5 = 0x11309c628;
  func_0x0001048db364();
  lVar16 = (lVar17 + -0xe0) - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = 0;
  __s10Foundation4DateVMa();
  lVar18 = *(long *)(lVar21 + -8);
  uVar13 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar16 - uVar13;
  if (((ulong)puVar9 & 1) == 0) {
    *(ulong *)(lVar17 + -0xd8) = lVar14 - uVar13;
    *(long *)(lVar17 + -0xd0) = lVar14;
    if (lRam000000011309d038 != -1) {
      _swift_once(0x11309d038,FUN_1049292fc);
    }
    *(long *)(lVar17 + -200) = lVar18;
    puVar11 = (ulong *)(lVar17 - 0x88);
    _swift_beginAccess(0x113815790,puVar11,0,0);
    puVar2 = puRam0000000113815790;
    *(long *)(lVar17 + -0xc0) = lVar21;
    puVar19 = (ulong *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
    if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
      puVar22 = (ulong *)puVar19[2];
    }
    else {
      puVar22 = puVar19;
      if ((long)puRam0000000113815790 < 0) {
        puVar22 = puRam0000000113815790;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar2);
    puVar6 = PTR__swift_isaMask_11034f488;
    puVar23 = (ulong *)0x0;
    do {
      if (puVar22 == puVar23) {
        _swift_bridgeObjectRelease(puVar2);
        if (lRam000000011309d040 != -1) {
          _swift_once(0x11309d040,FUN_104929514);
        }
        func_0x000100028790(lVar5,0x113815798);
        _swift_beginAccess();
        FUN_104934c24(lVar5,lVar16,0x11309c628);
        lVar5 = *(long *)(lVar17 + -200);
        uVar8 = *(undefined8 *)(lVar17 + -0xc0);
        lVar21 = lVar16;
        (**(code **)(lVar5 + 0x30))(lVar16,1,uVar8);
        if ((int)lVar21 != 1) {
          uVar20 = *(undefined8 *)(lVar17 + -0xd8);
          (**(code **)(lVar5 + 0x20))(uVar20,lVar16,uVar8);
          uVar15 = *(undefined8 *)(lVar17 + -0xd0);
          __s10Foundation4DateVACycfC(uVar15);
          __s10Foundation4DateV17timeIntervalSinceySdACF(uVar20);
          pcVar3 = *(code **)(lVar5 + 8);
          (*pcVar3)(uVar15,uVar8);
          (*pcVar3)(uVar20,uVar8);
          if (86400.0 <= param_1) {
            return (undefined *)0x1;
          }
          if (lRam000000011309d030 != -1) {
            _swift_once(0x11309d030,FUN_104929090);
          }
          _swift_beginAccess(0x113815788,lVar17 + -0xb8,0,0);
          return (undefined *)(ulong)(*(long *)(lRam0000000113815788 + 0x10) == 0);
        }
        FUN_1049349e8(lVar16,0x11309c628);
        return (undefined *)0x1;
      }
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if ((ulong *)puVar19[2] <= puVar23) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104930858);
          (*pcVar3)();
        }
        puVar10 = (ulong *)puVar2[(long)puVar23 + 4];
        _objc_retain();
        puVar12 = puVar11;
      }
      else {
        puVar10 = puVar23;
        puVar12 = puVar2;
        FUN_10491ac20();
      }
      if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104930854);
        (*pcVar3)();
      }
      (**(code **)((*(ulong *)puVar6 & *puVar10) + 0x128))();
      puVar11 = puVar12;
      _objc_release(puVar10);
      puVar23 = (ulong *)((long)puVar23 + 1);
    } while (puVar12 == (ulong *)0x0);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(puVar12);
  }
  return (undefined *)0x1;
}



/* Entry: 104930594; end: 1049308b3;  */

bool FUN_104930594(double param_1,ulong param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [48];
  ulong auStack_88 [3];
  
  lVar6 = 0x11309c628;
  func_0x0001048db364();
  puVar13 = auStack_e0 + -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lStack_c8 = *(long *)(lVar7 + -8);
  uVar12 = *(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_d0 = (long)puVar13 - uVar12;
  lStack_d8 = lStack_d0 - uVar12;
  if ((param_2 & 1) == 0) {
    if (lRam000000011309d038 != -1) {
      _swift_once(0x11309d038,FUN_1049292fc);
    }
    puVar10 = auStack_88;
    _swift_beginAccess(0x113815790,puVar10,0,0);
    puVar2 = puRam0000000113815790;
    puVar14 = (ulong *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
    lStack_c0 = lVar7;
    if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
      puVar15 = (ulong *)puVar14[2];
    }
    else {
      puVar15 = puVar14;
      if ((long)puRam0000000113815790 < 0) {
        puVar15 = puRam0000000113815790;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar2);
    puVar1 = PTR__swift_isaMask_11034f488;
    puVar16 = (ulong *)0x0;
    do {
      if (puVar15 == puVar16) {
        _swift_bridgeObjectRelease(puVar2);
        if (lRam000000011309d040 != -1) {
          _swift_once(0x11309d040,FUN_104929514);
        }
        func_0x000100028790(lVar6,0x113815798);
        _swift_beginAccess();
        FUN_104934c24(lVar6,puVar13,0x11309c628);
        lVar4 = lStack_c0;
        lVar7 = lStack_c8;
        puVar9 = puVar13;
        (**(code **)(lStack_c8 + 0x30))(puVar13,1,lStack_c0);
        lVar6 = lStack_d8;
        if ((int)puVar9 != 1) {
          (**(code **)(lVar7 + 0x20))(lStack_d8,puVar13,lVar4);
          lVar3 = lStack_d0;
          __s10Foundation4DateVACycfC(lStack_d0);
          __s10Foundation4DateV17timeIntervalSinceySdACF(lVar6);
          pcVar5 = *(code **)(lVar7 + 8);
          (*pcVar5)(lVar3,lVar4);
          (*pcVar5)(lVar6,lVar4);
          if (86400.0 <= param_1) {
            return true;
          }
          if (lRam000000011309d030 != -1) {
            _swift_once(0x11309d030,FUN_104929090);
          }
          _swift_beginAccess(0x113815788,auStack_b8,0,0);
          return *(long *)(lRam0000000113815788 + 0x10) == 0;
        }
        FUN_1049349e8(puVar13,0x11309c628);
        return true;
      }
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if ((ulong *)puVar14[2] <= puVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104930858);
          (*pcVar5)();
        }
        puVar8 = (ulong *)puVar2[(long)puVar16 + 4];
        _objc_retain();
        puVar11 = puVar10;
      }
      else {
        puVar8 = puVar16;
        puVar11 = puVar2;
        FUN_10491ac20();
      }
      if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104930854);
        (*pcVar5)();
      }
      (**(code **)((*(ulong *)puVar1 & *puVar8) + 0x128))();
      puVar10 = puVar11;
      _objc_release(puVar8);
      puVar16 = (ulong *)((long)puVar16 + 1);
    } while (puVar11 == (ulong *)0x0);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(puVar11);
  }
  return true;
}



/* Entry: 1049308b4; end: 104930c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_1049308b4(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  ulong *unaff_x23;
  ulong *unaff_x24;
  undefined1 auStack_2a0 [272];
  ulong *puStack_190;
  ulong *puStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  ulong *apuStack_158 [3];
  undefined1 auStack_140 [24];
  long lStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  ulong **ppuStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  ulong *apuStack_d8 [2];
  ulong *puStack_c8;
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  ulong *puStack_98;
  undefined *puStack_88;
  ulong auStack_80 [3];
  long lStack_68;
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000100214a84();
  _swift_release(puVar9);
  lVar3 = lRam000000011309d038;
  puStack_c8 = puVar5;
  _swift_retain(puVar9);
  if (lVar3 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  puVar5 = auStack_80;
  _swift_beginAccess(0x113815790,puVar5,0,0);
  puVar12 = puRam0000000113815790;
  if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
    puVar16 = *(ulong **)(((ulong)puRam0000000113815790 & 0xfffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar16 = (ulong *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
    if ((long)puRam0000000113815790 < 0) {
      puVar16 = puRam0000000113815790;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (puVar16 != (ulong *)0x0) {
    if ((long)puVar16 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104930c64);
      (*pcVar4)();
    }
    _swift_bridgeObjectRetain(puVar12);
    unaff_x23 = (ulong *)0x0;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        puVar6 = (ulong *)puVar12[(long)((long)unaff_x23 + 4)];
        _objc_retain();
        puVar13 = puVar5;
      }
      else {
        puVar6 = unaff_x23;
        puVar13 = puVar12;
        FUN_10491ac20();
      }
      puVar7 = puVar6;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x128))();
      puVar5 = puVar13;
      if (puVar13 != (ulong *)0x0) {
        puVar8 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar10 = puVar9;
        if (((ulong)puVar8 & 1) == 0) {
          puVar5 = (ulong *)(*(long *)(puVar9 + 0x10) + 1);
          puVar10 = (undefined *)0x0;
          func_0x0001000d182c(0,puVar5,1,puVar9);
        }
        uVar2 = *(ulong *)(puVar10 + 0x10);
        puVar1 = (ulong *)(uVar2 + 1);
        puVar9 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          puVar5 = puVar1;
          func_0x0001000d182c(puVar9,puVar1,1,puVar10);
        }
        *(ulong **)(puVar9 + 0x10) = puVar1;
        *(ulong **)(puVar9 + uVar2 * 0x10 + 0x20) = puVar7;
        *(ulong **)(puVar9 + uVar2 * 0x10 + 0x28) = puVar13;
        unaff_x24 = puVar7;
      }
      unaff_x23 = (ulong *)((long)unaff_x23 + 1);
      _objc_release(puVar6);
    } while (puVar16 != unaff_x23);
    _swift_bridgeObjectRelease(puVar12);
  }
  puVar10 = PTR_PTR_1126add58;
  _swift_getInitializedObjCClass();
  puVar8 = PTR___sSSN_11034da80;
  puVar11 = puVar9;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar9,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(puVar9);
  puStack_a0 = (undefined *)0x0;
  puVar5 = (ulong *)PTR_s_JSONStringForObject_error_invali_11254e010;
  _objc_msgSend(puVar10,PTR_s_JSONStringForObject_error_invali_11254e010,puVar11,&puStack_a0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar9 = puStack_a0;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = puStack_a0;
    _objc_retain(puStack_a0);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar10);
    _swift_willThrow();
    _swift_errorRelease(puVar9);
    puVar11 = puVar9;
  }
  else {
    puVar11 = puVar10;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_retain(puVar9);
    _objc_release(puVar10);
    unaff_x23 = puVar5;
    if (puVar5 != (ulong *)0x0) {
      puStack_88 = puVar8;
      puStack_a0 = puVar11;
      puStack_98 = puVar5;
      func_0x000100102924(&puStack_a0,auStack_c0);
      puVar5 = puStack_c8;
      puVar12 = puStack_c8;
      _swift_isUniquelyReferenced_nonNull_native(puStack_c8);
      apuStack_d8[0] = puVar5;
      func_0x0001001029e8(auStack_c0,0x7369747265766461,0xee007364695f7265,puVar12);
      puVar5 = apuStack_d8[0];
      goto LAB_104930be0;
    }
  }
  func_0x000100216878(auStack_c0,0x7369747265766461,0xee007364695f7265);
  FUN_1049349e8(auStack_c0,0x11309c428);
  puVar5 = puStack_c8;
LAB_104930be0:
  puStack_88 = puVar8;
  puStack_a0 = (undefined *)0x0;
  puStack_98 = (ulong *)0xe000000000000000;
  func_0x000100102924(&puStack_a0,auStack_c0);
  puVar12 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native(puVar5);
  apuStack_d8[0] = puVar5;
  func_0x0001001029e8(auStack_c0,0x73646c656966,0xe600000000000000,puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return apuStack_d8[0];
  }
  ___stack_chk_fail(apuStack_d8[0]);
  puStack_f8 = puVar8;
  pcStack_e8 = FUN_104930c68;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (ulong *)PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  puStack_120 = unaff_x24;
  puStack_118 = unaff_x23;
  puStack_110 = puVar11;
  puStack_108 = puVar9;
  ppuStack_100 = apuStack_d8;
  puStack_f0 = &stack0xfffffffffffffff0;
  _swift_getInitializedObjCClass();
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_140,0,0);
  puVar12 = puRam0000000113815790;
  FUN_1049246d8(0);
  puVar16 = puVar12;
  _swift_bridgeObjectRetain();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(puVar12);
  apuStack_158[0] = (ulong *)0x0;
  puVar6 = (ulong *)PTR_s_archivedDataWithRootObject_requi_11259ff88;
  _objc_msgSend(puVar5,PTR_s_archivedDataWithRootObject_requi_11259ff88,puVar16,0,apuStack_158);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar12 = apuStack_158[0];
  _objc_retain();
  if (puVar5 == (ulong *)0x0) {
    puVar13 = puVar12;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar12);
    _swift_willThrow();
    puVar5 = puVar13;
    _swift_errorRelease();
    puStack_188 = puVar13;
  }
  else {
    puVar13 = puVar5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar5);
    _swift_beginAccess(0x113815778,apuStack_158,0,0);
    puVar7 = puRam0000000113815780;
    puVar5 = puRam0000000113815778;
    if (puRam0000000113815780 != (ulong *)0x0) {
      _swift_bridgeObjectRetain(puRam0000000113815780);
      puVar12 = puVar13;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar13,puVar6);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar5,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      _objc_msgSend(puVar12,PTR_s_writeToFile_atomically__11268d368,puVar5,1);
      _objc_release(puVar12);
      _objc_release(puVar5);
      puVar16 = puVar5;
    }
    puVar5 = puVar13;
    func_0x00010006c090(puVar13,puVar6);
    puVar12 = puVar6;
    puStack_188 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar15 = auStack_2a0;
  pcStack_168 = FUN_104930e54;
  puVar6 = (ulong *)0x11309c610;
  puStack_190 = puVar16;
  puStack_180 = puVar13;
  puStack_178 = puVar12;
  ppuStack_170 = &puStack_f0;
  func_0x0001048db364();
  _swift_initStackObject();
  puVar6[3] = 10;
  puVar6[2] = 5;
  puVar6[4] = 0x6e676961706d6163;
  puVar6[5] = 0xeb0000000064695f;
  puVar12 = puVar6;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0xe0))();
  puVar9 = PTR___sSSN_11034da80;
  puVar6[6] = (ulong)puVar12;
  puVar6[7] = (ulong)puVar15;
  puVar6[9] = (ulong)puVar9;
  puVar6[10] = 0x69737265766e6f63;
  puVar8 = PTR___sSiN_11034deb0;
  puVar6[0xb] = 0xef617461645f6e6f;
  puVar6[0xc] = 0;
  puVar6[0xf] = (ulong)puVar8;
  puVar6[0x10] = 0xd000000000000010;
  puVar6[0x11] = 0x800000010f21d350;
  puVar6[0x12] = 0;
  puVar6[0x15] = (ulong)puVar8;
  puVar6[0x16] = 0x6e656b6f74;
  puVar6[0x17] = 0xe500000000000000;
  uVar2 = ((ulong *)((long)puVar5 + _DAT_11309d810))[1];
  puVar6[0x18] = *(ulong *)((long)puVar5 + _DAT_11309d810);
  puVar6[0x19] = uVar2;
  puVar6[0x1b] = (ulong)puVar9;
  puVar6[0x1c] = 0x6c665f79616c6564;
  puVar6[0x21] = (ulong)puVar9;
  puVar6[0x1d] = 0xea0000000000776f;
  puVar6[0x1e] = 0x726576726573;
  puVar6[0x1f] = 0xe600000000000000;
  _swift_bridgeObjectRetain();
  puVar5 = puVar6;
  func_0x000100214a84(puVar6);
  _swift_setDeallocating(puVar6);
  uVar14 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar6 + 4,5,uVar14);
  return puVar5;
}



/* Entry: 104930c68; end: 104930e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_104930c68(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_1c0 [272];
  undefined8 uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  ulong *apuStack_78 [3];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (ulong *)PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _swift_getInitializedObjCClass();
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_60,0,0);
  uVar8 = uRam0000000113815790;
  FUN_1049246d8(0);
  uVar6 = uVar8;
  _swift_bridgeObjectRetain();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar8);
  apuStack_78[0] = (ulong *)0x0;
  puVar10 = (ulong *)PTR_s_archivedDataWithRootObject_requi_11259ff88;
  _objc_msgSend(puVar5,PTR_s_archivedDataWithRootObject_requi_11259ff88,uVar6,0,apuStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar7 = apuStack_78[0];
  _objc_retain();
  if (puVar5 == (ulong *)0x0) {
    puVar9 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    puVar5 = puVar9;
    _swift_errorRelease();
    puStack_a8 = puVar9;
  }
  else {
    puVar9 = puVar5;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar5);
    _swift_beginAccess(0x113815778,apuStack_78,0,0);
    puVar4 = puRam0000000113815780;
    uVar8 = uRam0000000113815778;
    if (puRam0000000113815780 != (ulong *)0x0) {
      _swift_bridgeObjectRetain(puRam0000000113815780);
      puVar5 = puVar9;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar9,puVar10);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,puVar4);
      _swift_bridgeObjectRelease(puVar4);
      _objc_msgSend(puVar5,PTR_s_writeToFile_atomically__11268d368,uVar8,1);
      _objc_release(puVar5);
      _objc_release(uVar8);
      uVar6 = uVar8;
    }
    puVar5 = puVar9;
    func_0x00010006c090(puVar9,puVar10);
    puVar7 = puVar10;
    puStack_a8 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar11 = auStack_1c0;
  pcStack_88 = FUN_104930e54;
  puVar10 = (ulong *)0x11309c610;
  uStack_b0 = uVar6;
  puStack_a0 = puVar9;
  puStack_98 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001048db364();
  _swift_initStackObject();
  puVar10[3] = 10;
  puVar10[2] = 5;
  puVar10[4] = 0x6e676961706d6163;
  puVar10[5] = 0xeb0000000064695f;
  puVar7 = puVar10;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0xe0))();
  puVar2 = PTR___sSSN_11034da80;
  puVar10[6] = (ulong)puVar7;
  puVar10[7] = (ulong)puVar11;
  puVar10[9] = (ulong)puVar2;
  puVar10[10] = 0x69737265766e6f63;
  puVar3 = PTR___sSiN_11034deb0;
  puVar10[0xb] = 0xef617461645f6e6f;
  puVar10[0xc] = 0;
  puVar10[0xf] = (ulong)puVar3;
  puVar10[0x10] = 0xd000000000000010;
  puVar10[0x11] = 0x800000010f21d350;
  puVar10[0x12] = 0;
  puVar10[0x15] = (ulong)puVar3;
  puVar10[0x16] = 0x6e656b6f74;
  puVar10[0x17] = 0xe500000000000000;
  uVar1 = ((ulong *)((long)puVar5 + _DAT_11309d810))[1];
  puVar10[0x18] = *(ulong *)((long)puVar5 + _DAT_11309d810);
  puVar10[0x19] = uVar1;
  puVar10[0x1b] = (ulong)puVar2;
  puVar10[0x1c] = 0x6c665f79616c6564;
  puVar10[0x21] = (ulong)puVar2;
  puVar10[0x1d] = 0xea0000000000776f;
  puVar10[0x1e] = 0x726576726573;
  puVar10[0x1f] = 0xe600000000000000;
  _swift_bridgeObjectRetain();
  puVar5 = puVar10;
  func_0x000100214a84(puVar10);
  _swift_setDeallocating(puVar10);
  uVar8 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar10 + 4,5,uVar8);
  return puVar5;
}



/* Entry: 104930e54; end: 104930fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104930e54(ulong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_140 [272];
  
  puVar6 = auStack_140;
  lVar3 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = 10;
  *(undefined8 *)(lVar3 + 0x10) = 5;
  *(undefined8 *)(lVar3 + 0x20) = 0x6e676961706d6163;
  *(undefined8 *)(lVar3 + 0x28) = 0xeb0000000064695f;
  lVar4 = lVar3;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0xe0))();
  puVar1 = PTR___sSSN_11034da80;
  *(long *)(lVar3 + 0x30) = lVar4;
  *(undefined1 **)(lVar3 + 0x38) = puVar6;
  *(undefined **)(lVar3 + 0x48) = puVar1;
  *(undefined8 *)(lVar3 + 0x50) = 0x69737265766e6f63;
  puVar2 = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar3 + 0x58) = 0xef617461645f6e6f;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined **)(lVar3 + 0x78) = puVar2;
  *(undefined8 *)(lVar3 + 0x80) = 0xd000000000000010;
  *(undefined8 *)(lVar3 + 0x88) = 0x800000010f21d350;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined **)(lVar3 + 0xa8) = puVar2;
  *(undefined8 *)(lVar3 + 0xb0) = 0x6e656b6f74;
  *(undefined8 *)(lVar3 + 0xb8) = 0xe500000000000000;
  uVar5 = ((undefined8 *)((long)param_1 + _DAT_11309d810))[1];
  *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)((long)param_1 + _DAT_11309d810);
  *(undefined8 *)(lVar3 + 200) = uVar5;
  *(undefined **)(lVar3 + 0xd8) = puVar1;
  *(undefined8 *)(lVar3 + 0xe0) = 0x6c665f79616c6564;
  *(undefined **)(lVar3 + 0x108) = puVar1;
  *(undefined8 *)(lVar3 + 0xe8) = 0xea0000000000776f;
  *(undefined8 *)(lVar3 + 0xf0) = 0x726576726573;
  *(undefined8 *)(lVar3 + 0xf8) = 0xe600000000000000;
  _swift_bridgeObjectRetain();
  lVar4 = lVar3;
  func_0x000100214a84(lVar3);
  _swift_setDeallocating(lVar3);
  uVar5 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy((undefined8 *)(lVar3 + 0x20),5,uVar5);
  return lVar4;
}



/* Entry: 104930fe4; end: 104931447;  */

void FUN_104930fe4(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uStack_210;
  undefined8 auStack_208 [6];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  long alStack_1a8 [15];
  undefined auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_130 + lVar8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  FUN_104930e54();
  puVar9 = (undefined *)0x0;
  func_0x0001014f1044(0,1,1,puVar14);
  uVar4 = *(ulong *)(puVar9 + 0x10);
  puVar14 = puVar9;
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar4) {
    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    func_0x0001014f1044(puVar14,uVar4 + 1,1,puVar9);
  }
  *(ulong *)(puVar14 + 0x10) = uVar4 + 1;
  *(undefined8 *)(puVar14 + uVar4 * 8 + 0x20) = param_1;
  puVar9 = PTR_PTR_1126add78;
  _swift_getInitializedObjCClass();
  uVar10 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  puVar6 = puVar14;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar14,uVar10);
  puStack_128 = (undefined *)0x0;
  puVar15 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
  _objc_msgSend(puVar9,PTR_s_dataWithJSONObject_options_error_1125b6c80,puVar6,0,&puStack_128);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puStack_128;
  _objc_retain();
  if (puVar9 == (undefined *)0x0) {
    puVar13 = puVar6;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar6);
    _swift_willThrow();
    _swift_errorRelease(puVar13);
    puVar12 = puVar14;
    puVar7 = puVar13;
  }
  else {
    puVar13 = puVar9;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar9);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar7);
    puVar11 = puVar13;
    puVar12 = puVar15;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar13,puVar15,puVar7);
    if (puVar12 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar14);
      func_0x00010006c090(puVar13,puVar15);
      goto LAB_1049313ec;
    }
    _swift_beginAccess(0x113815730,auStack_88,0,0);
    puVar7 = puRam0000000113815730;
    if (puRam0000000113815730 != (undefined *)0x0) {
      puStack_128 = (undefined *)0x0;
      uStack_120 = 0xe000000000000000;
      _swift_beginAccess(0x113815738,auStack_a0,0,0);
      lVar17 = lRam0000000113815740;
      uVar10 = 0x296c6c756e28;
      if (lRam0000000113815740 != 0) {
        uVar10 = uRam0000000113815738;
      }
      lVar1 = -0x1a00000000000000;
      if (lRam0000000113815740 != 0) {
        lVar1 = lRam0000000113815740;
      }
      _swift_unknownObjectRetain(puVar7);
      _swift_bridgeObjectRetain(lVar17);
      _swift_bridgeObjectRelease(puVar14);
      __sSS6appendyySSF(uVar10,lVar1);
      _swift_bridgeObjectRelease(lVar1);
      __sSS6appendyySSF(0x2f,0xe100000000000000);
      unaff_x26 = 0xef736e6f69737265;
      __sSS6appendyySSF(0x766e6f635f6d6561,0xef736e6f69737265);
      uVar10 = uStack_120;
      puVar14 = puStack_128;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_128,uStack_120);
      _swift_bridgeObjectRelease(uVar10);
      unaff_x27 = (undefined *)0x11309c610;
      func_0x0001048db364();
      _swift_initStackObject();
      *(undefined8 *)(unaff_x27 + 0x18) = 2;
      *(undefined8 *)(unaff_x27 + 0x10) = 1;
      unaff_x28 = (undefined8 *)(unaff_x27 + 0x20);
      *unaff_x28 = 0x766e6f635f6d6561;
      puVar6 = PTR___sSSN_11034da80;
      *(undefined **)(unaff_x27 + 0x48) = PTR___sSSN_11034da80;
      *(undefined8 *)(unaff_x27 + 0x28) = 0xef736e6f69737265;
      *(undefined **)(unaff_x27 + 0x30) = puVar11;
      *(undefined **)(unaff_x27 + 0x38) = puVar12;
      puVar12 = unaff_x27;
      func_0x000100214a84();
      _swift_setDeallocating(unaff_x27);
      FUN_1049349e8(unaff_x28,0x11309c418);
      puVar9 = puVar12;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (puVar12,puVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      _swift_bridgeObjectRelease(puVar12);
      unaff_x24 = (undefined *)0x54534f50;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54534f50,0xe400000000000000);
      pcStack_108 = FUN_10492e394;
      uStack_100 = 0;
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0x42000000;
      puStack_118 = &UNK_101201f78;
      puStack_110 = &UNK_1107b8c80;
      unaff_x25 = &puStack_128;
      __Block_copy();
      _objc_msgSend(puVar7,PTR_s_startGraphRequestWithGraphPath_p_112525210,puVar14,puVar9,0,
                    unaff_x24,unaff_x25);
      func_0x00010006c090(puVar13,puVar15);
      _swift_unknownObjectRelease(puVar7);
      __Block_release(unaff_x25);
      _objc_release(puVar14);
      _objc_release(puVar9);
      _objc_release(unaff_x24);
      goto LAB_1049313ec;
    }
    _swift_bridgeObjectRelease(puVar14);
    func_0x00010006c090(puVar13,puVar15);
    puVar6 = puVar15;
    puVar9 = puVar12;
    unaff_x24 = puVar11;
  }
  _swift_bridgeObjectRelease(puVar12);
  puVar15 = puVar6;
LAB_1049313ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lRam000000011309d050;
  lVar17 = *(long *)(puVar14 + 0x10);
  uVar10 = *(undefined8 *)(puVar14 + 0x18);
  uVar16 = *(undefined8 *)(puVar14 + 0x20);
  bVar3 = puVar14[0x28];
  *(undefined8 **)((long)alStack_1a8 + lVar8 + 0x18) = unaff_x28;
  *(undefined **)((long)alStack_1a8 + lVar8 + 0x20) = unaff_x27;
  *(undefined8 *)((long)alStack_1a8 + lVar8 + 0x28) = unaff_x26;
  *(undefined ***)((long)alStack_1a8 + lVar8 + 0x30) = unaff_x25;
  *(undefined **)((long)alStack_1a8 + lVar8 + 0x38) = unaff_x24;
  *(undefined **)((long)alStack_1a8 + lVar8 + 0x40) = puVar9;
  *(undefined **)((long)alStack_1a8 + lVar8 + 0x48) = puVar7;
  *(undefined **)((long)alStack_1a8 + lVar8 + 0x50) = puVar13;
  *(undefined **)((long)alStack_1a8 + lVar8 + 0x58) = puVar14;
  *(undefined **)((long)alStack_1a8 + lVar8 + 0x60) = puVar15;
  *(undefined1 **)((long)alStack_1a8 + lVar8 + 0x68) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_1a8 + lVar8 + 0x70) = FUN_104931448;
  *(undefined8 *)((long)&uStack_210 + lVar8) = uVar16;
  if (lVar17 != 0) {
    _swift_retain(uVar10);
    if (lVar1 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    puVar14 = &UNK_1107b8c18;
    _swift_allocObject(&UNK_1107b8c18,0x20,7);
    *(long *)(puVar14 + 0x10) = lVar17;
    *(undefined8 *)(puVar14 + 0x18) = uVar10;
    _swift_beginAccess(0x1138157c8,(long)auStack_208 + lVar8,0x21,0);
    puVar7 = puRam00000001138157c8;
    _swift_retain(uVar10);
    puVar9 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar9 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      puRam00000001138157c8 = puVar7;
      func_0x0001049153d0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar4 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      puRam00000001138157c8 = puVar6;
      func_0x0001049153d0(puVar7,uVar4 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar4 + 1;
    *(code **)(puVar7 + uVar4 * 0x10 + 0x20) = FUN_104934bec;
    *(undefined **)(puVar7 + uVar4 * 0x10 + 0x28) = puVar14;
    puRam00000001138157c8 = puVar7;
    _swift_endAccess((long)auStack_208 + lVar8);
    func_0x000100dc2b4c(lVar17,uVar10);
  }
  uVar4 = (ulong)(bVar3 & 1);
  FUN_104930594();
  if ((uVar4 & 1) == 0) {
    if (lRam000000011309d050 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    _swift_beginAccess(0x1138157c8,(long)auStack_208 + lVar8,1,0);
    puVar14 = puRam00000001138157c8;
    lVar17 = *(long *)(puRam00000001138157c8 + 0x10);
    if (lVar17 != 0) {
      _swift_bridgeObjectRetain(puRam00000001138157c8);
      puVar18 = (undefined8 *)(puVar14 + 0x28);
      do {
        pcVar2 = (code *)puVar18[-1];
        uVar10 = *puVar18;
        *(undefined8 *)((long)alStack_1a8 + lVar8) = 0;
        _swift_retain(uVar10);
        (*pcVar2)((long)alStack_1a8 + lVar8);
        _swift_release(uVar10);
        puVar18 = puVar18 + 2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      _swift_bridgeObjectRelease(puVar14);
      puVar14 = puRam00000001138157c8;
    }
    puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    _swift_bridgeObjectRelease(puVar14);
  }
  else {
    _swift_beginAccess(0x113815769,(long)alStack_1a8 + lVar8,1,0);
    if ((bRam0000000113815769 & 1) == 0) {
      bRam0000000113815769 = 1;
      _swift_beginAccess(0x113815730,auStack_1c0 + lVar8,0,0);
      puVar14 = puRam0000000113815730;
      if (puRam0000000113815730 != (undefined *)0x0) {
        *(undefined8 *)((long)auStack_208 + lVar8) = 0;
        *(undefined8 *)((long)auStack_208 + lVar8 + 8) = 0xe000000000000000;
        _swift_beginAccess(0x113815738,auStack_1d8 + lVar8,0,0);
        lVar17 = lRam0000000113815740;
        uVar10 = 0x296c6c756e28;
        if (lRam0000000113815740 != 0) {
          uVar10 = uRam0000000113815738;
        }
        lVar1 = -0x1a00000000000000;
        if (lRam0000000113815740 != 0) {
          lVar1 = lRam0000000113815740;
        }
        _swift_unknownObjectRetain(puVar14);
        _swift_bridgeObjectRetain(lVar17);
        __sSS6appendyySSF(uVar10,lVar1);
        _swift_bridgeObjectRelease(lVar1);
        __sSS6appendyySSF(0x2f,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000016,0x800000010f21d400);
        uVar10 = *(undefined8 *)((long)auStack_208 + lVar8);
        uVar16 = *(undefined8 *)((long)auStack_208 + lVar8 + 8);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar16);
        _swift_bridgeObjectRelease(uVar16);
        FUN_1049308b4();
        uVar5 = uVar16;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
        _swift_bridgeObjectRelease(uVar16);
        uVar16 = 0x544547;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544547,0xe300000000000000);
        puVar7 = &UNK_1107b8bc8;
        _swift_allocObject(&UNK_1107b8bc8,0x18,7);
        *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)((long)&uStack_210 + lVar8);
        *(code **)((long)auStack_208 + lVar8 + 0x20) = FUN_104934be4;
        *(undefined **)((long)auStack_208 + lVar8 + 0x28) = puVar7;
        *(undefined **)((long)auStack_208 + lVar8) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)auStack_208 + lVar8 + 8) = 0x42000000;
        *(undefined **)((long)auStack_208 + lVar8 + 0x10) = &UNK_101201f78;
        *(undefined **)((long)auStack_208 + lVar8 + 0x18) = &UNK_1107b8be0;
        lVar17 = (long)auStack_208 + lVar8;
        __Block_copy(lVar17);
        _swift_release(*(undefined8 *)((long)auStack_208 + lVar8 + 0x28));
        _objc_msgSend(puVar14,PTR_s_startGraphRequestWithGraphPath_p_112525210,uVar10,uVar5,0,uVar16
                      ,lVar17);
        _swift_unknownObjectRelease(puVar14);
        __Block_release(lVar17);
        _objc_release(uVar10);
        _objc_release(uVar5);
        _objc_release(uVar16);
      }
    }
  }
  return;
}



/* Entry: 104931448; end: 104931457;  */

void FUN_104931448(void)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 *puVar15;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  
  lVar4 = lRam000000011309d050;
  lVar14 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  if (lVar14 != 0) {
    _swift_retain(uVar9);
    if (lVar4 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    puVar5 = &UNK_1107b8c18;
    _swift_allocObject(&UNK_1107b8c18,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar14;
    *(undefined8 *)(puVar5 + 0x18) = uVar9;
    _swift_beginAccess(0x1138157c8,&puStack_d8,0x21,0);
    puVar12 = puRam00000001138157c8;
    _swift_retain(uVar9);
    puVar6 = puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar11 = puVar12;
    if (((ulong)puVar6 & 1) == 0) {
      puVar11 = (undefined *)0x0;
      puRam00000001138157c8 = puVar12;
      func_0x0001049153d0(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
    }
    uVar7 = *(ulong *)(puVar11 + 0x10);
    puVar12 = puVar11;
    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar7) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
      puRam00000001138157c8 = puVar11;
      func_0x0001049153d0(puVar12,uVar7 + 1,1,puVar11);
    }
    *(ulong *)(puVar12 + 0x10) = uVar7 + 1;
    *(code **)(puVar12 + uVar7 * 0x10 + 0x20) = FUN_104934bec;
    *(undefined **)(puVar12 + uVar7 * 0x10 + 0x28) = puVar5;
    puRam00000001138157c8 = puVar12;
    _swift_endAccess(&puStack_d8);
    func_0x000100dc2b4c(lVar14,uVar9);
  }
  uVar7 = (ulong)(bVar3 & 1);
  FUN_104930594();
  if ((uVar7 & 1) == 0) {
    if (lRam000000011309d050 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    _swift_beginAccess(0x1138157c8,&puStack_d8,1,0);
    puVar5 = puRam00000001138157c8;
    lVar14 = *(long *)(puRam00000001138157c8 + 0x10);
    if (lVar14 != 0) {
      _swift_bridgeObjectRetain(puRam00000001138157c8);
      puVar15 = (undefined8 *)(puVar5 + 0x28);
      do {
        pcVar2 = (code *)puVar15[-1];
        uVar9 = *puVar15;
        auStack_78[0] = 0;
        _swift_retain(uVar9);
        (*pcVar2)(auStack_78);
        _swift_release(uVar9);
        puVar15 = puVar15 + 2;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      _swift_bridgeObjectRelease(puVar5);
      puVar5 = puRam00000001138157c8;
    }
    puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    _swift_bridgeObjectRelease(puVar5);
  }
  else {
    _swift_beginAccess(0x113815769,auStack_78,1,0);
    if ((bRam0000000113815769 & 1) == 0) {
      bRam0000000113815769 = 1;
      _swift_beginAccess(0x113815730,auStack_90,0,0);
      lVar14 = lRam0000000113815730;
      if (lRam0000000113815730 != 0) {
        puStack_d8 = (undefined *)0x0;
        uStack_d0 = 0xe000000000000000;
        _swift_beginAccess(0x113815738,auStack_a8,0,0);
        lVar4 = lRam0000000113815740;
        uVar9 = 0x296c6c756e28;
        if (lRam0000000113815740 != 0) {
          uVar9 = uRam0000000113815738;
        }
        lVar1 = -0x1a00000000000000;
        if (lRam0000000113815740 != 0) {
          lVar1 = lRam0000000113815740;
        }
        _swift_unknownObjectRetain(lVar14);
        _swift_bridgeObjectRetain(lVar4);
        __sSS6appendyySSF(uVar9,lVar1);
        _swift_bridgeObjectRelease(lVar1);
        __sSS6appendyySSF(0x2f,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000016,0x800000010f21d400);
        uVar9 = uStack_d0;
        puVar12 = puStack_d8;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d8,uStack_d0);
        _swift_bridgeObjectRelease(uVar9);
        FUN_1049308b4();
        uVar8 = uVar9;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
        _swift_bridgeObjectRelease(uVar9);
        uVar9 = 0x544547;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544547,0xe300000000000000);
        puVar5 = &UNK_1107b8bc8;
        _swift_allocObject(&UNK_1107b8bc8,0x18,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar13;
        pcStack_b8 = FUN_104934be4;
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_101201f78;
        puStack_c0 = &UNK_1107b8be0;
        ppuVar10 = &puStack_d8;
        puStack_b0 = puVar5;
        __Block_copy(ppuVar10);
        _swift_release(puStack_b0);
        _objc_msgSend(lVar14,PTR_s_startGraphRequestWithGraphPath_p_112525210,puVar12,uVar8,0,uVar9,
                      ppuVar10);
        _swift_unknownObjectRelease(lVar14);
        __Block_release(ppuVar10);
        _objc_release(puVar12);
        _objc_release(uVar8);
        _objc_release(uVar9);
      }
    }
  }
  return;
}



/* Entry: 104931458; end: 1049314b7;  */

void FUN_104931458(long param_1,long param_2)

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



/* Entry: 1049314b8; end: 1049314cb;  */

void FUN_1049314b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  long unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar17 = *(long *)(unaff_x20 + 0x40);
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_80,0,0);
  if (*(long *)(lRam0000000113815788 + 0x10) == 0) {
    return;
  }
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_98,0,0);
  if (uRam0000000113815790 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uRam0000000113815790 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uRam0000000113815790 & 0xffffffffffffff8;
    if ((long)uRam0000000113815790 < 0) {
      uVar9 = uRam0000000113815790;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == 0) {
    return;
  }
  if (lRam000000011309d060 != -1) {
    _swift_once(0x11309d060,FUN_104936ee0);
  }
  uVar9 = uRam0000000113815790;
  uVar10 = uRam0000000113815790;
  _swift_bridgeObjectRetain();
  FUN_1049376d8();
  _swift_bridgeObjectRelease(uVar9);
  _swift_beginAccess(0x11381576c,auStack_b0,0,0);
  if ((cRam000000011381576c != '\x01') || (*(long *)(uVar10 + 0x10) == 0)) {
LAB_10492ad08:
    _swift_bridgeObjectRelease(uVar10);
    func_0x00010492b378(uVar5,uVar3,uVar6,uVar4,uVar7,lVar17);
    return;
  }
  uVar9 = *(ulong *)(uVar10 + 0x20) & 0xffffffffffff;
  if ((*(ulong *)(uVar10 + 0x28) & 0x2000000000000000) != 0) {
    uVar9 = *(ulong *)(uVar10 + 0x28) >> 0x38 & 0xf;
  }
  if (uVar9 == 0) goto LAB_10492ad08;
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(lVar17);
    lVar11 = 0x65746e6f635f6266;
    uVar9 = 0;
    func_0x000100029284(0x65746e6f635f6266);
    if ((uVar9 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar17 + 0x38) + lVar11 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(lVar17);
      puVar12 = &uStack_c8;
      _swift_dynamicCast(puVar12,&puStack_110,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      uStack_120 = uStack_c8;
      uStack_118 = uStack_c0;
      if ((int)puVar12 == 0) {
        uStack_120 = 0;
        uStack_118 = 0;
      }
      goto LAB_10492ad5c;
    }
    _swift_bridgeObjectRelease(lVar17);
  }
  uStack_120 = 0;
  uStack_118 = 0;
LAB_10492ad5c:
  _swift_beginAccess(0x113815730,&uStack_c8,0,0);
  lVar11 = lRam0000000113815730;
  if (lRam0000000113815730 != 0) {
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0xe000000000000000;
    _swift_beginAccess(0x113815738,auStack_e0,0,0);
    lVar8 = lRam0000000113815740;
    uVar14 = 0x296c6c756e28;
    if (lRam0000000113815740 != 0) {
      uVar14 = uRam0000000113815738;
    }
    lVar1 = -0x1a00000000000000;
    if (lRam0000000113815740 != 0) {
      lVar1 = lRam0000000113815740;
    }
    _swift_unknownObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar8);
    __sSS6appendyySSF(uVar14,lVar1);
    _swift_bridgeObjectRelease(lVar1);
    __sSS6appendyySSF(0x2f,0xe100000000000000);
    __sSS6appendyySSF(0x727474615f6d6561,0xef6e6f6974756269);
    uVar14 = uStack_108;
    puVar13 = puStack_110;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_110,uStack_108);
    _swift_bridgeObjectRelease(uVar14);
    uVar9 = uVar10;
    FUN_1049314cc(uVar10,uStack_120,uStack_118);
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uStack_118);
    uVar10 = uVar9;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar9,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar9);
    uVar14 = 0x544547;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544547,0xe300000000000000);
    puVar15 = &UNK_1107b8b78;
    _swift_allocObject(&UNK_1107b8b78,0x48,7);
    *(undefined8 *)(puVar15 + 0x10) = uVar2;
    *(undefined8 *)(puVar15 + 0x18) = uVar6;
    *(undefined8 *)(puVar15 + 0x20) = uVar4;
    *(undefined8 *)(puVar15 + 0x28) = uVar7;
    *(undefined8 *)(puVar15 + 0x30) = uVar5;
    *(undefined8 *)(puVar15 + 0x38) = uVar3;
    *(long *)(puVar15 + 0x40) = lVar17;
    pcStack_f0 = FUN_104934dfc;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0x42000000;
    puStack_100 = &UNK_101201f78;
    puStack_f8 = &UNK_1107b8b90;
    ppuVar16 = &puStack_110;
    puStack_e8 = puVar15;
    __Block_copy(ppuVar16);
    puVar15 = puStack_e8;
    _objc_retain(uVar7);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(lVar17);
    _swift_bridgeObjectRetain(uVar4);
    _swift_release(puVar15);
    _objc_msgSend(lVar11,PTR_s_startGraphRequestWithGraphPath_p_112525210,puVar13,uVar10,0,uVar14,
                  ppuVar16);
    _swift_unknownObjectRelease(lVar11);
    __Block_release(ppuVar16);
    _objc_release(puVar13);
    _objc_release(uVar10);
    _objc_release(uVar14);
    return;
  }
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uStack_118);
  return;
}


