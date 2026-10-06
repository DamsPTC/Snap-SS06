/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030bda50; end: 1030bda77; -[AdWebViewAttachmentWebBrowserPresenter presentAttachment] */

void FUN_1030bda50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030bd290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bda78; end: 1030bdd13;  */

/* WARNING: Possible PIC construction at 0x0001030bdb08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030bdce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bdce8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bda78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  undefined1 auStack_a0 [80];
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  if (*(int *)(*(long *)(unaff_x20 + _DAT_112f39c28) + _DAT_113813190) == 1) {
    return;
  }
  puVar4 = *(undefined8 **)(unaff_x20 + _DAT_112f39c38);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001041b5884();
    uVar7 = *puVar4;
    uVar1 = puVar4[1];
    lVar9 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_a0;
    func_0x000107c61534();
    *(undefined8 *)(lVar9 + 0x18) = 2;
    *(undefined8 *)(lVar9 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar9 + 0x20) = uVar5;
    *(undefined1 **)(lVar9 + 0x28) = puVar8;
    func_0x000107c61434(uVar1);
    func_0x000107c602fc(0x39);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    uVar5 = 0;
    func_0x000107c60714(lVar3,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar5);
    func_0x000107c5fb78(0xd000000000000036,0x800000010f11dd20);
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0xe000000000000000;
    lVar3 = lVar9;
    func_0x000100214a84(lVar9);
    func_0x000107c61588(lVar9);
    func_0x000100f15a0c((undefined8 *)(lVar9 + 0x20));
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c6142c(uVar1);
    lVar9 = lVar3;
    func_0x000107c5f9dc(lVar3,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar3);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar9);
    lVar3 = unaff_x20 + _DAT_112f39c20;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(puVar6);
      return;
    }
    func_0x000107c61174(puVar6);
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c5e184(lVar3);
  }
  else {
    func_0x000107c61170();
    lVar3 = unaff_x20 + _DAT_112f39c20;
    func_0x000107c61618();
    if (lVar3 == 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112f39c38);
      lVar3 = lVar9;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        return;
      }
      func_0x000107c61170();
      FUN_1030bdf0c();
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f39c58);
      *(undefined8 *)(unaff_x20 + _DAT_112f39c58) = 0;
      func_0x000107c61170(uVar7);
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f39c60);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f39c68);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 1;
      func_0x000107c4ffe8(lVar9);
      func_0x000107c61180();
    }
    else {
      func_0x000107c5e180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1030bdd14; end: 1030bddaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bdd14(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f39c38);
  lVar2 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    FUN_1030bdf0c();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f39c58);
    *(undefined8 *)(unaff_x20 + _DAT_112f39c58) = 0;
    func_0x000107c61170(uVar3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39c60);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39c68);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1030bddb0; end: 1030bddd7; -[AdWebViewAttachmentWebBrowserPresenter dismissAttachment] */

void FUN_1030bddb0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030bda78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bddd8; end: 1030bdf0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bddd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  FUN_1030bdf0c();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f39c58);
  *(undefined8 *)(unaff_x20 + _DAT_112f39c58) = 0;
  func_0x000107c61170(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39c60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39c68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f39c30);
  puVar3 = &UNK_110608968;
  func_0x000107c613fc(&UNK_110608968,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110608990;
  func_0x000107c613fc(&UNK_110608990,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  uStack_50 = 0x1030be850;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1106089a8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c41864(uVar2);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 1030bdf0c; end: 1030be0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bdf0c(double param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39c48));
  lVar6 = _DAT_112f39c58;
  dVar7 = *(double *)(unaff_x20 + _DAT_112f39c60);
  cVar2 = *(char *)((double *)(unaff_x20 + _DAT_112f39c60) + 1);
  dVar8 = 0.0;
  if (cVar2 != '\x01') {
    dVar8 = dVar7;
  }
  if (*(char *)((double *)(unaff_x20 + _DAT_112f39c68) + 1) == '\x01') {
    param_1 = param_1 - dVar8;
  }
  else {
    param_1 = *(double *)(unaff_x20 + _DAT_112f39c68);
    if (cVar2 != '\x01') {
      param_1 = param_1 - dVar7;
    }
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_112f39c58) != 0) {
    func_0x000107c55fe8(param_1);
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f39c28) + _DAT_1138131a0);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_113067ce8);
    pcVar4 = (code *)*puVar1;
    if ((pcVar4 != (code *)0x0) && (lVar6 = *(long *)(unaff_x20 + lVar6), lVar6 != 0)) {
      uVar5 = puVar1[1];
      func_0x000107c6157c(uVar5);
      func_0x000107c5e260();
      func_0x000107c61180();
      if (lVar6 != 0) {
        (*pcVar4)();
        func_0x000107c61170(lVar6);
      }
      if (pcVar4 == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 1030be0d8; end: 1030be14b; -[AdWebViewAttachmentWebBrowserPresenter webBrowserDidTapDismissWithCompletion:] */

void FUN_1030be0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110608940;
  func_0x000107c613fc(&UNK_110608940,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1030bddd8(FUN_1030be844,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030be14c; end: 1030be34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030be14c(uint param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_70;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar11 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000104259764();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined8 *)(lVar8 - extraout_x12);
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112f39c28) + _DAT_1138131a0);
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + _DAT_113067ce0);
    pcVar9 = (code *)*puVar1;
    if (pcVar9 != (code *)0x0) {
      uVar10 = puVar1[1];
      lVar5 = *(long *)(unaff_x20 + _DAT_112f39c28) + _DAT_113813188;
      uStack_70._4_4_ = param_1;
      (**(code **)(lVar6 + 0x10))(lVar11,lVar5,lVar2);
      uVar4 = uVar10;
      func_0x000107c6157c();
      func_0x000107c5ed70();
      (**(code **)(lVar6 + 8))(lVar11,lVar2);
      *puVar7 = 4;
      puVar7[1] = uVar4;
      puVar7[2] = lVar5;
      func_0x000107c6159c(puVar7,lVar3,6);
      func_0x0001042bfdcc(0);
      FUN_1030b77a4(puVar7,lVar8);
      lVar2 = lVar8;
      func_0x0001042b937c(lVar8);
      (*pcVar9)();
      func_0x000107c61170(lVar2);
      func_0x000107c6159c(lVar8,lVar3,0x11);
      func_0x0001042b937c(lVar8);
      (*pcVar9)();
      func_0x000107c61170(lVar8);
      param_1 = uStack_70._4_4_;
      func_0x000100d34180(pcVar9,uVar10);
      func_0x000102459608(puVar7);
    }
  }
  FUN_1030be350(param_1 & 1);
  return;
}



/* Entry: 1030be350; end: 1030be48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030be350(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar6,*(long *)(unaff_x20 + _DAT_112f39c28) + _DAT_113813188,lVar1);
  lVar3 = _DAT_112f39c20;
  lVar2 = unaff_x20 + _DAT_112f39c20;
  func_0x000107c61618();
  if ((param_1 & 1) == 0) {
    if (lVar2 != 0) {
      puVar4 = puVar6;
      FUN_1030be630(puVar6);
      puVar5 = puVar4;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar4);
      func_0x000107c5e188(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar5);
    }
  }
  else {
    if (lVar2 != 0) {
      func_0x000107c5e190();
      func_0x000107c615e8(lVar2);
    }
    lVar3 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c5e180();
      func_0x000107c615e8(lVar3);
    }
  }
  (**(code **)(lVar7 + 8))(puVar6,lVar1);
  return;
}



/* Entry: 1030be490; end: 1030be4bf; -[AdWebViewAttachmentWebBrowserPresenter didOpenExternalBrowser:] */

void FUN_1030be490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1030be14c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030be4c0; end: 1030be53b; -[AdWebViewAttachmentWebBrowserPresenter webBrowserDidOpenDeepLinkWithUrl:] */

void FUN_1030be4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 1030be53c; end: 1030be5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030be53c(double param_1,long param_2,undefined8 param_3)

{
  double *pdVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f39c58) != 0) {
    func_0x000107c41c98(*(long *)(unaff_x20 + _DAT_112f39c58),param_3,param_2);
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112f39c68);
  if (*(char *)(pdVar1 + 1) == '\x01') {
    if (*(long *)(param_2 + _DAT_11308b630) != 0) {
      func_0x000107c4223c();
      *pdVar1 = param_1 / 1000.0;
      *(undefined1 *)(pdVar1 + 1) = 0;
    }
  }
  return;
}



/* Entry: 1030be5b8; end: 1030be607; -[AdWebViewAttachmentWebBrowserPresenter webBrowserDidReceiveContext:] */

/* WARNING: Possible PIC construction at 0x0001030be5f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030be5f4) */

void FUN_1030be5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1030be53c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030be608; end: 1030be62f; -[AdWebViewAttachmentWebBrowserPresenter webBrowserScopeDidComplete] */

void FUN_1030be608(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030bdd14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030be630; end: 1030be843;  */

undefined * FUN_1030be630(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [80];
  
  func_0x000107c614f0();
  puVar3 = unaff_x20;
  func_0x0001041b5884();
  uVar9 = *puVar3;
  uVar1 = puVar3[1];
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar10 = auStack_a0;
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined1 **)(lVar4 + 0x28) = puVar10;
  func_0x000107c61434(uVar1);
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(0xe000000000000000);
  uVar5 = 0;
  func_0x000107c60714(unaff_x20,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0x6469766f7250205d,0xef204c5255206465);
  uVar6 = 0;
  func_0x000107c5ede0(0);
  uVar5 = uVar6;
  func_0x000100f15b10();
  func_0x000107c6057c(uVar6,uVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f11dca0);
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x30) = 0x5b;
  *(undefined8 *)(lVar4 + 0x38) = 0xe100000000000000;
  lVar7 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c5fadc(uVar9,uVar1);
  func_0x000107c6142c(uVar1);
  lVar4 = lVar7;
  func_0x000107c5f9dc(lVar7,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c466bc(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar4);
  return puVar8;
}



/* Entry: 1030be844; end: 1030be897;  */

void FUN_1030be844(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001030be84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1030be898; end: 1030bed3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030be898(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_b0 [6];
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar10 = 0x112dd1458;
  func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)alStack_b0 + -extraout_x8);
  lVar10 = 0x112dd1600;
  uVar8 = 0xd992a30;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar14 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - extraout_x12;
  lVar16 = ((undefined8 *)(param_2 + _DAT_11308f138))[1];
  if (lVar16 != 0) {
    uVar13 = *(undefined8 *)(param_2 + _DAT_11308f138);
    func_0x000107c61434(lVar16);
    lVar12 = param_2;
    FUN_1030c0674();
    if ((uVar8 & 0xff) != 1) {
      lVar4 = 0;
      alStack_b0[5] = uVar13;
      uStack_7c = param_4;
      lStack_78 = lVar12;
      lStack_68 = param_3;
      func_0x000100b922c8();
      pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
      (*pcVar11)(lVar10,1,1,lVar4);
      lVar12 = *(long *)(param_2 + _DAT_113815278);
      if (lVar12 != 0) {
        func_0x000107c61174(lVar12);
        FUN_1030bef5c(lVar14);
        func_0x0001030c13f4(lVar10,0x112dd1600,&UNK_10d992a30);
        (*pcVar11)(lVar14,0,1,lVar4);
        FUN_1030c12b0(lVar14,lVar10,0x112dd1600,&UNK_10d992a30);
      }
      lStack_70 = 0x612f6e;
      lVar14 = ((undefined8 *)(param_2 + _DAT_11308f140))[1];
      if (lVar14 == 0) {
        alStack_b0[3] = -0x1d00000000000000;
        alStack_b0[4] = 0x612f6e;
      }
      else {
        alStack_b0[4] = *(undefined8 *)(param_2 + _DAT_11308f140);
        alStack_b0[3] = lVar14;
      }
      alStack_b0[2] = *(undefined8 *)(param_2 + _DAT_11308f130);
      uVar2 = ((undefined8 *)(param_2 + _DAT_11308f130))[1];
      uVar13 = *(undefined8 *)(param_2 + _DAT_11308f128);
      lVar4 = 0;
      func_0x000100b92390();
      pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
      (*pcVar11)(puVar9,1,1,lVar4);
      func_0x000107c61434(lVar14);
      uVar5 = uVar2;
      func_0x000107c61434();
      func_0x00010403f914();
      if ((lVar12 != 0) && ((uVar5 & 1) != 0)) {
        lVar14 = ((undefined8 *)(lVar12 + _DAT_113815390))[1];
        if (lVar14 != 0) {
          alStack_b0[1] = *(undefined8 *)(lVar12 + _DAT_113815390);
          func_0x000107c61434(lVar14);
          func_0x0001030c13f4(puVar9,0x112dd1458,&UNK_10d992550);
          iVar3 = *(int *)(lVar4 + 0x14);
          lVar12 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar12 + -8) + 0x38))((long)puVar9 + (long)iVar3,1,1,lVar12);
          *puVar9 = alStack_b0[1];
          *(long *)((long)alStack_b0 + -extraout_x8 + 8) = lVar14;
          (*pcVar11)(puVar9,0,1,lVar4);
        }
      }
      lVar4 = 0;
      func_0x000100b92084();
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c));
      lVar6 = 0;
      func_0x000100b92194();
      func_0x0001030c13ac(lVar10,(long)puVar1 + (long)*(int *)(lVar6 + 0x14),0x112dd1600,
                          &UNK_10d992a30);
      lVar14 = (long)puVar1 + (long)*(int *)(lVar6 + 0x18);
      func_0x0001030c13ac(puVar9,lVar14,0x112dd1458,&UNK_10d992550);
      lVar12 = lStack_68;
      *puVar1 = alStack_b0[5];
      puVar1[1] = lVar16;
      puVar1[2] = alStack_b0[4];
      puVar1[3] = alStack_b0[3];
      puVar1[4] = alStack_b0[2];
      puVar1[5] = uVar2;
      puVar1[6] = uVar13;
      *(char *)(puVar1 + 7) = (char)uStack_7c;
      lVar16 = lStack_68;
      func_0x000107c3deb0();
      func_0x000107c61180();
      if (lVar16 == 0) {
        lVar16 = -0x1d00000000000000;
        lVar15 = lVar14;
      }
      else {
        lVar7 = lVar16;
        func_0x000107c5faec();
        lVar12 = lStack_68;
        lVar15 = lVar14;
        lStack_70 = lVar7;
        func_0x000107c61170(lVar16);
        lVar16 = lVar14;
      }
      func_0x000107c4f32c();
      func_0x000107c61180();
      if (lVar12 == 0) {
        lVar14 = 0;
        lVar15 = 0;
      }
      else {
        lVar14 = lVar12;
        func_0x000107c5faec();
        func_0x000107c61170(lVar12);
      }
      func_0x0001030c13f4(puVar9,0x112dd1458,&UNK_10d992550);
      func_0x0001030c13f4(lVar10,0x112dd1600,&UNK_10d992a30);
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar1,0,1,lVar6);
      *param_1 = lStack_78;
      param_1[1] = lStack_70;
      param_1[2] = lVar16;
      param_1[3] = lVar14;
      param_1[4] = lVar15;
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,0,1,lVar4);
      return;
    }
    func_0x000107c6142c(lVar16);
  }
  lVar10 = 0;
  func_0x000100b92084();
                    /* WARNING: Could not recover jumptable at 0x0001030be9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(param_1,1,1,lVar10);
  return;
}



/* Entry: 1030bed40; end: 1030bee8f; +[SCAppInstallParameters fromAdResponse:adSnap:impressionSource:] */

