/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103297404; end: 103297437; -[_TtC28SpotlightCustomInterstitials35SpotlightTiledInterstitialLayerView initWithCoder:] */

undefined8 FUN_103297404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1032981bc();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 103297438; end: 1032976ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103297438(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar8 - extraout_x12;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  uVar3 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar3 == 0) {
    return;
  }
  uVar5 = uVar3;
  FUN_10329652c();
  uVar9 = uVar5;
  func_0x000103296824();
  func_0x000107c40720(param_1,param_2,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  lVar4 = *(long *)(uVar3 + _DAT_112f50d60);
  func_0x000107c45350(param_1,param_2);
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_103297674:
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c5efdc(puVar8);
    func_0x000107c61170(lVar4);
    (**(code **)(lVar11 + 0x20))(lVar7,puVar8,lVar2);
    lVar4 = _DAT_112f50d70;
    uVar5 = uVar3 + _DAT_112f50d70;
    func_0x000107c61428(uVar5,auStack_90,0x20,0);
    uVar9 = *(ulong *)(uVar3 + lVar4);
    if (uVar9 == 0) {
      func_0x000107c614a8(auStack_90);
    }
    else {
      func_0x000107c5efec();
      if ((uVar9 & 0xc000000000000001) == 0) {
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1032976a8);
          (*pcVar10)();
        }
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1032976ac);
          (*pcVar10)();
        }
        uVar5 = *(ulong *)(uVar9 + uVar5 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        func_0x000101eff02c();
      }
      func_0x000107c614a8(auStack_90);
      puVar1 = (undefined8 *)(uVar3 + _DAT_112f50d40);
      func_0x000107c61428(puVar1,auStack_90,0x20,0);
      pcVar10 = (code *)*puVar1;
      if (pcVar10 == (code *)0x0) {
        (**(code **)(lVar11 + 8))(lVar7,lVar2);
        func_0x000107c614a8(auStack_90);
        func_0x000107c61170(uVar3);
        uVar3 = uVar5;
        goto LAB_103297674;
      }
      uVar6 = puVar1[1];
      func_0x000107c614a8(auStack_90);
      func_0x000107c6157c(uVar6);
      (*pcVar10)(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000100d3ff74(pcVar10,uVar6);
    }
    func_0x000107c61170(uVar3);
    (**(code **)(lVar11 + 8))(lVar7,lVar2);
  }
  return;
}



/* Entry: 1032976ac; end: 10329779f;  */

/* WARNING: Possible PIC construction at 0x0001032976f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103297738) */
/* WARNING: Removing unreachable block (ram,0x00010329771c) */
/* WARNING: Removing unreachable block (ram,0x00010329773c) */
/* WARNING: Removing unreachable block (ram,0x000103297744) */
/* WARNING: Removing unreachable block (ram,0x000103297724) */
/* WARNING: Removing unreachable block (ram,0x0001032976fc) */
/* WARNING: Removing unreachable block (ram,0x00010329776c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032976ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f50d78);
  if (lVar1 != 0) {
    func_0x000107c521e8(lVar1,param_2,0);
  }
  func_0x000103296824();
  func_0x000107c5cbe4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1032977a0; end: 1032978ef;  */

long FUN_1032977a0(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  func_0x000107c40370();
  func_0x000107c61180();
  func_0x000107c404f0();
  func_0x000107c615e8();
  dVar3 = (param_1 + -12.0) * 0.5;
  dVar4 = dVar3 * 1.3333333333333333;
  FUN_10328a420();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = 9;
  *(undefined8 *)(param_2 + 0x10) = 4;
  puVar1 = PTR__OBJC_CLASS___NSCollectionLayoutGroupCustomItem_1126acf88;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c410b4(0,0x4038000000000000,dVar3,dVar4);
  func_0x000107c61180();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = puVar1;
  func_0x000107c410b4(dVar3 + 12.0,0,dVar3,dVar4);
  func_0x000107c61180();
  *(undefined **)(param_2 + 0x28) = puVar2;
  puVar2 = puVar1;
  func_0x000107c410b4(0,dVar4 + 24.0 + 12.0,dVar3,dVar4);
  func_0x000107c61180();
  *(undefined **)(param_2 + 0x30) = puVar2;
  func_0x000107c410b4(dVar3 + 12.0,dVar4 + 12.0,dVar3,dVar4);
  func_0x000107c61180();
  *(undefined **)(param_2 + 0x38) = puVar1;
  return param_2;
}



/* Entry: 1032978f0; end: 103297973;  */

