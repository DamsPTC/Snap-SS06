/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10409f96c; end: 10409f9bf;  */

void FUN_10409f96c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409f9c0; end: 10409fbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10409f9c0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c51d74();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010409e814();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305bf08);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305c130);
      *(long *)(unaff_x20 + _DAT_11305c130) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "SemcSystemScopeGraphBridge/SCSnapTokenStorageServicesSaberServiceProvider.swift",0x4f,
             2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409faec);
  (*pcVar1)();
}



/* Entry: 10409fbd4; end: 10409fc07; -[SCSnapTokenStorageServicesSaberServiceProvider provide] */

void FUN_10409fbd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10409f9c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409fc08; end: 10409fc3b; -[SCSnapTokenStorageServicesSaberServiceProvider __safeProvide] */

void FUN_10409fc08(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010409faec();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409fc3c; end: 10409fc7f; -[SCSnapTokenStorageServicesSaberServiceProvider end] */

void FUN_10409fc3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409fc80; end: 10409fe17;  */

void FUN_10409fc80(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e14e50)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1eb1b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcSystemScopeGraphBridge/SCSnapTokenStorageServicesSaberServiceProvider.swift"
                   ,0x4f,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409fe18);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e78();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409fe18; end: 10409fec3; -[SCSnapTokenStorageServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10409fe18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_10409fc80(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409fec4; end: 10409ff37; -[SCSnapTokenStorageServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409fec4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c120,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c128,0);
  *(undefined8 *)(param_1 + _DAT_11305c130) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409ff38; end: 10409ff6b;  */

void FUN_10409ff38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409ff6c; end: 10409ffb3; -[SCSnapTokenStorageServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409ff6c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c120);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c128);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305c130));
  return;
}



/* Entry: 10409ffb4; end: 10409ffd3;  */

void FUN_10409ffb4(void)

{
  _objc_opt_self(&PTR_PTR_11305c178);
  return;
}



/* Entry: 10409ffd4; end: 10409ffe7;  */

bool FUN_10409ffd4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10409ffe8; end: 1040a00bf;  */

void FUN_10409ffe8(void)

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



/* Entry: 1040a00c0; end: 1040a00cb;  */

void FUN_1040a00c0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1040a00cc; end: 1040a024f;  */

undefined1  [16] FUN_1040a00cc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar4._8_8_ = 0xec0000006c61756e;
        auVar4._0_8_ = 0x616d5f6e69676f6c;
        return auVar4;
      }
      if (param_1 == 1) {
        auVar7._8_8_ = 0xe90000000000006c;
        auVar7._0_8_ = 0x74315f6e69676f6c;
        return auVar7;
      }
    }
    else {
      if (param_1 == 2) {
        auVar5._8_8_ = 0xeb00000000687475;
        auVar5._0_8_ = 0x616f5f6e69676f6c;
        return auVar5;
      }
      if (param_1 == 3) {
        uVar2 = 0x6172747369676572;
        goto LAB_1040a01cc;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar6._8_8_ = 0x800000010f1eb2b0;
      auVar6._0_8_ = 0xd000000000000010;
      return auVar6;
    }
    if (param_1 == 5) {
      auVar10._8_8_ = 0x800000010f1eb290;
      auVar10._0_8_ = 0xd000000000000012;
      return auVar10;
    }
  }
  else {
    if (param_1 == 6) {
      uVar2 = 0x6163696669726576;
LAB_1040a01cc:
      auVar8._8_8_ = 0xec0000006e6f6974;
      auVar8._0_8_ = uVar2;
      return auVar8;
    }
    if (param_1 == 7) {
      auVar3._8_8_ = 0xe800000000000000;
      auVar3._0_8_ = 0x626f6a5f636e7973;
      return auVar3;
    }
    if (param_1 == 8) {
      auVar9._8_8_ = 0xe500000000000000;
      auVar9._0_8_ = 0x726568746f;
      return auVar9;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110740e30,&lStack_18,&UNK_110740e30,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a0250);
  (*pcVar1)();
}



/* Entry: 1040a0250; end: 1040a033b;  */

