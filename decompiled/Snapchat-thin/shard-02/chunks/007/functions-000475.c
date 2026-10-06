/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10209a6a0; end: 10209a6eb;  */

void FUN_10209a6a0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10209a6ec; end: 10209a707;  */

void FUN_10209a6ec(long param_1,long param_2)

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



/* Entry: 10209a708; end: 10209a74b;  */

void FUN_10209a708(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e55eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ccc38;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e55eb0 = puVar1;
  return;
}



/* Entry: 10209a74c; end: 10209aba7;  */

void FUN_10209a74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e55eb8,&UNK_10da58a40);
  puVar1 = &UNK_1104c6460;
  func_0x000107c613fc(&UNK_1104c6460,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000823a8(FUN_10209aba8,puVar1);
  return;
}



/* Entry: 10209aba8; end: 10209abeb;  */

void FUN_10209aba8(void)

{
  long unaff_x20;
  
  func_0x00010209a8c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10209abec; end: 10209ae37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209abec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e55ec0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e55ec8) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112e55ed0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_112e55ed8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e55ee0) = 0;
  *(undefined **)(unaff_x20 + _DAT_112e55ee8) = puVar1;
  *(undefined1 *)(unaff_x20 + _DAT_112e55ef0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e55ef8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e55f00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f40) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f48) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f50) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f58) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f60) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f68) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f70) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f78) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f80) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f88) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112e55f90) = param_16;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10209ae38; end: 10209ae7b;  */

void FUN_10209ae38(void)

{
  func_0x000107c614f0();
  FUN_10209ae7c();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10209ae7c; end: 10209b11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209ae7c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e55ed8);
  *(undefined8 *)(unaff_x20 + _DAT_112e55ed8) = uVar2;
  func_0x000107c61574(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e55ec8);
  *(undefined8 *)(unaff_x20 + _DAT_112e55ec8) = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e55ee0);
  *(undefined8 *)(unaff_x20 + _DAT_112e55ee0) = 0;
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e55f68) + _DAT_112e56720);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e55ec0);
  *(undefined8 *)(unaff_x20 + _DAT_112e55ec0) = 0;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e55ef8);
  *(undefined8 *)(unaff_x20 + _DAT_112e55ef8) = 0;
  lVar1 = _DAT_112e55f08;
  puVar5 = PTR___sytN_11034f1b0;
  lVar11 = *(long *)(unaff_x20 + _DAT_112e55f08);
  if (lVar11 == 0) {
    func_0x000107c61174(uVar7);
    uVar3 = 0;
  }
  else {
    func_0x000107c61174(uVar7);
    func_0x000107c6157c(lVar11);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar11,puVar5 + 8,uVar3,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar11);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar3);
  lVar1 = _DAT_112e55f10;
  lVar11 = *(long *)(unaff_x20 + _DAT_112e55f10);
  if (lVar11 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c6157c(lVar11);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar11,puVar5 + 8,uVar3,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar11);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar3);
  pcVar4 = "cleanup()";
  func_0x0001000c10c0("cleanup()");
  func_0x000107c61180();
  puVar5 = &UNK_1104c6540;
  func_0x000107c613fc(&UNK_1104c6540,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  pcStack_70 = FUN_10209e190;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104c6558;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c4e590(pcVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar10);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 10209b120; end: 10209b177; -[_TtC20GamesFriendsFeedImpl25GamesFriendsFeedPresenter dealloc] */

void FUN_10209b120(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_10209ae7c();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10209b178; end: 10209b31f; -[_TtC20GamesFriendsFeedImpl25GamesFriendsFeedPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010209b284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010209b288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209b178(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f90));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f40));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f80));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f88));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f70));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f38));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e55f18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e55ec0));
  return;
}



/* Entry: 10209b320; end: 10209b7b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209b320(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  ulong *puVar13;
  long alStack_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100083b20(alStack_b0);
  lVar3 = alStack_b0[0];
  lVar11 = alStack_b0[0];
  func_0x000107c4b1cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar3 == 0) {
    func_0x0001007d6c6c(2,0xd00000000000003a,0x800000010f060b90,lVar2,&PTR_DAT_1104c6d40);
  }
  func_0x000107c615f0(lVar3);
  func_0x000100083b20(alStack_b0);
  lVar12 = alStack_b0[0];
  puVar13 = *(ulong **)(unaff_x20 + _DAT_112e55f68);
  uVar4 = *(undefined8 *)((long)puVar13 + _DAT_112e56730);
  func_0x000107c61174(uVar4);
  func_0x000100083b20(alStack_b0);
  lVar11 = alStack_b0[0];
  lVar5 = alStack_b0[0];
  func_0x000107c40454(alStack_b0[0]);
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  lVar6 = 0;
  FUN_1020a0f04();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar11 = lVar7 + _DAT_112e55ff8;
  *(undefined8 *)(lVar11 + 8) = 0;
  func_0x000107c61614(lVar11,0);
  *(undefined8 *)(lVar7 + _DAT_112e56000) = 0;
  *(undefined8 *)(lVar7 + _DAT_112e56008) = 0;
  *(undefined8 *)(lVar7 + _DAT_112e56010) = 0;
  *(undefined8 *)(lVar7 + _DAT_112e56018) = 0;
  *(undefined8 *)(lVar7 + _DAT_112e56020) = 0;
  FUN_102098530();
  func_0x000107c613fc();
  func_0x000107c615f0(lVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(lVar12);
  lVar11 = lVar5;
  func_0x000107c61174(lVar5);
  lVar8 = lVar3;
  FUN_1020986ac(lVar3,lVar12,uVar4,lVar5);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar4);
  *(long *)(lVar7 + _DAT_112e56028) = lVar8;
  plVar9 = &lStack_70;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61154(plVar9,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar11);
  lVar11 = (long)plVar9 + _DAT_112e55ff8;
  func_0x000107c61428(lVar11,auStack_88,1,0);
  *(undefined ***)(lVar11 + 8) = &PTR_DAT_1104c64c8;
  func_0x000107c61604(lVar11);
  uVar4 = *(undefined8 *)((long)puVar13 + _DAT_112e56720);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  plVar10 = plVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (plVar10 != (long *)0x0) {
    func_0x000107c3e2c8(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(plVar10);
    lVar11 = *(long *)(unaff_x20 + _DAT_112e55ec0);
    *(long **)(unaff_x20 + _DAT_112e55ec0) = plVar9;
    func_0x000107c61170();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar13) + 0x68))();
    if (lVar11 == 0) {
      func_0x0001007d6c6c(2,0xd00000000000004b,0x800000010f060bd0,lVar2,&PTR_DAT_1104c6d40);
    }
    else {
      func_0x000107c3d614();
      func_0x000107c41c30(plVar9);
      func_0x000107c61170(lVar11);
    }
    func_0x000100083b20(alStack_b0);
    lVar2 = alStack_b0[0];
    func_0x000100083b20(alStack_b0);
    lVar11 = alStack_b0[0];
    lVar12 = 0;
    func_0x000102097a84();
    func_0x000107c613fc();
    *(long *)(lVar12 + 0x18) = lVar11;
    *(undefined8 *)(lVar12 + 0x20) = 0;
    *(long *)(lVar12 + 0x10) = lVar2;
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e55ef8);
    *(long *)(unaff_x20 + _DAT_112e55ef8) = lVar12;
    func_0x000107c61574(uVar4);
    FUN_10209b7b8();
    func_0x000100083b20(alStack_b0);
    uVar4 = *(undefined8 *)(alStack_b0[0] + 0x20);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(alStack_b0[0]);
    func_0x0001000d224c(alStack_b0);
    func_0x000107c61574(uVar4);
    plVar10 = alStack_b0;
    func_0x0001000a8868(plVar10,uStack_98);
    func_0x00010373542c(uStack_98,uStack_90,plVar10);
    func_0x0001000834e4(alStack_b0);
    FUN_10209b908();
    FUN_10209bf18();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(plVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10209b7b8);
  (*pcVar1)();
}



/* Entry: 10209b7b8; end: 10209b907;  */

/* WARNING: Possible PIC construction at 0x00010209b838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209b8dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010209b83c) */
/* WARNING: Removing unreachable block (ram,0x00010209b8e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209b7b8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  
  puVar1 = PTR___sytN_11034f1b0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e55ef8);
  if (lVar4 != 0) {
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112e55f08);
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c6157c(lVar4);
      puVar3 = &UNK_1104c6488;
      func_0x000107c613fc(&UNK_1104c6488,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar5 = &UNK_1104c6518;
      func_0x000107c613fc(&UNK_1104c6518,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar4;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      func_0x000107c6157c(lVar4);
      func_0x000100859150(0xd,4,0x38,4,0,0,&UNK_10da58b08,puVar5,puVar1 + 8);
    }
    else {
      func_0x000107c6157c(lVar4);
      func_0x000107c6157c(puVar5);
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fd50(puVar5,puVar1 + 8,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10209b908; end: 10209bf17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209b908(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long unaff_x20;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uStack_90;
  long alStack_88 [5];
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100083b20(alStack_88);
  lVar4 = alStack_88[0];
  lVar3 = alStack_88[0];
  func_0x000107c4ee78();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000100083b20(alStack_88);
    lVar3 = alStack_88[0];
    lVar5 = alStack_88[0];
    func_0x000107c3f770();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar4;
    if (lVar3 != 0) {
      lVar8 = lVar3;
      func_0x000107c41574();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar3 != 0) {
        func_0x000100083b20(alStack_88);
        lVar5 = alStack_88[0];
        lVar8 = alStack_88[0];
        func_0x000107c5b4b0();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10209bf18);
          (*pcVar1)();
        }
        lVar6 = lVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        lVar5 = lVar3;
        if (lVar6 != 0) {
          func_0x000100083b20(alStack_88);
          lVar5 = alStack_88[0];
          lVar8 = alStack_88[0];
          func_0x000107c43a80();
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          lVar5 = lVar8;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          if (lVar5 != 0) {
            func_0x000107c615f0(lVar4);
            func_0x000107c615f0(lVar5);
            func_0x000100083b20(alStack_88);
            uVar16 = *(undefined8 *)(alStack_88[0] + 0x10);
            func_0x000107c6157c(uVar16);
            func_0x000107c61574(alStack_88[0]);
            func_0x0001000d224c(alStack_88);
            func_0x000107c61574(uVar16);
            func_0x000107c615f0(lVar3);
            func_0x000107c615f0(lVar6);
            func_0x000100083b20(&uStack_90);
            uVar16 = uStack_90;
            func_0x000107c5d984();
            func_0x000107c61180();
            func_0x000107c61170(uStack_90);
            uVar7 = uVar16;
            func_0x000107c5faec();
            func_0x000107c61170(uVar16);
            lVar8 = 0;
            func_0x0001020abde4();
            func_0x000107c613fc();
            lVar2 = 0x112e55fd8;
            func_0x0001000285a8(0x112e55fd8,&UNK_10da58af0);
            func_0x000107c613fc();
            func_0x000107c615f0(lVar3);
            func_0x000107c615f0(lVar6);
            uVar16 = 1;
            func_0x00010008747c();
            *(undefined8 *)(lVar8 + 0x58) = uVar16;
            *(undefined8 *)(lVar8 + 0x60) = 0;
            *(undefined8 *)(lVar8 + 0x68) = 0;
            *(undefined8 *)(lVar8 + 0x70) = 0;
            puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
            FUN_1020a9bb0();
            *(undefined **)(lVar8 + 0x78) = puVar9;
            puVar9 = puVar12;
            FUN_101bb763c();
            *(undefined **)(lVar8 + 0x80) = puVar9;
            puVar9 = puVar12;
            FUN_1020a9ccc();
            *(undefined **)(lVar8 + 0x88) = puVar9;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            func_0x00010209dfb0(alStack_88,lVar8 + 0x10);
            *(long *)(lVar8 + 0x38) = lVar3;
            *(long *)(lVar8 + 0x40) = lVar6;
            *(undefined8 *)(lVar8 + 0x48) = uVar7;
            *(undefined8 *)(lVar8 + 0x50) = param_2;
            lVar10 = 0;
            func_0x0001020a2610();
            func_0x000107c613fc();
            func_0x000107c613fc(lVar2,*(undefined4 *)(lVar2 + 0x30),*(undefined2 *)(lVar2 + 0x34));
            uVar16 = 1;
            func_0x00010008747c();
            *(undefined8 *)(lVar10 + 0x30) = uVar16;
            pcVar11 = "GamesInProgressPresenceProvider";
            func_0x0001000c10c0();
            func_0x000107c61180();
            *(char **)(lVar10 + 0x38) = pcVar11;
            *(undefined8 *)(lVar10 + 0x48) = 0;
            *(undefined8 *)(lVar10 + 0x40) = 0;
            *(undefined8 *)(lVar10 + 0x58) = 0;
            *(undefined8 *)(lVar10 + 0x50) = 0;
            *(undefined8 *)(lVar10 + 0x60) = 0;
            func_0x0001020a9e88();
            func_0x0001000834e4(alStack_88);
            *(undefined **)(lVar10 + 0x68) = puVar12;
            *(long *)(lVar10 + 0x10) = lVar4;
            *(long *)(lVar10 + 0x18) = lVar3;
            *(long *)(lVar10 + 0x20) = lVar6;
            *(long *)(lVar10 + 0x28) = lVar5;
            lVar13 = 0;
            FUN_1020afe94();
            func_0x000107c613fc();
            *(long *)(lVar13 + 0x10) = lVar10;
            *(undefined ***)(lVar13 + 0x18) = &PTR_DAT_1104c6020;
            *(long *)(lVar13 + 0x20) = lVar8;
            *(undefined ***)(lVar13 + 0x28) = &PTR_DAT_1104c6000;
            *(long *)(lVar13 + 0x30) = lVar8;
            *(long *)(lVar13 + 0x38) = lVar10;
            uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112e55ec8);
            *(long *)(unaff_x20 + _DAT_112e55ec8) = lVar13;
            func_0x000107c6157c(lVar10);
            func_0x000107c6157c(lVar8);
            func_0x000107c6157c(lVar13);
            func_0x000107c61574(uVar16);
            uVar16 = *(undefined8 *)(lVar13 + 0x10);
            lVar2 = *(long *)(lVar13 + 0x18);
            func_0x000107c614f0(uVar16);
            (**(code **)(lVar2 + 8))();
            plVar14 = *(long **)(lVar13 + 0x20);
            lVar2 = *(long *)(lVar13 + 0x28);
            func_0x000107c614f0();
            (**(code **)(lVar2 + 8))();
            plVar15 = plVar14;
            func_0x0001006c733c();
            func_0x000107c61574(uVar16);
            func_0x000107c61574(plVar14);
            uVar16 = 0x112e55fe0;
            func_0x0001000285a8(0x112e55fe0,&UNK_10da58af8);
            uVar7 = 0x10209dc44;
            func_0x0001000bfde0(0x10209dc44,0,uVar16);
            func_0x000107c61574();
            func_0x00010209dff4();
            func_0x000104884898();
            func_0x000107c61574(uVar7);
            puVar12 = &UNK_1104c6488;
            func_0x000107c613fc(&UNK_1104c6488,0x18,7);
            func_0x000107c61614(puVar12 + 0x10);
            pcVar1 = FUN_10209e0a4;
            puVar9 = puVar12;
            (**(code **)(*plVar15 + 0x60))(FUN_10209e0a4);
            func_0x000107c61574(plVar15);
            func_0x000107c61574(puVar12);
            func_0x000107c614f0(pcVar1);
            uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112e55ed8);
            pcVar17 = *(code **)(puVar9 + 0x10);
            func_0x000107c6157c(uVar16);
            (*pcVar17)();
            func_0x000107c615e8(pcVar1);
            func_0x000107c61574(uVar16);
            lVar2 = *(long *)(lVar13 + 0x18);
            func_0x000107c614f0(*(undefined8 *)(lVar13 + 0x10));
            (**(code **)(lVar2 + 0x10))();
            lVar2 = *(long *)(lVar13 + 0x28);
            func_0x000107c614f0(*(undefined8 *)(lVar13 + 0x20));
            (**(code **)(lVar2 + 0x10))();
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar6);
            func_0x000107c615e8(lVar5);
            func_0x000107c61574(lVar13);
            return;
          }
          func_0x000107c615e8(lVar4);
          lVar4 = lVar3;
          lVar5 = lVar6;
        }
        func_0x000107c615e8(lVar4);
      }
    }
    func_0x000107c615e8(lVar5);
  }
  func_0x0001007d6c6c(3,0xd00000000000004a,0x800000010f060f50,lVar2,&PTR_DAT_1104c6d40);
  FUN_10209cb3c();
  return;
}



/* Entry: 10209bf18; end: 10209c047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209bf18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  uVar1 = uStack_48;
  func_0x000107c41284();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c4b2ec(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  uVar2 = uVar3;
  func_0x0001000bda74(uVar3);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  func_0x00010209904c(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  FUN_10209dd94(uVar1,uVar2,unaff_x20,uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e55ee0);
  *(undefined8 *)(unaff_x20 + _DAT_112e55ee0) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar3);
  FUN_102098c54();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 10209c048; end: 10209c06f; -[_TtC20GamesFriendsFeedImpl25GamesFriendsFeedPresenter present] */