void FUN_1032978f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar4);
  uVar2 = param_2;
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(param_2);
  uVar3 = 0;
  func_0x000103298324(0,0x112f50978,&PTR__OBJC_CLASS___NSCollectionLayoutGroupCustomItem_1126acf88);
  uVar4 = uVar2;
  func_0x000107c5fc48(uVar2,uVar3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103297974; end: 103297977;  */

void FUN_103297974(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103297978; end: 103297a33; -[_TtC28SpotlightCustomInterstitials35SpotlightTiledInterstitialLayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032979b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032979d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032979f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103297a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032979fc) */
/* WARNING: Removing unreachable block (ram,0x0001032979dc) */
/* WARNING: Removing unreachable block (ram,0x0001032979bc) */
/* WARNING: Removing unreachable block (ram,0x000103297a1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103297978(long param_1)

{
  func_0x000103294f80(param_1 + _DAT_112f50d38);
  func_0x000100d3ff74(*(undefined8 *)(param_1 + _DAT_112f50d40),
                      ((undefined8 *)(param_1 + _DAT_112f50d40))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50d48));
  return;
}



/* Entry: 103297a34; end: 103297a53;  */

void FUN_103297a34(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6498);
  return;
}



/* Entry: 103297a54; end: 103297a5b; -[_TtC28SpotlightCustomInterstitials35SpotlightTiledInterstitialLayerView numberOfSectionsInCollectionView:] */

undefined8 FUN_103297a54(void)

{
  return 1;
}



/* Entry: 103297a5c; end: 103297ad7; -[_TtC28SpotlightCustomInterstitials35SpotlightTiledInterstitialLayerView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103297a5c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f50d70;
  func_0x000107c61428(param_1 + _DAT_112f50d70,auStack_38,0,0);
  uVar2 = *(ulong *)(param_1 + lVar1);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else if (uVar2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    if (-1 < (long)uVar2) {
      uVar2 = uVar2 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
  }
  if (3 < (long)uVar2) {
    uVar2 = 4;
  }
  return uVar2;
}



/* Entry: 103297ad8; end: 103297c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103297ad8(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  uVar3 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f1350a0);
  uVar4 = uVar3;
  func_0x000107c5efd4();
  func_0x000107c417e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  FUN_103294a9c(0);
  lVar5 = param_1;
  func_0x000107c61480(param_1,uVar4);
  lVar1 = _DAT_112f50d38;
  if (lVar5 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f50d38,auStack_58,0,0);
    FUN_1032982d4(unaff_x20 + lVar1,auStack_80);
    lVar1 = _DAT_112f50c50;
    func_0x000107c61428(lVar5 + _DAT_112f50c50,auStack_98,0x21,0);
    FUN_1032920fc(auStack_80,lVar5 + lVar1);
    func_0x000107c614a8(auStack_98);
    lVar1 = _DAT_112f50d70;
    uVar6 = unaff_x20 + _DAT_112f50d70;
    func_0x000107c61428(uVar6,auStack_80,0x20,0);
    uVar8 = *(ulong *)(unaff_x20 + lVar1);
    uVar7 = 0;
    if (uVar8 != 0) {
      func_0x000107c5efec();
      if ((uVar8 & 0xc000000000000001) == 0) {
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103297c6c);
          (*pcVar2)();
        }
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103297c70);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar8 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar7);
      }
      else {
        func_0x000101eff02c();
        uVar7 = uVar6;
      }
    }
    func_0x000107c614a8(auStack_80);
    FUN_1032928f0(uVar7);
    func_0x000107c61170(uVar7);
    param_1 = lVar5;
  }
  return param_1;
}



/* Entry: 103297c70; end: 103297d37; -[_TtC28SpotlightCustomInterstitials35SpotlightTiledInterstitialLayerView collectionView:cellForItemAtIndexPath:] */

void FUN_103297c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_103297ad8(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103297d38; end: 103297dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103297d38(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f50dc0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f50dc0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103297dc4; end: 103297e7f; -[_TtC28SpotlightCustomInterstitialsP33_0CDAA23A7C04F966A9833EB2E1E0424724TapBlockingContainerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103297dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar2 = param_5;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_5 + _DAT_112f50db8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_5 + _DAT_112f50dc0) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar4 = (undefined1 *)plVar3;
  FUN_103297d38();
  func_0x000107c3d6fc(plVar3);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(puVar4);
  return (undefined1 *)plVar3;
}



/* Entry: 103297e80; end: 103297ee3; -[_TtC28SpotlightCustomInterstitialsP33_0CDAA23A7C04F966A9833EB2E1E0424724TapBlockingContainerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103297e80(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f50db8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112f50dc0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SpotlightCustomInterstitials/SpotlightTiledInterstitialLayerView.swift",0x46,
                      2,0x110,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103297ee4);
  (*pcVar2)();
}



/* Entry: 103297ee4; end: 103297f8b; -[_TtC28SpotlightCustomInterstitialsP33_0CDAA23A7C04F966A9833EB2E1E0424724TapBlockingContainerView handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103297ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f50db8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f50db8))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001032982c4(pcVar1,uVar2);
  func_0x000107c4b8b8(param_3);
  (*pcVar1)();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103297f8c; end: 103297fbf;  */

void FUN_103297f8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103297fc0; end: 103297ffb; -[_TtC28SpotlightCustomInterstitialsP33_0CDAA23A7C04F966A9833EB2E1E0424724TapBlockingContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103297fc0(long param_1)

{
  func_0x000100d3ff74(*(undefined8 *)(param_1 + _DAT_112f50db8),
                      ((undefined8 *)(param_1 + _DAT_112f50db8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50dc0));
  return;
}



/* Entry: 103297ffc; end: 10329801b;  */

void FUN_103297ffc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c65a0);
  return;
}



/* Entry: 10329801c; end: 103298057; -[_TtC28SpotlightCustomInterstitialsP33_0CDAA23A7C04F966A9833EB2E1E0424724TapBlockingContainerView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

bool FUN_10329801c(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x000107c6148c(in_x3,puVar1);
  return in_x3 != 0;
}



/* Entry: 103298058; end: 1032981bb;  */

undefined * FUN_103298058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
  puVar2 = puVar1;
  func_0x000107c438d0(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c438cc(0x3ff0000000000000,puVar1);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8);
  func_0x000107c5b0a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSCollectionLayoutGroup_1126cd3d0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSCollectionLayoutGroup_1126cd3d0);
  pcStack_40 = FUN_1032977a0;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1032978f0;
  puStack_48 = &UNK_110631d30;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c410ac(puVar1,param_2,puVar3,ppuVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar2 = PTR__OBJC_CLASS___NSCollectionLayoutSection_1126cd3e0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSCollectionLayoutSection_1126cd3e0);
  func_0x000107c51b9c();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___UICollectionViewCompositionalLayout_1126cd3b0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewCompositionalLayout_1126cd3b0);
  func_0x000107c48528();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 1032981bc; end: 1032982a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032981bc(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50d38);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50d40);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50d88) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SpotlightCustomInterstitials/SpotlightTiledInterstitialLayerView.swift",0x46,
                      2,0x54,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032982a8);
  (*pcVar2)();
}



/* Entry: 1032982a8; end: 1032982d3;  */

void FUN_1032982a8(long param_1,long param_2)

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



/* Entry: 1032982d4; end: 103298363;  */

undefined8 FUN_1032982d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f50c10;
  func_0x0001000285a8(0x112f50c10,&UNK_10dba5d10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103298364; end: 10329836f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103298364(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar8 - extraout_x12;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  uVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (uVar3 == 0) {
    return;
  }
  uVar5 = uVar3;
  FUN_10329652c();
  uVar9 = uVar5;
  func_0x000103296824();
  func_0x000107c40720(param_1,param_2,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  lVar4 = *(long *)(uVar3 + _DAT_112f50d60);
  func_0x000107c45350(param_1,param_2);
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_103297674:
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c5efdc(puVar8);
    func_0x000107c61170(lVar4);
    (**(code **)(lVar11 + 0x20))(lVar7,puVar8,lVar2);
    lVar4 = _DAT_112f50d70;
    uVar5 = uVar3 + _DAT_112f50d70;
    func_0x000107c61428(uVar5,auStack_90,0x20,0);
    uVar9 = *(ulong *)(uVar3 + lVar4);
    if (uVar9 == 0) {
      func_0x000107c614a8(auStack_90);
    }
    else {
      func_0x000107c5efec();
      if ((uVar9 & 0xc000000000000001) == 0) {
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1032976a8);
          (*pcVar10)();
        }
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1032976ac);
          (*pcVar10)();
        }
        uVar5 = *(ulong *)(uVar9 + uVar5 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        func_0x000101eff02c();
      }
      func_0x000107c614a8(auStack_90);
      puVar1 = (undefined8 *)(uVar3 + _DAT_112f50d40);
      func_0x000107c61428(puVar1,auStack_90,0x20,0);
      pcVar10 = (code *)*puVar1;
      if (pcVar10 == (code *)0x0) {
        (**(code **)(lVar11 + 8))(lVar7,lVar2);
        func_0x000107c614a8(auStack_90);
        func_0x000107c61170(uVar3);
        uVar3 = uVar5;
        goto LAB_103297674;
      }
      uVar6 = puVar1[1];
      func_0x000107c614a8(auStack_90);
      func_0x000107c6157c(uVar6);
      (*pcVar10)(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000100d3ff74(pcVar10,uVar6);
    }
    func_0x000107c61170(uVar3);
    (**(code **)(lVar11 + 8))(lVar7,lVar2);
  }
  return;
}



/* Entry: 103298370; end: 1032983c7; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController initWithCoder:] */

void FUN_103298370(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SpotlightCustomInterstitials/SpotlightTiledInterstitialLayerViewController.swift"
                      ,0x50,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032983c8);
  (*pcVar1)();
}