void FUN_1030bed40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_1030c09c4(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030bee90; end: 1030bef5b; -[SCAppInstallParameters toStoreParams] */

void FUN_1030bee90(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b92084();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = param_1;
  func_0x0001041ed0c4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001030beda8();
  func_0x000107c61170(param_1);
  FUN_1030c1370(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&SUB_100b92084
               );
  uVar3 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1030bef5c; end: 1030bf43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bef5c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  byte **ppbVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  byte *pbStack_a0;
  byte *pbStack_70;
  ulong uStack_68;
  
  uVar20 = ((undefined8 *)(param_2 + _DAT_113091940))[1];
  if (uVar20 == 0) {
    pbVar28 = (byte *)0x0;
    uVar27 = 0xe000000000000000;
  }
  else {
    pbVar28 = *(byte **)(param_2 + _DAT_113091940);
    uVar27 = uVar20;
  }
  uVar3 = *(undefined8 *)(param_2 + _DAT_113091920);
  uVar8 = ((undefined8 *)(param_2 + _DAT_113091920))[1];
  uVar30 = *(undefined8 *)(param_2 + _DAT_113091928);
  uVar31 = *(undefined8 *)(param_2 + _DAT_113091930);
  uVar23 = (ulong)pbVar28 & 0xffffffffffff;
  uVar24 = uVar27 >> 0x38 & 0xf;
  uVar1 = uVar23;
  if ((uVar27 & 0x2000000000000000) != 0) {
    uVar1 = uVar24;
  }
  uVar32 = *(undefined8 *)(param_2 + _DAT_113091938);
  if (uVar1 == 0) {
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
    func_0x000107c6142c(uVar27);
    pbStack_a0 = (byte *)0x0;
    goto LAB_1030bf27c;
  }
  if ((uVar27 >> 0x3c & 1) == 0) {
    if ((uVar27 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar28 >> 0x3c & 1) == 0) {
        uVar23 = uVar27;
        func_0x000107c60358();
      }
      else {
        pbVar28 = (byte *)((uVar27 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar28 == 0x2b) {
        if ((long)uVar23 < 1) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1030bf43c);
          (*pcVar19)();
        }
        lVar25 = uVar23 - 1;
        if (lVar25 == 0) goto LAB_1030bf250;
        pbVar29 = (byte *)0x0;
        do {
          pbVar28 = pbVar28 + 1;
          if (((9 < *pbVar28 - 0x30) ||
              (auVar15._8_8_ = 0, auVar15._0_8_ = pbVar29, SUB168(auVar15 * ZEXT816(10),8) != 0)) ||
             (uVar23 = (long)pbVar29 * 10, uVar1 = (ulong)(byte)(*pbVar28 - 0x30),
             pbVar29 = (byte *)(uVar23 + uVar1), CARRY8(uVar23,uVar1))) goto LAB_1030bf250;
          uVar22 = 0;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      else if (*pbVar28 == 0x2d) {
        if ((long)uVar23 < 1) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1030bf434);
          (*pcVar19)();
        }
        lVar25 = uVar23 - 1;
        if (lVar25 == 0) {
LAB_1030bf250:
          pbVar29 = (byte *)0x0;
          uVar22 = 1;
        }
        else {
          pbVar29 = (byte *)0x0;
          do {
            pbVar28 = pbVar28 + 1;
            if (((9 < *pbVar28 - 0x30) ||
                (auVar13._8_8_ = 0, auVar13._0_8_ = pbVar29, SUB168(auVar13 * ZEXT816(10),8) != 0))
               || (uVar23 = (long)pbVar29 * 10, uVar1 = (ulong)(byte)(*pbVar28 - 0x30),
                  pbVar29 = (byte *)(uVar23 - uVar1), uVar23 < uVar1)) goto LAB_1030bf250;
            uVar22 = 0;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
      }
      else {
        if (uVar23 == 0) goto LAB_1030bf250;
        pbVar29 = (byte *)0x0;
        if (pbVar28 == (byte *)0x0) {
          uVar22 = 0;
        }
        else {
          do {
            if (((9 < *pbVar28 - 0x30) ||
                (auVar17._8_8_ = 0, auVar17._0_8_ = pbVar29, SUB168(auVar17 * ZEXT816(10),8) != 0))
               || (uVar24 = (long)pbVar29 * 10, uVar1 = (ulong)(byte)(*pbVar28 - 0x30),
                  pbVar29 = (byte *)(uVar24 + uVar1), CARRY8(uVar24,uVar1))) goto LAB_1030bf250;
            uVar22 = 0;
            uVar23 = uVar23 - 1;
            pbVar28 = pbVar28 + 1;
          } while (uVar23 != 0);
        }
      }
    }
    else {
      pbStack_70 = pbVar28;
      uStack_68 = uVar27 & 0xffffffffffffff;
      uVar22 = (uint)pbVar28 & 0xff;
      if (uVar22 == 0x2b) {
        if (uVar24 == 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1030bf440);
          (*pcVar19)();
        }
        lVar25 = uVar24 - 1;
        if (lVar25 == 0) goto LAB_1030bf250;
        pbVar29 = (byte *)0x0;
        pbVar28 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar28 - 0x30) ||
              (auVar16._8_8_ = 0, auVar16._0_8_ = pbVar29, SUB168(auVar16 * ZEXT816(10),8) != 0)) ||
             (uVar23 = (long)pbVar29 * 10, uVar1 = (ulong)(byte)(*pbVar28 - 0x30),
             pbVar29 = (byte *)(uVar23 + uVar1), CARRY8(uVar23,uVar1))) goto LAB_1030bf250;
          uVar22 = 0;
          lVar25 = lVar25 + -1;
          pbVar28 = pbVar28 + 1;
        } while (lVar25 != 0);
      }
      else if (uVar22 == 0x2d) {
        if (uVar24 == 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1030bf438);
          (*pcVar19)();
        }
        lVar25 = uVar24 - 1;
        if (lVar25 == 0) goto LAB_1030bf250;
        pbVar29 = (byte *)0x0;
        pbVar28 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar28 - 0x30) ||
              (auVar14._8_8_ = 0, auVar14._0_8_ = pbVar29, SUB168(auVar14 * ZEXT816(10),8) != 0)) ||
             (uVar23 = (long)pbVar29 * 10, uVar1 = (ulong)(byte)(*pbVar28 - 0x30),
             pbVar29 = (byte *)(uVar23 - uVar1), uVar23 < uVar1)) goto LAB_1030bf250;
          uVar22 = 0;
          lVar25 = lVar25 + -1;
          pbVar28 = pbVar28 + 1;
        } while (lVar25 != 0);
      }
      else {
        if (uVar24 == 0) goto LAB_1030bf250;
        pbVar29 = (byte *)0x0;
        ppbVar26 = &pbStack_70;
        do {
          if (((9 < *(byte *)ppbVar26 - 0x30) ||
              (auVar18._8_8_ = 0, auVar18._0_8_ = pbVar29, SUB168(auVar18 * ZEXT816(10),8) != 0)) ||
             (uVar23 = (long)pbVar29 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar26 - 0x30),
             pbVar29 = (byte *)(uVar23 + uVar1), CARRY8(uVar23,uVar1))) goto LAB_1030bf250;
          uVar22 = 0;
          uVar24 = uVar24 - 1;
          ppbVar26 = (byte **)((long)ppbVar26 + 1);
        } while (uVar24 != 0);
      }
    }
    func_0x000107c61434(uVar20);
    func_0x000107c61434(uVar8);
    pbVar28 = pbVar29;
  }
  else {
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
    uVar20 = uVar27;
    func_0x0001030c0568(pbVar28,uVar27,10,&UNK_10123df44);
    uVar22 = (uint)uVar20;
  }
  func_0x000107c6142c(uVar27);
  pbStack_a0 = (byte *)0x0;
  if ((uVar22 & 0xff) != 1) {
    pbStack_a0 = pbVar28;
  }
LAB_1030bf27c:
  lVar25 = _DAT_113815368;
  uVar4 = *(undefined8 *)(param_2 + _DAT_113091948);
  uVar9 = ((undefined8 *)(param_2 + _DAT_113091948))[1];
  lVar21 = 0;
  func_0x000100b922c8();
  func_0x0001030c13ac(param_2 + lVar25,(long)param_1 + (long)*(int *)(lVar21 + 0x28),0x112d3bc20,
                      &UNK_10d904ef0);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113815370);
  uVar10 = ((undefined8 *)(param_2 + _DAT_113815370))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_113815378);
  uVar11 = ((undefined8 *)(param_2 + _DAT_113815378))[1];
  func_0x0001030c13ac(param_2 + _DAT_113815380,(long)param_1 + (long)*(int *)(lVar21 + 0x34),
                      0x112d3bc20,&UNK_10d904ef0);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113815388);
  uVar12 = ((undefined8 *)(param_2 + _DAT_113815388))[1];
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar11);
  func_0x000107c61170(param_2);
  *param_1 = uVar3;
  param_1[1] = uVar8;
  param_1[2] = uVar30;
  param_1[3] = uVar31;
  param_1[4] = uVar32;
  param_1[5] = pbStack_a0;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x2c));
  *puVar2 = uVar5;
  puVar2[1] = uVar10;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x30));
  *puVar2 = uVar6;
  puVar2[1] = uVar11;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x38));
  *param_1 = uVar7;
  param_1[1] = uVar12;
  return;
}