void FUN_10209c048(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10209b320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10209c070; end: 10209c1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209c070(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = _DAT_112e55ec8;
  puVar6 = &uStack_170;
  lVar8 = *(long *)(unaff_x20 + _DAT_112e55ec8);
  if (lVar8 != 0) {
    uVar10 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c6157c(lVar8);
    FUN_1020afbd0(&uStack_170,uVar10,uVar1);
    func_0x000107c61574(lVar8);
    if (lStack_168 != 0) {
      uStack_c0 = uStack_170;
      lStack_b8 = lStack_168;
      lStack_88 = lStack_138;
      uStack_90 = uStack_140;
      uStack_78 = uStack_128;
      uStack_80 = uStack_130;
      uStack_68 = uStack_118;
      uStack_70 = uStack_120;
      uStack_58 = uStack_108;
      uStack_60 = uStack_110;
      uStack_a8 = uStack_158;
      uStack_b0 = puStack_160;
      uStack_98 = uStack_148;
      lStack_a0 = lStack_150;
      FUN_10209c1c4(&uStack_c0,param_1);
      uVar10 = 0x112e55fc8;
      puVar7 = &UNK_10da58ad8;
LAB_10209c114:
      FUN_10209df70(puVar6,uVar10,puVar7);
      return;
    }
    lVar9 = *(long *)(unaff_x20 + lVar9);
    if (lVar9 != 0) {
      func_0x000107c6157c(lVar9);
      func_0x0001020afd14(&uStack_100,uVar10,uVar1);
      func_0x000107c61574(lVar9);
      if (lStack_f8 != 0) {
        uStack_c0 = uStack_100;
        lStack_b8 = lStack_f8;
        uStack_a8 = uStack_e8;
        uStack_b0 = uStack_f0;
        uStack_98 = uStack_d8;
        lStack_a0 = lStack_e0;
        lStack_88 = lStack_c8;
        uStack_90 = uStack_d0;
        func_0x00010209c3c0(&uStack_c0,param_1);
        uVar10 = 0x112e55fc0;
        puVar7 = &UNK_10da58ad0;
        puVar6 = &uStack_100;
        goto LAB_10209c114;
      }
    }
  }
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  lVar8 = lVar9;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112e55f68)) +
              0x68))();
  if (lVar8 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000033,0x800000010f060ee0,lVar9,&PTR_DAT_1104c6d40);
  }
  else {
    func_0x000100083b20(&lStack_e0);
    uVar10 = *(undefined8 *)(lStack_e0 + _DAT_11306fa38);
    func_0x000107c6157c(uVar10);
    func_0x000107c61170(lStack_e0);
    func_0x0001000d224c(&uStack_158);
    func_0x000107c61574(uVar10);
    puVar6 = &uStack_158;
    func_0x0001000a8868(puVar6,uStack_140);
    uVar10 = param_1[9];
    uVar2 = param_1[10];
    lStack_168 = param_1[0xb];
    uVar3 = param_1[0xc];
    uStack_170 = param_1[0xd];
    uVar4 = param_1[0xe];
    uVar1 = param_1[0xf];
    uVar5 = param_1[0x10];
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    lStack_c8 = 0;
    uStack_b0 = 0;
    lStack_b8 = 0;
    lStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    lStack_88 = 0;
    lStack_e0 = 2;
    uStack_78 = 0;
    uStack_70 = CONCAT71(uStack_70._1_7_,6);
    puStack_160 = puVar6;
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x00010433a4c0(&uStack_130,uVar10,uVar2,lStack_168,uVar3,uStack_170,uVar4,0x19,0,uVar1,
                        uVar5);
    (**(code **)(lStack_138 + 8))
              (lVar8,uVar10,uVar2,&lStack_e0,&uStack_130,0,0,uStack_140,lStack_138);
    func_0x000107c61170(lVar8);
    FUN_10209df70(&uStack_130,0x112e55fd0,&UNK_10da58ae0);
    func_0x0001000834e4(&uStack_158);
  }
  return;
}



/* Entry: 10209c1c4; end: 10209c7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209c1c4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [80];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  lVar10 = lVar9;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112e55f68)) +
              0x68))();
  if (lVar10 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000033,0x800000010f060e60,lVar9,&PTR_DAT_1104c6d40);
  }
  else {
    func_0x000100083b20(&lStack_f0);
    uVar11 = *(undefined8 *)(lStack_f0 + _DAT_11306fa38);
    func_0x000107c6157c(uVar11);
    func_0x000107c61170(lStack_f0);
    func_0x0001000d224c(auStack_168);
    func_0x000107c61574(uVar11);
    func_0x0001000a8868();
    lVar9 = *param_1;
    lVar4 = param_1[1];
    lStack_b8 = param_1[7];
    lStack_c0 = param_1[6];
    lStack_a8 = param_1[9];
    lStack_b0 = param_1[8];
    lStack_98 = param_1[0xb];
    lStack_a0 = param_1[10];
    lStack_88 = param_1[0xd];
    lStack_90 = param_1[0xc];
    lStack_e8 = param_1[1];
    lStack_f0 = *param_1;
    lStack_d8 = param_1[3];
    lStack_e0 = param_1[2];
    lStack_c8 = param_1[5];
    lStack_d0 = param_1[4];
    uStack_80 = 2;
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar7 = *(undefined8 *)(param_2 + 0x70);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar8 = *(undefined8 *)(param_2 + 0x80);
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
    func_0x00010433a4c0(auStack_140,uVar11,uVar5,uVar1,uVar6,uVar2,uVar7,0x19,0,uVar3,uVar8);
    (**(code **)(lStack_148 + 8))
              (lVar10,lVar9,lVar4,&lStack_f0,auStack_140,0,0,uStack_150,lStack_148);
    func_0x000107c61170(lVar10);
    FUN_10209df70(auStack_140,0x112e55fd0,&UNK_10da58ae0);
    func_0x0001000834e4(auStack_168);
  }
  return;
}



/* Entry: 10209c7b4; end: 10209c823;  */

void FUN_10209c7b4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10209c824;
  plVar4[7] = (long)param_2;
  plVar4[8] = *param_2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar4[9] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[10] = lVar1;
  plVar4[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102096b38,lVar1,lVar2);
  return;
}



/* Entry: 10209c824; end: 10209c8df;  */

void FUN_10209c824(byte param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar1 = *(long *)(lVar4 + 0x30);
  *(long *)(lVar4 + 0x38) = unaff_x20;
  func_0x000107c615c0(lVar1);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    *(byte *)(lVar4 + 0x58) = param_1 & 1;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar3,lVar1);
    pcVar2 = FUN_10209c8e0;
  }
  else {
    func_0x000107c614ac();
    func_0x000100eea164();
    func_0x000107c5fca8(uVar3,unaff_x20);
    pcVar2 = (code *)0x10209c934;
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar3,lVar1);
  return;
}



/* Entry: 10209c8e0; end: 10209c977;  */

void FUN_10209c8e0(void)

{
  byte bVar1;
  long unaff_x22;
  
  bVar1 = *(byte *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  *(byte *)(unaff_x22 + 0x59) = (bVar1 ^ 0xff) & 1;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209c978,0,0);
  return;
}



/* Entry: 10209c978; end: 10209c9db;  */

void FUN_10209c978(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  func_0x000107c5fca8(uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209c9dc,uVar1,param_1);
  return;
}



/* Entry: 10209c9dc; end: 10209ca63;  */

void FUN_10209c9dc(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0x59);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  FUN_10209ca98(uVar4,uVar2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(lVar1);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c5fca8(uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209ca64,uVar4,uVar3);
  return;
}



/* Entry: 10209ca64; end: 10209ca97;  */