undefined1  [16] FUN_1040a0250(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 **ppuStack_48;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = &uStack_58;
  ppuStack_48 = &puStack_50;
  puStack_38 = PTR___sSWN_11034dbc0;
  puStack_30 = PTR___sSW10Foundation15ContiguousBytesAAWP_110351010;
  ppuVar4 = &puStack_50;
  puVar8 = (undefined8 *)PTR___sSWN_11034dbc0;
  uStack_58 = param_1;
  func_0x0001000a8868();
  puVar5 = *ppuVar4;
  if (puVar5 == (undefined8 *)0x0) {
LAB_1040a02b4:
    puVar5 = (undefined8 *)0x0;
    uVar10 = 0xc000000000000000;
  }
  else {
    puVar8 = ppuVar4[1];
    if (puVar8 == puVar5) goto LAB_1040a02b4;
    if ((ulong)((long)puVar8 - (long)puVar5) < 0xf) {
      func_0x000100e36f4c();
      uVar10 = (ulong)puVar8 & 0xffffffffffffff;
    }
    else if ((ulong)((long)puVar8 - (long)puVar5) < 0x7fffffff) {
      func_0x000100449844();
      uVar10 = (ulong)puVar8 | 0x4000000000000000;
    }
    else {
      func_0x000100e37000();
      uVar10 = (ulong)puVar8 | 0x8000000000000000;
    }
  }
  ppuVar4 = &puStack_50;
  func_0x0001000834e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((ulong)puVar8 >> 0x3c < 0xf) {
    uVar1 = (uint)((ulong)puVar8 >> 0x20);
    uVar11 = uVar1 >> 0x1e;
    iVar3 = (int)ppuVar4;
    if (uVar1 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar10 = (ulong)puVar8 >> 0x30 & 0xff;
      }
      else {
        iVar9 = (int)((ulong)ppuVar4 >> 0x20);
        if (SBORROW4(iVar9,iVar3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a0494);
          (*pcVar2)();
        }
        uVar10 = (ulong)(iVar9 - iVar3);
LAB_1040a03d4:
        func_0x00010006c00c();
      }
      if (uVar10 == 8) {
        ppuVar6 = ppuVar4;
        if (uVar11 != 0) {
          if (uVar11 == 2) {
            puVar5 = ppuVar4[2];
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (ppuVar6 == (undefined8 **)0x0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
LAB_1040a04a8:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04ac);
              (*pcVar2)();
            }
            ppuVar7 = ppuVar6;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8((long)puVar5,(long)ppuVar7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a049c);
              (*pcVar2)();
            }
            puVar5 = (undefined8 *)(((long)puVar5 - (long)ppuVar7) + (long)ppuVar6);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar5 == (undefined8 *)0x0) goto LAB_1040a04a8;
          }
          else {
            lVar12 = (long)iVar3;
            if ((long)ppuVar4 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a0498);
              (*pcVar2)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (ppuVar6 == (undefined8 **)0x0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04b8);
              (*pcVar2)();
            }
            ppuVar7 = ppuVar6;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar12,(long)ppuVar7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04a0);
              (*pcVar2)();
            }
            puVar5 = (undefined8 *)((lVar12 - (long)ppuVar7) + (long)ppuVar6);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04bc);
              (*pcVar2)();
            }
          }
          ppuVar6 = (undefined8 **)*puVar5;
        }
        func_0x0001000b44c0(ppuVar4,puVar8);
        FUN_1040a04bc(ppuVar6);
        goto LAB_1040a03b0;
      }
    }
    else if (uVar11 == 2) {
      uVar10 = (long)ppuVar4[3] - (long)ppuVar4[2];
      if (SBORROW8((long)ppuVar4[3],(long)ppuVar4[2])) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a03a0);
        (*pcVar2)();
      }
      goto LAB_1040a03d4;
    }
    func_0x0001000b44c0();
  }
  ppuVar6 = (undefined8 **)0x0;
  puVar8 = (undefined8 *)0x1;
LAB_1040a03b0:
  auVar14._8_8_ = puVar8;
  auVar14._0_8_ = ppuVar6;
  return auVar14;
}



/* Entry: 1040a033c; end: 1040a04bb;  */

void FUN_1040a033c(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  iVar3 = (int)param_1;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 != 0) {
      iVar5 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar5,iVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a0494);
        (*pcVar2)();
      }
      uVar9 = (ulong)(iVar5 - iVar3);
      goto LAB_1040a03d4;
    }
    uVar9 = param_2 >> 0x30 & 0xff;
  }
  else {
    if (uVar7 != 2) goto LAB_1040a03a0;
    uVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a03a0);
      (*pcVar2)();
    }