/* Entry: 1032983c8; end: 1032983d7; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032983c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112f50df0));
  return;
}



/* Entry: 1032983d8; end: 1032983df; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_1032983d8(void)

{
  return 0;
}



/* Entry: 1032983e0; end: 10329851f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032983e0(double param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewSafeAreaInsetsDidChange_11252f568);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103298518);
    (*pcVar1)();
  }
  func_0x000107c515a0();
  dVar4 = param_1;
  func_0x000107c61170(lVar3);
  if (param_1 <= 0.0) {
    lVar3 = unaff_x20;
    func_0x000107c4e360();
    func_0x000107c61180();
    if (lVar3 == 0) {
      dVar4 = 0.0;
      goto LAB_1032984a8;
    }
    lVar2 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103298520);
      (*pcVar1)();
    }
  }
  else {
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10329851c);
      (*pcVar1)();
    }
  }
  func_0x000107c515a0(lVar2);
  func_0x000107c61170(lVar2);
LAB_1032984a8:
  lVar3 = *(long *)(unaff_x20 + _DAT_112f50df0);
  if (dVar4 < 0.0) {
    dVar4 = 0.0;
  }
  if ((*(double *)(lVar3 + _DAT_112f50d88) != dVar4) &&
     (*(double *)(lVar3 + _DAT_112f50d88) = dVar4, *(long *)(lVar3 + _DAT_112f50d80) != 0)) {
    func_0x000107c5378c(dVar4 + 16.0);
  }
  return;
}



/* Entry: 103298520; end: 103298547; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController viewSafeAreaInsetsDidChange] */

void FUN_103298520(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032983e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103298548; end: 103298817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103298548(void)

{
  long lVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  puVar6 = PTR_s_viewDidLoad_112684cd8;
  func_0x000107c61154(&stack0xffffffffffffffb0);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103298814);
    (*pcVar2)();
  }
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(lVar9);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar8);
  lVar9 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar9 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    puVar8 = *(undefined **)(lVar9 + _DAT_11307abc8);
    func_0x000107c61434(puVar8);
    func_0x000107c61170(lVar9);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f0bc78;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc78);
    if (*(long *)(puVar8 + 0x10) == 0) {
LAB_103298678:
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      puVar7 = puVar6;
      func_0x000100029284(ppuVar3);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_103298678;
      }
      func_0x0001000bb420(*(long *)(puVar8 + 0x38) + (long)ppuVar3 * 0x20,&uStack_70);
      func_0x000107c6142c(puVar6);
      puVar6 = puVar8;
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar8);
    if (lStack_58 != 0) {
      uVar4 = 0;
      func_0x0001002ed07c(0);
      puVar5 = auStack_88;
      func_0x000107c6147c(puVar5,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if (((ulong)puVar5 & 1) != 0) {
        uVar4 = auStack_88[0];
        func_0x000107c3ebcc();
        func_0x000107c61170(auStack_88[0]);
        if ((int)uVar4 != 0) {
          FUN_1032976ac();
        }
      }
      goto LAB_1032986f8;
    }
  }
  func_0x00010006e7f4(&uStack_70);
LAB_1032986f8:
  lVar9 = *(long *)(unaff_x20 + _DAT_112f50df0);
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f50d00);
    func_0x000107c61434(uVar10);
    func_0x000107c61170(unaff_x20);
    lVar1 = _DAT_112f50d70;
    func_0x000107c61428(lVar9 + _DAT_112f50d70,&uStack_70,1,0);
    uVar4 = *(undefined8 *)(lVar9 + lVar1);
    *(undefined8 *)(lVar9 + lVar1) = uVar10;
    func_0x000107c6142c(uVar4);
    uVar4 = uVar10;
    func_0x000107c61434(uVar10);
    func_0x000103296824();
    func_0x000107c4fd7c();
    func_0x000107c6142c(uVar10);
    func_0x000107c61170(uVar4);
    puVar6 = &UNK_110631d90;
    func_0x000107c613fc(&UNK_110631d90,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar5 = (undefined8 *)(lVar9 + _DAT_112f50d40);
    func_0x000107c61428(puVar5,auStack_88,1,0);
    uVar4 = *puVar5;
    uVar10 = puVar5[1];
    *puVar5 = 0x103298f3c;
    puVar5[1] = puVar6;
    func_0x000107c6157c(puVar6);
    func_0x000103298f44(uVar4,uVar10);
    func_0x000107c61574(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103298818);
  (*pcVar2)();
}



/* Entry: 103298818; end: 103298e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103298818(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong auStack_148 [3];
  long lStack_130;
  undefined *apuStack_128 [20];
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar9 = param_2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e50);
    (*pcVar1)();
  }
  uVar11 = *(ulong *)(lVar9 + _DAT_112f50d00);
  func_0x000107c61434(uVar11);
  func_0x000107c61170(lVar9);
  uVar16 = uVar11 & 0xffffffffffffff8;
  if (uVar11 >> 0x3e == 0) {
    uVar13 = *(ulong *)(uVar16 + 0x10);
  }
  else {
    uVar13 = uVar16;
    if (0x7fffffffffffffff < uVar11) {
      uVar13 = uVar11;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      while( true ) {
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar16 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103298aa8);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(uVar11 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar2 = uVar15;
          func_0x000101eff02c(uVar15,uVar11);
        }
        uVar18 = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103298aa4);
          (*pcVar1)();
        }
        uVar3 = uVar2;
        func_0x000107c5bfd8();
        uVar4 = param_1;
        func_0x000107c5bfd8();
        if (uVar3 != uVar4) break;
        func_0x000107c61170(uVar2);
        uVar15 = uVar15 + 1;
        if (uVar18 == uVar13) goto LAB_1032989b0;
      }
      puVar12 = puVar7;
      func_0x000107c61558();
      apuStack_128[0] = puVar7;
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000103035c50(0,*(long *)(puVar7 + 0x10) + 1,1);
      }
      uVar15 = *(ulong *)(apuStack_128[0] + 0x10);
      if (*(ulong *)(apuStack_128[0] + 0x18) >> 1 <= uVar15) {
        func_0x000103035c50(1 < *(ulong *)(apuStack_128[0] + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(apuStack_128[0] + 0x10) = uVar15 + 1;
      *(ulong *)(apuStack_128[0] + uVar15 * 8 + 0x20) = uVar2;
      uVar15 = uVar18;
      puVar7 = apuStack_128[0];
    } while (uVar18 != uVar13);
  }
LAB_1032989b0:
  func_0x000107c6142c(uVar11);
  if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
    puVar12 = puVar7;
    func_0x000107c60480();
  }
  else {
    puVar12 = *(undefined **)(puVar7 + 0x10);
  }
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c61574(puVar7);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_128[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001002ecff4(0,(ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e4c);
      (*pcVar1)();
    }
    puVar14 = (undefined *)0x0;
    do {
      puVar17 = apuStack_128[0];
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar5 = *(undefined **)(puVar7 + (long)puVar14 * 8 + 0x20);
        func_0x000107c61174(puVar5);
      }
      else {
        puVar5 = puVar14;
        func_0x000101eff02c(puVar14,puVar7);
      }
      func_0x000107c5bfd8();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c490d8();
      func_0x000107c61170(puVar5);
      uVar11 = *(ulong *)(puVar17 + 0x10);
      apuStack_128[0] = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar11) {
        func_0x0001002ecff4(1 < *(ulong *)(puVar17 + 0x18),uVar11 + 1,1);
      }
      puVar17 = apuStack_128[0];
      puVar14 = puVar14 + 1;
      *(ulong *)(apuStack_128[0] + 0x10) = uVar11 + 1;
      *(undefined **)(apuStack_128[0] + uVar11 * 8 + 0x20) = puVar6;
    } while (puVar12 != puVar14);
    func_0x000107c61574(puVar7);
  }
  uVar11 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(uVar11 + 0x18) = 4;
  *(undefined8 *)(uVar11 + 0x10) = 2;
  *(undefined8 *)(uVar11 + 0x20) = 0x64654479726f7473;
  *(undefined8 *)(uVar11 + 0x28) = 0xed00007046657075;
  func_0x000107c5bfd8(param_1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d8();
  uVar8 = 0;
  func_0x0001002ed07c();
  *(undefined **)(uVar11 + 0x30) = puVar7;
  *(undefined8 *)(uVar11 + 0x48) = uVar8;
  *(undefined8 *)(uVar11 + 0x50) = 0xd000000000000011;
  *(undefined8 *)(uVar11 + 0x58) = 0x800000010f134d50;
  uVar8 = 0x112da1fa0;
  func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
  *(undefined8 *)(uVar11 + 0x78) = uVar8;
  *(undefined **)(uVar11 + 0x60) = puVar17;
  uVar16 = uVar11;
  func_0x000100214a84();
  func_0x000107c61588(uVar11);
  uVar8 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(uVar11 + 0x20),2,uVar8);
  lVar9 = param_2;
  uStack_88 = uVar16;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e54);
    (*pcVar1)();
  }
  uVar11 = *(ulong *)(lVar9 + _DAT_112f50d08);
  func_0x000107c61434(uVar11);
  func_0x000107c61170(lVar9);
  if (uVar11 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar13 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103298d44);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar11 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar15;
        func_0x000101f19730(uVar15,uVar11);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103298c9c);
        (*pcVar1)();
      }
      uVar18 = uVar15 + 1;
      if (*(ulong *)(uVar2 + _DAT_112f51068) == param_1) {
        func_0x000107c6142c(uVar11);
        lVar9 = 0;
        FUN_10329b290();
        auStack_148[0] = uVar2;
        lStack_130 = lVar9;
        if (lVar9 == 0) {
          func_0x00010006e7f4(auStack_148);
          func_0x000100216878(apuStack_128,0x74616469646e6163,0xe900000000000065);
          func_0x00010006e7f4(apuStack_128);
        }
        else {
          func_0x000100102924(auStack_148,apuStack_128);
          uVar11 = uVar16;
          func_0x000107c61558(uVar16);
          auStack_148[0] = uVar16;
          func_0x0001001029e8(apuStack_128,0x74616469646e6163,0xe900000000000065,uVar11);
          uStack_88 = auStack_148[0];
        }
        goto LAB_103298d64;
      }
      func_0x000107c61170();
      uVar15 = uVar15 + 1;
    } while (uVar18 != uVar13);
  }
  func_0x000107c6142c(uVar11);
LAB_103298d64:
  lVar9 = param_2;
  func_0x000107c42a98();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e58);
    (*pcVar1)();
  }
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f134cd0);
  lVar10 = param_2;
  func_0x000107c4e230(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar11 = uStack_88;
  uVar16 = uStack_88;
  func_0x000107c5f9dc(uStack_88,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c4df80(lVar9);
  func_0x000107c6142c(uVar11);
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103298e58; end: 103298e7f; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController viewDidLoad] */

