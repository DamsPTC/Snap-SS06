/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103391720; end: 103391867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391720(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar4 = *(long *)(param_3 + _DAT_112f5fc70);
    if (lVar4 != 0) {
      func_0x000104522c9c(0);
      func_0x000107c61174(lVar4);
      func_0x00010452281c(param_1,param_2);
      func_0x000104523254(0);
      func_0x000107c610f8();
      uVar1 = 0x1b;
      func_0x000104522fdc(0x1b,0,1);
      puVar2 = PTR_PTR_1126b3530;
      func_0x000107c610f8(PTR_PTR_1126b3530);
      func_0x000107c4807c();
      uVar3 = param_1;
      func_0x000104520f00(param_1,uVar1,param_3,puVar2);
      func_0x000107c4ab34(*(undefined8 *)(param_3 + _DAT_112f5fcb0));
      func_0x000107c61170(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 103391868; end: 1033919e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391868(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar6,param_1,param_2);
  puVar2 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar6);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar5,puVar6,lVar1);
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      lVar3 = param_3;
      FUN_103390154();
      uVar7 = *(undefined8 *)(param_3 + _DAT_112f5fc70);
      uVar4 = uVar7;
      func_0x000107c61174(uVar7);
      FUN_1033934dc(lVar5,uVar7);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar4);
    }
    (**(code **)(lVar8 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 1033919e8; end: 103391a47; -[_TtC27MutualFriendsPageEntryPoint27MutualFriendsPageEntryPoint init] */

void FUN_1033919e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsPageEntryPoint.MutualFriendsPageEntryPoint",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103391a14);
  (*pcVar1)();
}



/* Entry: 103391a48; end: 103391b5f; -[_TtC27MutualFriendsPageEntryPoint27MutualFriendsPageEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103391a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103391b08) */
/* WARNING: Removing unreachable block (ram,0x000103391ae8) */
/* WARNING: Removing unreachable block (ram,0x000103391ac8) */
/* WARNING: Removing unreachable block (ram,0x000103391aa8) */
/* WARNING: Removing unreachable block (ram,0x000103391a88) */
/* WARNING: Removing unreachable block (ram,0x000103391a68) */
/* WARNING: Removing unreachable block (ram,0x000103391b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5fc80));
  return;
}



/* Entry: 103391b60; end: 103391b67;  */

undefined8 FUN_103391b60(void)

{
  return 0;
}



/* Entry: 103391b68; end: 103391b77; -[_TtC27MutualFriendsPageEntryPoint27MutualFriendsPageEntryPoint chatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f5fcb0),PTR_s_endLaunchedFeatureWithScope__1125c2cc8)
  ;
  return;
}



/* Entry: 103391b78; end: 103391b97;  */

void FUN_103391b78(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3c80);
  return;
}



/* Entry: 103391b98; end: 103391bfb; -[_TtC27MutualFriendsPageEntryPoint27MutualFriendsPageEntryPoint friendProfileDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391b98(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112f5fcc0),
               PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
    return;
  }
  return;
}



/* Entry: 103391bfc; end: 103391c3b;  */

void FUN_103391bfc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103391c3c; end: 103391c67;  */

void FUN_103391c3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103391c68; end: 103391c97;  */

void FUN_103391c68(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_103391304(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103391c98; end: 103391d37; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103391c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar1 = param_1 + _DAT_112f5fd00;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = PTR_s_initWithValdiView__1125f5a88;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2,param_3);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(plVar4);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 103391d38; end: 103391da7; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391d38(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112f5fd00;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MutualFriendsPageEntryPoint/MutualFriendsPageViewController.swift",0x41,2,
                      0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103391da8);
  (*pcVar1)();
}



/* Entry: 103391da8; end: 103391e07; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController initWithNibName:bundle:] */

void FUN_103391da8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsPageEntryPoint.MutualFriendsPageViewController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103391dd4);
  (*pcVar1)();
}



/* Entry: 103391e08; end: 103391e17; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103391e08(long param_1)

{
  param_1 = param_1 + _DAT_112f5fd00;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103391e18; end: 103391e37;  */

void FUN_103391e18(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3da8);
  return;
}



/* Entry: 103391e38; end: 103391e3f; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController presentationMode] */

undefined8 FUN_103391e38(void)

{
  return 3;
}



/* Entry: 103391e40; end: 103391e47; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController exitMode] */

undefined8 FUN_103391e40(void)

