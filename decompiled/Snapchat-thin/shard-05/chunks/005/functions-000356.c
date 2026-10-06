/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103eadd4c; end: 103eadd9f; -[SCLensProcessingLocationDataProvider requestGeoDataWithCompletion:] */

void FUN_103eadd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __Block_copy(param_3);
  __Block_copy();
  _objc_retain(param_1);
  FUN_103eb0570();
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103eadda0; end: 103eaddff;  */

void FUN_103eadda0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_18;
  
  FUN_103eadf40();
  uVar1 = 0x11302aab0;
  func_0x0001000285a8(0x11302aab0,&UNK_10dca5e50);
  uVar2 = 0x11302aab8;
  uStack_18 = uVar1;
  func_0x0001000285a8(0x11302aab8,&UNK_10dca5e58);
  puVar3 = &uStack_18;
  __sSS10describingSSx_tclufC();
  puRam000000011302aa18 = puVar3;
  uRam000000011302aa20 = uVar2;
  return;
}



/* Entry: 103eade00; end: 103eadecf;  */

void FUN_103eade00(uint param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    (*param_3)();
  }
  else {
    if (lRam000000011302aa10 != -1) {
      _swift_once(0x11302aa10,FUN_103eadda0);
    }
    uVar1 = uRam000000011302aa18;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam000000011302aa18,uRam000000011302aa20)
    ;
    func_0x000107c54900(param_2);
    _objc_release(uVar1);
    (*param_3)(param_1 & 1);
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 103eaded0; end: 103eadee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaded0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((param_2 & 1) == 0) {
    return;
  }
  uVar3 = 0x11302aaa0;
  func_0x0001000285a8(0x11302aaa0,&UNK_10dca5e40);
  uVar1 = 0x11302aaa8;
  auStack_68[0] = uVar3;
  func_0x0001000285a8(0x11302aaa8,&UNK_10dca5e48);
  puVar2 = auStack_68;
  __sSS10describingSSx_tclufC(puVar2,uVar1);
  uVar3 = 0;
  func_0x0001048b0ec8(0);
  _objc_allocWithZone();
  func_0x0001048b0b48(puVar2,uVar1,0x17,uVar3);
  func_0x000107c41820(uVar8);
  uVar8 = *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68;
  puVar4 = PTR_PTR_1126c1818;
  _objc_allocWithZone(PTR_PTR_1126c1818);
  func_0x000107c45818(param_1,uVar8);
  _objc_release(puVar2);
  _swift_beginAccess(lVar6 + 0x10,auStack_68,0,0);
  lVar5 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + _DAT_11302a9b8);
    if (lVar7 == 0) {
      _objc_release();
    }
    else {
      _swift_unknownObjectRetain(lVar7);
      _objc_release(lVar5);
      func_0x000107c5d320(lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
  }
  _swift_beginAccess(lVar6 + 0x10,auStack_80,0,0);
  lVar5 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
    _objc_release(puVar4);
    return;
  }
  _swift_beginAccess(lVar6 + 0x10,auStack_98,0,0);
  lVar6 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + _DAT_11302a9c8);
    _objc_retain();
    _objc_release(lVar6);
    lVar6 = lVar7;
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c50314();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar6);
      _objc_release(puVar4);
      goto LAB_103eaccd4;
    }
  }
  _objc_release(puVar4);
  lVar7 = 0;
LAB_103eaccd4:
  uVar8 = *(undefined8 *)(lVar5 + _DAT_11302a9b8);
  *(long *)(lVar5 + _DAT_11302a9b8) = lVar7;
  _objc_release(lVar5);
  _swift_unknownObjectRelease(uVar8);
  return;
}



/* Entry: 103eadee4; end: 103eadf2b;  */

void FUN_103eadee4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103eadf2c; end: 103eadf3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eadf2c(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  if ((param_1 & 1) == 0) {
    return;
  }
  uVar2 = 0x11302aaa0;
  func_0x0001000285a8(0x11302aaa0,&UNK_10dca5e40);
  uVar7 = 0x11302aaa8;
  auStack_68[0] = uVar2;
  func_0x0001000285a8(0x11302aaa8,&UNK_10dca5e48);
  puVar1 = auStack_68;
  __sSS10describingSSx_tclufC(puVar1,uVar7);
  uVar2 = 0;
  func_0x0001048b0ec8(0);
  _objc_allocWithZone();
  func_0x0001048b0b48(puVar1,uVar7,0x17,uVar2);
  uVar2 = *(undefined8 *)PTR__kCLLocationAccuracyThreeKilometers_110349b90;
  uVar7 = *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68;
  puVar3 = PTR_PTR_1126c1818;
  _objc_allocWithZone(PTR_PTR_1126c1818);
  func_0x000107c45818(uVar2,uVar7);
  _objc_release(puVar1);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + _DAT_11302a9b0);
    if (lVar6 == 0) {
      _objc_release();
    }
    else {
      _swift_unknownObjectRetain(lVar6);
      _objc_release(lVar4);
      func_0x000107c5d320(lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    _objc_release(puVar3);
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_98,0,0);
  lVar6 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar6 + _DAT_11302a9c8);
    _objc_retain();
    _objc_release(lVar6);
    lVar6 = lVar5;
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      func_0x000107c50314();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar6);
      _objc_release(puVar3);
      goto LAB_103ead688;
    }
  }
  _objc_release(puVar3);
  lVar5 = 0;
LAB_103ead688:
  uVar2 = *(undefined8 *)(lVar4 + _DAT_11302a9b0);
  *(long *)(lVar4 + _DAT_11302a9b0) = lVar5;
  _objc_release(lVar4);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 103eadf40; end: 103eadf5f;  */

void FUN_103eadf40(void)

{
  _objc_opt_self(&PTR_PTR_11295eae0);
  return;
}



/* Entry: 103eadf60; end: 103eadfc7;  */

void FUN_103eadf60(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar1);
  _dispatch_group_leave(param_3);
  return;
}



/* Entry: 103eadfc8; end: 103eae077;  */

void FUN_103eadfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_68,1,0);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(param_5 + 0x10,auStack_80,1,0);
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar1);
  _dispatch_group_leave(param_6);
  return;
}



/* Entry: 103eae078; end: 103eae22b;  */

void FUN_103eae078(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_90,0,0);
    uVar4 = *(ulong *)(param_2 + 0x10);
    if (uVar4 != 0) {
      _swift_beginAccess(param_5 + 0x10,auStack_a8,0,0);
      lVar6 = *(long *)(param_5 + 0x18);
      if (lVar6 == 0) {
        lVar5 = -0x1e00000000000000;
        uVar3 = 0x5d5b;
      }
      else {
        uVar3 = *(undefined8 *)(param_5 + 0x10);
        lVar5 = lVar6;
      }
      _swift_beginAccess(param_6 + 0x10,auStack_c0,0,0);
      uVar7 = *(undefined8 *)(param_6 + 0x10);
      _swift_bridgeObjectRetain(lVar6);
      _objc_retain();
      _swift_bridgeObjectRetain(uVar7);
      uVar1 = uVar4;
      FUN_103eae22c(uVar4,uVar7,uVar3,lVar5);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease(uVar7);
      uVar2 = uVar1;
      _objc_retain();
      (*param_3)(uVar1);
      uVar1 = uVar2;
      _objc_release();
      FUN_103eae4c0();
      if ((uVar1 & 1) != 0) {
        _swift_beginAccess(param_6 + 0x10,auStack_d8,0,0);
        uVar3 = *(undefined8 *)(param_6 + 0x10);
        _swift_bridgeObjectRetain(uVar3);
        func_0x000103eae604();
        _swift_bridgeObjectRelease(uVar3);
      }
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(param_1);
      return;
    }
    _objc_release(param_1);
  }
  (*param_3)(0);
  return;
}



/* Entry: 103eae22c; end: 103eae4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103eae22c(undefined8 param_1,undefined *param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  if (param_3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar10 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (SBORROW8(uVar10,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103eae4ac);
    (*pcVar2)();
  }
  uVar9 = uVar10 - 1;
  lVar3 = *(long *)(unaff_x20 + _DAT_11302aa08);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = 1;
    if (SBORROW8(uVar9,-1)) goto LAB_103eae2ec;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c49820();
    _objc_release(lVar3);
    lVar3 = -lVar4;
    if (SBORROW8(uVar9,lVar4)) {
LAB_103eae2ec:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103eae2f0);
      (*pcVar2)();
    }
  }
  uVar8 = uVar9 + lVar3;
  if ((long)uVar8 < 1) {
    if ((long)uVar9 < 0) goto LAB_103eae2bc;
    if (0 < (long)uVar10) {
      uVar9 = 0;
      goto joined_r0x000103eae300;
    }
  }
  else {
    if ((long)uVar8 <= (long)uVar9) {
      uVar9 = uVar8;
    }
LAB_103eae2bc:
    if ((0 < (long)uVar10) && (-1 < (long)uVar9)) {
joined_r0x000103eae300:
      if (param_3 >> 0x3e == 0) {
        uVar10 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar10 = param_3 & 0xffffffffffffff8;
        if ((param_3 & 0x8000000000000000) != 0) {
          uVar10 = param_3;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if ((long)uVar9 < (long)uVar10) {
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103eae4c0);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_3 + uVar9 * 8 + 0x20);
          _objc_retain();
        }
        else {
          func_0x00010103198c(uVar9,param_3);
        }
        func_0x000107c3f748(param_2);
        uVar11 = param_1;
        func_0x000107c42d54(param_2);
        uVar6 = *(undefined8 *)(uVar9 + _DAT_113077320);
        uVar1 = ((undefined8 *)(uVar9 + _DAT_113077320))[1];
        func_0x000107c44f24();
        _objc_retainAutoreleasedReturnValue();
        if (param_2 == (undefined *)0x0) {
          FUN_103eb14d8();
          puVar5 = (undefined *)0x0;
          __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(0,param_2);
          param_2 = puVar5;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
          _swift_bridgeObjectRelease(puVar5);
        }
        puVar5 = PTR_PTR_1126adaa0;
        _objc_allocWithZone(PTR_PTR_1126adaa0);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar1);
        func_0x000107c45d64(param_1,uVar11,puVar5);
        _objc_release(uVar9);
        _objc_release(uVar6);
        _objc_release(param_2);
        goto LAB_103eae428;
      }
    }
  }
  _objc_retain(param_2);
  puVar5 = param_2;
LAB_103eae428:
  puVar7 = PTR_PTR_1126ada90;
  _objc_allocWithZone(PTR_PTR_1126ada90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  func_0x000107c49598(puVar7);
  _objc_release(puVar5);
  _objc_release(param_4);
  return puVar7;
}



/* Entry: 103eae4c0; end: 103eaea5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103eae4c0(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = unaff_x20 + _DAT_11302a9c0;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar2 == 0) {
    bVar8 = false;
  }
  else {
    uVar10 = uVar2;
    func_0x000107c3dfec();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    FUN_103eb14d8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar4 = uVar10;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar3);
    _objc_release(uVar10);
    uVar10 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar7 = uVar10;
      if (0x7fffffffffffffff < uVar4) {
        uVar7 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    uVar9 = 0;
    do {
      bVar8 = uVar7 != uVar9;
      if (uVar7 == uVar9) break;
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103eae5f0);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar5 = uVar9;
        func_0x000100ff3f88(uVar9,uVar4);
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103eae5b4);
        (*pcVar1)();
      }
      uVar6 = uVar5;
      func_0x000107c5049c();
      _objc_release(uVar5);
      uVar9 = uVar9 + 1;
    } while ((int)uVar6 == 0);
    _swift_unknownObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  return bVar8;
}



/* Entry: 103eaea5c; end: 103eaeb8f;  */

void FUN_103eaea5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  pcVar2 = *(code **)(param_2 + 0x10);
  if (pcVar2 != (code *)0x0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    _swift_retain(uVar3);
    (*pcVar2)(param_1);
    func_0x0001019f0280(pcVar2,uVar3);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_60,1,0);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  func_0x0001019f0280(uVar3,uVar1);
  return;
}



/* Entry: 103eaeb90; end: 103eaed57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaeb90(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  if (param_3 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_11302a9d8);
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_release(param_3);
    }
    else {
      lVar1 = *(long *)(unaff_x20 + _DAT_11302a9f0);
      func_0x000107c5c734();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        func_0x000107c4077c(param_3);
        uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302a9e8);
        func_0x000107c51f40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        _swift_getObjectType();
        func_0x000100bcb214();
        _swift_unknownObjectRelease(uVar2);
        puVar4 = &UNK_11071c598;
        _swift_allocObject(&UNK_11071c598,0x28,7);
        *(code **)(puVar4 + 0x10) = param_4;
        *(undefined8 *)(puVar4 + 0x18) = param_5;
        *(long *)(puVar4 + 0x20) = lVar1;
        pcStack_70 = FUN_103eb1400;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_10266d448;
        puStack_78 = &UNK_11071c5b0;
        puStack_68 = puVar4;
        __Block_copy(&puStack_90);
        puVar4 = puStack_68;
        _swift_retain(param_5);
        _swift_unknownObjectRetain(lVar1);
        _swift_release(puVar4);
        func_0x000107c4331c(param_1,param_2,lVar6);
        __Block_release(ppuVar5);
        _objc_release(param_3);
        _swift_unknownObjectRelease(lVar6);
        _swift_unknownObjectRelease(lVar1);
        _objc_release(uVar3);
        return;
      }
      _objc_release(param_3);
      _swift_unknownObjectRelease(lVar6);
    }
  }
  (*param_4)(0);
  return;
}



/* Entry: 103eaed58; end: 103eaee23;  */