void FUN_10209ca64(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010209ca94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10209ca98; end: 10209cb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209ca98(ulong param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = param_1;
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
    lVar2 = param_1 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      *(byte *)(lVar2 + _DAT_112e55f00) = param_2 & 1;
      func_0x000107c61170();
    }
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    lVar2 = param_1 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_10209cb3c();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10209cb3c; end: 10209d233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209cb3c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  long unaff_x20;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
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
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
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
  undefined *puStack_70;
  
  lVar22 = unaff_x20;
  func_0x000107c614f0();
  uVar19 = *(ulong *)(unaff_x20 + _DAT_112e55ec0);
  if (uVar19 == 0) {
LAB_10209cd04:
    func_0x0001007d6c6c(3,0xd000000000000043,0x800000010f060e10,lVar22,&PTR_DAT_1104c6d40);
    return;
  }
  puVar8 = (undefined8 *)0x0;
  FUN_1020a0f04();
  uVar9 = uVar19;
  func_0x000107c61480();
  lVar24 = _DAT_112e55ed0;
  if (uVar9 == 0) goto LAB_10209cd04;
  lVar22 = *(long *)(*(long *)(unaff_x20 + _DAT_112e55ed0) + 0x10);
  func_0x000107c61174();
  puVar15 = puVar8;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar22 != 0) {
    uVar17 = uVar19;
    func_0x0001020baa88();
    lVar24 = *(long *)(unaff_x20 + lVar24);
    lVar22 = *(long *)(lVar24 + 0x10);
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar22 != 0) {
      puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(lVar24);
      func_0x0001020a57a0(0,lVar22,0);
      lVar26 = 0x20;
      puVar21 = puStack_70;
      while( true ) {
        lVar22 = lVar22 + -1;
        puVar15 = (undefined8 *)(lVar24 + lVar26);
        uStack_f8 = puVar15[1];
        uStack_100 = *puVar15;
        puStack_e8 = (undefined8 *)puVar15[3];
        uStack_f0 = puVar15[2];
        uStack_d8 = puVar15[5];
        uStack_e0 = puVar15[4];
        uStack_c8 = puVar15[7];
        uStack_d0 = puVar15[6];
        uStack_b8 = puVar15[9];
        uStack_c0 = puVar15[8];
        uStack_a8 = puVar15[0xb];
        uStack_b0 = puVar15[10];
        uStack_98 = puVar15[0xd];
        uStack_a0 = puVar15[0xc];
        uStack_88 = puVar15[0xf];
        uStack_90 = puVar15[0xe];
        uStack_80 = puVar15[0x10];
        FUN_10209956c(&uStack_100,&uStack_190);
        uVar25 = *(ulong *)(puVar21 + 0x10);
        puStack_70 = puVar21;
        if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar25) {
          func_0x0001020a57a0(1 < *(ulong *)(puVar21 + 0x18),uVar25 + 1,1);
        }
        puVar21 = puStack_70;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_110 = uStack_80;
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        uStack_158 = uStack_c8;
        uStack_160 = uStack_d0;
        uStack_148 = uStack_b8;
        uStack_150 = uStack_c0;
        uStack_138 = uStack_a8;
        uStack_140 = uStack_b0;
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        puStack_178 = puStack_e8;
        uStack_180 = uStack_f0;
        FUN_10209df44(&uStack_190);
        *(ulong *)(puVar21 + 0x10) = uVar25 + 1;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x28) = uStack_188;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x20) = uStack_190;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x58) = uStack_158;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x50) = uStack_160;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x68) = uStack_148;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x60) = uStack_150;
        *(undefined8 **)(puVar21 + uVar25 * 0x88 + 0x38) = puStack_178;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x30) = uStack_180;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x48) = uStack_168;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x40) = uStack_170;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0xa0) = uStack_110;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x88) = uStack_128;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x80) = uStack_130;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x98) = uStack_118;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x90) = uStack_120;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x78) = uStack_138;
        *(undefined8 *)(puVar21 + uVar25 * 0x88 + 0x70) = uStack_140;
        if (lVar22 == 0) break;
        lVar26 = lVar26 + 0x88;
      }
      func_0x000107c6142c(lVar24);
    }
    puVar10 = (undefined *)0x0;
    puVar15 = (undefined8 *)0x1;
    func_0x0001020a5264(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar25 = *(ulong *)(puVar10 + 0x10);
    puVar1 = (undefined8 *)(uVar25 + 1);
    puVar14 = puVar10;
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar25) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      puVar15 = puVar1;
      func_0x0001020a5264(puVar14,puVar1,1,puVar10);
    }
    *(undefined8 **)(puVar14 + 0x10) = puVar1;
    *(undefined8 *)(puVar14 + uVar25 * 0x28 + 0x20) = 0x72676f72705f6e69;
    *(undefined8 *)(puVar14 + uVar25 * 0x28 + 0x28) = 0xeb00000000737365;
    *(ulong *)(puVar14 + uVar25 * 0x28 + 0x30) = uVar17;
    *(undefined8 **)(puVar14 + uVar25 * 0x28 + 0x38) = puVar8;
    *(undefined **)(puVar14 + uVar25 * 0x28 + 0x40) = puVar21;
  }
  lVar22 = _DAT_112e55f00;
  lVar24 = *(long *)(unaff_x20 + _DAT_112e55ee8);
  uVar17 = *(ulong *)(lVar24 + 0x10);
  if (uVar17 != 0) {
    lVar26 = lVar24 + 0x20;
    func_0x000107c61434();
    uVar25 = 0;
    do {
      if (*(ulong *)(lVar24 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10209d214);
        (*pcVar7)();
      }
      plVar18 = (long *)(lVar26 + uVar25 * 0x28);
      puVar8 = (undefined8 *)*plVar18;
      puVar1 = (undefined8 *)plVar18[1];
      lVar3 = plVar18[2];
      lVar5 = plVar18[3];
      puVar23 = (undefined8 *)plVar18[4];
      lVar27 = puVar23[2];
      if (lVar27 == 0) {
        func_0x000107c61434(puVar1);
        func_0x000107c61434(lVar5);
        puVar11 = puVar23;
        func_0x000107c61434();
        puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c61434(puVar1);
        func_0x000107c61434(lVar5);
        func_0x000107c61434(puVar23);
        func_0x0001020a57a0(0,lVar27,0);
        puVar16 = puVar23 + 4;
        puVar21 = puStack_70;
        do {
          uStack_f8 = puVar16[1];
          uStack_100 = *puVar16;
          puStack_e8 = (undefined8 *)puVar16[3];
          uStack_f0 = puVar16[2];
          uStack_d8 = puVar16[5];
          uStack_e0 = puVar16[4];
          uStack_c8 = puVar16[7];
          uStack_d0 = puVar16[6];
          uStack_b8 = puVar16[9];
          uStack_c0 = puVar16[8];
          uStack_a8 = puVar16[0xb];
          uStack_b0 = puVar16[10];
          uStack_98 = puVar16[0xd];
          uStack_a0 = puVar16[0xc];
          uStack_88 = puVar16[0xf];
          uStack_90 = puVar16[0xe];
          uStack_80 = puVar16[0x10];
          puVar15 = &uStack_190;
          FUN_10209956c(&uStack_100);
          uVar20 = *(ulong *)(puVar21 + 0x10);
          puVar2 = (undefined8 *)(uVar20 + 1);
          puStack_70 = puVar21;
          if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar20) {
            puVar15 = puVar2;
            func_0x0001020a57a0(1 < *(ulong *)(puVar21 + 0x18),puVar2,1);
          }
          puVar21 = puStack_70;
          uStack_128 = uStack_98;
          uStack_130 = uStack_a0;
          uStack_118 = uStack_88;
          uStack_120 = uStack_90;
          uStack_110 = uStack_80;
          uStack_168 = uStack_d8;
          uStack_170 = uStack_e0;
          uStack_158 = uStack_c8;
          uStack_160 = uStack_d0;
          uStack_148 = uStack_b8;
          uStack_150 = uStack_c0;
          uStack_138 = uStack_a8;
          uStack_140 = uStack_b0;
          uStack_188 = uStack_f8;
          uStack_190 = uStack_100;
          puStack_178 = puStack_e8;
          uStack_180 = uStack_f0;
          puVar11 = &uStack_190;
          FUN_10209df44();
          *(undefined8 **)(puVar21 + 0x10) = puVar2;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x28) = uStack_188;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x20) = uStack_190;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x58) = uStack_158;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x50) = uStack_160;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x68) = uStack_148;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x60) = uStack_150;
          *(undefined8 **)(puVar21 + uVar20 * 0x88 + 0x38) = puStack_178;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x30) = uStack_180;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x48) = uStack_168;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x40) = uStack_170;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0xa0) = uStack_110;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x88) = uStack_128;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x80) = uStack_130;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x98) = uStack_118;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x90) = uStack_120;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x78) = uStack_138;
          *(undefined8 *)(puVar21 + uVar20 * 0x88 + 0x70) = uStack_140;
          puVar16 = puVar16 + 0x11;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (((*(byte *)(unaff_x20 + lVar22) & 1) != 0) &&
         ((puVar16 = puVar15,
          puVar8 == (undefined8 *)0xd00000000000001a && puVar1 == (undefined8 *)0x800000010f060b30
          || (puVar11 = puVar8, puVar15 = puVar1,
             func_0x000107c605b8(puVar8,puVar1,0xd00000000000001a,0x800000010f060b30,0),
             puVar16 = puVar15, ((ulong)puVar11 & 1) != 0)))) {
        FUN_1020b50a4();
        uVar4 = *puVar11;
        uVar6 = puVar11[1];
        uVar12 = uVar6;
        func_0x000107c61434();
        func_0x0001020ba824();
        uVar20 = *(ulong *)(puVar21 + 0x10);
        puVar10 = puVar21;
        func_0x000107c61558();
        if (((int)puVar10 == 0) || (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar20)) {
          func_0x0001020a5258();
          puVar21 = puVar10;
        }
        func_0x000107c61408(puVar21 + 0x20,0,&UNK_1104c7330);
        lVar27 = *(long *)(puVar21 + 0x10);
        puVar15 = (undefined8 *)(puVar21 + 0x20);
        func_0x000107c610b8(puVar21 + 0xa8,puVar15,lVar27 * 0x88);
        *(long *)(puVar21 + 0x10) = lVar27 + 1;
        uStack_e0 = 0;
        uStack_d8 = 0xe000000000000000;
        uStack_100 = uVar4;
        uStack_f8 = uVar6;
        uStack_f0 = uVar12;
        puStack_e8 = puVar16;
        func_0x00010209df58(&uStack_100);
        *(undefined8 *)(puVar21 + 0x88) = uStack_98;
        *(undefined8 *)(puVar21 + 0x80) = uStack_a0;
        *(undefined8 *)(puVar21 + 0x98) = uStack_88;
        *(undefined8 *)(puVar21 + 0x90) = uStack_90;
        *(undefined8 *)(puVar21 + 0xa0) = uStack_80;
        *(undefined8 *)(puVar21 + 0x48) = uStack_d8;
        *(undefined8 *)(puVar21 + 0x40) = uStack_e0;
        *(undefined8 *)(puVar21 + 0x58) = uStack_c8;
        *(undefined8 *)(puVar21 + 0x50) = uStack_d0;
        *(undefined8 *)(puVar21 + 0x68) = uStack_b8;
        *(undefined8 *)(puVar21 + 0x60) = uStack_c0;
        *(undefined8 *)(puVar21 + 0x78) = uStack_a8;
        *(undefined8 *)(puVar21 + 0x70) = uStack_b0;
        *(undefined8 *)(puVar21 + 0x28) = uStack_f8;
        *(undefined8 *)(puVar21 + 0x20) = uStack_100;
        *(undefined8 **)(puVar21 + 0x38) = puStack_e8;
        *(undefined8 *)(puVar21 + 0x30) = uStack_f0;
      }
      func_0x000107c6142c(puVar23);
      func_0x000107c61434(puVar21);
      puVar10 = puVar14;
      func_0x000107c61558();
      puVar13 = puVar14;
      if (((ulong)puVar10 & 1) == 0) {
        puVar15 = (undefined8 *)(*(long *)(puVar14 + 0x10) + 1);
        puVar13 = (undefined *)0x0;
        func_0x0001020a5264(0,puVar15,1,puVar14);
      }
      uVar20 = *(ulong *)(puVar13 + 0x10);
      puVar23 = (undefined8 *)(uVar20 + 1);
      puVar14 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar20) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        puVar15 = puVar23;
        func_0x0001020a5264(puVar14,puVar23,1,puVar13);
      }
      uVar25 = uVar25 + 1;
      *(undefined8 **)(puVar14 + 0x10) = puVar23;
      *(undefined8 **)(puVar14 + uVar20 * 0x28 + 0x20) = puVar8;
      *(undefined8 **)(puVar14 + uVar20 * 0x28 + 0x28) = puVar1;
      *(long *)(puVar14 + uVar20 * 0x28 + 0x30) = lVar3;
      *(long *)(puVar14 + uVar20 * 0x28 + 0x38) = lVar5;
      *(undefined **)(puVar14 + uVar20 * 0x28 + 0x40) = puVar21;
      func_0x000107c6142c(puVar21);
    } while (uVar25 != uVar17);
    func_0x000107c6142c();
  }
  if ((*(long *)(puVar14 + 0x10) == 0) && (*(char *)(unaff_x20 + _DAT_112e55ef0) == '\0')) {
    func_0x000107c4a714();
    if ((uVar9 & 1) == 0) {
      puVar21 = (undefined *)0x0;
      goto LAB_10209d1d8;
    }
    func_0x00010209e930();
    func_0x000107c5ba54();
    func_0x000107c61170(uVar9);
    FUN_10209f594(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x000107c61434(puVar14);
    func_0x000107c4a714();
    puVar21 = puVar14;
    if ((uVar9 & 1) != 0) {
      func_0x00010209e930();
      func_0x000107c5be00();
      func_0x000107c61170(uVar9);
      FUN_10209f594(puVar14);
      func_0x000107c61430(puVar14,2);
      goto LAB_10209d1e8;
    }
LAB_10209d1d8:
    func_0x000107c6142c(puVar14);
    puVar14 = puVar21;
  }
  func_0x000107c6142c(puVar14);
LAB_10209d1e8:
  func_0x000107c61170(uVar19);
  return;
}



/* Entry: 10209d234; end: 10209d29b;  */

void FUN_10209d234(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10209d29c;
  plVar4[2] = param_2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar4[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102096d4c,lVar1,lVar2);
  return;
}



/* Entry: 10209d29c; end: 10209d313;  */

void FUN_10209d29c(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined1 *)(lVar3 + 0x68) = param_1;
  func_0x000107c615c0();
  func_0x000100eea164();
  *(undefined8 *)(lVar3 + 0x48) = uVar1;
  func_0x000107c5fca8();
  *(undefined8 *)(lVar3 + 0x50) = uVar2;
  *(undefined8 *)(lVar3 + 0x58) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209d314,uVar2,uVar1);
  return;
}



/* Entry: 10209d314; end: 10209d373;  */

void FUN_10209d314(void)

{
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x68) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10209d374,0,0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010209d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10209d374; end: 10209d3db;  */

void FUN_10209d374(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10209d3dc,uVar2,uVar1);
  return;
}



/* Entry: 10209d3dc; end: 10209d47b;  */

void FUN_10209d3dc(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10209b7b8();
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10209d448,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10209d47c; end: 10209d4e3;  */

void FUN_10209d47c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  func_0x000107c5fcec(0);
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x000100f7a598(FUN_10209e0ac,auStack_50,
                      "GamesFriendsFeedImpl/GamesFriendsFeedPresenter.swift",0x34,2,0xf1);
  return;
}



/* Entry: 10209d4e4; end: 10209d597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209d4e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e55ed0);
    *(undefined8 *)(lVar1 + _DAT_112e55ed0) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10209cb3c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10209d598; end: 10209d723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209d598(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lStack_58;
  
  func_0x000107c614f0();
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001007d6c6c(2,0xd000000000000074,0x800000010f060ce0,unaff_x20,&PTR_DAT_1104c6d40);
  }
  else {
    puVar3 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar4 = puVar3;
    func_0x0001020bab54();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    uVar5 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f060d60);
    func_0x000107c409d8(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c5c2e0(lVar2);
    func_0x0001007d6c6c(3,0xd000000000000079,0x800000010f060d90,unaff_x20,&PTR_DAT_1104c6d40);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 10209d724; end: 10209d893;  */

void FUN_10209d724(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x000107c614f0(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(lVar3 + 0x18))();
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x000107c614f0(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(lVar3 + 0x18))();
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x38);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x40);
      lVar1 = lVar3;
      func_0x000107c614f0(lVar3);
      pcVar5 = *(code **)(lVar4 + 8);
      func_0x000107c615f0(lVar3);
      (*pcVar5)(lVar1,lVar4);
      func_0x000107c615e8(lVar3);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
    }
    *(long *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c5fcec(0);
  uStack_70 = param_3;
  FUN_10206cdec(FUN_10209e1bc,auStack_80,"GamesFriendsFeedImpl/GamesFriendsFeedPresenter.swift",0x34
                ,2,0x140);
  if (param_4 == 0) {
    func_0x000107c41868(param_5);
  }
  else {
    func_0x000107c5e37c(param_4);
    func_0x000107c41868(param_5);
    lVar3 = param_4;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10209d894);
      (*pcVar5)();
    }
    func_0x000107c4ff34();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c4ff2c(param_4);
  return;
}



/* Entry: 10209d894; end: 10209d8bf; -[_TtC20GamesFriendsFeedImpl25GamesFriendsFeedPresenter init] */

void FUN_10209d894(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesFriendsFeedImpl.GamesFriendsFeedPresenter",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10209d8c0);
  (*pcVar1)();
}