{
  return 1;
}



/* Entry: 103391e48; end: 103391e4b; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController interactiveDismissalWillBegin:] */

void FUN_103391e48(void)

{
  return;
}



/* Entry: 103391e4c; end: 103391ea7; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController interactiveDismissalDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391e4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112f5fd00;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_10339141c();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103391ea8; end: 103391eab; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController interactionControllerPercentageDidChange:] */

void FUN_103391ea8(void)

{
  return;
}



/* Entry: 103391eac; end: 103391f87; -[_TtC27MutualFriendsPageEntryPoint31MutualFriendsPageViewController gestureRecognizerShouldBegin:] */

bool FUN_103391eac(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  lVar3 = param_5;
  func_0x000107c6148c(param_5,puVar2);
  if (lVar3 == 0) {
    bVar1 = true;
  }
  else {
    func_0x000107c61174(param_5);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    lVar4 = lVar3;
    func_0x000107c5de64(lVar3);
    func_0x000107c61180();
    func_0x000107c5dc98(lVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar4);
    if (ABS(param_1) <= ABS(param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = 0.0 < param_1;
    }
  }
  return bVar1;
}



/* Entry: 103391f88; end: 103391fab;  */

undefined8 FUN_103391f88(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103391fac; end: 1033921eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd40) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5fd48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd60) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5fd68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5fd70);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd78) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd80) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fd88) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033921ec; end: 1033926fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033921ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5fd48);
  uVar9 = *puVar1;
  uVar13 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar9,uVar13);
  lVar12 = *(long *)(*(long *)(unaff_x20 + _DAT_112f5fd58) + _DAT_11303f600);
  if (lVar12 == 0) {
    func_0x000107c6157c(param_2);
  }
  else {
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(lVar12);
    func_0x0001000d224c(&puStack_a0);
    func_0x000107c61574(lVar12);
    puVar3 = puStack_a0;
    lVar4 = *(long *)(unaff_x20 + _DAT_112f5fd50);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar12 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar12 != 0) {
      lVar4 = lVar12;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar12);
      if (lVar4 != 0) {
        puVar8 = &UNK_1106491f8;
        puVar5 = puVar8;
        func_0x000107c613fc(&UNK_1106491f8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        puVar6 = PTR_PTR_1126ad1d0;
        func_0x000107c610f8();
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = FUN_1033926fc;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_110649210;
        ppuVar7 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c6157c(puVar5);
        func_0x000107c48b74();
        func_0x000107c60bd0(ppuVar7);
        puVar11 = puStack_78;
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar11);
        func_0x000107c613fc(&UNK_1106491f8,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        pcStack_80 = (code *)0x1033929d0;
        puStack_a0 = puVar2;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100c75f50;
        puStack_88 = &UNK_110649238;
        ppuVar7 = &puStack_a0;
        puStack_78 = puVar8;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_78);
        func_0x000107c56de0(puVar6);
        func_0x000107c60bd0(ppuVar7);
        puVar8 = PTR_PTR_1126ad1d8;
        func_0x000107c610f8(PTR_PTR_1126ad1d8);
        func_0x000107c453e4();
        func_0x000107c59558();
        if (((undefined8 *)(unaff_x20 + _DAT_112f5fd68))[1] == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f5fd68);
          func_0x000107c5fadc(uVar9);
        }
        func_0x000107c53184(puVar8);
        func_0x000107c61170(uVar9);
        if (((undefined8 *)(unaff_x20 + _DAT_112f5fd70))[1] == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f5fd70);
          func_0x000107c5fadc(uVar9);
        }
        func_0x000107c54c3c(puVar8);
        func_0x000107c61170(uVar9);
        puVar5 = PTR_PTR_1126ad1e0;
        func_0x000107c610f8();
        func_0x000107c49520();
        lVar12 = *(long *)(unaff_x20 + _DAT_112f5fd40);
        *(undefined **)(unaff_x20 + _DAT_112f5fd40) = puVar5;
        func_0x000107c61174();
        func_0x000107c61170();
        FUN_1033929d8();
        func_0x000107c610f8();
        func_0x000107c49460();
        *(undefined1 *)(lVar12 + _DAT_112f5fd90) =
             *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112f5fd80) + _DAT_113021c10);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f5fd38);
        *(long *)(unaff_x20 + _DAT_112f5fd38) = lVar12;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61170(uVar9);
        puVar10 = PTR_PTR_1126b0a08;
        func_0x000107c610f8();
        func_0x000107c48e88();
        func_0x000107c61170(lVar12);
        func_0x000107c52684(puVar10);
        func_0x000107c5a074(puVar10);
        func_0x000107c52aa4(puVar10);
        func_0x000107c52b4c(0x3fe6666666666666,puVar10);
        func_0x000107c539d4(0x4038000000000000,puVar10);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f5fd30);
        *(undefined **)(unaff_x20 + _DAT_112f5fd30) = puVar10;
        func_0x000107c61174();
        func_0x000107c61170();
        func_0x000103392f90();
        func_0x000107c614e8();
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f5fd60);
        func_0x000107c52700(uVar13);
        puVar11 = &UNK_110649270;
        func_0x000107c613fc(&UNK_110649270,0x20,7);
        *(undefined **)(puVar11 + 0x10) = puVar10;
        *(undefined8 *)(puVar11 + 0x18) = uVar9;
        pcStack_80 = FUN_103392fb0;
        puStack_a0 = puVar2;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000b0c7c;
        puStack_88 = &UNK_110649288;
        ppuVar7 = &puStack_a0;
        puStack_78 = puVar11;
        func_0x000107c60bc4(ppuVar7);
        puVar2 = puStack_78;
        func_0x000107c61174(puVar10);
        func_0x000107c61174(uVar9);
        func_0x000107c61574(puVar2);
        func_0x000107c3e2c4(uVar13);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar5);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(puVar3);
        func_0x000107c60bd0(ppuVar7);
        return 1;
      }
    }
    func_0x000107c615e8(puStack_a0);
  }
  return 0;
}