void FUN_103eaed58(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  if (param_1 != 0) {
    _swift_errorRetain();
    (*param_3)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  if (param_2 != 0) {
    _objc_retain(param_2);
    FUN_103eaee24();
    if (param_5 == 0) {
      (*param_3)();
    }
    else {
      (*param_3)();
      _objc_release(param_2);
      param_2 = param_5;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  (*param_3)(0);
  return;
}



/* Entry: 103eaee24; end: 103eaf3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103eaee24(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  
  lVar17 = 0x112d373d8;
  lStack_a0 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar3 = (code *)(auStack_f0 + -extraout_x8);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lStack_88 = (long)pcVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar17 = ((undefined8 *)(unaff_x20 + _DAT_11302f030))[1];
  if (lVar17 == 0) {
    return (undefined *)0x0;
  }
  fVar20 = *(float *)(unaff_x20 + _DAT_11302f018);
  if (0x7f7fffff < (uint)ABS(fVar20)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2c8);
    (*pcVar3)();
  }
  if (fVar20 <= -9.223373e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2cc);
    (*pcVar3)();
  }
  if (9.223372e+18 <= fVar20) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2d0);
    (*pcVar3)();
  }
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_11302f030);
  lVar5 = lStack_a0;
  func_0x000107c40744();
  uVar18 = *(ulong *)(unaff_x20 + _DAT_113812750);
  lStack_e0 = lVar5;
  uStack_d8 = uVar14;
  uVar15 = uStack_98;
  if (uVar18 != 0) {
    uStack_a8 = uVar18 & 0xffffffffffffff8;
    if (uVar18 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uStack_a8 + 0x10);
    }
    else {
      uVar13 = uVar18;
      if (-1 < (long)uVar18) {
        uVar13 = uStack_a8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      uVar15 = uStack_98;
    }
    uStack_98 = uVar13;
    if (uStack_98 != 0) {
      uStack_90 = uVar18 & 0xc000000000000001;
      uVar15 = uStack_a8;
      uVar13 = 0;
      lStack_e8 = lVar17;
      puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_c8 = uVar18;
      pcStack_c0 = pcVar3;
      lStack_b8 = lVar19;
      lStack_b0 = lVar4;
      do {
        while( true ) {
          if (uStack_90 == 0) {
            if (*(ulong *)(uVar15 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2b8);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar18 + uVar13 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar6 = uVar13;
            FUN_103eaffec(uVar13,uVar18);
          }
          uVar1 = uVar13 + 1;
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2b4);
            (*pcVar3)();
          }
          FUN_103eb140c(uVar6 + _DAT_113812760,pcVar3,0x112d373d8,&UNK_10d9014c0);
          pcVar7 = pcVar3;
          (**(code **)(lVar19 + 0x30))(pcVar3,1,lVar4);
          if ((int)pcVar7 != 1) break;
          _objc_release(uVar6);
          func_0x000103eb1454(pcVar3,0x112d373d8,&UNK_10d9014c0);
LAB_103eaefb8:
          lVar17 = lStack_e8;
          uVar13 = uVar13 + 1;
          if (uVar1 == uStack_98) goto LAB_103eaf2f0;
        }
        (**(code **)(lVar19 + 0x20))(lStack_88,pcVar3,lVar4);
        lVar17 = lStack_a0;
        fVar21 = *(float *)(uVar6 + _DAT_11302f080);
        if (0x7f7fffff < (uint)ABS(fVar21)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2bc);
          (*pcVar3)();
        }
        if (fVar21 <= -9.223373e+18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2c0);
          (*pcVar3)();
        }
        if (9.223372e+18 <= fVar21) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103eaf2c4);
          (*pcVar3)();
        }
        lVar4 = lStack_a0;
        func_0x000107c40744(lStack_a0);
        lVar5 = lVar17;
        func_0x000107c5e170(lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107c4b888(lVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar17;
        if (lRam000000011302aa88 != -1) {
          lVar19 = 0x11302aa88;
          pcVar3 = FUN_103eafde4;
          _swift_once(0x11302aa88,FUN_103eafde4);
        }
        lVar2 = lStack_88;
        lVar8 = lRam000000011302aa90;
        __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
        func_0x000107c5c1b8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar19);
        if (lVar8 == 0) {
          lVar8 = 0;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar3);
        }
        puVar9 = PTR_PTR_1126ada98;
        _objc_allocWithZone();
        func_0x000107c45d68((float)lVar4,fVar21);
        _objc_release(uVar6);
        _objc_release(lVar5);
        _objc_release(lVar17);
        _objc_release(lVar8);
        lVar4 = lStack_b0;
        lVar19 = lStack_b8;
        (**(code **)(lStack_b8 + 8))(lVar2,lStack_b0);
        pcVar3 = pcStack_c0;
        uVar18 = uStack_c8;
        puVar16 = puStack_d0;
        uVar15 = uStack_a8;
        if (puVar9 == (undefined *)0x0) goto LAB_103eaefb8;
        puVar11 = puStack_d0;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        lVar17 = lStack_e8;
        if ((((int)puVar11 == 0) || ((long)puVar16 < 0)) || (((ulong)puVar16 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar16 >> 0x3e == 0) {
            puVar11 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar11 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar16) {
              puVar11 = puVar16;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar11);
          }
          puVar10 = (undefined *)0x0;
          FUN_103eb0188(0,puVar11 + 1,1,puVar16);
          puVar16 = puVar10;
        }
        uVar13 = (ulong)puVar16 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar13 + 0x10);
        puStack_d0 = puVar16;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar15) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_103eb0188(puVar11,uVar15 + 1,1,puVar16);
          uVar13 = (ulong)puVar11 & 0xffffffffffffff8;
          puStack_d0 = puVar11;
        }
        *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
        *(undefined **)(uVar13 + uVar15 * 8 + 0x20) = puVar9;
        uVar15 = uStack_a8;
        uVar13 = uVar1;
      } while (uVar1 != uStack_98);
      goto LAB_103eaf2f0;
    }
  }
  uStack_98 = uVar15;
  puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103eaf2f0:
  fVar21 = (float)lStack_e0;
  puVar9 = PTR_PTR_1126adaa0;
  _objc_allocWithZone(PTR_PTR_1126adaa0);
  uVar14 = uStack_d8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d8,lVar17);
  uVar12 = 0;
  FUN_103eb14d8(0,0x11302aa80,&PTR_PTR_1126ada98);
  puVar16 = puStack_d0;
  puVar11 = puStack_d0;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_d0,uVar12);
  _swift_bridgeObjectRelease(puVar16);
  func_0x000107c45d64(fVar21,fVar20,puVar9);
  _objc_release(uVar14);
  _objc_release(puVar11);
  return puVar9;
}



/* Entry: 103eaf3a4; end: 103eafb77;  */

/* WARNING: Removing unreachable block (ram,0x000103eaf814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaf3a4(undefined **param_1,ulong param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  uint uVar15;
  long extraout_x8;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong auStack_460 [5];
  undefined1 auStack_438 [8];
  long alStack_430 [2];
  undefined8 uStack_420;
  undefined **ppuStack_418;
  long lStack_410;
  undefined *puStack_408;
  long lStack_400;
  undefined *puStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  undefined1 auStack_3d0 [16];
  undefined **ppuStack_3c0;
  ulong uStack_3b8;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
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
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
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
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
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
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined2 uStack_112;
  undefined8 uStack_110;
  undefined **ppuStack_108;
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0;
  __s10Foundation11JSONEncoderC19KeyEncodingStrategyOMa();
  puVar17 = *(undefined **)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar17 + 0x40));
  lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == (undefined **)0x0) {
    uStack_420 = param_5;
    ppuStack_418 = param_4;
    lStack_410 = (long)&uStack_420 + lVar13;
    if (param_2 >> 0x3e == 0) {
      uStack_3e8 = param_2 & 0xffffffffffffff8;
      uVar19 = *(ulong *)(uStack_3e8 + 0x10);
    }
    else {
      uStack_3e8 = param_2 & 0xffffffffffffff8;
      uVar19 = uStack_3e8;
      if (0x7fffffffffffffff < param_2) {
        uVar19 = param_2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    ppuVar16 = &puStack_320;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_408 = puVar17;
    lStack_400 = lVar6;
    uStack_3e0 = param_2;
    if (uVar19 != 0) {
      uStack_3f0 = param_2 & 0xc000000000000001;
      uVar20 = 0;
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        while( true ) {
          puStack_3f8 = puVar7;
          if (uStack_3f0 == 0) {
            if (*(ulong *)(uStack_3e8 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafb44);
              (*pcVar4)();
            }
            uVar8 = *(ulong *)(uStack_3e0 + uVar20 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar8 = uVar20;
            func_0x00010103198c(uVar20,uStack_3e0);
          }
          uVar1 = uVar20 + 1;
          if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafb40);
            (*pcVar4)();
          }
          func_0x000103eb120c(&puStack_278);
          uStack_2d8 = uStack_230;
          uStack_2e0 = uStack_238;
          uStack_2c8 = uStack_220;
          uStack_2d0 = uStack_228;
          uStack_280 = uStack_1d8;
          uStack_298 = uStack_1f0;
          uStack_2a0 = uStack_1f8;
          uStack_288 = uStack_1e0;
          uStack_290 = uStack_1e8;
          uStack_2b8 = uStack_210;
          uStack_2c0 = uStack_218;
          uStack_2a8 = uStack_200;
          uStack_2b0 = uStack_208;
          puStack_318 = puStack_270;
          puStack_320 = puStack_278;
          ppuStack_308 = ppuStack_260;
          uStack_310 = uStack_268;
          uStack_2f8 = uStack_250;
          uStack_300 = uStack_258;
          uStack_2e8 = uStack_240;
          uStack_2f0 = uStack_248;
          ppuStack_3c0 = &puStack_320;
          uStack_3b8 = uVar8;
          _objc_retain(uVar8);
          func_0x0001044052b4(FUN_103eb122c,auStack_3d0,FUN_103eb1dfc,0,0x103eb1e00,0);
          uStack_148 = uStack_298;
          uStack_150 = uStack_2a0;
          uStack_138 = uStack_288;
          uStack_140 = uStack_290;
          uStack_188 = uStack_2d8;
          uStack_190 = uStack_2e0;
          uStack_178 = uStack_2c8;
          uStack_180 = uStack_2d0;
          uStack_168 = uStack_2b8;
          uStack_170 = uStack_2c0;
          uStack_158 = uStack_2a8;
          uStack_160 = uStack_2b0;
          puStack_1c8 = puStack_318;
          puStack_1d0 = puStack_320;
          ppuStack_1b8 = ppuStack_308;
          uStack_1c0 = uStack_310;
          uStack_1a8 = uStack_2f8;
          uStack_1b0 = uStack_300;
          uStack_198 = uStack_2e8;
          uStack_1a0 = uStack_2f0;
          uStack_98 = uStack_298;
          uStack_a0 = uStack_2a0;
          uStack_88 = uStack_288;
          uStack_90 = uStack_290;
          uStack_d8 = uStack_2d8;
          uStack_e0 = uStack_2e0;
          uStack_c8 = uStack_2c8;
          uStack_d0 = uStack_2d0;
          uStack_b8 = uStack_2b8;
          uStack_c0 = uStack_2c0;
          uStack_a8 = uStack_2a8;
          uStack_b0 = uStack_2b0;
          uStack_118 = SUB81(puStack_318,0);
          uStack_117 = (undefined1)((ulong)puStack_318 >> 8);
          uStack_116 = (undefined1)((ulong)puStack_318 >> 0x10);
          uStack_115 = (undefined1)((ulong)puStack_318 >> 0x18);
          uStack_114 = (undefined1)((ulong)puStack_318 >> 0x20);
          uStack_113 = (undefined1)((ulong)puStack_318 >> 0x28);
          uStack_112 = (undefined2)((ulong)puStack_318 >> 0x30);
          uStack_120 = SUB81(puStack_320,0);
          uStack_11f = (undefined1)((ulong)puStack_320 >> 8);
          uStack_11e = (undefined1)((ulong)puStack_320 >> 0x10);
          uStack_11d = (undefined1)((ulong)puStack_320 >> 0x18);
          uStack_11c = (undefined1)((ulong)puStack_320 >> 0x20);
          uStack_11b = (undefined1)((ulong)puStack_320 >> 0x28);
          uStack_11a = (undefined1)((ulong)puStack_320 >> 0x30);
          uStack_119 = (undefined1)((ulong)puStack_320 >> 0x38);
          ppuStack_108 = ppuStack_308;
          uStack_110 = uStack_310;
          uStack_130 = uStack_280;
          uStack_80 = uStack_280;
          uStack_f8 = uStack_2f8;
          uStack_100 = uStack_300;
          uStack_e8 = uStack_2e8;
          uStack_f0 = uStack_2f0;
          FUN_103eb140c(&puStack_1d0,auStack_3d0,0x11302aa58,&UNK_10dca5e10);
          func_0x000103eb1454(&uStack_120,0x11302aa58,&UNK_10dca5e10);
          _objc_release(uVar8);
          _objc_release(uVar8);
          iVar5 = (int)&puStack_1d0;
          FUN_103eb1258();
          puVar17 = puStack_3f8;
          if (iVar5 != 1) break;
          puVar7 = puStack_3f8;
          uVar20 = uVar20 + 1;
          if (uVar1 == uVar19) goto LAB_103eaf784;
        }
        puVar7 = puStack_3f8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar14 = puVar17;
        if (((ulong)puVar7 & 1) == 0) {
          puVar14 = (undefined *)0x0;
          FUN_103eb02b0(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar20 = *(ulong *)(puVar14 + 0x10);
        puVar7 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar20) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
          FUN_103eb02b0(puVar7,uVar20 + 1,1,puVar14);
        }
        uStack_2d8 = uStack_188;
        uStack_2e0 = uStack_190;
        uStack_2c8 = uStack_178;
        uStack_2d0 = uStack_180;
        uStack_2f8 = uStack_1a8;
        uStack_300 = uStack_1b0;
        uStack_2e8 = uStack_198;
        uStack_2f0 = uStack_1a0;
        uStack_280 = uStack_130;
        uStack_298 = uStack_148;
        uStack_2a0 = uStack_150;
        uStack_288 = uStack_138;
        uStack_290 = uStack_140;
        uStack_2b8 = uStack_168;
        uStack_2c0 = uStack_170;
        uStack_2a8 = uStack_158;
        uStack_2b0 = uStack_160;
        puStack_318 = puStack_1c8;
        puStack_320 = puStack_1d0;
        ppuStack_308 = ppuStack_1b8;
        uStack_310 = uStack_1c0;
        *(ulong *)(puVar7 + 0x10) = uVar20 + 1;
        *(undefined ***)(puVar7 + uVar20 * 0xa8 + 0x38) = ppuStack_1b8;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x30) = uStack_1c0;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x48) = uStack_1a8;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x40) = uStack_1b0;
        *(undefined **)(puVar7 + uVar20 * 0xa8 + 0x28) = puStack_1c8;
        *(undefined **)(puVar7 + uVar20 * 0xa8 + 0x20) = puStack_1d0;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x78) = uStack_178;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x70) = uStack_180;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x88) = uStack_168;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x80) = uStack_170;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x58) = uStack_198;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x50) = uStack_1a0;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x68) = uStack_188;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x60) = uStack_190;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0xc0) = uStack_130;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0xa8) = uStack_148;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0xa0) = uStack_150;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0xb8) = uStack_138;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0xb0) = uStack_140;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x98) = uStack_158;
        *(undefined8 *)(puVar7 + uVar20 * 0xa8 + 0x90) = uStack_160;
        uVar20 = uVar1;
      } while (uVar1 != uVar19);
    }
LAB_103eaf784:
    param_2 = uStack_3e0;
    uVar9 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    lVar6 = lStack_410;
    (**(code **)(puStack_408 + 0x68))
              (lStack_410,
               *(undefined4 *)
                PTR___s10Foundation11JSONEncoderC19KeyEncodingStrategyO18convertToSnakeCaseyA2EmFWC_110350398
               ,lStack_400);
    __s10Foundation11JSONEncoderC19keyEncodingStrategyAC03KeydE0OvsTj(lVar6);
    uStack_120 = SUB81(puVar7,0);
    uStack_11f = (undefined1)((ulong)puVar7 >> 8);
    uStack_11e = (undefined1)((ulong)puVar7 >> 0x10);
    uStack_11d = (undefined1)((ulong)puVar7 >> 0x18);
    uStack_11c = (undefined1)((ulong)puVar7 >> 0x20);
    uStack_11b = (undefined1)((ulong)puVar7 >> 0x28);
    uStack_11a = (undefined1)((ulong)puVar7 >> 0x30);
    uStack_119 = (undefined1)((ulong)puVar7 >> 0x38);
    puVar14 = (undefined *)0x11302aa60;
    func_0x0001000285a8(0x11302aa60,&UNK_10dca5e18);
    puVar17 = puVar14;
    FUN_103eb1270();
    puVar10 = &uStack_120;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar10,puVar14,puVar17);
    _swift_bridgeObjectRelease();
    uVar3 = (uint)((ulong)puVar14 >> 0x20);
    uVar15 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uStack_120 = SUB81(puVar10,0);
        uStack_11f = (undefined1)((ulong)puVar10 >> 8);
        uStack_11e = (undefined1)((ulong)puVar10 >> 0x10);
        uStack_11d = (undefined1)((ulong)puVar10 >> 0x18);
        uStack_11c = (undefined1)((ulong)puVar10 >> 0x20);
        uStack_11b = (undefined1)((ulong)puVar10 >> 0x28);
        uStack_11a = (undefined1)((ulong)puVar10 >> 0x30);
        uStack_119 = (undefined1)((ulong)puVar10 >> 0x38);
        uStack_118 = SUB81(puVar14,0);
        uStack_117 = (undefined1)((ulong)puVar14 >> 8);
        uStack_116 = (undefined1)((ulong)puVar14 >> 0x10);
        uStack_115 = (undefined1)((ulong)puVar14 >> 0x18);
        uStack_114 = (undefined1)((ulong)puVar14 >> 0x20);
        puVar17 = (undefined *)((ulong)puVar14 >> 0x30 & 0xff);
        uStack_113 = (undefined1)((ulong)puVar14 >> 0x28);
        goto LAB_103eaf970;
      }
      lVar6 = (long)(int)puVar10;
      puVar18 = (undefined *)(((long)puVar10 >> 0x20) - lVar6);
      if ((long)puVar10 >> 0x20 < lVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafb6c);
        (*pcVar4)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar7 != (undefined *)0x0) {
        puVar17 = puVar7;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar6,(long)puVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafb74);
          (*pcVar4)();
        }
        puVar7 = puVar7 + (lVar6 - (long)puVar17);
        goto LAB_103eaf940;
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
LAB_103eaf988:
      puVar7 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
LAB_103eaf990:
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar7);
      param_2 = uStack_3e0;
      if (puVar17 != (undefined *)0x0) goto LAB_103eaf9a4;
      puStack_278 = puVar10;
      puStack_270 = puVar14;
      func_0x00010006c00c(puVar10,puVar14);
      uVar11 = 0x112dd0c48;
      func_0x0001000285a8(0x112dd0c48,&UNK_10dca5e20);
      ppuVar12 = &puStack_1d0;
      _swift_dynamicCast(ppuVar12,&puStack_278,PTR___s10Foundation4DataVN_110350ae0,uVar11,6);
      if (((ulong)ppuVar12 & 1) == 0) {
        uStack_1b0 = 0;
        puStack_1c8 = (undefined *)0x0;
        puStack_1d0 = (undefined *)0x0;
        ppuStack_1b8 = (undefined **)0x0;
        uStack_1c0 = 0;
        func_0x000103eb1454(&puStack_1d0,0x112dd0c50,&UNK_10d9920d0);
LAB_103eafb14:
        param_1 = ppuStack_418;
        puVar7 = puVar10;
        puVar17 = puVar14;
        func_0x0001018e4f60(puVar10);
        func_0x00010006c090(puVar10,puVar14);
        param_4 = ppuVar16;
      }
      else {
        func_0x0001018e61f8(&puStack_1d0,&uStack_120);
        uVar11 = uStack_100;
        ppuVar16 = ppuStack_108;
        FUN_103eb1494(&uStack_120,ppuStack_108);
        ppuVar12 = ppuVar16;
        __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(ppuVar16,uVar11);
        uVar11 = uStack_100;
        param_4 = ppuStack_108;
        if (((ulong)ppuVar12 & 1) == 0) {
          func_0x000103eb14b8(&uStack_120);
          goto LAB_103eafb14;
        }
        FUN_103eb1494(&uStack_120,ppuStack_108);
        __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
                  (&puStack_1d0,&UNK_1018e4fc8,0,PTR___sSSN_11034da80,param_4,uVar11);
        func_0x00010006c090(puVar10,puVar14);
        func_0x000103eb14b8(&uStack_120);
        puVar7 = puStack_1d0;
        param_1 = ppuStack_418;
        puVar17 = puStack_1c8;
      }
    }
    else {
      if (uVar15 == 2) {
        lVar6 = *(long *)(puVar10 + 0x10);
        lVar2 = *(long *)(puVar10 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        puVar17 = puVar7;
        if (puVar7 != (undefined *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar6,(long)puVar17)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafb70);
            (*pcVar4)();
          }
          puVar7 = puVar7 + (lVar6 - (long)puVar17);
        }
        puVar18 = (undefined *)(lVar2 - lVar6);
        if (SBORROW8(lVar2,lVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103eaf90c);
          (*pcVar4)();
        }
LAB_103eaf940:
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (puVar7 == (undefined *)0x0) goto LAB_103eaf988;
        if ((long)puVar18 <= (long)puVar17) {
          puVar17 = puVar18;
        }
        goto LAB_103eaf990;
      }
      uStack_118 = 0;
      uStack_117 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      uStack_113 = 0;
      uStack_120 = 0;
      uStack_11f = 0;
      uStack_11e = 0;
      uStack_11d = 0;
      uStack_11c = 0;
      uStack_11b = 0;
      uStack_11a = 0;
      uStack_119 = 0;
      puVar17 = (undefined *)0x0;
LAB_103eaf970:
      puVar7 = &uStack_120;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar7);
LAB_103eaf9a4:
      func_0x00010006c090(puVar10,puVar14);
      param_1 = ppuStack_418;
      param_4 = ppuVar16;
    }
    param_5 = uStack_420;
    puVar14 = puVar17;
    (*(code *)param_1)(puVar7,puVar17,param_2);
    _swift_release(uVar9);
    puVar7 = puVar17;
    _swift_bridgeObjectRelease();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
  }
  else {
    _swift_errorRetain(param_1);
    puVar7 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    (*(code *)param_4)(0,0,PTR___swiftEmptyArrayStorage_11034f1c8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
      return;
    }
  }
  ___stack_chk_fail();
  *(ulong *)((long)auStack_460 + lVar13) = param_2;
  *(undefined **)((long)auStack_460 + lVar13 + 8) = puVar17;
  *(undefined ***)((long)auStack_460 + lVar13 + 0x10) = param_4;
  *(undefined ***)((long)auStack_460 + lVar13 + 0x18) = param_1;
  *(undefined8 *)((long)auStack_460 + lVar13 + 0x20) = param_5;
  *(undefined8 **)(auStack_438 + lVar13) = &uStack_420;
  *(undefined1 **)((long)alStack_430 + lVar13) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_430 + lVar13 + 8) = FUN_103eafb78;
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar17 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if (((ulong)puVar7 & 0x8000000000000000) != 0) {
      puVar17 = puVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (SBORROW8((long)puVar17,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafca0);
    (*pcVar4)();
  }
  puVar17 = puVar17 + -1;
  lVar13 = *(long *)(puVar14 + _DAT_11302aa08);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    lVar13 = 1;
    if (SBORROW8((long)puVar17,-1)) goto LAB_103eafc18;
  }
  else {
    lVar6 = lVar13;
    func_0x000107c49820();
    _objc_release(lVar13);
    lVar13 = -lVar6;
    if (SBORROW8((long)puVar17,lVar6)) {
LAB_103eafc18:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafc1c);
      (*pcVar4)();
    }
  }
  puVar14 = puVar17 + lVar13;
  if ((long)puVar14 < 1) {
    if ((long)puVar17 < 0) {
      return;
    }
    puVar17 = (undefined *)0x0;
  }
  else {
    if ((long)puVar17 < 0) {
      return;
    }
    if (puVar14 <= puVar17) {
      puVar17 = puVar14;
    }
  }
  if ((ulong)puVar7 >> 0x3e == 0) {
    if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= (long)puVar17) {
      return;
    }
  }
  else {
    puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if (((ulong)puVar7 & 0x8000000000000000) != 0) {
      puVar14 = puVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)puVar14 <= (long)puVar17) {
      return;
    }
  }
  if (((ulong)puVar7 & 0xc000000000000001) == 0) {
    if (*(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103eafcb4);
      (*pcVar4)();
    }
    _objc_retain(*(undefined8 *)(puVar7 + (long)puVar17 * 8 + 0x20));
  }
  else {
    func_0x00010103198c(puVar17,puVar7);
  }
  return;
}



/* Entry: 103eafb78; end: 103eafcb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eafb78(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar2 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (SBORROW8(uVar2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103eafca0);
    (*pcVar1)();
  }
  uVar2 = uVar2 - 1;
  lVar3 = *(long *)(param_2 + _DAT_11302aa08);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = 1;
    if (SBORROW8(uVar2,-1)) goto LAB_103eafc18;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c49820();
    _objc_release(lVar3);
    lVar3 = -lVar4;
    if (SBORROW8(uVar2,lVar4)) {
LAB_103eafc18:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eafc1c);
      (*pcVar1)();
    }
  }
  uVar5 = uVar2 + lVar3;
  if ((long)uVar5 < 1) {
    if ((long)uVar2 < 0) {
      return;
    }
    uVar2 = 0;
  }
  else {
    if ((long)uVar2 < 0) {
      return;
    }
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
  }
  if (param_1 >> 0x3e == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar2) {
      return;
    }
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar5 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)uVar5 <= (long)uVar2) {
      return;
    }
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eafcb4);
      (*pcVar1)();
    }
    _objc_retain(*(undefined8 *)(param_1 + uVar2 * 8 + 0x20));
  }
  else {
    func_0x00010103198c(uVar2,param_1);
  }
  return;
}



/* Entry: 103eafcb4; end: 103eafddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eafcb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  long in_x5;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar5 = *(undefined8 *)(in_stack_00000010 + _DAT_113077318);
  uVar2 = ((undefined8 *)(in_stack_00000010 + _DAT_113077318))[1];
  uVar6 = *(undefined8 *)(in_stack_00000010 + _DAT_113077320);
  uVar3 = ((undefined8 *)(in_stack_00000010 + _DAT_113077320))[1];
  uVar7 = 0;
  if (in_x5 != 0) {
    uVar7 = in_x4;
  }
  lVar1 = -0x2000000000000000;
  if (in_x5 != 0) {
    lVar1 = in_x5;
  }
  puVar4 = PTR_PTR_1126a6350;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(in_x5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(in_stack_00000018,PTR___sSSN_11034da80);
  func_0x000107c48584();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(in_stack_00000018);
  uVar7 = *in_stack_00000008;
  *in_stack_00000008 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 103eafddc; end: 103eafde3;  */

void FUN_103eafddc(void)

{
  return;
}



/* Entry: 103eafde4; end: 103eafdff;  */

void FUN_103eafde4(undefined8 param_1)

{
  FUN_103eafe00();
  uRam000000011302aa90 = param_1;
  return;
}



/* Entry: 103eafe00; end: 103eaff7f;  */

undefined * FUN_103eafe00(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = 0;
  __s10Foundation8TimeZoneVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation6LocaleVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
  func_0x000107c453e4();
  uVar4 = 0x6168;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6168,0xe200000000000000);
  func_0x000107c53e28(puVar3);
  _objc_release(uVar4);
  uVar4 = 0x73752d6e65;
  __s10Foundation6LocaleV10identifierACSS_tcfC(lVar6,0x73752d6e65,0xe500000000000000);
  __s10Foundation6LocaleV19_bridgeToObjectiveCSo8NSLocaleCyF();
  (**(code **)(lVar9 + 8))(lVar6,lVar2);
  func_0x000107c5601c(puVar3);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  _objc_opt_self(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  func_0x000107c4b834();
  _objc_retainAutoreleasedReturnValue();
  __s10Foundation8TimeZoneV36_unconditionallyBridgeFromObjectiveCyACSo06NSTimeC0CSgFZ(puVar7);
  _objc_release(puVar5);
  __s10Foundation8TimeZoneV19_bridgeToObjectiveCSo06NSTimeC0CyF();
  (**(code **)(lVar8 + 8))(puVar7,lVar1);
  func_0x000107c59d94(puVar3);
  _objc_release(puVar5);
  return puVar3;
}



/* Entry: 103eaff80; end: 103eaffeb;  */

void FUN_103eaff80(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103eb14d8(0,0x11302aa80,&PTR_PTR_1126ada98);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11302aa98;
  plVar5 = (long *)&UNK_10dca5e30;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103eaffec; end: 103eb0187;  */

ulong FUN_103eaffec(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103eb00bc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103eb00c0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_103f2d318(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_103f2d318(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000013,0x800000010f1cb9b0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103eb0188);
  (*pcVar2)();
}



/* Entry: 103eb0188; end: 103eb02af;  */

ulong FUN_103eb0188(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb02b0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103eb03d8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb02ac);
      (*pcVar1)();
    }
    FUN_103eb0458(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 103eb02b0; end: 103eb03d7;  */

undefined * FUN_103eb02b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103eb03d8);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x11302aa78;
    func_0x0001000285a8(0x11302aa78,&UNK_10dca5e28);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0xa8) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11071c640);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0xa8 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0xa8);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 103eb03d8; end: 103eb0457;  */

undefined * FUN_103eb03d8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103eaff80();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103eb0458; end: 103eb056f;  */

long FUN_103eb0458(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103eb056c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103eb0570);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103eb14d8(0,0x11302aa80,&PTR_PTR_1126ada98);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103eb14d8(0,0x11302aa80,&PTR_PTR_1126ada98);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103eb0568);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103eb0570; end: 103eb0e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb0570(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_11071c228;
  _swift_allocObject(&UNK_11071c228,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_11071bf08;
  _swift_allocObject(&UNK_11071bf08,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_1);
  puVar5 = &UNK_11071c250;
  _swift_allocObject(&UNK_11071c250,0x28,7);
  *(code **)(puVar5 + 0x10) = FUN_103eb0e88;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  puVar15 = *(undefined **)(param_1 + _DAT_11302a9d0);
  _swift_retain_n(puVar4,3);
  _swift_retain_n(puVar3,3);
  __Block_copy(param_2);
  puVar6 = puVar15;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0);
    _swift_release_n(puVar4,3);
    _swift_release_n(puVar3,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar5);
    return;
  }
  puVar7 = &UNK_11071bfd0;
  _swift_allocObject(&UNK_11071bfd0,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10,puVar6);
  puVar8 = &UNK_11071c278;
  _swift_allocObject(&UNK_11071c278,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined8 *)(puVar8 + 0x18) = 0x103eb15ac;
  *(undefined **)(puVar8 + 0x20) = puVar5;
  lVar1 = lRam000000011302aa10;
  _swift_retain_n(puVar5,3);
  _swift_retain_n(puVar7,2);
  if (lVar1 != -1) {
    _swift_once(0x11302aa10,FUN_103eadda0);
  }
  uVar2 = uRam000000011302aa20;
  uVar14 = uRam000000011302aa18;
  uVar9 = uRam000000011302aa18;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam000000011302aa18,uRam000000011302aa20);
  puVar10 = puVar6;
  func_0x000107c44898();
  _objc_release(uVar9);
  puVar11 = puVar15;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (((ulong)puVar10 & 1) == 0) {
    if (puVar11 != (undefined *)0x0) {
      bRam000000011302aa28 = 1;
      ppuVar12 = &PTR____CFConstantStringClassReference_110f59558;
      puVar15 = &UNK_11071c2a0;
      _swift_allocObject(&UNK_11071c2a0,0x20,7);
      *(undefined8 *)(puVar15 + 0x10) = 0x103eb15b0;
      *(undefined **)(puVar15 + 0x18) = puVar8;
      _objc_retain(&PTR____CFConstantStringClassReference_110f59558);
      uStack_70 = 0x103eb159c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1013b7310;
      puStack_78 = &UNK_11071c2b8;
      ppuVar13 = &puStack_90;
      puStack_68 = puVar15;
      __Block_copy(ppuVar13);
      puVar15 = puStack_68;
      _swift_retain(puVar8);
      _swift_release(puVar15);
      func_0x000107c5032c(puVar11);
      __Block_release(ppuVar13);
      _swift_unknownObjectRelease(puVar6);
      _swift_release_n(puVar4,3);
      _swift_release_n(puVar3,3);
      _swift_release_n(puVar7,2);
      _swift_release(puVar8);
      _swift_release_n(puVar5,3);
      _swift_unknownObjectRelease(puVar11);
LAB_103eb09a4:
      _objc_release(ppuVar12);
      return;
    }
    _swift_beginAccess(puVar7 + 0x10,&puStack_90,0,0);
    puVar15 = puVar7 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(param_2 + 0x10))(param_2,0);
      _swift_unknownObjectRelease(puVar6);
      _swift_release_n(puVar4,3);
      _swift_release_n(puVar3,3);
      _swift_release_n(puVar7,2);
      _swift_release(puVar8);
      _swift_release_n(puVar5,3);
      return;
    }
  }
  else {
    if (puVar11 != (undefined *)0x0) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110f59558;
      _objc_retain(&PTR____CFConstantStringClassReference_110f59558);
      puVar10 = puVar11;
      func_0x000107c49a70();
      _objc_release(ppuVar12);
      if (((ulong)puVar10 & 1) == 0) {
        if ((bRam000000011302aa28 & 1) == 0) {
          uVar9 = uVar14;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,uVar2);
          func_0x000107c54900(puVar11);
          _objc_release(uVar9);
          func_0x000107c5c734();
          _objc_retainAutoreleasedReturnValue();
          if (puVar15 != (undefined *)0x0) {
            bRam000000011302aa28 = 1;
            puVar10 = &UNK_11071c2f0;
            _swift_allocObject(&UNK_11071c2f0,0x20,7);
            *(undefined8 *)(puVar10 + 0x10) = 0x103eb15b0;
            *(undefined **)(puVar10 + 0x18) = puVar8;
            _objc_retain(ppuVar12);
            uStack_70 = 0x103eb15a0;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            puStack_80 = &UNK_1013b7310;
            puStack_78 = &UNK_11071c308;
            ppuVar13 = &puStack_90;
            puStack_68 = puVar10;
            __Block_copy(ppuVar13);
            puVar10 = puStack_68;
            _swift_retain(puVar8);
            _swift_release(puVar10);
            func_0x000107c5032c(puVar15);
            __Block_release(ppuVar13);
            _swift_unknownObjectRelease(puVar6);
            _swift_release_n(puVar4,3);
            _swift_release_n(puVar3,3);
            _swift_release_n(puVar7,2);
            _swift_release(puVar8);
            _swift_release_n(puVar5,3);
            _swift_unknownObjectRelease(puVar11);
            _swift_unknownObjectRelease(puVar15);
            goto LAB_103eb09a4;
          }
          _swift_beginAccess(puVar7 + 0x10,&puStack_90,0,0);
          puVar15 = puVar7 + 0x10;
          _swift_unknownObjectWeakLoadStrong();
          if (puVar15 == (undefined *)0x0) {
            (**(code **)(param_2 + 0x10))(param_2,0);
            _swift_unknownObjectRelease(puVar6);
            _swift_release_n(puVar4,3);
            _swift_release_n(puVar3,3);
            _swift_release_n(puVar7,2);
            _swift_release(puVar8);
            _swift_release_n(puVar5,3);
            puVar15 = puVar11;
            goto LAB_103eb0df4;
          }
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,uVar2);
          func_0x000107c54900(puVar15);
          _objc_release(uVar14);
          (**(code **)(param_2 + 0x10))(param_2,0);
          _swift_unknownObjectRelease(puVar6);
        }
        else {
          _swift_beginAccess(puVar7 + 0x10,&puStack_90,0,0);
          puVar15 = puVar7 + 0x10;
          _swift_unknownObjectWeakLoadStrong();
          if (puVar15 == (undefined *)0x0) {
            (**(code **)(param_2 + 0x10))(param_2,0);
            _swift_release(puVar8);
            _swift_release(puVar5);
            _swift_unknownObjectRelease(puVar11);
            goto LAB_103eb0d04;
          }
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,uVar2);
          func_0x000107c54900(puVar15);
          _objc_release(uVar14);
          (**(code **)(param_2 + 0x10))(param_2,0);
          _swift_unknownObjectRelease(puVar6);
        }
        _swift_release_n(puVar4,3);
        _swift_release_n(puVar3,3);
        _swift_release_n(puVar7,2);
        _swift_release(puVar8);
        _swift_release_n(puVar5,3);
        _swift_unknownObjectRelease(puVar11);
      }
      else {
        puVar15 = &UNK_11071c340;
        _swift_allocObject(&UNK_11071c340,0x20,7);
        *(undefined8 *)(puVar15 + 0x10) = 0x103eb15b0;
        *(undefined **)(puVar15 + 0x18) = puVar8;
        uStack_70 = 0x103eb15b8;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1010ca3e8;
        puStack_78 = &UNK_11071c358;
        ppuVar13 = &puStack_90;
        puStack_68 = puVar15;
        __Block_copy(ppuVar13);
        puVar15 = puStack_68;
        _swift_retain(puVar8);
        _swift_release(puVar15);
        func_0x000107c43188(puVar11);
        __Block_release(ppuVar13);
        _swift_unknownObjectRelease(puVar6);
        _swift_release_n(puVar4,3);
        _swift_release_n(puVar3,3);
        _swift_release_n(puVar7,2);
        _swift_release(puVar8);
        _swift_release_n(puVar5,3);
        puVar15 = puVar11;
      }
      goto LAB_103eb0df4;
    }
    _swift_beginAccess(puVar7 + 0x10,&puStack_90,0,0);
    puVar15 = puVar7 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(param_2 + 0x10))(param_2,0);
      _swift_release(puVar8);
      _swift_release(puVar5);
