/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044da760; end: 1044da793; -[SCThreadCaptureOption hash] */

undefined8 FUN_1044da760(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044da794();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044da794; end: 1044da923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044da794(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113080888));
  bVar1 = *(byte *)(unaff_x20 + _DAT_113080890);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113080898))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113080898);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130808a0);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar5 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar5);
  bVar1 = *(byte *)(unaff_x20 + _DAT_1130808a8);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130808b0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130808b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar4 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044da924; end: 1044dabaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044da924(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long unaff_x20;
  uint uVar13;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_113080888);
      if (bVar1 != *(byte *)(lStack_68 + _DAT_113080888)) goto LAB_1044dab84;
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          bVar1 = *(byte *)(unaff_x20 + _DAT_113080890);
          uVar12 = (uint)bVar1;
          bVar2 = *(byte *)(lStack_68 + _DAT_113080890);
          uVar13 = (uint)bVar2;
          _objc_release();
          uVar9 = 0;
          if (bVar2 == 2) {
            uVar9 = (uint)(bVar1 == 2);
          }
          if (bVar1 == 2 || bVar2 == 2) goto LAB_1044dab8c;
LAB_1044daab8:
          uVar9 = uVar12 ^ uVar13 ^ 1;
          goto LAB_1044dab8c;
        }
      }
      else if (bVar1 != 2) {
        if (bVar1 != 3) {
          lVar11 = ((long *)(unaff_x20 + _DAT_1130808b0))[1];
          lVar10 = ((long *)(lStack_68 + _DAT_1130808b0))[1];
          if (lVar11 == 0) {
            _swift_bridgeObjectRetain(lVar10);
            _objc_release(lStack_68);
            if (lVar10 == 0) {
              uVar9 = 1;
              goto LAB_1044dab8c;
            }
            _swift_bridgeObjectRelease(lVar10);
            goto LAB_1044dab88;
          }
          uVar9 = 0;
          if (lVar10 != 0) {
            lVar8 = *(long *)(unaff_x20 + _DAT_1130808b0);
            lVar5 = *(long *)(lStack_68 + _DAT_1130808b0);
            if ((lVar8 == lVar5) && (lVar11 == lVar10)) goto LAB_1044daa20;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (lVar8,lVar11,lVar5,lVar10,0);
            uVar9 = (uint)lVar8;
          }
LAB_1044dab54:
          _objc_release(lStack_68);
          goto LAB_1044dab8c;
        }
        uVar4 = ((ulong *)(unaff_x20 + _DAT_113080898))[1];
        uVar6 = ((ulong *)(lStack_68 + _DAT_113080898))[1];
        if (uVar4 == 0) {
          if (uVar6 == 0) goto LAB_1044daac8;
        }
        else if ((uVar6 != 0) &&
                (((uVar7 = *(ulong *)(unaff_x20 + _DAT_113080898),
                  uVar7 == *(ulong *)(lStack_68 + _DAT_113080898) && (uVar4 == uVar6)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar7 & 1) != 0)))) {
LAB_1044daac8:
          uVar4 = *(ulong *)(unaff_x20 + _DAT_1130808a0);
          lVar11 = *(long *)(lStack_68 + _DAT_1130808a0);
          if (uVar4 == 0) {
            if (lVar11 == 0) {
LAB_1044dab18:
              uVar12 = (uint)*(byte *)(unaff_x20 + _DAT_1130808a8);
              bVar1 = *(byte *)(lStack_68 + _DAT_1130808a8);
              _objc_release();
              uVar13 = (uint)bVar1;
              uVar9 = 0;
              if (uVar13 == 2) {
                uVar9 = (uint)(uVar12 == 2);
              }
              if ((uVar12 == 2) || (uVar13 == 2)) goto LAB_1044dab8c;
              goto LAB_1044daab8;
            }
          }
          else {
            uVar9 = 0;
            if (lVar11 == 0) goto LAB_1044dab54;
            _swift_bridgeObjectRetain(lVar11);
            uVar6 = uVar4;
            _swift_bridgeObjectRetain();
            func_0x000101058cd4();
            _swift_bridgeObjectRelease(uVar4);
            _swift_bridgeObjectRelease(lVar11);
            if ((uVar6 & 1) != 0) goto LAB_1044dab18;
          }
        }