/* Entry: 1033926fc; end: 1033927f3;  */

void FUN_1033926fc(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "handleDismiss()";
    func_0x0001000c10c0("handleDismiss()");
    func_0x000107c61180();
    puVar3 = &UNK_1106491f8;
    func_0x000107c613fc(&UNK_1106491f8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    pcStack_58 = FUN_1033933a0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1106492d8;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1033927f4; end: 1033929b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033927f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar6,param_1,param_2);
  puVar2 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar6);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar5,puVar6,lVar1);
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    lVar3 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112f5fd78);
      func_0x000107c61174(uVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      if (param_3 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_3 + _DAT_112f5fd38);
        func_0x000107c61174(uVar7);
        func_0x000107c61170(param_3);
      }
      FUN_1033934dc(lVar5,uVar7);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar7);
    }
    (**(code **)(lVar8 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 1033929b4; end: 1033929d7;  */

void FUN_1033929b4(long param_1,long param_2)

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



/* Entry: 1033929d8; end: 1033929f7;  */

void FUN_1033929d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3f78);
  return;
}



/* Entry: 1033929f8; end: 1033929fb;  */

void FUN_1033929f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033929fc; end: 103392adf; -[_TtC28MutualFriendsUpsellPresenter28MutualFriendsUpsellPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033929fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd60));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5fd68 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5fd70 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5fd40));
  if (*(long *)(param_1 + _DAT_112f5fd48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f5fd48))[1]);
    return;
  }
  return;
}



/* Entry: 103392ae0; end: 103392b33; -[_TtC28MutualFriendsUpsellPresenter28MutualFriendsUpsellPresenter tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x000103392b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103392b20) */

void FUN_103392ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103392fc4(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103392b34; end: 103392b93; -[_TtC28MutualFriendsUpsellPresenter28MutualFriendsUpsellPresenter tray:heightForPosition:] */

undefined8
FUN_103392b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_103393084();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103392b94; end: 103392ba3; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5542MutualFriendsUpsellContainerViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103392b94(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f5fd90);
}



/* Entry: 103392ba4; end: 103392bf7; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5542MutualFriendsUpsellContainerViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103392ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112f5fd90) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 103392bf8; end: 103392ccf; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5542MutualFriendsUpsellContainerViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103392bf8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + _DAT_112f5fd90) = 1;
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    *(undefined1 *)(param_1 + _DAT_112f5fd90) = 1;
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar2;
}



/* Entry: 103392cd0; end: 103392d5f; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5542MutualFriendsUpsellContainerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103392cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112f5fd90) = 1;
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 103392d60; end: 103392d67; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5522TrayHostViewController modalPresentationStyle] */

undefined8 FUN_103392d60(void)

{
  return 5;
}