LAB_103eb0d04:
      _swift_unknownObjectRelease(puVar6);
      _swift_release_n(puVar4,3);
      _swift_release_n(puVar3,3);
      _swift_release_n(puVar5,2);
      _swift_release_n(puVar7,2);
      return;
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,uVar2);
  func_0x000107c54900(puVar15);
  _objc_release(uVar14);
  (**(code **)(param_2 + 0x10))(param_2,0);
  _swift_unknownObjectRelease(puVar6);
  _swift_release_n(puVar4,3);
  _swift_release_n(puVar3,3);
  _swift_release_n(puVar7,2);
  _swift_release(puVar8);
  _swift_release_n(puVar5,3);
LAB_103eb0df4:
  _swift_unknownObjectRelease(puVar15);
  return;
}



/* Entry: 103eb0e88; end: 103eb0e97;  */

void FUN_103eb0e88(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103eb0e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103eb0e98; end: 103eb0eb7;  */

void FUN_103eb0e98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103eb0eb8; end: 103eb11e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb0eb8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar3 = &UNK_11071c4f8;
  _swift_allocObject(&UNK_11071c4f8,0x20,7);
  *(long *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_11071bf08;
  _swift_allocObject(&UNK_11071bf08,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_1);
  puVar5 = &UNK_11071c520;
  _swift_allocObject(&UNK_11071c520,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(code **)(puVar5 + 0x18) = FUN_103eb1380;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  lVar11 = *(long *)(param_1 + _DAT_11302a9c8);
  _swift_retain(param_2);
  _objc_retain(param_3);
  _swift_retain(puVar3);
  _swift_retain(puVar4);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    puVar9 = &UNK_11071c548;
    _swift_allocObject(&UNK_11071c548,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_103eb13b4;
    *(undefined **)(puVar9 + 0x18) = puVar5;
    lVar1 = lRam000000011302aa10;
    _swift_retain(puVar5);
    if (lVar1 != -1) {
      _swift_once(0x11302aa10,FUN_103eadda0);
    }
    uVar7 = uRam000000011302aa20;
    uVar10 = uRam000000011302aa18;
    func_0x0001048b0ec8(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar7);
    func_0x0001048b0b48(uVar10,uVar7,0x17);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11302a9e8);
    func_0x000107c51f40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    _swift_getObjectType();
    func_0x000100bcb214();
    _swift_unknownObjectRelease(uVar6);
    uStack_88 = 0x103eb13c0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1010c8c0c;
    puStack_90 = &UNK_11071c560;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar9;
    __Block_copy(ppuVar8);
    puVar2 = puStack_80;
    _swift_retain(puVar9);
    _swift_release(puVar2);
    func_0x000107c503b0(0x3ff0000000000000,lVar11);
    _swift_release(puVar5);
    __Block_release(ppuVar8);
    _swift_release(puVar3);
    _swift_release(puVar4);
    _swift_unknownObjectRelease(lVar11);
    _swift_release(puVar9);
    _objc_release(uVar10);
    _objc_release(uVar7);
    return;
  }
  _swift_beginAccess(puVar4 + 0x10,&puStack_a8,0,0);
  puVar9 = puVar4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (puVar9 == (undefined *)0x0) {
    _swift_beginAccess(param_2 + 0x10,auStack_78,1,0);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    _objc_release(uVar10);
    _dispatch_group_leave(param_3);
  }
  else {
    _objc_release();
    puVar9 = puVar4 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar9 != (undefined *)0x0) {
      _swift_beginAccess(param_2 + 0x10,auStack_78,1,0);
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = 0;
      _objc_release(uVar10);
      _dispatch_group_leave(param_3);
      _swift_release(puVar4);
      _swift_release(puVar5);
      _objc_release(puVar9);
      goto LAB_103eb11a8;
    }
  }
  _swift_release(puVar4);
  _swift_release(puVar5);
LAB_103eb11a8:
  _swift_release(puVar3);
  return;
}