/* Entry: 1030bf440; end: 1030bfd3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1030bf440(void)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *******pppppppuVar18;
  long unaff_x20;
  long lVar19;
  undefined8 ******ppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  long lVar23;
  undefined8 ******ppppppuVar24;
  long lVar25;
  undefined8 *****pppppuVar26;
  undefined8 ******ppppppuStack_f0;
  ulong uStack_e8;
  long ******apppppplStack_e0 [3];
  long lStack_c8;
  undefined8 *******apppppppuStack_c0 [5];
  undefined8 uStack_98;
  long ******pppppplStack_90;
  long lStack_88;
  undefined8 ******appppppuStack_80 [2];
  
  lVar9 = 0;
  func_0x000100b922c8();
  lVar25 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pppppppuVar18 = (undefined8 *******)((long)&ppppppuStack_f0 + lVar5);
  lVar10 = 0x112dd1600;
  func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)pppppppuVar18 - extraout_x8_00;
  lVar10 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar19 - extraout_x8_01;
  lVar10 = 0;
  func_0x000100b92084();
  func_0x0001030c13ac(unaff_x20 + *(int *)(lVar10 + 0x1c),lVar23,0x112dd1460,&UNK_10d9925f0);
  lVar11 = 0;
  func_0x000100b92194();
  lVar10 = lVar23;
  (**(code **)(*(long *)(lVar11 + -8) + 0x30))(lVar23,1,lVar11);
  if ((int)lVar10 == 1) {
    func_0x0001030c13f4(lVar23,0x112dd1460,&UNK_10d9925f0);
    (**(code **)(lVar25 + 0x38))(lVar19,1,1,lVar9);
  }
  else {
    func_0x0001030c13ac(lVar23 + *(int *)(lVar11 + 0x14),lVar19,0x112dd1600,&UNK_10d992a30);
    func_0x0001030c1370(lVar23,&SUB_100b92194);
    lVar10 = lVar19;
    (**(code **)(lVar25 + 0x30))(lVar19,1,lVar9);
    if ((int)lVar10 != 1) {
      pppppppuVar14 = pppppppuVar18;
      func_0x0001030c1434(lVar19,pppppppuVar18,&SUB_100b922c8);
      uVar12 = *(ulong *)((long)apppppppuStack_c0 + lVar5 + 8);
      if (uVar12 == 0) {
        ppppppuVar20 = (undefined8 ******)0x0;
        uVar12 = 0xe000000000000000;
      }
      else {
        ppppppuVar20 = *(undefined8 *******)((long)apppppppuStack_c0 + lVar5);
      }
      apppppplStack_e0[0] = (long ******)((ulong)apppppplStack_e0[0] & 0xffffffff00000000);
      pppppplStack_90 = (long ******)apppppplStack_e0;
      if ((uVar12 >> 0x3c & 1) == 0) {
        if ((uVar12 >> 0x3d & 1) == 0) {
          if (((ulong)ppppppuVar20 >> 0x3c & 1) == 0) goto LAB_1030bfd10;
          pppppppuVar21 = (undefined8 *******)(uVar12 + 0x20);
          bVar4 = *(byte *)pppppppuVar21;
          if (((bVar4 - 9 < 5) || (bVar4 == 0)) || (bVar4 == 0x20)) goto LAB_1030bf6cc;
          func_0x000107c61434();
          pppppppuVar14 = apppppplStack_e0;
          func_0x000107c60eb8(pppppppuVar21,pppppppuVar14);
          if (pppppppuVar21 != (undefined8 *******)0x0) goto LAB_1030bf8bc;
LAB_1030bf6ac:
          appppppuStack_80[0] = (undefined8 ******)((ulong)appppppuStack_80[0] & 0xffffffffffffff00)
          ;
        }
        else {
          apppppppuStack_c0[1] = (undefined8 *******)(uVar12 & 0xffffffffffffff);
          uVar3 = (uint)ppppppuVar20 & 0xff;
          apppppppuStack_c0[0] = (undefined8 *******)ppppppuVar20;
          if (((uVar3 - 9 < 5) || (((ulong)ppppppuVar20 & 0xff) == 0)) || (uVar3 == 0x20)) {
LAB_1030bf6cc:
            appppppuStack_80[0] =
                 (undefined8 ******)((ulong)appppppuStack_80[0] & 0xffffffffffffff00);
            func_0x000107c61434();
          }
          else {
            func_0x000107c61434();
            pppppppuVar21 = apppppppuStack_c0;
            pppppppuVar14 = apppppplStack_e0;
            func_0x000107c60eb8(pppppppuVar21,pppppppuVar14);
            if (pppppppuVar21 == (undefined8 *******)0x0) goto LAB_1030bf6ac;
LAB_1030bf8bc:
            appppppuStack_80[0] =
                 (undefined8 ******)CONCAT71(appppppuStack_80[0]._1_7_,*(byte *)pppppppuVar21 == 0);
          }
        }
      }
      else {
LAB_1030bfd10:
        func_0x000107c61434();
        pppppppuVar14 = apppppppuStack_c0 + 4;
        func_0x000107c602f0(appppppuStack_80,FUN_1030c12f8,pppppppuVar14,ppppppuVar20,uVar12,
                            PTR___sSbN_11034dd40);
      }
      func_0x000107c6142c(uVar12);
      if (((ulong)appppppuStack_80[0] & 1) != 0) {
        fVar7 = apppppplStack_e0[0]._0_4_;
        uVar12 = (ulong)apppppplStack_e0[0] & 0xffffffff;
        if (1.0 <= apppppplStack_e0[0]._0_4_) {
          pppppppuVar21 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000100214a84();
          appppppuStack_80[0] = pppppppuVar21;
          if (2.0 <= fVar7) {
            pppppppuVar13 =
                 *(undefined8 ********)
                  PTR__SKStoreProductParameterAdNetworkSourceAppStoreIdentifier_110347e48;
            func_0x000107c5faec();
            apppppppuStack_c0[0] = *(undefined8 ********)((long)&lStack_c8 + lVar5);
            apppppppuStack_c0[3] = (undefined8 *******)PTR___sSuN_11034e220;
            func_0x000100102924(apppppppuStack_c0,apppppppuStack_c0 + 4);
            ppppppuVar20 = pppppppuVar21;
            func_0x000107c61558(pppppppuVar21);
            apppppppuStack_c0[0] = pppppppuVar21;
            func_0x0001001029e8(apppppppuStack_c0 + 4,pppppppuVar13,pppppppuVar14,ppppppuVar20);
            func_0x000107c6142c(pppppppuVar14);
            pppppppuVar21 = apppppppuStack_c0[0];
            pppppppuVar14 =
                 *(undefined8 ********)PTR__SKStoreProductParameterAdNetworkVersion_110347e60;
            func_0x000107c5faec();
            pppppppuVar22 = pppppppuVar14;
            pppppppuVar15 = pppppppuVar13;
            func_0x000107c5fdfc(uVar12);
            apppppppuStack_c0[3] = (undefined8 *******)PTR___sSSN_11034da80;
            apppppppuStack_c0[0] = pppppppuVar22;
            apppppppuStack_c0[1] = pppppppuVar15;
            func_0x000100102924(apppppppuStack_c0,apppppppuStack_c0 + 4);
            pppppppuVar22 = pppppppuVar21;
            func_0x000107c61558(pppppppuVar21);
            apppppppuStack_c0[0] = pppppppuVar21;
            func_0x0001001029e8(apppppppuStack_c0 + 4,pppppppuVar14,pppppppuVar13,pppppppuVar22);
            func_0x000107c6142c(pppppppuVar13);
            appppppuStack_80[0] = apppppppuStack_c0[0];
            pppppppuVar21 = apppppppuStack_c0[0];
          }
          plVar1 = (long *)((long)pppppppuVar18 + (long)*(int *)(lVar9 + 0x2c));
          pppppppuVar22 = (undefined8 *******)plVar1[1];
          appppppuStack_80[0] = pppppppuVar21;
          if (pppppppuVar22 != (undefined8 *******)0x0) {
            ppppppuVar24 = (undefined8 ******)*plVar1;
            func_0x000107c61434(pppppppuVar22);
            ppppppuVar20 = ppppppuVar24;
            pppppppuVar14 = pppppppuVar22;
            func_0x000107c5fb5c(ppppppuVar24,pppppppuVar22);
            if ((long)ppppppuVar20 < 1) {
              func_0x000107c6142c(pppppppuVar22);
            }
            else {
              pppppppuVar15 =
                   *(undefined8 ********)
                    PTR__SKStoreProductParameterAdNetworkAttributionSignature_110347e28;
              func_0x000107c5faec(pppppppuVar15);
              apppppppuStack_c0[3] = (undefined8 *******)PTR___sSSN_11034da80;
              apppppppuStack_c0[0] = (undefined8 *******)ppppppuVar24;
              apppppppuStack_c0[1] = pppppppuVar22;
              func_0x000100102924(apppppppuStack_c0,apppppppuStack_c0 + 4);
              ppppppuVar20 = pppppppuVar21;
              func_0x000107c61558(pppppppuVar21);
              apppppppuStack_c0[0] = pppppppuVar21;
              func_0x0001001029e8(apppppppuStack_c0 + 4,pppppppuVar15,pppppppuVar14,ppppppuVar20);
              func_0x000107c6142c(pppppppuVar14);
              appppppuStack_80[0] = apppppppuStack_c0[0];
              pppppppuVar14 = pppppppuVar15;
              pppppppuVar21 = apppppppuStack_c0[0];
            }
          }
          uVar16 = *(undefined8 *)PTR__SKStoreProductParameterAdNetworkCampaignIdentifier_110347e30;
          func_0x000107c5faec(uVar16);
          apppppppuStack_c0[0] = *(undefined8 ********)((long)apppppplStack_e0 + lVar5);
          apppppppuStack_c0[3] = (undefined8 *******)PTR___sSiN_11034deb0;
          func_0x000100102924(apppppppuStack_c0,apppppppuStack_c0 + 4);
          ppppppuVar20 = pppppppuVar21;
          func_0x000107c61558(pppppppuVar21);
          apppppppuStack_c0[0] = pppppppuVar21;
          func_0x0001001029e8(apppppppuStack_c0 + 4,uVar16,pppppppuVar14,ppppppuVar20);
          func_0x000107c6142c(pppppppuVar14);
          pppppppuVar14 = apppppppuStack_c0[0];
          appppppuStack_80[0] = apppppppuStack_c0[0];
          pppppppuVar21 = *(undefined8 ********)((long)apppppplStack_e0 + lVar5 + -8);
          if (pppppppuVar21 != (undefined8 *******)0x0) {
            ppppppuVar24 = *pppppppuVar18;
            func_0x000107c61434(pppppppuVar21);
            ppppppuVar20 = ppppppuVar24;
            pppppppuVar22 = pppppppuVar21;
            func_0x000107c5fb5c(ppppppuVar24,pppppppuVar21);
            if ((long)ppppppuVar20 < 1) {
              func_0x000107c6142c(pppppppuVar21);
            }
            else {
              uVar16 = *(undefined8 *)PTR__SKStoreProductParameterAdNetworkIdentifier_110347e38;
              func_0x000107c5faec(uVar16);
              apppppppuStack_c0[3] = (undefined8 *******)PTR___sSSN_11034da80;
              apppppppuStack_c0[0] = (undefined8 *******)ppppppuVar24;
              apppppppuStack_c0[1] = pppppppuVar21;
              func_0x000100102924(apppppppuStack_c0,apppppppuStack_c0 + 4);
              pppppppuVar21 = pppppppuVar14;
              func_0x000107c61558(pppppppuVar14);
              apppppppuStack_c0[0] = pppppppuVar14;
              func_0x0001001029e8(apppppppuStack_c0 + 4,uVar16,pppppppuVar22,pppppppuVar21);
              func_0x000107c6142c(pppppppuVar22);
              appppppuStack_80[0] = apppppppuStack_c0[0];
              pppppppuVar14 = apppppppuStack_c0[0];
            }
          }
          lVar11 = 0;
          func_0x000107c5eec8();
          lVar25 = *(long *)(lVar11 + -8);
          uStack_e8 = lVar23;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
          pppppuVar26 = (undefined8 *****)(lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
          iVar8 = *(int *)(lVar9 + 0x28);
          lVar10 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          ppppppuStack_f0 = (undefined8 ******)pppppuVar26;
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar19 = (long)pppppuVar26 - extraout_x8_03;
          func_0x0001030c13ac((long)pppppppuVar18 + (long)iVar8,lVar19,0x112d3bc20,&UNK_10d904ef0);
          lVar10 = lVar19;
          (**(code **)(lVar25 + 0x30))(lVar19,1,lVar11);
          if ((int)lVar10 == 1) {
            lVar11 = 0x112d3bc20;
            func_0x0001030c13f4(lVar19,0x112d3bc20,&UNK_10d904ef0);
          }
          else {
            (**(code **)(lVar25 + 0x20))(pppppuVar26,lVar19,lVar11);
            uVar16 = *(undefined8 *)PTR__SKStoreProductParameterAdNetworkNonce_110347e40;
            func_0x000107c5faec(uVar16);
            lStack_88 = lVar11;
            func_0x0001000a9d90(apppppppuStack_c0 + 4);
            (**(code **)(lVar25 + 0x10))();
            apppppplStack_e0[1] = (long ******)uStack_98;
            apppppplStack_e0[0] = (long ******)apppppppuStack_c0[4];
            lStack_c8 = lStack_88;
            apppppplStack_e0[2] = pppppplStack_90;
            if (lStack_88 == 0) {
              func_0x0001030c13f4(apppppplStack_e0,0x112d387f8,&UNK_10d902650);
              func_0x000100216878(apppppppuStack_c0,uVar16,lVar19);
              func_0x000107c6142c(lVar19);
              func_0x0001030c13f4(apppppppuStack_c0,0x112d387f8,&UNK_10d902650);
            }
            else {
              func_0x000100102924(apppppplStack_e0,apppppppuStack_c0);
              ppppppuVar20 = pppppppuVar14;
              func_0x000107c61558(pppppppuVar14);
              apppppplStack_e0[0] = (long ******)pppppppuVar14;
              func_0x0001001029e8(apppppppuStack_c0,uVar16,lVar19,ppppppuVar20);
              func_0x000107c6142c(lVar19);
              appppppuStack_80[0] = apppppplStack_e0[0];
            }
            pppppppuVar14 = (undefined8 *******)appppppuStack_80[0];
            (**(code **)(lVar25 + 8))(pppppuVar26,lVar11);
          }
          puVar6 = PTR___sSiN_11034deb0;
          uVar16 = *(undefined8 *)PTR__SKStoreProductParameterAdNetworkTimestamp_110347e58;
          func_0x000107c5faec(uVar16);
          apppppppuStack_c0[0] = *(undefined8 ********)((long)apppppplStack_e0 + lVar5 + 0x10);
          apppppppuStack_c0[3] = (undefined8 *******)puVar6;
          func_0x000100102924(apppppppuStack_c0,apppppppuStack_c0 + 4);
          ppppppuVar20 = pppppppuVar14;
          func_0x000107c61558(pppppppuVar14);
          apppppppuStack_c0[0] = pppppppuVar14;
          func_0x0001001029e8(apppppppuStack_c0 + 4,uVar16,lVar11,ppppppuVar20);
          func_0x000107c6142c(lVar11);
          pppppppuVar14 = apppppppuStack_c0[0];
          iVar8 = 2;
          func_0x000100029b9c(2,0x10,1,0);
          if (iVar8 != 0) {
            puVar2 = (ulong *)((long)pppppppuVar18 + (long)*(int *)(lVar9 + 0x30));
            uVar12 = puVar2[1];
            if ((uVar12 != 0) &&
               (((uVar17 = *puVar2, uVar17 == 0x302e34 && (uVar12 == 0xe300000000000000)) ||
                (func_0x000107c605b8(uVar17,uVar12,0x302e34,0xe300000000000000,0), (uVar17 & 1) != 0
                )))) {
              uVar16 = *(undefined8 *)
                        PTR__SKStoreProductParameterAdNetworkSourceIdentifier_110347e50;
              func_0x000107c5faec(uVar16);
              apppppppuStack_c0[0] = *(undefined8 ********)((long)apppppplStack_e0 + lVar5 + 8);
              apppppppuStack_c0[3] = (undefined8 *******)puVar6;
              func_0x000100102924(apppppppuStack_c0,apppppppuStack_c0 + 4);
              pppppppuVar21 = pppppppuVar14;
              func_0x000107c61558(pppppppuVar14);
              apppppppuStack_c0[0] = pppppppuVar14;
              func_0x0001001029e8(apppppppuStack_c0 + 4,uVar16,uVar12,pppppppuVar21);
              func_0x000107c6142c(uVar12);
            }
          }
          func_0x0001030c1370(pppppppuVar18,&SUB_100b922c8);
          return;
        }
      }
      func_0x0001030c1370(pppppppuVar18,&SUB_100b922c8);
      goto LAB_1030bf600;
    }
  }
  func_0x0001030c13f4(lVar19,0x112dd1600,&UNK_10d992a30);
LAB_1030bf600:
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1030bfd40; end: 1030c039f;  */