/* Entry: 103392d68; end: 103392d6b; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5522TrayHostViewController setModalPresentationStyle:] */

void FUN_103392d68(void)

{
  return;
}



/* Entry: 103392d6c; end: 103392e1b; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5522TrayHostViewController viewDidLoad] */

void FUN_103392d6c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103392e1c);
  (*pcVar1)();
}



/* Entry: 103392e1c; end: 103392e23; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5522TrayHostViewController gestureRecognizerShouldBegin:] */

undefined8 FUN_103392e1c(void)

{
  return 0;
}



/* Entry: 103392e24; end: 103392edb; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5522TrayHostViewController initWithNibName:bundle:] */

undefined1 * FUN_103392e24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 103392edc; end: 103392f5b; -[_TtC28MutualFriendsUpsellPresenterP33_74F9A37BDB0046BE99430626B46E8B5522TrayHostViewController initWithCoder:] */

undefined1 * FUN_103392edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 103392f5c; end: 103392faf;  */

void FUN_103392f5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103392fb0; end: 103392fc3;  */

void FUN_103392fb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c10c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,*(undefined8 *)(unaff_x20 + 0x10),
             PTR_s_presentIn_withPullBar_withDefaul_112620b90,*(undefined8 *)(unaff_x20 + 0x18),1,8)
  ;
  return;
}



/* Entry: 103392fc4; end: 103393083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103392fc4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 2) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f5fd60);
    puVar1 = &UNK_1106491f8;
    func_0x000107c613fc(&UNK_1106491f8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_40 = FUN_1033931b4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1106492b0;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c41864(uVar3);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 103393084; end: 103393193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103393084(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  double dVar5;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5fd40);
  if (lVar2 == 0) {
    dVar5 = 0.0;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5e07c();
      func_0x000107c615e8(lVar3);
    }
    puVar4 = *(undefined **)(unaff_x20 + _DAT_112f5fd38);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
    }
    else {
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033930fc);
        (*pcVar1)();
      }
    }
    func_0x000107c3ec60();
    func_0x000107c61170(puVar4);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar5 = 1.79769313486232e+308;
    func_0x000107c5b098(lVar2);
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c517d0();
    func_0x000107c61170(lVar2);
    dVar5 = dVar5 + param_1;
  }
  return dVar5;
}



/* Entry: 103393194; end: 1033931b3;  */

void FUN_103393194(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3e60);
  return;
}



/* Entry: 1033931b4; end: 10339339f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033931b4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112f5fd60);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c52700(uVar4);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112f5fd30);
    *(undefined8 *)(lVar3 + _DAT_112f5fd30) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112f5fd38);
    *(undefined8 *)(lVar3 + _DAT_112f5fd38) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112f5fd40);
    *(undefined8 *)(lVar3 + _DAT_112f5fd40) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_b8,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    pcVar5 = *(code **)(lVar3 + _DAT_112f5fd48);
    if (pcVar5 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar4 = ((undefined8 *)(lVar3 + _DAT_112f5fd48))[1];
      func_0x000100b64c10(pcVar5,uVar4);
      func_0x000107c61170(lVar3);
      (*pcVar5)();
      func_0x00010058d43c(pcVar5,uVar4);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_d0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f5fd48);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar4,uVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1033933a0; end: 10339341b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033933a0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112f5fd30);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c42018(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10339341c; end: 103393443;  */

void FUN_10339341c(long param_1,long param_2)

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