/* Entry: 103eb11e8; end: 103eb122b;  */

void FUN_103eb11e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar1 + 0x10,auStack_68,1,0);
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar4);
  _swift_beginAccess(lVar2 + 0x10,auStack_80,1,0);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar4);
  _dispatch_group_leave(uVar3);
  return;
}



/* Entry: 103eb122c; end: 103eb1257;  */

void FUN_103eb122c(void)

{
  FUN_103eb1ba8();
  return;
}



/* Entry: 103eb1258; end: 103eb126f;  */

int FUN_103eb1258(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103eb1270; end: 103eb12df;  */

void FUN_103eb1270(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam000000011302aa68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11302aa60;
  func_0x00010002969c(0x11302aa60,&UNK_10dca5e18);
  uVar2 = uVar1;
  FUN_103eb12e0();
  puVar3 = PTR___sSayxGSEsSERzlMc_11034dce0;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSayxGSEsSERzlMc_11034dce0,uVar1,&uStack_28);
  puRam000000011302aa68 = puVar3;
  return;
}



/* Entry: 103eb12e0; end: 103eb137f;  */

void FUN_103eb12e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302aa70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5eac;
  _swift_getWitnessTable(&UNK_10dca5eac,&UNK_11071c640);
  puRam000000011302aa70 = puVar1;
  return;
}