void FUN_103298e58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103298548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103298e80; end: 103298eab; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_103298e80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightTiledInterstitialLayerViewController",
                      0x4a,
                      "init(configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:)"
                      ,0x56,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103298eac);
  (*pcVar1)();
}



/* Entry: 103298eac; end: 103298f0b; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController initWithNibName:bundle:] */

void FUN_103298eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightTiledInterstitialLayerViewController",
                      0x4a,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103298ed8);
  (*pcVar1)();
}



/* Entry: 103298f0c; end: 103298f1b; -[_TtC28SpotlightCustomInterstitials45SpotlightTiledInterstitialLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103298f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50df0));
  return;
}



/* Entry: 103298f1c; end: 103298f3b;  */

void FUN_103298f1c(void)

{
  func_0x000107c61168(&PTR_PTR_112f50e38);
  return;
}



/* Entry: 103298f3c; end: 103298f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103298f3c(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong auStack_148 [3];
  long lStack_130;
  undefined *apuStack_128 [20];
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar10 = lVar2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e50);
    (*pcVar1)();
  }
  uVar12 = *(ulong *)(lVar10 + _DAT_112f50d00);
  func_0x000107c61434(uVar12);
  func_0x000107c61170(lVar10);
  uVar17 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar17 + 0x10);
  }
  else {
    uVar14 = uVar17;
    if (0x7fffffffffffffff < uVar12) {
      uVar14 = uVar12;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      while( true ) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103298aa8);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar16;
          func_0x000101eff02c(uVar16,uVar12);
        }
        uVar19 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103298aa4);
          (*pcVar1)();
        }
        uVar4 = uVar3;
        func_0x000107c5bfd8();
        uVar5 = param_1;
        func_0x000107c5bfd8();
        if (uVar4 != uVar5) break;
        func_0x000107c61170(uVar3);
        uVar16 = uVar16 + 1;
        if (uVar19 == uVar14) goto LAB_1032989b0;
      }
      puVar13 = puVar8;
      func_0x000107c61558();
      apuStack_128[0] = puVar8;
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000103035c50(0,*(long *)(puVar8 + 0x10) + 1,1);
      }
      uVar16 = *(ulong *)(apuStack_128[0] + 0x10);
      if (*(ulong *)(apuStack_128[0] + 0x18) >> 1 <= uVar16) {
        func_0x000103035c50(1 < *(ulong *)(apuStack_128[0] + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(apuStack_128[0] + 0x10) = uVar16 + 1;
      *(ulong *)(apuStack_128[0] + uVar16 * 8 + 0x20) = uVar3;
      uVar16 = uVar19;
      puVar8 = apuStack_128[0];
    } while (uVar19 != uVar14);
  }
LAB_1032989b0:
  func_0x000107c6142c(uVar12);
  if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
    puVar13 = puVar8;
    func_0x000107c60480();
  }
  else {
    puVar13 = *(undefined **)(puVar8 + 0x10);
  }
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c61574(puVar8);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_128[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001002ecff4(0,(ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e4c);
      (*pcVar1)();
    }
    puVar15 = (undefined *)0x0;
    do {
      puVar18 = apuStack_128[0];
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined **)(puVar8 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174(puVar6);
      }
      else {
        puVar6 = puVar15;
        func_0x000101eff02c(puVar15,puVar8);
      }
      func_0x000107c5bfd8();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c490d8();
      func_0x000107c61170(puVar6);
      uVar12 = *(ulong *)(puVar18 + 0x10);
      apuStack_128[0] = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar12) {
        func_0x0001002ecff4(1 < *(ulong *)(puVar18 + 0x18),uVar12 + 1,1);
      }
      puVar18 = apuStack_128[0];
      puVar15 = puVar15 + 1;
      *(ulong *)(apuStack_128[0] + 0x10) = uVar12 + 1;
      *(undefined **)(apuStack_128[0] + uVar12 * 8 + 0x20) = puVar7;
    } while (puVar13 != puVar15);
    func_0x000107c61574(puVar8);
  }
  uVar12 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(uVar12 + 0x18) = 4;
  *(undefined8 *)(uVar12 + 0x10) = 2;
  *(undefined8 *)(uVar12 + 0x20) = 0x64654479726f7473;
  *(undefined8 *)(uVar12 + 0x28) = 0xed00007046657075;
  func_0x000107c5bfd8(param_1);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d8();
  uVar9 = 0;
  func_0x0001002ed07c();
  *(undefined **)(uVar12 + 0x30) = puVar8;
  *(undefined8 *)(uVar12 + 0x48) = uVar9;
  *(undefined8 *)(uVar12 + 0x50) = 0xd000000000000011;
  *(undefined8 *)(uVar12 + 0x58) = 0x800000010f134d50;
  uVar9 = 0x112da1fa0;
  func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
  *(undefined8 *)(uVar12 + 0x78) = uVar9;
  *(undefined **)(uVar12 + 0x60) = puVar18;
  uVar17 = uVar12;
  func_0x000100214a84();
  func_0x000107c61588(uVar12);
  uVar9 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(uVar12 + 0x20),2,uVar9);
  lVar10 = lVar2;
  uStack_88 = uVar17;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e54);
    (*pcVar1)();
  }
  uVar12 = *(ulong *)(lVar10 + _DAT_112f50d08);
  func_0x000107c61434(uVar12);
  func_0x000107c61170(lVar10);
  if (uVar12 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar14 = uVar12;
    }
    func_0x000107c60480();
  }
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      if ((uVar12 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103298d44);
          (*pcVar1)();
        }
        uVar3 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar16;
        func_0x000101f19730(uVar16,uVar12);
      }
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103298c9c);
        (*pcVar1)();
      }
      uVar19 = uVar16 + 1;
      if (*(ulong *)(uVar3 + _DAT_112f51068) == param_1) {
        func_0x000107c6142c(uVar12);
        lVar10 = 0;
        FUN_10329b290();
        auStack_148[0] = uVar3;
        lStack_130 = lVar10;
        if (lVar10 == 0) {
          func_0x00010006e7f4(auStack_148);
          func_0x000100216878(apuStack_128,0x74616469646e6163,0xe900000000000065);
          func_0x00010006e7f4(apuStack_128);
        }
        else {
          func_0x000100102924(auStack_148,apuStack_128);
          uVar12 = uVar17;
          func_0x000107c61558(uVar17);
          auStack_148[0] = uVar17;
          func_0x0001001029e8(apuStack_128,0x74616469646e6163,0xe900000000000065,uVar12);
          uStack_88 = auStack_148[0];
        }
        goto LAB_103298d64;
      }
      func_0x000107c61170();
      uVar16 = uVar16 + 1;
    } while (uVar19 != uVar14);
  }
  func_0x000107c6142c(uVar12);
LAB_103298d64:
  lVar10 = lVar2;
  func_0x000107c42a98();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103298e58);
    (*pcVar1)();
  }
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f134cd0);
  lVar11 = lVar2;
  func_0x000107c4e230(lVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar12 = uStack_88;
  uVar17 = uStack_88;
  func_0x000107c5f9dc(uStack_88,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c4df80(lVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c615e8(lVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 103298f54; end: 103299217;  */