LAB_1044dab84:
        _objc_release();
        goto LAB_1044dab88;
      }
LAB_1044daa20:
      _objc_release();
      uVar9 = 1;
      goto LAB_1044dab8c;
    }
  }
LAB_1044dab88:
  uVar9 = 0;
LAB_1044dab8c:
  return uVar9 & 1;
}



/* Entry: 1044dabb0; end: 1044dac2f; -[SCThreadCaptureOption isEqual:] */

uint FUN_1044dabb0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1044da924(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044dac30; end: 1044dac33; -[SCThreadCaptureOption copyWithZone:] */

void FUN_1044dac30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044dac34; end: 1044dac4b;  */

void FUN_1044dac34(void)

{
  func_0x0001044db1e4(0);
  return;
}



/* Entry: 1044dac4c; end: 1044dac63; +[SCThreadCaptureOption currentThread] */

void FUN_1044dac4c(void)

{
  func_0x0001044db1e4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dac64; end: 1044dac67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dac64(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1044db3fc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113080888) = 1;
  *(char *)(lVar3 + _DAT_113080890) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113080898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_1130808a0) = 0;
  *(undefined1 *)(lVar3 + _DAT_1130808a8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130808b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dac68; end: 1044dac7f; +[SCThreadCaptureOption allThreadsWithOrderByCpuUsage:] */

void FUN_1044dac68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1044db148(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dac80; end: 1044dac97; +[SCThreadCaptureOption mainThread] */

void FUN_1044dac80(void)

{
  func_0x0001044db1e4(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dac98; end: 1044dad1b; +[SCThreadCaptureOption composerWithProvidedStacktrace:jsModuleHashMap:isANR:] */

void FUN_1044dac98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  FUN_1044db27c(param_3,param_2,param_4,param_5);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044dad1c; end: 1044dae4f; +[SCThreadCaptureOption cppWithProvidedStacktrace:] */

void FUN_1044dad1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_1044db348();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044dae50; end: 1044daed7; -[SCThreadCaptureOption matchCurrentThread:allThreads:mainThread:composer:cpp:] */

void FUN_1044dae50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001044dad54(FUN_1044db5c4,auStack_40,0x1044db5d0,auStack_60,FUN_1044db624,auStack_80,
                      0x1044db5e4,auStack_a0,FUN_1044db5ec,auStack_c0);
  _objc_release(param_1);
  return;
}



/* Entry: 1044daed8; end: 1044daf4f;  */

void FUN_1044daed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long param_5)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3,param_4 & 1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1044daf50; end: 1044daf83;  */

void FUN_1044daf50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044daf84; end: 1044dafd3; -[SCThreadCaptureOption .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044daf84(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080898 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130808a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130808b0 + 8))
  ;
  return;
}



/* Entry: 1044dafd4; end: 1044dafe3;  */

ulong FUN_1044dafd4(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1044dafe4; end: 1044db147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1044dafe4(long param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  bVar1 = *(byte *)(param_1 + _DAT_113080888);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      _objc_release();
      uVar5 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + _DAT_113080890);
      if (bVar1 == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db140);
        (*pcVar2)();
      }
      _objc_release();
      uVar5 = (ulong)bVar1 & 1;
    }
  }
  else if (bVar1 == 2) {
    _objc_release();
    uVar5 = 1;
  }
  else if (bVar1 == 3) {
    uVar3 = ((ulong *)(param_1 + _DAT_113080898))[1];
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db138);
      (*pcVar2)();
    }
    lVar4 = *(long *)(param_1 + _DAT_1130808a0);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db144);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + _DAT_1130808a8) == '\x02') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db148);
      (*pcVar2)();
    }
    uVar5 = *(ulong *)(param_1 + _DAT_113080898);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(lVar4);
    _objc_release(param_1);
  }
  else {
    uVar3 = ((ulong *)(param_1 + _DAT_1130808b0))[1];
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db13c);
      (*pcVar2)();
    }
    uVar5 = *(ulong *)(param_1 + _DAT_1130808b0);
    _swift_bridgeObjectRetain(uVar3);
    _objc_release(param_1);
  }
  return uVar5;
}