LAB_1040a03d4:
    func_0x00010006c00c(param_1,param_2);
  }
  if (uVar9 != 8) {
LAB_1040a03a0:
    func_0x0001000b44c0(param_1,param_2);
    return;
  }
  lVar6 = param_1;
  if (uVar7 != 0) {
    if (uVar7 == 2) {
      lVar10 = *(long *)(param_1 + 0x10);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (lVar6 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
LAB_1040a04a8:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04ac);
        (*pcVar2)();
      }
      lVar4 = lVar6;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a049c);
        (*pcVar2)();
      }
      plVar8 = (long *)((lVar10 - lVar4) + lVar6);
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (plVar8 == (long *)0x0) goto LAB_1040a04a8;
    }
    else {
      lVar6 = (long)iVar3;
      if (param_1 >> 0x20 < lVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a0498);
        (*pcVar2)();
      }
      lVar10 = param_1;
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (lVar10 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04b8);
        (*pcVar2)();
      }
      lVar4 = lVar10;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04a0);
        (*pcVar2)();
      }
      plVar8 = (long *)((lVar6 - lVar4) + lVar10);
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040a04bc);
        (*pcVar2)();
      }
    }
    lVar6 = *plVar8;
  }
  func_0x0001000b44c0(param_1,param_2);
  FUN_1040a04bc(lVar6);
  return;
}



/* Entry: 1040a04bc; end: 1040a04cf;  */

undefined1  [16] FUN_1040a04bc(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 9) {
    uVar1 = param_1;
  }
  auVar2[8] = 8 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1040a04d0; end: 1040a050f;  */

void FUN_1040a04d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011305c1e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd1680;
  _swift_getWitnessTable(&UNK_10dcd1680,&UNK_110740e30);
  puRam000000011305c1e0 = puVar1;
  return;
}



/* Entry: 1040a0510; end: 1040a051f;  */

undefined1  [16] FUN_1040a0510(void)

{
  return ZEXT816(0x110740e30);
}



/* Entry: 1040a0520; end: 1040a052f; -[_TtC22CloudAccountIdServices22CloudAccountIdServices provider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11305c1e8));
  return;
}



/* Entry: 1040a0530; end: 1040a05c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0530(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305c1e8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a05c8; end: 1040a0627; -[_TtC22CloudAccountIdServices22CloudAccountIdServices init] */

void FUN_1040a05c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CloudAccountIdServices.CloudAccountIdServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a05f4);
  (*pcVar1)();
}



/* Entry: 1040a0628; end: 1040a0637; -[_TtC22CloudAccountIdServices22CloudAccountIdServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305c1e8));
  return;
}



/* Entry: 1040a0638; end: 1040a06bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040a0638(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a43bf4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11305c218) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11305c220) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a06c0);
  (*pcVar1)();
}



/* Entry: 1040a06c0; end: 1040a071f; -[_TtC25ShuSystemScopeGraphBridge40ShuSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_1040a06c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ShuSystemScopeGraphBridge.ShuSystemScopeGraphBridgeSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a06ec);
  (*pcVar1)();
}



/* Entry: 1040a0720; end: 1040a0757; -[_TtC25ShuSystemScopeGraphBridge40ShuSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0720(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305c218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305c220));
  return;
}



/* Entry: 1040a0758; end: 1040a077f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0758(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305c220),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305c218));
  return;
}



/* Entry: 1040a0780; end: 1040a07e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a0780(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305c5a0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a07e4; end: 1040a07eb;  */

void FUN_1040a07e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a07ec; end: 1040a088b;  */

void FUN_1040a07ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a088c; end: 1040a08ab;  */

void FUN_1040a088c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a08ac; end: 1040a090f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a08ac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305c5a8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a0910; end: 1040a0917;  */