void FUN_1030bfd40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long alStack_f0 [8];
  undefined8 *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  ulong uStack_68;
  
  lVar6 = 0x112dd1458;
  func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  puStack_78 = (undefined8 *)((long)alStack_f0 - extraout_x8);
  func_0x000100b922c8();
  lStack_90 = *(long *)(lVar6 + -8);
  lStack_80 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  puVar13 = (undefined8 *)
            (((long)alStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x112dd42a0;
  func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar13 - extraout_x8_01;
  lVar7 = 0;
  func_0x000100b918b4();
  lVar11 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar14 = (undefined8 *)(lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)puVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = 0;
  func_0x000100b92194();
  pcStack_a0 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  lStack_98 = lVar6;
  lStack_88 = (long)puVar15 - extraout_x12;
  (*pcStack_a0)((long)puVar15 - extraout_x12,1,1);
  lVar6 = 0;
  func_0x000100b91790();
  lStack_a8 = lVar6;
  func_0x0001030c13ac((long)unaff_x20 + (long)*(int *)(lVar6 + 0x18),lVar16,0x112dd42a0,
                      &UNK_10dcdf270);
  lVar6 = lVar16;
  (**(code **)(lVar11 + 0x30))(lVar16,1,lVar7);
  if ((int)lVar6 == 1) {
    func_0x0001030c13f4(lVar16,0x112dd42a0,&UNK_10dcdf270);
    lVar6 = lStack_88;
    goto LAB_1030c02e0;
  }
  func_0x0001030c1434(lVar16,puVar14,&SUB_100b918b4);
  alStack_f0[6] = *puVar14;
  alStack_f0[7] = puVar14[1];
  uVar9 = puVar14[2];
  func_0x000107c61434();
  func_0x000107c49820();
  alStack_f0[5] = uVar9;
  alStack_f0[4] = *(long *)((long)puVar14 + (long)*(int *)(lVar7 + 0x2c));
  if (alStack_f0[4] == 0) {
    alStack_f0[4] = 0;
  }
  else {
    func_0x000107c49820();
  }
  uVar9 = puVar14[3];
  func_0x000107c49820();
  alStack_f0[3] = uVar9;
  alStack_f0[2] = *(long *)((long)puVar14 + (long)*(int *)(lVar7 + 0x24));
  puStack_b0 = param_1;
  if (alStack_f0[2] == 0) {
    alStack_f0[2] = 0;
  }
  else {
    func_0x000107c5d388();
  }
  lVar11 = lStack_80;
  puVar1 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x28));
  alStack_f0[1] = *puVar1;
  uVar10 = puVar1[1];
  iVar4 = *(int *)(lStack_80 + 0x28);
  iVar5 = *(int *)(lVar7 + 0x1c);
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar16 = *(long *)(lVar6 + -8);
  (**(code **)(lVar16 + 0x10))((long)puVar13 + (long)iVar4,(long)puVar14 + (long)iVar5,lVar6);
  (**(code **)(lVar16 + 0x38))((long)puVar13 + (long)iVar4,0,1,lVar6);
  puVar1 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x20));
  uVar9 = *puVar1;
  uVar3 = puVar1[1];
  puVar1 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x30));
  uVar17 = *puVar1;
  uVar8 = puVar1[1];
  func_0x0001030c13ac((long)puVar14 + (long)*(int *)(lVar7 + 0x34),
                      (long)puVar13 + (long)*(int *)(lVar11 + 0x34),0x112d3bc20,&UNK_10d904ef0);
  lVar6 = alStack_f0[7];
  puVar1 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x38));
  *puVar13 = alStack_f0[6];
  puVar13[1] = lVar6;
  lVar6 = alStack_f0[4];
  puVar13[2] = alStack_f0[5];
  puVar13[3] = lVar6;
  puVar13[4] = alStack_f0[3];
  puVar13[5] = alStack_f0[2];
  puVar13[6] = alStack_f0[1];
  puVar13[7] = uVar10;
  puVar2 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar11 + 0x2c));
  *puVar2 = uVar9;
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar11 + 0x30));
  *puVar2 = uVar17;
  puVar2[1] = uVar8;
  uVar9 = puVar1[1];
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar11 + 0x38));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  lVar6 = 0;
  func_0x000100b92390();
  pcVar12 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar12)(puStack_78,1,1,lVar6);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar3);
  func_0x000107c61434();
  func_0x00010403f914();
  if ((uVar8 & 1) != 0) {
    puVar1 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar7 + 0x3c));
    lVar7 = puVar1[1];
    if (lVar7 != 0) {
      uVar9 = *puVar1;
      func_0x000107c61434(lVar7);
      puVar1 = puStack_78;
      func_0x0001030c13f4(puStack_78,0x112dd1458,&UNK_10d992550);
      iVar4 = *(int *)(lVar6 + 0x14);
      lVar11 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))((long)puVar1 + (long)iVar4,1,1,lVar11);
      *puVar1 = uVar9;
      puVar1[1] = lVar7;
      (*pcVar12)(puVar1,0,1,lVar6);
    }
  }
  lVar6 = lStack_88;
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lStack_a8 + 0x24));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    alStack_f0[6] = -0x2000000000000000;
    alStack_f0[7] = 0;
    lVar11 = puVar1[3];
    if (lVar11 == 0) goto LAB_1030c01c8;
LAB_1030c019c:
    alStack_f0[5] = puVar1[2];
    lVar16 = puVar1[5];
    alStack_f0[4] = lVar11;
    if (lVar16 != 0) goto LAB_1030c01ac;
LAB_1030c01d8:
    uVar9 = 0;
    lVar16 = -0x2000000000000000;
  }
  else {
    alStack_f0[7] = *puVar1;
    lVar11 = puVar1[3];
    alStack_f0[6] = lVar7;
    if (lVar11 != 0) goto LAB_1030c019c;
LAB_1030c01c8:
    alStack_f0[4] = -0x2000000000000000;
    alStack_f0[5] = 0;
    lVar16 = puVar1[5];
    if (lVar16 == 0) goto LAB_1030c01d8;
LAB_1030c01ac:
    uVar9 = puVar1[4];
  }
  uStack_68 = *(ulong *)((long)unaff_x20 + (long)*(int *)(lStack_a8 + 0x20));
  if (5 < uStack_68) {
    func_0x000107c61434();
    func_0x000107c61434(lVar7);
    func_0x000107c61434(lVar11);
    func_0x000107c60614(&UNK_11074e8c0,&uStack_68,&UNK_11074e8c0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1030c03a0);
    (*pcVar12)();
  }
  uVar17 = puVar1[7];
  func_0x000107c61434();
  func_0x000107c61434(lVar7);
  func_0x000107c61434(lVar11);
  func_0x0001030c13f4(lVar6,0x112dd1460,&UNK_10d9925f0);
  lVar7 = alStack_f0[6];
  *puVar15 = alStack_f0[7];
  puVar15[1] = lVar7;
  lVar7 = alStack_f0[4];
  puVar15[2] = alStack_f0[5];
  puVar15[3] = lVar7;
  puVar15[4] = uVar9;
  puVar15[5] = lVar16;
  puVar15[6] = uVar17;
  *(char *)(puVar15 + 7) = (char)uStack_68;
  lVar7 = lStack_98;
  iVar4 = *(int *)(lStack_98 + 0x14);
  func_0x0001030c1434(puVar13,(long)puVar15 + (long)iVar4,&SUB_100b922c8);
  (**(code **)(lStack_90 + 0x38))((long)puVar15 + (long)iVar4,0,1,lStack_80);
  FUN_1030c12b0(puStack_78,(long)puVar15 + (long)*(int *)(lVar7 + 0x18),0x112dd1458,&UNK_10d992550);
  func_0x0001030c1370(puVar14,&SUB_100b918b4);
  (*pcStack_a0)(puVar15,0,1,lVar7);
  FUN_1030c12b0(puVar15,lVar6,0x112dd1460,&UNK_10d9925f0);
  param_1 = puStack_b0;
LAB_1030c02e0:
  uVar9 = *unaff_x20;
  uVar17 = unaff_x20[1];
  uVar10 = unaff_x20[2];
  lVar7 = 0;
  func_0x000100b92084();
  func_0x0001030c13ac(lVar6,(long)param_1 + (long)*(int *)(lVar7 + 0x1c),0x112dd1460,&UNK_10d9925f0)
  ;
  func_0x000107c61434(uVar10);
  func_0x0001030c13f4(lVar6,0x112dd1460,&UNK_10d9925f0);
  *param_1 = uVar9;
  param_1[2] = 0xe300000000000000;
  param_1[1] = 0x612f6e;
  param_1[3] = uVar17;
  param_1[4] = uVar10;
  return;
}



/* Entry: 1030c03a0; end: 1030c048b; -[SCAdAppInstallAttachment toSCAppInstallParams] */

void FUN_1030c03a0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  
  lVar1 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000100b92084();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x0001041c9838(puVar2);
  FUN_1030bfd40(lVar1);
  FUN_1030c1370(puVar2,&SUB_100b91790);
  func_0x0001041ed328(0);
  func_0x000107c610f8();
  func_0x0001041ec3c8(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1030c048c; end: 1030c0673; -[SCAppInstallSKANAttribution initWithSkAdNetworkAttribution:] */

undefined1 * FUN_1030c048c(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  
  puVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000100b922c8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  FUN_1030bef5c(puVar3);
  func_0x000107c610f8(puVar1);
  func_0x0001041f1cb4(puVar3);
  func_0x000107c61170(param_3);
  puVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,puVar1,
                      *(undefined4 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x30),
                      *(undefined2 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x34));
  return puVar3;
}



/* Entry: 1030c0674; end: 1030c09c3;  */

void FUN_1030c0674(long param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte **ppbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte *pbStack_40;
  ulong uStack_38;
  
  pbVar5 = (byte *)0x0;
  func_0x00010403f32c();
  func_0x00010403d898();
  if (param_2 == (byte *)0x0) {
    func_0x0001084c1998();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c49820();
      func_0x000107c61170(param_1);
    }
  }
  else {
    pbVar6 = (byte *)((ulong)pbVar5 & 0xffffffffffff);
    pbVar8 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
    pbVar3 = pbVar6;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      pbVar3 = pbVar8;
    }
    if (pbVar3 == (byte *)0x0) {
      func_0x000107c6142c(param_2);
    }
    else {
      if (((ulong)param_2 >> 0x3c & 1) == 0) {
        if (((ulong)param_2 >> 0x3d & 1) == 0) {
          if (((ulong)pbVar5 >> 0x3c & 1) == 0) {
            pbVar6 = param_2;
            func_0x000107c60358();
          }
          else {
            pbVar5 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar5 == 0x2b) {
            if ((long)pbVar6 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1030c09c0);
              (*pcVar4)();
            }
            pbVar6 = pbVar6 + -1;
            if (pbVar6 != (byte *)0x0) {
              lVar10 = 0;
              do {
                pbVar5 = pbVar5 + 1;
                if (((9 < *pbVar5 - 0x30) ||
                    (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                   || (uVar1 = (ulong)(byte)(*pbVar5 - 0x30), lVar10 = lVar9 + uVar1,
                      SCARRY8(lVar9,uVar1))) break;
                pbVar6 = pbVar6 + -1;
              } while (pbVar6 != (byte *)0x0);
            }
          }
          else if (*pbVar5 == 0x2d) {
            if ((long)pbVar6 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1030c09b8);
              (*pcVar4)();
            }
            pbVar6 = pbVar6 + -1;
            if (pbVar6 != (byte *)0x0) {
              lVar10 = 0;
              while( true ) {
                pbVar5 = pbVar5 + 1;
                if ((9 < *pbVar5 - 0x30) ||
                   (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                break;
                uVar1 = (ulong)(byte)(*pbVar5 - 0x30);
                lVar10 = lVar9 - uVar1;
                if ((SBORROW8(lVar9,uVar1)) || (pbVar6 = pbVar6 + -1, pbVar6 == (byte *)0x0)) break;
              }
            }
          }
          else if (pbVar6 != (byte *)0x0) {
            lVar10 = 0;
            pbVar3 = pbVar5;
            while (pbVar3 != (byte *)0x0) {
              if (((9 < *pbVar5 - 0x30) ||
                  (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar5 - 0x30), lVar10 = lVar9 + uVar1,
                    SCARRY8(lVar9,uVar1))) break;
              pbVar6 = pbVar6 + -1;
              pbVar5 = pbVar5 + 1;
              pbVar3 = pbVar6;
            }
          }
        }
        else {
          pbStack_40 = pbVar5;
          uStack_38 = (ulong)param_2 & 0xffffffffffffff;
          uVar2 = (uint)pbVar5 & 0xff;
          if (uVar2 == 0x2b) {
            if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1030c09c4);
              (*pcVar4)();
            }
            pbVar8 = pbVar8 + -1;
            if (pbVar8 != (byte *)0x0) {
              lVar10 = 0;
              pbVar5 = (byte *)((ulong)&pbStack_40 | 1);
              do {
                if (((9 < *pbVar5 - 0x30) ||
                    (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                   || (uVar1 = (ulong)(byte)(*pbVar5 - 0x30), lVar10 = lVar9 + uVar1,
                      SCARRY8(lVar9,uVar1))) break;
                pbVar8 = pbVar8 + -1;
                pbVar5 = pbVar5 + 1;
              } while (pbVar8 != (byte *)0x0);
            }
          }
          else if (uVar2 == 0x2d) {
            if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1030c09bc);
              (*pcVar4)();
            }
            pbVar8 = pbVar8 + -1;
            if (pbVar8 != (byte *)0x0) {
              lVar10 = 0;
              pbVar5 = (byte *)((ulong)&pbStack_40 | 1);
              while( true ) {
                if ((9 < *pbVar5 - 0x30) ||
                   (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                break;
                uVar1 = (ulong)(byte)(*pbVar5 - 0x30);
                lVar10 = lVar9 - uVar1;
                if ((SBORROW8(lVar9,uVar1)) ||
                   (pbVar8 = pbVar8 + -1, pbVar5 = pbVar5 + 1, pbVar8 == (byte *)0x0)) break;
              }
            }
          }
          else if (pbVar8 != (byte *)0x0) {
            lVar10 = 0;
            ppbVar7 = &pbStack_40;
            while( true ) {
              if ((9 < *(byte *)ppbVar7 - 0x30) ||
                 (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
              break;
              uVar1 = (ulong)(byte)(*(byte *)ppbVar7 - 0x30);
              lVar10 = lVar9 + uVar1;
              if ((SCARRY8(lVar9,uVar1)) ||
                 (pbVar8 = pbVar8 + -1, ppbVar7 = (byte **)((long)ppbVar7 + 1),
                 pbVar8 == (byte *)0x0)) break;
            }
          }
        }
      }
      else {
        func_0x0001030c0568();
      }
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 1030c09c4; end: 1030c0f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030c09c4(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long *plVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_d0 [11];
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar4 = 0x112dd1458;
  lStack_70 = param_2;
  func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar10 = (long *)((long)alStack_d0 + -extraout_x8);
  lVar4 = 0x112dd1600;
  func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = (long)plVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12;
  lVar4 = 0x112e541b8;
  uVar8 = 0xda55628;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = (long *)(lVar13 - extraout_x8_01);
  lVar4 = 0;
  func_0x000100b92084();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = (long)plVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_78 = param_3;
  if (5 < param_3) {
    uStack_68 = param_3;
    func_0x000107c60614(&UNK_11074e8c0,&uStack_68,&UNK_11074e8c0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1030c0f78);
    (*pcVar12)();
  }
  lVar16 = ((undefined8 *)(param_1 + _DAT_11308f138))[1];
  if (lVar16 != 0) {
    alStack_d0[10] = *(undefined8 *)(param_1 + _DAT_11308f138);
    func_0x000107c61434(lVar16);
    lVar7 = param_1;
    FUN_1030c0674();
    if ((uVar8 & 0xff) != 1) {
      lVar5 = 0;
      alStack_d0[5] = lVar7;
      alStack_d0[6] = lVar15;
      alStack_d0[7] = lVar11 - extraout_x12_00;
      alStack_d0[8] = lVar11;
      func_0x000100b922c8();
      pcVar12 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      (*pcVar12)(lVar13,1,1,lVar5);
      lVar11 = *(long *)(param_1 + _DAT_113815278);
      if (lVar11 != 0) {
        func_0x000107c61174(lVar11);
        FUN_1030bef5c(lVar14);
        func_0x0001030c13f4(lVar13,0x112dd1600,&UNK_10d992a30);
        (*pcVar12)(lVar14,0,1,lVar5);
        FUN_1030c12b0(lVar14,lVar13,0x112dd1600,&UNK_10d992a30);
      }
      alStack_d0[9] = 0x612f6e;
      lVar14 = ((undefined8 *)(param_1 + _DAT_11308f140))[1];
      if (lVar14 == 0) {
        alStack_d0[3] = -0x1d00000000000000;
        alStack_d0[4] = 0x612f6e;
      }
      else {
        alStack_d0[4] = *(undefined8 *)(param_1 + _DAT_11308f140);
        alStack_d0[3] = lVar14;
      }
      alStack_d0[2] = *(undefined8 *)(param_1 + _DAT_11308f130);
      uVar2 = ((undefined8 *)(param_1 + _DAT_11308f130))[1];
      alStack_d0[1] = *(undefined8 *)(param_1 + _DAT_11308f128);
      lVar15 = 0;
      func_0x000100b92390();
      pcVar12 = *(code **)(*(long *)(lVar15 + -8) + 0x38);
      (*pcVar12)(plVar10,1,1,lVar15);
      func_0x000107c61434(lVar14);
      uVar6 = uVar2;
      func_0x000107c61434();
      func_0x00010403f914();
      if ((lVar11 != 0) && ((uVar6 & 1) != 0)) {
        lVar14 = ((long *)(lVar11 + _DAT_113815390))[1];
        if (lVar14 != 0) {
          alStack_d0[0] = *(long *)(lVar11 + _DAT_113815390);
          func_0x000107c61434(lVar14);
          func_0x0001030c13f4(plVar10,0x112dd1458,&UNK_10d992550);
          iVar3 = *(int *)(lVar15 + 0x14);
          lVar11 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar11 + -8) + 0x38))((long)plVar10 + (long)iVar3,1,1,lVar11);
          *plVar10 = alStack_d0[0];
          *(long *)((long)alStack_d0 + -extraout_x8 + 8) = lVar14;
          (*pcVar12)(plVar10,0,1,lVar15);
        }
      }
      puVar1 = (undefined8 *)((long)plVar9 + (long)*(int *)(lVar4 + 0x1c));
      lVar7 = 0;
      func_0x000100b92194();
      func_0x0001030c13ac(lVar13,(long)puVar1 + (long)*(int *)(lVar7 + 0x14),0x112dd1600,
                          &UNK_10d992a30);
      lVar11 = (long)puVar1 + (long)*(int *)(lVar7 + 0x18);
      func_0x0001030c13ac(plVar10,lVar11,0x112dd1458,&UNK_10d992550);
      *puVar1 = alStack_d0[10];
      puVar1[1] = lVar16;
      lVar14 = alStack_d0[3];
      puVar1[2] = alStack_d0[4];
      puVar1[3] = lVar14;
      puVar1[4] = alStack_d0[2];
      puVar1[5] = uVar2;
      puVar1[6] = alStack_d0[1];
      lVar14 = lStack_70;
      *(char *)(puVar1 + 7) = (char)uStack_78;
      lVar15 = lVar14;
      func_0x000107c3deb0();
      func_0x000107c61180();
      if (lVar15 == 0) {
        uStack_78 = -0x1d00000000000000;
      }
      else {
        lVar16 = lVar15;
        func_0x000107c5faec();
        alStack_d0[9] = lVar16;
        uStack_78 = lVar11;
        func_0x000107c61170(lVar15);
      }
      func_0x000107c4f32c();
      func_0x000107c61180();
      if (lVar14 == 0) {
        lVar15 = 0;
        lVar11 = 0;
      }
      else {
        lVar15 = lVar14;
        func_0x000107c5faec();
        func_0x000107c61170(lVar14);
      }
      func_0x0001030c13f4(plVar10,0x112dd1458,&UNK_10d992550);
      func_0x0001030c13f4(lVar13,0x112dd1600,&UNK_10d992a30);
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar1,0,1,lVar7);
      lVar13 = alStack_d0[9];
      *plVar9 = alStack_d0[5];
      plVar9[1] = lVar13;
      plVar9[2] = uStack_78;
      plVar9[3] = lVar15;
      plVar9[4] = lVar11;
      (**(code **)(alStack_d0[6] + 0x38))(plVar9,0,1,lVar4);
      lVar4 = alStack_d0[7];
      func_0x0001030c1434(plVar9,alStack_d0[7],&SUB_100b92084);
      lVar11 = alStack_d0[8];
      func_0x0001018eb36c(lVar4,alStack_d0[8]);
      func_0x0001041ed328(0);
      func_0x000107c610f8();
      func_0x0001041ec3c8(lVar11);
      func_0x0001030c1370(lVar4,&SUB_100b92084);
      return lVar11;
    }
    func_0x000107c6142c(lVar16);
  }
  (**(code **)(lVar15 + 0x38))(plVar9,1,1,lVar4);
  func_0x0001030c13f4(plVar9,0x112e541b8,&UNK_10da55628);
  return 0;
}



/* Entry: 1030c0f78; end: 1030c12af;  */

void FUN_1030c0f78(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  func_0x000100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_1030c126c;
  func_0x000100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_1030c12a8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1030c12ac);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    func_0x000100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_1030c107c:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1030c108c);
      (*pcVar3)();
    }
