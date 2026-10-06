/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10126c810; end: 10126c817;  */

void FUN_10126c810(long param_1,long param_2)

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



/* Entry: 10126c818; end: 10126cb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10126c818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  
  lVar2 = 0;
  uVar3 = param_2;
  func_0x000107c5eff8();
  uVar4 = (uint)uVar3;
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x00010126c988(param_1);
  if ((uVar4 & 0xff) == 1) {
    puVar5 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar5;
  }
  if (-1 < param_6) {
    func_0x000107c5efe8(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                        param_6,param_1);
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c5fadc(param_4,param_5);
    uVar3 = param_4;
    func_0x000107c5efd4();
    func_0x000107c417e4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar3);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10126c988);
  (*pcVar1)();
}



/* Entry: 10126cb2c; end: 10126cd03; -[SCProfile3CollectionBridge sectionSupplementaryViewProvider:dequeueSupplementaryElementOfKind:withReuseIdentifier:atIndexInSection:] */

void FUN_10126cb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  uVar2 = param_2;
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10126c818(param_3,param_4,param_2,param_5,uVar2,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10126cd04; end: 10126ce73; -[SCProfile3CollectionBridge sectionSupplementaryViewProvider:supplementaryViewOfElementKind:atIndexInSection:] */

void FUN_10126cd04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010126cbe8(param_3,param_4,param_2,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10126ce74; end: 10126d12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10126ce74(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_78,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar6 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar3 = uVar6;
    }
    func_0x000107c60480();
  }
  if ((long)uVar3 <= (long)param_1) {
    return 0;
  }
  func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x20,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar1);
  if ((uVar6 & 0xc000000000000001) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10126d120);
      (*pcVar2)();
    }
    if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10126d124);
      (*pcVar2)();
    }
    uVar6 = *(ulong *)(uVar6 + param_1 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar6 = param_1;
    FUN_10125ff50();
  }
  func_0x000107c614a8(auStack_90);
  uVar3 = *(ulong *)(uVar6 + _DAT_112d6cd48);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(uVar6);
  uVar6 = uVar3;
  func_0x000107c4d914();
  if (((uVar6 != 0) && (uVar6 = uVar3, func_0x000107c50648(), (int)uVar6 != 0)) &&
     (uVar6 = uVar3,
     func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                         PTR_s_supplementaryViewProvider_1126765b8), (uVar6 & 1) != 0)) {
    uVar6 = uVar3;
    func_0x000107c5c434();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar5 = uVar6;
      func_0x000107c51b6c();
      uVar4 = uVar6;
      if (uVar5 == 1) {
        uVar7 = 1;
        uVar6 = uVar3;
      }
      else if (uVar5 == 2) {
        if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10126d12c);
          (*pcVar2)();
        }
        uVar7 = 0;
        uVar4 = uVar3;
        if (param_1 != 0) {
          uVar3 = 0;
          do {
            func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x20,0);
            uVar5 = *(ulong *)(unaff_x20 + lVar1);
            if ((uVar5 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10126d128);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar5 + uVar3 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar5 = uVar3;
              FUN_10125ff50();
            }
            func_0x000107c614a8(auStack_90);
            uVar8 = *(ulong *)(uVar5 + _DAT_112d6cd48);
            func_0x000107c615f0(uVar8);
            func_0x000107c61170(uVar5);
            uVar5 = uVar8;
            func_0x000107c50648();
            if ((((int)uVar5 == 0) ||
                (uVar5 = uVar8,
                func_0x000107c61150(uVar8,PTR_s_respondsToSelector__11262c7e0,
                                    PTR_s_sectionContentMode_112632fe0), (uVar5 & 1) == 0)) ||
               (uVar5 = uVar8, func_0x000107c51b50(), uVar5 != 1)) {
              uVar5 = uVar8;
              func_0x000107c4d914();
              func_0x000107c615e8(uVar8);
              if (uVar5 != 0) {
                uVar7 = 1;
                goto LAB_10126d0c8;
              }
            }
            else {
              func_0x000107c615e8(uVar8);
            }
            uVar3 = uVar3 + 1;
          } while (param_1 != uVar3);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0;
        uVar6 = uVar3;
      }
LAB_10126d0c8:
      func_0x000107c615e8(uVar4);
      uVar3 = uVar6;
      goto LAB_10126cfbc;
    }
  }
  uVar7 = 0;
LAB_10126cfbc:
  func_0x000107c615e8(uVar3);
  return uVar7;
}



/* Entry: 10126d12c; end: 10126d257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10126d12c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_68 [24];
  
  lVar7 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_68,0,0);
  uVar3 = *(ulong *)(unaff_x20 + lVar7);
  if (uVar3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar6 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    func_0x000107c61434(uVar3);
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10126d214);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar5;
        FUN_10125ff50(uVar5,uVar3);
      }
      lVar7 = *(long *)(uVar2 + _DAT_112d6cd48);
      func_0x000107c61170();
      if (lVar7 == param_1) {
        uVar4 = 0;
        goto LAB_10126d200;
      }
      uVar2 = uVar5 + 1;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10126d210);
        (*pcVar1)();
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar6);
    uVar5 = 0;
    uVar4 = 1;
LAB_10126d200:
    func_0x000107c6142c(uVar3);
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 10126d258; end: 10126d2c3; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4725SCProfile3BridgeDummyCell initWithFrame:] */

void FUN_10126d258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10126d2c4; end: 10126d397; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4724SCProfile3CollectionView initWithFrame:collectionViewLayout:] */

undefined8 *
FUN_10126d2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_5;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithFrame_collectionViewLayo_1125e29e0;
  uStack_60 = param_5;
  uStack_58 = uVar2;
  func_0x000107c61174(param_7);
  puVar3 = &uStack_60;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar3,puVar1,param_7);
  puVar1 = PTR_s_setDelaysContentTouches__112640780;
  puStack_70 = puVar3;
  uStack_68 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&puStack_70,puVar1,0);
  func_0x000107c53144(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  return puVar3;
}



/* Entry: 10126d398; end: 10126d3df; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4724SCProfile3CollectionView initWithCoder:] */

void FUN_10126d398(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MyProfile3Implementation/SCProfile3CollectionBridge.swift",0x39,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10126d3e0);
  (*pcVar1)();
}



/* Entry: 10126d3e0; end: 10126d453; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4724SCProfile3CollectionView touchesShouldCancelInContentView:] */

void FUN_10126d3e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
  lVar3 = param_3;
  func_0x000107c6148c(param_3,puVar2);
  if (lVar3 == 0) {
    uStack_40 = param_1;
    uStack_38 = uVar1;
    func_0x000107c61154(&uStack_40,PTR_s_touchesShouldCancelInContentView_112528fc8,param_3);
  }
  return;
}



/* Entry: 10126d454; end: 10126d48f; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4724SCProfile3CollectionView delaysContentTouches] */

void FUN_10126d454(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_delaysContentTouches_112524b80);
  return;
}



/* Entry: 10126d490; end: 10126d4cf; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4724SCProfile3CollectionView setDelaysContentTouches:] */

void FUN_10126d490(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_setDelaysContentTouches__112640780,0);
  return;
}



/* Entry: 10126d4d0; end: 10126d5b3; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4734SCProfile3CollectionViewFlowLayout shouldInvalidateLayoutForBoundsChange:] */

undefined1 *
FUN_10126d4d0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  double dVar4;
  double dVar5;
  long lStack_70;
  long lStack_68;
  
  plVar3 = &lStack_70;
  lVar1 = param_5;
  dVar4 = param_3;
  dVar5 = param_4;
  func_0x000107c614f0();
  func_0x000107c61174();
  lVar2 = param_5;
  func_0x000107c3fd94();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    if ((param_3 != dVar4) || (param_4 != dVar5)) {
      func_0x000107c61170(param_5);
      return (undefined1 *)0x1;
    }
  }
  lStack_70 = param_5;
  lStack_68 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_70,
                      PTR_s_shouldInvalidateLayoutForBoundsC_112531590);
  func_0x000107c61170(param_5);
  return (undefined1 *)plVar3;
}



/* Entry: 10126d5b4; end: 10126d6cf;  */

undefined1 * FUN_10126d5b4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *unaff_x20;
  double dVar5;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_invalidationContextForBoundsChan_112531598);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8;
  func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8);
  puVar3 = puVar1;
  func_0x000107c6148c(puVar1,puVar2);
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c3fd94();
    func_0x000107c61180();
    if (unaff_x20 != (undefined1 *)0x0) {
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
      dVar5 = param_1;
      func_0x000107c3ec60(unaff_x20);
      func_0x000107c609cc();
      if (param_1 != dVar5) {
        func_0x000107c554bc(puVar3);
      }
      func_0x000107c61170(puVar4);
      puVar4 = unaff_x20;
    }
    func_0x000107c61170(puVar4);
  }
  return puVar1;
}



/* Entry: 10126d6d0; end: 10126d733; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4734SCProfile3CollectionViewFlowLayout invalidationContextForBoundsChange:] */

void FUN_10126d6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_5;
  FUN_10126d5b4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10126d734; end: 10126d76f; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4734SCProfile3CollectionViewFlowLayout init] */

void FUN_10126d734(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10126d770; end: 10126d7ef;  */

undefined1 * FUN_10126d770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10126d7f0; end: 10126d823;  */

void FUN_10126d7f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10126d824; end: 10126d873;  */

void FUN_10126d824(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef32210);
  uVar2 = uVar1;
  func_0x000107c60b08();
  func_0x000107c61170(uVar1);
  uRam0000000112d6cc30 = uVar2;
  return;
}



/* Entry: 10126d874; end: 10126d883; -[SCProfile3CollectionBridge collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126d874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6cad0));
  return;
}



/* Entry: 10126d884; end: 10126d8cb; -[SCProfile3CollectionBridge presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126d884(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6cad8;
  func_0x000107c61428(param_1 + _DAT_112d6cad8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10126d8cc; end: 10126d923; -[SCProfile3CollectionBridge setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126d8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6cad8;
  func_0x000107c61428(param_1 + _DAT_112d6cad8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10126d924; end: 10126db5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10126d924(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  puVar7 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6cad8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6cae0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6cae8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112d6caf0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112d6caf8) = puVar6;
  lVar3 = _DAT_1137ff2b0;
  lVar4 = 0;
  func_0x000107c5eff8();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar3,1,1,lVar4);
  *(undefined1 *)(unaff_x20 + _DAT_1137ff2b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1137ff2c0) = 0;
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112d6cb00) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112d6cb08) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cb10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cb18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1137ff2c8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d6cb20,0);
  *(undefined1 *)(unaff_x20 + _DAT_1137ff2d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1137ff2d8) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_1137ff2e0) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1137ff2e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_112d6cb28;
  puVar5 = puVar6;
  FUN_10124b89c();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_112d6cb30;
  FUN_10124b724();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  *(undefined **)(unaff_x20 + _DAT_112d6cb38) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112d6cb40) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cb48) = 0;
  lVar3 = _DAT_112d6cb50;
  puVar6 = PTR_PTR_1126b0c28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_1137ff2f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cb58) = 0;
  FUN_1012773d8();
  *(undefined **)(unaff_x20 + _DAT_112d6cad0) = puVar6;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  lVar3 = _DAT_112d6cad0;
  uVar9 = *(undefined8 *)(puVar7 + _DAT_112d6cad0);
  puVar8 = puVar7;
  func_0x000107c61174();
  func_0x000107c53e08(uVar9);
  func_0x000107c53fcc(*(undefined8 *)(puVar7 + lVar3));
  func_0x000107c61170(puVar8);
  return puVar8;
}



/* Entry: 10126db60; end: 10126db7f; -[SCProfile3CollectionBridge init] */

void FUN_10126db60(void)

{
  FUN_10126d924();
  return;
}



/* Entry: 10126db80; end: 10126e35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126db80(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar4 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_78,0,0);
  uVar13 = *(ulong *)(unaff_x20 + lVar4);
  uVar18 = uVar13 & 0xffffffffffffff8;
  if (uVar13 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar15 = uVar18;
    if (0x7fffffffffffffff < uVar13) {
      uVar15 = uVar13;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar13);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10126de2c);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar13 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar11;
          FUN_10125ff50(uVar11,uVar13);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10126de28);
          (*pcVar2)();
        }
        lVar4 = *(long *)(uVar3 + _DAT_112d6cd48);
        func_0x000107c41254();
        if (lVar4 != 2) break;
        func_0x000107c61170(uVar3);
        uVar11 = uVar11 + 1;
        if (uVar1 == uVar15) goto LAB_10126dcf4;
      }
      puVar17 = puVar12;
      func_0x000107c61558();
      puStack_a0 = puVar12;
      if (((ulong)puVar17 & 1) == 0) {
        func_0x000101275268(0,*(long *)(puVar12 + 0x10) + 1,1);
      }
      uVar11 = *(ulong *)(puStack_a0 + 0x10);
      if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar11) {
        func_0x000101275268(1 < *(ulong *)(puStack_a0 + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(puStack_a0 + 0x10) = uVar11 + 1;
      *(ulong *)(puStack_a0 + uVar11 * 8 + 0x20) = uVar3;
      uVar11 = uVar1;
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar12 = puStack_a0;
    } while (uVar1 != uVar15);
  }
LAB_10126dcf4:
  func_0x000107c6142c(uVar13);
  if (((long)puVar12 < 0) || (((ulong)puVar12 >> 0x3e & 1) != 0)) {
    puVar14 = puVar12;
    func_0x000107c60480();
    if (puVar14 == (undefined *)0x0) goto LAB_10126df34;
    puVar14 = puVar12;
    func_0x000107c60480();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar14 != (undefined *)0x0) goto LAB_10126dd0c;
  }
  else {
    puVar14 = *(undefined **)(puVar12 + 0x10);
    if (puVar14 == (undefined *)0x0) {
LAB_10126df34:
      func_0x000107c61574(puVar12);
      goto LAB_10126df40;
    }
LAB_10126dd0c:
    puStack_80 = puVar17;
    func_0x000100403514(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10126e02c);
      (*pcVar2)();
    }
    puVar17 = (undefined *)0x0;
    do {
      puVar16 = puStack_80;
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(puVar12 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar17;
        FUN_10125ff50(puVar17,puVar12);
      }
      uStack_88 = *(undefined8 *)(puVar5 + _DAT_112d6cd40);
      puVar6 = PTR___sSiN_11034deb0;
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c();
      puStack_a0 = puVar6;
      puStack_98 = puVar8;
      func_0x000107c5fb78(0x3a,0xe100000000000000);
      func_0x000107c614f0(*(undefined8 *)(puVar5 + _DAT_112d6cd48));
      uVar9 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c61170(puVar5);
      func_0x000107c6142c(uVar9);
      puVar6 = puStack_98;
      puVar5 = puStack_a0;
      uVar13 = *(ulong *)(puVar16 + 0x10);
      puStack_80 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar13) {
        func_0x000100403514(1 < *(ulong *)(puVar16 + 0x18),uVar13 + 1,1);
      }
      puVar17 = puVar17 + 1;
      *(ulong *)(puStack_80 + 0x10) = uVar13 + 1;
      *(undefined **)(puStack_80 + uVar13 * 0x10 + 0x20) = puVar5;
      *(undefined **)(puStack_80 + uVar13 * 0x10 + 0x28) = puVar6;
      puVar16 = puStack_80;
    } while (puVar14 != puVar17);
  }
  uVar9 = 0x112d38270;
  puStack_a0 = puVar16;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = 0x112d38278;
  FUN_1012778a8(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
  uVar10 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar9,uVar7);
  func_0x000107c6142c(puVar16);
  func_0x000107c6142c(uVar10);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d6cb50);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef321a0);
  func_0x000107c61574(puVar12);
  func_0x000108c7a5d0(uVar9,uVar7,puVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
LAB_10126df40:
  lVar4 = _DAT_112d6cb10;
  uVar9 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d6cb10) != 0) {
    func_0x000107c498f8();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar9);
  lVar4 = _DAT_112d6cb48;
  uVar9 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d6cb48) != 0) {
    func_0x000107c498f8();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar9);
  lVar4 = _DAT_112d6cb58;
  uVar9 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d6cb58) != 0) {
    func_0x000107c498f8();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar9);
  lVar4 = _DAT_112d6cad8;
  func_0x000107c61428(unaff_x20 + _DAT_112d6cad8,&puStack_a0,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,0);
  lVar4 = _DAT_112d6cad0;
  func_0x000107c53e08(*(undefined8 *)(unaff_x20 + _DAT_112d6cad0));
  func_0x000107c53fcc(*(undefined8 *)(unaff_x20 + lVar4));
  func_0x00010126e02c();
  func_0x000107c61154(auStack_b0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10126e360; end: 10126e383; -[SCProfile3CollectionBridge dealloc] */

void FUN_10126e360(void)

{
  func_0x000107c61174();
  FUN_10126db80();
  return;
}