/* Entry: 103eb1380; end: 103eb1387;  */

void FUN_103eb1380(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar3);
  _dispatch_group_leave(uVar2);
  return;
}



/* Entry: 103eb1388; end: 103eb13b3;  */

void FUN_103eb1388(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103eb13b4; end: 103eb13c7;  */

void FUN_103eb13b4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
  lVar2 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    (*pcVar1)();
  }
  else {
    _objc_release();
    _swift_beginAccess(lVar3 + 0x10,auStack_60,0,0);
    lVar3 = lVar3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      FUN_103eaeb90(param_1,pcVar1,uVar4);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 103eb13c8; end: 103eb13ff;  */

void FUN_103eb13c8(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103eb1400; end: 103eb140b;  */

void FUN_103eb1400(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (param_1 != 0) {
    _swift_errorRetain();
    (*pcVar1)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  if (param_2 != 0) {
    _objc_retain(param_2);
    FUN_103eaee24();
    if (lVar2 == 0) {
      (*pcVar1)();
    }
    else {
      (*pcVar1)();
      _objc_release(param_2);
      param_2 = lVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  (*pcVar1)(0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103eb140c; end: 103eb1493;  */

undefined8 FUN_103eb140c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103eb1494; end: 103eb14d7;  */

long * FUN_103eb1494(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103eb14d8; end: 103eb1517;  */

void FUN_103eb14d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103eb1518; end: 103eb171f;  */

void FUN_103eb1518(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103eb1720; end: 103eb17cb;  */

void FUN_103eb1720(void)

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



/* Entry: 103eb17cc; end: 103eb17d3;  */

undefined1  [16] FUN_103eb17cc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  byte bVar10;
  long extraout_x8;
  code *in_x16;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar11;
  long unaff_x21;
  undefined1 *unaff_x22;
  undefined **unaff_x23;
  long unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_70 [80];
  
  bVar10 = *(byte *)unaff_x20;
  puVar5 = (undefined1 *)(ulong)bVar10;
  ppuVar9 = (undefined **)0xe700000000000000;
  ppuVar4 = (undefined **)0x644965756e6576;
  ppuVar6 = ppuVar4;
  ppuVar11 = unaff_x20;
  switch(bVar10) {
  case 0:
    goto code_r0x000103eb1618;
  default:
    ppuVar9 = (undefined **)0xe400000000000000;
  case 0x34:
  case 0x42:
  case 0x5c:
  case 0x6a:
  case 0xac:
  case 0xba:
  case 0xd4:
  case 0xe2:
    ppuVar4 = (undefined **)0x616e;
  case 0x27:
  case 0x3b:
  case 0x4f:
  case 99:
  case 0x9f:
  case 0xb3:
  case 199:
  case 0xdb:
  case 0xef:
    ppuVar4 = (undefined **)(ulong)((uint)ppuVar4 & 0xffff | 0x656d0000);
code_r0x000103eb15fc:
    auVar12._8_8_ = ppuVar9;
    auVar12._0_8_ = ppuVar4;
    return auVar12;
  case 2:
    ppuVar9 = (undefined **)0xe800000000000000;
    ppuVar4 = (undefined **)0x6f6c;
  case 0xe8:
    auVar16._0_8_ = (ulong)ppuVar4 & 0xffff | 0x7974696c61630000;
    auVar16._8_8_ = ppuVar9;
    return auVar16;
  case 3:
    ppuVar9 = (undefined **)0xe800000000000000;
  case 0xc4:
    ppuVar4 = (undefined **)0x7265746c6966;
code_r0x000103eb1670:
    auVar17._0_8_ = (ulong)ppuVar4 & 0xffffffffffff | 0x6449000000000000;
    auVar17._8_8_ = ppuVar9;
    return auVar17;
  case 4:
    ppuVar9 = (undefined **)0xe800000000000000;
  case 0x7c:
  case 0x8c:
    auVar14._8_8_ = ppuVar9;
    auVar14._0_8_ = 0x656c746974627573;
    return auVar14;
  case 5:
    ppuVar9 = (undefined **)0x65767265;
  case 0xb0:
    auVar19._8_8_ = (ulong)ppuVar9 & 0xffffffffffff | 0xed00007200000000;
    auVar19._0_8_ = 0x53794274696c7073;
    return auVar19;
  case 6:
    ppuVar9 = (undefined **)0x800000010f1cb9d0;
    ppuVar4 = (undefined **)0x13;
  case 0x9c:
    auVar20._0_8_ = (ulong)ppuVar4 & 0xffffffffffff | 0xd000000000000000;
    auVar20._8_8_ = ppuVar9;
    return auVar20;
  case 7:
    ppuVar4 = (undefined **)0x78457369;
  case 0x28:
  case 0xb4:
    auVar18._0_8_ = (ulong)ppuVar4 & 0xffffffff | 0x61727400000000;
    auVar18._8_8_ = 0xe700000000000000;
    return auVar18;
  case 8:
    ppuVar9 = (undefined **)0xe900000000000065;
    ppuVar4 = (undefined **)0x6576;
  case 0x79:
  case 0x89:
  case 0x90:
    auVar22._0_8_ = (ulong)ppuVar4 & 0xffff | 0x6d614e65756e0000;
    auVar22._8_8_ = ppuVar9;
    return auVar22;
  case 9:
  case 0xd8:
    auVar15._8_8_ = 0xe700000000000000;
    auVar15._0_8_ = 0x6c72556e6f6369;
    return auVar15;
  case 10:
    ppuVar9 = (undefined **)0x6765;
  case 0x48:
    auVar21._8_8_ = (ulong)ppuVar9 & 0xffffffffffff | 0xed000079726f0000;
    auVar21._0_8_ = 0x7461437265707573;
    return auVar21;
  case 0xb:
  case 0xfc:
    ppuVar9 = (undefined **)0x7365;
  case 0x4b:
  case 0x73:
  case 0xc3:
  case 0xeb:
  case 0xec:
    ppuVar9 = (undefined **)((ulong)ppuVar9 & 0xffffffffffff | 0xea00000000000000);
    ppuVar4 = (undefined **)0x69726f6765746163;
code_r0x000103eb1618:
    auVar13._8_8_ = ppuVar9;
    auVar13._0_8_ = ppuVar4;
    return auVar13;
  case 0x10:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0x14:
    ppuVar4 = (undefined **)(ulong)*(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8),0);
code_r0x000103eb1748:
    __ss6HasherV8_combineyySuF(ppuVar4);
    __ss6HasherV9_finalizeSiyF();
    auVar24._8_8_ = ppuVar9;
    auVar24._0_8_ = ppuVar4;
    return auVar24;
  case 0x11:
  case 0x18:
  case 0x1f:
  case 0x22:
  case 0x97:
    goto code_r0x000103eb1784;
  case 0x17:
    __ss6HasherV8_combineyySuF();
  case 0x92:
code_r0x000103eb1784:
    auVar25._8_8_ = ppuVar9;
    auVar25._0_8_ = ppuVar4;
    return auVar25;
  case 0x1d:
  case 0x95:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0x25:
  case 0x39:
  case 0x4d:
  case 0x61:
  case 0x9d:
  case 0xb1:
  case 0xc5:
  case 0xd9:
  case 0xed:
    *(undefined ***)((long)register0x00000008 + 0x50) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + 0x58) = unaff_x19;
  case 0x1b:
  case 0x60:
  case 0x93:
    *(long *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    unaff_x19 = (undefined **)(ulong)*(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8));
  case 0x12:
  case 0x1c:
  case 0x20:
  case 0x94:
  case 0x16:
  case 0x91:
    ppuVar4 = unaff_x19;
    __ss6HasherV8_combineyySuF(ppuVar4);
  case 0x15:
    __ss6HasherV9_finalizeSiyF();
  case 0x13:
  case 0x19:
  case 0x1a:
  case 0x99:
code_r0x000103eb17c4:
    auVar26._8_8_ = ppuVar9;
    auVar26._0_8_ = ppuVar4;
    return auVar26;
  case 0x1e:
    goto code_r0x000103eb1748;
  case 0x21:
  case 0x4c:
    goto code_r0x000103eb17c4;
  case 0x24:
    ppuVar6 = unaff_x19;
    ppuVar9 = ppuVar4;
  case 0x70:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)();
    auVar31._8_8_ = ppuVar9;
    auVar31._0_8_ = ppuVar6;
    return auVar31;
  case 0x26:
  case 0x3a:
  case 0x4e:
  case 0x62:
  case 0x9e:
  case 0xb2:
  case 0xc6:
  case 0xda:
  case 0xee:
    goto code_r0x000103eb188c;
  case 0x29:
    goto code_r0x000103eb18e8;
  case 0x2a:
  case 0x52:
  case 0xa2:
  case 0xca:
  case 0xf2:
    goto code_r0x000103eb18b8;
  case 0x32:
  case 0x5a:
  case 0xaa:
  case 0xd2:
  case 0xfa:
    goto code_r0x000103eb15fc;
  case 0x38:
    goto code_r0x000103eb17f4;
  case 0x3c:
    auVar28._8_8_ = 0xe700000000000000;
    auVar28._0_8_ = 0x644965756e6576;
    return auVar28;
  case 0x3d:
  case 0x65:
    goto code_r0x000103eb18e0;
  case 0x3e:
  case 0x66:
  case 0xb6:
  case 0xde:
    goto code_r0x000103eb1670;
  case 0x3f:
  case 0x67:
  case 0xb7:
  case 0xdf:
    goto code_r0x000103eb19c8;
  case 0x49:
  case 0x71:
  case 0xc1:
    goto code_r0x000103eb19ec;
  case 0x4a:
  case 0x72:
  case 0xc2:
  case 0xea:
    ppuVar9 = ppuVar4;
    FUN_103eb22d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)(0x644965756e6576,ppuVar9);
    auVar30._8_8_ = ppuVar9;
    auVar30._0_8_ = ppuVar4;
    return auVar30;
  case 0x50:
    goto code_r0x000103eb19e0;
  case 0x51:
  case 0xa1:
  case 0xc9:
  case 0xf1:
    goto code_r0x000103eb18e4;
  case 100:
  case 0xa0:
    goto code_r0x000103eb1930;
  case 0x78:
    goto code_r0x000103eb1880;
  case 0x7a:
  case 0x8a:
    goto code_r0x000103eb193c;
  case 0x88:
    break;
  case 0x96:
    auVar23._8_8_ = 0xe700000000000000;
    auVar23._0_8_ = 0x644965756e6576;
    return auVar23;
  case 0x98:
    FUN_103eb2310();
    *puVar5 = (char)ppuVar4;
  case 0xf0:
code_r0x000103eb17f4:
    auVar27._8_8_ = ppuVar9;
    auVar27._0_8_ = ppuVar4;
    return auVar27;
  case 0xb5:
    goto code_r0x000103eb18d4;
  case 0xc0:
    goto code_r0x000103eb18f0;
  case 200:
    goto code_r0x000103eb1890;
  case 0xdc:
    goto code_r0x000103eb1940;
  case 0xdd:
    goto code_r0x000103eb18d0;
  }
  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  unaff_x24 = unaff_x21;
code_r0x000103eb1880:
  ppuVar6 = &PTR_PTR_11302a000;
  ppuVar11 = ppuVar4;
  unaff_x23 = unaff_x20;
code_r0x000103eb188c:
  ppuVar4 = ppuVar6 + 0x158;
code_r0x000103eb1890:
  func_0x0001000285a8(ppuVar4,&UNK_10dca5ed8);
  unaff_x27 = ppuVar4[-1];
  puVar5 = (undefined1 *)(*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
  in_x16 = (code *)PTR____chkstk_darwin_11034bd40;
  unaff_x19 = ppuVar4;
  unaff_x20 = ppuVar11;
code_r0x000103eb18b8:
  ppuVar4 = unaff_x20;
  (*in_x16)(puVar5);
  unaff_x22 = (undefined1 *)((long)register0x00000008 + -extraout_x8);
  unaff_x26 = ppuVar4[4];
  unaff_x25 = (undefined **)ppuVar4[3];
code_r0x000103eb18d0:
  ppuVar9 = unaff_x25;
  unaff_x25 = ppuVar9;
code_r0x000103eb18d4:
  func_0x0001000a8868(ppuVar4,ppuVar9);
  FUN_103eb22d0();
code_r0x000103eb18e0:
  param_3 = ppuVar4;
code_r0x000103eb18e4:
  ppuVar4 = (undefined **)&UNK_11071c000;
code_r0x000103eb18e8:
  puVar5 = unaff_x22;
  ppuVar4 = ppuVar4 + 0xe0;
  unaff_x22 = puVar5;
code_r0x000103eb18f0:
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,ppuVar4,ppuVar4,param_3,unaff_x25,unaff_x26);
  puVar2 = *unaff_x23;
  puVar3 = unaff_x23[1];
  *(undefined1 *)(unaff_x29 + -0x48) = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(puVar2,puVar3,unaff_x29 + -0x48,unaff_x19);
  if (unaff_x24 == 0) {
    ppuVar4 = (undefined **)unaff_x23[2];
    ppuVar9 = (undefined **)unaff_x23[3];
    *(undefined1 *)(unaff_x29 + -0x48) = 1;
    param_3 = (undefined **)(unaff_x29 + -0x48);
    unaff_x21 = 0;
code_r0x000103eb1930:
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(ppuVar4,ppuVar9,param_3,unaff_x19);
code_r0x000103eb193c:
    bVar1 = unaff_x21 == 0;
    unaff_x21 = 0;
    if (bVar1) {
code_r0x000103eb1940:
      puVar2 = unaff_x23[4];
      puVar3 = unaff_x23[5];
      *(undefined1 *)(unaff_x29 + -0x48) = 2;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (puVar2,puVar3,unaff_x29 + -0x48,unaff_x19);
      if (unaff_x21 == 0) {
        puVar2 = unaff_x23[6];
        puVar3 = unaff_x23[7];
        *(undefined1 *)(unaff_x29 + -0x48) = 3;
        __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                  (puVar2,puVar3,unaff_x29 + -0x48,unaff_x19);
        puVar2 = unaff_x23[8];
        puVar3 = unaff_x23[9];
        *(undefined1 *)(unaff_x29 + -0x48) = 4;
        __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                  (puVar2,puVar3,unaff_x29 + -0x48,unaff_x19);
        bVar10 = *(byte *)(unaff_x23 + 10);
        *(undefined1 *)(unaff_x29 + -0x48) = 5;
        __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(bVar10,unaff_x29 + -0x48,unaff_x19);
        ppuVar4 = (undefined **)unaff_x23[0xb];
        ppuVar9 = (undefined **)unaff_x23[0xc];
        bVar10 = 6;
        unaff_x21 = 0;
code_r0x000103eb19c8:
        *(byte *)(unaff_x29 + -0x48) = bVar10;
        __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                  (ppuVar4,ppuVar9,unaff_x29 + -0x48,unaff_x19);
        bVar1 = unaff_x21 == 0;
        unaff_x21 = 0;
        if (bVar1) {
code_r0x000103eb19e0:
          ppuVar4 = (undefined **)(ulong)*(byte *)(unaff_x23 + 0xd);
          *(undefined1 *)(unaff_x29 + -0x48) = 7;
code_r0x000103eb19ec:
          __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(ppuVar4,unaff_x29 + -0x48,unaff_x19);
          if (unaff_x21 == 0) {
            puVar2 = unaff_x23[0xe];
            puVar3 = unaff_x23[0xf];
            *(undefined1 *)(unaff_x29 + -0x48) = 8;
            __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
                      (puVar2,puVar3,unaff_x29 + -0x48,unaff_x19);
            puVar2 = unaff_x23[0x10];
            puVar3 = unaff_x23[0x11];
            *(undefined1 *)(unaff_x29 + -0x48) = 9;
            __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                      (puVar2,puVar3,unaff_x29 + -0x48,unaff_x19);
            puVar2 = unaff_x23[0x12];
            puVar3 = unaff_x23[0x13];
            *(undefined1 *)(unaff_x29 + -0x48) = 10;
            __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                      (puVar2,puVar3,unaff_x29 + -0x48,unaff_x19);
            *(undefined **)(unaff_x29 + -0x48) = unaff_x23[0x14];
            *(undefined1 *)(unaff_x29 + -0x49) = 0xb;
            uVar7 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            uVar8 = 0x112d5ad80;
            FUN_103eb2d1c(0x112d5ad80,PTR___sSSSEsWP_11034da88,PTR___sSayxGSEsSERzlMc_11034dce0);
            __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                      (unaff_x29 + -0x48,unaff_x29 + -0x49,unaff_x19,uVar7,uVar8);
            (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
            goto LAB_103eb1a34;
          }
        }
      }
    }
  }
  (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
LAB_103eb1a34:
  auVar29._8_8_ = unaff_x19;
  auVar29._0_8_ = unaff_x22;
  return auVar29;
}



/* Entry: 103eb17d4; end: 103eb17f7;  */

void FUN_103eb17d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_103eb2310();
  *param_1 = param_2;
  return;
}



/* Entry: 103eb17f8; end: 103eb180f;  */

undefined1  [16] FUN_103eb17f8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103eb1810; end: 103eb185f;  */

void FUN_103eb1810(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103eb22d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103eb1860; end: 103eb1b1f;  */

void FUN_103eb1860(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [7];
  undefined1 uStack_59;
  ulong uStack_58;
  
  lVar1 = 0x11302aac0;
  func_0x0001000285a8(0x11302aac0,&UNK_10dca5ed8);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_103eb22d0();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_11071c700,&UNK_11071c700,param_1,uVar2,uVar3);
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&uStack_58,lVar1);
  if (unaff_x21 == 0) {
    uStack_58._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&uStack_58,lVar1)
    ;
    uStack_58._0_1_ = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[4],unaff_x20[5],&uStack_58,lVar1);
    uStack_58._0_1_ = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[6],unaff_x20[7],&uStack_58,lVar1);
    uStack_58._0_1_ = 4;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[8],unaff_x20[9],&uStack_58,lVar1);
    uStack_58._0_1_ = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + 10),&uStack_58,lVar1);
    uStack_58._0_1_ = 6;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0xb],unaff_x20[0xc],&uStack_58,lVar1);
    uStack_58._0_1_ = 7;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + 0xd),&uStack_58,lVar1);
    uStack_58._0_1_ = 8;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[0xe],unaff_x20[0xf],&uStack_58,lVar1);
    uStack_58._0_1_ = 9;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0x10],unaff_x20[0x11],&uStack_58,lVar1);
    uStack_58 = CONCAT71(uStack_58._1_7_,10);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0x12],unaff_x20[0x13],&uStack_58,lVar1);
    uStack_58 = unaff_x20[0x14];
    uStack_59 = 0xb;
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar3 = 0x112d5ad80;
    FUN_103eb2d1c(0x112d5ad80,PTR___sSSSEsWP_11034da88,PTR___sSayxGSEsSERzlMc_11034dce0);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_58,&uStack_59,lVar1,uVar2,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 103eb1b20; end: 103eb1b93;  */