LAB_1030c1090:
    if ((uVar5 & 1) != 0) goto LAB_1030c1094;
LAB_1030c10ec:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_1030c12ac:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1030c12b0);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_1030c1090;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_1030c10ec;
LAB_1030c1094:
    lVar10 = *param_5;
    func_0x0001000bb420(auStack_f0,auStack_110);
    func_0x000107c6142c(uVar2);
    func_0x000100183ab8(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    func_0x000100183ab8(lVar10);
    func_0x000100102924(auStack_110,lVar10);
  }
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_1030c12a8;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      func_0x000100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_1030c107c;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_1030c12ac;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      func_0x0001000bb420(auStack_f0,auStack_110);
      func_0x000107c6142c(uVar2);
      func_0x000100183ab8(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      func_0x000100183ab8(lVar10);
      func_0x000100102924(auStack_110,lVar10);
    }
    func_0x000100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_1030c126c:
  func_0x000100216694(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1030c12b0; end: 1030c12f7;  */

undefined8 FUN_1030c12b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1030c12f8; end: 1030c136f;  */

void FUN_1030c12f8(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb8(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1030c1370; end: 1030c1477;  */

undefined8 FUN_1030c1370(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1030c1478; end: 1030c14b7; +[SCSKErrorHelper amendError:] */

void FUN_1030c1478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_1030c1ce4(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1030c14b8; end: 1030c1533; +[SCSKErrorHelper skErrorCodeToString:domain:] */

void FUN_1030c14b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5faec();
  FUN_1030c1890(param_3,param_4,param_2);
  func_0x000107c6142c(param_2);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1030c1534; end: 1030c156f; -[SCSKErrorHelper init] */

void FUN_1030c1534(undefined8 param_1)

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



/* Entry: 1030c1570; end: 1030c15a3;  */

void FUN_1030c1570(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030c15a4; end: 1030c188f;  */

undefined * FUN_1030c15a4(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined auStack_b0 [8];
  undefined8 uStack_a8;
  long alStack_a0 [3];
  undefined *puStack_88;
  long alStack_80 [4];
  
  lVar11 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar6 - extraout_x12;
  pcVar10 = *(code **)(lVar11 + 0x10);
  (*pcVar10)(lVar9);
  uVar1 = 0;
  func_0x000100ea57c8(0);
  plVar2 = alStack_80;
  func_0x000107c6147c(plVar2,lVar9,param_1,uVar1,6);
  if (((ulong)plVar2 & 1) != 0) {
    lVar3 = alStack_80[0];
    uStack_a8 = param_2;
    func_0x000107c3fcb0();
    lVar4 = alStack_80[0];
    func_0x000107c42210();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    FUN_1030c1890(lVar3,lVar5,lVar9);
    func_0x000107c6142c(lVar9);
    if (lVar5 != 0) {
      lVar9 = alStack_80[0];
      func_0x000107c5d9a4();
      func_0x000107c61180();
      puVar7 = PTR___sypN_11034f1a8;
      puVar6 = PTR___sSSN_11034da80;
      lVar11 = lVar9;
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c5f9e8();
      func_0x000107c61170(lVar9);
      uVar1 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec(uVar1);
      puStack_88 = puVar6;
      func_0x000100102924(alStack_a0,alStack_80);
      lVar9 = lVar11;
      func_0x000107c61558(lVar11);
      alStack_a0[0] = lVar11;
      func_0x0001001029e8(alStack_80,uVar1,puVar8,lVar9);
      func_0x000107c6142c(puVar8);
      lVar9 = alStack_80[0];
      func_0x000107c42210();
      func_0x000107c61180();
      if (lVar9 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar1);
      }
      func_0x000107c3fcb0(alStack_80[0]);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      lVar11 = alStack_a0[0];
      func_0x000107c5f9dc(alStack_a0[0],PTR___sSSN_11034da80,puVar7 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c466bc(puVar6);
      func_0x000107c6142c(alStack_a0[0]);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(alStack_80[0]);
      return puVar6;
    }
    func_0x000107c61170(alStack_80[0]);
    param_2 = uStack_a8;
  }
  (*pcVar10)(puVar6);
  puVar7 = puVar6;
  func_0x000107c605a0(puVar6,param_1,param_2);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = param_1;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(lVar11 + 0x20))(param_2,puVar6,param_1);
  }
  else {
    (**(code **)(lVar11 + 8))(puVar6,param_1);
  }
  return puVar7;
}



/* Entry: 1030c1890; end: 1030c1ce3;  */

undefined1  [16] FUN_1030c1890(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  
  uVar2 = *(ulong *)PTR__SKErrorDomain_110347e20;
  uVar4 = param_2;
  func_0x000107c5faec();
  if (param_2 != uVar2 || param_3 != uVar4) {
    uVar3 = param_2;
    func_0x000107c605b8(param_2,param_3,uVar2,uVar4,0);
    func_0x000107c6142c(uVar4);
    if ((uVar3 & 1) != 0) goto LAB_1030c196c;
LAB_1030c18f8:
    iVar1 = 2;
    uVar4 = 0xf;
    func_0x000100029b9c(2,0xf,4,0);
    if (iVar1 == 0) {
LAB_1030c1958:
      uVar4 = 0;
      uVar2 = 0;
      goto LAB_1030c1cd0;
    }
    uVar2 = *(ulong *)PTR__SKANErrorDomain_110347e00;
    func_0x000107c5faec();
    if (param_2 == uVar2 && param_3 == uVar4) {
      func_0x000107c6142c(uVar4);
    }
    else {
      func_0x000107c605b8(param_2,param_3,uVar2,uVar4,0);
      func_0x000107c6142c(uVar4);
      if ((param_2 & 1) == 0) goto LAB_1030c1958;
    }
    switch(param_1) {
    case 0:
      pcVar5 = "impressionMissingRequiredValue";
      goto code_r0x0001030c1a48;
    case 1:
      uVar2 = 0xeb00000000646574;
      uVar4 = 0x726f707075736e75;
      break;
    case 2:
      pcVar5 = "adNetworkIdMissing";
      goto code_r0x0001030c1c44;
    case 3:
      uVar2 = 0x800000010f11df60;
      uVar4 = 0xd000000000000015;
      break;
    case 4:
      pcVar5 = "impressionNotFound";
      goto code_r0x0001030c1c44;
    case 5:
      pcVar5 = "invalidCampaignId";
      goto code_r0x0001030c1c78;
    case 6:
      pcVar5 = "invalidConversionValue";
      goto code_r0x0001030c1cbc;
    case 7:
      pcVar5 = "invalidSourceAppId";
      goto code_r0x0001030c1c44;
    case 8:
      pcVar5 = "invalidAdvertisedAppId";
code_r0x0001030c1cbc:
      uVar2 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
      uVar4 = 0xd000000000000016;
      break;
    case 9:
      uVar2 = 0xee006e6f69737265;
      uVar4 = 0x5664696c61766e69;
      break;
    case 10:
      uVar2 = 0xe700000000000000;
      uVar4 = 0x6e776f6e6b6e75;
      break;
    case 0xb:
      pcVar5 = "impressionTooShort";
code_r0x0001030c1c44:
      uVar4 = 0xd000000000000012;
      uVar2 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
      break;
    default:
      goto LAB_1030c1958;
    }
    goto LAB_1030c1cd0;
  }
  func_0x000107c6142c(uVar4);
LAB_1030c196c:
  uVar2 = 0xe700000000000000;
  uVar4 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 0:
    break;
  case 1:
    uVar2 = 0xed000064696c6176;
    uVar4 = 0x6e49746e65696c63;
    break;
  case 2:
    pcVar5 = "paymentCancelled";
    goto code_r0x0001030c1ac4;
  case 3:
    uVar2 = 0xee0064696c61766e;
    uVar4 = 0x49746e656d796170;
    break;
  case 4:
    pcVar5 = "paymentNotAllowed";
    goto code_r0x0001030c1c78;
  case 5:
    uVar2 = 0x800000010f11e1c0;
    uVar4 = 0xd000000000000018;
    break;
  case 6:
    uVar2 = 0x800000010f11e1a0;
    uVar4 = 0xd00000000000001c;
    break;
  case 7:
    uVar2 = 0x800000010f11e170;
    uVar4 = 0xd000000000000023;
    break;
  case 8:
    pcVar5 = "cloudServiceRevoked";
    goto code_r0x0001030c1b9c;
  case 9:
    pcVar5 = "privacyAcknowledgementRequired";
code_r0x0001030c1a48:
    uVar2 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    uVar4 = 0xd00000000000001e;
    break;
  case 10:
    pcVar5 = "unauthorizedRequestData";
    uVar4 = 5;
    goto code_r0x0001030c1b78;
  case 0xb:
    pcVar5 = "invalidOfferIdentifier";
    goto code_r0x0001030c1cbc;
  case 0xc:
    pcVar5 = "invalidSignature";
    goto code_r0x0001030c1ac4;
  case 0xd:
    pcVar5 = "missingOfferParams";
    goto code_r0x0001030c1c44;
  case 0xe:
    pcVar5 = "invalidOfferPrice";
code_r0x0001030c1c78:
    uVar2 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    uVar4 = 0xd000000000000011;
    break;
  case 0xf:
    pcVar5 = "overlayCancelled";
    goto code_r0x0001030c1ac4;
  case 0x10:
    pcVar5 = "overlayInvalidConfiguration";
    uVar4 = 9;
code_r0x0001030c1b78:
    uVar2 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    uVar4 = uVar4 | 0xd000000000000012;
    break;
  case 0x11:
    pcVar5 = "overlayTime  out";
code_r0x0001030c1ac4:
    uVar2 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    uVar4 = 0xd000000000000010;
    break;
  case 0x12:
    pcVar5 = "ineligibleForOffer";
    goto code_r0x0001030c1c44;
  case 0x13:
    pcVar5 = "unsupportedPlatform";
code_r0x0001030c1b9c:
    uVar2 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    uVar4 = 0xd000000000000013;
    break;
  case 0x14:
    uVar2 = 0x800000010f11dfc0;
    uVar4 = 0xd000000000000021;
    break;
  default:
    goto LAB_1030c18f8;
  }
LAB_1030c1cd0:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1030c1ce4; end: 1030c1ee7;  */

undefined * FUN_1030c1ce4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  if (param_1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000107c61174();
    puVar3 = puVar2;
    func_0x000107c3fcb0();
    puVar4 = puVar2;
    func_0x000107c42210();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    FUN_1030c1890(puVar3,puVar5,param_2);
    func_0x000107c6142c(param_2);
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar2;
      func_0x000107c5d9a4();
      func_0x000107c61180();
      puVar1 = PTR___sypN_11034f1a8;
      puVar4 = PTR___sSSN_11034da80;
      puVar7 = puVar6;
      puVar9 = PTR___sSSN_11034da80;
      func_0x000107c5f9e8();
      func_0x000107c61170(puVar6);
      uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec(uVar8);
      puStack_88 = puVar4;
      puStack_a0 = puVar3;
      puStack_98 = puVar5;
      func_0x000100102924(&puStack_a0,auStack_80);
      puVar3 = puVar7;
      func_0x000107c61558(puVar7);
      puStack_a0 = puVar7;
      func_0x0001001029e8(auStack_80,uVar8,puVar9,puVar3);
      func_0x000107c6142c(puVar9);
      puVar3 = puStack_a0;
      puVar4 = puVar2;
      func_0x000107c42210();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar8);
      }
      func_0x000107c3fcb0(puVar2);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      puVar6 = puVar3;
      func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c466bc(puVar5);
      func_0x000107c6142c(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar2);
      return puVar5;
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61174(param_1);
  return param_1;
}



/* Entry: 1030c1ee8; end: 1030c1f07;  */

void FUN_1030c1ee8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b40e0);
  return;
}