/* Entry: 10126e384; end: 10126e5af; -[SCProfile3CollectionBridge .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010126e3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010126e444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010126e4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010126e448) */
/* WARNING: Removing unreachable block (ram,0x00010126e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010126e4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126e384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6cad0));
  return;
}



/* Entry: 10126e5b0; end: 10126fad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126e5b0(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 *puVar17;
  long extraout_x8;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  undefined1 auStack_190 [4];
  uint uStack_18c;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  long lStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined *apuStack_a8 [4];
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar22 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_80,1,0);
  lStack_180 = lVar22;
  uVar26 = *(ulong *)(unaff_x20 + lVar22);
  if (uVar26 >> 0x3e == 0) {
    uVar28 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar28 = uVar26 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar26) {
      uVar28 = uVar26;
    }
    func_0x000107c60480();
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_150 = auStack_190 + -extraout_x8;
  if (uVar28 != 0) {
    apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(uVar26);
    func_0x0001012752a0(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f85c);
      (*pcVar4)();
    }
    uVar30 = 0;
    do {
      puVar27 = apuStack_a8[0];
      if ((uVar26 & 0xc000000000000001) == 0) {
        uVar11 = *(ulong *)(uVar26 + uVar30 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar30;
        FUN_10125ff50(uVar30,uVar26);
      }
      uVar23 = *(undefined8 *)(uVar11 + _DAT_112d6cd48);
      func_0x000107c61170();
      uVar11 = *(ulong *)(puVar27 + 0x10);
      apuStack_a8[0] = puVar27;
      if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar11) {
        func_0x0001012752a0(1 < *(ulong *)(puVar27 + 0x18),uVar11 + 1,1);
      }
      puVar27 = apuStack_a8[0];
      uVar30 = uVar30 + 1;
      *(ulong *)(apuStack_a8[0] + 0x10) = uVar11 + 1;
      *(undefined8 *)(apuStack_a8[0] + uVar11 * 8 + 0x20) = uVar23;
    } while (uVar28 != uVar30);
    func_0x000107c6142c(uVar26);
  }
  puVar19 = puVar27;
  FUN_1012770d8();
  func_0x000107c6142c(puVar27);
  puStack_88 = puVar10;
  if (param_1 >> 0x3e == 0) {
    uVar26 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar26 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar26 = param_1;
    }
    func_0x000107c60480();
    puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar27;
  if (uVar26 != 0) {
    if ((long)uVar26 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f860);
      (*pcVar4)();
    }
    uVar28 = 0;
    puStack_120 = (undefined *)(param_1 & 0xc000000000000001);
    uStack_138 = *(undefined8 *)((long)PTR__UIEdgeInsetsZero_110345bb0 + 8);
    puStack_140 = *(undefined **)PTR__UIEdgeInsetsZero_110345bb0;
    uStack_128 = *(undefined8 *)((long)PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    puStack_130 = *(undefined **)((long)PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    do {
      if (puStack_120 == (undefined *)0x0) {
        uVar30 = *(ulong *)(param_1 + uVar28 * 8 + 0x20);
        func_0x000107c615f0(uVar30);
      }
      else {
        uVar30 = uVar28;
        func_0x0001012600ec(uVar28,param_1);
      }
      uVar11 = uVar30;
      func_0x000107c51b48();
      func_0x000107c61180();
      if (uVar11 == 0) {
        func_0x000107c615e8(uVar30);
      }
      else {
        uVar12 = uVar30;
        func_0x000107c4e02c();
        lVar7 = 0;
        FUN_1012783bc();
        lVar20 = lVar7;
        func_0x000107c610f8();
        lVar22 = _DAT_112d6cd30;
        func_0x000107c61614(lVar20 + _DAT_112d6cd30,0);
        puVar1 = (undefined8 *)(lVar20 + _DAT_112d6cd38);
        puVar1[1] = uStack_138;
        *puVar1 = puStack_140;
        puVar1[3] = uStack_128;
        puVar1[2] = puStack_130;
        puVar1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar1[6] = 0;
        puVar1[5] = 0;
        puVar1[8] = 0;
        puVar1[7] = 0;
        puVar1[10] = 0;
        puVar1[9] = 0;
        *(ulong *)(lVar20 + _DAT_112d6cd40) = uVar12;
        *(ulong *)(lVar20 + _DAT_112d6cd48) = uVar11;
        func_0x000107c61428(lVar20 + lVar22,auStack_f8,1,0);
        func_0x000107c61604(lVar20 + lVar22,uVar30);
        puVar10 = PTR_s_init_1125d9248;
        lStack_108 = lVar20;
        lStack_100 = lVar7;
        func_0x000107c615f0(uVar11);
        plVar8 = &lStack_108;
        func_0x000107c61154(plVar8,puVar10);
        func_0x000107c61180();
        puVar10 = puVar27;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puVar27 < 0)) ||
           (puVar10 = puVar27, ((ulong)puVar27 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar27 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar27 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar27) {
              puVar9 = puVar27;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_10127464c(0,puVar9 + 1,1,puVar27,FUN_10125e6a8,0x101274a64);
        }
        uVar18 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar12 = *(ulong *)(uVar18 + 0x10);
        puVar27 = puVar10;
        if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar12) {
          puVar27 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
          FUN_10127464c(puVar27,uVar12 + 1,1,puVar10,FUN_10125e6a8,0x101274a64);
          uVar18 = (ulong)puVar27 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar18 + 0x10) = uVar12 + 1;
        *(long **)(uVar18 + uVar12 * 8 + 0x20) = plVar8;
        func_0x000107c61170(plVar8);
        func_0x000107c615e8(uVar11);
        func_0x000107c615e8(uVar30);
        puStack_88 = puVar27;
      }
      uVar28 = uVar28 + 1;
    } while (uVar26 != uVar28);
  }
  FUN_10126fad8(&puStack_88);
  puStack_140 = (undefined *)((ulong)puStack_88 >> 0x3e);
  puStack_120 = puStack_88;
  if (puStack_140 == (undefined *)0x0) {
    puVar10 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
    if (((ulong)puStack_88 & 0x8000000000000000) != 0) {
      puVar10 = puStack_88;
    }
    func_0x000107c60480();
  }
  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (undefined *)0x0) {
    apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001012752a0(0,(ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f864);
      (*pcVar4)();
    }
    puVar9 = (undefined *)0x0;
    uVar26 = (ulong)puStack_120 & 0xc000000000000001;
    do {
      puVar27 = apuStack_a8[0];
      if (uVar26 == 0) {
        puVar15 = *(undefined **)(puStack_120 + (long)puVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar15 = puVar9;
        FUN_10125ff50(puVar9,puStack_120);
      }
      uVar23 = *(undefined8 *)(puVar15 + _DAT_112d6cd48);
      func_0x000107c61170();
      uVar28 = *(ulong *)(puVar27 + 0x10);
      apuStack_a8[0] = puVar27;
      if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar28) {
        func_0x0001012752a0(1 < *(ulong *)(puVar27 + 0x18),uVar28 + 1,1);
      }
      puVar9 = puVar9 + 1;
      *(ulong *)(apuStack_a8[0] + 0x10) = uVar28 + 1;
      *(undefined8 *)(apuStack_a8[0] + uVar28 * 8 + 0x20) = uVar23;
      puVar27 = apuStack_a8[0];
    } while (puVar10 != puVar9);
  }
  puVar10 = puVar27;
  FUN_1012770d8();
  func_0x000107c6142c(puVar27);
  uVar26 = *(ulong *)(unaff_x20 + lStack_180);
  if (uVar26 >> 0x3e == 0) {
    uVar28 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar28 = uVar26 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar26) {
      uVar28 = uVar26;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar26);
  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_148 = (undefined *)uVar26;
  if (uVar28 != 0) {
    uVar30 = 0;
    puStack_130 = (undefined *)(uVar26 & 0xc000000000000001);
    do {
      if (puStack_130 == (undefined *)0x0) {
        if (*(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7ac);
          (*pcVar4)();
        }
        uVar11 = *(ulong *)(uVar26 + 0x20 + uVar30 * 8);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar30;
        FUN_10125ff50(uVar30,puStack_148);
      }
      bVar5 = SCARRY8(uVar30,1);
      uVar30 = uVar30 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7a8);
        (*pcVar4)();
      }
      if (*(long *)(puVar10 + 0x10) != 0) {
        lVar22 = *(long *)(uVar11 + _DAT_112d6cd48);
        uVar12 = *(ulong *)(puVar10 + 0x28);
        func_0x000107c60688(uVar12,lVar22);
        uVar18 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
        uVar12 = uVar12 & (uVar18 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar10 + (uVar12 >> 6) * 8 + 0x38) >> (uVar12 & 0x3f) & 1) != 0) {
          do {
            if (*(long *)(*(long *)(puVar10 + 0x30) + uVar12 * 8) == lVar22) {
              func_0x000107c61170(uVar11);
              goto joined_r0x00010126eb84;
            }
            uVar12 = uVar12 + 1 & ~uVar18;
          } while ((*(ulong *)(puVar10 + (uVar12 >> 6) * 8 + 0x38) >> (uVar12 & 0x3f) & 1) != 0);
        }
      }
      puVar9 = puVar27;
      func_0x000107c61558();
      apuStack_a8[0] = puVar27;
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000101275268(0,*(long *)(puVar27 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(apuStack_a8[0] + 0x10);
      if (*(ulong *)(apuStack_a8[0] + 0x18) >> 1 <= uVar12) {
        func_0x000101275268(1 < *(ulong *)(apuStack_a8[0] + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(apuStack_a8[0] + 0x10) = uVar12 + 1;
      *(ulong *)(apuStack_a8[0] + uVar12 * 8 + 0x20) = uVar11;
      puVar27 = apuStack_a8[0];
joined_r0x00010126eb84:
    } while (uVar30 != uVar28);
  }
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puStack_148);
  if (puStack_140 == (undefined *)0x0) {
    puVar10 = *(undefined **)(((ulong)puStack_120 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puStack_120 & 0xffffffffffffff8);
    if (((ulong)puStack_120 & 0x8000000000000000) != 0) {
      puVar10 = puStack_120;
    }
    func_0x000107c60480();
  }
  puVar15 = puStack_120;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_148 = puVar27;
  if (puVar10 != (undefined *)0x0) {
    puVar27 = (undefined *)0x0;
    puStack_130 = (undefined *)((ulong)puStack_120 & 0xc000000000000001);
    uVar26 = (ulong)puStack_120 & 0xffffffffffffff8;
    do {
      if (puStack_130 == (undefined *)0x0) {
        if (*(undefined **)(uVar26 + 0x10) <= puVar27) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7b0);
          (*pcVar4)();
        }
        puVar13 = *(undefined **)(puVar15 + (long)puVar27 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar13 = puVar27;
        FUN_10125ff50(puVar27,puStack_120);
      }
      bVar5 = SCARRY8((long)puVar27,1);
      puVar27 = puVar27 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7b4);
        (*pcVar4)();
      }
      if (*(long *)(puVar19 + 0x10) != 0) {
        lVar22 = *(long *)(puVar13 + _DAT_112d6cd48);
        uVar28 = *(ulong *)(puVar19 + 0x28);
        func_0x000107c60688(uVar28,lVar22);
        uVar30 = -1L << ((ulong)(byte)puVar19[0x20] & 0x3f);
        uVar28 = uVar28 & (uVar30 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar19 + (uVar28 >> 6) * 8 + 0x38) >> (uVar28 & 0x3f) & 1) != 0) {
          do {
            if (*(long *)(*(long *)(puVar19 + 0x30) + uVar28 * 8) == lVar22) {
              func_0x000107c61170(puVar13);
              goto joined_r0x00010126ee0c;
            }
            uVar28 = uVar28 + 1 & ~uVar30;
          } while ((*(ulong *)(puVar19 + (uVar28 >> 6) * 8 + 0x38) >> (uVar28 & 0x3f) & 1) != 0);
        }
      }
      puVar14 = puVar9;
      func_0x000107c61558();
      apuStack_a8[0] = puVar9;
      if (((ulong)puVar14 & 1) == 0) {
        func_0x000101275268(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar28 = *(ulong *)(apuStack_a8[0] + 0x10);
      if (*(ulong *)(apuStack_a8[0] + 0x18) >> 1 <= uVar28) {
        func_0x000101275268(1 < *(ulong *)(apuStack_a8[0] + 0x18),uVar28 + 1,1);
      }
      *(ulong *)(apuStack_a8[0] + 0x10) = uVar28 + 1;
      *(undefined **)(apuStack_a8[0] + uVar28 * 8 + 0x20) = puVar13;
      puVar9 = apuStack_a8[0];
joined_r0x00010126ee0c:
    } while (puVar27 != puVar10);
  }
  func_0x000107c6142c(puVar19);
  if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    puVar10 = puVar9;
    func_0x000107c60480();
  }
  else {
    puVar10 = *(undefined **)(puVar9 + 0x10);
  }
  puVar27 = puStack_148;
  puStack_170 = puVar9;
  puStack_158 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    if (((long)puStack_148 < 0) || (((ulong)puStack_148 >> 0x3e & 1) != 0)) {
      puVar19 = puStack_148;
      func_0x000107c60480();
      if (puVar19 == (undefined *)0x0) goto LAB_10126f8ac;
      goto LAB_10126eef8;
    }
    if (*(long *)(puStack_148 + 0x10) != 0) goto LAB_10126eef8;
LAB_10126f8ac:
    puVar19 = *(undefined **)(unaff_x20 + lStack_180);
    if ((ulong)puVar19 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar19 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar19) {
        puVar9 = puVar19;
      }
      func_0x000107c60480();
    }
    if (puStack_140 == (undefined *)0x0) {
      puVar19 = *(undefined **)(((ulong)puStack_120 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar19 = (undefined *)((ulong)puStack_120 & 0xffffffffffffff8);
      if (((ulong)puStack_120 & 0x8000000000000000) != 0) {
        puVar19 = puStack_120;
      }
      func_0x000107c60480();
    }
    if (puVar9 != puVar19) goto LAB_10126eef8;
    uVar26 = *(ulong *)(unaff_x20 + lStack_180);
    uVar28 = uVar26 & 0xffffffffffffff8;
    if (uVar26 >> 0x3e == 0) {
      uVar30 = *(ulong *)(uVar28 + 0x10);
    }
    else {
      uVar30 = uVar28;
      if (0x7fffffffffffffff < uVar26) {
        uVar30 = uVar26;
      }
      func_0x000107c60480();
    }
    puVar27 = puStack_120;
    puVar19 = (undefined *)((ulong)puStack_120 & 0xffffffffffffff8);
    puVar10 = puVar19;
    if (((ulong)puStack_120 & 0x8000000000000000) != 0) {
      puVar10 = puStack_120;
    }
    uVar11 = (ulong)puStack_120 & 0xc000000000000001;
    func_0x000107c61434(uVar26);
    func_0x000107c61434(puVar27);
    lVar22 = 4;
    do {
      if (lVar22 - uVar30 == 4) {
        func_0x000107c6142c(puStack_120);
        func_0x000107c6142c(uVar26);
LAB_10126fa6c:
        uVar31 = 1;
        puVar10 = puStack_158;
        puVar27 = puStack_148;
        goto LAB_10126eefc;
      }
      puVar27 = (undefined *)(lVar22 + -4);
      if ((uVar26 & 0xc000000000000001) == 0) {
        if (*(undefined **)(uVar28 + 0x10) <= puVar27) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10126faa8);
          (*pcVar4)();
        }
        puVar9 = *(undefined **)(uVar26 + lVar22 * 8);
        func_0x000107c61174();
      }
      else {
        puVar9 = puVar27;
        FUN_10125ff50(puVar27,uVar26);
      }
      if (SCARRY8((long)puVar27,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10126faa4);
        (*pcVar4)();
      }
      if (puStack_140 == (undefined *)0x0) {
        puVar15 = *(undefined **)(puVar19 + 0x10);
      }
      else {
        puVar15 = puVar10;
        func_0x000107c60480();
      }
      if (puVar27 == puVar15) {
        func_0x000107c6142c(puStack_120);
        func_0x000107c6142c(uVar26);
        func_0x000107c61170(puVar9);
        goto LAB_10126fa6c;
      }
      if (uVar11 == 0) {
        if (*(undefined **)(puVar19 + 0x10) <= puVar27) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10126faac);
          (*pcVar4)();
        }
        puVar27 = *(undefined **)(puStack_120 + lVar22 * 8);
        func_0x000107c61174();
      }
      else {
        FUN_10125ff50(puVar27,puStack_120);
      }
      lVar20 = *(long *)(puVar9 + _DAT_112d6cd48);
      lVar7 = *(long *)(puVar27 + _DAT_112d6cd48);
      func_0x000107c61170();
      func_0x000107c61170(puVar9);
      lVar22 = lVar22 + 1;
    } while (lVar20 == lVar7);
    func_0x000107c6142c(puStack_120);
    func_0x000107c6142c(uVar26);
    uVar31 = 0;
    puVar10 = puStack_158;
    puVar27 = puStack_148;
  }
  else {
LAB_10126eef8:
    uVar31 = 0;
  }
LAB_10126eefc:
  lVar20 = lStack_180;
  lVar22 = _DAT_112d6caf8;
  uVar23 = *(undefined8 *)(unaff_x20 + lStack_180);
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf8,apuStack_a8,1,0);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar22);
  lStack_188 = lVar22;
  *(undefined8 *)(unaff_x20 + lVar22) = uVar23;
  func_0x000107c61434(uVar23);
  func_0x000107c6142c(uVar24);
  if (uVar31 == 0) {
    uVar23 = *(undefined8 *)(unaff_x20 + lVar20);
    *(undefined **)(unaff_x20 + lVar20) = puStack_120;
    func_0x000107c61434();
    func_0x000107c6142c(uVar23);
    if (puVar10 != (undefined *)0x0) goto LAB_10126ef70;
  }
  else {
    if (puVar10 == (undefined *)0x0) goto LAB_10126f3b4;
LAB_10126ef70:
    puVar10 = (undefined *)0x0;
    puStack_168 = _DAT_112d6cb00;
    uStack_160 = (ulong)puStack_170 & 0xc000000000000001;
    uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
    puStack_178 = puStack_170 + 0x20;
    uStack_18c = uVar31;
    do {
      if (uStack_160 == 0) {
        if (*(undefined **)(puStack_170 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7c0);
          (*pcVar4)();
        }
        puVar27 = *(undefined **)(puStack_178 + (long)puVar10 * 8);
        func_0x000107c61174();
      }
      else {
        puVar27 = puVar10;
        FUN_10125ff50();
      }
      lVar22 = _DAT_112d6cd48;
      bVar5 = SCARRY8((long)puVar10,1);
      puVar10 = puVar10 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7b8);
        (*pcVar4)();
      }
      puVar9 = *(undefined **)(puVar27 + _DAT_112d6cd48);
      puVar19 = puVar9;
      func_0x000107c5084c();
      func_0x000107c61180();
      puStack_140 = puVar9;
      puStack_130 = puVar27;
      if (puVar19 == (undefined *)0x0) {
        puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_10124b9b8();
      }
      else {
        uVar24 = 0x112d6cac8;
        func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
        puVar27 = puVar19;
        func_0x000107c5f9e8(puVar19,PTR___sSSN_11034da80,uVar24,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(puVar19);
      }
      lVar20 = 0;
      uVar28 = 1L << ((ulong)(byte)puVar27[0x20] & 0x3f);
      uVar26 = 0xffffffffffffffff;
      if ((puVar27[0x20] & 0x3f) < 6) {
        uVar26 = ~(-1L << (uVar28 & 0x3f));
      }
      uVar26 = uVar26 & *(ulong *)(puVar27 + 0x40);
      while( true ) {
        for (; uVar26 != 0; uVar26 = uVar26 - 1 & uVar26) {
          uVar30 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
          uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
          uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
          uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
          uVar30 = LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) | lVar20 << 6;
          puVar1 = (undefined8 *)(*(long *)(puVar27 + 0x30) + uVar30 * 0x10);
          uVar24 = *puVar1;
          uVar2 = puVar1[1];
          func_0x000107c614e8(*(undefined8 *)(*(long *)(puVar27 + 0x38) + uVar30 * 8));
          func_0x000107c61434(uVar2);
          func_0x000107c5fadc(uVar24,uVar2);
          func_0x000107c6142c(uVar2);
          func_0x000107c4fbd8(uVar23);
          func_0x000107c61170(uVar24);
        }
        bVar5 = SCARRY8(lVar20,1);
        lVar20 = lVar20 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7a4);
          (*pcVar4)();
        }
        if ((long)(uVar28 + 0x3f >> 6) <= lVar20) break;
        uVar26 = *(ulong *)((long)(puVar27 + 0x40) + lVar20 * 8);
      }
      func_0x000107c61574(puVar27);
      puVar27 = puStack_130;
      uVar24 = *(undefined8 *)(puStack_130 + lVar22);
      func_0x000107c615f0(uVar24);
      FUN_10126fbe4();
      func_0x000107c615e8(uVar24);
      func_0x000107c58d90(*(undefined8 *)(puVar27 + lVar22));
      func_0x000107c53fcc(*(undefined8 *)(puVar27 + lVar22));
      uVar28 = *(ulong *)(puVar27 + lVar22);
      uVar26 = uVar28;
      func_0x000107c61150(uVar28,PTR_s_respondsToSelector__11262c7e0,PTR_s_setUp_112664a70);
      if ((uVar26 & 1) != 0) {
        func_0x000107c5a1d0(uVar28);
      }
      func_0x000107c61428(puStack_168 + unaff_x20,auStack_c0,0x21,0);
      FUN_10125e974(auStack_d8,puStack_140);
      func_0x000107c614a8(auStack_c0);
      func_0x000107c61170(puVar27);
      puVar27 = puStack_148;
    } while (puVar10 != puStack_158);
    if (puStack_158 != (undefined *)0x0) {
      pcVar4 = *(code **)(unaff_x20 + _DAT_112d6cae8);
      if (pcVar4 != (code *)0x0) {
        uVar23 = ((undefined8 *)(unaff_x20 + _DAT_112d6cae8))[1];
        func_0x000107c6157c(uVar23);
        (*pcVar4)();
        func_0x00010058d43c(pcVar4,uVar23);
      }
    }
    if ((uStack_18c & 1) != 0) goto LAB_10126f3b4;
  }
  uVar26 = _DAT_112d6cb08;
  func_0x000107c61428(unaff_x20 + _DAT_112d6cb08,auStack_c0,1,0);
  uVar23 = *(undefined8 *)(unaff_x20 + uVar26);
  *(undefined **)(unaff_x20 + uVar26) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar23);
  uVar26 = *(ulong *)(unaff_x20 + lStack_180);
  if (uVar26 >> 0x3e == 0) {
    uVar28 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar28 = uVar26 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar26) {
      uVar28 = uVar26;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar26);
  if (uVar28 != 0) {
    uVar30 = 0;
    do {
      if ((uVar26 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f7bc);
          (*pcVar4)();
        }
        uVar11 = *(ulong *)(uVar26 + uVar30 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar30;
        FUN_10125ff50(uVar30,uVar26);
      }
      if (SCARRY8(uVar30,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f360);
        (*pcVar4)();
      }
      uVar12 = uVar30 + 1;
      func_0x000107c58d90(*(undefined8 *)(uVar11 + _DAT_112d6cd48));
      func_0x000107c61170(uVar11);
      uVar30 = uVar30 + 1;
    } while (uVar12 != uVar28);
  }
  func_0x000107c6142c(uVar26);
  if (((long)puVar27 < 0) || (((ulong)puVar27 >> 0x3e & 1) != 0)) {
    puVar10 = puVar27;
    func_0x000107c60480();
    if (puVar10 != (undefined *)0x0) {
      func_0x000107c60480(puVar27);
      goto LAB_10126f380;
    }
  }
  else if (*(long *)(puVar27 + 0x10) != 0) {
LAB_10126f380:
    func_0x000101277148();
  }
  FUN_101269578(0,0);
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
  func_0x000107c4fd7c(uVar23);
  func_0x000107c4abfc(uVar23);
LAB_10126f3b4:
  FUN_101277280();
  uVar23 = *(undefined8 *)(unaff_x20 + lStack_188);
  *(undefined8 *)(unaff_x20 + lStack_188) = *(undefined8 *)(unaff_x20 + lStack_180);
  func_0x000107c61434();
  func_0x000107c6142c(uVar23);
  if (((long)puVar27 < 0) || (((ulong)puVar27 >> 0x3e & 1) != 0)) {
    puVar10 = puVar27;
    func_0x000107c60480();
    puVar19 = _DAT_112d6cb00;
    lVar22 = _DAT_112d6cb30;
    lVar20 = _DAT_112d6cb38;
  }
  else {
    puVar10 = *(undefined **)(puVar27 + 0x10);
    puVar19 = _DAT_112d6cb00;
    lVar22 = _DAT_112d6cb30;
    lVar20 = _DAT_112d6cb38;
  }
  _DAT_112d6cb00 = puVar19;
  _DAT_112d6cb30 = lVar22;
  _DAT_112d6cb38 = lVar20;
  if (puVar10 != (undefined *)0x0) {
    if ((long)puVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10126f868);
      (*pcVar4)();
    }
    puVar9 = (undefined *)0x0;
    puStack_140 = (undefined *)((ulong)puVar27 & 0xc000000000000001);
    puStack_178 = puVar10;
    puStack_168 = PTR_s_supplementaryViewProvider_1126765b8;
    uStack_160 = _DAT_112d6cb08;
    puStack_158 = _DAT_112d6cb28;
    puStack_130 = _DAT_112d6cb40;
    do {
      if (puStack_140 == (undefined *)0x0) {
        puVar15 = *(undefined **)(puVar27 + (long)puVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar15 = puVar9;
        FUN_10125ff50(puVar9,puVar27);
      }
      lVar7 = _DAT_112d6cd48;
      uVar28 = *(ulong *)(puVar15 + _DAT_112d6cd48);
      uVar26 = uVar28;
      func_0x000107c615f0();
      iVar6 = (int)uVar26;
      func_0x000107c50648();
      uVar26 = uVar28;
      if ((iVar6 == 0) ||
         (uVar30 = uVar28,
         func_0x000107c61150(uVar28,PTR_s_respondsToSelector__11262c7e0,
                             PTR_s_supplementaryViewProvider_1126765b8), (uVar30 & 1) == 0)) {
LAB_10126f64c:
        func_0x000107c615e8(uVar26);
      }
      else {
        func_0x000107c5c434();
        func_0x000107c61180();
        func_0x000107c615e8(uVar28);
        if (uVar26 != 0) {
          func_0x000107c59acc(uVar26);
          goto LAB_10126f64c;
        }
      }
      func_0x000107c58d90(*(undefined8 *)(puVar15 + lVar7));
      uVar28 = *(ulong *)(puVar15 + lVar7);
      uVar26 = uVar28;
      func_0x000107c61150(uVar28,PTR_s_respondsToSelector__11262c7e0,PTR_s_tearDown_112678508);
      if ((uVar26 & 1) != 0) {
        func_0x000107c5c7a8(uVar28);
      }
      func_0x000107c53fcc(*(undefined8 *)(puVar15 + lVar7));
      uVar23 = *(undefined8 *)(puVar15 + lVar7);
      func_0x000107c61428(puVar19 + unaff_x20,auStack_d8,0x21,0);
      FUN_101274d60(uVar23);
      func_0x000107c614a8(auStack_d8);
      lVar29 = *(long *)(puVar15 + lVar7);
      puVar17 = auStack_d8;
      func_0x000107c61428(unaff_x20 + lVar22,puVar17,0x21,0);
      func_0x0001000a7158(lVar29);
      if (((ulong)puVar17 & 1) == 0) {
        lVar29 = 0;
        func_0x000107c5eea4();
        puVar17 = puStack_150;
        (**(code **)(*(long *)(lVar29 + -8) + 0x38))(puStack_150,1,1,lVar29);
      }
      else {
        iVar6 = (int)*(undefined8 *)(unaff_x20 + lVar22);
        func_0x000107c61558();
        lStack_e0 = *(long *)(unaff_x20 + lVar22);
        *(undefined8 *)(unaff_x20 + lVar22) = 0x8000000000000000;
        if (iVar6 == 0) {
          FUN_101275d0c();
        }
        lVar3 = lStack_e0;
        lVar21 = *(long *)(lStack_e0 + 0x38);
        lVar16 = 0;
        func_0x000107c5eea4();
        puVar17 = puStack_150;
        lVar25 = *(long *)(lVar16 + -8);
        (**(code **)(lVar25 + 0x20))(puStack_150,lVar21 + *(long *)(lVar25 + 0x48) * lVar29,lVar16);
        func_0x000101275a30(lVar29,lVar3);
        uVar23 = *(undefined8 *)(unaff_x20 + lVar22);
        *(long *)(unaff_x20 + lVar22) = lVar3;
        func_0x000107c6142c(uVar23);
        (**(code **)(lVar25 + 0x38))(puVar17,0,1,lVar16);
        puVar10 = puStack_178;
        puVar27 = puStack_148;
      }
      puVar9 = puVar9 + 1;
      func_0x000107c614a8(auStack_d8);
      func_0x0001012778ec(puVar17,0x112d373d8,&UNK_10d9014c0);
      uVar23 = *(undefined8 *)(puVar15 + lVar7);
      func_0x000107c61428(unaff_x20 + lVar20,auStack_d8,0x21,0);
      FUN_101274d60(uVar23);
      func_0x000107c614a8(auStack_d8);
      uVar23 = *(undefined8 *)(puVar15 + lVar7);
      func_0x000107c61428(puStack_130 + unaff_x20,auStack_d8,0x21,0);
      FUN_101274d60(uVar23);
      func_0x000107c614a8(auStack_d8);
      uVar23 = *(undefined8 *)(puVar15 + lVar7);
      func_0x000107c61428(puStack_158 + unaff_x20,auStack_d8,0x21,0);
      func_0x000101275838(uVar23);
      func_0x000107c614a8(auStack_d8);
      uVar23 = *(undefined8 *)(puVar15 + lVar7);
      func_0x000107c61428(unaff_x20 + uStack_160,auStack_d8,0x21,0);
      FUN_101274d60(uVar23);
      func_0x000107c614a8(auStack_d8);
      func_0x000107c61170(puVar15);
    } while (puVar10 != puVar9);
  }
  FUN_10126ffb4();
  func_0x000107c6142c(puStack_120);
  func_0x000107c61574(puVar27);
  func_0x000107c61574(puStack_170);
  return;
}



/* Entry: 10126fad8; end: 10126fbe3;  */

