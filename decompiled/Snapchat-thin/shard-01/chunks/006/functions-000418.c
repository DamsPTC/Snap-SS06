/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012a0024; end: 1012a0043;  */

void FUN_1012a0024(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2170);
  return;
}



/* Entry: 1012a0044; end: 1012a03bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012a0044(undefined *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&puStack_90 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1012a03bc(lVar13);
  lVar2 = lVar13;
  (**(code **)(lVar14 + 0x30))(lVar13,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x0001000293e4(lVar13);
    return 0;
  }
  (**(code **)(lVar14 + 0x20))(lVar12,lVar13,lVar3);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5ed90();
  puVar7 = puVar5;
  func_0x000107c3f3f4();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  if ((int)puVar7 == 0) {
    (**(code **)(lVar14 + 8))(lVar12,lVar3);
    return 0;
  }
  puVar5 = param_1;
  func_0x000107c5e278();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170();
    FUN_1012a1078(lVar12);
    goto LAB_1012a0380;
  }
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
LAB_1012a02dc:
    func_0x000107c5a9c4(puVar4);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5ed90();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar10 = 0;
    FUN_100dfa6ec(0);
    uVar11 = 0x112d377a8;
    FUN_1012a0580(0x112d377a8,&UNK_10d901780);
    param_1 = puVar6;
    func_0x000107c5f9dc(puVar6,uVar10,PTR___sypN_11034f1a8 + 8,uVar11);
    func_0x000107c6142c(puVar6);
    func_0x000107c4de70(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
    func_0x000107c61168();
    iVar1 = (int)puVar5;
    func_0x000107c3f438();
    if (iVar1 == 0) {
      func_0x000107c61170(param_1);
      goto LAB_1012a02dc;
    }
    lVar2 = param_3 + _DAT_112d6ece8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      pcVar8 = "present(_:)";
      func_0x0001000c10c0("present(_:)");
      func_0x000107c61180();
      puVar4 = &UNK_11039c3d0;
      func_0x000107c613fc(&UNK_11039c3d0,0x28,7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(undefined **)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = lVar2;
      pcStack_70 = FUN_1012a0558;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11039c3e8;
      ppuVar9 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar9);
      puVar4 = puStack_68;
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_1);
      func_0x000107c615f0(lVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(pcVar8);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(pcVar8);
      goto LAB_1012a0380;
    }
  }
  func_0x000107c61170(param_1);
LAB_1012a0380:
  (**(code **)(lVar14 + 8))(lVar12,lVar3);
  return 1;
}



/* Entry: 1012a03bc; end: 1012a0557;  */

/* WARNING: Possible PIC construction at 0x0001012a042c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a04a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a0430) */
/* WARNING: Removing unreachable block (ram,0x0001012a04ac) */
/* WARNING: Removing unreachable block (ram,0x0001012a04c4) */