/* Entry: 10209d8c0; end: 10209da73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209d8c0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  iVar3 = (int)&uStack_160;
  FUN_10209de84();
  puVar4 = &uStack_160;
  func_0x000100ce0a60();
  lVar2 = _DAT_112e55f10;
  puVar1 = PTR___sytN_11034f1b0;
  if (iVar3 == 1) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112e55ef8);
    if (lVar9 != 0) {
      lVar10 = *(long *)(unaff_x20 + _DAT_112e55f10);
      if (lVar10 == 0) {
        func_0x000107c6157c(lVar9);
      }
      else {
        func_0x000107c6157c(lVar9);
        func_0x000107c6157c(lVar10);
        uVar7 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c5fd50(lVar10,puVar1 + 8,uVar7,PTR___ss5ErrorWS_11034ee10);
        func_0x000107c61574(lVar10);
      }
      puVar5 = &UNK_1104c6488;
      func_0x000107c613fc(&UNK_1104c6488,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1104c64b0;
      func_0x000107c613fc(&UNK_1104c64b0,0x20,7);
      *(long *)(puVar6 + 0x10) = lVar9;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      func_0x000107c6157c(lVar9);
      uVar7 = 0xd;
      func_0x000100859150(0xd,4,0x38,4,0,0,&UNK_10da58a58,puVar6,puVar1 + 8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(lVar9);
      uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = uVar7;
      func_0x000107c61574(uVar8);
    }
  }
  else {
    uStack_68 = puVar4[0xd];
    uStack_70 = puVar4[0xc];
    uStack_58 = puVar4[0xf];
    uStack_60 = puVar4[0xe];
    uStack_50 = puVar4[0x10];
    uStack_a8 = puVar4[5];
    uStack_b0 = puVar4[4];
    uStack_98 = puVar4[7];
    uStack_a0 = puVar4[6];
    uStack_88 = puVar4[9];
    uStack_90 = puVar4[8];
    uStack_78 = puVar4[0xb];
    uStack_80 = puVar4[10];
    uStack_c8 = puVar4[1];
    uStack_d0 = *puVar4;
    uStack_b8 = puVar4[3];
    uStack_c0 = puVar4[2];
    FUN_10209c070(&uStack_d0);
  }
  return;
}



/* Entry: 10209da74; end: 10209da77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209da74(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  iVar3 = (int)&uStack_160;
  FUN_10209de84();
  puVar4 = &uStack_160;
  func_0x000100ce0a60();
  lVar2 = _DAT_112e55f10;
  puVar1 = PTR___sytN_11034f1b0;
  if (iVar3 == 1) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112e55ef8);
    if (lVar9 != 0) {
      lVar10 = *(long *)(unaff_x20 + _DAT_112e55f10);
      if (lVar10 == 0) {
        func_0x000107c6157c(lVar9);
      }
      else {
        func_0x000107c6157c(lVar9);
        func_0x000107c6157c(lVar10);
        uVar7 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c5fd50(lVar10,puVar1 + 8,uVar7,PTR___ss5ErrorWS_11034ee10);
        func_0x000107c61574(lVar10);
      }
      puVar5 = &UNK_1104c6488;
      func_0x000107c613fc(&UNK_1104c6488,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1104c64b0;
      func_0x000107c613fc(&UNK_1104c64b0,0x20,7);
      *(long *)(puVar6 + 0x10) = lVar9;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      func_0x000107c6157c(lVar9);
      uVar7 = 0xd;
      func_0x000100859150(0xd,4,0x38,4,0,0,&UNK_10da58a58,puVar6,puVar1 + 8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(lVar9);
      uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = uVar7;
      func_0x000107c61574(uVar8);
    }
  }
  else {
    uStack_68 = puVar4[0xd];
    uStack_70 = puVar4[0xc];
    uStack_58 = puVar4[0xf];
    uStack_60 = puVar4[0xe];
    uStack_50 = puVar4[0x10];
    uStack_a8 = puVar4[5];
    uStack_b0 = puVar4[4];
    uStack_98 = puVar4[7];
    uStack_a0 = puVar4[6];
    uStack_88 = puVar4[9];
    uStack_90 = puVar4[8];
    uStack_78 = puVar4[0xb];
    uStack_80 = puVar4[10];
    uStack_c8 = puVar4[1];
    uStack_d0 = *puVar4;
    uStack_b8 = puVar4[3];
    uStack_c0 = puVar4[2];
    FUN_10209c070(&uStack_d0);
  }
  return;
}



/* Entry: 10209da78; end: 10209dbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209da78(long param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = _DAT_112e55ef0;
  cVar1 = *(char *)(param_1 + _DAT_112e55ef0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112e55ee8);
  *(undefined8 *)(param_1 + _DAT_112e55ee8) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar4);
  *(char *)(param_1 + lVar2) = param_3;
  if ((param_3 == '\x02') && (cVar1 != '\x02')) {
    func_0x000107c602fc(0x4d);
    func_0x000107c5fb78(0xd00000000000004a,0x800000010f060c90);
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    func_0x0001007d6c6c(3,0,0xe000000000000000,param_4,&PTR_DAT_1104c6d40);
    func_0x000107c6142c(0xe000000000000000);
    FUN_10209d598();
  }
  FUN_10209cb3c();
  return;
}



/* Entry: 10209dbc4; end: 10209dc97;  */

void FUN_10209dbc4(void)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  
  func_0x000107c614f0();
  uVar1 = 0;
  func_0x000107c5fcec(0);
  func_0x000100f7a598(0x10209df24,auStack_60,"GamesFriendsFeedImpl/GamesFriendsFeedPresenter.swift",
                      0x34,2,0x15a,uVar1);
  return;
}



/* Entry: 10209dc98; end: 10209dd93;  */

void FUN_10209dc98(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209dd88);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1020a54f0();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10209dd8c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10209dd90);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x88 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1104c71f8);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10209dd94);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10209dd94; end: 10209de83;  */

long FUN_10209dd94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  pcVar2 = "GamesFriendsFeedCuratedSectionsProvider";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(param_4 + 0x20) = pcVar2;
  *(undefined8 *)(param_4 + 0x30) = 0;
  func_0x000107c61614(param_4 + 0x28,0);
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x40) = 0;
  *(undefined ***)(param_4 + 0x30) = &PTR_DAT_1104c64d8;
  pbVar3 = (byte *)(param_4 + 0x28);
  func_0x000107c61604(pbVar3,param_3);
  func_0x0001033bf4b8();
  bVar1 = *pbVar3;
  uVar7 = *(undefined8 *)(pbVar3 + 8);
  uVar6 = 0x100;
  if (pbVar3[1] == 0) {
    uVar6 = 0;
  }
  func_0x000107c61434(uVar7);
  uVar4 = param_1;
  uVar5 = param_2;
  func_0x0001033bc5a8(param_1,param_2,0xc,uVar6 | bVar1,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(param_4 + 0x10) = uVar4;
  *(undefined8 *)(param_4 + 0x18) = uVar5;
  return param_4;
}



/* Entry: 10209de84; end: 10209de8f;  */

ulong FUN_10209de84(long param_1)

{
  return *(ulong *)(param_1 + 0x38) >> 0x3f;
}



/* Entry: 10209de90; end: 10209def3;  */

void FUN_10209de90(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10209e204;
  plVar4[5] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[6] = lVar2;
  func_0x000107c5fce8();
  plVar4[7] = lVar2;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  plVar4[8] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_10209d29c;
  plVar3[2] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar2;
  func_0x000107c5fce8();
  plVar3[3] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[4] = lVar2;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102096d4c,lVar2,lVar1);
  return;
}



/* Entry: 10209def4; end: 10209df03;  */

undefined1  [16] FUN_10209def4(void)

{
  return ZEXT816(0x1104c64f8);
}



/* Entry: 10209df04; end: 10209df43;  */

void FUN_10209df04(void)

{
  func_0x000107c61168(&PTR_PTR_11281cc80);
  return;
}



/* Entry: 10209df44; end: 10209df6f;  */

void FUN_10209df44(long param_1)

{
  *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) & 0x101;
  return;
}



/* Entry: 10209df70; end: 10209e063;  */

undefined8 FUN_10209df70(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10209e064; end: 10209e0a3;  */

void FUN_10209e064(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e55ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da592b8;
  func_0x000107c61520(&UNK_10da592b8,&UNK_1104c71f8);
  puRam0000000112e55ff0 = puVar1;
  return;
}



/* Entry: 10209e0a4; end: 10209e0ab;  */

void FUN_10209e0a4(void)

{
  undefined1 auStack_50 [16];
  
  func_0x000107c5fcec(0);
  func_0x000100f7a598(FUN_10209e0ac,auStack_50,
                      "GamesFriendsFeedImpl/GamesFriendsFeedPresenter.swift",0x34,2,0xf1);
  return;
}



/* Entry: 10209e0ac; end: 10209e0ef;  */

void FUN_10209e0ac(void)

{
  long unaff_x20;
  
  FUN_10209d4e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10209e0f0; end: 10209e153;  */

void FUN_10209e0f0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10209e154;
  plVar5[2] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar5[3] = lVar3;
  func_0x000107c5fce8();
  plVar5[4] = lVar3;
  func_0x000107c5fce8();
  plVar5[5] = lVar3;
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  plVar5[6] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10209c824;
  plVar4[7] = (long)plVar1;
  plVar4[8] = *plVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[9] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[10] = lVar2;
  plVar4[0xb] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102096b38,lVar2,lVar3);
  return;
}



/* Entry: 10209e154; end: 10209e18f;  */

void FUN_10209e154(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010209e18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10209e190; end: 10209e1bb;  */

void FUN_10209e190(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lVar7 != 0) {
    lVar4 = *(long *)(lVar7 + 0x18);
    func_0x000107c614f0(*(undefined8 *)(lVar7 + 0x10));
    (**(code **)(lVar4 + 0x18))();
    lVar4 = *(long *)(lVar7 + 0x28);
    func_0x000107c614f0(*(undefined8 *)(lVar7 + 0x20));
    (**(code **)(lVar4 + 0x18))();
  }
  if (lVar2 != 0) {
    lVar7 = *(long *)(lVar2 + 0x38);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      lVar8 = *(long *)(lVar2 + 0x40);
      lVar4 = lVar7;
      func_0x000107c614f0(lVar7);
      pcVar9 = *(code **)(lVar8 + 8);
      func_0x000107c615f0(lVar7);
      (*pcVar9)(lVar4,lVar8);
      func_0x000107c615e8(lVar7);
      uVar5 = *(undefined8 *)(lVar2 + 0x38);
    }
    *(long *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    func_0x000107c615e8(uVar5);
  }
  func_0x000107c5fcec(0);
  uStack_70 = uVar1;
  FUN_10206cdec(FUN_10209e1bc,auStack_80,"GamesFriendsFeedImpl/GamesFriendsFeedPresenter.swift",0x34
                ,2,0x140);
  if (lVar3 == 0) {
    func_0x000107c41868(uVar6);
  }
  else {
    func_0x000107c5e37c(lVar3);
    func_0x000107c41868(uVar6);
    lVar7 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10209d894);
      (*pcVar9)();
    }
    func_0x000107c4ff34();
    func_0x000107c61170(lVar7);
  }
  func_0x000107c4ff2c(lVar3);
  return;
}



/* Entry: 10209e1bc; end: 10209e203;  */

void FUN_10209e1bc(undefined8 param_1)

{
  bool bVar1;
  long unaff_x20;
  
  bVar1 = *(long *)(unaff_x20 + 0x10) == 0;
  if (!bVar1) {
    FUN_102097214();
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 10209e204; end: 10209e207;  */

void FUN_10209e204(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010209e18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10209e208; end: 10209e33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10209e208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112e55ff8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e56000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56008) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56010) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56018) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56020) = 0;
  FUN_102098530();
  func_0x000107c613fc();
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  uVar3 = param_1;
  FUN_1020986ac(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112e56028) = uVar3;
  func_0x000107c61154(auStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_1);
  return puVar4;
}



/* Entry: 10209e340; end: 10209e407;  */

void FUN_10209e340(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_1a8 [72];
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_f8 = unaff_x20[0xf];
  uStack_100 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[0x11];
  uStack_f0 = unaff_x20[0x10];
  uStack_e0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[7];
  uStack_140 = unaff_x20[6];
  uStack_128 = unaff_x20[9];
  uStack_130 = unaff_x20[8];
  uStack_118 = unaff_x20[0xb];
  uStack_120 = unaff_x20[10];
  uStack_108 = unaff_x20[0xd];
  uStack_110 = unaff_x20[0xc];
  uStack_158 = unaff_x20[3];
  uStack_160 = unaff_x20[2];
  uStack_148 = unaff_x20[5];
  uStack_150 = unaff_x20[4];
  func_0x000107c6068c(auStack_1a8,0);
  func_0x000107c5fb58(auStack_1a8,uVar1,uVar2);
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_50 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  FUN_10209de84(&uStack_160);
  puVar3 = &uStack_d0;
  func_0x000100ce0b0c();
  func_0x000107c5fb58(auStack_1a8,*puVar3,puVar3[1]);
  func_0x000107c606a8();
  return;
}



/* Entry: 10209e408; end: 10209e49f;  */

void FUN_10209e408(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
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
  
  uStack_d8 = unaff_x20[0xf];
  uStack_e0 = unaff_x20[0xe];
  uStack_c8 = unaff_x20[0x11];
  uStack_d0 = unaff_x20[0x10];
  uStack_c0 = unaff_x20[0x12];
  uStack_118 = unaff_x20[7];
  uStack_120 = unaff_x20[6];
  uStack_108 = unaff_x20[9];
  uStack_110 = unaff_x20[8];
  uStack_f8 = unaff_x20[0xb];
  uStack_100 = unaff_x20[10];
  uStack_e8 = unaff_x20[0xd];
  uStack_f0 = unaff_x20[0xc];
  uStack_138 = unaff_x20[3];
  uStack_140 = unaff_x20[2];
  uStack_128 = unaff_x20[5];
  uStack_130 = unaff_x20[4];
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
  uStack_40 = unaff_x20[0x10];
  uStack_30 = unaff_x20[0x12];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  FUN_10209de84(&uStack_140);
  puVar1 = &uStack_b0;
  func_0x000100ce0b0c();
  func_0x000107c5fb58(param_1,*puVar1,puVar1[1]);
  return;
}



/* Entry: 10209e4a0; end: 10209e563;  */