void FUN_10126fad8(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar1 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_101276f0c();
  }
  uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  lStack_50 = (uVar4 & 0xffffffffffffff8) + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_1012783bc(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_101276450(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1012767f4(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10126fbe4; end: 10126fecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126fbe4(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  uVar17 = param_1;
  func_0x000107c50648(param_1,param_2,PTR_s_supplementaryViewProvider_1126765b8);
  if (((int)uVar17 != 0) &&
     (uVar17 = param_1,
     func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                         PTR_s_supplementaryViewProvider_1126765b8), (uVar17 & 1) != 0)) {
    func_0x000107c5c434();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c59acc();
      uVar17 = param_1;
      func_0x000107c50648();
      if ((int)uVar17 != 0) {
        uVar17 = param_1;
        func_0x000107c5de6c();
        func_0x000107c61180();
        if (uVar17 != 0) {
          uVar13 = 0x112d6cc40;
          func_0x0001000285a8(0x112d6cc40,&UNK_10d92f838);
          uVar7 = uVar17;
          func_0x000107c5f9e8(uVar17,PTR___sSSN_11034da80,uVar13,PTR___sSSSHsWP_11034da90);
          func_0x000107c61170(uVar17);
          lVar10 = 0;
          uVar15 = 1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
          uVar17 = 0xffffffffffffffff;
          if ((*(byte *)(uVar7 + 0x20) & 0x3f) < 6) {
            uVar17 = ~(-1L << (uVar15 & 0x3f));
          }
          uVar17 = uVar17 & *(ulong *)(uVar7 + 0x40);
          uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
          while( true ) {
            while (uVar17 != 0) {
              uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
              uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar17 = uVar17 - 1 & uVar17;
              uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar10 << 6;
              puVar1 = (undefined8 *)(*(long *)(uVar7 + 0x30) + uVar11 * 0x10);
              uVar2 = *puVar1;
              uVar3 = puVar1[1];
              lVar16 = *(long *)(*(long *)(uVar7 + 0x38) + uVar11 * 8);
              uVar14 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
              uVar11 = 0xffffffffffffffff;
              if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
                uVar11 = ~(-1L << (uVar14 & 0x3f));
              }
              uVar11 = uVar11 & *(ulong *)(lVar16 + 0x40);
              func_0x000107c61434();
              func_0x000107c61434(lVar16);
              lVar18 = 0;
              while( true ) {
                for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
                  uVar12 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar18 << 6;
                  puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar12 * 0x10);
                  uVar9 = *puVar1;
                  uVar4 = puVar1[1];
                  func_0x000107c614e8(*(undefined8 *)(*(long *)(lVar16 + 0x38) + uVar12 * 8));
                  func_0x000107c61434(uVar4);
                  uVar8 = uVar2;
                  func_0x000107c5fadc(uVar2,uVar3);
                  func_0x000107c5fadc(uVar9,uVar4);
                  func_0x000107c6142c(uVar4);
                  func_0x000107c4fbdc(uVar13);
                  func_0x000107c61170(uVar8);
                  func_0x000107c61170(uVar9);
                }
                bVar6 = SCARRY8(lVar18,1);
                lVar18 = lVar18 + 1;
                if (bVar6) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10126fec8);
                  (*pcVar5)();
                }
                if ((long)(uVar14 + 0x3f >> 6) <= lVar18) break;
                uVar11 = ((ulong *)(lVar16 + 0x40))[lVar18];
              }
              func_0x000107c61574(lVar16);
              func_0x000107c6142c(uVar3);
            }
            bVar6 = SCARRY8(lVar10,1);
            lVar10 = lVar10 + 1;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10126fecc);
              (*pcVar5)();
            }
            if ((long)(uVar15 + 0x3f >> 6) <= lVar10) break;
            uVar17 = ((ulong *)(uVar7 + 0x40))[lVar10];
          }
          func_0x000107c61574(uVar7);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10126fecc; end: 10126ffb3;  */