undefined * FUN_103298f54(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_1032997b0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_1032991d4:
        puStack_58 = (undefined *)0x0;
LAB_1032991d8:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_1032997b0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103299218);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_1032991d4;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_1032991d8;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        func_0x00010109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x00010109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 103299218; end: 103299223;  */

undefined * FUN_103299218(undefined *param_1,undefined *param_2)

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
    (*(code *)0x10328a260)();
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



/* Entry: 103299224; end: 1032992a3;  */

undefined * FUN_103299224(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 1032992a4; end: 103299543;  */

ulong FUN_1032992a4(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar8;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  uVar4 = 0;
  FUN_1032997b0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar7 = uVar4;
  func_0x000100deaee4();
  puVar8 = puVar3;
  func_0x000107c5fe10(puVar3,uVar4,uVar7);
  func_0x000107c61170(puVar3);
  puVar3 = puVar8;
  FUN_103298f54();
  func_0x000107c6142c(puVar8);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar8 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar3);
    uVar5 = 0;
  }
  else {
    uVar9 = 0;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1032993f0);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(puVar3 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar9;
        func_0x0001012bfb38(uVar9,puVar3);
      }
      puVar1 = (undefined *)(uVar9 + 1);
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032993ec);
        (*pcVar2)();
      }
      uVar6 = uVar5;
      func_0x000107c3d0e4();
      if (uVar6 == 0) goto LAB_1032993dc;
      func_0x000107c61170(uVar5);
      uVar9 = uVar9 + 1;
    } while (puVar1 != puVar8);
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103299504);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(puVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = 0;
      func_0x0001012bfb38(0,puVar3);
    }
LAB_1032993dc:
    func_0x000107c6142c(puVar3);
  }
  uVar9 = uVar5;
  func_0x000107c4a8f8();
  func_0x000107c61180();
  if (uVar9 == 0) {
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5;
      func_0x000107c5e408();
      func_0x000107c61180();
      uVar7 = 0;
      FUN_1032997b0(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      uVar6 = uVar9;
      func_0x000107c5fc54(uVar9,uVar7);
      func_0x000107c61170(uVar9);
      if (uVar6 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar9 = uVar6;
        }
        func_0x000107c60480();
      }
      if (uVar9 == 0) {
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar6);
        uVar9 = 0;
      }
      else {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103299544);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(uVar6 + 0x20);
          func_0x000107c61174(uVar9);
        }
        else {
          uVar9 = 0;
          func_0x000100de9de8(0,uVar6);
        }
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar6);
      }
    }
  }
  else {
    func_0x000107c61170(uVar5);
  }
  return uVar9;
}



/* Entry: 103299544; end: 10329964f;  */

double FUN_103299544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c4179c(0x4034000000000000);
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c5c5fc(0x4034000000000000,puVar1);
    func_0x000107c61180();
  }
  dVar4 = 12.0;
  puVar3 = puVar1;
  func_0x000107c4ca94(0x4028000000000000);
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    dVar4 = 12.0;
    func_0x000107c5c5fc(0x4028000000000000,puVar1);
    func_0x000107c61180();
    puVar3 = puVar1;
  }
  func_0x000107c3e1e0(puVar2);
  dVar5 = dVar4;
  func_0x000107c417ec(puVar2);
  dVar4 = dVar4 - dVar5;
  dVar6 = (double)(long)dVar4;
  func_0x000107c3e1e0(puVar3);
  dVar5 = dVar4;
  func_0x000107c417ec(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return dVar6 + 16.0 + 8.0 + (double)(long)(dVar4 - dVar5) + 24.0;
}



/* Entry: 103299650; end: 1032997af;  */

double FUN_103299650(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined *param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  if ((undefined *)0x3 < param_5) {
    return 0.0;
  }
  puVar1 = param_5;
  FUN_1032992a4();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168();
    func_0x000107c4c194();
    func_0x000107c61180();
  }
  func_0x000107c3ec60();
  func_0x000107c61170();
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  FUN_1032992a4();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c515a0();
    func_0x000107c61170(puVar1);
  }
  FUN_103299544();
  dVar3 = (param_1 + -48.0 + -12.0) * 0.5 + 24.0 + 12.0;
  dVar2 = dVar3;
  if (param_5 == (undefined *)0x0) {
    dVar2 = 24.0;
  }
  if (param_5 != (undefined *)0x1) {
    dVar3 = dVar2;
  }
  dVar2 = 24.0;
  if (param_5 != (undefined *)0x2) {
    dVar2 = dVar3;
  }
  return dVar2 / param_1;
}



/* Entry: 1032997b0; end: 1032997ef;  */

void FUN_1032997b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032997f0; end: 10329988b;  */