void FUN_10209e4a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_1a8 [72];
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_f8 = unaff_x20[0xf];
  uStack_100 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[0x11];
  uStack_f0 = unaff_x20[0x10];
  uStack_e0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[7];
  uStack_140 = unaff_x20[6];
  uStack_128 = unaff_x20[9];
  uStack_130 = unaff_x20[8];
  uStack_118 = unaff_x20[0xb];
  uStack_120 = unaff_x20[10];
  uStack_108 = unaff_x20[0xd];
  uStack_110 = unaff_x20[0xc];
  uStack_158 = unaff_x20[3];
  uStack_160 = unaff_x20[2];
  uStack_148 = unaff_x20[5];
  uStack_150 = unaff_x20[4];
  func_0x000107c6068c(auStack_1a8);
  func_0x000107c5fb58(auStack_1a8,uVar1,uVar2);
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_50 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  FUN_10209de84(&uStack_160);
  puVar3 = &uStack_d0;
  func_0x000100ce0b0c();
  func_0x000107c5fb58(auStack_1a8,*puVar3,puVar3[1]);
  func_0x000107c606a8();
  return;
}



/* Entry: 10209e564; end: 10209e9bf;  */

uint FUN_10209e564(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  puVar5 = &uStack_270;
  uVar3 = *param_1;
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_40 = param_2[0x12];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  if ((uVar3 != *param_2) || (param_1[1] != param_2[1])) {
    func_0x000107c605b8();
    uVar2 = 0;
    if ((uVar3 & 1) == 0) goto LAB_10209e6a0;
  }
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_160 = param_1[0x12];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  FUN_10209de84(&uStack_150);
  puVar4 = &uStack_1e0;
  func_0x000100ce0b0c();
  uVar3 = *puVar4;
  uVar1 = puVar4[1];
  uStack_208 = param_2[0xf];
  uStack_210 = param_2[0xe];
  uStack_1f8 = param_2[0x11];
  uStack_200 = param_2[0x10];
  uStack_1f0 = param_2[0x12];
  uStack_248 = param_2[7];
  uStack_250 = param_2[6];
  uStack_238 = param_2[9];
  uStack_240 = param_2[8];
  uStack_228 = param_2[0xb];
  uStack_230 = param_2[10];
  uStack_218 = param_2[0xd];
  uStack_220 = param_2[0xc];
  uStack_268 = param_2[3];
  uStack_270 = param_2[2];
  uStack_258 = param_2[5];
  uStack_260 = param_2[4];
  FUN_10209de84(&uStack_c0);
  func_0x000100ce0b0c();
  if ((uVar3 == *puVar5) && (uVar1 == puVar5[1])) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(uVar3,uVar1,*puVar5,puVar5[1],0);
    uVar2 = (uint)uVar3;
  }
LAB_10209e6a0:
  return uVar2 & 1;
}



/* Entry: 10209e9c0; end: 10209ea8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10209e9c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e56020;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e56020);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c5afb4(0x403e000000000000,0x403e000000000000);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c61170(puVar2);
    func_0x000107c5a050(puVar3,param_2,0);
    func_0x000107c5a378(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10209ea8c; end: 10209eabf; -[_TtC20GamesFriendsFeedImpl30GamesFriendsFeedViewController initWithCoder:] */

undefined8 FUN_10209ea8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001020a1638();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10209eac0; end: 10209ef7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209eac0(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef60);
    (*pcVar1)();
  }
  puVar3 = &DAT_112e56000;
  func_0x00010209e7f0(&DAT_112e56000,0x10209e6b8);
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = 0x112d360b8;
  FUN_1020a0e74(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar4 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  lVar8 = _DAT_112e56000;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e56000);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef64);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar4 + 0x20) = uVar9;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef68);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar4 + 0x28) = uVar9;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef6c);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar4 + 0x30) = uVar9;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef70);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar6 = lVar8;
  func_0x000107c3ec1c(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar4 + 0x38) = uVar9;
  uVar5 = 0;
  func_0x0001020a1978(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar8 = lVar4;
  func_0x000107c5fc48(lVar4,uVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(lVar8);
  func_0x00010209e930();
  func_0x000107c5ba54();
  func_0x000107c61170(lVar8);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  lVar8 = _DAT_112e56018;
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef74);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar4);
  func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                      *(ushort *)(lVar2 + 0x34) | 7);
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef78);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar10 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x20) = uVar10;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar8 = unaff_x20;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar2 + 0x28) = uVar10;
    lVar8 = lVar2;
    func_0x000107c5fc48(lVar2,uVar5);
    func_0x000107c61574(lVar2);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(lVar8);
    FUN_10209ef7c();
    FUN_10209f1d4();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10209ef7c);
  (*pcVar1)();
}



/* Entry: 10209ef7c; end: 10209f1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209ef7c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long extraout_x12;
  long unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  lVar4 = 0x112e56068;
  func_0x0001000285a8(0x112e56068,&UNK_10da58be8);
  lVar16 = *(long *)(lVar4 + -8);
  lVar15 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_68 = auStack_70 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)(auStack_70 + -(lVar15 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar5 = &DAT_112e56000;
  func_0x00010209e7f0(&DAT_112e56000,0x10209e6b8);
  puVar8 = &UNK_1104c66b0;
  puVar6 = puVar8;
  func_0x000107c613fc(&UNK_1104c66b0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  uVar7 = 0x112e56070;
  func_0x0001000285a8(0x112e56070,&UNK_10da58bf0);
  func_0x000107c610f8();
  func_0x000107c5f1b0(puVar5,FUN_1020a1708,puVar6,uVar7);
  lVar12 = _DAT_112e56008;
  puVar10 = *(undefined8 **)(unaff_x20 + _DAT_112e56008);
  *(undefined **)(unaff_x20 + _DAT_112e56008) = puVar5;
  func_0x000107c61170();
  func_0x0001020b7280();
  uVar7 = *puVar10;
  uVar1 = puVar10[1];
  func_0x000107c613fc(&UNK_1104c66b0,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  uVar9 = 0;
  FUN_1020b77f4(0);
  func_0x000107c61434(uVar1);
  func_0x000107c5ff98(lVar13,uVar7,uVar1,0x1020a1710,puVar8,uVar9);
  lVar12 = *(long *)(unaff_x20 + lVar12);
  if (lVar12 != 0) {
    puVar5 = &UNK_1104c66b0;
    func_0x000107c613fc(&UNK_1104c66b0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar2 = puStack_68;
    (**(code **)(lVar16 + 0x10))(puStack_68,lVar13,lVar4);
    uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar14 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
    puVar8 = &UNK_1104c66d8;
    func_0x000107c613fc(&UNK_1104c66d8,uVar14 + lVar15,uVar11 | 7);
    *(undefined **)(puVar8 + 0x10) = puVar5;
    (**(code **)(lVar16 + 0x20))(puVar8 + uVar14,puVar2,lVar4);
    func_0x000107c61174(lVar12);
    func_0x000107c6157c(puVar5);
    func_0x000107c5f1b4(FUN_1020a1718,puVar8);
    func_0x000107c61170(lVar12);
    (**(code **)(lVar16 + 8))(lVar13,lVar4);
    func_0x000107c61574(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10209f1d4);
  (*pcVar3)();
}



/* Entry: 10209f1d4; end: 10209f56b;  */

/* WARNING: Possible PIC construction at 0x00010209f224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010209f4f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010209f4a4) */
/* WARNING: Removing unreachable block (ram,0x00010209f448) */
/* WARNING: Removing unreachable block (ram,0x00010209f424) */
/* WARNING: Removing unreachable block (ram,0x00010209f408) */
/* WARNING: Removing unreachable block (ram,0x00010209f3a8) */
/* WARNING: Removing unreachable block (ram,0x00010209f568) */
/* WARNING: Removing unreachable block (ram,0x00010209f3dc) */
/* WARNING: Removing unreachable block (ram,0x00010209f384) */
/* WARNING: Removing unreachable block (ram,0x00010209f368) */
/* WARNING: Removing unreachable block (ram,0x00010209f320) */
/* WARNING: Removing unreachable block (ram,0x00010209f564) */
/* WARNING: Removing unreachable block (ram,0x00010209f34c) */
/* WARNING: Removing unreachable block (ram,0x00010209f2ec) */
/* WARNING: Removing unreachable block (ram,0x00010209f260) */
/* WARNING: Removing unreachable block (ram,0x00010209f228) */
/* WARNING: Removing unreachable block (ram,0x00010209f560) */
/* WARNING: Removing unreachable block (ram,0x00010209f244) */
/* WARNING: Removing unreachable block (ram,0x00010209f4f8) */

void FUN_10209f1d4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112e56010;
  func_0x00010209e7f0(&DAT_112e56010,0x10209e850);
  FUN_10209e9c0();
  func_0x000107c3d89c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10209f56c; end: 10209f593; -[_TtC20GamesFriendsFeedImpl30GamesFriendsFeedViewController viewDidLoad] */