void FUN_10126fecc(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x0001000a7158();
  if ((param_3 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101275d0c();
    }
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar2);
    func_0x000101275a30(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010126ffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 10126ffb4; end: 1012702cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126ffb4(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_80,0,0);
  uVar13 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar13 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    lVar1 = _DAT_112d6cae0;
  }
  else {
    uVar15 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar15 = uVar13;
    }
    func_0x000107c60480();
    lVar1 = _DAT_112d6cae0;
  }
  _DAT_112d6cae0 = lVar1;
  if (uVar15 != 0) {
    if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012702cc);
      (*pcVar2)();
    }
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110eb4ff8;
    func_0x000107c61434(uVar13);
    uVar14 = 0;
    do {
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar13 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar14;
        FUN_10125ff50(uVar14,uVar13);
      }
      lVar12 = lRam0000000112d6cc28;
      uVar11 = *(ulong *)(uVar3 + _DAT_112d6cd48);
      func_0x000107c615f0(uVar11);
      if (lVar12 != -1) {
        func_0x000107c61568(0x112d6cc28,FUN_10126d824);
      }
      uVar4 = uVar11;
      func_0x000107c50648();
      if ((int)uVar4 != 0) {
        func_0x000107c615f0(uVar11);
        func_0x000107c4e5b8();
        func_0x000107c61104(uVar11);
      }
      uVar4 = uVar11;
      func_0x000107c61150(uVar11,PTR_s_respondsToSelector__11262c7e0,PTR_s_sectionInfo_112633260);
      if ((uVar4 & 1) == 0) {
LAB_101270058:
        func_0x000107c61170(uVar3);
        func_0x000107c615e8(uVar11);
      }
      else {
        uVar4 = uVar11;
        func_0x000107c51b78();
        func_0x000107c61180();
        if (uVar4 == 0) goto LAB_101270058;
        uVar5 = uVar4;
        puVar9 = PTR___ss11AnyHashableVN_11034e448;
        func_0x000107c5f9e8();
        func_0x000107c61170(uVar4);
        ppuVar6 = ppuStack_e0;
        func_0x000107c5faec();
        ppuStack_d8 = ppuVar6;
        puStack_d0 = puVar9;
        func_0x000107c61434(puVar9);
        puVar10 = PTR___sSSN_11034da80;
        func_0x000107c602d4(auStack_c8,&ppuStack_d8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        if (*(long *)(uVar5 + 0x10) == 0) {
LAB_10127021c:
          func_0x000107c615e8(uVar11);
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(puVar9);
          func_0x000107c6142c(uVar5);
          func_0x0001007bbff0(auStack_c8);
        }
        else {
          puVar7 = auStack_c8;
          FUN_100df95d0(puVar7);
          if (((ulong)puVar10 & 1) == 0) goto LAB_10127021c;
          func_0x0001000bb420(*(long *)(uVar5 + 0x38) + (long)puVar7 * 0x20,auStack_a0);
          func_0x000107c6142c(puVar9);
          func_0x0001007bbff0(auStack_c8);
          func_0x000107c6142c(uVar5);
          pppuVar8 = &ppuStack_d8;
          func_0x000107c6147c(pppuVar8,auStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          puVar9 = puStack_d0;
          ppuVar6 = ppuStack_d8;
          if (((ulong)pppuVar8 & 1) != 0) {
            lVar12 = *(long *)(unaff_x20 + lVar1);
            if (lVar12 == 0) {
              func_0x000107c6142c(puStack_d0);
            }
            else {
              func_0x000107c6157c(lVar12);
              FUN_10125e1e0(ppuVar6,puVar9);
              func_0x000107c6142c(puVar9);
              func_0x000107c61574(lVar12);
            }
          }
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar11);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
    func_0x000107c6142c(uVar13);
  }
  return;
}



/* Entry: 1012702cc; end: 10127032f; -[SCProfile3CollectionBridge updateSections:] */

void FUN_1012702cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d6cc18;
  func_0x0001000285a8(0x112d6cc18,&UNK_10d92f810);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_10126e5b0(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101270330; end: 10127042f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101270330(double param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
  func_0x000107c3ec60(uVar3);
  func_0x000107c609cc();
  if ((0.0 < param_1) && (0.1 < ABS(param_1 - *(double *)(unaff_x20 + _DAT_112d6cb18)))) {
    *(double *)(unaff_x20 + _DAT_112d6cb18) = param_1;
    uVar4 = uVar3;
    func_0x000107c3fda4(uVar3);
    func_0x000107c61180();
    func_0x000107c4990c();
    func_0x000107c61170(uVar4);
    FUN_101269578(0,0);
    lVar1 = _DAT_112d6caf0;
    func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_58,0,0);
    lVar2 = _DAT_112d6caf8;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61428(unaff_x20 + _DAT_112d6caf8,auStack_70,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
    func_0x000107c61434(uVar4);
    func_0x000107c6142c(uVar5);
    func_0x000107c4fd7c(uVar3);
    FUN_10126ffb4();
  }
  return;
}



/* Entry: 101270430; end: 101270457; -[SCProfile3CollectionBridge invalidateAndReloadIfNeeded] */

void FUN_101270430(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101270330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101270458; end: 101270583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101270458(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar1 = _DAT_112d6cb10;
  ppuVar4 = &puStack_60;
  if (*(long *)(unaff_x20 + _DAT_112d6cb10) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    puVar3 = &UNK_11039a6b8;
    func_0x000107c613fc(&UNK_11039a6b8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_101277888;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_100fef460;
    puStack_48 = &UNK_11039a6f8;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c51924(0x3f91111111111111);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 101270584; end: 101272f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101270584(double param_1)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long unaff_x20;
  code *pcVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  char *pcVar28;
  undefined8 uVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 uVar32;
  code *pcVar33;
  undefined **ppuVar34;
  ulong uVar35;
  code *pcVar36;
  long lVar37;
  double dVar38;
  undefined1 auStack_320 [8];
  ulong uStack_318;
  long lStack_310;
  undefined *puStack_308;
  double dStack_300;
  undefined8 uStack_2f8;
  long lStack_2e8;
  char *pcStack_2e0;
  long lStack_2d8;
  uint uStack_2cc;
  long lStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  char *pcStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined1 *puStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  char *pcStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  code *pcStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  ulong auStack_130 [3];
  code *apcStack_118 [3];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  
  lVar37 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  lStack_270 = lVar37;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar37 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar37 = 0x112d373d8;
  puStack_278 = auStack_320 + -extraout_x8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar37 + -8) + 0x40));
  lVar17 = (long)(auStack_320 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_1e8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12;
  lStack_280 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_00;
  lStack_250 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar18 = lVar17 - extraout_x12_02;
  uStack_2b8 = uVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = uVar18 - extraout_x12_03;
  lStack_2c0 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12_04;
  lStack_2a8 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = lVar19 - extraout_x12_06;
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar37 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar37 + 0x40));
  lVar20 = lVar31 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_288 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_07;
  lStack_268 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_08;
  lStack_2c8 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_09;
  lStack_2d8 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_10;
  lVar8 = 0;
  lStack_198 = lVar20;
  func_0x000107c5ef8c();
  lStack_1b8 = *(long *)(lVar8 + -8);
  lStack_1b0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1b8 + 0x40));
  uVar18 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uStack_1d8 = uVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = _DAT_112d6cb08;
  lStack_248 = uVar18 - extraout_x12_11;
  uVar18 = unaff_x20 + _DAT_112d6cb08;
  func_0x000107c61428(uVar18,auStack_a0,1,0);
  lStack_230 = *(long *)(unaff_x20 + lVar8);
  *(undefined **)(unaff_x20 + lVar8) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x00010126cd90();
  if (uVar18 == 0) {
    func_0x00010126cd90();
    if (uVar18 != 0) {
      uVar26 = 0;
LAB_101270900:
      uVar35 = uVar18;
      func_0x000107c49c80();
      func_0x000107c61170(uVar18);
      if (((uVar26 & 1) != 0) || ((uVar35 & 1) != 0)) goto LAB_101272640;
    }
LAB_10127091c:
    puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar16 = 0x112d604f8;
    lStack_310 = lVar17;
    lStack_240 = lVar31;
    lStack_238 = lVar19;
    lStack_190 = lVar7;
    func_0x00010127792c(0x112d604f8,PTR___s10Foundation8IndexSetVMa_110350e28,
                        PTR___s10Foundation8IndexSetVs0C7AlgebraAAMc_110350e40);
    uVar32 = 0x112d4b170;
    func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
    uVar29 = 0x112d60500;
    func_0x0001012778a8(0x112d60500,0x112d4b170,&UNK_10d911a80,PTR___sSayxGSTsMc_11034dd08);
    func_0x000107c60264(lStack_248,&puStack_160,uVar32,uVar29,lStack_1b0,uVar16);
    func_0x000107c5eea0(lStack_198);
    lVar8 = _DAT_112d6caf0;
    func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_b8,0,0);
    lStack_220 = lVar8;
    uVar18 = *(ulong *)(unaff_x20 + lVar8);
    if (uVar18 >> 0x3e == 0) {
      uVar26 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar26 = uVar18 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar18) {
        uVar26 = uVar18;
      }
      func_0x000107c60480();
    }
    lVar8 = lStack_1e8;
    lVar7 = lStack_230;
    lVar17 = _DAT_112d6cb40;
    lVar20 = _DAT_112d6cb38;
    lStack_188 = _DAT_112d6cb30;
    lStack_1f0 = _DAT_112d6cb28;
    lStack_290 = _DAT_1137ff2d8;
    lStack_2e8 = _DAT_1137ff2e0;
    uStack_260 = *(undefined8 *)(unaff_x20 + _DAT_112d6cb50);
    func_0x000107c61434(uVar18);
    lStack_218 = lVar20;
    func_0x000107c61428(unaff_x20 + lVar20,auStack_d0,0,0);
    lStack_228 = lVar17;
    func_0x000107c61428(unaff_x20 + lVar17,auStack_e8,0,0);
    uStack_318 = uVar18;
    lStack_1a0 = lVar37;
    if (uVar26 == 0) {
      puStack_308 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_298 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_2a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uStack_1f8 = uVar18 & 0xc000000000000001;
      uStack_200 = uVar18 & 0xffffffffffffff8;
      lStack_208 = uVar18 + 0x20;
      lVar20 = lVar7 + 0x38;
      pcStack_258 = "tionBridge.collectionView";
      param_1 = 4.94065645841247e-324;
      uStack_2f8 = 2;
      dStack_300 = 4.94065645841247e-324;
      pcStack_2b0 = "sectionDataProvider";
      pcStack_2e0 = "section_recovered_natural";
      puStack_298 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_2a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_308 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar17 = lStack_188;
      lVar19 = lStack_190;
      uVar18 = 0;
      uStack_210 = uVar26;
      lStack_1c0 = lVar20;
LAB_101270bac:
      do {
        if (uStack_1f8 == 0) {
          if (*(ulong *)(uStack_200 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x1012728f4);
            (*pcVar24)();
          }
          uVar26 = *(ulong *)(lStack_208 + uVar18 * 8);
          func_0x000107c61174();
          dVar38 = param_1;
        }
        else {
          uVar26 = uVar18;
          FUN_10125ff50(uVar18,uStack_318);
          dVar38 = param_1;
        }
        uVar35 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1012728f0);
          (*pcVar24)();
        }
        lStack_180 = _DAT_112d6cd48;
        uVar27 = *(ulong *)(uVar26 + _DAT_112d6cd48);
        uStack_1c8 = uVar18;
        if (*(long *)(lVar7 + 0x10) == 0) {
LAB_101270c78:
          bVar5 = false;
        }
        else {
          uVar18 = *(ulong *)(lVar7 + 0x28);
          func_0x000107c60688(uVar18,uVar27);
          uVar21 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
          uVar18 = uVar18 & (uVar21 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar20 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) == 0)
          goto LAB_101270c78;
          do {
            bVar5 = *(ulong *)(*(long *)(lVar7 + 0x30) + uVar18 * 8) == uVar27;
            if (bVar5) break;
            uVar18 = uVar18 + 1 & ~uVar21;
          } while ((*(ulong *)(lVar20 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0);
        }
        uVar21 = uVar27;
        func_0x000107c41254();
        uVar18 = uVar35;
        if (uVar21 == 1) {
          ppuVar34 = &puStack_160;
          func_0x000107c61428(unaff_x20 + lVar17,ppuVar34,0x20,0);
          lVar8 = *(long *)(unaff_x20 + lVar17);
          uStack_1e0 = uVar27;
          if (*(long *)(lVar8 + 0x10) == 0) {
            uVar16 = 1;
            lVar20 = lStack_238;
            lVar7 = lStack_240;
          }
          else {
            func_0x0001000a7158(uVar27);
            lVar20 = lStack_238;
            lVar7 = lStack_240;
            if (((ulong)ppuVar34 & 1) == 0) {
              uVar16 = 1;
            }
            else {
              (**(code **)(lVar37 + 0x10))
                        (lStack_240,*(long *)(lVar8 + 0x38) + *(long *)(lVar37 + 0x48) * uVar27,
                         lVar19);
              uVar16 = 0;
            }
          }
          pcVar24 = *(code **)(lVar37 + 0x38);
          (*pcVar24)(lVar7,uVar16,1,lVar19);
          func_0x000107c614a8(&puStack_160);
          pcStack_1a8 = pcVar24;
          (*pcVar24)(lVar20,1,1,lVar19);
          puVar1 = puStack_278;
          iVar6 = *(int *)(lStack_270 + 0x30);
          func_0x0001009f0578(lVar7,puStack_278);
          func_0x0001009f0578(lVar20,puVar1 + iVar6);
          pcVar24 = *(code **)(lVar37 + 0x30);
          puVar10 = puVar1;
          (*pcVar24)(puVar1,1,lVar19);
          lVar8 = lStack_2a8;
          pcStack_1d0 = pcVar24;
          if ((int)puVar10 == 1) {
            func_0x0001012778ec(lVar20,0x112d373d8,&UNK_10d9014c0);
            func_0x0001012778ec(lVar7,0x112d373d8,&UNK_10d9014c0);
            puVar10 = puVar1 + iVar6;
            (*pcVar24)(puVar10,1,lVar19);
            if ((int)puVar10 == 1) {
              func_0x0001012778ec(puVar1,0x112d373d8,&UNK_10d9014c0);
LAB_101271334:
              lVar8 = lStack_1a0;
              uVar27 = uStack_1e0;
              lVar7 = lStack_268;
              lVar37 = lStack_2c0;
              (**(code **)(lStack_1a0 + 0x10))(lStack_2c0,lStack_198,lVar19);
              (*pcStack_1a8)(lVar37,0,1,lVar19);
              func_0x000107c61428(unaff_x20 + lVar17,&puStack_160,0x21,0);
              uVar21 = uStack_2b8;
              func_0x0001003a4c00(lVar37,uStack_2b8);
              uVar23 = uVar21;
              (*pcVar24)(uVar21,1,lVar19);
              if ((int)uVar23 == 1) {
                uVar23 = 0;
                func_0x0001012778ec(uVar21,0x112d373d8,&UNK_10d9014c0);
                uVar21 = uVar27;
                func_0x0001000a7158(uVar27);
                if ((uVar23 & 1) == 0) {
                  uVar16 = 1;
                  lVar37 = lStack_310;
                  lVar19 = lStack_190;
                }
                else {
                  iVar6 = (int)*(undefined8 *)(unaff_x20 + lVar17);
                  func_0x000107c61558();
                  apcStack_118[0] = *(code **)(unaff_x20 + lVar17);
                  *(undefined8 *)(unaff_x20 + lVar17) = 0x8000000000000000;
                  if (iVar6 == 0) {
                    FUN_101275d0c();
                  }
                  pcVar24 = apcStack_118[0];
                  lVar19 = lStack_190;
                  lVar37 = lStack_310;
                  (**(code **)(lStack_1a0 + 0x20))
                            (lStack_310,
                             *(long *)(apcStack_118[0] + 0x38) +
                             *(long *)(lStack_1a0 + 0x48) * uVar21,lStack_190);
                  func_0x000101275a30(uVar21,pcVar24);
                  uVar16 = *(undefined8 *)(unaff_x20 + lVar17);
                  *(code **)(unaff_x20 + lVar17) = pcVar24;
                  func_0x000107c6142c(uVar16);
                  uVar16 = 0;
                }
                (*pcStack_1a8)(lVar37,uVar16,1,lVar19);
                func_0x0001012778ec(lVar37,0x112d373d8,&UNK_10d9014c0);
                lVar17 = lStack_188;
                lVar7 = lStack_268;
              }
              else {
                pcVar33 = *(code **)(lVar8 + 0x20);
                (*pcVar33)(lStack_2c8,uVar21,lVar19);
                uVar11 = *(ulong *)(unaff_x20 + lVar17);
                func_0x000107c61558();
                uVar15 = (uint)uVar11;
                pcVar24 = *(code **)(unaff_x20 + lVar17);
                *(undefined8 *)(unaff_x20 + lVar17) = 0x8000000000000000;
                uVar23 = uVar27;
                apcStack_118[0] = pcVar24;
                func_0x0001000a7158();
                uVar22 = (ulong)~(uint)uVar21 & 1;
                lVar37 = *(long *)(pcVar24 + 0x10) + uVar22;
                if (SCARRY8(*(long *)(pcVar24 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
                  pcVar24 = (code *)SoftwareBreakpoint(1,0x101272ad0);
                  (*pcVar24)();
                }
                if (*(long *)(pcVar24 + 0x18) < lVar37) {
                  func_0x000101276168(lVar37);
                  uVar23 = uVar27;
                  func_0x0001000a7158();
                  if (((uint)uVar21 & 1) != (uVar15 & 1)) {
                    func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
                    pcVar24 = (code *)SoftwareBreakpoint(1,0x101272b30);
                    (*pcVar24)();
                  }
                }
                else if ((uVar11 & 1) == 0) {
                  FUN_101275d0c();
                  lVar17 = lStack_188;
                }
                pcVar24 = apcStack_118[0];
                lVar19 = lStack_190;
                if ((uVar21 & 1) == 0) {
                  *(ulong *)(apcStack_118[0] + (uVar23 >> 6) * 8 + 0x40) =
                       *(ulong *)(apcStack_118[0] + (uVar23 >> 6) * 8 + 0x40) |
                       1L << (uVar23 & 0x3f);
                  *(ulong *)(*(long *)(apcStack_118[0] + 0x30) + uVar23 * 8) = uVar27;
                  (*pcVar33)(*(long *)(apcStack_118[0] + 0x38) +
                             *(long *)(lStack_1a0 + 0x48) * uVar23,lStack_2c8,lStack_190);
                  if (SCARRY8(*(long *)(pcVar24 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar24 = (code *)SoftwareBreakpoint(1,0x101272b1c);
                    (*pcVar24)();
                  }
                  *(long *)(pcVar24 + 0x10) = *(long *)(pcVar24 + 0x10) + 1;
                }
                else {
                  (**(code **)(lStack_1a0 + 0x28))
                            (*(long *)(apcStack_118[0] + 0x38) +
                             *(long *)(lStack_1a0 + 0x48) * uVar23,lStack_2c8,lStack_190);
                }
                uVar16 = *(undefined8 *)(unaff_x20 + lVar17);
                *(code **)(unaff_x20 + lVar17) = pcVar24;
                func_0x000107c6142c(uVar16);
                uVar27 = uStack_1e0;
              }
              lVar8 = lStack_1e8;
              func_0x000107c614a8(&puStack_160);
            }
            else {
LAB_1012711fc:
              func_0x0001012778ec(puVar1,0x112d373d0,&UNK_10d90f8f0);
              lVar7 = lStack_268;
              uVar27 = uStack_1e0;
              lVar8 = lStack_1e8;
            }
          }
          else {
            func_0x0001009f0578(puVar1,lStack_2a8);
            puVar10 = puVar1 + iVar6;
            (*pcVar24)(puVar10,1,lVar19);
            lVar7 = lStack_2d8;
            if ((int)puVar10 == 1) {
              func_0x0001012778ec(lStack_238,0x112d373d8,&UNK_10d9014c0);
              func_0x0001012778ec(lStack_240,0x112d373d8,&UNK_10d9014c0);
              (**(code **)(lVar37 + 8))(lVar8,lVar19);
              goto LAB_1012711fc;
            }
            (**(code **)(lVar37 + 0x20))(lStack_2d8,puVar1 + iVar6,lVar19);
            uVar16 = 0x112d373e0;
            func_0x00010127792c(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                                PTR___s10Foundation4DateVSQAAMc_110350be0);
            lVar20 = lVar8;
            func_0x000107c5fab8(lVar8,lVar7,lVar19,uVar16);
            uStack_2cc = (uint)lVar20;
            pcVar24 = *(code **)(lVar37 + 8);
            (*pcVar24)(lVar7,lVar19);
            func_0x0001012778ec(lStack_238,0x112d373d8,&UNK_10d9014c0);
            func_0x0001012778ec(lStack_240,0x112d373d8,&UNK_10d9014c0);
            (*pcVar24)(lVar8,lVar19);
            lVar17 = lStack_188;
            func_0x0001012778ec(puVar1,0x112d373d8,&UNK_10d9014c0);
            lVar7 = lStack_268;
            uVar27 = uStack_1e0;
            lVar8 = lStack_1e8;
            pcVar24 = pcStack_1d0;
            if ((uStack_2cc & 1) != 0) goto LAB_101271334;
          }
          ppuVar34 = &puStack_160;
          func_0x000107c61428(unaff_x20 + lVar17,ppuVar34,0x20,0);
          lVar20 = *(long *)(unaff_x20 + lVar17);
          if ((*(long *)(lVar20 + 0x10) == 0) ||
             (uVar21 = uVar27, func_0x0001000a7158(uVar27), lVar37 = lStack_1a0,
             ((ulong)ppuVar34 & 1) == 0)) {
            uVar16 = 1;
            lVar37 = lStack_1a0;
          }
          else {
            (**(code **)(lStack_1a0 + 0x10))
                      (lStack_250,*(long *)(lVar20 + 0x38) + *(long *)(lStack_1a0 + 0x48) * uVar21,
                       lVar19);
            uVar16 = 0;
          }
          lVar17 = lStack_250;
          (*pcStack_1a8)(lStack_250,uVar16,1,lVar19);
          func_0x000107c614a8(&puStack_160);
          lVar20 = lStack_280;
          func_0x0001003a4c00(lVar17,lStack_280);
          pcVar24 = pcStack_1d0;
          lVar17 = lVar20;
          (*pcStack_1d0)(lVar20,1,lVar19);
          if ((int)lVar17 == 1) {
            (**(code **)(lVar37 + 0x10))(lVar7,lStack_198,lVar19);
            lVar17 = lVar20;
            (*pcVar24)(lVar20,1,lVar19);
            if ((int)lVar17 != 1) {
              func_0x0001012778ec(lVar20,0x112d373d8,&UNK_10d9014c0);
            }
          }
          else {
            (**(code **)(lVar37 + 0x20))(lVar7,lVar20,lVar19);
          }
          func_0x000107c5ee68(lVar7);
          param_1 = dVar38;
          (**(code **)(lVar37 + 8))(lVar7,lVar19);
          lVar20 = lStack_1c0;
          lVar7 = lStack_230;
          if (3.0 <= dVar38) {
            lVar17 = *(long *)(unaff_x20 + lStack_218);
            if (*(long *)(lVar17 + 0x10) != 0) {
              uVar21 = *(ulong *)(lVar17 + 0x28);
              func_0x000107c60688(uVar21,uVar27);
              uVar23 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
              uVar21 = uVar21 & (uVar23 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar17 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0) {
                do {
                  if (*(ulong *)(*(long *)(lVar17 + 0x30) + uVar21 * 8) == uVar27)
                  goto LAB_101271b18;
                  uVar21 = uVar21 + 1 & ~uVar23;
                } while ((*(ulong *)(lVar17 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0
                        );
              }
            }
            func_0x000107c61428(unaff_x20 + lStack_218,&puStack_160,0x21,0);
            FUN_10125e974(apcStack_118,uVar27);
            func_0x000107c614a8(&puStack_160);
            lVar17 = lStack_180;
            lVar19 = *(long *)(uVar26 + lStack_180);
            func_0x000107c4d914();
            if (lVar19 < 0) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x101272ac8);
              (*pcVar24)();
            }
            puVar25 = *(undefined **)(uVar26 + lVar17);
            func_0x000107c615f0(puVar25);
            func_0x000107c5effc(0xd000000000000013,(ulong)pcStack_258 | 0x8000000000000000);
            puVar30 = puVar25;
            func_0x000107c50648();
            if ((int)puVar30 != 0) {
              puVar30 = puVar25;
              func_0x000107c615f0();
              func_0x000107c4e5b8();
              func_0x000107c61104(puVar25);
              if (puVar30 != (undefined *)0x0) {
                puVar14 = puVar30;
                func_0x000107c615f0();
                func_0x000107c614f0();
                uVar16 = 0x112d6cac8;
                puStack_160 = puVar14;
                func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
                func_0x000107c5fb18(&puStack_160,uVar16);
                func_0x000107c615e8(puVar25);
                func_0x000107c615e8(puVar30);
                func_0x000107c6142c(uVar16);
                lVar19 = lStack_190;
                goto LAB_101271b18;
              }
            }
            func_0x000107c615e8(puVar25);
            lVar19 = lStack_190;
          }
LAB_101271b18:
          bVar3 = true;
          bVar4 = false;
          if (*(char *)(unaff_x20 + lStack_290) == '\x01') {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(dVar38)) {
              bVar3 = dVar38 < 10.0;
              bVar4 = false;
            }
          }
          if (bVar3 != bVar4) goto LAB_101271b30;
          lVar17 = *(long *)(unaff_x20 + lStack_228);
          if (*(long *)(lVar17 + 0x10) != 0) {
            uVar21 = *(ulong *)(lVar17 + 0x28);
            func_0x000107c60688(uVar21,uVar27);
            uVar23 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            uVar21 = uVar21 & (uVar23 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar17 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0) {
              do {
                if (*(ulong *)(*(long *)(lVar17 + 0x30) + uVar21 * 8) == uVar27) goto LAB_101271b30;
                uVar21 = uVar21 + 1 & ~uVar23;
              } while ((*(ulong *)(lVar17 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0);
            }
          }
          func_0x000107c61428(unaff_x20 + lStack_228,&puStack_160,0x21,0);
          FUN_10125e974(apcStack_118,uVar27);
          func_0x000107c614a8(&puStack_160);
          lVar37 = lStack_180;
          pcVar24 = *(code **)(uVar26 + lStack_180);
          func_0x000107c4d914();
          if ((long)pcVar24 < 0) {
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x101272acc);
            (*pcVar24)();
          }
          lVar8 = uVar26 + _DAT_112d6cd38;
          func_0x000107c61428(lVar8,auStack_100,0,0);
          pcVar33 = *(code **)(*(long *)(lVar8 + 0x20) + 0x10);
          puVar25 = *(undefined **)(uVar26 + lVar37);
          func_0x000107c615f4(puVar25,2);
          func_0x000107c5effc(0xd000000000000013,(ulong)pcStack_258 | 0x8000000000000000);
          puVar30 = puVar25;
          func_0x000107c50648();
          pcStack_1a8 = pcVar33;
          if ((int)puVar30 == 0) {
LAB_101271d0c:
            func_0x000107c615ec(puVar25,2);
            uVar16 = 0xa300000000000000;
            ppuVar34 = (undefined **)0x9480e2;
          }
          else {
            puVar30 = puVar25;
            func_0x000107c615f0();
            func_0x000107c4e5b8();
            func_0x000107c61104(puVar25);
            if (puVar30 == (undefined *)0x0) goto LAB_101271d0c;
            puVar14 = puVar30;
            func_0x000107c615f0();
            func_0x000107c614f0();
            uVar16 = 0x112d6cac8;
            puStack_160 = puVar14;
            func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
            ppuVar34 = &puStack_160;
            func_0x000107c5fb18(ppuVar34,uVar16);
            func_0x000107c615ec(puVar25,2);
            func_0x000107c615e8(puVar30);
          }
          puStack_160 = (undefined *)0x0;
          puStack_158 = (undefined *)0xe000000000000000;
          func_0x000107c602fc(0x2d);
          puVar14 = puStack_158;
          puVar25 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar30 = PTR___sSiN_11034deb0;
          pcStack_1d0 = _DAT_112d6cd40;
          apcStack_118[0] = *(code **)(_DAT_112d6cd40 + uVar26);
          puVar12 = PTR___sSiN_11034deb0;
          puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c();
          func_0x000107c6142c(puVar14);
          puStack_160 = puVar12;
          puStack_158 = puVar13;
          func_0x000107c5fb78(0x3a,0xe100000000000000);
          func_0x000107c614f0(*(undefined8 *)(uVar26 + lStack_180));
          uVar32 = 0;
          func_0x000107c60714();
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar32);
          func_0x000107c5fb78(0x656469766f727028,0xea00000000003d72);
          func_0x000107c5fb78(ppuVar34,uVar16);
          func_0x000107c6142c(uVar16);
          func_0x000107c5fb78(0x3d736d6574692c,0xe700000000000000);
          puVar14 = puVar25;
          apcStack_118[0] = pcVar24;
          func_0x000107c6057c(puVar30,puVar25);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar14);
          func_0x000107c5fb78(0x3d6465686361632c,0xe800000000000000);
          apcStack_118[0] = pcStack_1a8;
          func_0x000107c6057c(puVar30,puVar25);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar25);
          func_0x000107c5fb78(0x3d6567612c,0xe500000000000000);
          lVar37 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          *(undefined8 *)(lVar37 + 0x18) = uStack_2f8;
          *(double *)(lVar37 + 0x10) = dStack_300;
          *(undefined **)(lVar37 + 0x38) = PTR___sSdN_11034dd90;
          *(undefined **)(lVar37 + 0x40) = PTR___sSds7CVarArgsWP_11034ddc0;
          *(double *)(lVar37 + 0x20) = dVar38;
          uVar16 = 0xe400000000000000;
          param_1 = dStack_300;
          func_0x000107c5fb00(0x66312e25,0xe400000000000000,lVar37);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar16);
          func_0x000107c5fb78(0x2973,0xe200000000000000);
          puVar14 = puStack_158;
          puVar25 = puStack_160;
          puVar30 = puStack_2a0;
          puVar12 = puStack_2a0;
          func_0x000107c61558();
          puVar13 = puVar30;
          if (((ulong)puVar12 & 1) == 0) {
            puVar13 = (undefined *)0x0;
            FUN_101275408(0,*(long *)(puVar30 + 0x10) + 1,1,puVar30,
                          PTR__swift_bridgeObjectRelease_11034f258);
          }
          lVar37 = lStack_1a0;
          lVar8 = lStack_1e8;
          uVar21 = *(ulong *)(puVar13 + 0x10);
          puVar30 = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar21) {
            puVar30 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
            FUN_101275408(puVar30,uVar21 + 1,1,puVar13,PTR__swift_bridgeObjectRelease_11034f258);
          }
          *(ulong *)(puVar30 + 0x10) = uVar21 + 1;
          *(undefined **)(puVar30 + uVar21 * 0x10 + 0x20) = puVar25;
          *(undefined **)(puVar30 + uVar21 * 0x10 + 0x28) = puVar14;
          puVar25 = *(undefined **)(uVar26 + lStack_180);
          puStack_2a0 = puVar30;
          func_0x000107c615f0(puVar25);
          func_0x000107c5effc(0xd000000000000013,(ulong)pcStack_258 | 0x8000000000000000);
          puVar30 = puVar25;
          func_0x000107c50648();
          if ((int)puVar30 == 0) {
LAB_101272048:
            func_0x000107c615e8(puVar25);
            lVar20 = -0x5d00000000000000;
            ppuVar34 = (undefined **)0x9480e2;
          }
          else {
            puVar30 = puVar25;
            func_0x000107c615f0();
            func_0x000107c4e5b8();
            func_0x000107c61104(puVar25);
            if (puVar30 == (undefined *)0x0) goto LAB_101272048;
            puVar14 = puVar30;
            func_0x000107c615f0();
            func_0x000107c614f0();
            lVar20 = 0x112d6cac8;
            puStack_160 = puVar14;
            func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
            ppuVar34 = &puStack_160;
            func_0x000107c5fb18();
            func_0x000107c615e8(puVar25);
            func_0x000107c615e8(puVar30);
          }
          lVar17 = lStack_188;
          lVar7 = lStack_230;
          if (((ppuVar34 == (undefined **)0x9480e2) && (lVar20 == -0x5d00000000000000)) ||
             (ppuVar9 = ppuVar34, func_0x000107c605b8(ppuVar34,lVar20,0x9480e2,0xa300000000000000,0)
             , ((ulong)ppuVar9 & 1) != 0)) {
            func_0x000107c6142c(lVar20);
            func_0x000107c614f0();
            lVar20 = 0x112d6cc58;
            puStack_160 = puVar25;
            func_0x0001000285a8(0x112d6cc58,&UNK_10d92f858);
            ppuVar34 = &puStack_160;
            func_0x000107c5fb18(ppuVar34,lVar20);
          }
          func_0x000107c5fadc(ppuVar34,lVar20);
          func_0x000107c6142c(lVar20);
          func_0x000108c7a744(uStack_260,ppuVar34,1);
          func_0x000107c61170(ppuVar34);
          lVar31 = lStack_1f0;
          lVar20 = lStack_1c0;
          lVar19 = lStack_190;
          if (*(char *)(unaff_x20 + lStack_2e8) != '\x01') goto LAB_101272488;
          ppuVar34 = &puStack_160;
          func_0x000107c61428(unaff_x20 + lStack_1f0,ppuVar34,0x20,0);
          lVar19 = lStack_190;
          lVar20 = *(long *)(unaff_x20 + lVar31);
          if ((*(long *)(lVar20 + 0x10) == 0) ||
             (uVar21 = uVar27, func_0x0001000a7158(), ((ulong)ppuVar34 & 1) == 0)) {
            func_0x000107c614a8(&puStack_160);
            lVar31 = 0;
          }
          else {
            lVar31 = *(long *)(*(long *)(lVar20 + 0x38) + uVar21 * 8);
            func_0x000107c614a8(&puStack_160);
            lVar2 = lStack_1f0;
            if (2 < lVar31) {
              lVar20 = lStack_1c0;
              if (lVar31 == 3) {
                func_0x000107c61428(unaff_x20 + lStack_1f0,&puStack_160,0x21,0);
                uVar16 = *(undefined8 *)(unaff_x20 + lVar2);
                func_0x000107c61558(uVar16);
                apcStack_118[0] = *(code **)(unaff_x20 + lVar2);
                *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
                func_0x000101276e1c(4,uVar27,uVar16);
                *(code **)(unaff_x20 + lVar2) = apcStack_118[0];
                func_0x000107c614a8(&puStack_160);
                puStack_160 = (undefined *)0x0;
                puStack_158 = (undefined *)0xe000000000000000;
                func_0x000107c602fc(0x11);
                puVar14 = puStack_158;
                puVar25 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                puVar30 = PTR___sSiN_11034deb0;
                apcStack_118[0] = *(code **)(pcStack_1d0 + uVar26);
                puVar12 = PTR___sSiN_11034deb0;
                puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                func_0x000107c6057c();
                func_0x000107c6142c(puVar14);
                puStack_160 = puVar12;
                puStack_158 = puVar13;
                func_0x000107c5fb78(0x3a,0xe100000000000000);
                func_0x000107c614f0(*(undefined8 *)(uVar26 + lStack_180));
                uVar16 = 0;
                func_0x000107c60714();
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar16);
                func_0x000107c5fb78(0x7365697274657228,0xe90000000000003d);
                apcStack_118[0] = (code *)0x3;
                func_0x000107c6057c(puVar30,puVar25);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar25);
                func_0x000107c5fb78(0x29,0xe100000000000000);
                puVar25 = puStack_158;
                puVar30 = puStack_160;
                puVar14 = puStack_308;
                func_0x000107c61558();
                if (((ulong)puVar14 & 1) == 0) {
                  puVar14 = (undefined *)0x0;
                  FUN_101275408(0,*(long *)(puStack_308 + 0x10) + 1,1,puStack_308,
                                PTR__swift_bridgeObjectRelease_11034f258);
                  puStack_308 = puVar14;
                }
                lVar37 = lStack_1a0;
                lVar8 = lStack_1e8;
                uVar27 = *(ulong *)(puStack_308 + 0x10);
                if (*(ulong *)(puStack_308 + 0x18) >> 1 <= uVar27) {
                  puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puStack_308 + 0x18));
                  FUN_101275408(puVar14,uVar27 + 1,1,puStack_308,
                                PTR__swift_bridgeObjectRelease_11034f258);
                  puStack_308 = puVar14;
                }
                *(ulong *)(puStack_308 + 0x10) = uVar27 + 1;
                *(undefined **)(puStack_308 + uVar27 * 0x10 + 0x20) = puVar30;
                *(undefined **)(puStack_308 + uVar27 * 0x10 + 0x28) = puVar25;
                lVar17 = lStack_188;
                lVar20 = lStack_1c0;
              }
              goto LAB_101272488;
            }
          }
          lVar20 = lStack_1f0;
          func_0x000107c61428(unaff_x20 + lStack_1f0,&puStack_160,0x21,0);
          uVar16 = *(undefined8 *)(unaff_x20 + lVar20);
          func_0x000107c61558(uVar16);
          apcStack_118[0] = *(code **)(unaff_x20 + lVar20);
          *(undefined8 *)(unaff_x20 + lVar20) = 0x8000000000000000;
          func_0x000101276e1c(lVar31 + 1,uVar27,uVar16);
          *(code **)(unaff_x20 + lVar20) = apcStack_118[0];
          func_0x000107c614a8(&puStack_160);
          func_0x000107c61174();
          puVar30 = puStack_298;
          func_0x000107c61558();
          if (((ulong)puVar30 & 1) == 0) {
            puVar30 = (undefined *)0x0;
            FUN_101274788(0,*(long *)(puStack_298 + 0x10) + 1,1);
            puStack_298 = puVar30;
          }
          uVar21 = *(ulong *)(puStack_298 + 0x10);
          if (*(ulong *)(puStack_298 + 0x18) >> 1 <= uVar21) {
            puVar30 = (undefined *)(ulong)(1 < *(ulong *)(puStack_298 + 0x18));
            FUN_101274788(puVar30,uVar21 + 1,1,puStack_298);
            puStack_298 = puVar30;
          }
          *(ulong *)(puStack_298 + 0x10) = uVar21 + 1;
          *(ulong *)(puStack_298 + uVar21 * 0x18 + 0x20) = uStack_1c8;
          *(ulong *)(puStack_298 + uVar21 * 0x18 + 0x28) = uVar26;
          *(ulong *)(puStack_298 + uVar21 * 0x18 + 0x30) = uVar27;
          func_0x000107c61170(uVar26);
          lVar17 = lStack_188;
          lVar20 = lStack_1c0;
        }
        else {
          ppuVar34 = &puStack_160;
          func_0x000107c61428(unaff_x20 + lVar17,ppuVar34,0x21,0);
          uVar21 = uVar27;
          func_0x0001000a7158(uVar27);
          if (((ulong)ppuVar34 & 1) == 0) {
            uVar16 = 1;
            lVar19 = lStack_190;
            param_1 = dVar38;
          }
          else {
            iVar6 = (int)*(undefined8 *)(unaff_x20 + lVar17);
            func_0x000107c61558();
            apcStack_118[0] = *(code **)(unaff_x20 + lVar17);
            *(undefined8 *)(unaff_x20 + lVar17) = 0x8000000000000000;
            if (iVar6 == 0) {
              FUN_101275d0c();
            }
            pcVar24 = apcStack_118[0];
            lVar19 = lStack_190;
            (**(code **)(lVar37 + 0x20))
                      (lVar8,*(long *)(apcStack_118[0] + 0x38) + *(long *)(lVar37 + 0x48) * uVar21,
                       lStack_190);
            func_0x000101275a30(uVar21,pcVar24);
            uVar16 = *(undefined8 *)(unaff_x20 + lVar17);
            *(code **)(unaff_x20 + lVar17) = pcVar24;
            func_0x000107c6142c(uVar16);
            uVar16 = 0;
            lVar20 = lStack_1c0;
            param_1 = dVar38;
          }
          (**(code **)(lVar37 + 0x38))(lVar8,uVar16,1,lVar19);
          func_0x000107c614a8(&puStack_160);
          lVar31 = lVar8;
          (**(code **)(lVar37 + 0x30))(lVar8,1,lVar19);
          lVar17 = lStack_288;
          if ((int)lVar31 == 1) {
            func_0x0001012778ec(lVar8,0x112d373d8,&UNK_10d9014c0);
          }
          else {
            (**(code **)(lVar37 + 0x20))(lStack_288,lVar8,lVar19);
            func_0x000107c5ee68(lVar17);
            dVar38 = param_1 * 1000.0;
            if (0x7fefffffffffffff < (ulong)ABS(dVar38)) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x1012728f8);
              (*pcVar24)();
            }
            if (dVar38 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x1012728fc);
              (*pcVar24)();
            }
            param_1 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar38) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x101272900);
              (*pcVar24)();
            }
            puVar25 = *(undefined **)(uVar26 + lStack_180);
            func_0x000107c615f0(puVar25);
            func_0x000107c5effc(0xd000000000000013,(ulong)pcStack_258 | 0x8000000000000000);
            puVar30 = puVar25;
            func_0x000107c50648();
            if ((int)puVar30 == 0) {
LAB_101270f54:
              func_0x000107c615e8(puVar25);
              lVar37 = -0x5d00000000000000;
              ppuVar34 = (undefined **)0x9480e2;
            }
            else {
              puVar30 = puVar25;
              func_0x000107c615f0();
              func_0x000107c4e5b8();
              func_0x000107c61104(puVar25);
              if (puVar30 == (undefined *)0x0) goto LAB_101270f54;
              puVar14 = puVar30;
              func_0x000107c615f0();
              func_0x000107c614f0();
              lVar37 = 0x112d6cac8;
              puStack_160 = puVar14;
              func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
              ppuVar34 = &puStack_160;
              func_0x000107c5fb18();
              func_0x000107c615e8(puVar25);
              func_0x000107c615e8(puVar30);
            }
            if (((ppuVar34 == (undefined **)0x9480e2) && (lVar37 == -0x5d00000000000000)) ||
               (ppuVar9 = ppuVar34,
               func_0x000107c605b8(ppuVar34,lVar37,0x9480e2,0xa300000000000000,0),
               ((ulong)ppuVar9 & 1) != 0)) {
              func_0x000107c6142c(lVar37);
              func_0x000107c614f0();
              lVar37 = 0x112d6cc58;
              puStack_160 = puVar25;
              func_0x0001000285a8(0x112d6cc58,&UNK_10d92f858);
              ppuVar34 = &puStack_160;
              func_0x000107c5fb18(ppuVar34,lVar37);
            }
            func_0x000107c5fadc(ppuVar34,lVar37);
            func_0x000107c6142c(lVar37);
            func_0x000108c7a8b8(uStack_260,ppuVar34,(long)dVar38);
            func_0x000107c61170(ppuVar34);
            lVar37 = lStack_1f0;
            ppuVar34 = &puStack_160;
            func_0x000107c61428(unaff_x20 + lStack_1f0,ppuVar34,0x20,0);
            lVar20 = lStack_1c0;
            lVar37 = *(long *)(unaff_x20 + lVar37);
            if (*(long *)(lVar37 + 0x10) == 0) {
              lVar37 = 0;
              uVar16 = 0xd000000000000019;
              pcVar28 = pcStack_2b0;
            }
            else {
              uVar21 = uVar27;
              func_0x0001000a7158();
              if (((ulong)ppuVar34 & 1) == 0) {
                lVar37 = 0;
              }
              else {
                lVar37 = *(long *)(*(long *)(lVar37 + 0x38) + uVar21 * 8);
              }
              func_0x0001000a7158(uVar27);
              uVar16 = 0xd00000000000001d;
              pcVar28 = pcStack_2e0;
              if (((ulong)ppuVar34 & 1) == 0) {
                uVar16 = 0xd000000000000019;
                pcVar28 = pcStack_2b0;
              }
            }
            func_0x000107c614a8(&puStack_160);
            if (lVar37 < 2) {
              if (lVar37 == 0) {
                uVar29 = 0xe100000000000000;
                uVar32 = 0x30;
              }
              else if (lVar37 == 1) {
                uVar29 = 0xe100000000000000;
                uVar32 = 0x31;
              }
              else {
LAB_101271598:
                uVar29 = 0xe200000000000000;
                uVar32 = 0x2b34;
              }
            }
            else if (lVar37 == 2) {
              uVar29 = 0xe100000000000000;
              uVar32 = 0x32;
            }
            else {
              if (lVar37 != 3) goto LAB_101271598;
              uVar29 = 0xe100000000000000;
              uVar32 = 0x33;
            }
            func_0x000107c5fadc(uVar16,(ulong)pcVar28 | 0x8000000000000000);
            func_0x000107c6142c((ulong)pcVar28 | 0x8000000000000000);
            func_0x000107c5fadc(uVar32,uVar29);
            func_0x000107c6142c(uVar29);
            func_0x000108c7aba0(uStack_260,uVar16,uVar32,(long)dVar38);
            func_0x000107c61170(uVar16);
            func_0x000107c61170(uVar32);
            lVar19 = lStack_190;
            lVar37 = lStack_1a0;
            (**(code **)(lStack_1a0 + 8))(lStack_288,lStack_190);
            lVar8 = lStack_1e8;
          }
          func_0x000107c61428(unaff_x20 + lStack_218,&puStack_160,0x21,0);
          FUN_101274d60(uVar27);
          func_0x000107c614a8(&puStack_160);
          func_0x000107c61428(unaff_x20 + lStack_228,&puStack_160,0x21,0);
          FUN_101274d60(uVar27);
          func_0x000107c614a8(&puStack_160);
          func_0x000107c61428(unaff_x20 + lStack_1f0,&puStack_160,0x21,0);
          func_0x000101275838(uVar27);
          func_0x000107c614a8(&puStack_160);