void FUN_1012a03bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3ef94();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = unaff_x20;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5e278();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001012a0554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(unaff_x20 + -8) + 0x38))(param_1,1,1,unaff_x20);
        return;
      }
      lVar1 = unaff_x20;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x20);
      func_0x000107c5edd0(param_1,lVar1,param_3);
    }
    else {
      func_0x000107c4d8f8();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      func_0x000107c5fb78(lVar2,param_3);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    func_0x000107c5fb78(lVar2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1012a0558; end: 1012a057f;  */

/* WARNING: Possible PIC construction at 0x0001012a0654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a0688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a06b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a068c) */
/* WARNING: Removing unreachable block (ram,0x0001012a0658) */
/* WARNING: Removing unreachable block (ram,0x0001012a06b4) */
/* WARNING: Removing unreachable block (ram,0x0001012a06d0) */
/* WARNING: Removing unreachable block (ram,0x0001012a06e0) */

void FUN_1012a0558(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c610f8(PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8,uVar2,
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c453e4();
  func_0x000107c56634();
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  func_0x000107c4d8f8(uVar2);
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1012a0580; end: 1012a05bf;  */

void FUN_1012a0580(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100dfa6ec(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1012a05c0; end: 1012a06fb;  */

/* WARNING: Possible PIC construction at 0x0001012a0654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a0688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a06b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a068c) */
/* WARNING: Removing unreachable block (ram,0x0001012a0658) */
/* WARNING: Removing unreachable block (ram,0x0001012a06b4) */
/* WARNING: Removing unreachable block (ram,0x0001012a06d0) */
/* WARNING: Removing unreachable block (ram,0x0001012a06e0) */

void FUN_1012a05c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c610f8(PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8);
  func_0x000107c453e4();
  func_0x000107c56634();
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  func_0x000107c4d8f8(param_2);
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1012a06fc; end: 1012a0743; -[_TtC17SelfHarmResources23MessageComposePresenter messageComposeViewController:didFinishWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a06fc(long param_1)

{
  param_1 = param_1 + _DAT_112d6ece8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1012a0744; end: 1012a079f; -[_TtC17SelfHarmResources23MessageComposePresenter init] */

void FUN_1012a0744(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfHarmResources.MessageComposePresenter",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a0770);
  (*pcVar1)();
}



/* Entry: 1012a07a0; end: 1012a07af; -[_TtC17SelfHarmResources23MessageComposePresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012a07a0(long param_1)

{
  param_1 = param_1 + _DAT_112d6ece8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1012a07b0; end: 1012a07cf;  */

void FUN_1012a07b0(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2238);
  return;
}



/* Entry: 1012a07d0; end: 1012a0823;  */

undefined8 FUN_1012a07d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1012a0824(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1012a0824; end: 1012a0bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a0824(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    if (puVar1 != (undefined *)0x0) {
      puVar2 = &UNK_11039c420;
      func_0x000107c613fc(&UNK_11039c420,0x18,7);
      *(long *)(puVar2 + 0x10) = param_1;
      puVar3 = PTR_PTR_1126a6890;
      func_0x000107c610f8(PTR_PTR_1126a6890);
      pcStack_80 = FUN_1012a0c74;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_1000f6b44;
      puStack_88 = &UNK_11039c438;
      ppuVar4 = &puStack_a0;
      puStack_78 = puVar2;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61174();
      func_0x000107c47bfc(puVar3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puStack_78);
      lVar5 = 0;
      FUN_1012a1058();
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined **)(unaff_x20 + 0x10) = puVar6;
      func_0x000107c61174();
      func_0x000107c615e8(uVar11);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar11 = param_3;
      puVar8 = puVar6;
      FUN_1012a0d74();
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar6);
      puVar2 = &UNK_11039c470;
      func_0x000107c613fc(&UNK_11039c470,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = uVar11;
      *(undefined **)(puVar2 + 0x18) = puVar8;
      puVar7 = PTR_PTR_1126a6898;
      func_0x000107c610f8(PTR_PTR_1126a6898);
      pcStack_80 = FUN_1012a0e70;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_1012a0d1c;
      puStack_88 = &UNK_11039c488;
      ppuVar4 = &puStack_a0;
      puStack_78 = puVar2;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61174(puVar3);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c46c5c(puVar7);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puStack_78);
      puVar2 = PTR_PTR_1126a68a0;
      func_0x000107c610f8();
      func_0x000107c49520();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar7);
      uVar10 = *(undefined8 *)(lVar5 + _DAT_112d6edb8);
      *(undefined **)(lVar5 + _DAT_112d6edb8) = puVar2;
      func_0x000107c61174(puVar2);
      func_0x000107c61170(uVar10);
      uVar12 = *(ulong *)(param_1 + _DAT_112d6ee68);
      uVar9 = uVar12;
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_attachUI_completion__1125a0c10);
      if ((uVar9 & 1) == 0) {
        func_0x000107c61170(lVar5);
      }
      else {
        func_0x000107c615f0(uVar12);
        func_0x000107c3e2c4();
        func_0x000107c61170(lVar5);
        func_0x000107c615e8(uVar12);
      }
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(puVar3);
      param_2 = puVar6;
      goto LAB_1012a0b88;
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
LAB_1012a0b88:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1012a0bb4; end: 1012a0c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a0bb4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d6ee68);
  puVar1 = &UNK_11039c4d8;
  func_0x000107c613fc(&UNK_11039c4d8,0x18,7);
  *(long *)(puVar1 + 0x10) = param_1;
  pcStack_40 = FUN_1012a0e98;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_11039c4f0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1012a0c74; end: 1012a0c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a0c74(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112d6ee68);
  puVar1 = &UNK_11039c4d8;
  func_0x000107c613fc(&UNK_11039c4d8,0x18,7);
  *(long *)(puVar1 + 0x10) = lVar3;
  pcStack_40 = FUN_1012a0e98;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_11039c4f0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(lVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(uVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1012a0c98; end: 1012a0ceb;  */

void FUN_1012a0c98(ulong *param_1)

{
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60))();
  if (param_1 != (ulong *)0x0) {
    func_0x000107c41aa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1012a0cec; end: 1012a0d0f;  */

void FUN_1012a0cec(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012a0d10; end: 1012a0d1b;  */

void FUN_1012a0d10(void)

{
  return;
}



/* Entry: 1012a0d1c; end: 1012a0d73;  */

uint FUN_1012a0d1c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  return (uint)uVar3 & 1;
}



/* Entry: 1012a0d74; end: 1012a0e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1012a0d74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_60;
  lVar2 = 0;
  FUN_1012a15ac();
  lVar4 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112d6ede8;
  func_0x000107c61614(lVar4 + _DAT_112d6ede8,0);
  lVar5 = _DAT_112d6edf0;
  func_0x000107c61614(lVar4 + _DAT_112d6edf0,0);
  func_0x000107c61604(lVar4 + lVar1,param_2);
  func_0x000107c61604(lVar4 + lVar5,param_1);
  plVar3 = &lStack_50;
  lStack_50 = lVar4;
  lStack_48 = lVar2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  lVar4 = 0;
  FUN_1012a07b0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = _DAT_112d6ece8;
  func_0x000107c61614(lVar5 + _DAT_112d6ece8,0);
  func_0x000107c61604(lVar5 + lVar1,param_2);
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  auVar7._8_8_ = plVar6;
  auVar7._0_8_ = plVar3;
  return auVar7;
}



/* Entry: 1012a0e70; end: 1012a0e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012a0e70(undefined *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&puStack_90 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1012a03bc(lVar14);
  lVar3 = lVar14;
  (**(code **)(lVar15 + 0x30))(lVar14,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x0001000293e4(lVar14);
    return 0;
  }
  (**(code **)(lVar15 + 0x20))(lVar13,lVar14,lVar4);
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5ed90();
  puVar8 = puVar6;
  func_0x000107c3f3f4();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar15 + 8))(lVar13,lVar4);
    return 0;
  }
  puVar6 = param_1;
  func_0x000107c5e278();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61170();
    FUN_1012a1078(lVar13);
    goto LAB_1012a0380;
  }
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
LAB_1012a02dc:
    func_0x000107c5a9c4(puVar5);
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5ed90();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar11 = 0;
    FUN_100dfa6ec(0);
    uVar12 = 0x112d377a8;
    FUN_1012a0580(0x112d377a8,&UNK_10d901780);
    param_1 = puVar7;
    func_0x000107c5f9dc(puVar7,uVar11,PTR___sypN_11034f1a8 + 8,uVar12);
    func_0x000107c6142c(puVar7);
    func_0x000107c4de70(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
    func_0x000107c61168();
    iVar2 = (int)puVar6;
    func_0x000107c3f438();
    if (iVar2 == 0) {
      func_0x000107c61170(param_1);
      goto LAB_1012a02dc;
    }
    lVar3 = lVar1 + _DAT_112d6ece8;
    func_0x000107c61618();
    if (lVar3 != 0) {
      pcVar9 = "present(_:)";
      func_0x0001000c10c0("present(_:)");
      func_0x000107c61180();
      puVar5 = &UNK_11039c3d0;
      func_0x000107c613fc(&UNK_11039c3d0,0x28,7);
      *(long *)(puVar5 + 0x10) = lVar1;
      *(undefined **)(puVar5 + 0x18) = param_1;
      *(long *)(puVar5 + 0x20) = lVar3;
      pcStack_70 = FUN_1012a0558;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11039c3e8;
      ppuVar10 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar10);
      puVar5 = puStack_68;
      func_0x000107c61174(lVar1);
      func_0x000107c61174(param_1);
      func_0x000107c615f0(lVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(pcVar9);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(pcVar9);
      goto LAB_1012a0380;
    }
  }
  func_0x000107c61170(param_1);
LAB_1012a0380:
  (**(code **)(lVar15 + 8))(lVar13,lVar4);
  return 1;
}



/* Entry: 1012a0e78; end: 1012a0e97;  */

void FUN_1012a0e78(void)

{
  func_0x000107c61168(&PTR_PTR_112d6ed58);
  return;
}



/* Entry: 1012a0e98; end: 1012a0eaf;  */

void FUN_1012a0e98(void)

{
  ulong *puVar1;
  long unaff_x20;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x60))();
  if (puVar1 != (ulong *)0x0) {
    func_0x000107c41aa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar1);
    return;
  }
  return;
}



/* Entry: 1012a0eb0; end: 1012a0f2b; -[_TtC17SelfHarmResources31SelfHarmResourcesViewController view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a0eb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + _DAT_112d6edb8);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(param_1);
    func_0x000107c453e4(puVar1);
  }
  else {
    func_0x000107c61174(param_1);
    puVar1 = puVar2;
  }
  func_0x000107c61174(puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1012a0f2c; end: 1012a0f2f; -[_TtC17SelfHarmResources31SelfHarmResourcesViewController setView:] */

void FUN_1012a0f2c(void)

{
  return;
}



/* Entry: 1012a0f30; end: 1012a0f7f; -[_TtC17SelfHarmResources31SelfHarmResourcesViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a0f30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112d6edb8) = 0;
  lVar1 = param_1;
  FUN_1012a1058();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 1012a0f80; end: 1012a0f87; -[_TtC17SelfHarmResources31SelfHarmResourcesViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_1012a0f80(void)

{
  return 0;
}



/* Entry: 1012a0f88; end: 1012a0feb; -[_TtC17SelfHarmResources31SelfHarmResourcesViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a0f88(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d6edb8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SelfHarmResources/SelfHarmResourcesViewController.swift",0x37,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a0fec);
  (*pcVar1)();
}



/* Entry: 1012a0fec; end: 1012a1047; -[_TtC17SelfHarmResources31SelfHarmResourcesViewController initWithNibName:bundle:] */

void FUN_1012a0fec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfHarmResources.SelfHarmResourcesViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a1018);
  (*pcVar1)();
}



/* Entry: 1012a1048; end: 1012a1057; -[_TtC17SelfHarmResources31SelfHarmResourcesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6edb8));
  return;
}



/* Entry: 1012a1058; end: 1012a1077;  */

void FUN_1012a1058(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2328);
  return;
}



/* Entry: 1012a1078; end: 1012a1483;  */

/* WARNING: Possible PIC construction at 0x0001012a1374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a1434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a1378) */
/* WARNING: Removing unreachable block (ram,0x0001012a1438) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1078(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_f0 [7];
  undefined1 auStack_b8 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  lVar13 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = &stack0xffffffffffffff50 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)puVar12 - extraout_x8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar14 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  pcVar3 = (char *)(unaff_x20 + _DAT_112d6ede8);
  func_0x000107c61618();
  if (pcVar3 == (char *)0x0) {
    return;
  }
  lVar4 = unaff_x20 + _DAT_112d6edf0;
  func_0x000107c61618();
  if (lVar4 != 0) {
    pcVar9 = *(code **)(lVar8 + 0x38);
    (*pcVar9)(lVar11,1,1,lVar1);
    (*pcVar9)(lVar14,1,1,lVar1);
    lVar4 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar15,1,1,lVar4);
    *(undefined1 *)(lVar2 + -8) = 0;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    *(undefined8 *)(lVar2 + -0x18) = 0;
    *(undefined8 *)(lVar2 + -0x20) = 0;
    *(undefined8 *)(lVar2 + -0x28) = 0;
    *(undefined8 *)(lVar2 + -0x30) = 0;
    *(undefined8 *)(lVar2 + -0x38) = 0;
    *(long *)(lVar2 + -0x40) = lVar15;
    func_0x000104638e24(lVar2,0x10,lVar11,0,lVar14,0,0,0,0);
    puVar5 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    func_0x000107c43bf4();
    func_0x000107c61180();
    (**(code **)(lVar8 + 0x10))(puVar12,param_1,lVar1);
    uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar10 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
    puVar6 = &UNK_11039c530;
    func_0x000107c613fc(&UNK_11039c530,uVar10 + lVar13,uVar7 | 7);
    (**(code **)(lVar8 + 0x20))(puVar6 + uVar10,puVar12,lVar1);
    pcStack_70 = FUN_1012a15cc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100e38b5c;
    puStack_78 = &UNK_11039c548;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    pcVar3 = "present(_:)";
    func_0x0001000c10c0("present(_:)");
    func_0x000107c61180();
    func_0x000107c5dc68(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 1012a1484; end: 1012a14d3;  */

void FUN_1012a1484(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012a14d4; end: 1012a1517; -[_TtC17SelfHarmResources20WebBrowsingPresenter webBrowserDidDismiss:] */

void FUN_1012a14d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1012a1634();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012a1518; end: 1012a1573; -[_TtC17SelfHarmResources20WebBrowsingPresenter init] */

void FUN_1012a1518(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfHarmResources.WebBrowsingPresenter",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a1544);
  (*pcVar1)();
}



/* Entry: 1012a1574; end: 1012a15ab; -[_TtC17SelfHarmResources20WebBrowsingPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1574(long param_1)

{
  FUN_100e3b598(param_1 + _DAT_112d6ede8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d6edf0);
  return;
}



/* Entry: 1012a15ac; end: 1012a15cb;  */

void FUN_1012a15ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2400);
  return;
}