/* Entry: 1044db148; end: 1044db27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044db148(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1044db3fc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113080888) = 1;
  *(char *)(lVar3 + _DAT_113080890) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113080898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_1130808a0) = 0;
  *(undefined1 *)(lVar3 + _DAT_1130808a8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130808b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044db27c; end: 1044db347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044db27c(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_1044db3fc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113080888) = 3;
  *(undefined1 *)(lVar5 + _DAT_113080890) = 2;
  plVar1 = (long *)(lVar5 + _DAT_113080898);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_1130808a0) = param_3;
  *(undefined1 *)(lVar5 + _DAT_1130808a8) = param_4;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130808b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1044db348; end: 1044db3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044db348(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1044db3fc();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113080888) = 4;
  *(undefined1 *)(lVar5 + _DAT_113080890) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113080898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130808a0) = 0;
  *(undefined1 *)(lVar5 + _DAT_1130808a8) = 2;
  plVar2 = (long *)(lVar5 + _DAT_1130808b0);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1044db3fc; end: 1044db41b;  */

void FUN_1044db3fc(void)

{
  _objc_opt_self(&PTR_PTR_1129c36a0);
  return;
}



/* Entry: 1044db41c; end: 1044db583;  */

int FUN_1044db41c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044db498;
        goto LAB_1044db47c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044db47c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1044db498:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044db584; end: 1044db5c3;  */

void FUN_1044db584(void)

{
  undefined *puVar1;
  
  if (puRam00000001130808e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c30c;
  _swift_getWitnessTable(&UNK_10dd0c30c,&UNK_11077ccd0);
  puRam00000001130808e0 = puVar1;
  return;
}



/* Entry: 1044db5c4; end: 1044db5eb;  */

void FUN_1044db5c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001044db5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1044db5ec; end: 1044db623;  */

void FUN_1044db5ec(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044db624; end: 1044db627;  */

void FUN_1044db624(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001044db5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1044db628; end: 1044db62f; +[SCBatteryLoggingConstants cameraStatusOpen] */

undefined8 FUN_1044db628(void)

{
  return 2;
}



/* Entry: 1044db630; end: 1044db637; +[SCBatteryLoggingConstants gpsStatusOff] */

undefined8 FUN_1044db630(void)

{
  return 0;
}



/* Entry: 1044db638; end: 1044db63f; +[SCBatteryLoggingConstants gpsStatusOn] */

undefined8 FUN_1044db638(void)

{
  return 3;
}



/* Entry: 1044db640; end: 1044db65f;  */

void FUN_1044db640(void)

{
  _objc_opt_self(&PTR_PTR_1129c3788);
  return;
}



/* Entry: 1044db660; end: 1044db69b; -[SCBatteryLoggingConstants init] */

void FUN_1044db660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1044db640();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044db69c; end: 1044db6cb;  */

void FUN_1044db69c(void)

{
  FUN_1044db640();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044db6cc; end: 1044db6df;  */

bool FUN_1044db6cc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044db6e0; end: 1044db7b7;  */

void FUN_1044db6e0(void)

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



/* Entry: 1044db7b8; end: 1044db7d7;  */

void FUN_1044db7b8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044db7d8; end: 1044db817;  */

void FUN_1044db7d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c3f0;
  _swift_getWitnessTable(&UNK_10dd0c3f0,&UNK_11077cdd0);
  puRam0000000113080910 = puVar1;
  return;
}



/* Entry: 1044db818; end: 1044db827;  */

undefined1  [16] FUN_1044db818(void)

{
  return ZEXT816(0x11077cdd0);
}



/* Entry: 1044db828; end: 1044db8ff;  */

long FUN_1044db828(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044db900; end: 1044db937;  */

void FUN_1044db900(undefined8 param_1)

{
  if (lRam0000000113080970 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80e658);
  return;
}



/* Entry: 1044db938; end: 1044dba9f;  */

long * FUN_1044db938(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar8;
    lVar10 = param_2[2];
    param_1[2] = lVar10;
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar8 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar8;
    lVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar3;
    lVar11 = (long)*(int *)(param_3 + 0x24);
    lVar7 = 0;
    __s10Foundation3URLVMa();
    lVar12 = *(long *)(lVar7 + -8);
    pcVar13 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar3);
    lVar8 = (long)param_2 + lVar11;
    (*pcVar13)(lVar8,1,lVar7);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar7);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,lVar7);
    }
    else {
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1044dbaa0; end: 1044dbb3f;  */

void FUN_1044dbaa0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  iVar1 = *(int *)(param_2 + 0x24);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  return;
}



/* Entry: 1044dbb40; end: 1044dbc7b;  */

undefined8 * FUN_1044dbb40(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  uVar7 = param_2[2];
  param_1[2] = uVar7;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar11 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar11;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  lVar8 = (long)*(int *)(param_3 + 0x24);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = (long)param_2 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar11 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar11;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  return param_1;
}



/* Entry: 1044dbc7c; end: 1044dbe4b;  */

undefined8 * FUN_1044dbc7c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar6 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  uVar6 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[6] = param_2[6];
  uVar6 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x24);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_1044dbdc0;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_1044dbdc0;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