void FUN_10209f56c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10209eac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10209f594; end: 1020a014b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10209f594(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  ulong *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long extraout_x8;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  long extraout_x12;
  undefined8 extraout_x13;
  long unaff_x20;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined *puVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long lStack_750;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
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
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
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
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_180;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f0;
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
  
  uVar11 = 0x112e560a0;
  func_0x0001000285a8(0x112e560a0,&UNK_10da58c10);
  lVar23 = *(long *)(uVar11 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = (long)&lStack_750 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar12 = *(long *)(unaff_x20 + _DAT_112e56008);
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a0134);
    (*pcVar9)();
  }
  lStack_750 = _DAT_112e56008;
  func_0x000107c61174();
  func_0x000107c5f1c4(lVar30);
  func_0x000107c61170(lVar12);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001020aa020();
  uVar14 = uVar11;
  func_0x000107c5f1a0();
  uVar32 = *(ulong *)(uVar14 + 0x10);
  if (uVar32 != 0) {
    uVar34 = 0;
    puVar26 = (undefined8 *)(uVar14 + 0x30);
    do {
      if (*(ulong *)(uVar14 + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a0128);
        (*pcVar9)();
      }
      uStack_338 = puVar26[-1];
      uStack_340 = puVar26[-2];
      uStack_328 = puVar26[1];
      uStack_330 = *puVar26;
      uStack_318 = puVar26[3];
      uStack_320 = puVar26[2];
      uStack_308 = puVar26[5];
      uStack_310 = puVar26[4];
      uStack_2f8 = puVar26[7];
      uStack_300 = puVar26[6];
      uStack_2e8 = puVar26[9];
      uStack_2f0 = puVar26[8];
      uStack_2d8 = puVar26[0xb];
      uStack_2e0 = puVar26[10];
      uStack_2c8 = puVar26[0xd];
      uStack_2d0 = puVar26[0xc];
      uStack_2b8 = puVar26[0xf];
      uStack_2c0 = puVar26[0xe];
      uStack_2b0 = puVar26[0x10];
      uStack_298 = puVar26[1];
      uStack_2a0 = *puVar26;
      uStack_288 = puVar26[3];
      uStack_290 = puVar26[2];
      uStack_278 = puVar26[5];
      uStack_280 = puVar26[4];
      uStack_268 = puVar26[7];
      uStack_270 = puVar26[6];
      uStack_258 = puVar26[9];
      uStack_260 = puVar26[8];
      uStack_248 = puVar26[0xb];
      uStack_250 = puVar26[10];
      uStack_238 = puVar26[0xd];
      uStack_240 = puVar26[0xc];
      uStack_228 = puVar26[0xf];
      uStack_230 = puVar26[0xe];
      uStack_220 = puVar26[0x10];
      FUN_1020a1820(&uStack_340,&puStack_3e0);
      FUN_1020a1820(&uStack_340,&puStack_3e0);
      uVar21 = 0;
      func_0x0001020a1854(&uStack_2a0);
      puVar20 = puVar13;
      func_0x000107c61558();
      uVar22 = (uint)puVar20;
      puVar25 = &uStack_340;
      puStack_3e0 = puVar13;
      FUN_1020a4ebc();
      uVar27 = (ulong)~(uint)uVar21 & 1;
      lVar12 = *(long *)(puVar13 + 0x10) + uVar27;
      if (SCARRY8(*(long *)(puVar13 + 0x10),uVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a012c);
        (*pcVar9)();
      }
      if (*(long *)(puVar13 + 0x18) < lVar12) {
        func_0x0001020a7180(lVar12);
        puVar25 = &uStack_340;
        FUN_1020a4ebc();
        if (((uint)uVar21 & 1) != (uVar22 & 1)) {
          func_0x000107c60624(&UNK_1104c6688);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a014c);
          (*pcVar9)();
        }
LAB_10209f7e4:
        if ((uVar21 & 1) == 0) goto LAB_10209f7ec;
LAB_10209f694:
        puVar13 = puStack_3e0;
        FUN_1020a193c(&uStack_2a0,*(long *)(puStack_3e0 + 0x38) + (long)puVar25 * 0x88);
        func_0x0001020a1890(&uStack_340);
        func_0x0001020a1890(&uStack_340);
      }
      else {
        if (((ulong)puVar20 & 1) != 0) goto LAB_10209f7e4;
        func_0x0001020a659c();
        if ((uVar21 & 1) != 0) goto LAB_10209f694;
LAB_10209f7ec:
        puVar13 = puStack_3e0;
        *(ulong *)(puStack_3e0 + ((ulong)puVar25 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_3e0 + ((ulong)puVar25 >> 6) * 8 + 0x40) |
             1L << ((ulong)puVar25 & 0x3f);
        puVar24 = (undefined8 *)(*(long *)(puStack_3e0 + 0x30) + (long)puVar25 * 0x98);
        puVar24[1] = uStack_338;
        *puVar24 = uStack_340;
        puVar24[3] = uStack_328;
        puVar24[2] = uStack_330;
        puVar24[9] = uStack_2f8;
        puVar24[8] = uStack_300;
        puVar24[0xb] = uStack_2e8;
        puVar24[10] = uStack_2f0;
        puVar24[5] = uStack_318;
        puVar24[4] = uStack_320;
        puVar24[7] = uStack_308;
        puVar24[6] = uStack_310;
        puVar24[0xd] = uStack_2d8;
        puVar24[0xc] = uStack_2e0;
        puVar24[0xf] = uStack_2c8;
        puVar24[0xe] = uStack_2d0;
        puVar24[0x11] = uStack_2b8;
        puVar24[0x10] = uStack_2c0;
        puVar24[0x12] = uStack_2b0;
        puVar25 = (undefined8 *)(*(long *)(puStack_3e0 + 0x38) + (long)puVar25 * 0x88);
        puVar25[0x10] = uStack_220;
        puVar25[0xd] = uStack_238;
        puVar25[0xc] = uStack_240;
        puVar25[0xf] = uStack_228;
        puVar25[0xe] = uStack_230;
        puVar25[0xb] = uStack_248;
        puVar25[10] = uStack_250;
        puVar25[1] = uStack_298;
        *puVar25 = uStack_2a0;
        puVar25[7] = uStack_268;
        puVar25[6] = uStack_270;
        puVar25[9] = uStack_258;
        puVar25[8] = uStack_260;
        puVar25[3] = uStack_288;
        puVar25[2] = uStack_290;
        puVar25[5] = uStack_278;
        puVar25[4] = uStack_280;
        func_0x0001020a1890(&uStack_340);
        if (SCARRY8(*(long *)(puVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a0130);
          (*pcVar9)();
        }
        *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
      }
      uVar34 = uVar34 + 1;
      puVar26 = puVar26 + 0x13;
    } while (uVar32 != uVar34);
  }
  func_0x000107c6142c(uVar14);
  FUN_1020a18bc();
  uVar32 = uVar14;
  func_0x0001020a18fc();
  func_0x000107c5f1ac(extraout_x13,&UNK_1104c7428,&UNK_1104c6688,uVar14,uVar32);
  lVar12 = *(long *)(param_1 + 0x10);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    lVar28 = 0;
    puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar26 = (undefined8 *)(param_1 + 0x20 + lVar28 * 0x28);
      lVar36 = puVar26[4];
      if (*(long *)(lVar36 + 0x10) != 0) {
        puVar16 = (undefined *)*puVar26;
        uVar2 = puVar26[1];
        uVar29 = puVar26[2];
        uVar3 = puVar26[3];
        lVar31 = 0x112e560b8;
        func_0x0001000285a8(0x112e560b8,&UNK_10da58c18);
        func_0x000107c613fc();
        *(undefined8 *)(lVar31 + 0x18) = 2;
        *(undefined8 *)(lVar31 + 0x10) = 1;
        *(undefined **)(lVar31 + 0x20) = puVar16;
        *(undefined8 *)(lVar31 + 0x28) = uVar2;
        *(undefined8 *)(lVar31 + 0x30) = uVar29;
        *(undefined8 *)(lVar31 + 0x38) = uVar3;
        func_0x000107c61438(uVar2,2);
        func_0x000107c61438(uVar3,2);
        func_0x000107c61434(lVar36);
        func_0x000107c5f19c(lVar31,uVar11);
        func_0x000107c61574(lVar31);
        lVar31 = *(long *)(lVar36 + 0x10);
        if (lVar31 == 0) {
          func_0x000107c6142c(lVar36);
        }
        else {
          puStack_6c0 = puVar33;
          func_0x0001020a577c(0,lVar31,0);
          lVar35 = 0x20;
          while( true ) {
            puVar33 = puStack_6c0;
            lVar31 = lVar31 + -1;
            puVar26 = (undefined8 *)(lVar36 + lVar35);
            uStack_628 = puVar26[1];
            puStack_630 = (undefined *)*puVar26;
            uStack_618 = puVar26[3];
            uStack_620 = puVar26[2];
            uStack_608 = puVar26[5];
            uStack_610 = puVar26[4];
            uStack_5f8 = puVar26[7];
            uStack_600 = puVar26[6];
            uStack_5e8 = puVar26[9];
            uStack_5f0 = puVar26[8];
            uStack_5d8 = puVar26[0xb];
            uStack_5e0 = puVar26[10];
            uStack_5c8 = puVar26[0xd];
            uStack_5d0 = puVar26[0xc];
            uStack_5b8 = puVar26[0xf];
            uStack_5c0 = puVar26[0xe];
            uStack_5b0 = puVar26[0x10];
            func_0x000107c61434(uVar2);
            func_0x0001020a1854(&puStack_630,&puStack_590);
            uVar14 = *(ulong *)(puVar33 + 0x10);
            puStack_6c0 = puVar33;
            if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar14) {
              func_0x0001020a577c(1 < *(ulong *)(puVar33 + 0x18),uVar14 + 1,1);
            }
            puVar33 = puStack_6c0;
            uStack_568 = uStack_608;
            uStack_570 = uStack_610;
            uStack_558 = uStack_5f8;
            uStack_560 = uStack_600;
            uStack_510 = uStack_5b0;
            uStack_528 = uStack_5c8;
            uStack_530 = uStack_5d0;
            uStack_518 = uStack_5b8;
            uStack_520 = uStack_5c0;
            uStack_548 = uStack_5e8;
            uStack_550 = uStack_5f0;
            uStack_538 = uStack_5d8;
            uStack_540 = uStack_5e0;
            uStack_588 = uStack_628;
            puStack_590 = puStack_630;
            uStack_578 = uStack_618;
            uStack_580 = uStack_620;
            *(ulong *)(puStack_6c0 + 0x10) = uVar14 + 1;
            *(undefined **)(puStack_6c0 + uVar14 * 0x98 + 0x20) = puVar16;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x28) = uVar2;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x38) = uStack_628;
            *(undefined **)(puStack_6c0 + uVar14 * 0x98 + 0x30) = puStack_630;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x68) = uStack_5f8;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x60) = uStack_600;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x78) = uStack_5e8;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x70) = uStack_5f0;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x48) = uStack_618;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x40) = uStack_620;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x58) = uStack_608;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x50) = uStack_610;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0xb0) = uStack_5b0;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x98) = uStack_5c8;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x90) = uStack_5d0;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0xa8) = uStack_5b8;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0xa0) = uStack_5c0;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x88) = uStack_5d8;
            *(undefined8 *)(puStack_6c0 + uVar14 * 0x98 + 0x80) = uStack_5e0;
            if (lVar31 == 0) break;
            lVar35 = lVar35 + 0x88;
          }
          func_0x000107c6142c(lVar36);
        }
        puStack_630 = puVar16;
        uStack_628 = uVar2;
        uStack_620 = uVar29;
        uStack_618 = uVar3;
        func_0x000107c5f194(puVar33,&puStack_630,uVar11);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar2);
        lVar36 = *(long *)(puVar33 + 0x10);
        if (lVar36 != 0) {
          puVar26 = (undefined8 *)(puVar33 + 0x20);
          do {
            uStack_3d8 = puVar26[1];
            puStack_3e0 = (undefined *)*puVar26;
            uStack_3c8 = puVar26[3];
            uStack_3d0 = puVar26[2];
            uStack_3b8 = puVar26[5];
            uStack_3c0 = puVar26[4];
            uStack_3a8 = puVar26[7];
            uStack_3b0 = puVar26[6];
            uStack_398 = puVar26[9];
            uStack_3a0 = puVar26[8];
            uStack_388 = puVar26[0xb];
            uStack_390 = puVar26[10];
            uStack_378 = puVar26[0xd];
            uStack_380 = puVar26[0xc];
            uStack_368 = puVar26[0xf];
            uStack_370 = puVar26[0xe];
            uStack_358 = puVar26[0x11];
            uStack_360 = puVar26[0x10];
            uStack_350 = puVar26[0x12];
            if (*(long *)(puVar13 + 0x10) != 0) {
              uVar14 = 0;
              FUN_1020a1820(&puStack_3e0);
              func_0x000107c61434(puVar13);
              ppuVar15 = &puStack_3e0;
              FUN_1020a4ebc();
              if ((uVar14 & 1) == 0) {
                func_0x0001020a1890(&puStack_3e0);
                func_0x000107c6142c(puVar13);
              }
              else {
                puVar25 = (undefined8 *)(*(long *)(puVar13 + 0x38) + (long)ppuVar15 * 0x88);
                uStack_6b8 = puVar25[1];
                puStack_6c0 = (undefined *)*puVar25;
                uStack_688 = puVar25[7];
                uStack_690 = puVar25[6];
                uStack_678 = puVar25[9];
                uStack_680 = puVar25[8];
                uStack_6a8 = puVar25[3];
                uStack_6b0 = puVar25[2];
                uStack_698 = puVar25[5];
                uStack_6a0 = puVar25[4];
                uStack_668 = puVar25[0xb];
                uStack_670 = puVar25[10];
                uStack_658 = puVar25[0xd];
                uStack_660 = puVar25[0xc];
                uStack_648 = puVar25[0xf];
                uStack_650 = puVar25[0xe];
                uStack_640 = puVar25[0x10];
                func_0x0001020a1854(&puStack_6c0,&puStack_630);
                func_0x000107c6142c(puVar13);
                uStack_1a8 = uStack_368;
                uStack_1b0 = uStack_370;
                uStack_198 = uStack_358;
                uStack_1a0 = uStack_360;
                uStack_190 = uStack_350;
                uStack_1e8 = uStack_3a8;
                uStack_1f0 = uStack_3b0;
                uStack_1d8 = uStack_398;
                uStack_1e0 = uStack_3a0;
                uStack_1b8 = uStack_378;
                uStack_1c0 = uStack_380;
                uStack_1c8 = uStack_388;
                uStack_1d0 = uStack_390;
                uStack_1f8 = uStack_3b8;
                uStack_200 = uStack_3c0;
                uStack_208 = uStack_3c8;
                uStack_210 = uStack_3d0;
                uStack_528 = uStack_658;
                uStack_530 = uStack_660;
                uStack_518 = uStack_648;
                uStack_520 = uStack_650;
                uStack_510 = uStack_640;
                uStack_568 = uStack_698;
                uStack_570 = uStack_6a0;
                uStack_558 = uStack_688;
                uStack_560 = uStack_690;
                uStack_548 = uStack_678;
                uStack_550 = uStack_680;
                uStack_538 = uStack_668;
                uStack_540 = uStack_670;
                uStack_588 = uStack_6b8;
                puStack_590 = puStack_6c0;
                uStack_578 = uStack_6a8;
                uStack_580 = uStack_6b0;
                iVar10 = (int)&puStack_6c0;
                FUN_10209de84();
                ppuVar15 = &puStack_590;
                func_0x000100ce0b0c();
                if (iVar10 == 1) {
                  puVar16 = *ppuVar15;
                  puVar4 = ppuVar15[1];
                  puVar19 = ppuVar15[2];
                  puVar5 = ppuVar15[3];
                  ppuVar18 = (undefined **)ppuVar15[4];
                  puVar6 = ppuVar15[5];
                  uStack_88 = uStack_1a8;
                  uStack_90 = uStack_1b0;
                  uStack_78 = uStack_198;
                  uStack_80 = uStack_1a0;
                  uStack_70 = uStack_190;
                  uStack_c8 = uStack_1e8;
                  uStack_d0 = uStack_1f0;
                  uStack_b8 = uStack_1d8;
                  uStack_c0 = uStack_1e0;
                  uStack_a8 = uStack_1c8;
                  uStack_b0 = uStack_1d0;
                  uStack_98 = uStack_1b8;
                  uStack_a0 = uStack_1c0;
                  uStack_e8 = uStack_208;
                  uStack_f0 = uStack_210;
                  uStack_d8 = uStack_1f8;
                  uStack_e0 = uStack_200;
                  iVar10 = (int)&uStack_f0;
                  FUN_10209de84();
                  puVar17 = &uStack_f0;
                  func_0x000100ce0b0c();
                  if (iVar10 == 1) {
                    puVar1 = (undefined *)puVar17[2];
                    puVar7 = (undefined *)puVar17[3];
                    ppuVar15 = (undefined **)puVar17[4];
                    puVar8 = (undefined *)puVar17[5];
                    if ((((puVar16 == (undefined *)*puVar17) && (puVar4 == (undefined *)puVar17[1]))
                        || (func_0x000107c605b8(puVar16,puVar4,(undefined *)*puVar17,
                                                (undefined *)puVar17[1],0),
                           ((ulong)puVar16 & 1) != 0)) &&
                       (((puVar19 == puVar1 && (puVar5 == puVar7)) ||
                        (func_0x000107c605b8(puVar19,puVar5,puVar1,puVar7,0),
                        ((ulong)puVar19 & 1) != 0)))) {
                      if ((ppuVar18 != ppuVar15) || (puVar6 != puVar8)) {
                        func_0x000107c605b8(ppuVar18,puVar6,ppuVar15,puVar8,0);
                        goto joined_r0x00010209fe94;
                      }
                      goto LAB_10209fe98;
                    }
                  }
                }
                else {
                  puStack_498 = ppuVar15[0xd];
                  puStack_4a0 = ppuVar15[0xc];
                  puStack_488 = ppuVar15[0xf];
                  puStack_490 = ppuVar15[0xe];
                  puStack_480 = ppuVar15[0x10];
                  puStack_4d8 = ppuVar15[5];
                  puStack_4e0 = ppuVar15[4];
                  puStack_4c8 = ppuVar15[7];
                  puStack_4d0 = ppuVar15[6];
                  puStack_4b8 = ppuVar15[9];
                  puStack_4c0 = ppuVar15[8];
                  puStack_4a8 = ppuVar15[0xb];
                  puStack_4b0 = ppuVar15[10];
                  puStack_4f8 = ppuVar15[1];
                  puStack_500 = *ppuVar15;
                  puStack_4e8 = ppuVar15[3];
                  puStack_4f0 = ppuVar15[2];
                  uStack_148 = uStack_1d8;
                  uStack_150 = uStack_1e0;
                  uStack_158 = uStack_1e8;
                  uStack_160 = uStack_1f0;
                  uStack_178 = uStack_208;
                  uStack_180 = uStack_210;
                  uStack_168 = uStack_1f8;
                  uStack_170 = uStack_200;
                  uStack_100 = uStack_190;
                  uStack_108 = uStack_198;
                  uStack_110 = uStack_1a0;
                  uStack_118 = uStack_1a8;
                  uStack_120 = uStack_1b0;
                  uStack_138 = uStack_1c8;
                  uStack_140 = uStack_1d0;
                  uStack_128 = uStack_1b8;
                  uStack_130 = uStack_1c0;
                  iVar10 = (int)&uStack_180;
                  FUN_10209de84();
                  puVar17 = &uStack_180;
                  func_0x000100ce0b0c();
                  if (iVar10 != 1) {
                    uStack_408 = puVar17[0xd];
                    uStack_410 = puVar17[0xc];
                    uStack_3f8 = puVar17[0xf];
                    uStack_400 = puVar17[0xe];
                    uStack_3f0 = puVar17[0x10];
                    uStack_448 = puVar17[5];
                    uStack_450 = puVar17[4];
                    uStack_438 = puVar17[7];
                    uStack_440 = puVar17[6];
                    uStack_428 = puVar17[9];
                    uStack_430 = puVar17[8];
                    uStack_418 = puVar17[0xb];
                    uStack_420 = puVar17[10];
                    uStack_468 = puVar17[1];
                    uStack_470 = *puVar17;
                    uStack_458 = puVar17[3];
                    uStack_460 = puVar17[2];
                    ppuVar18 = &puStack_500;
                    FUN_1020b4d68(ppuVar18,&uStack_470);
joined_r0x00010209fe94:
                    if (((ulong)ppuVar18 & 1) != 0) {
LAB_10209fe98:
                      func_0x0001020a17d0(&puStack_6c0);
                      func_0x0001020a1890(&puStack_3e0);
                      goto LAB_10209fb9c;
                    }
                  }
                }
                FUN_1020a1820(&puStack_3e0,&puStack_630);
                puVar16 = puVar20;
                func_0x000107c61558();
                puVar19 = puVar20;
                if (((ulong)puVar16 & 1) == 0) {
                  puVar19 = (undefined *)0x0;
                  FUN_1020a524c(0,*(long *)(puVar20 + 0x10) + 1,1,puVar20);
                }
                uVar14 = *(ulong *)(puVar19 + 0x10);
                puVar20 = puVar19;
                if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar14) {
                  puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar19 + 0x18));
                  FUN_1020a524c(puVar20,uVar14 + 1,1,puVar19);
                }
                *(ulong *)(puVar20 + 0x10) = uVar14 + 1;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x28) = uStack_3d8;
                *(undefined **)(puVar20 + uVar14 * 0x98 + 0x20) = puStack_3e0;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x38) = uStack_3c8;
                *(ulong *)(puVar20 + uVar14 * 0x98 + 0x30) = uStack_3d0;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x68) = uStack_398;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x60) = uStack_3a0;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x78) = uStack_388;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x70) = uStack_390;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x48) = uStack_3b8;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x40) = uStack_3c0;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x58) = uStack_3a8;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x50) = uStack_3b0;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0xb0) = uStack_350;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x98) = uStack_368;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x90) = uStack_370;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0xa8) = uStack_358;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0xa0) = uStack_360;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x88) = uStack_378;
                *(undefined8 *)(puVar20 + uVar14 * 0x98 + 0x80) = uStack_380;
                func_0x0001020a17d0(&puStack_6c0);
                func_0x0001020a1890(&puStack_3e0);
              }
            }