/* Entry: 1030c1f08; end: 1030c2123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c1f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  if (param_1 != 0) {
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar3 = param_1;
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar2);
    if ((int)lVar3 != 0) {
      lVar4 = 0;
      FUN_1030c4f70();
      lVar3 = lVar4;
      func_0x000107c610f8();
      *(undefined8 *)(lVar3 + _DAT_112f39cc0) = 0;
      *(undefined1 *)(lVar3 + _DAT_112f39cc8) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f39cd0) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f39cd8) = 0;
      *(undefined1 *)(lVar3 + _DAT_112f39ce0) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f39ce8) = 0;
      func_0x000107c61614(lVar3 + _DAT_112f39cf0,0);
      *(undefined8 *)(lVar3 + _DAT_112f39cf8) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f39d00) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f39d08) = param_2;
      *(undefined8 *)(lVar3 + _DAT_112f39d10) = param_3;
      *(long *)(lVar3 + _DAT_112f39d18) = param_1;
      *(undefined8 *)(lVar3 + _DAT_112f39d20) = param_4;
      *(undefined8 *)(lVar3 + _DAT_112f39d28) = param_5;
      *(undefined8 *)(lVar3 + _DAT_112f39d30) = param_6;
      *(undefined8 *)(lVar3 + _DAT_112f39d38) = param_7;
      *(undefined8 *)(lVar3 + _DAT_112f39d40) = param_8;
      puVar1 = PTR_s_init_1125d9248;
      lStack_70 = lVar3;
      lStack_68 = lVar4;
      func_0x000107c615f0(param_2);
      func_0x000107c615f0(param_3);
      func_0x000107c615f0(param_1);
      func_0x000107c61174(param_4);
      func_0x000107c61174(param_5);
      func_0x000107c615f0(param_6);
      func_0x000107c61174(param_7);
      func_0x000107c61174(param_8);
      func_0x000107c61154(&lStack_70,puVar1);
      return;
    }
  }
  func_0x000107c610f8(PTR_PTR_1126acbe0);
  func_0x000107c48d04();
  return;
}



/* Entry: 1030c2124; end: 1030c2133;  */

undefined1  [16] FUN_1030c2124(void)

{
  return ZEXT816(0x110608b30);
}



/* Entry: 1030c2134; end: 1030c2287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c2134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f39cc0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f39cc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39cd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39cd8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f39ce0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ce8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f39cf0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f39cf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d18) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d20) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d28) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d30) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d38) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d40) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030c2288; end: 1030c229b;  */

bool FUN_1030c2288(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1030c229c; end: 1030c2347;  */

void FUN_1030c229c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1030c2348; end: 1030c2357; -[StoreProductPageControllerSwift productViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c2348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f39ce8));
  return;
}



/* Entry: 1030c2358; end: 1030c238b; -[StoreProductPageControllerSwift setProductViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c2358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f39ce8);
  *(undefined8 *)(param_1 + _DAT_112f39ce8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030c238c; end: 1030c23d3; -[StoreProductPageControllerSwift delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c238c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f39cf0;
  func_0x000107c61428(param_1 + _DAT_112f39cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030c23d4; end: 1030c242b; -[StoreProductPageControllerSwift setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c23d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f39cf0;
  func_0x000107c61428(param_1 + _DAT_112f39cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030c242c; end: 1030c2473; -[StoreProductPageControllerSwift loadedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c242c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f39cf8;
  func_0x000107c61428(param_1 + _DAT_112f39cf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030c2474; end: 1030c247f; -[StoreProductPageControllerSwift setLoadedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c2474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f39cf8;
  func_0x000107c61428(param_1 + _DAT_112f39cf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030c2480; end: 1030c24c7; -[StoreProductPageControllerSwift presentedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c2480(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f39d00;
  func_0x000107c61428(param_1 + _DAT_112f39d00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030c24c8; end: 1030c24d3; -[StoreProductPageControllerSwift setPresentedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c24c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f39d00;
  func_0x000107c61428(param_1 + _DAT_112f39d00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030c24d4; end: 1030c2533;  */

void FUN_1030c24d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1030c2534; end: 1030c2687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c2534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f39cc0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f39cc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39cd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39cd8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f39ce0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ce8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f39cf0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f39cf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d18) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d20) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d28) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d30) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d38) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f39d40) = param_8;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030c2688; end: 1030c274f; -[StoreProductPageControllerSwift initWithTimeProvider:adConfigProvider:adConfigProviderV2:skAdNetworkMetricsManager:adMetadataCache:appImpressionTracker:adCrashLogger:notificationPool:] */

void FUN_1030c2688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  FUN_1030c2534(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 1030c2750; end: 1030c2d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1030c2750(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
             undefined8 param_5)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined **ppuVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_e8 [24];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar14 = _DAT_112f39cc8;
  lVar12 = _DAT_112f39cc0;
  bVar1 = *(byte *)(unaff_x20 + _DAT_112f39cc8);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
LAB_1030c27ac:
      func_0x000107c61428(unaff_x20 + _DAT_112f39cc0,auStack_e8,0,0);
      uVar15 = *(ulong *)(unaff_x20 + lVar12);
      if (uVar15 != 0) {
        uVar3 = uVar15;
        func_0x000107c61434();
        func_0x000107c5f9dc();
        func_0x000107c6142c(uVar15);
        uVar5 = param_2;
        func_0x00010018cc3c(param_2);
        uVar4 = uVar5;
        func_0x000107c5f9dc();
        func_0x000107c6142c(uVar5);
        uVar15 = uVar3;
        func_0x000107c49cf8();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        if ((uVar15 & 1) != 0) {
          puStack_d0 = (undefined *)0x0;
          uStack_c8 = 0xe000000000000000;
          func_0x000107c602fc(0x34);
          uVar5 = 0xe100000000000000;
          func_0x000107c5fb78(0x5b,0xe100000000000000);
          func_0x000107c417f0();
          func_0x000107c61180();
          lVar12 = unaff_x20;
          func_0x000107c5faec();
          func_0x000107c61170(unaff_x20);
          func_0x000107c5fb78(lVar12,uVar5);
          func_0x000107c6142c(uVar5);
          func_0x000107c5fb78(0x205d,0xe200000000000000);
          func_0x000107c5fb78(0xd00000000000003d,0x800000010f11e220);
          func_0x000107c5fb78(0xd00000000000002d,0x800000010f11e260);
          func_0x000107c6142c(uStack_c8);
          puStack_d0 = (undefined *)0x0;
          uStack_c8 = 0xe000000000000000;
          func_0x000107c602fc(0x22);
          func_0x000107c6142c(uStack_c8);
          puStack_d0 = (undefined *)0xd000000000000020;
          uStack_c8 = 0x800000010f11e290;
          puVar9 = PTR___sSSN_11034da80;
          func_0x000107c5f9ec(param_2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar9);
          func_0x000107c6142c(uStack_c8);
          if (param_4 != (code *)0x0) {
            (*param_4)(1,0);
          }
          return 0;
        }
      }
    }
  }
  else if (bVar1 != 2) goto LAB_1030c27ac;
  lVar12 = _DAT_112f39cc0;
  func_0x000107c61428(unaff_x20 + _DAT_112f39cc0,auStack_88,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar12);
  *(undefined8 *)(unaff_x20 + lVar12) = param_2;
  func_0x000107c6142c(uVar5);
  *(undefined1 *)(unaff_x20 + lVar14) = 1;
  lVar12 = _DAT_112f39cf8;
  func_0x000107c61428(unaff_x20 + _DAT_112f39cf8,auStack_a0,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar12);
  *(undefined8 *)(unaff_x20 + lVar12) = 0;
  func_0x000107c61434(param_2);
  func_0x000107c61170(uVar5);
  lVar12 = _DAT_112f39ce8;
  if (*(long *)(unaff_x20 + _DAT_112f39ce8) == 0) {
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar12);
    *(undefined8 **)(unaff_x20 + lVar12) = puVar6;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x000107c53fcc(puVar6);
    puVar7 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c2d40);
      (*pcVar2)();
    }
    puVar8 = puVar7;
    func_0x000103b72c70();
    uVar5 = *puVar8;
    uVar4 = puVar8[1];
    func_0x000107c61434(uVar4);
    func_0x000107c5fadc(uVar5,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c520f4(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39d08));
  puVar9 = &UNK_110608b50;
  func_0x000107c613fc(&UNK_110608b50,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar10 = &UNK_110608b78;
  func_0x000107c613fc(&UNK_110608b78,0x38,7);
  *(code **)(puVar10 + 0x10) = param_4;
  *(undefined8 *)(puVar10 + 0x18) = param_5;
  *(undefined **)(puVar10 + 0x20) = puVar9;
  *(undefined8 *)(puVar10 + 0x28) = param_2;
  *(undefined8 *)(puVar10 + 0x30) = param_1;
  uVar15 = *(ulong *)(unaff_x20 + _DAT_112f39d30);
  if (uVar15 == 0) {
    func_0x000107c61434(param_2);
    func_0x000100d342a4(param_4,param_5);
    lVar12 = *(long *)(unaff_x20 + lVar12);
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000100d342a4(param_4,param_5);
    uVar3 = uVar15;
    func_0x000107c615f0();
    func_0x000107c400d0();
    func_0x000107c61180();
    uVar11 = uVar3;
    func_0x000107c5b9b4();
    func_0x000107c615e8(uVar3);
    if (((uVar11 & 1) != 0) && (lVar14 = *(long *)(unaff_x20 + lVar12), lVar14 != 0)) {
      puVar9 = &UNK_110608bc8;
      func_0x000107c613fc(&UNK_110608bc8,0x38,7);
      *(long *)(puVar9 + 0x10) = lVar14;
      *(undefined8 *)(puVar9 + 0x18) = param_3;
      *(ulong *)(puVar9 + 0x20) = uVar15;
      *(code **)(puVar9 + 0x28) = FUN_1030c2de0;
      *(undefined **)(puVar9 + 0x30) = puVar10;
      func_0x000107c61174(lVar14);
      func_0x000107c615f0(uVar15);
      func_0x000107c61174(lVar14);
      func_0x000107c61174(param_3);
      func_0x000107c6157c(puVar10);
      uVar5 = 0;
      func_0x0001001ca524(0,0,8,4,0,0,&UNK_10db84ec8,puVar9,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(uVar15);
      func_0x000107c61170(lVar14);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(uVar5);
      goto LAB_1030c2d0c;
    }
    func_0x000107c615e8(uVar15);
    lVar12 = *(long *)(unaff_x20 + lVar12);
  }
  if (lVar12 != 0) {
    func_0x000107c61174();
    func_0x000107c5f9dc(param_2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    pcStack_b0 = FUN_1030c2de0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1012d20f0;
    puStack_b8 = &UNK_110608b90;
    ppuVar13 = &puStack_d0;
    puStack_a8 = puVar10;
    func_0x000107c60bc4(ppuVar13);
    puVar9 = puStack_a8;
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(puVar9);
    func_0x000107c4b760(lVar12);
    func_0x000107c61574(puVar10);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(param_2);
    return 1;
  }
LAB_1030c2d0c:
  func_0x000107c61574(puVar10);
  return 1;
}



/* Entry: 1030c2d40; end: 1030c2ddf;  */

void FUN_1030c2d40(undefined8 param_1,uint param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  if (param_4 != (code *)0x0) {
    (*param_4)(param_2 & 1,param_3);
  }
  func_0x000107c61428(param_6 + 0x10,auStack_68,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    FUN_1030c2df0(param_1,param_7,param_2 & 1,param_3);
    func_0x000107c61170(param_6);
  }
  return;
}



/* Entry: 1030c2de0; end: 1030c2def;  */

void FUN_1030c2de0(uint param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1 & 1,param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_1030c2df0(uVar4,uVar2,param_1 & 1,param_2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1030c2df0; end: 1030c33ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c2df0(double param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  double dVar11;
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  
  lVar4 = _DAT_112f39cc0;
  func_0x000107c61428(unaff_x20 + _DAT_112f39cc0,auStack_88,0,0);
  puVar10 = PTR___sypN_11034f1a8;
  lVar9 = *(long *)(unaff_x20 + lVar4);
  if (lVar9 != 0) {
    lVar2 = lVar9;
    func_0x000107c61434();
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar9);
    uVar7 = param_2;
    func_0x00010018cc3c(param_2);
    uVar3 = uVar7;
    puVar6 = PTR___ss11AnyHashableVN_11034e448;
    func_0x000107c5f9dc();
    func_0x000107c6142c(uVar7);
    lVar9 = lVar2;
    func_0x000107c49cf8();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    if ((int)lVar9 != 0) {
      bVar1 = (param_3 & 1) != 0;
      uVar8 = 2;
      if (bVar1) {
        uVar8 = 3;
      }
      uVar7 = 0x65757274;
      if (!bVar1) {
        uVar7 = 0x65736c6166;
      }
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      uVar3 = 0xe400000000000000;
      if (!bVar1) {
        uVar3 = 0xe500000000000000;
      }
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0x5b;
      uStack_98 = 0xe100000000000000;
      lVar4 = unaff_x20;
      func_0x000107c417f0();
      func_0x000107c61180();
      lVar9 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      func_0x000107c5fb78(lVar9,puVar6);
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0x205d,0xe200000000000000);
      func_0x000107c5fb78(0xd000000000000039,0x800000010f11e540);
      func_0x000107c5fb78(0xd000000000000022,0x800000010f11e5b0);
      puVar6 = PTR___sSSN_11034da80;
      func_0x000107c5f9ec(param_2,PTR___sSSN_11034da80,puVar10 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0x20,0xe100000000000000);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x24);
      func_0x000107c5fb78(0x3d746c75736572,0xe700000000000000);
      func_0x000107c5fb78(uVar7,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5fb78(0x3d726f72726520,0xe700000000000000);
      alStack_b8[0] = param_4;
      func_0x000107c614b0(param_4);
      uVar7 = 0x112d511f8;
      func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
      func_0x000107c5fb18(alStack_b8,uVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f11e5e0);
      func_0x000107c5fddc(param_1,&uStack_a0,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_98);
      puVar10 = (undefined *)0x0;
      *(undefined1 *)(unaff_x20 + _DAT_112f39cc8) = uVar8;
      if ((param_3 & 1) != 0) {
        func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39d08));
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c466c0(param_1);
      }
      lVar4 = _DAT_112f39cf8;
      func_0x000107c61428(unaff_x20 + _DAT_112f39cf8,&uStack_a0,1,0);
      uVar5 = *(ulong *)(unaff_x20 + lVar4);
      *(undefined **)(unaff_x20 + lVar4) = puVar10;
      func_0x000107c61170();
      FUN_1030c49e8();
      if ((uVar5 & 1) == 0) {
        return;
      }
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39d08));
      if (*(long *)(unaff_x20 + _DAT_112f39cd8) == 0) {
        dVar11 = 0.0;
      }
      else {
        dVar11 = param_1;
        func_0x000107c4223c();
      }
      lVar4 = _DAT_112f39cf0;
      func_0x000107c61428(unaff_x20 + _DAT_112f39cf0,alStack_b8,0,0);
      lVar4 = unaff_x20 + lVar4;
      func_0x000107c61618();
      if (lVar4 == 0) {
        return;
      }
      if (param_4 == 0) {
        param_4 = 0;
      }
      else {
        func_0x000107c5ed2c(param_4);
      }
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c41c28(param_1 - dVar11,lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(param_4);
      func_0x000107c61170(puVar10);
      return;
    }
  }
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x36);
  uVar7 = 0xe100000000000000;
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  lVar9 = unaff_x20;
  func_0x000107c417f0();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5faec();
  func_0x000107c61170(lVar9);
  func_0x000107c5fb78(lVar2,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000039,0x800000010f11e540);
  func_0x000107c5fb78(0xd00000000000002c,0x800000010f11e580);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c5f9ec(param_2,PTR___sSSN_11034da80,puVar10 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c6142c(uStack_98);
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(uStack_98);
  uStack_a0 = 0x50746e6572727563;
  uStack_98 = 0xee003d736d617261;
  alStack_b8[0] = *(long *)(unaff_x20 + lVar4);
  func_0x000107c61434();
  uVar7 = 0x112f39d78;
  func_0x0001000285a8(0x112f39d78,&UNK_10db84f78);
  func_0x000107c5fb18(alStack_b8,uVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uStack_98);
  return;
}



