/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10106403c; end: 1010640e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106403c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
    lVar2 = param_2;
    func_0x000101062d7c();
    *(bool *)(lVar2 + _DAT_112d57258) = lVar1 == 0;
    lVar1 = lVar2;
    func_0x00010106201c();
    func_0x000107c550d8();
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1010640e8; end: 10106413f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010640e8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112d572c0) = uVar1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101064140; end: 101064167; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController viewDidLoad] */

void FUN_101064140(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010638c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101064168; end: 1010641d3; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101064168(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidLayoutSubviews_112684cc8;
  lStack_30 = param_1;
  lStack_28 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112d572a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1010641d4; end: 1010641db; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController supportedInterfaceOrientations] */

undefined8 FUN_1010641d4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 1010641dc; end: 101064277;  */

void FUN_1010641dc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  lVar1 = 0x112d57340;
  func_0x0001000285a8(0x112d57340,&UNK_10d91df90);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  func_0x000107c61434(uVar4);
  uVar4 = 0x112d56eb0;
  func_0x0001000285a8(0x112d56eb0,&UNK_10d91da38);
  uVar2 = uVar4;
  func_0x00010106521c();
  puVar3 = &UNK_11037aca0;
  func_0x0001020f91bc(lVar1,&UNK_11037aca0,uVar4,uVar2);
  *param_1 = lVar1;
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 101064278; end: 101064347;  */

/* WARNING: Possible PIC construction at 0x0001010642ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101064324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010642f0) */
/* WARNING: Removing unreachable block (ram,0x000101064328) */

void FUN_101064278(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_101055ddc();
  func_0x000104884898();
  puVar1 = &UNK_11037b418;
  func_0x000107c613fc(&UNK_11037b418,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  (**(code **)(*param_1 + 0x60))(FUN_1010652b4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101064348; end: 1010643a7; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController initWithNibName:bundle:] */

void FUN_101064348(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightManagement.SpotlightManagementGridViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101064374);
  (*pcVar1)();
}



/* Entry: 1010643a8; end: 10106446f; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010643f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010643f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010643a8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d57288));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d57290));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d57298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d572a0));
  return;
}



/* Entry: 101064470; end: 10106448f;  */

void FUN_101064470(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab330);
  return;
}



/* Entry: 101064490; end: 1010647f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101064490(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_d0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar14 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c8 = lVar12 - extraout_x12;
  if ((param_3 & 1) != 0) {
    plVar3 = (long *)(unaff_x20 + _DAT_112d572c8);
    func_0x000107c61428(plVar3,auStack_78,0,0);
    if (plVar3[3] != 0) {
      func_0x0001000a8868();
      lVar17 = *plVar3;
      func_0x000107c61428(lVar17 + 0x10,auStack_90,0,0);
      lVar17 = *(long *)(lVar17 + 0x58);
      if (*(long *)(lVar17 + 0x10) != 0) {
        func_0x000107c61434(lVar17);
        func_0x000100029284();
        if ((param_2 & 1) == 0) {
          func_0x000107c6142c(lVar17);
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + param_1 * 0x10);
          puVar7 = (undefined *)*puVar1;
          uVar6 = puVar1[1];
          func_0x000107c61434(uVar6);
          func_0x000107c6142c(lVar17);
          FUN_101062be8();
          puStack_c0 = puVar7;
          uStack_b8 = uVar6;
          func_0x0001020e9c30(puVar14,&puStack_c0);
          func_0x000107c6142c(uVar6);
          func_0x000107c61170(lVar17);
          puVar4 = puVar14;
          (**(code **)(lVar11 + 0x30))(puVar14,1,lVar2);
          lVar17 = lStack_c8;
          if ((int)puVar4 == 1) {
            func_0x000101065314(puVar14,0x112d54580,&UNK_10d91b480);
          }
          else {
            pcVar16 = *(code **)(lVar11 + 0x20);
            lVar5 = lStack_c8;
            (*pcVar16)(lStack_c8,puVar14,lVar2);
            func_0x000101062d7c();
            uVar6 = *(undefined8 *)(lVar5 + _DAT_112d57248);
            func_0x000107c61174(uVar6);
            func_0x000107c61170(lVar5);
            uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d572e0) + _DAT_112d57248);
            puVar7 = &UNK_11037b350;
            func_0x000107c613fc(&UNK_11037b350,0x18,7);
            func_0x000107c61614(puVar7 + 0x10,uVar6);
            (**(code **)(lVar11 + 0x10))(lVar12,lVar17,lVar2);
            uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
            uVar18 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
            puVar8 = &UNK_11037b378;
            func_0x000107c613fc(&UNK_11037b378,uVar18 + lVar13,uVar10 | 7);
            *(undefined **)(puVar8 + 0x10) = puVar7;
            (*pcVar16)(puVar8 + uVar18,lVar12,lVar2);
            puVar7 = &UNK_11037b3a0;
            func_0x000107c613fc(&UNK_11037b3a0,0x20,7);
            *(code **)(puVar7 + 0x10) = FUN_101065198;
            *(undefined **)(puVar7 + 0x18) = puVar8;
            pcStack_a0 = FUN_1010651c8;
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0x42000000;
            puStack_b0 = &UNK_10006eb60;
            puStack_a8 = &UNK_11037b3b8;
            ppuVar9 = &puStack_c0;
            puStack_98 = puVar7;
            func_0x000107c60bc4(ppuVar9);
            puVar7 = puStack_98;
            func_0x000107c61174(uVar15);
            func_0x000107c61574(puVar7);
            func_0x000107c4e54c(uVar15);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar15);
            (**(code **)(lVar11 + 8))(lVar17,lVar2);
            func_0x000107c61574(puVar8);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1010647f8; end: 1010649df; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController didUpdateThumbnailStateChangeRequest:] */

/* WARNING: Possible PIC construction at 0x000101064858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010106487c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010106488c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010648c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101064890) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000101064880) */
/* WARNING: Removing unreachable block (ram,0x00010106485c) */
/* WARNING: Removing unreachable block (ram,0x0001010648cc) */

void FUN_1010647f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    lVar1 = param_3;
    func_0x000107c3ef0c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c5faec();
      param_3 = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1010649e0; end: 101064af3; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1010649e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_7);
  puVar1 = (undefined8 *)(param_3 + _DAT_112d572a8);
  if (*(char *)(puVar1 + 2) == '\x01') {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_3);
    func_0x000107c3ec60(param_5);
    func_0x000107c609cc();
    FUN_101064f68();
    func_0x000107c61170(param_5);
    (**(code **)(lVar4 + 8))(puVar3,lVar2);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 2) = 0;
    func_0x000107c61170(param_3);
  }
  else {
    param_1 = *puVar1;
    param_2 = puVar1[1];
    (**(code **)(lVar4 + 8))(puVar3,lVar2);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 101064af4; end: 101064afb; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_101064af4(void)

{
  return 0x4000000000000000;
}



/* Entry: 101064afc; end: 101064b03; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_101064afc(void)

{
  return 0x4000000000000000;
}



/* Entry: 101064b04; end: 101064b17; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_101064b04(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 101064b18; end: 101064b73; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController scrollViewDidScroll:] */

/* WARNING: Possible PIC construction at 0x000101064b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101064b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101064b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001020ebcfc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101064b74; end: 101064bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101064b74(undefined8 *param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_40 = param_1[4];
  uStack_38 = (undefined1)param_1[5];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  func_0x0001002a64a8(&uStack_60);
  return 1;
}



/* Entry: 101064bc8; end: 101064c2b; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101064bc8(undefined8 param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_60 = 4;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_28 = 0xa0;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101064c2c; end: 101064c83; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_101064c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_101065058();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101064c84; end: 101064c87; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController cardToExpandTransition] */

void FUN_101064c84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101064c88; end: 101064cef; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController cardTransitionWillBeginWithView:] */