LAB_101271b30:
          lVar17 = lStack_188;
          if (!bVar5) {
            func_0x000107c61170(uVar26);
            lVar17 = lStack_188;
            if (uVar35 == uStack_210) break;
            goto LAB_101270bac;
          }
LAB_101272488:
          func_0x000107c5ef7c(uStack_1c8);
          func_0x000107c58d90(*(undefined8 *)(uVar26 + lStack_180));
          func_0x000107c61170(uVar26);
        }
      } while (uVar35 != uStack_210);
    }
    func_0x000107c6142c(uStack_318);
    func_0x000107c6142c(lVar7);
    puVar30 = puStack_308;
    if (*(long *)(puStack_308 + 0x10) != 0) {
      uVar16 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010ef322c0);
      func_0x000108c7a5d0(uStack_260,uVar16,*(undefined8 *)(puVar30 + 0x10));
      func_0x000107c61170(uVar16);
    }
    FUN_101272f7c(puStack_298);
    lVar8 = *(long *)(puStack_2a0 + 0x10);
    dVar38 = *(double *)(unaff_x20 + _DAT_1137ff2c8);
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c3ec60(uVar16);
    func_0x000107c609cc();
    uVar18 = *(ulong *)(unaff_x20 + lStack_220);
    puVar30 = &UNK_10d92f868;
    func_0x000107c614e0(&UNK_10d92f868);
    lVar37 = lStack_248;
    if (uVar18 >> 0x3e == 0) {
      uVar26 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar26 = uVar18 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar18) {
        uVar26 = uVar18;
      }
      func_0x000107c60480();
    }
    if (uVar26 == 0) {
      func_0x000107c61574(puVar30);
      puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(uVar18);
      func_0x000100dd4260(0,uVar26 & ((long)uVar26 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x101272b20);
        (*pcVar24)();
      }
      uVar35 = 0;
      do {
        puVar25 = puStack_160;
        if ((uVar18 & 0xc000000000000001) == 0) {
          uVar27 = *(ulong *)(uVar18 + uVar35 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar27 = uVar35;
          FUN_10125ff50(uVar35,uVar18);
        }
        auStack_130[0] = uVar27;
        func_0x000107c61174();
        func_0x000107c614bc(apcStack_118,auStack_130,puVar30);
        func_0x000107c61170(uVar27);
        func_0x000107c61170(uVar27);
        pcVar24 = apcStack_118[0];
        uVar27 = *(ulong *)(puVar25 + 0x10);
        puStack_160 = puVar25;
        if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar27) {
          func_0x000100dd4260(1 < *(ulong *)(puVar25 + 0x18),uVar27 + 1,1);
        }
        puVar25 = puStack_160;
        uVar35 = uVar35 + 1;
        *(ulong *)(puStack_160 + 0x10) = uVar27 + 1;
        *(code **)(puStack_160 + uVar27 * 8 + 0x20) = pcVar24;
      } while (uVar26 != uVar35);
      func_0x000107c61574(puVar30);
      func_0x000107c6142c(uVar18);
      lVar37 = lStack_248;
    }
    FUN_101269578(0,0);
    uVar18 = *(ulong *)(unaff_x20 + lStack_220);
    if (uVar18 >> 0x3e == 0) {
      uVar26 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar26 = uVar18 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar18) {
        uVar26 = uVar18;
      }
      func_0x000107c60480();
      if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x101272b18);
        (*pcVar24)();
      }
    }
    if (uVar26 != 0) {
      pcVar24 = *(code **)(lStack_1b8 + 0x10);
      lVar7 = 4;
      do {
        lVar20 = lStack_1b0;
        uVar18 = uStack_1d8;
        uVar27 = lVar7 - 4;
        (*pcVar24)(uStack_1d8,lVar37,lStack_1b0);
        uVar35 = uVar27;
        func_0x000107c5ef88();
        (**(code **)(lStack_1b8 + 8))(uVar18,lVar20);
        lVar20 = lStack_220;
        if ((uVar35 & 1) == 0) {
          if (*(ulong *)(puVar25 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x101272abc);
            (*pcVar24)();
          }
          lVar17 = *(long *)(puVar25 + lVar7 * 8);
          func_0x000107c61428(unaff_x20 + lStack_220,&puStack_160,0x20,0);
          uVar18 = *(ulong *)(unaff_x20 + lVar20);
          if ((uVar18 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x101272ac0);
              (*pcVar24)();
            }
            uVar18 = *(ulong *)(uVar18 + lVar7 * 8);
            func_0x000107c61174();
          }
          else {
            uVar18 = uVar27;
            FUN_10125ff50();
          }
          func_0x000107c614a8(&puStack_160);
          lVar37 = uVar18 + _DAT_112d6cd38;
          func_0x000107c61428(lVar37,apcStack_118,0,0);
          lVar37 = *(long *)(lVar37 + 0x20);
          func_0x000107c61434(lVar37);
          func_0x000107c61170(uVar18);
          lVar20 = *(long *)(lVar37 + 0x10);
          func_0x000107c6142c(lVar37);
          lVar37 = lStack_248;
          if (lVar17 != lVar20) {
            func_0x000107c5ef7c(uVar27);
            lVar20 = lStack_220;
            func_0x000107c61428(unaff_x20 + lStack_220,&puStack_160,0x20,0);
            uVar18 = *(ulong *)(unaff_x20 + lVar20);
            if ((uVar18 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
                pcVar24 = (code *)SoftwareBreakpoint(1,0x101272ac4);
                (*pcVar24)();
              }
              uVar27 = *(ulong *)(uVar18 + lVar7 * 8);
              func_0x000107c61174();
            }
            else {
              FUN_10125ff50();
            }
            func_0x000107c614a8(&puStack_160);
            uVar32 = *(undefined8 *)(uVar27 + _DAT_112d6cd48);
            func_0x000107c615f0(uVar32);
            func_0x000107c61170(uVar27);
            func_0x000107c58d90(uVar32);
            func_0x000107c615e8(uVar32);
          }
        }
        lVar7 = lVar7 + 1;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    func_0x000107c6142c(puVar25);
    lVar7 = _DAT_112d6caf8;
    uVar32 = *(undefined8 *)(unaff_x20 + lStack_220);
    func_0x000107c61428(unaff_x20 + _DAT_112d6caf8,auStack_130,1,0);
    uVar29 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined8 *)(unaff_x20 + lVar7) = uVar32;
    func_0x000107c61434(uVar32);
    func_0x000107c6142c(uVar29);
    lVar20 = lStack_1b0;
    lVar7 = lStack_1b8;
    uVar18 = uStack_1d8;
    uVar32 = 0x3fb999999999999a;
    if (ABS(dVar38 - param_1) <= 0.1) {
      uVar26 = uStack_1d8;
      (**(code **)(lStack_1b8 + 0x10))(uStack_1d8,lVar37,lStack_1b0);
      func_0x000107c5ef84();
      (**(code **)(lVar7 + 8))(uVar18,lVar20);
      lVar7 = lStack_1a0;
      if ((uVar26 & 1) == 0) {
        puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar30 = &UNK_11039a730;
        func_0x000107c613fc(&UNK_11039a730,0x20,7);
        *(long *)(puVar30 + 0x10) = unaff_x20;
        *(long *)(puVar30 + 0x18) = lVar37;
        puVar25 = &UNK_11039a758;
        func_0x000107c613fc(&UNK_11039a758,0x20,7);
        pcVar24 = FUN_10127796c;
        *(code **)(puVar25 + 0x10) = FUN_10127796c;
        *(undefined **)(puVar25 + 0x18) = puVar30;
        pcStack_140 = FUN_101277974;
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_158 = (undefined *)0x42000000;
        puStack_150 = &UNK_10006eb60;
        puStack_148 = &UNK_11039a770;
        ppuVar34 = &puStack_160;
        puStack_138 = puVar25;
        func_0x000107c60bc4(ppuVar34);
        puVar14 = puStack_138;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(puVar25);
        func_0x000107c61574(puVar14);
        func_0x000107c4e5fc(puVar12);
        func_0x000107c60bd0(ppuVar34);
        puVar14 = puVar25;
        func_0x000107c61544(puVar25,"",0x66,0x289,0x2c,1);
        func_0x000107c61574(puVar25);
        if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x101272f7c);
          (*pcVar24)();
        }
        pcVar33 = (code *)0x0;
        puVar25 = (undefined *)0x0;
      }
      else {
        pcVar33 = (code *)0x0;
        puVar25 = (undefined *)0x0;
        pcVar24 = (code *)0x0;
        puVar30 = (undefined *)0x0;
      }
    }
    else {
      func_0x000107c3ec60(uVar16);
      func_0x000107c609cc();
      *(undefined8 *)(unaff_x20 + _DAT_112d6cb18) = uVar32;
      puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar25 = &UNK_11039a7a8;
      func_0x000107c613fc(&UNK_11039a7a8,0x18,7);
      *(long *)(puVar25 + 0x10) = unaff_x20;
      puVar30 = &UNK_11039a7d0;
      func_0x000107c613fc(&UNK_11039a7d0,0x20,7);
      pcVar33 = FUN_101277994;
      *(code **)(puVar30 + 0x10) = FUN_101277994;
      *(undefined **)(puVar30 + 0x18) = puVar25;
      pcStack_140 = (code *)0x101277a1c;
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_158 = (undefined *)0x42000000;
      puStack_150 = &UNK_10006eb60;
      puStack_148 = &UNK_11039a7e8;
      ppuVar34 = &puStack_160;
      puStack_138 = puVar30;
      func_0x000107c60bc4(ppuVar34);
      puVar14 = puStack_138;
      func_0x000107c61174(unaff_x20);
      func_0x000107c6157c(puVar30);
      func_0x000107c61574(puVar14);
      func_0x000107c4e5fc(puVar12);
      func_0x000107c60bd0(ppuVar34);
      puVar14 = puVar30;
      func_0x000107c61544(puVar30,"",0x66,0x284,0x2c,1);
      func_0x000107c61574(puVar30);
      if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x101272f78);
        (*pcVar24)();
      }
      pcVar24 = (code *)0x0;
      puVar30 = (undefined *)0x0;
      lVar7 = lStack_1a0;
    }
    FUN_10126ffb4();
    if (lVar8 != 0) {
      FUN_101277280();
    }
    pcVar36 = *(code **)(unaff_x20 + _DAT_112d6cae8);
    if (pcVar36 != (code *)0x0) {
      uVar16 = ((undefined8 *)(unaff_x20 + _DAT_112d6cae8))[1];
      func_0x000107c6157c(uVar16);
      (*pcVar36)();
      func_0x00010058d43c(pcVar36,uVar16);
    }
    puVar14 = puStack_298;
    FUN_1012733bc(puStack_298);
    FUN_101273664();
    (**(code **)(lVar7 + 8))(lStack_198,lStack_190);
    func_0x000107c6142c(puStack_2a0);
    func_0x000107c6142c(puVar14);
    func_0x000107c6142c(puStack_308);
    (**(code **)(lStack_1b8 + 8))(lVar37,lStack_1b0);
    func_0x00010058d43c(pcVar33,puVar25);
    func_0x00010058d43c(pcVar24,puVar30);
  }
  else {
    uVar26 = uVar18;
    func_0x000107c4a61c();
    func_0x000107c61170();
    func_0x00010126cd90();
    if (uVar18 != 0) goto LAB_101270900;
    if ((int)uVar26 == 0) goto LAB_10127091c;
LAB_101272640:
    func_0x000107c61428(unaff_x20 + lVar8,&puStack_160,0x21,0);
    FUN_10125d598(lStack_230);
    func_0x000107c614a8(&puStack_160);
    FUN_101270458();
  }
  return;
}