LAB_1044dbdc0:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *param_2;
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Entry: 1044dbe4c; end: 1044dbf3b;  */

undefined8 * FUN_1044dbe4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar8 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar8;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar8 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  lVar6 = (long)*(int *)(param_3 + 0x24);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar8;
  return param_1;
}



/* Entry: 1044dbf3c; end: 1044dc0bb;  */

undefined8 * FUN_1044dbf3c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[5];
  uVar4 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  uVar3 = param_2[7];
  uVar4 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x24);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_1044dc050;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_1044dc050;
  }
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40))
  ;
LAB_1044dc050:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = param_2[1];
  uVar4 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 1044dc0bc; end: 1044dc0d3;  */

void FUN_1044dc0bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1044dc0d4; end: 1044dc1b3;  */

void FUN_1044dc0d4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_58 = &UNK_10dd0c508;
  puStack_50 = &UNK_10dd0c520;
  puStack_48 = &UNK_10dd0c508;
  puStack_40 = &UNK_10dd0c508;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dd0c508;
    puStack_28 = &UNK_10dd0c508;
    _swift_initStructMetadata(param_1,0x100,8,&puStack_60,param_1 + 0x10);
  }
  return;
}



/* Entry: 1044dc1b4; end: 1044dc20b; -[_TtC24SCBatteryLoggingServices24SCBatteryLoggingServices initWithBatteryLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc1b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130809c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1044dc20c; end: 1044dc26b; -[_TtC24SCBatteryLoggingServices24SCBatteryLoggingServices init] */

void FUN_1044dc20c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBatteryLoggingServices.SCBatteryLoggingServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dc238);
  (*pcVar1)();
}