void FUN_1032997f0(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  if (((*(byte *)(unaff_x20 + 0x18) & 1) == 0) && (0 < param_2)) {
    puVar2 = auStack_48;
    func_0x000107c61428(unaff_x20 + 0x10,puVar2,0x20,0);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if ((*(long *)(lVar4 + 0x10) == 0) || (func_0x00010035a314(), ((ulong)puVar2 & 1) == 0)) {
      func_0x000107c614a8(auStack_48);
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
      func_0x000107c614a8(auStack_48);
      lVar4 = *(long *)(lVar3 + 0x38);
      if (SCARRY8(lVar4,param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10329988c);
        (*pcVar1)();
      }
      *(long *)(lVar3 + 0x38) = lVar4 + param_2;
    }
  }
  return;
}



/* Entry: 10329988c; end: 1032998c3;  */

void FUN_10329988c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032998c4; end: 103299a8b;  */

/* WARNING: Removing unreachable block (ram,0x000103299a6c) */

void FUN_1032998c4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined *apuStack_80 [4];
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    puVar12 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar12 == (undefined *)0x0) goto LAB_1032999f0;
  }
  else {
    apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000103295c40(0,lVar10,0);
    puVar11 = apuStack_80[0];
    lVar6 = 0;
    func_0x000103299ad0();
    puVar14 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar9 = puVar14[-4];
      uVar3 = puVar14[-3];
      uVar1 = puVar14[-2];
      uVar4 = puVar14[-1];
      uVar13 = *puVar14;
      lVar7 = lVar6;
      func_0x000107c613fc(lVar6,0x40,7);
      *(undefined8 *)(lVar7 + 0x10) = uVar9;
      *(undefined8 *)(lVar7 + 0x18) = uVar3;
      *(undefined8 *)(lVar7 + 0x20) = uVar1;
      *(undefined8 *)(lVar7 + 0x28) = uVar4;
      *(undefined8 *)(lVar7 + 0x30) = uVar13;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      uVar2 = *(ulong *)(puVar11 + 0x10);
      uVar5 = *(ulong *)(puVar11 + 0x18);
      puVar12 = (undefined *)(uVar2 + 1);
      apuStack_80[0] = puVar11;
      func_0x000107c61434(uVar1);
      func_0x000107c61434(uVar13);
      if (uVar5 >> 1 <= uVar2) {
        func_0x000103295c40(1 < uVar5,puVar12,1);
        puVar11 = apuStack_80[0];
      }
      puVar14 = puVar14 + 5;
      *(undefined **)(puVar11 + 0x10) = puVar12;
      *(undefined8 *)(puVar11 + uVar2 * 0x10 + 0x20) = uVar9;
      *(long *)(puVar11 + uVar2 * 0x10 + 0x28) = lVar7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  func_0x0001000285a8(0x112f509b0,&UNK_10dba5bd0);
  func_0x000107c60498();
  puVar8 = puVar12;
LAB_1032999f0:
  apuStack_80[0] = puVar8;
  func_0x000107c61434(puVar11);
  FUN_103299c94();
  func_0x000107c6142c(puVar11);
  puVar12 = apuStack_80[0];
  func_0x000107c61428(unaff_x20 + 0x10,apuStack_80,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = puVar12;
  func_0x000107c6142c(uVar9);
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 103299a8c; end: 103299aef;  */

void FUN_103299a8c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103299af0; end: 103299b33;  */

undefined8 * FUN_103299af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  param_1[4] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103299b34; end: 103299ba7;  */

undefined8 * FUN_103299b34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103299ba8; end: 103299bf3;  */

undefined8 * FUN_103299ba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103299bf4; end: 103299c93;  */

int FUN_103299bf4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103299c94; end: 103299ff7;  */

void FUN_103299c94(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  if (uVar5 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    lVar9 = *param_3;
    uVar11 = uVar10;
    uVar4 = param_2;
    func_0x00010035a314();
    lVar6 = *(long *)(lVar9 + 0x10);
    uVar7 = (ulong)~(uint)uVar4 & 1;
    lVar1 = lVar6 + uVar7;
    if (SCARRY8(lVar6,uVar7)) {
LAB_103299f30:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103299f34);
      (*pcVar2)();
    }
    lVar6 = *(long *)(lVar9 + 0x18);
    uVar7 = uVar4;
    func_0x000107c6157c(uVar12);
    if (lVar6 < lVar1) {
      uVar7 = (ulong)((uint)param_2 & 1);
      FUN_10328e0d4(lVar1);
      uVar11 = uVar10;
      func_0x00010035a314();
      if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
LAB_103299f3c:
        func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103299f4c);
        (*pcVar2)();
      }
    }
    else if ((param_2 & 1) == 0) {
      func_0x00010328dc98();
    }
    if ((uVar4 & 1) != 0) {
LAB_103299d4c:
      puVar3 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar3);
      uVar5 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar5 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c61574(uVar12);
        func_0x000107c614ac(puVar3);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_78 = uVar10;
      func_0x000107c603d0(&uStack_78,&uStack_70,PTR___sSiN_11034deb0,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103299ff8);
      (*pcVar2)();
    }
    lVar6 = *param_3;
    lVar1 = lVar6 + (uVar11 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar11 & 0x3f);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar11 * 8) = uVar10;
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar11 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
LAB_103299f34:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103299f38);
      (*pcVar2)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    if (uVar5 != 1) {
      puVar13 = (undefined8 *)(param_1 + 0x38);
      uVar11 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103299f3c);
          (*pcVar2)();
        }
        uVar10 = puVar13[-1];
        uVar12 = *puVar13;
        lVar9 = *param_3;
        uVar4 = uVar10;
        func_0x00010035a314();
        lVar6 = *(long *)(lVar9 + 0x10);
        uVar8 = (ulong)~(uint)uVar7 & 1;
        lVar1 = lVar6 + uVar8;
        if (SCARRY8(lVar6,uVar8)) goto LAB_103299f30;
        lVar6 = *(long *)(lVar9 + 0x18);
        uVar8 = uVar7;
        func_0x000107c6157c(uVar12);
        if (lVar6 < lVar1) {
          uVar8 = 1;
          FUN_10328e0d4(lVar1);
          uVar4 = uVar10;
          func_0x00010035a314();
          if (((uint)uVar7 & 1) != ((uint)uVar8 & 1)) goto LAB_103299f3c;
        }
        if ((uVar7 & 1) != 0) goto LAB_103299d4c;
        lVar6 = *param_3;
        lVar1 = lVar6 + (uVar4 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar4 & 0x3f);
        *(ulong *)(*(long *)(lVar6 + 0x30) + uVar4 * 8) = uVar10;
        *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar4 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar6 + 0x10),1)) goto LAB_103299f34;
        uVar11 = uVar11 + 1;
        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
        puVar13 = puVar13 + 2;
        uVar7 = uVar8;
      } while (uVar5 != uVar11);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 103299ff8; end: 10329a063;  */

/* WARNING: Possible PIC construction at 0x00010329a00c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329a010) */

void FUN_103299ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10329a064; end: 10329a0df;  */