/* Entry: 101272f7c; end: 1012732b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101272f7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d373d8;
  lStack_b8 = lVar7;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = _DAT_112d6cb30;
  lStack_98 = lVar7 - extraout_x12_00;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x30);
    lStack_b0 = _DAT_112d6cb40;
    lStack_a8 = _DAT_112d6cb38;
    lStack_a0 = lVar7;
    do {
      lVar2 = _DAT_112d6cd48;
      lVar7 = puVar11[-1];
      uStack_88 = *puVar11;
      uVar12 = *(ulong *)(lVar7 + _DAT_112d6cd48);
      uVar4 = uVar12;
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_tearDown_112678508);
      lVar5 = lVar7;
      func_0x000107c61174();
      lStack_90 = lVar5;
      if ((uVar4 & 1) != 0) {
        func_0x000107c5c7a8(uVar12);
      }
      uVar12 = *(ulong *)(lVar7 + lVar2);
      uVar4 = uVar12;
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_setUp_112664a70);
      if ((uVar4 & 1) != 0) {
        func_0x000107c5a1d0(uVar12);
      }
      lVar7 = lStack_98;
      func_0x000107c5eea0(lStack_98);
      (**(code **)(lVar10 + 0x38))(lVar7,0,1,lVar3);
      func_0x000107c61428(unaff_x20 + lVar1,auStack_78,0x21,0);
      lVar2 = lStack_a0;
      func_0x0001003a4c00(lVar7,lStack_a0);
      lVar5 = lVar2;
      (**(code **)(lVar10 + 0x30))(lVar2,1,lVar3);
      lVar7 = lStack_b8;
      if ((int)lVar5 == 1) {
        func_0x0001012778ec(lVar2,0x112d373d8,&UNK_10d9014c0);
        uVar8 = uStack_88;
        lVar7 = lStack_c0;
        FUN_10126fecc(lStack_c0,uStack_88);
        func_0x0001012778ec(lVar7,0x112d373d8,&UNK_10d9014c0);
      }
      else {
        (**(code **)(lVar10 + 0x20))(lStack_b8,lVar2,lVar3);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
        func_0x000107c61558(uVar6);
        uVar8 = uStack_88;
        uStack_80 = *(undefined8 *)(unaff_x20 + lVar1);
        *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
        FUN_101276d0c(lVar7,uStack_88,uVar6);
        *(undefined8 *)(unaff_x20 + lVar1) = uStack_80;
      }
      puVar11 = puVar11 + 3;
      func_0x000107c614a8(auStack_78);
      func_0x000107c61428(unaff_x20 + lStack_a8,auStack_78,0x21,0);
      FUN_101274d60(uVar8);
      func_0x000107c614a8(auStack_78);
      func_0x000107c61428(unaff_x20 + lStack_b0,auStack_78,0x21,0);
      FUN_101274d60(uVar8);
      func_0x000107c614a8(auStack_78);
      func_0x000107c61170(lStack_90);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 1012732b8; end: 1012732ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012732b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6cad0);
  uVar1 = uVar2;
  func_0x000107c3fda4(uVar2);
  func_0x000107c61180();
  func_0x000107c4990c();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 101273300; end: 1012733bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101273300(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5ef8c();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d6cad0);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x10))(puVar3,param_2,lVar1);
  func_0x000107c5ef70();
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  func_0x000107c4fda4(uVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1012733bc; end: 101273663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012733bc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  long unaff_x20;
  long lVar14;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_68;
  
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    pcVar13 = *(code **)(unaff_x20 + _DAT_1137ff2e8);
    if (pcVar13 != (code *)0x0) {
      uVar5 = ((undefined8 *)(unaff_x20 + _DAT_1137ff2e8))[1];
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c6157c();
      func_0x000100403514(0,lVar14,0);
      lVar3 = _DAT_112d6cb28;
      param_1 = param_1 + 0x30;
      do {
        puVar4 = puStack_68;
        lVar6 = *(long *)(param_1 + -8);
        func_0x000107c61428(unaff_x20 + lVar3,&puStack_80,0x20,0);
        if (*(long *)(*(long *)(unaff_x20 + lVar3) + 0x10) != 0) {
          func_0x0001000a7158();
        }
        func_0x000107c614a8(&puStack_80);
        func_0x000107c61174();
        puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puVar2 = PTR___sSiN_11034deb0;
        puVar7 = PTR___sSiN_11034deb0;
        puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c();
        puStack_80 = puVar7;
        puStack_78 = puVar9;
        func_0x000107c5fb78(0x3a,0xe100000000000000);
        func_0x000107c614f0(*(undefined8 *)(lVar6 + _DAT_112d6cd48));
        uVar10 = 0;
        func_0x000107c60714();
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar10);
        func_0x000107c5fb78(0x3d797274657228,0xe700000000000000);
        func_0x000107c6057c(puVar2,puVar11);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar11);
        func_0x000107c5fb78(0x29,0xe100000000000000);
        func_0x000107c61170(lVar6);
        puVar11 = puStack_78;
        puVar2 = puStack_80;
        uVar1 = *(ulong *)(puVar4 + 0x10);
        puStack_68 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
        }
        puVar4 = puStack_68;
        param_1 = param_1 + 0x18;
        *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_68 + uVar1 * 0x10 + 0x20) = puVar2;
        *(undefined **)(puStack_68 + uVar1 * 0x10 + 0x28) = puVar11;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar10 = 0x112d38270;
      puStack_80 = puStack_68;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar8 = 0x112d38278;
      FUN_1012778a8(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
      uVar12 = 0xe200000000000000;
      func_0x000107c5fa80(0x202c,0xe200000000000000,uVar10,uVar8);
      func_0x000107c61574(puVar4);
      func_0x000107c6142c(uVar12);
      (*pcVar13)();
      func_0x00010058d43c(pcVar13,uVar5);
    }
  }
  return;
}



/* Entry: 101273664; end: 10127413f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101273664(double param_1)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long unaff_x20;
  code *pcVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  double dVar27;
  undefined1 auStack_1c0 [12];
  uint uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  long lStack_148;
  code *pcStack_140;
  code *pcStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar4 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  lStack_150 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d373d8;
  puStack_158 = auStack_1c0 + -extraout_x8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar19 = (long)(auStack_1c0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar26 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar23 - extraout_x12_01;
  lStack_160 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_02;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar24 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_180 = lVar24 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = (lVar24 - extraout_x12_03) - extraout_x12_04;
  uStack_168 = uVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar15 - extraout_x12_05;
  lStack_148 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_06;
  lStack_108 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = _DAT_112d6cb48;
  lVar16 = lVar16 - extraout_x12_07;
  uVar6 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d6cb48) != 0) {
    func_0x000107c498f8();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar6);
  if (*(char *)(unaff_x20 + _DAT_1137ff2d8) == '\x01') {
    lStack_1a0 = lVar4;
    lStack_198 = lVar19;
    lStack_188 = lVar23;
    func_0x000107c5eea0(lVar16);
    pcStack_140 = *(code **)(lVar22 + 0x38);
    (*pcStack_140)(lVar14,1,1,lVar5);
    lVar4 = _DAT_112d6caf0;
    func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_90,0,0);
    uStack_128 = *(ulong *)(unaff_x20 + lVar4);
    if (uStack_128 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uStack_128 & 0xffffffffffffff8) + 0x10);
      lVar4 = _DAT_112d6cb38;
      lVar19 = _DAT_112d6cb40;
      uVar9 = uStack_128;
    }
    else {
      uVar15 = uStack_128 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uStack_128) {
        uVar15 = uStack_128;
      }
      func_0x000107c60480();
      lVar4 = _DAT_112d6cb38;
      lVar19 = _DAT_112d6cb40;
      uVar9 = uStack_128;
    }
    _DAT_112d6cb38 = lVar4;
    _DAT_112d6cb40 = lVar19;
    uStack_128 = uVar9;
    if (uVar15 != 0) {
      uStack_f8 = uVar9 & 0xc000000000000001;
      lStack_1b0 = lVar16;
      lStack_1a8 = lVar24;
      lStack_130 = lVar14;
      lStack_110 = _DAT_112d6cb30;
      lStack_100 = lVar22;
      func_0x000107c61434(uVar9);
      lStack_170 = lVar19;
      func_0x000107c61428(unaff_x20 + lVar19,auStack_a8,0,0);
      lStack_178 = lVar4;
      func_0x000107c61428(unaff_x20 + lVar4,auStack_c0,0,0);
      uVar25 = 0;
      uStack_118 = uVar9 & 0xffffffffffffff8;
      lStack_120 = uVar9 + 0x20;
      uVar21 = uStack_168;
      lVar4 = lStack_160;
      lStack_190 = lVar26;
      do {
        if (uStack_f8 == 0) {
          if (*(ulong *)(uStack_118 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x101274120);
            (*pcVar20)();
          }
          uVar7 = *(ulong *)(lStack_120 + uVar25 * 8);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar25;
          FUN_10125ff50(uVar25,uVar9);
        }
        bVar3 = SCARRY8(uVar25,1);
        uVar25 = uVar25 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10127411c);
          (*pcVar20)();
        }
        lVar24 = *(long *)(uVar7 + _DAT_112d6cd48);
        lVar22 = lVar24;
        func_0x000107c41254();
        lVar14 = lStack_110;
        if (lVar22 == 1) {
          ppuVar13 = &puStack_f0;
          func_0x000107c61428(unaff_x20 + lStack_110,ppuVar13,0x20,0);
          lVar14 = *(long *)(unaff_x20 + lVar14);
          if ((*(long *)(lVar14 + 0x10) == 0) ||
             (lVar19 = lVar24, func_0x0001000a7158(lVar24), lVar16 = lStack_100, lVar22 = lStack_148
             , ((ulong)ppuVar13 & 1) == 0)) {
            func_0x000107c614a8(&puStack_f0);
            goto LAB_1012739ec;
          }
          (**(code **)(lStack_100 + 0x10))
                    (lStack_148,*(long *)(lVar14 + 0x38) + *(long *)(lStack_100 + 0x48) * lVar19,
                     lVar5);
          uVar9 = uStack_128;
          pcStack_138 = *(code **)(lVar16 + 0x20);
          (*pcStack_138)(lStack_108,lVar22,lVar5);
          func_0x000107c614a8(&puStack_f0);
          lVar14 = *(long *)(unaff_x20 + lStack_170);
          if (*(long *)(lVar14 + 0x10) != 0) {
            uVar8 = *(ulong *)(lVar14 + 0x28);
            func_0x000107c60688(uVar8,lVar24);
            uVar17 = -1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            uVar8 = uVar8 & (uVar17 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar14 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
              do {
                if (*(long *)(*(long *)(lVar14 + 0x30) + uVar8 * 8) == lVar24) {
                  func_0x000107c61170(uVar7);
                  (**(code **)(lStack_100 + 8))(lStack_108,lVar5);
                  goto LAB_1012739f4;
                }
                uVar8 = uVar8 + 1 & ~uVar17;
              } while ((*(ulong *)(lVar14 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
            }
          }
          lVar14 = *(long *)(unaff_x20 + lStack_178);
          param_1 = 3.0;
          if (*(long *)(lVar14 + 0x10) != 0) {
            uVar9 = *(ulong *)(lVar14 + 0x28);
            func_0x000107c60688(uVar9,lVar24);
            uVar8 = -1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            uVar9 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar14 + 0x38 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
              do {
                if (*(long *)(*(long *)(lVar14 + 0x30) + uVar9 * 8) == lVar24) {
                  param_1 = 10.0;
                  break;
                }
                uVar9 = uVar9 + 1 & ~uVar8;
              } while ((*(ulong *)(lVar14 + 0x38 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
            }
          }
          func_0x000107c5ee6c(uVar21);
          (*pcStack_140)(lVar4,1,1,lVar5);
          puVar2 = puStack_158;
          iVar1 = *(int *)(lStack_150 + 0x30);
          func_0x0001009f0578(lStack_130,puStack_158);
          func_0x0001009f0578(lVar4,puVar2 + iVar1);
          pcVar20 = *(code **)(lStack_100 + 0x30);
          puVar10 = puVar2;
          (*pcVar20)(puVar2,1,lVar5);
          lVar14 = lStack_188;
          if ((int)puVar10 == 1) {
            func_0x0001012778ec(lVar4,0x112d373d8,&UNK_10d9014c0);
            puVar10 = puVar2 + iVar1;
            (*pcVar20)(puVar10,1,lVar5);
            if ((int)puVar10 != 1) {
LAB_101273d30:
              func_0x0001012778ec(puVar2,0x112d373d0,&UNK_10d90f8f0);
              goto LAB_101273d48;
            }
            func_0x000107c61170(uVar7);
            func_0x0001012778ec(puVar2,0x112d373d8,&UNK_10d9014c0);
            pcVar18 = *(code **)(lStack_100 + 8);
LAB_101273e98:
            (*pcVar18)(lStack_108,lVar5);
LAB_101273eac:
            uVar9 = uStack_128;
            lVar14 = lStack_130;
            func_0x0001012778ec(lStack_130,0x112d373d8,&UNK_10d9014c0);
            (*pcStack_138)(lVar14,uVar21,lVar5);
            (*pcStack_140)(lVar14,0,1,lVar5);
          }
          else {
            func_0x0001009f0578(puVar2,lStack_188);
            puVar10 = puVar2 + iVar1;
            (*pcVar20)(puVar10,1,lVar5);
            lVar4 = lStack_160;
            lVar22 = lStack_180;
            if ((int)puVar10 == 1) {
              func_0x0001012778ec(lStack_160,0x112d373d8,&UNK_10d9014c0);
              (**(code **)(lStack_100 + 8))(lVar14,lVar5);
              uVar21 = uStack_168;
              goto LAB_101273d30;
            }
            (*pcStack_138)(lStack_180,puVar2 + iVar1,lVar5);
            uVar6 = 0x112d373e0;
            func_0x00010127792c(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                                PTR___s10Foundation4DateVSQAAMc_110350be0);
            lVar4 = lVar14;
            func_0x000107c5fab8(lVar14,lVar22,lVar5,uVar6);
            uStack_1b4 = (uint)lVar4;
            pcVar18 = *(code **)(lStack_100 + 8);
            (*pcVar18)(lVar22,lVar5);
            lVar4 = lStack_160;
            func_0x0001012778ec(lStack_160,0x112d373d8,&UNK_10d9014c0);
            (*pcVar18)(lVar14,lVar5);
            func_0x0001012778ec(puVar2,0x112d373d8,&UNK_10d9014c0);
            uVar21 = uStack_168;
            if ((uStack_1b4 & 1) != 0) {
              func_0x000107c61170(uVar7);
              goto LAB_101273e98;
            }
LAB_101273d48:
            lVar14 = lStack_190;
            func_0x0001009f0578(lStack_130,lStack_190);
            lVar22 = lVar14;
            (*pcVar20)(lVar14,1,lVar5);
            if ((int)lVar22 == 1) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x101274140);
              (*pcVar20)();
            }
            uVar8 = uVar21;
            func_0x000107c5ee78(uVar21,lVar14);
            func_0x000107c61170(uVar7);
            pcVar20 = *(code **)(lStack_100 + 8);
            (*pcVar20)(lStack_108,lVar5);
            (*pcVar20)(lVar14,lVar5);
            uVar9 = uStack_128;
            if ((uVar8 & 1) != 0) goto LAB_101273eac;
            (*pcVar20)(uVar21,lVar5);
          }
        }
        else {
LAB_1012739ec:
          func_0x000107c61170(uVar7);
        }
LAB_1012739f4:
      } while (uVar25 != uVar15);
      func_0x000107c6142c(uVar9);
      lVar14 = lStack_130;
      lVar22 = lStack_100;
      lVar24 = lStack_1a8;
      lVar16 = lStack_1b0;
    }
    lVar4 = lStack_198;
    func_0x0001009f0578(lVar14,lStack_198);
    lVar19 = lVar4;
    (**(code **)(lVar22 + 0x30))(lVar4,1,lVar5);
    if ((int)lVar19 == 1) {
      func_0x0001012778ec(lVar14,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar22 + 8))(lVar16,lVar5);
      func_0x0001012778ec(lVar4,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar22 + 0x20))(lVar24,lVar4,lVar5);
      func_0x000107c5ee68(lVar16);
      dVar27 = 0.1;
      if (0.1 < param_1) {
        dVar27 = param_1;
      }
      puVar11 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c61168();
      puVar12 = &UNK_11039a6b8;
      func_0x000107c613fc(&UNK_11039a6b8,0x18,7);
      func_0x000107c61614(puVar12 + 0x10);
      pcStack_d0 = FUN_10127799c;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0x42000000;
      pcStack_e0 = FUN_100fef460;
      puStack_d8 = &UNK_11039a810;
      ppuVar13 = &puStack_f0;
      puStack_c8 = puVar12;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c61574(puStack_c8);
      func_0x000107c51924(dVar27);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar13);
      puVar12 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      func_0x000107c4c190();
      func_0x000107c61180();
      func_0x000107c3d8e0();
      func_0x000107c61170(puVar12);
      pcVar20 = *(code **)(lVar22 + 8);
      (*pcVar20)(lVar24,lVar5);
      func_0x0001012778ec(lVar14,0x112d373d8,&UNK_10d9014c0);
      (*pcVar20)(lVar16,lVar5);
      uVar6 = *(undefined8 *)(unaff_x20 + lStack_1a0);
      *(undefined **)(unaff_x20 + lStack_1a0) = puVar11;
      func_0x000107c61170(uVar6);
    }
  }
  return;
}



/* Entry: 101274140; end: 1012741a7;  */