/* Entry: 1044dc26c; end: 1044dc27b; -[_TtC24SCBatteryLoggingServices24SCBatteryLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130809c0));
  return;
}



/* Entry: 1044dc27c; end: 1044dc28b; -[SCBatteryHighCpuCriteria highCpuUsageThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044dc27c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130809f0);
}



/* Entry: 1044dc28c; end: 1044dc29b; -[SCBatteryHighCpuCriteria cpuPullFrequencyInSecond] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044dc28c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130809f8);
}



/* Entry: 1044dc29c; end: 1044dc2ab; -[SCBatteryHighCpuCriteria movingTimeWindowInSecond] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044dc29c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113080a00);
}



/* Entry: 1044dc2ac; end: 1044dc2bf; -[SCBatteryHighCpuCriteria isCpuNormalized] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044dc2ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113080a08);
}



/* Entry: 1044dc2c0; end: 1044dc3d7; -[SCBatteryHighCpuCriteria initWithHighCpuUsageThreshold:cpuPullFrequencyInSecond:movingTimeWindowInSecond:isCpuNormalized:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130809f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130809f8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113080a00) = param_5;
  *(undefined1 *)(param_1 + _DAT_113080a08) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dc3d8; end: 1044dc3db; -[SCBatteryHighCpuCriteria copyWithZone:] */

void FUN_1044dc3d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044dc3dc; end: 1044dc3f7; -[SCBatteryHighCpuCriteria description] */

void FUN_1044dc3dc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044dc3f8; end: 1044dc493; -[SCBatteryHighCpuCriteria init] */

void FUN_1044dc3f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCBatteryLoggingServices/SCBatteryHighCpuCriteriaWrapper.swift",0x3e,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dc440);
  (*pcVar1)();
}



/* Entry: 1044dc494; end: 1044dc497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130809f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130809f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113080a00) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113080a08) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dc498; end: 1044dc4a7; -[SCBatteryNetworkActivityAttributionInfo networkActivitySourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044dc498(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113080a38);
}



/* Entry: 1044dc4a8; end: 1044dc4b3; -[SCBatteryNetworkActivityAttributionInfo requestTypeStr] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc4a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080a40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080a40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dc4b4; end: 1044dc4c3; -[SCBatteryNetworkActivityAttributionInfo isUIAssetRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044dc4b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113080a48);
}



/* Entry: 1044dc4c4; end: 1044dc4cf; -[SCBatteryNetworkActivityAttributionInfo path] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc4c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080a50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080a50);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dc4d0; end: 1044dc4db; -[SCBatteryNetworkActivityAttributionInfo host] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc4d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080a58))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080a58);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dc4dc; end: 1044dc5a3; -[SCBatteryNetworkActivityAttributionInfo url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc4dc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113813b68,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044dc5a4; end: 1044dc5af; -[SCBatteryNetworkActivityAttributionInfo mediaContextType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc5a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813b70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813b70);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dc5b0; end: 1044dc5bb; -[SCBatteryNetworkActivityAttributionInfo grpcFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dc5b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813b78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813b78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dc5bc; end: 1044dc613;  */

void FUN_1044dc5bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044dc614; end: 1044dc74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1044dc614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080a38) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a40);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113080a48) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a50);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a58);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000100029394(param_9,unaff_x20 + _DAT_113813b68);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813b70);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813b78);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_9);
  return puVar2;
}



/* Entry: 1044dc750; end: 1044dc77f;  */

void FUN_1044dc750(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044dc780(param_1);
  return;
}



/* Entry: 1044dc780; end: 1044dc8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044dc780(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113080a38) = *param_1;
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a40);
  puVar1[1] = param_1[2];
  *puVar1 = uVar6;
  uVar6 = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_113080a48) = *(undefined1 *)(param_1 + 3);
  uVar7 = param_1[5];
  uVar8 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a50);
  puVar1[1] = param_1[5];
  *puVar1 = uVar8;
  uVar8 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a58);
  puVar1[1] = uVar10;
  *puVar1 = uVar9;
  lVar4 = 0;
  FUN_1044db900();
  func_0x000100029394((long)param_1 + (long)*(int *)(lVar4 + 0x24),unaff_x20 + _DAT_113813b68);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  uVar10 = puVar1[1];
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813b70);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  uVar9 = puVar1[1];
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813b78);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar9);
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,puVar3);
  FUN_1044dc8cc(param_1);
  return puVar5;
}



/* Entry: 1044dc8cc; end: 1044dc907;  */