/* Entry: 103393444; end: 1033934db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103393444(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fe10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033934dc; end: 1033938eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033934dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  long lVar13;
  long unaff_x20;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long alStack_f0 [7];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar19 = *(long *)(lVar1 + -8);
  lVar18 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = auStack_b0 + -(lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar17 - extraout_x8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar20 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar20 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  if (param_2 != 0) {
    pcVar14 = *(code **)(lVar19 + 0x38);
    uStack_a8 = param_1;
    uStack_a0 = extraout_x13;
    (*pcVar14)(lVar13,1,1,lVar1);
    (*pcVar14)(lVar20,1,1,lVar1);
    lVar3 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar16,1,1,lVar3);
    func_0x000107c61174(param_2);
    *(undefined1 *)(lVar2 + -8) = 0;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    *(undefined8 *)(lVar2 + -0x18) = 0;
    *(undefined8 *)(lVar2 + -0x20) = 0;
    *(undefined8 *)(lVar2 + -0x28) = 0;
    *(undefined8 *)(lVar2 + -0x30) = 0;
    *(undefined8 *)(lVar2 + -0x38) = 0;
    *(long *)(lVar2 + -0x40) = lVar16;
    func_0x000104638e24(lVar2,0x1d,lVar13,0,lVar20,0,0,0,0);
    puVar4 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c43bf4();
    func_0x000107c61180();
    (**(code **)(lVar19 + 0x10))(puVar17,uStack_a8,lVar1);
    uVar12 = (ulong)*(byte *)(lVar19 + 0x50);
    uVar15 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110649390;
    func_0x000107c613fc(&UNK_110649390,uVar15 + lVar18,uVar12 | 7);
    (**(code **)(lVar19 + 0x20))(puVar6 + uVar15,puVar17,lVar1);
    pcStack_70 = FUN_1033938ec;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100e38b5c;
    puStack_78 = &UNK_1106493a8;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_68);
    pcVar8 = "presentUrl(_:from:)";
    func_0x0001000c10c0("presentUrl(_:from:)");
    func_0x000107c61180();
    func_0x000107c5dc68(puVar5);
    func_0x000107c615e8(pcVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar5);
    puVar6 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar9 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000100e39298(lVar2,uStack_a0);
    uVar10 = 0;
    func_0x000104652fec(0);
    func_0x000107c610f8();
    uVar11 = uStack_a0;
    func_0x000104651d90(uStack_a0,uVar10);
    func_0x000107c61174(puVar6);
    uVar10 = uVar11;
    func_0x000103c5d254(uVar11,puVar4,puVar6,unaff_x20,0,0,0,1);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f5fe10));
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar10);
    func_0x000100e392dc(lVar2);
  }
  return;
}



/* Entry: 1033938ec; end: 10339396f;  */

void FUN_1033938ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar2 = param_1;
    func_0x000107c615f0(*(undefined1 *)(*(long *)(lVar1 + -8) + 0x50),param_1);
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 103393970; end: 10339398b;  */

void FUN_103393970(long param_1,long param_2)

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



/* Entry: 10339398c; end: 1033939bf;  */

void FUN_10339398c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033939c0; end: 1033939cf; -[_TtC32MutualFriendsWebBrowserPresenter32MutualFriendsWebBrowserPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033939c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5fe10));
  return;
}



/* Entry: 1033939d0; end: 1033939ef;  */

void FUN_1033939d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d40e0);
  return;
}



/* Entry: 1033939f0; end: 103393adf; -[_TtC32MutualFriendsWebBrowserPresenter32MutualFriendsWebBrowserPresenter webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103393a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103393a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103393a30) */
/* WARNING: Removing unreachable block (ram,0x000103393a4c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033939f0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103393ae0; end: 103393b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103393ae0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fe48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103393b4c; end: 103393bab; -[_TtC45PasskeyManagementScopedFactoryServiceProvider33SCPasskeyManagementScopedServices init] */

void FUN_103393b4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasskeyManagementScopedFactoryServiceProvider.SCPasskeyManagementScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103393b78);
  (*pcVar1)();
}



/* Entry: 103393bac; end: 103393bbb; -[_TtC45PasskeyManagementScopedFactoryServiceProvider33SCPasskeyManagementScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103393bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5fe48));
  return;
}



/* Entry: 103393bbc; end: 103393c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103393bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110649598;
  func_0x000107c613fc(&UNK_110649598,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103393f00,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103393c28; end: 103393cc3;  */

void FUN_103393c28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106494a8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106494a8;
  return;
}



/* Entry: 103393cc4; end: 103393cfb;  */

void FUN_103393cc4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103393cfc; end: 103393d03;  */

undefined8 FUN_103393cfc(void)

{
  return 0x1b;
}



/* Entry: 103393d04; end: 103393e37;  */