void FUN_101274140(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + *param_3);
    *(undefined8 *)(param_2 + *param_3) = 0;
    func_0x000107c61170(uVar1);
    FUN_101270584();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1012741a8; end: 10127437b;  */

void FUN_1012741a8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x0001000285a8(0x112d6c670,&UNK_10d92f450);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) == 0) {
    func_0x000107c61574(lVar9);
LAB_101274354:
    *unaff_x20 = lVar4;
    return;
  }
  lVar1 = lVar9 + 0x38;
  uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar4 != lVar9) || (lVar1 + uVar5 * 8 <= lVar4 + 0x38U)) {
    func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
  uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(lVar9 + 0x38);
  if (uVar5 == 0) goto LAB_1012742cc;
  do {
    uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar5 = uVar5 - 1 & uVar5;
    while( true ) {
      lVar8 = *(long *)(lVar10 + 0x48) * (LZCOUNT(uVar7) | lVar11 << 6);
      (**(code **)(lVar10 + 0x10))
                (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(lVar9 + 0x30) + lVar8,lVar3);
      (**(code **)(lVar10 + 0x20))
                (*(long *)(lVar4 + 0x30) + lVar8,
                 auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      if (uVar5 != 0) break;
LAB_1012742cc:
      do {
        lVar8 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10127437c);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar8) {
          func_0x000107c61574(lVar9);
          goto LAB_101274354;
        }
        uVar5 = *(ulong *)(lVar1 + lVar8 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      lVar11 = lVar8;
    }
  } while( true );
}



/* Entry: 10127437c; end: 1012744bb;  */

void FUN_10127437c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112d6c680,&UNK_10d92f460);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012744bc);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_10127449c;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_10127449c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1012744bc; end: 101274637;  */

undefined * FUN_1012744bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101274638);
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d6cc20;
    func_0x0001000285a8(0x112d6cc20,&UNK_10d92f820);
    lVar5 = 0;
    func_0x000107c5eec8();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101274630);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101274634);
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
  func_0x000107c5eec8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 101274638; end: 10127464b;  */

ulong FUN_101274638(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101274788);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1012748cc(uVar2,uVar4,FUN_10125e684);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101274784);
      (*pcVar1)();
    }
    FUN_10127494c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10127464c; end: 101274787;  */

ulong FUN_10127464c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101274788);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1012748cc(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101274784);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101274788; end: 1012748cb;  */

undefined * FUN_101274788(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012748cc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d6cc60;
    func_0x0001000285a8(0x112d6cc60,&UNK_10d92f8b8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d6cc68;
    func_0x0001000285a8(0x112d6cc68,&UNK_10d92f8c0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1012748cc; end: 10127494b;  */

undefined * FUN_1012748cc(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10127494c; end: 101274b5b;  */

long FUN_10127494c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101274a60);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101274a64);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1012779bc(0,0x112d6c5a0,&PTR_PTR_1126a67f0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1012779bc(0,0x112d6c5a0,&PTR_PTR_1126a67f0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101274a5c);
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



/* Entry: 101274b5c; end: 101274d5f;  */

void FUN_101274b5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *unaff_x20;
  uVar6 = *(ulong *)(uVar7 + 0x28);
  uVar3 = 0x112d6c668;
  func_0x00010127792c(0x112d6c668);
  func_0x000107c5fa4c(uVar6,lVar1,uVar3);
  uVar4 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar3 = 1;
  }
  else {
    lVar5 = *(long *)(lVar10 + 0x48);
    pcVar8 = *(code **)(lVar10 + 0x10);
    do {
      lVar11 = lVar5 * uVar6;
      (*pcVar8)(puVar9,*(long *)(uVar7 + 0x30) + lVar11,lVar1);
      uVar3 = 0x112d68098;
      func_0x00010127792c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      puVar2 = puVar9;
      func_0x000107c5fab8(puVar9,param_2,lVar1,uVar3);
      (**(code **)(lVar10 + 8))(puVar9,lVar1);
      if (((ulong)puVar2 & 1) != 0) {
        uVar4 = *unaff_x20;
        func_0x000107c61558();
        uVar7 = *unaff_x20;
        if ((uVar4 & 1) == 0) {
          FUN_1012741a8();
        }
        (**(code **)(lVar10 + 0x20))(param_1,*(long *)(uVar7 + 0x30) + lVar11,lVar1);
        FUN_101274e40(uVar6);
        uVar3 = 0;
        *unaff_x20 = uVar7;
        goto LAB_101274d1c;
      }
      uVar6 = uVar6 + 1 & ~uVar4;
    } while ((*(ulong *)(uVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
    uVar3 = 1;
  }
LAB_101274d1c:
  (**(code **)(lVar10 + 0x38))(param_1,uVar3,1,lVar1);
  return;
}



/* Entry: 101274d60; end: 101274e3f;  */

undefined8 FUN_101274d60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *unaff_x20;
  uVar1 = *(ulong *)(uVar3 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar3 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(uVar3 + 0x30) + uVar1 * 8) == param_1) {
        uVar2 = *unaff_x20;
        func_0x000107c61558();
        uVar3 = *unaff_x20;
        if ((uVar2 & 1) == 0) {
          FUN_10127437c();
        }
        uVar4 = *(undefined8 *)(*(long *)(uVar3 + 0x30) + uVar1 * 8);
        FUN_101275094(uVar1);
        *unaff_x20 = uVar3;
        return uVar4;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(uVar3 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101274e40; end: 101275093;  */

void FUN_101274e40(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lStack_70 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar12 = *unaff_x20;
  lVar11 = lVar12 + 0x38;
  uVar6 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = 1L << (uVar10 & 0x3f);
  if ((uVar8 & *(ulong *)(lVar11 + (uVar10 >> 6) * 8)) == 0) {
    uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar11 + uVar6) = *(ulong *)(lVar11 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    lStack_68 = lVar11;
    func_0x000107c6026c(param_1,lVar11,uVar6);
    if ((*(ulong *)(lStack_68 + (uVar10 >> 6) * 8) & uVar8) != 0) {
      uVar8 = uVar9 + 1 & uVar6;
      lVar11 = *(long *)(lStack_70 + 0x48);
      pcStack_78 = *(code **)(lStack_70 + 0x10);
      do {
        lVar7 = lVar11 * uVar10;
        (*pcStack_78)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      *(long *)(lVar12 + 0x30) + lVar7,lVar3);
        uVar9 = *(ulong *)(lVar12 + 0x28);
        uVar4 = 0x112d6c668;
        func_0x00010127792c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                            PTR___s10Foundation4UUIDVSHAAMc_110350c48);
        func_0x000107c5fa4c(uVar9,lVar3,uVar4);
        (**(code **)(lStack_70 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
        uVar9 = uVar9 & uVar6;
        if ((long)param_1 < (long)uVar8) {
          if (uVar8 <= uVar9 || (long)uVar9 <= (long)param_1) {
LAB_101274fd4:
            lVar5 = lVar11 * param_1;
            uVar9 = *(long *)(lVar12 + 0x30) + lVar5;
            lVar1 = *(long *)(lVar12 + 0x30) + lVar7;
            param_1 = uVar10;
            if ((lVar5 < lVar7) || ((ulong)(lVar1 + lVar11) <= uVar9)) {
              func_0x000107c61414(uVar9,lVar1,1,lVar3);
            }
            else if (lVar5 - lVar7 != 0) {
              func_0x000107c61410(uVar9,lVar1,1,lVar3);
            }
          }
        }
        else if (uVar8 <= uVar9 && (long)uVar9 <= (long)param_1) goto LAB_101274fd4;
        uVar10 = uVar10 + 1 & uVar6;
      } while ((*(ulong *)(lStack_68 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
    }
    uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lStack_68 + uVar6) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lStack_68 + uVar6);
  }
  if (!SBORROW8(*(long *)(lVar12 + 0x10),1)) {
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + -1;
    *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101275094);
  (*pcVar2)();
}



/* Entry: 101275094; end: 1012751ff;  */

void FUN_101275094(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x38;
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = 1L << (uVar9 & 0x3f);
  if ((uVar10 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar7 = ~uVar7;
    uVar6 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar10) != 0) {
      uVar10 = uVar6 + 1 & uVar7;
      do {
        uVar6 = *(ulong *)(lVar8 + 0x28);
        lVar4 = *(long *)(lVar8 + 0x30);
        puVar2 = (undefined8 *)(lVar4 + uVar9 * 8);
        func_0x000107c60688(uVar6,*puVar2);
        uVar6 = uVar6 & uVar7;
        if ((long)param_1 < (long)uVar10) {
          if (uVar10 <= uVar6 || (long)uVar6 <= (long)param_1) {
LAB_10127516c:
            puVar3 = (undefined8 *)(lVar4 + param_1 * 8);
            if ((param_1 != uVar9) || (puVar2 + 1 <= puVar3)) {
              *puVar3 = *puVar2;
              param_1 = uVar9;
            }
          }
        }
        else if (uVar10 <= uVar6 && (long)uVar6 <= (long)param_1) goto LAB_10127516c;
        uVar9 = uVar9 + 1 & uVar7;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar7);
  }
  if (!SBORROW8(*(long *)(lVar8 + 0x10),1)) {
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101275200);
  (*pcVar5)();
}



/* Entry: 101275200; end: 1012752cb;  */

void FUN_101275200(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1012752cc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1012752cc; end: 101275407;  */

undefined *
FUN_1012752cc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101275408);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1012779bc(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101275408; end: 10127563f;  */

undefined *
FUN_101275408(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10127551c);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101275640; end: 1012758c3;  */

undefined * FUN_101275640(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101275740);
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
    puVar3 = (undefined *)0x112d6cc38;
    func_0x0001000285a8(0x112d6cc38,&UNK_10d92f830);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1012758c4; end: 101275bbf;  */

void FUN_1012758c4(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined8 *)(lVar4 + uVar8 * 8);
      func_0x000107c60688(uVar7,*puVar2);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar9 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_10127598c:
          puVar3 = (undefined8 *)(lVar4 + param_1 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar2 + 1 <= puVar3 || param_1 != uVar8)) {
            *puVar3 = *puVar2;
          }
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar3 + 1 <= puVar2 || param_1 != uVar8)) {
            *puVar2 = *puVar3;
            param_1 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_10127598c;
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101275a30);
  (*pcVar5)();
}



/* Entry: 101275bc0; end: 101275d0b;  */

void FUN_101275bc0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112d6b2e8,&UNK_10d92e620);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_101275c98;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_101275c98:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101275d0c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101275cec;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_101275cec:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101275d0c; end: 10127644f;  */

void FUN_101275d0c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x0001000285a8(0x112d6b2e0,&UNK_10d92e618);
  lVar11 = *unaff_x20;
  lVar4 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c61574(lVar11);
LAB_101275ee4:
    *unaff_x20 = lVar4;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar4 != lVar11) || (lVar1 + uVar6 * 8 <= lVar4 + 0x40U)) {
    func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar7 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar11 + 0x40);
  if (uVar6 == 0) goto LAB_101275e40;
  do {
    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar6 = uVar6 - 1 & uVar6;
    while( true ) {
      uVar8 = LZCOUNT(uVar8) | lVar12 << 6;
      uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar8 * 8);
      lVar10 = *(long *)(lVar5 + 0x48) * uVar8;
      (**(code **)(lVar5 + 0x10))
                (&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(lVar11 + 0x38) + lVar10,lVar3);
      *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) = uVar9;
      (**(code **)(lVar5 + 0x20))
                (*(long *)(lVar4 + 0x38) + lVar10,
                 &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      if (uVar6 != 0) break;
LAB_101275e40:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101275f0c);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar11);
          goto LAB_101275ee4;
        }
        uVar6 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar6 == 0);
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 101276450; end: 1012767f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101276450(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long unaff_x21;
  ulong *puVar22;
  ulong uVar23;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar21 = lVar9 + 1;
      if (lVar21 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(*(long *)(lVar10 + lVar21 * 8) + _DAT_112d6cd40);
        lVar15 = *(long *)(*(long *)(lVar10 + lVar9 * 8) + _DAT_112d6cd40);
        lVar16 = lVar9 + 2;
        lVar19 = lVar12;
        do {
          lVar17 = lVar16;
          lVar21 = lVar7;
          if (lVar7 == lVar17) break;
          lVar21 = *(long *)(*(long *)(lVar10 + lVar17 * 8) + _DAT_112d6cd40);
          bVar3 = lVar19 <= lVar21;
          lVar16 = lVar17 + 1;
          lVar19 = lVar21;
          lVar21 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar21 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767c8);
            (*pcVar2)();
          }
          if (lVar9 < lVar21) {
            puVar8 = (undefined8 *)(lVar10 + lVar21 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar9 * 8);
            lVar16 = lVar21;
            lVar7 = lVar9;
            do {
              puVar8 = puVar8 + -1;
              lVar16 = lVar16 + -1;
              if (lVar7 != lVar16) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767e8);
                  (*pcVar2)();
                }
                uVar18 = *puVar13;
                *puVar13 = *puVar8;
                *puVar8 = uVar18;
              }
              lVar7 = lVar7 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar7 < lVar16);
            lVar7 = param_3[1];
          }
        }
      }
      lVar16 = lVar21;
      if (lVar21 < lVar7) {
        if (SBORROW8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767c4);
          (*pcVar2)();
        }
        if (lVar21 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767cc);
            (*pcVar2)();
          }
          lVar19 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar19 = lVar7;
          }
          if (lVar19 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767d0);
            (*pcVar2)();
          }
          if (lVar21 != lVar19) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar21 * 8 + -8);
            lVar10 = lVar9 - lVar21;
            do {
              lVar12 = *(long *)(lVar7 + lVar21 * 8);
              lVar16 = lVar10;
              plVar20 = plVar14;
              do {
                lVar15 = *plVar20;
                if (*(long *)(lVar15 + _DAT_112d6cd40) <= *(long *)(lVar12 + _DAT_112d6cd40)) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767d4);
                  (*pcVar2)();
                }
                *plVar20 = lVar12;
                plVar20[1] = lVar15;
                bVar3 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                plVar20 = plVar20 + -1;
              } while (bVar3);
              lVar21 = lVar21 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar16 = lVar19;
            } while (lVar21 != lVar19);
          }
        }
      }
      if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767b4);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar23 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar23) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar23 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar23 + 1;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767ec);
        (*pcVar2)();
      }
      FUN_10127686c(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101276784;
      lVar7 = param_3[1];
      lVar9 = lVar16;
    } while (lVar16 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767f4);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar22 = (ulong *)(puVar6 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767f0);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar23 * 0x10);
    lVar21 = *plVar14;
    puVar1 = puVar22 + uVar23 * 2;
    uVar11 = puVar1[1];
    FUN_101276ad4(lVar9 + lVar21 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767b8);
      (*pcVar2)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767bc);
      (*pcVar2)();
    }
    *plVar14 = lVar21;
    plVar14[1] = uVar11;
    uVar11 = *puVar22;
    lVar9 = uVar11 - uVar23;
    if (uVar11 < uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012767c0);
      (*pcVar2)();
    }
    uVar23 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar22 = uVar23;
  }