void FUN_103eb1b20(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103eb26f8(&uStack_c8);
  if (unaff_x21 == 0) {
    param_1[0x11] = uStack_40;
    param_1[0x10] = uStack_48;
    param_1[0x13] = uStack_30;
    param_1[0x12] = uStack_38;
    param_1[0x14] = uStack_28;
    param_1[9] = uStack_80;
    param_1[8] = uStack_88;
    param_1[0xb] = uStack_70;
    param_1[10] = uStack_78;
    param_1[0xd] = uStack_60;
    param_1[0xc] = uStack_68;
    param_1[0xf] = uStack_50;
    param_1[0xe] = uStack_58;
    param_1[1] = uStack_c0;
    *param_1 = uStack_c8;
    param_1[3] = uStack_b0;
    param_1[2] = uStack_b8;
    param_1[5] = uStack_a0;
    param_1[4] = uStack_a8;
    param_1[7] = uStack_90;
    param_1[6] = uStack_98;
  }
  return;
}



/* Entry: 103eb1b94; end: 103eb1ba7;  */

void FUN_103eb1b94(void)

{
  FUN_103eb1860();
  return;
}



/* Entry: 103eb1ba8; end: 103eb1dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb1ba8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
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
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte bStack_190;
  undefined7 uStack_18f;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
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
  undefined8 uStack_80;
  long lStack_78;
  
  uVar1 = *(undefined8 *)(in_stack_00000010 + _DAT_113077318);
  uVar4 = ((undefined8 *)(in_stack_00000010 + _DAT_113077318))[1];
  uVar2 = *(undefined8 *)(in_stack_00000010 + _DAT_113077320);
  uVar5 = ((undefined8 *)(in_stack_00000010 + _DAT_113077320))[1];
  uStack_80 = param_1;
  lStack_78 = param_2;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(param_2);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar3 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar3 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x20) = param_1;
    *(long *)(puVar8 + uVar3 * 0x10 + 0x28) = param_2;
  }
  FUN_103eb1e08(&uStack_80,0x112d35ff8,&UNK_10d900cd0);
  bStack_190 = (param_7 ^ 0xff) & 1;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1f8 = uVar1;
  uStack_1f0 = uVar4;
  uStack_1e8 = uVar2;
  uStack_1e0 = uVar5;
  uStack_1d8 = param_5;
  uStack_1d0 = param_6;
  uStack_188 = uVar2;
  uStack_180 = uVar5;
  uStack_178 = param_3;
  uStack_170 = param_4;
  uStack_168 = param_1;
  lStack_160 = param_2;
  puStack_158 = puVar8;
  func_0x000103eb1e04(&uStack_1f8);
  uStack_c8 = in_stack_00000008[0x11];
  uStack_d0 = in_stack_00000008[0x10];
  uStack_b8 = in_stack_00000008[0x13];
  uStack_c0 = in_stack_00000008[0x12];
  uStack_b0 = in_stack_00000008[0x14];
  uStack_108 = in_stack_00000008[9];
  uStack_110 = in_stack_00000008[8];
  uStack_f8 = in_stack_00000008[0xb];
  uStack_100 = in_stack_00000008[10];
  uStack_e8 = in_stack_00000008[0xd];
  uStack_f0 = in_stack_00000008[0xc];
  uStack_d8 = in_stack_00000008[0xf];
  uStack_e0 = in_stack_00000008[0xe];
  uStack_148 = in_stack_00000008[1];
  uStack_150 = *in_stack_00000008;
  uStack_138 = in_stack_00000008[3];
  uStack_140 = in_stack_00000008[2];
  uStack_128 = in_stack_00000008[5];
  uStack_130 = in_stack_00000008[4];
  uStack_118 = in_stack_00000008[7];
  uStack_120 = in_stack_00000008[6];
  in_stack_00000008[0x11] = uStack_170;
  in_stack_00000008[0x10] = uStack_178;
  in_stack_00000008[0x13] = lStack_160;
  in_stack_00000008[0x12] = uStack_168;
  in_stack_00000008[0x14] = puStack_158;
  in_stack_00000008[9] = uStack_1b0;
  in_stack_00000008[8] = uStack_1b8;
  in_stack_00000008[0xb] = uStack_1a0;
  in_stack_00000008[10] = CONCAT71(uStack_1a7,uStack_1a8);
  in_stack_00000008[0xd] = CONCAT71(uStack_18f,bStack_190);
  in_stack_00000008[0xc] = uStack_198;
  in_stack_00000008[0xf] = uStack_180;
  in_stack_00000008[0xe] = uStack_188;
  in_stack_00000008[1] = uStack_1f0;
  *in_stack_00000008 = uStack_1f8;
  in_stack_00000008[3] = uStack_1e0;
  in_stack_00000008[2] = uStack_1e8;
  in_stack_00000008[5] = uStack_1d0;
  in_stack_00000008[4] = uStack_1d8;
  in_stack_00000008[7] = uStack_1c0;
  in_stack_00000008[6] = uStack_1c8;
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  FUN_103eb1e08(&uStack_150,0x11302aa58,&UNK_10dca5e10);
  return;
}



/* Entry: 103eb1dfc; end: 103eb1e07;  */

void FUN_103eb1dfc(void)

{
  return;
}



/* Entry: 103eb1e08; end: 103eb1edb;  */

undefined8 FUN_103eb1e08(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103eb1edc; end: 103eb1fc7;  */

undefined8 * FUN_103eb1edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar6 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar6;
  uVar7 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar7;
  uVar8 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar8;
  uVar9 = param_2[0x14];
  param_1[0x14] = uVar9;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  return param_1;
}



/* Entry: 103eb1fc8; end: 103eb213b;  */

undefined8 * FUN_103eb1fc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 103eb213c; end: 103eb220f;  */

undefined8 * FUN_103eb213c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar2 = param_2[0xf];
  uVar1 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x11];
  uVar1 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRelease(param_1[0x13]);
  uVar2 = param_1[0x14];
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 103eb2210; end: 103eb22cf;  */

int FUN_103eb2210(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103eb22d0; end: 103eb230f;  */

void FUN_103eb22d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302aac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5fb4;
  _swift_getWitnessTable(&UNK_10dca5fb4,&UNK_11071c700);
  puRam000000011302aac8 = puVar1;
  return;
}



/* Entry: 103eb2310; end: 103eb26f7;  */