undefined8 FUN_1044dc8cc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1044db900();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1044dc908; end: 1044dc90b; -[SCBatteryNetworkActivityAttributionInfo copyWithZone:] */

void FUN_1044dc908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044dc90c; end: 1044dc953; -[SCBatteryNetworkActivityAttributionInfo description] */

void FUN_1044dc90c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1044dc954();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044dc954; end: 1044dcaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1044dc954(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = 0;
  FUN_1044db900();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar3);
  *puVar7 = *(undefined8 *)(unaff_x20 + _DAT_113080a38);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a40);
  uVar8 = puVar1[1];
  uVar6 = *puVar1;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar3) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar3) = uVar6;
  (&stack0xffffffffffffffc8)[lVar3] = *(undefined1 *)(unaff_x20 + _DAT_113080a48);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080a50);
  uVar9 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113080a58);
  uVar10 = puVar2[1];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar3) = uVar6;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = uVar12;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar3) = uVar11;
  func_0x000100029394(unaff_x20 + _DAT_113813b68,
                      (undefined1 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x24)));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813b70);
  uVar11 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x28));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813b78);
  uVar6 = puVar1[1];
  uVar12 = *puVar1;
  puVar2 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x2c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar12;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  FUN_1044dc8cc(puVar7);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1044dcaa8; end: 1044dcb23; -[SCBatteryNetworkActivityAttributionInfo init] */

void FUN_1044dcaa8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCBatteryLoggingServices/SCBatteryNetworkActivityAttributionInfoWrapper.swift",0x4d,2,
             0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dcaf0);
  (*pcVar1)();
}



/* Entry: 1044dcb24; end: 1044dce53;  */