LAB_10209fb9c:
            puVar26 = puVar26 + 0x13;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
        }
        func_0x000107c6142c(puVar33);
        puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar12);
  }
  if (*(long *)(puVar20 + 0x10) != 0) {
    func_0x000107c5f1a4(puVar20,uVar11);
  }
  uVar14 = uVar11;
  func_0x000107c5f198();
  uVar32 = uVar11;
  func_0x000107c5f1a0();
  uVar34 = uVar11;
  func_0x000107c5f1a0(uVar11);
  uVar21 = uVar32;
  FUN_1020a42a8(uVar32,uVar34);
  func_0x000107c6142c(uVar32);
  func_0x000107c6142c(uVar34);
  uVar32 = uVar11;
  func_0x000107c5f1a8();
  uVar34 = uVar11;
  func_0x000107c5f1a8(uVar11);
  uVar27 = uVar32;
  FUN_1020a4440(uVar32,uVar34);
  func_0x000107c6142c(uVar32);
  func_0x000107c6142c(uVar34);
  if (((uVar21 & 1) == 0) || ((uVar27 & 1) == 0)) {
    if ((long)uVar14 < 1) goto LAB_1020a008c;
    lVar12 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a013c);
      (*pcVar9)();
    }
    lVar28 = lVar12;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar28 == 0) {
      uVar29 = 0;
    }
    else {
      func_0x000107c61170(lVar28);
      uVar29 = 1;
    }
  }
  else {
    if (*(long *)(puVar20 + 0x10) == 0) goto LAB_1020a00cc;
LAB_1020a008c:
    uVar29 = 0;
  }
  lVar12 = *(long *)(unaff_x20 + lStack_750);
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a0138);
    (*pcVar9)();
  }
  func_0x000107c61174();
  func_0x000107c5f1c0(extraout_x13,uVar29,0,0);
  func_0x000107c61170(lVar12);
LAB_1020a00cc:
  pcVar9 = *(code **)(lVar23 + 8);
  (*pcVar9)(extraout_x13,uVar11);
  (*pcVar9)(lVar30,uVar11);
  func_0x000107c6142c(puVar13);
  func_0x000107c6142c(puVar20);
  return;
}



/* Entry: 1020a014c; end: 1020a0227; -[_TtC20GamesFriendsFeedImpl30GamesFriendsFeedViewController viewDidLayoutSubviews] */

void FUN_1020a014c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewDidLayoutSubviews_112684cc8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar3);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  puVar3 = &DAT_112e56010;
  func_0x00010209e7f0(&DAT_112e56010,0x10209e850);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x00010085b3c8(0x4010000000000000,0x3fd3333333333333,0,0x4008000000000000,puVar2,puVar3,
                      puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020a0228; end: 1020a022b; -[_TtC20GamesFriendsFeedImpl30GamesFriendsFeedViewController gamesFabTapped] */

void FUN_1020a0228(void)

{
  return;
}



/* Entry: 1020a022c; end: 1020a08b3;  */

undefined * FUN_1020a022c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar2 = PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSCollectionLayoutDimension_1126cd3c0);
  puVar3 = puVar2;
  func_0x000107c438d0(0x3ff0000000000000);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c42a74(0x404e000000000000,puVar2);
  func_0x000107c61180();
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSCollectionLayoutSize_1126cd3b8;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5b0a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSCollectionLayoutItem_1126cd3c8;
  func_0x000107c61168();
  func_0x000107c4a7cc();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSCollectionLayoutGroup_1126cd3d0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSCollectionLayoutGroup_1126cd3d0);
  lVar7 = 0x112e56080;
  FUN_1020a0e74(0x112e56080,&PTR__OBJC_CLASS___NSCollectionLayoutItem_1126cd3c8,0x112e56098,
                &UNK_10da58c08);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 3;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined **)(lVar7 + 0x20) = puVar3;
  uVar8 = 0;
  func_0x0001020a1978(0,0x112e56080,&PTR__OBJC_CLASS___NSCollectionLayoutItem_1126cd3c8);
  func_0x000107c61174(puVar3);
  lVar9 = lVar7;
  func_0x000107c5fc48(lVar7,uVar8);
  func_0x000107c61574(lVar7);
  func_0x000107c5dd34(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  puVar10 = PTR__OBJC_CLASS___NSCollectionLayoutSection_1126cd3e0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSCollectionLayoutSection_1126cd3e0);
  func_0x000107c51b9c();
  func_0x000107c61180();
  func_0x000107c5382c(0,0,0x4028000000000000,0);
  puVar11 = puVar2;
  func_0x000107c438d0(0x3ff0000000000000,puVar2);
  func_0x000107c61180();
  func_0x000107c42a74(0x4046000000000000,puVar2);
  func_0x000107c61180();
  func_0x000107c5b0a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  puVar12 = puVar5;
  func_0x0001020b7280();
  uVar8 = *puVar12;
  uVar1 = puVar12[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar8,uVar1);
  func_0x000107c6142c(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSCollectionLayoutBoundarySupplementaryItem_1126cd3e8;
  func_0x000107c61168();
  func_0x000107c3ec54();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  lVar7 = 0x112e56088;
  FUN_1020a0e74(0x112e56088,&PTR__OBJC_CLASS___NSCollectionLayoutBoundarySupplementaryItem_1126cd3e8
                ,0x112e56090,&UNK_10da58c00);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 3;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined **)(lVar7 + 0x20) = puVar2;
  uVar8 = 0;
  func_0x0001020a1978(0,0x112e56088,
                      &PTR__OBJC_CLASS___NSCollectionLayoutBoundarySupplementaryItem_1126cd3e8);
  func_0x000107c61174(puVar2);
  lVar9 = lVar7;
  func_0x000107c5fc48(lVar7,uVar8);
  func_0x000107c61574(lVar7);
  func_0x000107c52e3c(puVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar9);
  return puVar10;
}



/* Entry: 1020a08b4; end: 1020a097b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020a08b4(void)

{
  code *pcVar1;
  long lVar2;
  long in_x4;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(in_x4 + 0x10,auStack_78,0,0);
  in_x4 = in_x4 + 0x10;
  func_0x000107c61618();
  if (in_x4 != 0) {
    lVar3 = *(long *)(in_x4 + _DAT_112e56008);
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(in_x4);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a097c);
      (*pcVar1)();
    }
    func_0x000107c5eff4();
    func_0x000107c5f1bc(auStack_60);
    func_0x000107c61170(lVar2);
    if (lStack_58 != 0) {
      FUN_1020b76e8(uStack_50,uStack_48);
      func_0x000107c6142c(uStack_48);
      func_0x000107c6142c(lStack_58);
    }
  }
  return;
}



/* Entry: 1020a097c; end: 1020a0a27;  */

undefined8 FUN_1020a097c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  long in_x4;
  undefined8 in_x5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(in_x4 + 0x10,auStack_48,0,0);
  in_x4 = in_x4 + 0x10;
  func_0x000107c61618();
  if (in_x4 == 0) {
    in_x5 = 0;
  }
  else {
    puVar1 = &DAT_112e56000;
    func_0x00010209e7f0(&DAT_112e56000,0x10209e6b8);
    func_0x000107c61170(in_x4);
    uVar2 = 0;
    FUN_1020b77f4(0);
    func_0x000107c5ffa0(in_x5,in_x3,uVar2);
    func_0x000107c61170(puVar1);
  }
  return in_x5;
}



/* Entry: 1020a0a28; end: 1020a0a87; -[_TtC20GamesFriendsFeedImpl30GamesFriendsFeedViewController initWithNibName:bundle:] */

void FUN_1020a0a28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesFriendsFeedImpl.GamesFriendsFeedViewController",0x33,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a0a54);
  (*pcVar1)();
}



/* Entry: 1020a0a88; end: 1020a0b0f; -[_TtC20GamesFriendsFeedImpl30GamesFriendsFeedViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020a0ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a0ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a0ac8) */
/* WARNING: Removing unreachable block (ram,0x0001020a0ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020a0a88(long param_1)

{
  FUN_1020a16e4(param_1 + _DAT_112e55ff8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e56028));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56000));
  return;
}



/* Entry: 1020a0b10; end: 1020a0d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020a0b10(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_2b8 [24];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
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
  undefined8 uStack_200;
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
  
  uVar3 = param_1;
  func_0x000107c5efd4();
  func_0x000107c41814(param_1);
  func_0x000107c61170(uVar3);
  lVar4 = *(long *)(unaff_x20 + _DAT_112e56008);
  if (lVar4 != 0) {
    func_0x000107c61174();
    func_0x000107c5f1b8(&uStack_168,param_2);
    func_0x000107c61170(lVar4);
    uStack_238 = uStack_100;
    uStack_240 = uStack_108;
    uStack_228 = uStack_f0;
    uStack_230 = uStack_f8;
    uStack_218 = uStack_e0;
    uStack_220 = uStack_e8;
    uStack_278 = uStack_140;
    uStack_280 = uStack_148;
    uStack_268 = uStack_130;
    uStack_270 = uStack_138;
    uStack_258 = uStack_120;
    uStack_260 = uStack_128;
    uStack_248 = uStack_110;
    uStack_250 = uStack_118;
    uStack_298 = uStack_160;
    uStack_2a0 = uStack_168;
    uStack_288 = uStack_150;
    uStack_290 = uStack_158;
    uStack_198 = uStack_100;
    uStack_1a0 = uStack_108;
    uStack_188 = uStack_f0;
    uStack_190 = uStack_f8;
    uStack_178 = uStack_e0;
    uStack_180 = uStack_e8;
    uStack_1d8 = uStack_140;
    uStack_1e0 = uStack_148;
    uStack_1c8 = uStack_130;
    uStack_1d0 = uStack_138;
    uStack_1b8 = uStack_120;
    uStack_1c0 = uStack_128;
    uStack_1a8 = uStack_110;
    uStack_1b0 = uStack_118;
    uStack_210 = uStack_d8;
    uStack_170 = uStack_d8;
    uStack_1f8 = uStack_160;
    uStack_200 = uStack_168;
    uStack_1e8 = uStack_150;
    uStack_1f0 = uStack_158;
    iVar2 = (int)&uStack_2a0;
    FUN_1020a0eec();
    if (iVar2 != 1) {
      lVar4 = unaff_x20 + _DAT_112e55ff8;
      func_0x000107c61428(lVar4,auStack_2b8,0,0);
      lVar5 = lVar4;
      func_0x000107c61618();
      if (lVar5 == 0) {
        FUN_1020a1790(&uStack_2a0,0x112e56030,&UNK_10da58b10);
      }
      else {
        lVar6 = *(long *)(lVar4 + 8);
        lVar4 = lVar5;
        func_0x000107c614f0();
        uStack_68 = uStack_188;
        uStack_70 = uStack_190;
        uStack_58 = uStack_178;
        uStack_60 = uStack_180;
        uStack_50 = uStack_170;
        uStack_a8 = uStack_1c8;
        uStack_b0 = uStack_1d0;
        uStack_98 = uStack_1b8;
        uStack_a0 = uStack_1c0;
        uStack_88 = uStack_1a8;
        uStack_90 = uStack_1b0;
        uStack_78 = uStack_198;
        uStack_80 = uStack_1a0;
        uStack_c8 = uStack_1e8;
        uStack_d0 = uStack_1f0;
        uStack_b8 = uStack_1d8;
        uStack_c0 = uStack_1e0;
        (**(code **)(lVar6 + 8))(&uStack_d0,lVar4,lVar6);
        FUN_1020a1790(&uStack_2a0,0x112e56030,&UNK_10da58b10);
        func_0x000107c615e8(lVar5);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a0d2c);
  (*pcVar1)();
}



/* Entry: 1020a0d2c; end: 1020a0deb; -[_TtC20GamesFriendsFeedImpl30GamesFriendsFeedViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_1020a0d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1020a0b10(param_3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1020a0dec; end: 1020a0e4f;  */

void FUN_1020a0dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1020a0e50; end: 1020a0e73;  */