undefined4 FUN_103eb2310(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((param_1 == 0x644965756e6576 && param_2 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x644965756e6576,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    return 0;
  }
  if ((param_1 != 0x656d616e) || (param_2 != -0x1c00000000000000)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x656d616e,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 == 0x7974696c61636f6c) && (param_2 == -0x1800000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7974696c61636f6c,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      uVar1 = 0;
      if (((param_1 == 0x64497265746c6966) && (param_2 == -0x1800000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x64497265746c6966,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      uVar1 = 0x656c746974627573;
      if (((param_1 == 0x656c746974627573) && (param_2 == -0x1800000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656c746974627573,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      uVar1 = 0x53794274696c7073;
      if (((param_1 == 0x53794274696c7073) && (param_2 == -0x12ffff8d9a898d9b)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x53794274696c7073,0xed00007265767265,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 5;
      }
      if ((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffef0e34630)) {
        uVar1 = 0xd000000000000013;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000013,0x800000010f1cb9d0,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0x61727478457369;
          if (((param_1 == 0x61727478457369) && (param_2 == -0x1900000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x61727478457369,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
          {
            _swift_bridgeObjectRelease(param_2);
            return 7;
          }
          uVar1 = 0;
          if (((param_1 == 0x6d614e65756e6576) && (param_2 == -0x16ffffffffffff9b)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6d614e65756e6576,0xe900000000000065,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 8;
          }
          uVar1 = 0x6c72556e6f6369;
          if (((param_1 != 0x6c72556e6f6369) || (param_2 != -0x1900000000000000)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6c72556e6f6369,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) == 0))
          {
            uVar1 = 0x7461437265707573;
            if (((param_1 != 0x7461437265707573) || (param_2 != -0x12ffff868d90989b)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x7461437265707573,0xed000079726f6765,param_1,param_2,0),
               (uVar1 & 1) == 0)) {
              uVar1 = 0x69726f6765746163;
              if ((param_1 == 0x69726f6765746163) && (param_2 == -0x15ffffffffff8c9b)) {
                _swift_bridgeObjectRelease(0xea00000000007365);
                return 0xb;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x69726f6765746163,0xea00000000007365,param_1,param_2,0);
              _swift_bridgeObjectRelease(param_2);
              if ((uVar1 & 1) != 0) {
                return 0xb;
              }
              return 0xc;
            }
            _swift_bridgeObjectRelease(param_2);
            return 10;
          }
          _swift_bridgeObjectRelease(param_2);
          return 9;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 6;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 1;
}



/* Entry: 103eb26f8; end: 103eb2d1b;  */

/* WARNING: Removing unreachable block (ram,0x000103eb2c14) */
/* WARNING: Removing unreachable block (ram,0x000103eb2a94) */
/* WARNING: Removing unreachable block (ram,0x000103eb29f4) */
/* WARNING: Removing unreachable block (ram,0x000103eb2984) */
/* WARNING: Removing unreachable block (ram,0x000103eb288c) */
/* WARNING: Removing unreachable block (ram,0x000103eb283c) */
/* WARNING: Removing unreachable block (ram,0x000103eb28d8) */
/* WARNING: Removing unreachable block (ram,0x000103eb2a44) */
/* WARNING: Removing unreachable block (ram,0x000103eb28fc) */
/* WARNING: Removing unreachable block (ram,0x000103eb2934) */
/* WARNING: Removing unreachable block (ram,0x000103eb2910) */
/* WARNING: Removing unreachable block (ram,0x000103eb2914) */
/* WARNING: Removing unreachable block (ram,0x000103eb2940) */
/* WARNING: Removing unreachable block (ram,0x000103eb2944) */
/* WARNING: Removing unreachable block (ram,0x000103eb2920) */
/* WARNING: Removing unreachable block (ram,0x000103eb2924) */
/* WARNING: Removing unreachable block (ram,0x000103eb2930) */
/* WARNING: Removing unreachable block (ram,0x000103eb2950) */
/* WARNING: Removing unreachable block (ram,0x000103eb2954) */
/* WARNING: Removing unreachable block (ram,0x000103eb2ae4) */
/* WARNING: Removing unreachable block (ram,0x000103eb27d0) */
/* WARNING: Removing unreachable block (ram,0x000103eb2b30) */
/* WARNING: Removing unreachable block (ram,0x000103eb2bc0) */
/* WARNING: Removing unreachable block (ram,0x000103eb2bd8) */
/* WARNING: Removing unreachable block (ram,0x000103eb2c18) */
/* WARNING: Removing unreachable block (ram,0x000103eb2c24) */
/* WARNING: Removing unreachable block (ram,0x000103eb2c34) */
/* WARNING: Removing unreachable block (ram,0x000103eb2c38) */

void FUN_103eb26f8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_2c0 [8];
  long lStack_2b8;
  undefined1 auStack_278 [168];
  undefined8 ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  long lStack_198;
  undefined8 ***pppuStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 ***pppuStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  long lStack_148;
  undefined8 ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_121;
  long lStack_120;
  undefined8 ***pppuStack_118;
  long lStack_110;
  undefined8 ***pppuStack_108;
  long lStack_100;
  undefined8 ***pppuStack_f8;
  long lStack_f0;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  undefined8 ***pppuStack_d8;
  long lStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 ***pppuStack_c0;
  long lStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 ***pppuStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_98;
  long lStack_90;
  undefined8 ***pppuStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar1 = 0x11302aad0;
  func_0x0001000285a8(0x11302aad0,&UNK_10dca5ee8);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar5);
  FUN_103eb22d0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_2c0 + -extraout_x8,&UNK_11071c700,&UNK_11071c700,lVar2,uVar5,uVar6);
  if (unaff_x21 == 0) {
    pppuStack_1d0 = (undefined8 ***)((ulong)pppuStack_1d0 & 0xffffffffffffff00);
    ppppuVar3 = &pppuStack_1d0;
    lVar2 = lVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    pppuStack_1d0._0_1_ = 1;
    ppppuVar4 = &pppuStack_1d0;
    lVar7 = lVar1;
    pppuStack_118 = ppppuVar3;
    lStack_110 = lVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    pppuStack_1d0._0_1_ = 2;
    ppppuVar3 = &pppuStack_1d0;
    lVar2 = lVar1;
    pppuStack_108 = ppppuVar4;
    lStack_100 = lVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    pppuStack_1d0._0_1_ = 3;
    ppppuVar4 = &pppuStack_1d0;
    lVar7 = lVar1;
    pppuStack_f8 = ppppuVar3;
    lStack_f0 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    pppuStack_1d0._0_1_ = 4;
    ppppuVar3 = &pppuStack_1d0;
    lVar2 = lVar1;
    pppuStack_e8 = ppppuVar4;
    lStack_e0 = lVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    pppuStack_1d0._0_1_ = 5;
    ppppuVar4 = &pppuStack_1d0;
    pppuStack_d8 = ppppuVar3;
    lStack_d0 = lVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(ppppuVar4,lVar1);
    bStack_c8 = (byte)ppppuVar4 & 1;
    pppuStack_1d0._0_1_ = 6;
    ppppuVar3 = &pppuStack_1d0;
    lVar2 = lVar1;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    pppuStack_1d0._0_1_ = 7;
    ppppuVar4 = &pppuStack_1d0;
    pppuStack_c0 = ppppuVar3;
    lStack_b8 = lVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(ppppuVar4,lVar1);
    bStack_b0 = (byte)ppppuVar4 & 1;
    pppuStack_1d0._0_1_ = 8;
    ppppuVar3 = &pppuStack_1d0;
    lVar2 = lVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    pppuStack_1d0._0_1_ = 9;
    ppppuVar4 = &pppuStack_1d0;
    lVar7 = lVar1;
    pppuStack_a8 = ppppuVar3;
    lStack_a0 = lVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    pppuStack_1d0._0_1_ = 10;
    ppppuVar3 = &pppuStack_1d0;
    lVar2 = lVar1;
    pppuStack_98 = ppppuVar4;
    lStack_90 = lVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar5 = 0x112d38270;
    lStack_2b8 = lVar2;
    pppuStack_88 = ppppuVar3;
    lStack_80 = lVar2;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uStack_121 = 0xb;
    uVar6 = 0x112d5ad70;
    FUN_103eb2d1c(0x112d5ad70,PTR___sSSSesWP_11034daa8,PTR___sSayxGSesSeRzlMc_11034dd10);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&lStack_120,uVar5,&uStack_121,lVar1,uVar5,uVar6);
    (**(code **)(lVar8 + 8))(auStack_2c0 + -extraout_x8,lVar1);
    lStack_78 = lStack_120;
    lStack_148 = lStack_90;
    pppuStack_150 = pppuStack_98;
    lStack_138 = lStack_80;
    pppuStack_140 = pppuStack_88;
    lStack_130 = lStack_120;
    lStack_180 = CONCAT71(uStack_c7,bStack_c8);
    lStack_188 = lStack_d0;
    pppuStack_190 = pppuStack_d8;
    pppuStack_178 = pppuStack_c0;
    lStack_168 = CONCAT71(uStack_af,bStack_b0);
    lStack_170 = lStack_b8;
    lStack_158 = lStack_a0;
    pppuStack_160 = pppuStack_a8;
    lStack_1c8 = lStack_110;
    pppuStack_1d0 = pppuStack_118;
    lStack_1b8 = lStack_100;
    pppuStack_1c0 = pppuStack_108;
    lStack_1a8 = lStack_f0;
    pppuStack_1b0 = pppuStack_f8;
    lStack_198 = lStack_e0;
    pppuStack_1a0 = pppuStack_e8;
    FUN_103eb2d84(&pppuStack_1d0,auStack_278);
    func_0x0001000834e4(param_2);
    func_0x000103eb2db8(&pppuStack_118);
    param_1[0x11] = lStack_148;
    param_1[0x10] = (long)pppuStack_150;
    param_1[0x13] = lStack_138;
    param_1[0x12] = (long)pppuStack_140;
    param_1[0x14] = lStack_130;
    param_1[9] = lStack_188;
    param_1[8] = (long)pppuStack_190;
    param_1[0xb] = (long)pppuStack_178;
    param_1[10] = lStack_180;
    param_1[0xd] = lStack_168;
    param_1[0xc] = lStack_170;
    param_1[0xf] = lStack_158;
    param_1[0xe] = (long)pppuStack_160;
    param_1[1] = lStack_1c8;
    *param_1 = (long)pppuStack_1d0;
    param_1[3] = lStack_1b8;
    param_1[2] = (long)pppuStack_1c0;
    param_1[5] = lStack_1a8;
    param_1[4] = (long)pppuStack_1b0;
    param_1[7] = lStack_198;
    param_1[6] = (long)pppuStack_1a0;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 103eb2d1c; end: 103eb2d83;  */

void FUN_103eb2d1c(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d38270;
    func_0x00010002969c(0x112d38270,&UNK_10d905a20);
    uStack_38 = param_2;
    _swift_getWitnessTable(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103eb2d84; end: 103eb2de3;  */

undefined8 FUN_103eb2d84(undefined8 param_1,undefined8 param_2)

{
  FUN_103eb1edc(param_2,param_1,&UNK_11071c640);
  return param_2;
}



/* Entry: 103eb2de4; end: 103eb2f4b;  */

int FUN_103eb2de4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103eb2e60;
        goto LAB_103eb2e44;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103eb2e44:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_103eb2e60:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103eb2f4c; end: 103eb2f8b;  */

void FUN_103eb2f4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302aad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5f8c;
  _swift_getWitnessTable(&UNK_10dca5f8c,&UNK_11071c700);
  puRam000000011302aad8 = puVar1;
  return;
}



/* Entry: 103eb2f8c; end: 103eb2f8f;  */

void FUN_103eb2f8c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302aae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5f24;
  _swift_getWitnessTable(&UNK_10dca5f24,&UNK_11071c700);
  puRam000000011302aae0 = puVar1;
  return;
}



/* Entry: 103eb2f90; end: 103eb2fcf;  */

void FUN_103eb2f90(void)

{
  undefined *puVar1;
  
  if (puRam000000011302aae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5f24;
  _swift_getWitnessTable(&UNK_10dca5f24,&UNK_11071c700);
  puRam000000011302aae0 = puVar1;
  return;
}



/* Entry: 103eb2fd0; end: 103eb2fd3;  */

void FUN_103eb2fd0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302aae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5efc;
  _swift_getWitnessTable(&UNK_10dca5efc,&UNK_11071c700);
  puRam000000011302aae8 = puVar1;
  return;
}



/* Entry: 103eb2fd4; end: 103eb3013;  */

void FUN_103eb2fd4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302aae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5efc;
  _swift_getWitnessTable(&UNK_10dca5efc,&UNK_11071c700);
  puRam000000011302aae8 = puVar1;
  return;
}



/* Entry: 103eb3014; end: 103eb3033; -[LensVenueInternalServices venueTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3014(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302aaf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eb3034; end: 103eb3053; -[LensVenueInternalServices infoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3034(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302aaf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eb3054; end: 103eb30b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3054(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302aaf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302aaf8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eb30b8; end: 103eb3117; -[LensVenueInternalServices init] */

void FUN_103eb30b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensVenueInternalServices.LensVenueInternalServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb30e4);
  (*pcVar1)();
}



/* Entry: 103eb3118; end: 103eb319b; -[LensVenueInternalServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3118(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302aaf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302aaf8));
  return;
}



/* Entry: 103eb319c; end: 103eb31fb; -[LensVenueServices init] */

void FUN_103eb319c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensVenueServices.LensVenueServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb31c8);
  (*pcVar1)();
}



/* Entry: 103eb31fc; end: 103eb320b; -[LensVenueServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb31fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302ab28));
  return;
}



/* Entry: 103eb320c; end: 103eb3257; -[SCLensVenueSelectionEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb320c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302ab58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302ab58))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103eb3258; end: 103eb3267; -[SCLensVenueSelectionEvent venue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ab60));
  return;
}



/* Entry: 103eb3268; end: 103eb32af; -[SCLensVenueSelectionEvent options] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3268(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302ab68);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103eb32b0; end: 103eb32bf; -[SCLensVenueSelectionEvent timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103eb32b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302ab70);
}



/* Entry: 103eb32c0; end: 103eb33f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb32c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302ab58);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302ab60) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302ab68) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302ab70) = param_1;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eb33f8; end: 103eb34bf; -[SCLensVenueSelectionEvent initWithLensId:venue:options:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb33f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_6,PTR___sSSN_11034da80);
  puVar1 = (undefined8 *)(param_2 + _DAT_11302ab58);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_11302ab60) = param_5;
  *(undefined8 *)(param_2 + _DAT_11302ab68) = param_6;
  *(undefined8 *)(param_2 + _DAT_11302ab70) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_2;
  lStack_58 = lVar3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 103eb34c0; end: 103eb351f; -[SCLensVenueSelectionEvent init] */

void FUN_103eb34c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensVenueServices.LensVenueSelectionEvent",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb34ec);
  (*pcVar1)();
}



/* Entry: 103eb3520; end: 103eb35b7; -[SCLensVenueSelectionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3520(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ab58 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ab60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302ab68));
  return;
}



/* Entry: 103eb35b8; end: 103eb3617; -[SCCameraUIScopedLensVenueServices init] */

void FUN_103eb35b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensVenueServices.SCCameraUIScopedLensVenueServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb35e4);
  (*pcVar1)();
}



/* Entry: 103eb3618; end: 103eb3627; -[SCCameraUIScopedLensVenueServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb3618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302aba0));
  return;
}



/* Entry: 103eb3628; end: 103eb369f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103eb3628(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302ac58;
  lVar2 = *(long *)(unaff_x20 + _DAT_11302ac58);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000103ebf2b4();
    _swift_allocObject();
    FUN_103ebdf18();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain();
    _swift_release(uVar4);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar2;
}



/* Entry: 103eb36a0; end: 103eb427f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103eb36a0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_70 [16];
  
  lVar9 = unaff_x20;
  _objc_allocWithZone();
  lVar16 = _DAT_11302abe8;
  _swift_unknownObjectWeakInit(lVar9 + _DAT_11302abe8,0);
  lVar17 = _DAT_11302abf0;
  lVar10 = 0x112d53b48;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  _swift_allocObject();
  uVar11 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar9 + lVar17) = uVar11;
  lVar1 = _DAT_11302abf8;
  _swift_allocObject(lVar10,*(undefined4 *)(lVar10 + 0x30),*(undefined2 *)(lVar10 + 0x34));
  uVar11 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar9 + lVar1) = uVar11;
  lVar2 = _DAT_11302ac00;
  lVar10 = 0x112e5c570;
  func_0x0001000285a8(0x112e5c570,&UNK_10dab5c40);
  lVar12 = lVar10;
  _swift_allocObject();
  func_0x0001000c2754();
  *(long *)(lVar9 + lVar2) = lVar12;
  lVar12 = _DAT_11302ac08;
  _swift_allocObject(lVar10,*(undefined4 *)(lVar10 + 0x30),*(undefined2 *)(lVar10 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar9 + lVar12) = lVar10;
  lVar10 = _DAT_11302ac10;
  uVar11 = 0x11302abd0;
  func_0x0001000285a8(0x11302abd0,&UNK_10dca60a0);
  _swift_allocObject();
  func_0x0001000c2754();
  *(undefined8 *)(lVar9 + lVar10) = uVar11;
  lVar3 = _DAT_11302ac18;
  uVar11 = 0x11302abd8;
  func_0x0001000285a8(0x11302abd8,&UNK_10dca60a8);
  _swift_allocObject();
  func_0x0001000c2754();
  *(undefined8 *)(lVar9 + lVar3) = uVar11;
  lVar4 = _DAT_11302ac20;
  uVar11 = 0x11302abe0;
  func_0x0001000285a8(0x11302abe0,&UNK_10dca60b0);
  _swift_allocObject();
  func_0x0001000c2754();
  *(undefined8 *)(lVar9 + lVar4) = uVar11;
  lVar5 = _DAT_11302ac28;
  puVar13 = PTR_PTR_1126ae810;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar5) = puVar13;
  *(undefined1 *)(lVar9 + _DAT_11302ac30) = 0;
  *(undefined1 *)(lVar9 + _DAT_11302ac38) = 2;
  *(undefined8 *)(lVar9 + _DAT_11302ac40) = 0;
  lVar6 = _DAT_11302ac48;
  *(undefined8 *)(lVar9 + _DAT_11302ac48) = 0;
  *(undefined1 *)(lVar9 + _DAT_11302ac50) = 0;
  lVar7 = _DAT_11302ac58;
  *(undefined8 *)(lVar9 + _DAT_11302ac58) = 0;
  lVar8 = _DAT_11302ac60;
  *(undefined8 *)(lVar9 + _DAT_11302ac60) = param_1;
  _swift_unknownObjectRetain(param_1);
  lVar14 = param_2;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 != 0) {
    lVar15 = param_3;
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 != 0) {
      *(long *)(lVar9 + _DAT_11302ac68) = lVar14;
      *(long *)(lVar9 + _DAT_11302ac70) = lVar15;
      *(undefined8 *)(lVar9 + _DAT_11302ac78) = param_4;
      _swift_unknownObjectWeakAssign(lVar9 + lVar16,param_6);
      *(undefined8 *)(lVar9 + _DAT_11302ac80) = param_7;
      *(undefined8 *)(lVar9 + _DAT_11302ac88) = param_8;
      *(undefined8 *)(lVar9 + _DAT_11302ac90) = param_9;
      *(undefined8 *)(lVar9 + _DAT_11302ac98) = param_5;
      uVar21 = *(undefined8 *)(lVar9 + lVar2);
      uVar22 = *(undefined8 *)(lVar9 + lVar12);
      uVar24 = *(undefined8 *)(lVar9 + lVar10);
      uVar11 = *(undefined8 *)(lVar9 + lVar3);
      lVar16 = 0;
      func_0x000103eb7e90();
      _swift_allocObject();
      *(undefined8 *)(lVar16 + 0x10) = uVar21;
      *(undefined8 *)(lVar16 + 0x18) = uVar22;
      *(undefined8 *)(lVar16 + 0x20) = uVar24;
      *(undefined8 *)(lVar16 + 0x28) = uVar11;
      uVar20 = *(undefined8 *)(lVar9 + lVar17);
      uVar19 = *(undefined8 *)(lVar9 + lVar1);
      uVar23 = *(undefined8 *)(lVar9 + lVar4);
      lVar17 = 0;
      func_0x000103ebda30();
      _swift_allocObject();
      *(undefined8 *)(lVar17 + 0x10) = uVar20;
      *(undefined8 *)(lVar17 + 0x18) = uVar19;
      *(long *)(lVar17 + 0x20) = lVar16;
      *(undefined8 *)(lVar17 + 0x28) = uVar23;
      func_0x000103ebcf94();
      _swift_allocObject();
      _swift_unknownObjectRetain(param_5);
      _swift_retain(uVar21);
      _swift_retain(uVar22);
      _swift_retain(uVar24);
      _swift_retain(uVar11);
      _swift_retain(uVar20);
      _swift_retain(uVar19);
      _swift_retain(lVar16);
      _swift_retain(uVar23);
      _swift_retain(lVar17);
      _swift_unknownObjectRetain(lVar14);
      _swift_unknownObjectRetain(lVar15);
      _objc_retain(param_4);
      _swift_unknownObjectRetain(param_7);
      _objc_retain(param_8);
      _objc_retain(param_9);
      lVar10 = lVar17;
      FUN_103ebd908();
      _swift_release(lVar17);
      *(long *)(lVar9 + _DAT_11302aca0) = lVar10;
      puVar13 = PTR_s_init_1125d9248;
      _swift_retain(lVar10);
      puVar18 = auStack_70;
      _objc_msgSendSuper2(puVar18,puVar13);
      _swift_unknownObjectRelease(param_1);
      _objc_release(param_2);
      _objc_release(param_3);
      _objc_release(param_4);
      _swift_unknownObjectRelease(param_5);
      _swift_unknownObjectRelease(param_6);
      _swift_unknownObjectRelease(param_7);
      _objc_release(param_8);
      _objc_release(param_9);
      _swift_release(lVar17);
      _swift_release(lVar16);
      _swift_unknownObjectRelease(lVar15);
      _swift_unknownObjectRelease(lVar14);
      *(undefined ***)(lVar10 + 0x18) = &PTR_DAT_11071c9b8;
      _swift_unknownObjectWeakAssign(lVar10 + 0x10,puVar18);
      _swift_release(lVar10);
      return puVar18;
    }
    _swift_unknownObjectRelease(lVar14);
  }
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_8);
  _objc_release(param_9);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(*(undefined8 *)(lVar9 + lVar8));
  FUN_103eb4280(lVar9 + lVar16);
  _swift_release(*(undefined8 *)(lVar9 + lVar17));
  _swift_release(*(undefined8 *)(lVar9 + lVar1));
  _swift_release(*(undefined8 *)(lVar9 + lVar2));
  _swift_release(*(undefined8 *)(lVar9 + lVar12));
  _swift_release(*(undefined8 *)(lVar9 + lVar10));
  _swift_release(*(undefined8 *)(lVar9 + lVar3));
  _swift_release(*(undefined8 *)(lVar9 + lVar4));
  _objc_release(*(undefined8 *)(lVar9 + lVar5));
  _objc_release(*(undefined8 *)(lVar9 + lVar6));
  _swift_release(*(undefined8 *)(lVar9 + lVar7));
  _swift_deallocPartialClassInstance(lVar9,unaff_x20,0xc0,7);
  return (undefined1 *)0x0;
}



/* Entry: 103eb4280; end: 103eb42a3;  */

undefined8 FUN_103eb4280(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103eb42a4; end: 103eb438b; -[SCLensInfoControllerV3 initWithLensEffectInfoProvider:lensApplicator:lensReadyTracker:lensFPSTracker:profileEngineRuntimeReport:lensInfoContainerViewProviding:processingPerformer:lensPerformerProvider:lensLogsObservable:] */

void FUN_103eb42a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  _objc_retain(param_10);
  _objc_retain();
  func_0x000103eb3c94(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 103eb438c; end: 103eb43ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb438c(void)

{
  long unaff_x20;
  
  _swift_getObjectType();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_11302ac28));
  if (*(long *)(unaff_x20 + _DAT_11302ac48) != 0) {
    func_0x000107c498f8();
  }
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eb43f0; end: 103eb446b; -[SCLensInfoControllerV3 dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb43f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302ac28);
  _objc_retain();
  func_0x000107c42194(uVar2);
  if (*(long *)(param_1 + _DAT_11302ac48) != 0) {
    func_0x000107c498f8();
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eb446c; end: 103eb45c3; -[SCLensInfoControllerV3 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb446c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ac60));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ac68));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ac70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ac78));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ac80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ac88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ac90));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ac98));
  FUN_103eb4280(param_1 + _DAT_11302abe8);
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302abf0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302abf8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302ac00));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302ac08));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302ac10));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302ac18));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302ac20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ac28));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302aca0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ac48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302ac58));
  return;
}