LAB_101276784:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1012767f4; end: 10127686b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012767f4(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar4 = (long *)(lVar3 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar5 = *(long *)(lVar3 + param_3 * 8);
      lVar6 = param_1;
      plVar7 = plVar4;
      do {
        lVar8 = *plVar7;
        if (*(long *)(lVar8 + _DAT_112d6cd40) <= *(long *)(lVar5 + _DAT_112d6cd40)) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10127686c);
          (*pcVar1)();
        }
        *plVar7 = lVar5;
        plVar7[1] = lVar8;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10127686c; end: 101276ad3;  */

undefined8 FUN_10127686c(ulong *param_1,undefined8 param_2,long *param_3)

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
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101276940;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101276abc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1012769a4:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101276aac);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101276ab4);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101276a94);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101276a98);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101276aa0);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101276aa8);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101276940:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101276a9c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101276aa4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101276ab0);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101276ab8);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1012769a4;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101276ac0);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101276a88);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101276ad4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101276ad4(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101276a8c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101276a90);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101276ad4; end: 101276d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101276ad4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (*(long *)(lVar2 + _DAT_112d6cd40) < *(long *)(*param_4 + _DAT_112d6cd40)) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*(long *)(*plVar5 + _DAT_112d6cd40) < *(long *)(*plVar7 + _DAT_112d6cd40)) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_101276cb0;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_101276cb0:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 101276d0c; end: 101276f0b;  */

void FUN_101276d0c(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x0001000a7158();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101276de8);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x000101276168(lVar4);
    uVar2 = param_2;
    func_0x0001000a7158();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101276d9c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101275d0c();
    lVar4 = *unaff_x20;
    goto joined_r0x000101276dfc;
  }
  lVar4 = *unaff_x20;
joined_r0x000101276dfc:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101276de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * uVar2,param_1,lVar4);
    return;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  lVar7 = *(long *)(lVar4 + 0x38);
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))
            (lVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar2,param_1,lVar5);
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10124b724);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}



/* Entry: 101276f0c; end: 101276f6f;  */

void FUN_101276f0c(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480(uVar1);
  }
  FUN_10127464c(0,uVar1,0,param_1,FUN_10125e6a8,0x101274a64);
  return;
}



/* Entry: 101276f70; end: 1012770d7;  */

ulong FUN_101276f70(undefined8 *param_1,long param_2,ulong param_3)

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
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012770d8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012770cc);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1012779bc(0,0x112d6c5a0,&PTR_PTR_1126a67f0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012770d0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012770d4);
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
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x00010125fd20(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1012770d8; end: 10127727f;  */

void FUN_1012770d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5fe14(lVar2,PTR___sSON_11034d8b8,PTR___sSOSHsWP_11034d8c0);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar1;
    do {
      FUN_10125e974(auStack_40,*puVar3);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 101277280; end: 1012773d7;  */

/* WARNING: Possible PIC construction at 0x0001012773ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101277364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012773b0) */
/* WARNING: Removing unreachable block (ram,0x000101277368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101277280(double param_1,double param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  lVar1 = unaff_x20 + _DAT_112d6cb20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      return;
    }
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
    lVar3 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    func_0x000107c61174(lVar1);
    if ((lVar3 == 0) || (func_0x000107c4a3a8(), (int)lVar3 == 0)) {
      func_0x000107c5c42c(lVar1);
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c404a0(lVar1);
    dVar4 = param_2;
    func_0x000107c3ec60(lVar1);
    func_0x000107c609b0();
    func_0x000107c404f0(lVar1);
    dVar4 = dVar4 - param_1;
    if (dVar4 < 0.0) {
      dVar4 = 0.0;
    }
    if (dVar4 + 1.0 < param_2) {
      func_0x000107c404a0(lVar1);
      func_0x000107c53848(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1012773d8; end: 101277677;  */

undefined8 FUN_1012773d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = 0;
  func_0x0001012776b8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c58cd0();
  func_0x000107c566fc(0,uVar1);
  func_0x000107c566f4(0,uVar1);
  func_0x000107c58d84(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),uVar1);
  uVar2 = 0;
  func_0x000101277698(0);
  func_0x000107c610f8();
  func_0x000107c469ac(0,0,0,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar2);
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c58cd8();
  func_0x000107c526d4(uVar2);
  func_0x000107c52e38(uVar2);
  func_0x000107c5928c(uVar2);
  func_0x000107c53828(uVar2);
  func_0x000107c61170(uVar2);
  uVar4 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010ef32230);
  func_0x000107c520f4(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  FUN_1012779bc(0,0x112d6cc50,&PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
  func_0x000107c614e8();
  uVar4 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
  func_0x000107c4fbdc(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar4 = *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
  func_0x000107c4fbdc(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000101277678(0);
  func_0x000107c614e8();
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010d92f700);
  func_0x000107c4fbd8(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101277678; end: 1012776d7;  */

void FUN_101277678(void)

{
  func_0x000107c61168(&PTR_PTR_1127c0598);
  return;
}



/* Entry: 1012776d8; end: 1012776df;  */

void FUN_1012776d8(void)

{
  if (lRam0000000112d6cc00 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e62b4a4);
  return;
}



/* Entry: 1012776e0; end: 101277717;  */

void FUN_1012776e0(undefined8 param_1)

{
  if (lRam0000000112d6cc00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62b4a4);
  return;
}



/* Entry: 101277718; end: 10127780f;  */

void FUN_101277718(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  puStack_120 = &UNK_10d92f7b0;
  puStack_118 = &UNK_10d92f7c8;
  puStack_110 = &UNK_10d92f7e0;
  puVar2 = PTR___sBbWV_11034d660 + 0x40;
  lVar3 = 0x13f;
  puStack_128 = puVar1;
  puStack_108 = puVar2;
  puStack_100 = puVar2;
  FUN_101277810();
  if (param_2 < 0x40) {
    lStack_f8 = *(long *)(lVar3 + -8) + 0x40;
    puStack_f0 = &UNK_10d92f7f8;
    puStack_e8 = &UNK_10d92f7f8;
    puStack_d0 = &UNK_10d92f7c8;
    puStack_c8 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_b8 = &UNK_10d92f7b0;
    puStack_b0 = &UNK_10d92f7f8;
    puStack_a8 = &UNK_10d92f7f8;
    puStack_a0 = &UNK_10d92f7f8;
    puStack_98 = &UNK_10d92f7e0;
    puStack_70 = &UNK_10d92f7c8;
    puStack_60 = &UNK_10d92f7f8;
    puStack_58 = &UNK_10d92f7c8;
    puStack_e0 = puVar2;
    puStack_d8 = puVar2;
    puStack_c0 = puStack_c8;
    puStack_90 = puVar2;
    puStack_88 = puVar2;
    puStack_80 = puVar2;
    puStack_78 = puVar2;
    puStack_68 = puVar1;
    func_0x000107c61630(param_1,0x100,0x1b,&puStack_128,param_1 + 0x50);
  }
  return;
}



/* Entry: 101277810; end: 101277863;  */

void FUN_101277810(long param_1)

{
  long lVar1;
  
  if (lRam0000000112d6cc10 == 0) {
    lVar1 = 0xff;
    func_0x000107c5eff8();
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112d6cc10 = param_1;
    }
  }
  return;
}



/* Entry: 101277864; end: 101277887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101277864(void)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if ((lVar2 != 0) &&
     (cVar1 = *(char *)(lVar2 + _DAT_1137ff2f0), func_0x000107c61170(), cVar1 == '\x01')) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x00010126e570();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101277888; end: 1012778a7;  */

void FUN_101277888(void)

{
  FUN_101274140();
  return;
}



/* Entry: 1012778a8; end: 10127796b;  */

void FUN_1012778a8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10127796c; end: 101277973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127796c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c5ef8c();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_112d6cad0);
  puVar4 = puVar5;
  (**(code **)(lVar7 + 0x10))(puVar5,uVar2,lVar3);
  func_0x000107c5ef70();
  (**(code **)(lVar7 + 8))(puVar5,lVar3);
  func_0x000107c4fda4(uVar6);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101277974; end: 101277993;  */

void FUN_101277974(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101277994; end: 10127799b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101277994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6cad0);
  uVar1 = uVar2;
  func_0x000107c3fda4(uVar2);
  func_0x000107c61180();
  func_0x000107c4990c();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 10127799c; end: 1012779bb;  */

void FUN_10127799c(void)

{
  FUN_101274140();
  return;
}



/* Entry: 1012779bc; end: 1012779fb;  */

void FUN_1012779bc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1012779fc; end: 101277a1f;  */

void FUN_1012779fc(long param_1,long param_2)

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



/* Entry: 101277a20; end: 101277a23; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4734SCProfile3CollectionViewFlowLayout initWithCoder:] */

undefined1 * FUN_101277a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 101277a24; end: 101277a33; -[_TtC24MyProfile3ImplementationP33_57F3021F4ADF4EACA5E22786B52CBC4725SCProfile3BridgeDummyCell initWithCoder:] */

undefined1 * FUN_101277a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 101277a34; end: 101277b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101277a34(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  lVar1 = _DAT_112d6cad8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112d6cad8,auStack_60,1,0);
    func_0x000107c61604(lVar3 + lVar1,0);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c5c7a8();
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_10126e5b0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c61428(unaff_x20 + 0x18,auStack_78,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_90,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_a8,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 101277b50; end: 101277e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101277b50(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [32];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  *(long *)(unaff_x20 + 0x30) = param_1;
  func_0x000107c615e8(uVar3);
  lVar4 = 0;
  FUN_1012776e0();
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c453e4();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_11039a858;
  func_0x000107c613fc(&UNK_11039a858,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  pcStack_70 = FUN_101277ecc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101277ed4;
  puStack_78 = &UNK_11039a870;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_68);
  func_0x000107c4ee00();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112fdeb18);
    func_0x000107c61428(puVar1,&puStack_90,0,0);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + _DAT_112d6cae8);
    uVar3 = *puVar2;
    uVar8 = puVar2[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
    func_0x000100b64c10();
    func_0x00010058d43c(uVar3,uVar8);
    puVar1 = (undefined8 *)(param_1 + _DAT_112fdeb20);
    func_0x000107c61428(puVar1,auStack_a8,0,0);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + _DAT_1137ff2e8);
    uVar3 = *puVar2;
    uVar8 = puVar2[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
    func_0x000100b64c10();
    func_0x00010058d43c(uVar3,uVar8);
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112fdeb00;
    func_0x000107c61428(param_1 + _DAT_112fdeb00,auStack_c0,0,0);
    lVar9 = *(long *)(param_1 + lVar4);
    puVar5 = PTR_PTR_1126a6848;
    func_0x000107c61168(PTR_PTR_1126a6848);
    lVar7 = lVar9;
    func_0x000107c6148c(lVar9,puVar5);
    lVar4 = param_1;
    if (lVar7 != 0) {
      uVar8 = 1;
      func_0x000107c61428(unaff_x20 + 0x18,auStack_d8,1,0);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      *(long *)(unaff_x20 + 0x18) = lVar7;
      func_0x000107c615f0(lVar9);
      func_0x000107c61170(uVar3);
      lVar4 = _DAT_112fdeb08;
      func_0x000107c61428(param_1 + _DAT_112fdeb08,auStack_f0,0,0);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x000107c61428(unaff_x20 + 0x20,auStack_108,1,0);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
      *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
      func_0x000107c61174(uVar3);
      func_0x000107c61170(uVar10);
      lVar4 = _DAT_112fdeb10;
      func_0x000107c61428(param_1 + _DAT_112fdeb10,auStack_120,0,0);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      func_0x000107c61428(unaff_x20 + 0x28,auStack_138,1,0);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
      goto LAB_101277e50;
    }
  }
  func_0x000107c61170(lVar4);
  uVar8 = 0;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
LAB_101277e50:
  func_0x000107c61170(uVar10);
  return uVar8;
}



/* Entry: 101277e70; end: 101277ecb;  */

void FUN_101277e70(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10126e5b0(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101277ecc; end: 101277ed3;  */

void FUN_101277ecc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10126e5b0(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101277ed4; end: 101277f3b;  */

void FUN_101277ed4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0x112d6cc18;
  func_0x0001000285a8(0x112d6cc18,&UNK_10d92f810);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101277f3c; end: 101277f57;  */

void FUN_101277f3c(long param_1,long param_2)

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



/* Entry: 101277f58; end: 101277fbb;  */

void FUN_101277f58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101277fbc; end: 1012780c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101277fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112d6cd30;
  func_0x000107c61614(unaff_x20 + _DAT_112d6cd30,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6cd38);
  uVar5 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd48) = param_2;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  puVar4 = auStack_68;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar4;
}



/* Entry: 1012780c4; end: 1012780d3; -[SCProfile3SectionSlot order] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012780c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d6cd40);
}



/* Entry: 1012780d4; end: 1012780f3; -[SCProfile3SectionSlot section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012780d4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6cd48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012780f4; end: 10127813b; -[SCProfile3SectionSlot provider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012780f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6cd30;
  func_0x000107c61428(param_1 + _DAT_112d6cd30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10127813c; end: 101278193; -[SCProfile3SectionSlot setProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127813c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6cd30;
  func_0x000107c61428(param_1 + _DAT_112d6cd30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