/* WARNING: Possible PIC construction at 0x000101064cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101064cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101064cc8) */
/* WARNING: Removing unreachable block (ram,0x000101064cdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101064c88(long param_1)

{
  func_0x000107c61174();
  func_0x000101062d7c();
  func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_112d57248));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101064cf0; end: 101064d43; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Possible PIC construction at 0x000101064d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101064d30) */

void FUN_101064cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1010650f4(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101064d44; end: 101064d93; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController pageViewName] */

undefined8 FUN_101064d44(void)

{
  return 0x13a;
}



/* Entry: 101064d94; end: 101064e0b;  */

void FUN_101064d94(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101065364(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101064e0c; end: 101064e2f;  */

void FUN_101064e0c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d57348;
  plVar5 = (long *)&UNK_10da3b140;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101065364(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101064e30; end: 101064f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101064e30(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112d57290;
  func_0x000107c30a40();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d572a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d572a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d572b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d572c0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d572c8);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = _DAT_112d572d0;
  uVar4 = 0x112d56ea8;
  func_0x0001000285a8(0x112d56ea8,&UNK_10d91dd10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _DAT_112d572d8;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d572e0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SpotlightManagement/SpotlightManagementGridViewController.swift",0x3f,2,0x67,
                      0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101064f68);
  (*pcVar3)();
}



/* Entry: 101064f68; end: 101065057;  */

undefined1  [16]
FUN_101064f68(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  dVar7 = param_1;
  func_0x000108f553ec();
  if (param_5 == 0) {
    dVar4 = 1.6666666666666667;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar2 = puVar1;
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51724();
    dVar3 = dVar7;
    dVar4 = param_2;
    dVar5 = param_3;
    dVar6 = param_4;
    func_0x000107c61170(puVar2);
    func_0x000107c517cc(puVar1);
    dVar7 = dVar7 + dVar4;
    param_3 = param_3 - (dVar4 + dVar6);
    param_4 = param_4 - (dVar3 + dVar5);
    dVar4 = dVar7;
    func_0x000107c609b0(dVar7,param_2 + dVar3,param_3,param_4);
    func_0x000107c609cc(dVar7,param_2 + dVar3,param_3,param_4);
    dVar4 = dVar4 / dVar7;
  }
  dVar7 = (param_1 + -6.0) * 0.25;
  auVar8._0_8_ = (long)dVar7;
  auVar8._8_8_ = (long)(dVar7 * dVar4);
  return auVar8;
}



/* Entry: 101065058; end: 1010650f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101065058(double param_1,double param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112d572c0) & 1) == 0) {
    func_0x000101062d7c();
    uVar2 = *(undefined8 *)(param_3 + _DAT_112d57248);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61174(uVar2);
    func_0x000107c404a0();
    func_0x000107c3d9b4(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
    bVar1 = param_2 + param_1 <= 0.0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1010650f4; end: 101065197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010650f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x000101062d7c();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112d57248);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c58cd8(uVar2,param_2,1);
  func_0x000107c61170(uVar2);
  if (param_1 == 1) {
    uStack_70 = 4;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_38 = 0xa0;
    func_0x0001002a64a8(&uStack_70);
  }
  return;
}



/* Entry: 101065198; end: 1010651c7;  */

void FUN_101065198(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar3 = 0;
  func_0x000107c5eff8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = 0x112d57310;
    func_0x0001000285a8(0x112d57310,&UNK_10d91df70);
    lVar2 = 0;
    func_0x000107c5eff8();
    lVar6 = *(long *)(lVar2 + -8);
    uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar7 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    func_0x000107c613fc(lVar1,uVar7 + *(long *)(lVar6 + 0x48),uVar5 | 7);
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    (**(code **)(lVar6 + 0x10))
              (lVar1 + uVar7,unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff)),lVar2);
    lVar6 = lVar1;
    func_0x000107c5fc48(lVar1,lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c4fd90(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1010651c8; end: 1010651e7;  */

void FUN_1010651c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010651e8; end: 101065203;  */

void FUN_1010651e8(long param_1,long param_2)

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



/* Entry: 101065204; end: 10106525b;  */

void FUN_101065204(void)

{
  FUN_101063fa8();
  return;
}



/* Entry: 10106525c; end: 101065263;  */

/* WARNING: Possible PIC construction at 0x0001010642ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101064324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010642f0) */
/* WARNING: Removing unreachable block (ram,0x000101064328) */

void FUN_10106525c(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101055ddc();
  func_0x000104884898();
  puVar1 = &UNK_11037b418;
  func_0x000107c613fc(&UNK_11037b418,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar2);
  (**(code **)(*param_1 + 0x60))(FUN_1010652b4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101065264; end: 1010652b3;  */

void FUN_101065264(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d57330 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d56d60;
  func_0x00010002969c(0x112d56d60,&UNK_10d91d7c0);
  puVar2 = &DAT_10da5cf90;
  func_0x000107c61520(&DAT_10da5cf90,uVar1);
  puRam0000000112d57330 = puVar2;
  return;
}



/* Entry: 1010652b4; end: 1010652c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010652b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1d0 [96];
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined1 auStack_108 [24];
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_108,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112d571c8);
    uStack_e8 = puVar1[1];
    uStack_f0 = *puVar1;
    uStack_d8 = puVar1[3];
    uStack_e0 = puVar1[2];
    uStack_a8 = puVar1[9];
    uStack_b0 = puVar1[8];
    uStack_98 = puVar1[0xb];
    uStack_a0 = puVar1[10];
    uStack_c8 = puVar1[5];
    uStack_d0 = puVar1[4];
    uStack_b8 = puVar1[7];
    uStack_c0 = puVar1[6];
    uStack_168 = puVar1[1];
    uStack_170 = *puVar1;
    uStack_158 = puVar1[3];
    uStack_160 = puVar1[2];
    uStack_128 = puVar1[9];
    uStack_130 = puVar1[8];
    uStack_118 = puVar1[0xb];
    uStack_120 = puVar1[10];
    uStack_148 = puVar1[5];
    uStack_150 = puVar1[4];
    uStack_138 = puVar1[7];
    uStack_140 = puVar1[6];
    uVar3 = param_1[4];
    uVar5 = param_1[7];
    uVar4 = param_1[6];
    puVar1[5] = param_1[5];
    puVar1[4] = uVar3;
    puVar1[7] = uVar5;
    puVar1[6] = uVar4;
    uVar3 = param_1[8];
    uVar5 = param_1[0xb];
    uVar4 = param_1[10];
    puVar1[9] = param_1[9];
    puVar1[8] = uVar3;
    puVar1[0xb] = uVar5;
    puVar1[10] = uVar4;
    uVar3 = *param_1;
    uVar5 = param_1[3];
    uVar4 = param_1[2];
    puVar1[1] = param_1[1];
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    FUN_101061b74(&uStack_90,auStack_1d0);
    FUN_101061b74(&uStack_90,auStack_1d0);
    func_0x000101061bb0(&uStack_f0,auStack_1d0);
    func_0x000101061c34(&uStack_170,0x112d56ec8,&UNK_10d91da40);
    FUN_10105f904(&uStack_f0);
    func_0x000101061c34(&uStack_f0,0x112d56ec8,&UNK_10d91da40);
    func_0x000101061c00(&uStack_90);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1010652c4; end: 101065353;  */

undefined8 FUN_1010652c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d56fc8;
  func_0x0001000285a8(0x112d56fc8,&UNK_10d91dae0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101065354; end: 101065363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065354(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112d572c0) = uVar1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101065364; end: 1010653a3;  */

void FUN_101065364(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010653a4; end: 1010653a7;  */

void FUN_1010653a4(void)

{
  FUN_101063fa8();
  return;
}



/* Entry: 1010653a8; end: 1010653d7;  */

void FUN_1010653a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010653d8; end: 1010654cf;  */

undefined8
FUN_1010653d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c43b5c(param_2);
  func_0x000107c61180();
  FUN_101065d70(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_10106550c(uVar1,param_3,param_4);
  uVar2 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 1010654d0; end: 1010654eb;  */

void FUN_1010654d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010654ec; end: 10106550b;  */

void FUN_1010654ec(void)

{
  func_0x000107c61168(&PTR_PTR_112d57438);
  return;
}



/* Entry: 10106550c; end: 1010655cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106550c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d574a8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d574b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d574b8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d574c0);
  *puVar1 = 0xd000000000000022;
  puVar1[1] = 0x800000010ef21f30;
  *(undefined8 *)(unaff_x20 + _DAT_112d57490) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d57498) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d574a0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010655d0; end: 101065643; -[_TtC26AddFriendsPageBillboardFST34AddFriendsPageBillboardFSTProvider canShowCampaign:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1010655d0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if (param_3 == *(long *)(param_1 + _DAT_112d574c0) &&
        param_2 == ((long *)(param_1 + _DAT_112d574c0))[1]) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 101065644; end: 1010658af;  */

/* WARNING: Possible PIC construction at 0x00010106586c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101065884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101065870) */
/* WARNING: Removing unreachable block (ram,0x000101065888) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065644(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_3 != (code *)0x0) {
      (*param_3)();
    }
  }
  else if (param_3 != (code *)0x0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112d57498);
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c615f0(param_2);
    lVar3 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d574a8);
      *(long *)(unaff_x20 + _DAT_112d574a8) = param_1;
      func_0x000107c61174(lVar3);
      func_0x000107c61170(uVar7);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d574b0);
      uVar7 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = param_3;
      puVar1[1] = param_4;
      func_0x000107c6157c(param_4);
      func_0x00010058d43c(uVar7,uVar2);
      *(undefined1 *)(unaff_x20 + _DAT_112d574b8) = 0;
      func_0x000107c610f8(PTR_PTR_1126af668);
      func_0x000107c47d3c();
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d574a0);
      puVar4 = &UNK_11037b510;
      func_0x000107c613fc(&UNK_11037b510,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uStack_70 = 0x101065df4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11037b528;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4();
      puVar4 = puStack_68;
      func_0x000107c615f0(param_2);
      func_0x000107c61574(puVar4);
      func_0x000107c3ed20(uVar7);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
    }
    else {
      func_0x000107c61170();
      (*param_3)();
      func_0x00010058d43c(param_3,param_4);
      func_0x000107c61170(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
    return;
  }
  return;
}



/* Entry: 1010658b0; end: 101065907;  */

void FUN_1010658b0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101065908(0);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101065908; end: 101065ae3;  */

/* WARNING: Possible PIC construction at 0x000101065a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101065ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101065a88) */
/* WARNING: Removing unreachable block (ram,0x000101065ad0) */
/* WARNING: Removing unreachable block (ram,0x000101065a98) */
/* WARNING: Removing unreachable block (ram,0x000101065ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065908(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = _DAT_112d574a8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d574a8);
  if (lVar3 == 0) goto LAB_101065a18;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d57490);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if ((param_1 & 1) == 0) {
    if (lVar6 != 0) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar5 = puVar4;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar4);
      func_0x000107c4c4c0(lVar6);
      goto LAB_101065a00;
    }
  }
  else if (lVar6 != 0) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar5 = puVar4;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar4);
    func_0x000107c4c4b8(lVar6);
LAB_101065a00:
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(lVar3);
LAB_101065a18:
  lVar6 = *(long *)(unaff_x20 + _DAT_112d57498);
  lVar3 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112d574b0);
  lVar3 = *plVar1;
  lVar6 = plVar1[1];
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000100b64c10(lVar3,lVar6);
  func_0x000107c61170(uVar7);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 101065ae4; end: 101065bc7;  */

/* WARNING: Possible PIC construction at 0x000101065ba0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065ae4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  if (((*(byte *)(unaff_x20 + _DAT_112d574b8) & 1) == 0) &&
     (puVar1 = *(undefined **)(unaff_x20 + _DAT_112d574a8), puVar1 != (undefined *)0x0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112d574b8) = 1;
    lVar3 = *(long *)(unaff_x20 + _DAT_112d57490);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar1 = puVar2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar2);
      func_0x000107c4c4bc(lVar3);
      func_0x000107c615e8(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101065bc8; end: 101065c8f; -[_TtC26AddFriendsPageBillboardFST34AddFriendsPageBillboardFSTProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000101065c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101065c70) */

void FUN_101065bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11037b4e8;
    func_0x000107c613fc(&UNK_11037b4e8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_101065de8;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101065644(param_3,param_4,pcVar3,puVar2);
  func_0x00010058d43c(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101065c90; end: 101065cef; -[_TtC26AddFriendsPageBillboardFST34AddFriendsPageBillboardFSTProvider init] */

void FUN_101065c90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsPageBillboardFST.AddFriendsPageBillboardFSTProvider",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101065cbc);
  (*pcVar1)();
}



/* Entry: 101065cf0; end: 101065d6f; -[_TtC26AddFriendsPageBillboardFST34AddFriendsPageBillboardFSTProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065cf0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57490));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57498));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d574a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d574a8));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d574b0),
                      ((undefined8 *)(param_1 + _DAT_112d574b0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d574c0 + 8))
  ;
  return;
}



/* Entry: 101065d70; end: 101065d8f;  */

void FUN_101065d70(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab448);
  return;
}



/* Entry: 101065d90; end: 101065dbb; -[_TtC26AddFriendsPageBillboardFST34AddFriendsPageBillboardFSTProvider addFriendsWorkflowSkipped:] */

void FUN_101065d90(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101065908(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101065dbc; end: 101065de7; -[_TtC26AddFriendsPageBillboardFST34AddFriendsPageBillboardFSTProvider addFriendsWorkflowCompleted:] */

void FUN_101065dbc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101065908(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101065de8; end: 101065e17;  */

void FUN_101065de8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101065df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101065e18; end: 101065e23; -[SCAddFriendsPageBillboardFSTEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065e18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d574f0;
  func_0x000107c61428(param_1 + _DAT_112d574f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101065e24; end: 101065e2f; -[SCAddFriendsPageBillboardFSTEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d574f0;
  func_0x000107c61428(param_1 + _DAT_112d574f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101065e30; end: 101065e3b; -[SCAddFriendsPageBillboardFSTEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065e30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d574f8;
  func_0x000107c61428(param_1 + _DAT_112d574f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101065e3c; end: 101065e47; -[SCAddFriendsPageBillboardFSTEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d574f8;
  func_0x000107c61428(param_1 + _DAT_112d574f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101065e48; end: 101065e53; -[SCAddFriendsPageBillboardFSTEntryPoint addFriendsScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065e48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57500;
  func_0x000107c61428(param_1 + _DAT_112d57500,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101065e54; end: 101065e97;  */

void FUN_101065e54(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101065e98; end: 101065ea3; -[SCAddFriendsPageBillboardFSTEntryPoint setAddFriendsScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57500;
  func_0x000107c61428(param_1 + _DAT_112d57500,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101065ea4; end: 101065ef7;  */

void FUN_101065ea4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101065ef8; end: 101065f3f; -[SCAddFriendsPageBillboardFSTEntryPoint addFriendsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065ef8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d57508;
  func_0x000107c61428(param_1 + _DAT_112d57508,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101065f40; end: 101065fa3; -[SCAddFriendsPageBillboardFSTEntryPoint setAddFriendsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101065f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d57508;
  func_0x000107c61428(param_1 + _DAT_112d57508,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101065fa4; end: 10106616b;  */

/* WARNING: Possible PIC construction at 0x0001010660b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010660c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010660d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101066140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101066130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101066144) */
/* WARNING: Removing unreachable block (ram,0x0001010660d4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010660c4) */
/* WARNING: Removing unreachable block (ram,0x0001010660b4) */
/* WARNING: Removing unreachable block (ram,0x000101066134) */

void FUN_101065fa4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3e8cc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d6e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3d6e8();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1010654ec(0);
        func_0x000107c613fc();
        func_0x000107c43b5c(lVar2);
        func_0x000107c61180();
        FUN_101065d70(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar3);
        func_0x000107c61174(unaff_x20);
        FUN_10106550c(lVar2,lVar3,unaff_x20);
        func_0x000107c4e9e4(lVar1);
        func_0x000107c61180();
        func_0x000107c4fba8();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10106616c; end: 101066193; -[SCAddFriendsPageBillboardFSTEntryPoint begin] */

void FUN_10106616c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101065fa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101066194; end: 1010661d7; -[SCAddFriendsPageBillboardFSTEntryPoint end] */

void FUN_101066194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010661d8; end: 101066447;  */

void FUN_1010661d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52c50();
    }
    else {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10de0a0)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef21f60,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52498();
      }
      else {
        if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10de080)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000016,0x800000010ef21f80,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "AddFriendsPageBillboardFST/SCAddFriendsPageBillboardFSTEntryPoint.swift"
                                ,0x47,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101066448);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52490();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101066448; end: 1010664f3; -[SCAddFriendsPageBillboardFSTEntryPoint setValue:forIvarName:] */

void FUN_101066448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1010661d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010664f4; end: 101066587; -[SCAddFriendsPageBillboardFSTEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010664f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d574f0,0);
  func_0x000107c61614(param_1 + _DAT_112d574f8,0);
  func_0x000107c61614(param_1 + _DAT_112d57500,0);
  *(undefined8 *)(param_1 + _DAT_112d57508) = 0;
  *(undefined8 *)(param_1 + _DAT_112d57510) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101066588; end: 1010665bb;  */

void FUN_101066588(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010665bc; end: 101066623; -[SCAddFriendsPageBillboardFSTEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010665bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d574f0);
  func_0x000107c61610(param_1 + _DAT_112d574f8);
  func_0x000107c61610(param_1 + _DAT_112d57500);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d57508));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d57510));
  return;
}



/* Entry: 101066624; end: 101066643;  */

void FUN_101066624(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab538);
  return;
}



/* Entry: 101066644; end: 10106664b; -[_TtC29AllContactsSyncingServiceImpl17AllContactsSyncer syncingStatusObserver] */

void FUN_101066644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 10106664c; end: 10106675f;  */

/* WARNING: Possible PIC construction at 0x0001010666a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010666a8) */

void FUN_10106664c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = 0;
  func_0x0001010779cc(0);
  if (lVar1 == 0) {
    FUN_10107784c();
    func_0x000107c4d664(uVar3,param_2,uVar2);
  }
  else {
    FUN_10107775c();
    func_0x000107c4d664(uVar3,param_2,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101066760; end: 1010668d7;  */

/* WARNING: Possible PIC construction at 0x0001010667e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101066868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101066894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010667e8) */
/* WARNING: Removing unreachable block (ram,0x00010106686c) */

void FUN_101066760(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar1 = 0;
    func_0x0001010779cc(0);
    FUN_10107784c();
    func_0x000107c4d664(uVar3);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
    func_0x0001000285a8(0x112d57628,&UNK_10d91e128);
    func_0x000107c5c548(lVar1);
    func_0x000107c61180();
    func_0x0001000b637c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1010668d8; end: 101066aaf;  */

/* WARNING: Possible PIC construction at 0x000101066958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101066a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010106695c) */
/* WARNING: Removing unreachable block (ram,0x000101066a24) */

void FUN_1010668d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c44484();
      uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar4 = 0;
      func_0x0001010779cc(0);
      if ((uVar3 & 1) == 0) {
        FUN_10107784c();
        func_0x000107c4d664(uVar5,param_2,uVar4);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(uVar2);
      }
      else {
        FUN_10107775c();
        func_0x000107c4d664(uVar5,param_2,uVar4);
      }
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(lVar1);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = 0;
  func_0x0001010779cc(0);
  FUN_10107784c();
  func_0x000107c4d664(uVar5,param_2,uVar4);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101066ab0; end: 101066b4b; -[_TtC29AllContactsSyncingServiceImpl17AllContactsSyncer syncContacts] */

void FUN_101066ab0(long param_1)

{
  code *pcVar1;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 0x10);
  if (uStack_28 < 2) {
    func_0x000107c6157c(param_1);
    FUN_1010668d8();
  }
  else if (uStack_28 == 3) {
    func_0x000107c6157c(param_1);
    FUN_101066760();
  }
  else {
    if (uStack_28 != 2) {
      func_0x000107c6157c(param_1);
      func_0x000107c60614(&UNK_11060a520,&uStack_28,&UNK_11060a520,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101066b4c);
      (*pcVar1)();
    }
    func_0x000107c6157c(param_1);
    FUN_10106664c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101066b4c; end: 101066c83;  */

void FUN_101066b4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    func_0x0001010779cc(0);
    func_0x000107c61174(uVar2);
    if (param_1 == 0) {
      uVar1 = 0;
      FUN_101077780(0);
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61574(param_2);
    }
    else {
      uVar1 = uVar2;
      FUN_10107784c();
      func_0x000107c4d664(uVar2);
      func_0x000107c61574(param_2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 101066c84; end: 101066e17;  */

/* WARNING: Possible PIC construction at 0x000101066dc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101066dc4) */

void FUN_101066c84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x0001010779cc();
    FUN_10107784c();
    func_0x000107c4d664(uVar5);
  }
  else {
    FUN_1010673a4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar7 + 0x68))
              (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar1);
    lVar3 = lVar6;
    func_0x000107c5fff0(lVar6);
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
    pcStack_50 = FUN_10106739c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100f6151c;
    puStack_58 = &UNK_11037b670;
    ppuVar4 = &puStack_70;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c42d34(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101066e18; end: 101066ed7;  */

void FUN_101066e18(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x0001000285a8(0x112d57630,&UNK_10d91e130);
  func_0x000107c4b668();
  func_0x000107c61180();
  plVar1 = param_2;
  func_0x0001000b637c();
  func_0x000107c61170(param_2);
  pcVar4 = *(code **)(*plVar1 + 0x60);
  func_0x000107c6157c(param_1);
  pcVar2 = FUN_101067534;
  lVar3 = param_1;
  (*pcVar4)(FUN_101067534);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(param_1);
  pcVar4 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(param_1 + 0x58),pcVar4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
  return;
}



/* Entry: 101066ed8; end: 101066fd7;  */

void FUN_101066ed8(double param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar4 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101066fd0);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101066fd4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101066fd8);
      (*pcVar1)();
    }
    func_0x000107c54854(lVar3);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101066fd8; end: 101067023;  */

void FUN_101066fd8(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = 0;
  func_0x0001010779cc(0);
  (*param_2)();
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101067024; end: 101067027;  */

void FUN_101067024(void)

{
  return;
}



/* Entry: 101067028; end: 101067083;  */

void FUN_101067028(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_1 & 1) != 0) {
    FUN_101066ed8();
    FUN_101066c84();
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = 0;
  func_0x0001010779cc(0);
  FUN_10107784c();
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101067084; end: 101067257;  */

/* WARNING: Possible PIC construction at 0x000101067114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101067118) */
/* WARNING: Removing unreachable block (ram,0x00010106712c) */

void FUN_101067084(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x50);
    func_0x0001010779cc();
    FUN_10107784c();
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x50);
    uVar9 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar8 = param_1;
      if (-1 < (long)param_1) {
        uVar8 = uVar9;
      }
      func_0x000107c60480();
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
    if (uVar8 != 0) {
      uVar10 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010671d0);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar10;
          func_0x00010103193c(uVar10,param_1);
        }
        bVar3 = SCARRY8(uVar10,1);
        uVar10 = uVar10 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010671cc);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        func_0x000107c452e8();
        func_0x000107c61180();
        if (uVar5 != 0) goto code_r0x000107c61170;
        puVar7 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          FUN_1010673e4(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar5 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
          FUN_1010673e4(1 < *(ulong *)(puVar1 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar5 + 1;
        *(ulong *)(puVar1 + uVar5 * 8 + 0x20) = uVar4;
      } while (uVar10 != uVar8);
    }
    if (((long)puVar1 < 0) || (((ulong)puVar1 >> 0x3e & 1) != 0)) {
      puVar7 = puVar1;
      func_0x000107c60480(puVar1);
    }
    else {
      puVar7 = *(undefined **)(puVar1 + 0x10);
    }
    func_0x000107c61574(puVar1);
    func_0x0001010779cc(0);
    FUN_101077780(puVar7);
  }
  func_0x000107c4d664(uVar6);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101067258; end: 1010672f3;  */

void FUN_101067258(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1010672f4; end: 10106731f;  */

void FUN_1010672f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    func_0x0001010779cc(0);
    func_0x000107c61174(uVar3);
    if (param_1 == 0) {
      uVar2 = 0;
      FUN_101077780(0);
      func_0x000107c4d664(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(lVar1);
    }
    else {
      uVar2 = uVar3;
      FUN_10107784c();
      func_0x000107c4d664(uVar3);
      func_0x000107c61574(lVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 101067320; end: 101067377;  */

void FUN_101067320(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103e6a7b4(*param_1,FUN_101067378,uStack_30,0x10106737c,auStack_40,FUN_101067384,
                      uStack_30);
  return;
}



/* Entry: 101067378; end: 101067383;  */

/* WARNING: Possible PIC construction at 0x000101066dc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101066dc4) */

void FUN_101067378(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x0001010779cc();
    FUN_10107784c();
    func_0x000107c4d664(uVar5);
  }
  else {
    FUN_1010673a4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar7 + 0x68))
              (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar1);
    lVar3 = lVar6;
    func_0x000107c5fff0(lVar6);
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
    pcStack_50 = FUN_10106739c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100f6151c;
    puStack_58 = &UNK_11037b670;
    ppuVar4 = &puStack_70;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c42d34(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101067384; end: 10106739b;  */

void FUN_101067384(void)

{
  FUN_101067028();
  return;
}



/* Entry: 10106739c; end: 1010673a3;  */

/* WARNING: Possible PIC construction at 0x000101067114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101067118) */
/* WARNING: Removing unreachable block (ram,0x00010106712c) */

void FUN_10106739c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x0001010779cc();
    FUN_10107784c();
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar9 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar8 = param_1;
      if (-1 < (long)param_1) {
        uVar8 = uVar9;
      }
      func_0x000107c60480();
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
    if (uVar8 != 0) {
      uVar10 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010671d0);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar10;
          func_0x00010103193c(uVar10,param_1);
        }
        bVar3 = SCARRY8(uVar10,1);
        uVar10 = uVar10 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010671cc);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        func_0x000107c452e8();
        func_0x000107c61180();
        if (uVar5 != 0) goto code_r0x000107c61170;
        puVar7 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          FUN_1010673e4(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar5 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
          FUN_1010673e4(1 < *(ulong *)(puVar1 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar5 + 1;
        *(ulong *)(puVar1 + uVar5 * 8 + 0x20) = uVar4;
      } while (uVar10 != uVar8);
    }
    if (((long)puVar1 < 0) || (((ulong)puVar1 >> 0x3e & 1) != 0)) {
      puVar7 = puVar1;
      func_0x000107c60480(puVar1);
    }
    else {
      puVar7 = *(undefined **)(puVar1 + 0x10);
    }
    func_0x000107c61574(puVar1);
    func_0x0001010779cc(0);
    FUN_101077780(puVar7);
  }
  func_0x000107c4d664(uVar6);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1010673a4; end: 1010673e3;  */

void FUN_1010673a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010673e4; end: 1010673ff;  */

void FUN_1010673e4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101067400();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101067400; end: 101067533;  */

undefined * FUN_101067400(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101067534);
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
    FUN_100f630bc();
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
    FUN_1010673a4(0,0x112d4ed88,&PTR_PTR_1126b15c8);
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



/* Entry: 101067534; end: 101067583;  */

void FUN_101067534(void)

{
  func_0x000101077104(FUN_101067584);
  return;
}