/* Entry: 1030c33f0; end: 1030c3463;  */

void FUN_1030c33f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030c3464,uVar1,uVar2);
  return;
}



/* Entry: 1030c3464; end: 1030c3513;  */

void FUN_1030c3464(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1030c3514;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar3 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110608dd8;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x000107c4b774(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1030c3514; end: 1030c3567;  */

void FUN_1030c3514(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_1030c3568;
  }
  else {
    pcVar1 = FUN_1030c35a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xc0),*(undefined8 *)(lVar2 + 200));
  return;
}



/* Entry: 1030c3568; end: 1030c35a7;  */

void FUN_1030c3568(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  (*pcVar1)(1,0);
                    /* WARNING: Could not recover jumptable at 0x0001030c35a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1030c35a8; end: 1030c361b;  */

void FUN_1030c35a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  pcVar2 = *(code **)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61654();
  func_0x000107c614b0(uVar1);
  (*pcVar2)(0,uVar1);
  func_0x000107c614ac(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001030c3618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1030c361c; end: 1030c3637;  */

void FUN_1030c361c(long param_1,long param_2)

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



/* Entry: 1030c3638; end: 1030c36b7;  */

void FUN_1030c3638(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1030c36b8;
  plVar5[0x15] = lVar2;
  plVar5[0x16] = lVar6;
  plVar5[0x13] = lVar1;
  plVar5[0x14] = lVar3;
  plVar5[0x12] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x17] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x18] = lVar3;
  plVar5[0x19] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030c3464,lVar3,lVar4);
  return;
}



/* Entry: 1030c36b8; end: 1030c36f3;  */

void FUN_1030c36b8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001030c36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1030c36f4; end: 1030c37e3; -[StoreProductPageControllerSwift loadStoreProductWithParameters:appInstallParams:completion:] */

uint FUN_1030c36f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_110608dc0;
    func_0x000107c613fc(&UNK_110608dc0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x1030c5144;
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1030c2750(param_3,param_4,uVar3,puVar2);
  func_0x000100d342b4(uVar3,puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1030c37e4; end: 1030c4343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c37e4(undefined8 param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined1 auStack_e0 [24];
  undefined8 *apuStack_c8 [3];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  long in_stack_ffffffffffffff68;
  
  lVar3 = unaff_x20;
  uVar16 = param_3;
  func_0x000107c614f0();
  lVar4 = *(long *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
  func_0x000107c5faec(lVar4);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_1030c3978:
    param_1 = 0;
    uStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    ppuStack_a0 = (undefined8 **)0x0;
    func_0x000107c6142c(uVar16);
LAB_1030c3988:
    func_0x00010006e7f4(&puStack_b0);
LAB_1030c3990:
    ppuVar19 = (undefined **)0x0;
LAB_1030c3994:
    puVar17 = (undefined8 *)0x0;
    puVar18 = *(undefined8 **)(unaff_x20 + _DAT_112f39ce8);
  }
  else {
    func_0x000107c61434(param_2);
    uVar12 = uVar16;
    func_0x000100029284(lVar4);
    if ((uVar12 & 1) == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_1030c3978;
    }
    func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar4 * 0x20,&puStack_b0);
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(param_2);
    if (in_stack_ffffffffffffff68 == 0) goto LAB_1030c3988;
    uVar5 = 0;
    FUN_1030c4e84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar6 = apuStack_c8;
    ppuVar19 = &puStack_b0;
    func_0x000107c6147c(ppuVar6,ppuVar19,PTR___sypN_11034f1a8 + 8,uVar5,6);
    if (((ulong)ppuVar6 & 1) == 0) goto LAB_1030c3990;
    puVar18 = apuStack_c8[0];
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(apuStack_c8[0]);
    func_0x000107c5faec();
    func_0x000107c61170(puVar18);
    apuStack_c8[0] = (undefined8 *)0x0;
    func_0x000107c5fcec(0);
    ppuStack_a0 = apuStack_c8;
    func_0x000107c61434(ppuVar19);
    func_0x000100f7a598(FUN_1030c4ec4,&puStack_b0,
                        "SCStoreProductPageControllerSwift/StoreProductPageControllerSwift.swift",
                        0x47,2,0x125);
    func_0x000107c6142c(ppuVar19);
    puVar17 = apuStack_c8[0];
    puVar18 = apuStack_c8[0];
    if (apuStack_c8[0] == (undefined8 *)0x0) goto LAB_1030c3994;
  }
  puVar7 = puVar18;
  func_0x000107c61174();
  lVar4 = *(long *)(unaff_x20 + _DAT_112f39d10);
  if ((lVar4 != 0) && (func_0x000107c5b0dc(), (int)lVar4 != 0 && puVar18 != (undefined8 *)0x0)) {
    puVar8 = puVar7;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000107c61170();
      func_0x000107c6142c(ppuVar19);
      puStack_b0 = (undefined *)0x0;
      uStack_a8 = 0xe000000000000000;
      func_0x000107c602fc(0x36);
      uVar5 = 0xe100000000000000;
      func_0x000107c5fb78(0x5b,0xe100000000000000);
      lVar4 = unaff_x20;
      func_0x000107c417f0();
      func_0x000107c61180();
      lVar15 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      func_0x000107c5fb78(lVar15,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fb78(0x205d,0xe200000000000000);
      func_0x000107c5fb78(0xd000000000000063,0x800000010f11e340);
      func_0x000107c5fb78(0xd00000000000002f,0x800000010f11e3b0);
      func_0x000107c6142c(uStack_a8);
      lVar4 = *(long *)(unaff_x20 + _DAT_112f39d38);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar5 = 0x112dcf430;
        FUN_1030c4e84(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar9 = 0x11;
        func_0x000103dec218(0x11);
        puStack_b0 = (undefined *)0x0;
        uStack_a8 = 0xe000000000000000;
        func_0x000107c602fc(0x32);
        func_0x000107c6142c(uStack_a8);
        puStack_b0 = (undefined *)0x5b;
        uStack_a8 = 0xe100000000000000;
        func_0x000107c614e8(lVar3);
        func_0x000107c60b14();
        func_0x000107c61180();
        lVar15 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        func_0x000107c5fb78(lVar15,uVar5);
        func_0x000107c6142c(uVar5);
        func_0x000107c5fb78(0xd00000000000002f,0x800000010f11e410);
        uVar5 = uStack_a8;
        func_0x000107c61434(uStack_a8);
        func_0x000107c5fb78(0x1000000000000023,0x800000010f11e440);
        func_0x000107c6142c(uVar5);
        uVar5 = uStack_a8;
        puVar10 = puStack_b0;
        func_0x000107c5fadc(puStack_b0,uStack_a8);
        func_0x000107c6142c(uVar5);
        uVar5 = 0xd000000000000024;
        func_0x000107c5fadc(0xd000000000000024,0x800000010f11e470);
        func_0x000107c3e1fc(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(uVar5);
      }
      if (((*(undefined8 **)(unaff_x20 + _DAT_112f39ce8) == (undefined8 *)0x0) ||
          (puVar18 != *(undefined8 **)(unaff_x20 + _DAT_112f39ce8))) &&
         (uVar16 = *(ulong *)(unaff_x20 + _DAT_112f39d18), uVar16 != 0)) {
        uVar5 = 0xd00000000000002d;
        func_0x000107c5fadc(0xd00000000000002d,0x800000010f11e3e0);
        func_0x000107c4dfc0();
        func_0x000107c61170(uVar5);
        lVar3 = _DAT_112f39cf0;
        if ((uVar16 & 1) != 0) {
          func_0x000107c61428(unaff_x20 + _DAT_112f39cf0,&puStack_b0,0,0);
          lVar3 = unaff_x20 + lVar3;
          func_0x000107c61618();
          puVar18 = puVar17;
          if (lVar3 != 0) {
            func_0x000107c41bb8();
            func_0x000107c615e8(lVar3);
          }
          goto LAB_1030c430c;
        }
      }
      puVar18 = puVar17;
      if (param_6 != (code *)0x0) {
        (*param_6)();
      }
      goto LAB_1030c430c;
    }
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f39cd0);
  *(ulong *)(unaff_x20 + _DAT_112f39cd0) = param_4;
  func_0x000107c615e8(uVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112f39ce0) = 1;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f39d08);
  func_0x000107c615f0(param_4);
  func_0x000107c3ceac(uVar5);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  func_0x000107c6142c(ppuVar19);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f39cd8);
  *(undefined **)(unaff_x20 + _DAT_112f39cd8) = puVar10;
  func_0x000107c61170(uVar5);
  lVar15 = _DAT_112f39cc8;
  lVar4 = _DAT_112f39cc0;
  if (puVar17 == (undefined8 *)0x0) {
    bVar1 = *(byte *)(unaff_x20 + _DAT_112f39cc8);
    if (bVar1 < 2) {
      if (bVar1 != 0) {
LAB_1030c3ebc:
        func_0x000107c61428(unaff_x20 + _DAT_112f39cc0,apuStack_c8,0,0);
        uVar16 = *(ulong *)(unaff_x20 + lVar4);
        if (uVar16 != 0) {
          uVar12 = uVar16;
          func_0x000107c61434();
          func_0x000107c5f9dc();
          func_0x000107c6142c(uVar16);
          lVar4 = param_2;
          func_0x00010018cc3c(param_2);
          lVar13 = lVar4;
          func_0x000107c5f9dc();
          func_0x000107c6142c(lVar4);
          uVar16 = uVar12;
          func_0x000107c49cf8();
          func_0x000107c61170(uVar12);
          func_0x000107c61170(lVar13);
          lVar4 = _DAT_112f39cf0;
          if ((uVar16 & 1) != 0) {
            if (*(char *)(unaff_x20 + lVar15) == '\x03') {
              func_0x000107c61428(unaff_x20 + _DAT_112f39cf0,auStack_e0,0,0);
              lVar4 = unaff_x20 + lVar4;
              func_0x000107c61618();
              if (lVar4 != 0) {
                puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                func_0x000107c45a48();
                func_0x000107c41c28(0,lVar4);
                func_0x000107c615e8(lVar4);
                goto LAB_1030c3e7c;
              }
            }
            goto LAB_1030c3ffc;
          }
        }
      }
    }
    else if (bVar1 != 2) goto LAB_1030c3ebc;
    FUN_1030c2750(param_2,param_3,0,0);
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112f39cc0,apuStack_c8,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = param_2;
    puVar7 = puVar17;
    func_0x000107c61174();
    func_0x000107c6142c(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f39ce8);
    *(undefined8 **)(unaff_x20 + _DAT_112f39ce8) = puVar17;
    func_0x000107c61434(param_2);
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x000107c53fcc(puVar7);
    puVar8 = puVar7;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c4344);
      (*pcVar2)();
    }
    puVar11 = puVar8;
    func_0x000103b72c70();
    uVar5 = *puVar11;
    uVar9 = puVar11[1];
    func_0x000107c61434(uVar9);
    func_0x000107c5fadc(uVar5,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c520f4(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar5);
    lVar4 = _DAT_112f39cf0;
    func_0x000107c61428(unaff_x20 + _DAT_112f39cf0,auStack_e0,0,0);
    lVar4 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if (lVar4 != 0) {
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c41c28(0,lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar10);
    }
LAB_1030c3e7c:
    func_0x000107c61170(puVar7);
  }