/* Entry: 1012a15cc; end: 1012a1617;  */

void FUN_1012a15cc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012a1618; end: 1012a1633;  */

void FUN_1012a1618(long param_1,long param_2)

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



/* Entry: 1012a1634; end: 1012a16c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1634(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _DAT_112d6edf0;
  lVar1 = unaff_x20 + _DAT_112d6edf0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      lVar3 = unaff_x20 + lVar3;
      func_0x000107c61618(lVar3);
      lVar1 = lVar3;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1012a16c8; end: 1012a16d3; -[SCSelfHarmResourcesEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a16c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ee20;
  func_0x000107c61428(param_1 + _DAT_112d6ee20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a16d4; end: 1012a16df; -[SCSelfHarmResourcesEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a16d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ee20;
  func_0x000107c61428(param_1 + _DAT_112d6ee20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a16e0; end: 1012a16eb; -[SCSelfHarmResourcesEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a16e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ee28;
  func_0x000107c61428(param_1 + _DAT_112d6ee28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a16ec; end: 1012a172f;  */

void FUN_1012a16ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012a1730; end: 1012a173b; -[SCSelfHarmResourcesEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ee28;
  func_0x000107c61428(param_1 + _DAT_112d6ee28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a173c; end: 1012a178f;  */

void FUN_1012a173c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a1790; end: 1012a17d7; -[SCSelfHarmResourcesEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1790(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ee30;
  func_0x000107c61428(param_1 + _DAT_112d6ee30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1012a17d8; end: 1012a191b; -[SCSelfHarmResourcesEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a17d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ee30;
  func_0x000107c61428(param_1 + _DAT_112d6ee30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1012a191c; end: 1012a1943; -[SCSelfHarmResourcesEntryPoint begin] */

void FUN_1012a191c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001012a183c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012a1944; end: 1012a1987; -[SCSelfHarmResourcesEntryPoint end] */

void FUN_1012a1944(undefined8 param_1)

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



/* Entry: 1012a1988; end: 1012a1b8b;  */

void FUN_1012a1988(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000017;
        if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) &&
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SelfHarmResources/SCSelfHarmResourcesEntryPoint.swift",0x35,2,0x2f,0)
          ;
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a1b8c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a68c();
        goto LAB_1012a1a14;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_1012a1a14:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012a1b8c; end: 1012a1c37; -[SCSelfHarmResourcesEntryPoint setValue:forIvarName:] */

void FUN_1012a1b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012a1988(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012a1c38; end: 1012a1cb7; -[SCSelfHarmResourcesEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1c38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6ee20,0);
  func_0x000107c61614(param_1 + _DAT_112d6ee28,0);
  *(undefined8 *)(param_1 + _DAT_112d6ee30) = 0;
  *(undefined8 *)(param_1 + _DAT_112d6ee38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012a1cb8; end: 1012a1ceb;  */

void FUN_1012a1cb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012a1cec; end: 1012a1d43; -[SCSelfHarmResourcesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1cec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6ee20);
  func_0x000107c61610(param_1 + _DAT_112d6ee28);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6ee30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6ee38));
  return;
}



/* Entry: 1012a1d44; end: 1012a1d63;  */

void FUN_1012a1d44(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2508);
  return;
}



/* Entry: 1012a1d64; end: 1012a1d83; -[_TtC22SelfHarmResourcesScope22SelfHarmResourcesScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1d64(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6ee68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a1d84; end: 1012a1e0f; -[_TtC22SelfHarmResourcesScope22SelfHarmResourcesScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1d84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ee70;
  func_0x000107c61428(param_1 + _DAT_112d6ee70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a1e10; end: 1012a1fb3; -[_TtC22SelfHarmResourcesScope22SelfHarmResourcesScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a1e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ee70;
  func_0x000107c61428(param_1 + _DAT_112d6ee70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a1fb4; end: 1012a206f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1012a1fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d6ee70;
  func_0x000107c61614(unaff_x20 + _DAT_112d6ee70,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6ee68) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1012a2070; end: 1012a208f;  */

void FUN_1012a2070(void)

{
  func_0x000107c61168(&PTR_PTR_1127c25d8);
  return;
}



/* Entry: 1012a2090; end: 1012a2127; -[_TtC22SelfHarmResourcesScope22SelfHarmResourcesScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112d6ee70;
  func_0x000107c61614(param_1 + _DAT_112d6ee70,0);
  *(undefined8 *)(param_1 + _DAT_112d6ee68) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  FUN_1012a2070();
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_58,puVar1);
  return;
}



/* Entry: 1012a2128; end: 1012a2183; -[_TtC22SelfHarmResourcesScope22SelfHarmResourcesScope init] */

void FUN_1012a2128(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfHarmResourcesScope.SelfHarmResourcesScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a2154);
  (*pcVar1)();
}



/* Entry: 1012a2184; end: 1012a21df; -[_TtC22SelfHarmResourcesScope22SelfHarmResourcesScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012a2184(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6ee68));
  param_1 = param_1 + _DAT_112d6ee70;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1012a21e0; end: 1012a21e7; -[_TtC44SaturnPrivacySettingsBillboardSignalProvider44SaturnPrivacySettingsBillboardSignalProvider preCheckSource] */

undefined8 FUN_1012a21e0(void)

{
  return 0x22;
}



/* Entry: 1012a21e8; end: 1012a22a3; -[_TtC44SaturnPrivacySettingsBillboardSignalProvider44SaturnPrivacySettingsBillboardSignalProvider eligibleWithRequestor:campaignName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a21e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + _DAT_112d6eea0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c49cc4();
    func_0x000107c615e8(lVar3);
  }
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6010c(lVar4,uVar2);
  func_0x000107c451b0(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1012a22a4; end: 1012a2303; -[_TtC44SaturnPrivacySettingsBillboardSignalProvider44SaturnPrivacySettingsBillboardSignalProvider init] */

void FUN_1012a22a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnPrivacySettingsBillboardSignalProvider.SaturnPrivacySettingsBillboardSignalProvider"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a22d0);
  (*pcVar1)();
}



/* Entry: 1012a2304; end: 1012a2313; -[_TtC44SaturnPrivacySettingsBillboardSignalProvider44SaturnPrivacySettingsBillboardSignalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6eea0));
  return;
}



/* Entry: 1012a2314; end: 1012a2333;  */

void FUN_1012a2314(void)

{
  func_0x000107c61168(&PTR_PTR_1127c26b8);
  return;
}



/* Entry: 1012a2334; end: 1012a240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012a2334(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_2 + _DAT_113044a80);
  lVar2 = 0;
  FUN_1012a2314();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d6eea0) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_50,puVar1);
  uVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  return unaff_x20;
}



/* Entry: 1012a2410; end: 1012a242b;  */

void FUN_1012a2410(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012a242c; end: 1012a244b;  */

void FUN_1012a242c(void)

{
  func_0x000107c61168(&PTR_PTR_112d6ef10);
  return;
}



/* Entry: 1012a244c; end: 1012a2457; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a244c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ef68;
  func_0x000107c61428(param_1 + _DAT_112d6ef68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a2458; end: 1012a2463; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ef68;
  func_0x000107c61428(param_1 + _DAT_112d6ef68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a2464; end: 1012a246f; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint saturnExperimentProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2464(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ef70;
  func_0x000107c61428(param_1 + _DAT_112d6ef70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a2470; end: 1012a24b3;  */

void FUN_1012a2470(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012a24b4; end: 1012a24bf; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint setSaturnExperimentProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a24b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ef70;
  func_0x000107c61428(param_1 + _DAT_112d6ef70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a24c0; end: 1012a2513;  */

void FUN_1012a24c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a2514; end: 1012a265f; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001012a25e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a25f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a2618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a2640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a25fc) */
/* WARNING: Removing unreachable block (ram,0x0001012a25ec) */
/* WARNING: Removing unreachable block (ram,0x0001012a261c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2514(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar5 = param_1;
  if (lVar2 != 0) {
    func_0x000107c5161c();
    func_0x000107c61180();
    lVar5 = lVar2;
    if (param_1 != 0) {
      FUN_1012a242c(0);
      func_0x000107c613fc();
      uVar6 = *(undefined8 *)(param_1 + _DAT_113044a80);
      lVar3 = 0;
      FUN_1012a2314();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar4 + _DAT_112d6eea0) = uVar6;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar3;
      func_0x000107c61174(uVar6);
      func_0x000107c61154(&lStack_50,puVar1);
      func_0x000107c4e9e4(lVar2);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1012a2660; end: 1012a26a3; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint end] */

void FUN_1012a2660(undefined8 param_1)

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



/* Entry: 1012a26a4; end: 1012a283b;  */

void FUN_1012a26a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10ced70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010ef31290,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SaturnPrivacySettingsBillboardSignalProvider/SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint.swift"
                            ,0x6b,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a283c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58b94();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012a283c; end: 1012a28e7; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_1012a283c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012a26a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012a28e8; end: 1012a295b; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a28e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6ef68,0);
  func_0x000107c61614(param_1 + _DAT_112d6ef70,0);
  *(undefined8 *)(param_1 + _DAT_112d6ef78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012a295c; end: 1012a298f;  */

void FUN_1012a295c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012a2990; end: 1012a29d7; -[SCSaturnPrivacySettingsBillboardSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2990(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6ef68);
  func_0x000107c61610(param_1 + _DAT_112d6ef70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6ef78));
  return;
}



/* Entry: 1012a29d8; end: 1012a29f7;  */

void FUN_1012a29d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2778);
  return;
}



/* Entry: 1012a29f8; end: 1012a2bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1012a29f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar3 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c43b5c();
  func_0x000107c61180();
  uVar5 = param_4;
  func_0x000107c3e980();
  func_0x000107c61180();
  uVar6 = param_4;
  func_0x000107c5162c();
  func_0x000107c61180();
  lVar7 = param_6;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = 0;
    FUN_1012a3af4();
    lVar9 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112d6f0c8) = 0;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112d6f0d0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar9 + _DAT_112d6f0d8) = 0;
    *(undefined **)(lVar9 + _DAT_112d6f0e0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112d6f0e8);
    *puVar1 = 0xd000000000000028;
    puVar1[1] = 0x800000010ef33620;
    *(undefined8 *)(lVar9 + _DAT_112d6f0a0) = uVar3;
    *(undefined8 *)(lVar9 + _DAT_112d6f0a8) = uVar4;
    *(undefined8 *)(lVar9 + _DAT_112d6f0b0) = uVar5;
    *(undefined8 *)(lVar9 + _DAT_112d6f0b8) = uVar6;
    *(long *)(lVar9 + _DAT_112d6f0c0) = lVar7;
    plVar10 = &lStack_70;
    lStack_70 = lVar9;
    lStack_68 = lVar8;
    func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
    uVar3 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(plVar10);
    func_0x000107c61170(uVar3);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012a2bfc);
  (*pcVar2)();
}



/* Entry: 1012a2bfc; end: 1012a2c17;  */

void FUN_1012a2bfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012a2c18; end: 1012a2c37;  */

void FUN_1012a2c18(void)

{
  func_0x000107c61168(&PTR_PTR_112d6efe8);
  return;
}



/* Entry: 1012a2c38; end: 1012a2c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012a2c38(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d6f048;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6f048);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1012a2c9c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1012a2c9c; end: 1012a2f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1012a2c9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_70;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112d6f058);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6f060);
  uVar4 = ((undefined8 *)(param_1 + _DAT_112d6f060))[1];
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d6f068);
  uVar5 = ((undefined8 *)(param_1 + _DAT_112d6f068))[1];
  uVar11 = *(undefined8 *)(param_1 + _DAT_112d6f070);
  lVar6 = 0;
  FUN_1012a49ac();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar8 = lVar7 + _DAT_112d6f120;
  *(undefined8 *)(lVar8 + 8) = 0;
  func_0x000107c61614(lVar8,0);
  *(undefined8 *)(lVar7 + _DAT_112d6f148) = 1;
  *(undefined8 *)(lVar7 + _DAT_112d6f118) = uVar10;
  *(undefined ***)(lVar8 + 8) = &PTR_DAT_11039c7d0;
  func_0x000107c61604();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d6f128);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d6f130);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112d6f138) = uVar11;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  func_0x000107c30a3c();
  func_0x000107c61180();
  *(undefined8 *)(lVar7 + _DAT_112d6f140) = uVar11;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61154(&lStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c5677c();
  return (undefined1 *)plVar9;
}



/* Entry: 1012a2f40; end: 1012a2f93; -[_TtC36SaturnPrivacySettingsTakeoverFeature38SaturnPrivacySettingsTakeoverPresenter launchTakeover] */

/* WARNING: Possible PIC construction at 0x0001012a2f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a2f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2f40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6f050);
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1012a2c38();
  func_0x000107c3e2c0(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012a2f94; end: 1012a2ff3; -[_TtC36SaturnPrivacySettingsTakeoverFeature38SaturnPrivacySettingsTakeoverPresenter init] */

void FUN_1012a2f94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnPrivacySettingsTakeoverFeature.SaturnPrivacySettingsTakeoverPresenter",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a2fc0);
  (*pcVar1)();
}



/* Entry: 1012a2ff4; end: 1012a3083; -[_TtC36SaturnPrivacySettingsTakeoverFeature38SaturnPrivacySettingsTakeoverPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012a3020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a3068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a3024) */
/* WARNING: Removing unreachable block (ram,0x0001012a306c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a2ff4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6f050));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f058));
  return;
}



/* Entry: 1012a3084; end: 1012a318b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a3084(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "handleOkButtonTapped()";
  func_0x0001000c10c0("handleOkButtonTapped()");
  func_0x000107c61180();
  puVar2 = &UNK_11039c740;
  func_0x000107c613fc(&UNK_11039c740,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  uStack_40 = 0x1012a33cc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039c758;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar5 = unaff_x20 + _DAT_112d6f040;
  lVar4 = lVar5;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar5 + 0x10))();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 1012a318c; end: 1012a31a7;  */

void FUN_1012a318c(long param_1,long param_2)

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



/* Entry: 1012a31a8; end: 1012a32af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a31a8(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "handleTakeoverOutsideTapped()";
  func_0x0001000c10c0("handleTakeoverOutsideTapped()");
  func_0x000107c61180();
  puVar2 = &UNK_11039c790;
  func_0x000107c613fc(&UNK_11039c790,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  pcStack_40 = FUN_1012a32b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039c7a8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar5 = unaff_x20 + _DAT_112d6f040;
  lVar4 = lVar5;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar5 + 0x20))();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 1012a32b0; end: 1012a32c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a32b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6f050),PTR_s_detachUI__1125b96b8
             ,0);
  return;
}



/* Entry: 1012a32c8; end: 1012a331f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a32c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112d6f040;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012a3320; end: 1012a3323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a3320(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "handleOkButtonTapped()";
  func_0x0001000c10c0("handleOkButtonTapped()");
  func_0x000107c61180();
  puVar2 = &UNK_11039c740;
  func_0x000107c613fc(&UNK_11039c740,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  uStack_40 = 0x1012a33cc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039c758;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar5 = unaff_x20 + _DAT_112d6f040;
  lVar4 = lVar5;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar5 + 0x10))();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 1012a3324; end: 1012a337b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a3324(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112d6f040;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}