void FUN_1040a0910(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a0918; end: 1040a09b7;  */

void FUN_1040a0918(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a09b8; end: 1040a09d7;  */

void FUN_1040a09b8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a09d8; end: 1040a0a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a09d8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305c5b0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a0a3c; end: 1040a0a43;  */

void FUN_1040a0a3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a0a44; end: 1040a0a67;  */

void FUN_1040a0a44(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a0a68; end: 1040a0a87;  */

void FUN_1040a0a68(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a0a88; end: 1040a0aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a0a88(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305c5b8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a0aec; end: 1040a0af3;  */

void FUN_1040a0aec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a0af4; end: 1040a0b93;  */

void FUN_1040a0af4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a0b94; end: 1040a0bb3;  */

void FUN_1040a0b94(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a0bb4; end: 1040a0c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305c5a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305c5a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11305c5b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11305c5b8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a0c40; end: 1040a0c9f; -[_TtC25ShuSystemScopeGraphBridge33ShuSystemScopeGraphBridgeServices init] */

void FUN_1040a0c40(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ShuSystemScopeGraphBridge.ShuSystemScopeGraphBridgeServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a0c6c);
  (*pcVar1)();
}



/* Entry: 1040a0ca0; end: 1040a0d53; -[_TtC25ShuSystemScopeGraphBridge33ShuSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0ca0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305c5a0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305c5a8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305c5b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305c5b8));
  return;
}



/* Entry: 1040a0d54; end: 1040a0d8b;  */

undefined1  [16] FUN_1040a0d54(void)

{
  return ZEXT816(0x110741008);
}



/* Entry: 1040a0d8c; end: 1040a0dcf; -[SCShuSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_1040a0d8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a0dd0; end: 1040a0e03;  */

void FUN_1040a0dd0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a0e04; end: 1040a0e4b; -[SCShuSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0e04(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c610);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305c618));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305c620));
  return;
}



/* Entry: 1040a0e4c; end: 1040a0e6b;  */

void FUN_1040a0e4c(void)

{
  _objc_opt_self(&PTR_PTR_11298aba8);
  return;
}



/* Entry: 1040a0e6c; end: 1040a0e77; -[SCSCDeckRootContainerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0e6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c650;
  _swift_beginAccess(param_1 + _DAT_11305c650,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a0e78; end: 1040a0e83; -[SCSCDeckRootContainerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c650;
  _swift_beginAccess(param_1 + _DAT_11305c650,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a0e84; end: 1040a0e8f; -[SCSCDeckRootContainerServicesSaberServiceProvider shuSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0e84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c658;
  _swift_beginAccess(param_1 + _DAT_11305c658,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a0e90; end: 1040a0ed3;  */

void FUN_1040a0e90(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a0ed4; end: 1040a0edf; -[SCSCDeckRootContainerServicesSaberServiceProvider setShuSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a0ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c658;
  _swift_beginAccess(param_1 + _DAT_11305c658,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a0ee0; end: 1040a0f33;  */

void FUN_1040a0ee0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a0f34; end: 1040a1147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040a0f34(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5af34();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040a0810();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305c5a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305c660);
      *(long *)(unaff_x20 + _DAT_11305c660) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "ShuSystemScopeGraphBridge/SCSCDeckRootContainerServicesSaberServiceProvider.swift",
             0x51,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a1060);
  (*pcVar1)();
}



/* Entry: 1040a1148; end: 1040a117b; -[SCSCDeckRootContainerServicesSaberServiceProvider provide] */

void FUN_1040a1148(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040a0f34();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a117c; end: 1040a11af; -[SCSCDeckRootContainerServicesSaberServiceProvider __safeProvide] */

void FUN_1040a117c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040a1060();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a11b0; end: 1040a11f3; -[SCSCDeckRootContainerServicesSaberServiceProvider end] */

void FUN_1040a11b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a11f4; end: 1040a138b;  */

void FUN_1040a11f4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e14a60)) {
      uVar2 = 0xd000000000000021;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000021,0x800000010f1eb5a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ShuSystemScopeGraphBridge/SCSCDeckRootContainerServicesSaberServiceProvider.swift"
                   ,0x51,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a138c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c59290();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040a138c; end: 1040a1437; -[SCSCDeckRootContainerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1040a138c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_1040a11f4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040a1438; end: 1040a14ab; -[SCSCDeckRootContainerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1438(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c650,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c658,0);
  *(undefined8 *)(param_1 + _DAT_11305c660) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a14ac; end: 1040a14df;  */

void FUN_1040a14ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a14e0; end: 1040a1527; -[SCSCDeckRootContainerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a14e0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c650);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c658);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305c660));
  return;
}



/* Entry: 1040a1528; end: 1040a1547;  */

void FUN_1040a1528(void)

{
  _objc_opt_self(&PTR_PTR_11305c6a8);
  return;
}



/* Entry: 1040a1548; end: 1040a1553; -[SCSCDeckServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1548(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c710;
  _swift_beginAccess(param_1 + _DAT_11305c710,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a1554; end: 1040a155f; -[SCSCDeckServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1554(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c710;
  _swift_beginAccess(param_1 + _DAT_11305c710,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a1560; end: 1040a156b; -[SCSCDeckServicesSaberServiceProvider shuSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1560(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c718;
  _swift_beginAccess(param_1 + _DAT_11305c718,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a156c; end: 1040a15af;  */

void FUN_1040a156c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a15b0; end: 1040a15bb; -[SCSCDeckServicesSaberServiceProvider setShuSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a15b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c718;
  _swift_beginAccess(param_1 + _DAT_11305c718,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a15bc; end: 1040a160f;  */

void FUN_1040a15bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a1610; end: 1040a1823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040a1610(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5af34();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040a093c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305c5a8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305c720);
      *(long *)(unaff_x20 + _DAT_11305c720) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "ShuSystemScopeGraphBridge/SCSCDeckServicesSaberServiceProvider.swift",0x44,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a173c);
  (*pcVar1)();
}