void FUN_103393d04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106495c0;
  func_0x000107c613fc(&UNK_1106495c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103393ed8;
  func_0x00010058fa64(FUN_103393ed8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103393e38; end: 103393e67;  */

undefined ** FUN_103393e38(void)

{
  return &PTR_DAT_113066df0;
}



/* Entry: 103393e68; end: 103393e87;  */

void FUN_103393e68(void)

{
  func_0x000107c61168(&PTR_PTR_1128d41a0);
  return;
}



/* Entry: 103393e88; end: 103393ed7;  */

undefined1  [16] FUN_103393e88(void)

{
  return ZEXT816(0x1106494f8);
}



/* Entry: 103393ed8; end: 103393eff;  */

void FUN_103393ed8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103393f00; end: 103393f03;  */

void FUN_103393f00(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103393f04; end: 103393ff3;  */

/* WARNING: Possible PIC construction at 0x000103393fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103393fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103393fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103393fc8) */
/* WARNING: Removing unreachable block (ram,0x000103393fb8) */
/* WARNING: Removing unreachable block (ram,0x000103393fd8) */

void FUN_103393f04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110649648;
  func_0x000107c613fc(&UNK_110649648,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112f5feb8;
  func_0x0001000285a8(0x112f5feb8,&UNK_10dbbb9e0);
  func_0x000107c613fc();
  pcVar3 = FUN_103394488;
  func_0x0001000841fc(FUN_103394488,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbbb9b0,0x2f,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103393ff4; end: 103394013;  */

/* WARNING: Possible PIC construction at 0x000103393fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103393fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103393fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103393fc8) */
/* WARNING: Removing unreachable block (ram,0x000103393fb8) */
/* WARNING: Removing unreachable block (ram,0x000103393fd8) */

void FUN_103393ff4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_110649648;
  func_0x000107c613fc(&UNK_110649648,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112f5feb8;
  func_0x0001000285a8(0x112f5feb8,&UNK_10dbbb9e0);
  func_0x000107c613fc();
  pcVar8 = FUN_103394488;
  func_0x0001000841fc(FUN_103394488,puVar6,uVar7);
  func_0x000100084214(&UNK_10dbbb9b0,0x2f,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103394014; end: 10339443b;  */

void FUN_103394014(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112f5fec0,&UNK_10dbbb9e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000103395714();
  pcVar3 = "SCPasskeyAlertViewScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCPasskeyAlertViewScopeExposerSubjectServiceProvider",0x34,2);
  func_0x000103395794();
  func_0x000100082720("SCPasskeyEnrollmentScopeExposerSubjectServiceProvider",0x35,2);
  puVar4 = puVar2;
  FUN_103395754();
  func_0x000100082720("SCPasskeyAlertViewScopeExposerObservableServiceProvider",0x37,2);
  pcVar5 = pcVar3;
  FUN_103395820();
  func_0x000100082720("SCPasskeyEnrollmentScopeExposerObservableServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_103393cc4;
  func_0x0001000823a8(FUN_103393cc4,0);
  func_0x000100082720("SCPasskeyManagementScopedServicesCleanupRelayServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f5fec8,&UNK_10dbbba00);
  puVar7 = &UNK_110649670;
  func_0x000107c613fc(&UNK_110649670,0x58,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  *(undefined8 *)(puVar7 + 0x28) = param_5;
  *(undefined8 *)(puVar7 + 0x30) = param_6;
  *(undefined8 *)(puVar7 + 0x38) = param_7;
  *(undefined8 *)(puVar7 + 0x40) = param_8;
  *(char **)(puVar7 + 0x48) = pcVar5;
  *(undefined8 **)(puVar7 + 0x50) = puVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar4);
  pcVar8 = FUN_103394498;
  func_0x0001000823a8(FUN_103394498,puVar7);
  func_0x000100082720("PasskeyManagementEntryPointWrapperServiceProvider",0x31,2);
  puVar9 = puVar2;
  FUN_103395568(puVar2,pcVar3);
  func_0x000100082720("PasskeyManagementScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f5fed0,&UNK_10dbbb9f0);
  puVar7 = &UNK_110649698;
  func_0x000107c613fc(&UNK_110649698,0x30,7);
  *(code **)(puVar7 + 0x10) = pcVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar1;
  *(undefined8 **)(puVar7 + 0x20) = puVar9;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar6);
  pcVar10 = FUN_1033944cc;
  func_0x0001000823a8(FUN_1033944cc,puVar7);
  func_0x000100082720("SCPasskeyManagementScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f5fe50,&UNK_10dbbb780);
  func_0x000107c6157c(pcVar10);
  uVar12 = 0x1033944d8;
  func_0x0001000823a8(0x1033944d8,pcVar10);
  func_0x000100082720("SCPasskeyManagementScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f5fe40,&UNK_10dbbb770);
  func_0x000107c6157c(uVar12);
  uVar11 = 0x1033944e0;
  func_0x0001000823a8(0x1033944e0,uVar12);
  func_0x000100082720("SCPasskeyManagementScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_1106496c0;
  func_0x000107c613fc(&UNK_1106496c0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x1033944e8;
  func_0x0001000823a8(0x1033944e8,puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCPasskeyManagementScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 10339443c; end: 103394487;  */

void FUN_10339443c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103394488; end: 103394497;  */

void FUN_103394488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *param_2;
  func_0x0001000285a8(0x112f5fec0,&UNK_10dbbb9e8);
  puVar5 = &uStack_68;
  uStack_68 = uVar17;
  func_0x0001000838ec();
  puVar6 = puVar5;
  func_0x000103395714();
  pcVar7 = "SCPasskeyAlertViewScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCPasskeyAlertViewScopeExposerSubjectServiceProvider",0x34,2);
  func_0x000103395794();
  func_0x000100082720("SCPasskeyEnrollmentScopeExposerSubjectServiceProvider",0x35,2);
  puVar8 = puVar6;
  FUN_103395754();
  func_0x000100082720("SCPasskeyAlertViewScopeExposerObservableServiceProvider",0x37,2);
  pcVar9 = pcVar7;
  FUN_103395820();
  func_0x000100082720("SCPasskeyEnrollmentScopeExposerObservableServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_103393cc4;
  func_0x0001000823a8(FUN_103393cc4,0);
  func_0x000100082720("SCPasskeyManagementScopedServicesCleanupRelayServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f5fec8,&UNK_10dbbba00);
  puVar11 = &UNK_110649670;
  func_0x000107c613fc(&UNK_110649670,0x58,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar5;
  *(undefined8 *)(puVar11 + 0x18) = uVar15;
  *(undefined8 *)(puVar11 + 0x20) = uVar2;
  *(undefined8 *)(puVar11 + 0x28) = uVar16;
  *(undefined8 *)(puVar11 + 0x30) = uVar3;
  *(undefined8 *)(puVar11 + 0x38) = uVar1;
  *(undefined8 *)(puVar11 + 0x40) = uVar4;
  *(char **)(puVar11 + 0x48) = pcVar9;
  *(undefined8 **)(puVar11 + 0x50) = puVar8;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar8);
  pcVar12 = FUN_103394498;
  func_0x0001000823a8(FUN_103394498,puVar11);
  func_0x000100082720("PasskeyManagementEntryPointWrapperServiceProvider",0x31,2);
  puVar13 = puVar6;
  FUN_103395568(puVar6,pcVar7);
  func_0x000100082720("PasskeyManagementScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f5fed0,&UNK_10dbbb9f0);
  puVar11 = &UNK_110649698;
  func_0x000107c613fc(&UNK_110649698,0x30,7);
  *(code **)(puVar11 + 0x10) = pcVar12;
  *(undefined8 **)(puVar11 + 0x18) = puVar5;
  *(undefined8 **)(puVar11 + 0x20) = puVar13;
  *(code **)(puVar11 + 0x28) = pcVar10;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(pcVar10);
  pcVar14 = FUN_1033944cc;
  func_0x0001000823a8(FUN_1033944cc,puVar11);
  func_0x000100082720("SCPasskeyManagementScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f5fe50,&UNK_10dbbb780);
  func_0x000107c6157c(pcVar14);
  uVar15 = 0x1033944d8;
  func_0x0001000823a8(0x1033944d8,pcVar14);
  func_0x000100082720("SCPasskeyManagementScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f5fe40,&UNK_10dbbb770);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x1033944e0;
  func_0x0001000823a8(0x1033944e0,uVar15);
  func_0x000100082720("SCPasskeyManagementScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar11 = &UNK_1106496c0;
  func_0x000107c613fc(&UNK_1106496c0,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar16;
  *(code **)(puVar11 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar16 = 0x1033944e8;
  func_0x0001000823a8(0x1033944e8,puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000100082720("SCPasskeyManagementScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar16;
  return;
}



/* Entry: 103394498; end: 1033944cb;  */

void FUN_103394498(void)

{
  long unaff_x20;
  
  FUN_1033944f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1033944cc; end: 1033944ef;  */

void FUN_1033944cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103394c94(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCPasskeyManagementScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033944f0; end: 103394a87;  */

void FUN_1033944f0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  FUN_103394bc0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  func_0x0001000285a8(0x112f5fed8,&UNK_10dbbba08);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  func_0x0001000285a8(0x112f5fee0,&UNK_10dbbba10);
  func_0x000107c610f8();
  uVar7 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x20) = puVar9;
  FUN_10339842c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar7 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar10 = uVar7;
  func_0x000103397754(uVar7,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,puVar8,puVar9);
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c6157c();
  FUN_103397874();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uVar10);
  *param_1 = param_2;
  return;
}



/* Entry: 103394a88; end: 103394b03;  */

void FUN_103394a88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 103394b04; end: 103394b0b;  */

undefined8 FUN_103394b04(void)

{
  return 0x1b;
}



/* Entry: 103394b0c; end: 103394b8f;  */

void FUN_103394b0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103394c00,param_2,FUN_103394c04,param_2,0x103394c2c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103394b90; end: 103394bbf;  */

undefined ** FUN_103394b90(void)

{
  return &PTR_DAT_113066df0;
}



/* Entry: 103394bc0; end: 103394bdf;  */

void FUN_103394bc0(void)

{
  func_0x000107c61168(&PTR_PTR_112f5ff50);
  return;
}



/* Entry: 103394be0; end: 103394c03;  */

undefined1  [16] FUN_103394be0(void)

{
  return ZEXT816(0x110649718);
}



/* Entry: 103394c04; end: 103394c57;  */

void FUN_103394c04(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103394c58; end: 103394c93;  */

void FUN_103394c58(undefined8 *param_1,undefined8 param_2)

{
  FUN_103394c94();
  func_0x0001000a7f38("SCPasskeyManagementScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103394c94; end: 103394e7f;  */

void FUN_103394c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d9b0;
  ppuVar4 = &PTR_DAT_113066df0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f5fff0;
  func_0x0001000285a8(0x112f5fff0,&UNK_10dbbbb78);
  func_0x0001000a6ee8(&UNK_110649718,
                      "PasskeyManagementEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_103394ef4,param_1,uVar2,&UNK_110649718,&PTR_DAT_112f5fee8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110649768;
  func_0x000107c613fc(&UNK_110649768,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110649a20,"PasskeyManagementScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_103394efc,puVar3,uVar2,&UNK_110649a20,&PTR_DAT_112f60090);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110649790;
  func_0x000107c613fc(&UNK_110649790,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110649538,"SCPasskeyManagementScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_103394fe4,puVar3,uVar2,&UNK_110649538,&PTR_DAT_112f5fe58);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f5fff8;
  func_0x0001000285a8(0x112f5fff8,&UNK_10dbbbb80);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 103394e80; end: 103394ef3;  */

void FUN_103394e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103395020;
  func_0x0001000823a8(0x103395020,param_3);
  func_0x000100082720("PasskeyManagementEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103394ef4; end: 103394efb;  */

void FUN_103394ef4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103395020;
  func_0x0001000823a8();
  func_0x000100082720("PasskeyManagementEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103394efc; end: 103394f3b;  */

void FUN_103394efc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010339588c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("PasskeyManagementScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103394f3c; end: 103394fe3;  */

void FUN_103394f3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106497b8;
  func_0x000107c613fc(&UNK_1106497b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103395018;
  func_0x0001000823a8(FUN_103395018,puVar1);
  func_0x000100082720("SCPasskeyManagementScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103394fe4; end: 103394feb;  */

void FUN_103394fe4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106497b8;
  func_0x000107c613fc(&UNK_1106497b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103395018;
  func_0x0001000823a8(FUN_103395018,puVar3);
  func_0x000100082720("SCPasskeyManagementScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103394fec; end: 103395017;  */

void FUN_103394fec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103395018; end: 103395027;  */

void FUN_103395018(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106495c0;
  func_0x000107c613fc(&UNK_1106495c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103393ed8;
  func_0x00010058fa64(FUN_103393ed8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103395028; end: 10339513f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103395028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_103395478();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f60000) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f60008) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103395140);
  (*pcVar2)();
}



/* Entry: 103395140; end: 10339519f; -[_TtC33PasskeyManagementScopeGraphBridge48PasskeyManagementScopeGraphBridgeSaberEntryPoint init] */

void FUN_103395140(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasskeyManagementScopeGraphBridge.PasskeyManagementScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10339516c);
  (*pcVar1)();
}



/* Entry: 1033951a0; end: 1033951d7; -[_TtC33PasskeyManagementScopeGraphBridge48PasskeyManagementScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033951bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033951c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033951a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60000));
  return;
}



/* Entry: 1033951d8; end: 1033951ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033951d8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f60008),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f60000));
  return;
}