long FUN_1044dcb24(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044dce54; end: 1044dce7f;  */

void FUN_1044dce54(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1044dd2f4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1044dce80; end: 1044dcf57;  */

undefined1  [16] FUN_1044dce80(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 1) {
    if (lStack_18 == -1) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      if (lStack_18 != 0) {
LAB_1044dcf3c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dcf58);
        (*pcVar1)();
      }
      uVar3 = 0xed0000656c626168;
      uVar2 = 0x636165725f746f6e;
    }
  }
  else if (lStack_18 == 1) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6e617777;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x69666977;
  }
  else {
    if (lStack_18 != 4) goto LAB_1044dcf3c;
    uVar3 = 0xe900000000000065;
    uVar2 = 0x6c62616863616572;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1044dcf58; end: 1044dd007;  */

void FUN_1044dcf58(void)

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



/* Entry: 1044dd008; end: 1044dd133;  */

uint FUN_1044dd008(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long lStack_18;
  
  if ((param_1 + 1U < 6) &&
     (uVar2 = (uint)(param_1 + 1U), (0x2fU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    return 0x2cU >> (ulong)(uVar2 & 0x1f) & 1;
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11077d010,&lStack_18,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dd060);
  (*pcVar1)();
}



/* Entry: 1044dd134; end: 1044dd22f; +[_TtC36SCNetworkConnectivityMonitorServices13SCNetworkUtil toShortString:] */

void FUN_1044dd134(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_28;
  
  if (param_3 < 1) {
    if (param_3 == -1) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      if (param_3 != 0) {
LAB_1044dd20c:
        lStack_28 = param_3;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_11077d010,&lStack_28,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dd230);
        (*pcVar1)();
      }
      uVar3 = 0xed0000656c626168;
      uVar2 = 0x636165725f746f6e;
    }
  }
  else if (param_3 == 1) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6e617777;
  }
  else if (param_3 == 2) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x69666977;
  }
  else {
    if (param_3 != 4) goto LAB_1044dd20c;
    uVar3 = 0xe900000000000065;
    uVar2 = 0x6c62616863616572;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044dd230; end: 1044dd287;  */

undefined8 FUN_1044dd230(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lStack_18;
  
  uVar1 = param_1 + 1;
  if ((uVar1 < 6) && ((0x2fU >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
    return *(undefined8 *)(&UNK_10dd0c810 + uVar1 * 8);
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11077d010,&lStack_18,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1044dd288);
  (*pcVar2)();
}



/* Entry: 1044dd288; end: 1044dd2c3; -[_TtC36SCNetworkConnectivityMonitorServices13SCNetworkUtil init] */

void FUN_1044dd288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1044dd360();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dd2c4; end: 1044dd2f3;  */

void FUN_1044dd2c4(void)

{
  FUN_1044dd360();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044dd2f4; end: 1044dd35f;  */

undefined1  [16] FUN_1044dd2f4(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_1 + 1U < 6) {
    uVar1 = (param_1 + 1U) * 8;
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dd0c840 + uVar1);
    auVar2._8_8_ = 0x100000000 >> (uVar1 & 0x38);
    return auVar2;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 1044dd360; end: 1044dd37f;  */

void FUN_1044dd360(void)

{
  _objc_opt_self(&PTR_PTR_1129c3ae0);
  return;
}



/* Entry: 1044dd380; end: 1044dd383;  */

void FUN_1044dd380(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c650;
  _swift_getWitnessTable(&UNK_10dd0c650,&UNK_11077d010);
  puRam0000000113080a98 = puVar1;
  return;
}



/* Entry: 1044dd384; end: 1044dd3c3;  */

void FUN_1044dd384(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c650;
  _swift_getWitnessTable(&UNK_10dd0c650,&UNK_11077d010);
  puRam0000000113080a98 = puVar1;
  return;
}



/* Entry: 1044dd3c4; end: 1044dd3c7;  */

void FUN_1044dd3c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c718;
  _swift_getWitnessTable(&UNK_10dd0c718,&UNK_11077d030);
  puRam0000000113080aa0 = puVar1;
  return;
}



/* Entry: 1044dd3c8; end: 1044dd407;  */

void FUN_1044dd3c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c718;
  _swift_getWitnessTable(&UNK_10dd0c718,&UNK_11077d030);
  puRam0000000113080aa0 = puVar1;
  return;
}



/* Entry: 1044dd408; end: 1044dd44f;  */

undefined1  [16] FUN_1044dd408(void)

{
  return ZEXT816(0x11077d010);
}



/* Entry: 1044dd450; end: 1044dd45f; -[_TtC36SCNetworkConnectivityMonitorServices36SCNetworkConnectivityMonitorServices carrierNetworkInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080ae0));
  return;
}



/* Entry: 1044dd460; end: 1044dd46f; -[_TtC36SCNetworkConnectivityMonitorServices36SCNetworkConnectivityMonitorServices serverNetworkClockProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080ae8));
  return;
}



/* Entry: 1044dd470; end: 1044dd4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080ad0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113080ad8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113080ae0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113080ae8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044dd4fc; end: 1044dd5ab; -[_TtC36SCNetworkConnectivityMonitorServices36SCNetworkConnectivityMonitorServices initWithNetworkConnectivityMonitor:factory:carrierNetworkInfoProvider:serverNetworkClockProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd4fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  *(undefined8 *)(param_1 + _DAT_113080ad0) = param_3;
  *(undefined8 *)(param_1 + _DAT_113080ad8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113080ae0) = param_5;
  *(undefined8 *)(param_1 + _DAT_113080ae8) = param_6;
  lVar2 = param_1;
  func_0x000100096edc();
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1044dd5ac; end: 1044dd607; -[_TtC36SCNetworkConnectivityMonitorServices36SCNetworkConnectivityMonitorServices init] */

void FUN_1044dd5ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNetworkConnectivityMonitorServices.SCNetworkConnectivityMonitorServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044dd5d8);
  (*pcVar1)();
}



/* Entry: 1044dd608; end: 1044dd65f; -[_TtC36SCNetworkConnectivityMonitorServices36SCNetworkConnectivityMonitorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd608(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080ad0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080ad8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080ae0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113080ae8));
  return;
}



/* Entry: 1044dd660; end: 1044dd663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044dd660(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080b18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}