void FUN_1020a0e50(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e560c0;
  plVar5 = (long *)&UNK_10da58c20;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001020a1978(0,0x112e55eb0,&PTR_PTR_1126ccc38);
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



/* Entry: 1020a0e74; end: 1020a0eeb;  */

void FUN_1020a0e74(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001020a1978(0,param_1,param_2);
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



/* Entry: 1020a0eec; end: 1020a0f03;  */

int FUN_1020a0eec(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020a0f04; end: 1020a0f23;  */

void FUN_1020a0f04(void)

{
  func_0x000107c61168(&PTR_PTR_11281ce10);
  return;
}



/* Entry: 1020a0f24; end: 1020a0f2b;  */

void FUN_1020a0f24(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1020a0f2c; end: 1020a0f93;  */

undefined8 * FUN_1020a0f2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020a0f94; end: 1020a1083;  */

int FUN_1020a0f94(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 1020a1084; end: 1020a10af;  */

long FUN_1020a1084(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1020a10b0; end: 1020a1153;  */

/* WARNING: Possible PIC construction at 0x0001020a10f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a1100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a1118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a1134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a111c) */
/* WARNING: Removing unreachable block (ram,0x0001020a1104) */
/* WARNING: Removing unreachable block (ram,0x0001020a10f4) */
/* WARNING: Removing unreachable block (ram,0x0001020a1138) */

void FUN_1020a10b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_x7;
  undefined8 in_stack_00000040;
  
  if (in_x7 < 0) {
    func_0x000107c61434(param_2);
    in_stack_00000040 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_stack_00000040);
  return;
}



/* Entry: 1020a1154; end: 1020a11ab;  */

void FUN_1020a1154(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  FUN_1020a11ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                *(undefined8 *)(param_1 + 0x90));
  return;
}



/* Entry: 1020a11ac; end: 1020a14a7;  */

/* WARNING: Possible PIC construction at 0x0001020a11f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a1204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a1214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a1224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a1218) */
/* WARNING: Removing unreachable block (ram,0x0001020a1208) */
/* WARNING: Removing unreachable block (ram,0x0001020a11f4) */
/* WARNING: Removing unreachable block (ram,0x0001020a1200) */
/* WARNING: Removing unreachable block (ram,0x0001020a1228) */
/* WARNING: Removing unreachable block (ram,0x0001020a1234) */

void FUN_1020a11ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1020a14a8; end: 1020a1537;  */

undefined8 * FUN_1020a14a8(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar3 = param_2[1];
  uVar8 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar8);
  uVar9 = param_2[0x12];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar8 = param_1[4];
  uVar5 = param_1[5];
  uVar1 = param_1[6];
  uVar6 = param_1[7];
  uVar2 = param_1[8];
  uVar7 = param_1[9];
  uVar12 = param_1[0xb];
  uVar11 = param_1[10];
  uVar14 = param_1[0xd];
  uVar13 = param_1[0xc];
  uVar16 = param_1[0xf];
  uVar15 = param_1[0xe];
  uVar18 = param_1[0x11];
  uVar17 = param_1[0x10];
  uVar10 = param_1[0x12];
  uVar19 = param_2[2];
  uVar21 = param_2[5];
  uVar20 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar19;
  param_1[5] = uVar21;
  param_1[4] = uVar20;
  uVar19 = param_2[6];
  uVar21 = param_2[9];
  uVar20 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar19;
  param_1[9] = uVar21;
  param_1[8] = uVar20;
  uVar19 = param_2[10];
  uVar21 = param_2[0xd];
  uVar20 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar19;
  param_1[0xd] = uVar21;
  param_1[0xc] = uVar20;
  uVar19 = param_2[0xe];
  uVar21 = param_2[0x11];
  uVar20 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar19;
  param_1[0x11] = uVar21;
  param_1[0x10] = uVar20;
  param_1[0x12] = uVar9;
  FUN_1020a11ac(uVar3,uVar4,uVar8,uVar5,uVar1,uVar6,uVar2,uVar7,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar10);
  return param_1;
}



/* Entry: 1020a1538; end: 1020a15f7;  */

int FUN_1020a1538(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020a15f8; end: 1020a16e3;  */

void FUN_1020a15f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e56060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da58b80;
  func_0x000107c61520(&UNK_10da58b80,&UNK_1104c6688);
  puRam0000000112e56060 = puVar1;
  return;
}



/* Entry: 1020a16e4; end: 1020a1707;  */

undefined8 FUN_1020a16e4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1020a1708; end: 1020a1717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020a1708(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
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
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  
  uStack_88 = *(undefined8 *)(param_3 + 0x78);
  uStack_90 = *(undefined8 *)(param_3 + 0x70);
  uStack_78 = *(undefined8 *)(param_3 + 0x88);
  uStack_80 = *(undefined8 *)(param_3 + 0x80);
  uStack_70 = *(undefined8 *)(param_3 + 0x90);
  uStack_c8 = *(undefined8 *)(param_3 + 0x38);
  uStack_d0 = *(undefined8 *)(param_3 + 0x30);
  uStack_b8 = *(undefined8 *)(param_3 + 0x48);
  uStack_c0 = *(undefined8 *)(param_3 + 0x40);
  uStack_a8 = *(undefined8 *)(param_3 + 0x58);
  uStack_b0 = *(undefined8 *)(param_3 + 0x50);
  uStack_98 = *(undefined8 *)(param_3 + 0x68);
  uStack_a0 = *(undefined8 *)(param_3 + 0x60);
  uStack_e8 = *(undefined8 *)(param_3 + 0x18);
  uStack_f0 = *(undefined8 *)(param_3 + 0x10);
  uStack_d8 = *(undefined8 *)(param_3 + 0x28);
  uStack_e0 = *(undefined8 *)(param_3 + 0x20);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_108,0,0);
  lVar8 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(long *)(lVar8 + _DAT_112e56028);
    func_0x000107c6157c(lVar9);
    func_0x000107c61170(lVar8);
    uStack_128 = *(undefined8 *)(param_3 + 0x78);
    uStack_130 = *(undefined8 *)(param_3 + 0x70);
    uStack_118 = *(undefined8 *)(param_3 + 0x88);
    uStack_120 = *(undefined8 *)(param_3 + 0x80);
    uStack_110 = *(undefined8 *)(param_3 + 0x90);
    uStack_168 = *(undefined8 *)(param_3 + 0x38);
    uStack_170 = *(undefined8 *)(param_3 + 0x30);
    uStack_158 = *(undefined8 *)(param_3 + 0x48);
    uStack_160 = *(undefined8 *)(param_3 + 0x40);
    uStack_148 = *(undefined8 *)(param_3 + 0x58);
    uStack_150 = *(undefined8 *)(param_3 + 0x50);
    uStack_138 = *(undefined8 *)(param_3 + 0x68);
    uStack_140 = *(undefined8 *)(param_3 + 0x60);
    uStack_188 = *(undefined8 *)(param_3 + 0x18);
    uStack_190 = *(undefined8 *)(param_3 + 0x10);
    uStack_178 = *(undefined8 *)(param_3 + 0x28);
    uStack_180 = *(undefined8 *)(param_3 + 0x20);
    iVar4 = (int)&uStack_f0;
    FUN_10209de84();
    puVar5 = &uStack_190;
    func_0x000100ce0b0c();
    lVar8 = _DAT_112e55c70;
    lVar10 = _DAT_112e55c68;
    lVar3 = _DAT_112e55c60;
    if (iVar4 == 1) {
      uStack_220 = *puVar5;
      uVar7 = puVar5[1];
      uStack_210 = puVar5[2];
      uVar1 = puVar5[3];
      uStack_200 = puVar5[4];
      uVar2 = puVar5[5];
      uVar6 = 0;
      uStack_218 = uVar7;
      uStack_208 = uVar1;
      uStack_1f8 = uVar2;
      FUN_1020b4a48(0);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar1);
      func_0x000107c61434(uVar2);
      lVar8 = lVar9 + lVar8;
      func_0x000107c5ff9c(lVar8,param_2,&uStack_220,uVar6,&UNK_1104c7290);
      func_0x0001020a17d0(&uStack_f0);
    }
    else {
      if (*(char *)((long)puVar5 + 0x39) == '\x01') {
        uStack_2a8 = puVar5[1];
        uStack_2b0 = *puVar5;
        uStack_278 = puVar5[7];
        uStack_280 = puVar5[6];
        uStack_268 = puVar5[9];
        uStack_270 = puVar5[8];
        uStack_298 = puVar5[3];
        uStack_2a0 = puVar5[2];
        uStack_288 = puVar5[5];
        uStack_290 = puVar5[4];
        uStack_248 = puVar5[0xd];
        uStack_250 = puVar5[0xc];
        uStack_238 = puVar5[0xf];
        uStack_240 = puVar5[0xe];
        uStack_230 = puVar5[0x10];
        uStack_258 = puVar5[0xb];
        uStack_260 = puVar5[10];
        FUN_1020a178c(&uStack_2b0);
        uStack_2d8 = uStack_248;
        uStack_2e0 = uStack_250;
        uStack_2c8 = uStack_238;
        uStack_2d0 = uStack_240;
        uStack_2c0 = uStack_230;
        uStack_318 = uStack_288;
        uStack_320 = uStack_290;
        uStack_308 = uStack_278;
        uStack_310 = uStack_280;
        uStack_2f8 = uStack_268;
        uStack_300 = uStack_270;
        uStack_2e8 = uStack_258;
        uStack_2f0 = uStack_260;
        uStack_338 = uStack_2a8;
        uStack_340 = uStack_2b0;
        uStack_328 = uStack_298;
        uStack_330 = uStack_2a0;
        uStack_1b8 = uStack_88;
        uStack_1c0 = uStack_90;
        uStack_1a8 = uStack_78;
        uStack_1b0 = uStack_80;
        uStack_1a0 = uStack_70;
        uStack_1f8 = uStack_c8;
        uStack_200 = uStack_d0;
        uStack_1e8 = uStack_b8;
        uStack_1f0 = uStack_c0;
        uStack_1d8 = uStack_a8;
        uStack_1e0 = uStack_b0;
        uStack_1c8 = uStack_98;
        uStack_1d0 = uStack_a0;
        uStack_218 = uStack_e8;
        uStack_220 = uStack_f0;
        uStack_208 = uStack_d8;
        uStack_210 = uStack_e0;
        func_0x000100ce0b0c(&uStack_220);
        FUN_10209956c();
        uVar7 = 0;
        FUN_1020b35c8(0);
        lVar10 = lVar3;
      }
      else {
        uStack_2a8 = puVar5[1];
        uStack_2b0 = *puVar5;
        uStack_278 = puVar5[7];
        uStack_280 = puVar5[6];
        uStack_268 = puVar5[9];
        uStack_270 = puVar5[8];
        uStack_298 = puVar5[3];
        uStack_2a0 = puVar5[2];
        uStack_288 = puVar5[5];
        uStack_290 = puVar5[4];
        uStack_248 = puVar5[0xd];
        uStack_250 = puVar5[0xc];
        uStack_238 = puVar5[0xf];
        uStack_240 = puVar5[0xe];
        uStack_230 = puVar5[0x10];
        uStack_258 = puVar5[0xb];
        uStack_260 = puVar5[10];
        FUN_1020a178c(&uStack_2b0);
        uStack_2d8 = uStack_248;
        uStack_2e0 = uStack_250;
        uStack_2c8 = uStack_238;
        uStack_2d0 = uStack_240;
        uStack_2c0 = uStack_230;
        uStack_318 = uStack_288;
        uStack_320 = uStack_290;
        uStack_308 = uStack_278;
        uStack_310 = uStack_280;
        uStack_2f8 = uStack_268;
        uStack_300 = uStack_270;
        uStack_2e8 = uStack_258;
        uStack_2f0 = uStack_260;
        uStack_338 = uStack_2a8;
        uStack_340 = uStack_2b0;
        uStack_328 = uStack_298;
        uStack_330 = uStack_2a0;
        uStack_1b8 = uStack_88;
        uStack_1c0 = uStack_90;
        uStack_1a8 = uStack_78;
        uStack_1b0 = uStack_80;
        uStack_1a0 = uStack_70;
        uStack_1f8 = uStack_c8;
        uStack_200 = uStack_d0;
        uStack_1e8 = uStack_b8;
        uStack_1f0 = uStack_c0;
        uStack_1d8 = uStack_a8;
        uStack_1e0 = uStack_b0;
        uStack_1c8 = uStack_98;
        uStack_1d0 = uStack_a0;
        uStack_218 = uStack_e8;
        uStack_220 = uStack_f0;
        uStack_208 = uStack_d8;
        uStack_210 = uStack_e0;
        func_0x000100ce0b0c(&uStack_220);
        FUN_10209956c();
        uVar7 = 0;
        FUN_1020ba730(0);
      }
      lVar8 = lVar9 + lVar10;
      func_0x000107c5ff9c(lVar8,param_2,&uStack_340,uVar7,&UNK_1104c71f8);
      func_0x0001020a1790(&uStack_340,0x112e56078,&UNK_10da58bf8);
    }
    func_0x000107c61574(lVar9);
  }
  return lVar8;
}



/* Entry: 1020a1718; end: 1020a178b;  */

long FUN_1020a1718(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [8];
  
  lVar3 = 0x112e56068;
  func_0x0001000285a8(0x112e56068,&UNK_10da58be8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff));
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    puVar1 = &DAT_112e56000;
    func_0x00010209e7f0(&DAT_112e56000,0x10209e6b8);
    func_0x000107c61170(lVar3);
    uVar2 = 0;
    FUN_1020b77f4(0);
    func_0x000107c5ffa0(lVar5,in_x3,uVar2);
    func_0x000107c61170(puVar1);
  }
  return lVar5;
}



/* Entry: 1020a178c; end: 1020a178f;  */

void FUN_1020a178c(void)

{
  return;
}



/* Entry: 1020a1790; end: 1020a1803;  */

undefined8 FUN_1020a1790(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1020a1804; end: 1020a181f;  */

void FUN_1020a1804(long param_1,long param_2)

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



/* Entry: 1020a1820; end: 1020a18bb;  */

undefined8 FUN_1020a1820(undefined8 param_1,undefined8 param_2)

{
  func_0x0001020a1254(param_2,param_1,&UNK_1104c6688);
  return param_2;
}



/* Entry: 1020a18bc; end: 1020a193b;  */

void FUN_1020a18bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e560a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da59418;
  func_0x000107c61520(&UNK_10da59418,&UNK_1104c7428);
  puRam0000000112e560a8 = puVar1;
  return;
}



/* Entry: 1020a193c; end: 1020a19b7;  */

undefined8 FUN_1020a193c(undefined8 param_1,undefined8 param_2)

{
  FUN_1020b6e58(param_2,param_1);
  return param_2;
}