/* Entry: 1040a1824; end: 1040a1857; -[SCSCDeckServicesSaberServiceProvider provide] */

void FUN_1040a1824(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040a1610();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a1858; end: 1040a188b; -[SCSCDeckServicesSaberServiceProvider __safeProvide] */

void FUN_1040a1858(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040a173c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a188c; end: 1040a18cf; -[SCSCDeckServicesSaberServiceProvider end] */

void FUN_1040a188c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a18d0; end: 1040a1a67;  */

void FUN_1040a18d0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e14a60)) {
      uVar2 = 0xd000000000000021;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000021,0x800000010f1eb5a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ShuSystemScopeGraphBridge/SCSCDeckServicesSaberServiceProvider.swift",0x44,2,
                   0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a1a68);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c59290();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040a1a68; end: 1040a1b13; -[SCSCDeckServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1040a1a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_1040a18d0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040a1b14; end: 1040a1b87; -[SCSCDeckServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1b14(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c710,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c718,0);
  *(undefined8 *)(param_1 + _DAT_11305c720) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a1b88; end: 1040a1bbb;  */

void FUN_1040a1b88(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a1bbc; end: 1040a1c03; -[SCSCDeckServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1bbc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c710);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c718);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305c720));
  return;
}



/* Entry: 1040a1c04; end: 1040a1c23;  */

void FUN_1040a1c04(void)

{
  _objc_opt_self(&PTR_PTR_11305c768);
  return;
}



/* Entry: 1040a1c24; end: 1040a1d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040a1c24(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5af34();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100b46470();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305c5b0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305c7e0);
      *(long *)(unaff_x20 + _DAT_11305c7e0) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "ShuSystemScopeGraphBridge/SCSCDeferredDeepLinkStorageServicesSaberServiceProvider.swift"
             ,0x57,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a1d50);
  (*pcVar1)();
}



/* Entry: 1040a1d50; end: 1040a1d83; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider provide] */

void FUN_1040a1d50(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040a1c24();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a1d84; end: 1040a1dc7; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider end] */

void FUN_1040a1d84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a1dc8; end: 1040a1dfb;  */

void FUN_1040a1dc8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a1dfc; end: 1040a1e43; -[SCSCDeferredDeepLinkStorageServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1dfc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c7d0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305c7e0));
  return;
}



/* Entry: 1040a1e44; end: 1040a1e63;  */

void FUN_1040a1e44(void)

{
  _objc_opt_self(&PTR_PTR_11305c828);
  return;
}



/* Entry: 1040a1e64; end: 1040a1e6f; -[SCSCPagePageViewReporterServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1e64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c890;
  _swift_beginAccess(param_1 + _DAT_11305c890,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a1e70; end: 1040a1e7b; -[SCSCPagePageViewReporterServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c890;
  _swift_beginAccess(param_1 + _DAT_11305c890,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a1e7c; end: 1040a1e87; -[SCSCPagePageViewReporterServicesSaberServiceProvider shuSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1e7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c898;
  _swift_beginAccess(param_1 + _DAT_11305c898,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a1e88; end: 1040a1ecb;  */

void FUN_1040a1e88(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a1ecc; end: 1040a1ed7; -[SCSCPagePageViewReporterServicesSaberServiceProvider setShuSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a1ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c898;
  _swift_beginAccess(param_1 + _DAT_11305c898,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a1ed8; end: 1040a1f2b;  */

void FUN_1040a1ed8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a1f2c; end: 1040a213f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040a1f2c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5af34();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040a0b18();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305c5b8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305c8a0);
      *(long *)(unaff_x20 + _DAT_11305c8a0) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "ShuSystemScopeGraphBridge/SCSCPagePageViewReporterServicesSaberServiceProvider.swift",
             0x54,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a2058);
  (*pcVar1)();
}



/* Entry: 1040a2140; end: 1040a2173; -[SCSCPagePageViewReporterServicesSaberServiceProvider provide] */

void FUN_1040a2140(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040a1f2c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a2174; end: 1040a21a7; -[SCSCPagePageViewReporterServicesSaberServiceProvider __safeProvide] */

void FUN_1040a2174(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040a2058();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a21a8; end: 1040a21eb; -[SCSCPagePageViewReporterServicesSaberServiceProvider end] */

void FUN_1040a21a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