undefined8 * FUN_10329a064(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 10329a0e0; end: 10329a133;  */

undefined8 * FUN_10329a0e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 10329a134; end: 10329a1e7;  */

int FUN_10329a134(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10329a1e8; end: 10329a233; -[_TtC28SpotlightCustomInterstitials34SpotlightTiledInterstitialSnapItem itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329a1e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f50fe8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f50fe8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329a234; end: 10329a2a7; -[_TtC28SpotlightCustomInterstitials34SpotlightTiledInterstitialSnapItem playlistItemModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329a234(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f50fe8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f50fe8))[1];
  func_0x0001044443ac(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x00010444388c(0xd00000000000001b,0x800000010f135210,uVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329a2a8; end: 10329a873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
FUN_10329a2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined *puVar11;
  undefined8 ***pppuVar12;
  long unaff_x20;
  undefined8 **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *apuStack_d8 [3];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 **appuStack_b0 [3];
  long lStack_98;
  
  uVar2 = 0;
  func_0x0001044410f4(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000104440658(*(undefined8 *)(unaff_x20 + _DAT_112f50fe8),
                      ((undefined8 *)(unaff_x20 + _DAT_112f50fe8))[1]);
  func_0x000107c61170();
  ppuVar13 = *(undefined8 ***)(unaff_x20 + _DAT_112f51000);
  uVar3 = 0x112e400c0;
  func_0x0001000285a8(0x112e400c0,&UNK_10da2e120);
  appuStack_b0[0] = ppuVar13;
  lStack_98 = uVar3;
  func_0x000107c61434(ppuVar13);
  func_0x000104440854(appuStack_b0,0xd000000000000024,0x800000010f134fc0);
  func_0x000107c61170();
  func_0x00010006e7f4(appuStack_b0);
  ppuVar13 = *(undefined8 ***)(unaff_x20 + _DAT_112f51008);
  uVar3 = 0x112f50ca0;
  func_0x0001000285a8(0x112f50ca0,&UNK_10dba5d18);
  appuStack_b0[0] = ppuVar13;
  lStack_98 = uVar3;
  func_0x000107c61434(ppuVar13);
  func_0x000104440854(appuStack_b0,0xd000000000000027,0x800000010f134ff0);
  func_0x000107c61170();
  pppuVar4 = appuStack_b0;
  func_0x00010006e7f4();
  func_0x00010328a37c();
  func_0x000107c613fc();
  uVar15 = 1;
  pppuVar4[3] = (undefined8 **)0x2;
  pppuVar4[2] = (undefined8 **)0x1;
  ppuVar13 = (undefined8 **)0x0;
  FUN_10329650c();
  pppuVar4[4] = ppuVar13;
  uVar3 = 0x112f50ca8;
  puVar11 = &UNK_10dba5d20;
  func_0x0001000285a8(0x112f50ca8,&UNK_10dba5d20);
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0e2b8;
  appuStack_b0[0] = pppuVar4;
  lStack_98 = uVar3;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  pppuVar4 = appuStack_b0;
  func_0x000104440854(pppuVar4,ppuVar5,puVar11);
  func_0x000107c6142c(puVar11);
  func_0x000107c61170(pppuVar4);
  func_0x00010006e7f4(appuStack_b0);
  ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  lVar6 = 0;
  func_0x0001002ed07c();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0bc78;
  appuStack_b0[0] = ppuVar13;
  lStack_98 = lVar6;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc78);
  pppuVar4 = appuStack_b0;
  func_0x000104440854(pppuVar4,ppuVar7,ppuVar5);
  func_0x000107c6142c(ppuVar5);
  func_0x000107c61170(pppuVar4);
  func_0x00010006e7f4(appuStack_b0);
  ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  ppuVar8 = &PTR____CFConstantStringClassReference_110f0bc98;
  appuStack_b0[0] = ppuVar13;
  lStack_98 = lVar6;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc98);
  pppuVar4 = appuStack_b0;
  func_0x000104440854(pppuVar4,ppuVar8,ppuVar7);
  func_0x000107c6142c(ppuVar7);
  func_0x000107c61170(pppuVar4);
  func_0x00010006e7f4(appuStack_b0);
  lVar14 = *(long *)(unaff_x20 + _DAT_112f50ff0);
  ppuVar5 = ppuVar8;
  if (lVar14 == 3) {
    ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f0be38;
    appuStack_b0[0] = ppuVar13;
    lStack_98 = lVar6;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0be38);
    pppuVar4 = appuStack_b0;
    func_0x000104440854(pppuVar4,ppuVar5,ppuVar8);
    func_0x000107c6142c(ppuVar8);
    func_0x000107c61170(pppuVar4);
    func_0x00010006e7f4(appuStack_b0);
  }
  ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0c238;
  appuStack_b0[0] = ppuVar13;
  lStack_98 = lVar6;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c238);
  pppuVar4 = appuStack_b0;
  func_0x000104440854(pppuVar4,ppuVar7,ppuVar5);
  func_0x000107c6142c(ppuVar5);
  func_0x000107c61170(pppuVar4);
  pppuVar4 = appuStack_b0;
  func_0x00010006e7f4(pppuVar4);
  func_0x000104440b54();
  appuStack_b0[0] = (undefined8 **)0x0;
  pppuVar12 = appuStack_b0;
  func_0x000107c5f9e4();
  func_0x000107c61170(pppuVar4);
  ppuVar13 = appuStack_b0[0];
  if (appuStack_b0[0] == (undefined8 **)0x0) {
    ppuVar13 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0c558;
  puStack_b8 = ppuVar13;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c558);
  FUN_103299650(lVar14);
  uVar3 = uVar15;
  func_0x000107c5c980(*(undefined8 *)(unaff_x20 + _DAT_112f50ff8));
  ppuVar9 = (undefined8 **)0x0;
  func_0x000104446cc0();
  ppuVar10 = ppuVar9;
  func_0x000107c610f8();
  func_0x000104446a4c(uVar15,param_2,param_3,param_4,(double)(float)uVar3,0x4028000000000000,
                      0x3ffc71c71c71c71c);
  apuStack_d8[0] = ppuVar10;
  puStack_c0 = ppuVar9;
  if (ppuVar9 == (undefined8 **)0x0) {
    func_0x00010006e7f4(apuStack_d8);
    func_0x000100216878(appuStack_b0,ppuVar5,pppuVar12);
    func_0x000107c6142c(pppuVar12);
    func_0x00010006e7f4(appuStack_b0);
  }
  else {
    func_0x000100102924(apuStack_d8,appuStack_b0);
    ppuVar10 = ppuVar13;
    func_0x000107c61558(ppuVar13);
    apuStack_d8[0] = ppuVar13;
    func_0x0001001029e8(appuStack_b0,ppuVar5,pppuVar12,ppuVar10);
    func_0x000107c6142c(pppuVar12);
    puStack_b8 = apuStack_d8[0];
  }
  ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  apuStack_d8[0] = ppuVar13;
  puStack_c0 = (undefined8 *)lVar6;
  if (lVar6 == 0) {
    func_0x00010006e7f4(apuStack_d8);
    func_0x000100216878(appuStack_b0,0xd000000000000027,0x800000010f134d70);
    func_0x00010006e7f4(appuStack_b0);
    ppuVar13 = (undefined8 **)puStack_b8;
  }
  else {
    func_0x000100102924(apuStack_d8,appuStack_b0);
    puVar1 = puStack_b8;
    ppuVar13 = (undefined8 **)puStack_b8;
    func_0x000107c61558(puStack_b8);
    apuStack_d8[0] = puVar1;
    func_0x0001001029e8(appuStack_b0,0xd000000000000027,0x800000010f134d70,ppuVar13);
    ppuVar13 = (undefined8 **)apuStack_d8[0];
  }
  func_0x000103b16598(0);
  ppuVar10 = ppuVar13;
  func_0x000103b1541c(ppuVar13);
  func_0x000107c6142c(ppuVar13);
  func_0x000104445474(0);
  func_0x000107c610f8();
  ppuVar13 = ppuVar10;
  func_0x000107c61434(ppuVar10);
  func_0x000104445210();
  func_0x000107c6142c(ppuVar10);
  func_0x000107c61170(uVar2);
  return ppuVar13;
}



/* Entry: 10329a874; end: 10329a8a7; -[_TtC28SpotlightCustomInterstitials34SpotlightTiledInterstitialSnapItem pageData] */

void FUN_10329a874(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10329a2a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329a8a8; end: 10329a907; -[_TtC28SpotlightCustomInterstitials34SpotlightTiledInterstitialSnapItem init] */

void FUN_10329a8a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightTiledInterstitialSnapItem",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329a8d4);
  (*pcVar1)();
}



/* Entry: 10329a908; end: 10329a963; -[_TtC28SpotlightCustomInterstitials34SpotlightTiledInterstitialSnapItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329a928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329a948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329a92c) */
/* WARNING: Removing unreachable block (ram,0x00010329a94c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329a908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f50fe8 + 8))
  ;
  return;
}



/* Entry: 10329a964; end: 10329a983;  */

void FUN_10329a964(void)

{
  func_0x000107c61168(&PTR_PTR_1128c66a8);
  return;
}



/* Entry: 10329a984; end: 10329ab1b;  */

undefined1  [16] FUN_10329a984(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f135280);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f135260);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329aa50);
  (*pcVar1)();
}