/* Entry: 103eb45c4; end: 103eb4b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb45c4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  ppuVar13 = &puStack_a0;
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_11302ac28));
  lVar2 = *(long *)(unaff_x20 + _DAT_11302ac88);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_11302ac68);
    uVar3 = uVar14;
    func_0x000107c5e3e4(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x000107c4c18c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x000107c4da88(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _swift_unknownObjectRelease(lVar9);
    puVar7 = &UNK_11071ca08;
    puVar4 = puVar7;
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x103eb66b0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1010afb80;
    puStack_88 = &UNK_11071ca48;
    puStack_78 = puVar4;
    __Block_copy(&puStack_a0);
    _swift_release(puStack_78);
    uVar3 = uVar15;
    func_0x000107c5c320(uVar15);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar5);
    _objc_release(uVar15);
    func_0x000107c3e924(uVar3);
    _objc_release(uVar3);
    uVar3 = uVar14;
    func_0x000107c41c24(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x000107c4c18c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x000107c4da8c(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _swift_unknownObjectRelease(lVar9);
    puVar4 = puVar7;
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    pcStack_80 = FUN_103eb66b8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10311f730;
    puStack_88 = &UNK_11071ca70;
    puStack_78 = puVar4;
    __Block_copy(&puStack_a0);
    _swift_release(puStack_78);
    uVar3 = uVar15;
    func_0x000107c5c320(uVar15);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar6);
    _objc_release(uVar15);
    func_0x000107c3e924(uVar3);
    _objc_release(uVar3);
    func_0x000107c41dc8(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x000107c4c18c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar14;
    func_0x000107c4da88(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _swift_unknownObjectRelease(lVar9);
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    pcStack_80 = (code *)0x103eb66d8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1010afb80;
    puStack_88 = &UNK_11071ca98;
    puStack_78 = puVar7;
    __Block_copy(&puStack_a0);
    _swift_release(puStack_78);
    uVar15 = uVar3;
    func_0x000107c5c320(uVar3);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar8);
    _objc_release(uVar3);
    func_0x000107c3e924(uVar15);
    _objc_release(uVar15);
    lVar9 = *(long *)(unaff_x20 + _DAT_11302ac78);
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      lVar10 = lVar9;
      func_0x000107c438c4();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar9);
      lVar9 = lVar2;
      func_0x000107c4c18c(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x000107c4da88(lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _swift_unknownObjectRelease(lVar9);
      puVar7 = &UNK_11071ca08;
      _swift_allocObject(&UNK_11071ca08,0x18,7);
      _swift_unknownObjectWeakInit(puVar7 + 0x10);
      pcStack_80 = (code *)0x103eb6700;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      puStack_90 = (undefined *)0x103eb68b8;
      puStack_88 = &UNK_11071cb10;
      puStack_78 = puVar7;
      __Block_copy(&puStack_a0);
      _swift_release(puStack_78);
      lVar9 = lVar11;
      func_0x000107c5c320(lVar11);
      _objc_retainAutoreleasedReturnValue();
      __Block_release(ppuVar12);
      _objc_release(lVar11);
      func_0x000107c3e924(lVar9);
      _objc_release(lVar9);
    }
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11302ac90);
    lVar9 = lVar2;
    func_0x000107c4c18c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c4da88(uVar15);
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar9);
    puVar7 = &UNK_11071ca08;
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar4 = &UNK_11071cad0;
    _swift_allocObject(&UNK_11071cad0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar7;
    *(long *)(puVar4 + 0x18) = lVar2;
    pcStack_80 = FUN_103eb66f8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101218f4c;
    puStack_88 = &UNK_11071cae8;
    puStack_78 = puVar4;
    __Block_copy(&puStack_a0);
    puVar7 = puStack_78;
    _swift_unknownObjectRetain(lVar2);
    _swift_release(puVar7);
    uVar3 = uVar15;
    func_0x000107c5c320(uVar15);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar13);
    _objc_release(uVar15);
    func_0x000107c3e924(uVar3);
    _swift_unknownObjectRelease(lVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 103eb4b34; end: 103eb4c93; -[SCLensInfoControllerV3 activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb4b34(long param_1)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010af88f74();
  *(long *)(param_1 + _DAT_11302ac40) = lVar1;
  FUN_103eb45c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103eb4c94; end: 103eb4cbb; -[SCLensInfoControllerV3 deactivate] */

void FUN_103eb4c94(undefined8 param_1)

{
  _objc_retain();
  func_0x000103eb4b6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103eb4cbc; end: 103eb4d13; -[SCLensInfoControllerV3 isPointInside:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103eb4cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_3;
  FUN_103ebc7b8(param_1,param_2);
  _objc_release(param_3);
  return (uint)uVar1 & 1;
}