LAB_1030c3ffc:
  lVar4 = *(long *)(unaff_x20 + _DAT_112f39ce8);
  puVar7 = puVar17;
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f39d38);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar5 = 0x112dcf430;
      FUN_1030c4e84(0,0x112dcf430,&PTR_PTR_1126b3e90);
      uVar9 = 0xd;
      func_0x000103dec218(0xd);
      puStack_b0 = (undefined *)0x0;
      uStack_a8 = 0xe000000000000000;
      func_0x000107c602fc(0x29);
      func_0x000107c6142c(uStack_a8);
      puStack_b0 = (undefined *)0x5b;
      uStack_a8 = 0xe100000000000000;
      func_0x000107c614e8(lVar3);
      func_0x000107c60b14();
      func_0x000107c61180();
      lVar15 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c5fb78(lVar15,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fb78(0xd000000000000026,0x800000010f11e2c0);
      uVar5 = uStack_a8;
      func_0x000107c61434(uStack_a8);
      func_0x000107c5fb78(0xd00000000000001f,0x800000010f11e2f0);
      func_0x000107c6142c(uVar5);
      uVar5 = uStack_a8;
      puVar10 = puStack_b0;
      func_0x000107c5fadc(puStack_b0,uStack_a8);
      func_0x000107c6142c(uVar5);
      uVar5 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010f11e310);
      func_0x000107c3e1fc(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(uVar5);
    }
    lVar3 = _DAT_112f39cf0;
    func_0x000107c61428(unaff_x20 + _DAT_112f39cf0,&puStack_b0,0,0);
    lVar3 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c41bb8();
      func_0x000107c615e8(lVar3);
    }
  }
  else {
    puVar10 = PTR_PTR_1126acbe8;
    func_0x000107c61168(PTR_PTR_1126acbe8);
    func_0x000107c61174(lVar4);
    func_0x000107c3e2bc(puVar10);
    func_0x000107c5677c(lVar4);
    uVar16 = param_4;
    func_0x000107c61150(param_4,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_attachUI_completion__1125a0c10);
    if ((uVar16 & 1) == 0) {
      func_0x000107c61170(lVar4);
    }
    else {
      puVar10 = &UNK_110608b50;
      func_0x000107c613fc(&UNK_110608b50,0x18,7);
      func_0x000107c61614(puVar10 + 0x10);
      puVar14 = &UNK_110608bf0;
      func_0x000107c613fc(&UNK_110608bf0,0x28,7);
      *(undefined **)(puVar14 + 0x10) = puVar10;
      *(code **)(puVar14 + 0x18) = param_6;
      *(undefined8 *)(puVar14 + 0x20) = param_7;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      ppuStack_a0 = (undefined8 **)&UNK_1000b0c7c;
      ppuVar19 = &puStack_b0;
      func_0x000107c60bc4(ppuVar19);
      func_0x000107c6157c(puVar10);
      func_0x000100d342a4(param_6,param_7);
      func_0x000107c6157c(puVar14);
      func_0x000107c61574(puVar14);
      func_0x000107c3e2c4(param_4);
      func_0x000107c60bd0(ppuVar19);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar14);
    }
  }
LAB_1030c430c:
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar18);
  return;
}



/* Entry: 1030c4344; end: 1030c4417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c4344(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c3ceac(*(undefined8 *)(param_2 + _DAT_112f39d08));
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(param_1);
    lVar1 = _DAT_112f39d00;
    func_0x000107c61428(param_2 + _DAT_112f39d00,auStack_80,1,0);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined **)(param_2 + lVar1) = puVar2;
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar3);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Entry: 1030c4418; end: 1030c453b; -[StoreProductPageControllerSwift presentStoreProductWithParameters:appInstallParams:uiContainer:backgroundExitBehavior:completion:] */

void FUN_1030c4418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  if (param_7 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_110608d98;
    func_0x000107c613fc(&UNK_110608d98,0x18,7);
    *(long *)(puVar2 + 0x10) = param_7;
    uVar3 = 0x1030c517c;
  }
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_1030c37e4(param_3,param_4,param_5,param_6,uVar3,puVar2);
  func_0x000100d342b4(uVar3,puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1030c453c; end: 1030c49e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030c453c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 ****ppppuVar8;
  long unaff_x20;
  undefined8 ****ppppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 ***apppuStack_80 [4];
  
  lVar5 = _DAT_112f39cc0;
  ppppuVar3 = apppuStack_80;
  func_0x000107c61428(unaff_x20 + _DAT_112f39cc0,ppppuVar3,0x20,0);
  ppppuVar9 = *(undefined8 *****)(unaff_x20 + lVar5);
  if (ppppuVar9 == (undefined8 ****)0x0) {
    func_0x000107c614a8(apppuStack_80);
    uStack_f8 = 0;
    puStack_100 = (undefined *)0x0;
LAB_1030c469c:
    ppppuVar3 = (undefined8 ****)0x0;
    func_0x00010006e7f4();
  }
  else {
    lVar1 = *(long *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
    func_0x000107c5faec(lVar1);
    if (ppppuVar9[2] == (undefined8 ***)0x0) {
LAB_1030c4604:
      uStack_f8 = 0;
      puStack_100 = (undefined *)0x0;
      lStack_e8 = 0;
    }
    else {
      func_0x000107c61434(ppppuVar9);
      ppppuVar8 = ppppuVar3;
      func_0x000100029284(lVar1);
      if (((ulong)ppppuVar8 & 1) == 0) {
        func_0x000107c6142c(ppppuVar9);
        goto LAB_1030c4604;
      }
      func_0x0001000bb420(ppppuVar9[7] + lVar1 * 4,&puStack_100);
      func_0x000107c6142c(ppppuVar3);
      ppppuVar3 = ppppuVar9;
    }
    func_0x000107c6142c(ppppuVar3);
    func_0x000107c614a8(apppuStack_80);
    if (lStack_e8 == 0) goto LAB_1030c469c;
    uVar2 = 0;
    FUN_1030c4e84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppppuVar3 = apppuStack_80;
    ppuVar11 = &puStack_100;
    func_0x000107c6147c(ppppuVar3,ppuVar11,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)ppppuVar3 & 1) != 0) {
      ppppuVar3 = (undefined8 ****)apppuStack_80[0];
      func_0x000107c5c1d4();
      func_0x000107c61180();
      func_0x000107c61170(apppuStack_80[0]);
      func_0x000107c5faec();
      func_0x000107c61170();
      goto LAB_1030c46ac;
    }
  }
  ppuVar11 = (undefined **)0x0;
LAB_1030c46ac:
  FUN_1030c49e8();
  lVar1 = _DAT_112f39ce8;
  if (((ulong)ppppuVar3 & 1) == 0) {
    func_0x000107c6142c(ppuVar11);
    uVar2 = 0;
  }
  else {
    lVar10 = *(long *)(unaff_x20 + _DAT_112f39ce8);
    *(undefined1 *)(unaff_x20 + _DAT_112f39cc8) = 0;
    func_0x000107c61428(unaff_x20 + lVar5,apppuStack_80,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    lVar4 = lVar10;
    func_0x000107c61174(lVar10);
    func_0x000107c6142c(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(unaff_x20 + _DAT_112f39ce0) = 0;
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f39cd8);
    *(undefined8 *)(unaff_x20 + _DAT_112f39cd8) = 0;
    func_0x000107c61170(uVar2);
    lVar5 = _DAT_112f39cf8;
    func_0x000107c61428(unaff_x20 + _DAT_112f39cf8,auStack_98,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    func_0x000107c61170(uVar2);
    lVar5 = _DAT_112f39d00;
    func_0x000107c61428(unaff_x20 + _DAT_112f39d00,auStack_b0,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    func_0x000107c61170(uVar2);
    if (ppuVar11 != (undefined **)0x0) {
      func_0x000107c5fcec(0);
      func_0x00010206cdec(0x1030c4f30,&puStack_100,
                          "SCStoreProductPageControllerSwift/StoreProductPageControllerSwift.swift",
                          0x47,2,300);
      func_0x000107c6142c(ppuVar11);
    }
    lVar5 = _DAT_112f39cf0;
    func_0x000107c61428(unaff_x20 + _DAT_112f39cf0,auStack_c8,0,0);
    lVar5 = unaff_x20 + lVar5;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c5e354();
      func_0x000107c615e8(lVar5);
    }
    lVar5 = _DAT_112f39cd0;
    lVar1 = *(long *)(unaff_x20 + _DAT_112f39cd0);
    if (lVar1 == 0) {
      if (lVar10 == 0) {
        return 0;
      }
      puVar6 = &UNK_110608b50;
      func_0x000107c613fc(&UNK_110608b50,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_110608c40;
      func_0x000107c613fc(&UNK_110608c40,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = param_2;
      *(undefined8 *)(puVar7 + 0x20) = param_3;
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0x42000000;
      ppuVar11 = &puStack_100;
      func_0x000107c60bc4(ppuVar11);
      func_0x000100d342a4(param_2,param_3);
      func_0x000107c61574(puVar7);
      func_0x000107c420a8(lVar4);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(lVar4);
    }
    else {
      puVar6 = &UNK_110608b50;
      func_0x000107c613fc(&UNK_110608b50,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_110608c90;
      func_0x000107c613fc(&UNK_110608c90,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = param_2;
      *(undefined8 *)(puVar7 + 0x20) = param_3;
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0x42000000;
      ppuVar11 = &puStack_100;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c615f0(lVar1);
      func_0x000100d342a4(param_2,param_3);
      func_0x000107c61574(puVar7);
      func_0x000107c41864(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c60bd0(ppuVar11);
      uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
      *(undefined8 *)(unaff_x20 + lVar5) = 0;
      func_0x000107c615e8(uVar2);
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1030c49e8; end: 1030c4a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1030c49e8(void)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f39d10);
  if ((lVar2 == 0) || (func_0x000107c5b0bc(), (int)lVar2 == 0)) {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f39ce0);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f39ce8);
    uVar1 = 0;
    if (lVar2 != 0) {
      func_0x000107c4f090();
      func_0x000107c61180();
      uVar1 = 0;
      if (lVar2 != 0) {
        func_0x000107c61170();
        return 1;
      }
    }
  }
  return uVar1;
}



/* Entry: 1030c4a4c; end: 1030c4aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c4a4c(long param_1,code *param_2)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f39cf0;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f39cf0,auStack_60,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c41b3c(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1030c4af0; end: 1030c4b8b; -[StoreProductPageControllerSwift dismissStoreProductAnimated:completion:] */

uint FUN_1030c4af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_110608d70;
    func_0x000107c613fc(&UNK_110608d70,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_1030c5138;
  }
  func_0x000107c61174(param_1);
  FUN_1030c453c(param_3,pcVar2,puVar1);
  func_0x000100d342b4(pcVar2,puVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1030c4b8c; end: 1030c4c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c4b8c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_112f39d28);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      lVar2 = lVar1;
      func_0x000107c5bef4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_3);
      goto LAB_1030c4c14;
    }
  }
  lVar2 = 0;
LAB_1030c4c14:
  lVar1 = *param_1;
  *param_1 = lVar2;
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1030c4c38; end: 1030c4cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c4c38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_112f39d28);
  if (lVar1 == 0) {
    bVar2 = true;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    bVar2 = lVar1 == 0;
    if (!bVar2) {
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c50018(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_3);
    }
  }
  *(bool *)param_1 = bVar2;
  return;
}



/* Entry: 1030c4cdc; end: 1030c4d3b; -[StoreProductPageControllerSwift init] */

void FUN_1030c4cdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoreProductPageControllerSwift.StoreProductPageControllerSwift",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c4d08);
  (*pcVar1)();
}



/* Entry: 1030c4d3c; end: 1030c4e43; -[StoreProductPageControllerSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030c4d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c4db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c4df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030c4e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c4dfc) */
/* WARNING: Removing unreachable block (ram,0x0001030c4dbc) */
/* WARNING: Removing unreachable block (ram,0x0001030c4d8c) */
/* WARNING: Removing unreachable block (ram,0x0001030c4e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c4d3c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39d08));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39d10));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39d18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39d20));
  return;
}



/* Entry: 1030c4e44; end: 1030c4e77; -[StoreProductPageControllerSwift productViewControllerDidFinish:] */

void FUN_1030c4e44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030c453c(1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030c4e78; end: 1030c4e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c4e78(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c3ceac(*(undefined8 *)(lVar3 + _DAT_112f39d08));
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(param_1);
    lVar2 = _DAT_112f39d00;
    func_0x000107c61428(lVar3 + _DAT_112f39d00,auStack_80,1,0);
    uVar5 = *(undefined8 *)(lVar3 + lVar2);
    *(undefined **)(lVar3 + lVar2) = puVar4;
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1030c4e84; end: 1030c4ec3;  */

void FUN_1030c4e84(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1030c4ec4; end: 1030c4f4b;  */

void FUN_1030c4ec4(void)

{
  long unaff_x20;
  
  FUN_1030c4b8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1030c4f4c; end: 1030c4f6f;  */

undefined8 FUN_1030c4f4c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030c4f70; end: 1030c4f8f;  */

void FUN_1030c4f70(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4190);
  return;
}



/* Entry: 1030c4f90; end: 1030c50f7;  */

int FUN_1030c4f90(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1030c500c;
        goto LAB_1030c4ff0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1030c4ff0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1030c500c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1030c50f8; end: 1030c5137;  */

void FUN_1030c50f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f39d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db84f44;
  func_0x000107c61520(&UNK_10db84f44,&UNK_110608d50);
  puRam0000000112f39d70 = puVar1;
  return;
}



/* Entry: 1030c5138; end: 1030c5183;  */

void FUN_1030c5138(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001030c5140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1030c5184; end: 1030c520b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030c5184(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1030c5544();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f39d80) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f39d88) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c520c);
  (*pcVar1)();
}



/* Entry: 1030c520c; end: 1030c526b; -[_TtC43AdAttachmentPresenterPluginScopeGraphBridge58AdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030c520c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentPresenterPluginScopeGraphBridge.AdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c5238);
  (*pcVar1)();
}



/* Entry: 1030c526c; end: 1030c52a3; -[_TtC43AdAttachmentPresenterPluginScopeGraphBridge58AdAttachmentPresenterPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030c5288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030c528c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c526c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39d80));
  return;
}



/* Entry: 1030c52a4; end: 1030c52cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c52a4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f39d88),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f39d80));
  return;
}



/* Entry: 1030c52cc; end: 1030c52eb;  */

void FUN_1030c52cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b42d0);
  return;
}



/* Entry: 1030c52ec; end: 1030c5373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030c52ec(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f39db8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f39dc0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030c5374);
  (*pcVar2)();
}



/* Entry: 1030c5374; end: 1030c545b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030c5374(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f39db8);
  *(undefined **)(unaff_x20 + _DAT_112f39db8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f39dc0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f39dc0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110608f40;
  func_0x000107c613fc(&UNK_110608f40,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1030c5460,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1030c545c; end: 1030c5467;  */

void FUN_1030c545c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030c5468; end: 1030c54c7; -[_TtC43AdAttachmentPresenterPluginScopeGraphBridge56AdAttachmentPresenterPluginScopedServicesSaberEntryPoint init] */

void FUN_1030c5468(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAttachmentPresenterPluginScopeGraphBridge.AdAttachmentPresenterPluginScopedServicesSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030c5494);
  (*pcVar1)();
}



/* Entry: 1030c54c8; end: 1030c54ff; -[_TtC43AdAttachmentPresenterPluginScopeGraphBridge56AdAttachmentPresenterPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030c54c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39dc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39db8));
  return;
}



/* Entry: 1030c5500; end: 1030c5503;  */

void FUN_1030c5500(void)

{
  return;
}



/* Entry: 1030c5504; end: 1030c5523;  */

void FUN_1030c5504(void)

{
  FUN_1030c5374();
  return;
}



/* Entry: 1030c5524; end: 1030c5543;  */

void FUN_1030c5524(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4398);
  return;
}