/* Entry: 10329ab1c; end: 10329ab57; -[SCContentNavigationConfigKeys init] */

void FUN_10329ab1c(undefined8 param_1)

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



/* Entry: 10329ab58; end: 10329ab8b;  */

void FUN_10329ab58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329ab8c; end: 10329ab8f; -[SCContentNavigationConfigKeys .cxx_destruct] */

void FUN_10329ab8c(void)

{
  return;
}



/* Entry: 10329ab90; end: 10329abaf;  */

void FUN_10329ab90(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6788);
  return;
}



/* Entry: 10329abb0; end: 10329abc3;  */

bool FUN_10329abb0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10329abc4; end: 10329ac6f;  */

void FUN_10329abc4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10329ac70; end: 10329ac97;  */

void FUN_10329ac70(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10329ac98; end: 10329aca7; -[_TtC41SCSpotlightInterstitialRepositoryServices38SCSpotlightInterstitialCandidateRecord tilePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329ac98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f51060);
}



/* Entry: 10329aca8; end: 10329acb7; -[_TtC41SCSpotlightInterstitialRepositoryServices38SCSpotlightInterstitialCandidateRecord candidateStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329aca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f51068));
  return;
}



/* Entry: 10329acb8; end: 10329accf; -[_TtC41SCSpotlightInterstitialRepositoryServices38SCSpotlightInterstitialCandidateRecord similarStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329acb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f51070);
  (*(code *)&SUB_101c84db4)(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329acd0; end: 10329acdf; -[_TtC41SCSpotlightInterstitialRepositoryServices38SCSpotlightInterstitialCandidateRecord insertionStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329acd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f51078);
}



/* Entry: 10329ace0; end: 10329adf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ace0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51060) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f51068) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f51070) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f51078) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329adf8; end: 10329aea7; -[_TtC41SCSpotlightInterstitialRepositoryServices38SCSpotlightInterstitialCandidateRecord initWithTilePosition:candidateStory:similarStories:insertionStrategy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329adf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000101c84db4(0);
  func_0x000107c5fc54(param_5,uVar3);
  *(undefined8 *)(param_1 + _DAT_112f51060) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f51068) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f51070) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f51078) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10329aea8; end: 10329aed3; -[_TtC41SCSpotlightInterstitialRepositoryServices38SCSpotlightInterstitialCandidateRecord init] */

void FUN_10329aea8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightInterstitialRepositoryServices.SCSpotlightInterstitialCandidateRecord"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329aed4);
  (*pcVar1)();
}



/* Entry: 10329aed4; end: 10329aed7;  */

void FUN_10329aed4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329aed8; end: 10329af0f; -[_TtC41SCSpotlightInterstitialRepositoryServices38SCSpotlightInterstitialCandidateRecord .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329aed8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f51068));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f51070));
  return;
}



/* Entry: 10329af10; end: 10329af1f; -[_TtC41SCSpotlightInterstitialRepositoryServices29SCSpotlightInterstitialRecord itemPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329af10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f51080);
}



/* Entry: 10329af20; end: 10329af2f; -[_TtC41SCSpotlightInterstitialRepositoryServices29SCSpotlightInterstitialRecord expirationTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329af20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f51088);
}



/* Entry: 10329af30; end: 10329af8b; -[_TtC41SCSpotlightInterstitialRepositoryServices29SCSpotlightInterstitialRecord requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329af30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51090))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51090);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329af8c; end: 10329af9f; -[_TtC41SCSpotlightInterstitialRepositoryServices29SCSpotlightInterstitialRecord candidates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329af8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f51098);
  FUN_10329b290(param_4);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329afa0; end: 10329afeb;  */

void FUN_10329afa0(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_5)(param_4);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329afec; end: 10329b113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329afec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51080) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f51088) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51090);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f51098) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329b114; end: 10329b1db; -[_TtC41SCSpotlightInterstitialRepositoryServices29SCSpotlightInterstitialRecord initWithItemPosition:expirationTimestampMs:requestID:candidates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329b114(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    param_2 = 0;
    lVar3 = lVar2;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_5;
  }
  FUN_10329b290();
  func_0x000107c5fc54(param_6,lVar3);
  *(undefined8 *)(param_1 + _DAT_112f51080) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f51088) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112f51090);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f51098) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329b1dc; end: 10329b23b; -[_TtC41SCSpotlightInterstitialRepositoryServices29SCSpotlightInterstitialRecord init] */

void FUN_10329b1dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightInterstitialRepositoryServices.SCSpotlightInterstitialRecord",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329b208);
  (*pcVar1)();
}



/* Entry: 10329b23c; end: 10329b23f;  */

void FUN_10329b23c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f510a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba5ef0;
  func_0x000107c61520(&UNK_10dba5ef0,&UNK_110631f88);
  puRam0000000112f510a0 = puVar1;
  return;
}



/* Entry: 10329b240; end: 10329b27f;  */

void FUN_10329b240(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f510a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba5ef0;
  func_0x000107c61520(&UNK_10dba5ef0,&UNK_110631f88);
  puRam0000000112f510a0 = puVar1;
  return;
}



/* Entry: 10329b280; end: 10329b28f;  */

undefined1  [16] FUN_10329b280(void)

{
  return ZEXT816(0x110631f88);
}



/* Entry: 10329b290; end: 10329b2af;  */

void FUN_10329b290(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6838);
  return;
}



/* Entry: 10329b2b0; end: 10329b2eb; -[_TtC41SCSpotlightInterstitialRepositoryServices29SCSpotlightInterstitialRecord .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329b2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329b2d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329b2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f51090 + 8))
  ;
  return;
}



/* Entry: 10329b2ec; end: 10329b30b;  */

void FUN_10329b2ec(void)

{
  func_0x000107c61168(&PTR_PTR_1128c6910);
  return;
}



/* Entry: 10329b30c; end: 10329b30f;  */

void FUN_10329b30c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329b310; end: 10329b32f; -[SCSpotlightInterstitialRepositoryServices repository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329b310(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f510f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329b330; end: 10329b37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329b330(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f510f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329b37c; end: 10329b3db; -[SCSpotlightInterstitialRepositoryServices init] */

void FUN_10329b37c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightInterstitialRepositoryServices.SCSpotlightInterstitialRepositoryServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329b3a8);
  (*pcVar1)();
}


