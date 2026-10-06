/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102899f70; end: 102899fbf;  */

void FUN_102899f70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec6750 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d5b0a0;
  func_0x00010002969c(0x112d5b0a0,&UNK_10d97aac0);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112ec6750 = puVar2;
  return;
}



/* Entry: 102899fc0; end: 102899fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102899fc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long unaff_x20;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar22 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  bVar3 = *(byte *)(unaff_x20 + 0x19);
  bVar4 = *(byte *)(unaff_x20 + 0x1a);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(ulong *)(unaff_x20 + 0x28);
  uVar34 = *param_1;
  func_0x000107c61428(lVar22 + 0x10,auStack_80,0,0);
  lVar22 = lVar22 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112ec66c0;
  if (lVar22 == 0) {
    return;
  }
  lVar30 = *(long *)(lVar22 + _DAT_112ec66c0);
  uVar23 = *(undefined8 *)(lVar30 + _DAT_113073330);
  puVar18 = &UNK_10dae7e30;
  func_0x0001000285a8(0x112ec6758);
  uVar31 = *(undefined8 *)(lVar30 + _DAT_113073348);
  func_0x000107c61174();
  func_0x000107c61434(uVar34);
  func_0x000107c61174();
  uVar6 = uVar31;
  func_0x0001000b637c();
  func_0x000107c61170(uVar31);
  uVar7 = *(undefined8 *)(*(long *)(lVar22 + lVar5) + _DAT_113073340);
  uVar24 = *(undefined8 *)(*(long *)(lVar22 + lVar5) + _DAT_113073338);
  uVar28 = *(undefined8 *)(lVar22 + _DAT_112ec66d0);
  func_0x000107c615f0();
  func_0x000107c61174();
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(lVar22 + _DAT_112ec6700);
  uVar25 = *(undefined8 *)(lVar22 + _DAT_112ec6708);
  uVar29 = *(undefined8 *)(lVar22 + _DAT_112ec6710);
  uVar33 = *(undefined8 *)(lVar22 + _DAT_112ec66f0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = uVar26;
  func_0x000107c40258();
  func_0x000107c61180();
  uVar9 = uVar31;
  func_0x000107c5faec();
  puVar19 = puVar18;
  func_0x000107c61170(uVar31);
  lVar30 = _DAT_112ec66c8;
  lVar10 = *(long *)(*(long *)(lVar22 + _DAT_112ec66c8) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  puStack_148 = puVar19;
  if (lVar10 == 0) {
    func_0x000107c5faec();
    puStack_148 = puVar19;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar19);
  }
  uVar11 = uVar12;
  func_0x000107c49ea0();
  if ((int)uVar11 == 0) {
    uVar11 = uVar12;
    func_0x000107c4fa6c();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    puVar19 = puStack_148;
    if (uVar11 != 0) {
      uStack_140 = uVar11;
      func_0x000107c5faec();
      puVar19 = puStack_148;
      func_0x000107c61170(uVar11);
      goto LAB_10289853c;
    }
  }
  else {
    func_0x000107c61170(lVar10);
    puVar19 = puStack_148;
  }
  puStack_148 = (undefined *)0x0;
  uStack_140 = 0;
LAB_10289853c:
  func_0x000107c49ea0();
  if ((uVar12 & 1) == 0) {
    puStack_158 = (undefined *)0x0;
    uStack_150 = 0;
    puVar20 = puVar19;
  }
  else {
    uVar31 = *(undefined8 *)(*(long *)(lVar22 + lVar5) + _DAT_113073330);
    func_0x000107c40674();
    func_0x000107c61180();
    uStack_150 = uVar31;
    func_0x000107c5faec();
    puVar20 = puVar19;
    func_0x000107c61170(uVar31);
    puStack_158 = puVar19;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar22 + lVar30) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar31 = uVar13;
  func_0x000107c5faec();
  func_0x000107c61170(uVar13);
  uVar13 = uVar26;
  FUN_102898ad8(uVar26,uVar31,puVar20);
  uVar21 = uVar31;
  func_0x000107c6142c(puVar20);
  lVar30 = *(long *)(*(long *)(lVar22 + lVar30) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar30 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar21);
  }
  func_0x000107c4a3c8();
  func_0x000107c61170(lVar30);
  lVar14 = 0;
  FUN_10289d31c();
  lVar27 = lVar14;
  func_0x000107c610f8();
  *(undefined8 *)(lVar27 + _DAT_112ec67c8) = 0;
  lVar30 = lVar27 + _DAT_112ec67e0;
  *(undefined8 *)(lVar30 + 8) = 0;
  func_0x000107c61614(lVar30,0);
  *(undefined8 *)(lVar27 + _DAT_112ec6810) = 0;
  *(undefined8 *)(lVar27 + _DAT_112ec6818) = 0;
  *(undefined8 *)(lVar27 + _DAT_112ec6820) = 0;
  *(undefined8 *)(lVar27 + _DAT_112ec6828) = 1;
  *(undefined8 *)(lVar27 + _DAT_112ec6830) = 0;
  lVar10 = _DAT_112ec6838;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  lVar15 = lVar22;
  func_0x000107c61174();
  lVar32 = lVar15;
  func_0x0001005f60d4();
  *(long *)(lVar27 + lVar10) = lVar32;
  *(undefined1 *)(lVar27 + _DAT_112ec6840) = 0;
  *(undefined1 *)(lVar27 + _DAT_112ec6848) = 0;
  puVar1 = (undefined8 *)(lVar27 + _DAT_112ec6850);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar27 + _DAT_112ec6858) = 0;
  puVar1 = (undefined8 *)(lVar27 + _DAT_112ec6860);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined2 *)((long)puVar1 + 0xc) = 1;
  *(undefined8 *)(lVar27 + _DAT_112ec6798) = uVar23;
  bVar2 = bVar2 & 1;
  *(byte *)(lVar27 + _DAT_112ec67a0) = bVar2;
  *(byte *)(lVar27 + _DAT_112ec67a8) = bVar3 & (bVar4 ^ 1) & 1;
  *(undefined8 *)(lVar27 + _DAT_112ec67b0) = uVar34;
  *(undefined8 *)(lVar27 + _DAT_112ec67b8) = uVar6;
  *(undefined8 *)(lVar27 + _DAT_112ec67c0) = uVar7;
  *(undefined8 *)(lVar27 + _DAT_112ec67d0) = uVar24;
  *(undefined8 *)(lVar27 + _DAT_112ec67d8) = uVar28;
  *(undefined8 *)(lVar27 + _DAT_112ec67e8) = uVar8;
  *(undefined8 *)(lVar27 + _DAT_112ec67f0) = uVar25;
  *(undefined8 *)(lVar27 + _DAT_112ec67f8) = uVar29;
  *(undefined8 *)(lVar27 + _DAT_112ec6800) = uVar33;
  puVar1 = (undefined8 *)(lVar27 + _DAT_112ec6808);
  *puVar1 = uVar9;
  puVar1[1] = puVar18;
  puVar1[2] = uStack_140;
  puVar1[3] = puStack_148;
  puVar1[4] = uStack_150;
  puVar1[5] = puStack_158;
  puVar1[6] = uVar13;
  puVar1[7] = uVar31;
  *(char *)(puVar1 + 8) = (char)uVar26;
  *(undefined ***)(lVar30 + 8) = &PTR_DAT_11055e590;
  func_0x000107c61604(lVar30,lVar15);
  puVar18 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_90 = lVar27;
  lStack_88 = lVar14;
  func_0x000107c61174(uVar23);
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar33);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(uVar28);
  plVar16 = &lStack_90;
  func_0x000107c61154(plVar16,puVar18,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(plVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(lVar15);
  uVar26 = *(undefined8 *)(lVar15 + _DAT_112ec66a0);
  *(long **)(lVar15 + _DAT_112ec66a0) = plVar16;
  func_0x000107c61174(plVar16);
  func_0x000107c61170(uVar26);
  FUN_102897024(bVar2);
  lVar10 = _DAT_113073358;
  lVar30 = _DAT_112ec66a8;
  lVar27 = *(long *)(lVar15 + _DAT_112ec66a8);
  if (lVar27 != 0) {
    lVar32 = *(long *)(lVar22 + lVar5);
    func_0x000107c61428(lVar32 + _DAT_113073358,auStack_a8,0,0);
    lVar32 = lVar32 + lVar10;
    func_0x000107c61618(lVar32);
    func_0x000107c6157c(lVar27);
    func_0x000102895840(lVar32);
    func_0x000107c61574(lVar27);
    func_0x000107c615e8(lVar32);
    lVar10 = _DAT_113073368;
    lVar27 = *(long *)(lVar15 + lVar30);
    if (lVar27 != 0) {
      lVar32 = *(long *)(lVar22 + lVar5);
      func_0x000107c61428(lVar32 + _DAT_113073368,auStack_c0,0,0);
      lVar32 = lVar32 + lVar10;
      func_0x000107c61618(lVar32);
      lVar10 = lVar15;
      func_0x000107c61174(lVar15);
      func_0x000107c61174();
      func_0x000107c6157c(lVar27);
      FUN_102899b9c(lVar10,lVar10,lVar32,lVar27);
      func_0x000107c61574(lVar27);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar32);
      lVar30 = *(long *)(lVar15 + lVar30);
      if (lVar30 != 0) {
        plVar17 = plVar16;
        func_0x000107c61174(plVar16);
        func_0x000107c6157c(lVar30);
        func_0x000102899ce4(plVar17,lVar30);
        func_0x000107c61574(lVar30);
        func_0x000107c61170(plVar17);
      }
    }
  }
  func_0x000107c3e2c0(*(undefined8 *)(*(long *)(lVar22 + lVar5) + _DAT_113073360));
  func_0x000107c61170(lVar15);
  func_0x000107c61170(plVar16);
  return;
}



/* Entry: 102899ff0; end: 10289a02f;  */

void FUN_102899ff0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10289a030; end: 10289a0b3;  */

void FUN_10289a030(long param_1,long param_2)

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



/* Entry: 10289a0b4; end: 10289a10b; -[_TtC29ChatActionMenuScopeEntryPoint32ChatActionMenuTrayViewController initWithCoder:] */

void FUN_10289a0b4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ChatActionMenuScopeEntryPoint/ChatActionMenuTrayViewController.swift",0x44,2,
                      0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289a10c);
  (*pcVar1)();
}



/* Entry: 10289a10c; end: 10289a3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289a10c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_10289a470();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10289a3cc);
    (*pcVar1)();
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec6768);
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  uVar7 = uVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10289a3d0);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  uVar7 = uVar8;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10289a3d4);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  uVar7 = uVar8;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar5 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar7 = uVar8;
      func_0x000107c40284(0xc020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar3);
      *(undefined8 *)(lVar2 + 0x38) = uVar7;
      uVar7 = 0;
      func_0x000100847984(0);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10289a3dc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289a3d8);
  (*pcVar1)();
}



/* Entry: 10289a3dc; end: 10289a403; -[_TtC29ChatActionMenuScopeEntryPoint32ChatActionMenuTrayViewController viewDidLoad] */

void FUN_10289a3dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10289a10c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10289a404; end: 10289a45f; -[_TtC29ChatActionMenuScopeEntryPoint32ChatActionMenuTrayViewController initWithNibName:bundle:] */

void FUN_10289a404(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatActionMenuScopeEntryPoint.ChatActionMenuTrayViewController",0x3e,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289a430);
  (*pcVar1)();
}



/* Entry: 10289a460; end: 10289a46f; -[_TtC29ChatActionMenuScopeEntryPoint32ChatActionMenuTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289a460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6768));
  return;
}



/* Entry: 10289a470; end: 10289a48f;  */

void FUN_10289a470(void)

{
  func_0x000107c61168(&PTR_PTR_112868e60);
  return;
}



/* Entry: 10289a490; end: 10289a6eb;  */

undefined * FUN_10289a490(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    func_0x00010289dd68(0,lVar14,0);
    uVar1 = param_1 + 0x40;
    uVar15 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar10 = 0;
    iVar2 = *(int *)(param_1 + 0x24);
    do {
      if (uVar15 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10289a6d8);
        (*pcVar4)();
      }
      uVar11 = uVar15 >> 6;
      uVar12 = 1L << (uVar15 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar11 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10289a6dc);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10289a6e0);
        (*pcVar4)();
      }
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar15 * 8);
      func_0x000107c61174(uVar5);
      uVar6 = uVar5;
      func_0x000107c5cb24();
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126ab620;
      func_0x000107c610f8();
      func_0x000107c47000();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      uVar16 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar16) {
        func_0x00010289dd68(1 < *(ulong *)(puVar3 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar16 + 1;
      *(undefined **)(puVar3 + uVar16 * 8 + 0x20) = puVar7;
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar16 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10289a6e4);
        (*pcVar4)();
      }
      uVar8 = *(ulong *)(uVar1 + uVar11 * 8);
      if ((uVar8 & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10289a6e8);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10289a6ec);
        (*pcVar4)();
      }
      uVar8 = uVar8 & -2L << (uVar15 & 0x3f);
      if (uVar8 == 0) {
        lVar13 = uVar11 << 6;
        puVar9 = (ulong *)(param_1 + 0x48 + uVar11 * 8);
        do {
          uVar11 = uVar11 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar11) {
            FUN_10289e3a4(uVar15,iVar2,0);
            uVar15 = uVar16;
            goto LAB_10289a52c;
          }
          uVar12 = *puVar9;
          lVar13 = lVar13 + 0x40;
          puVar9 = puVar9 + 1;
        } while (uVar12 == 0);
        FUN_10289e3a4(uVar15,iVar2,0);
        uVar15 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + lVar13;
      }
      else {
        uVar11 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 & 0x7fffffffffffffc0;
      }
LAB_10289a52c:
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar14);
  }
  return puVar3;
}



/* Entry: 10289a6ec; end: 10289a7b7;  */

void FUN_10289a6ec(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "dismissActionMenu()";
  func_0x0001000c10c0("dismissActionMenu()");
  func_0x000107c61180();
  puVar2 = &UNK_11055eac0;
  func_0x000107c613fc(&UNK_11055eac0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_10289e884;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11055ee70;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10289a7b8; end: 10289a8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10289a7b8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  lVar1 = _DAT_112ec6810;
  plVar5 = &lStack_50;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ec6810);
  puVar6 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_10289a8b4();
    lVar3 = 0;
    FUN_10289a470();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined **)(lVar4 + _DAT_112ec6768) = puVar2;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61154(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
    puVar6 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c61170(plVar5);
    func_0x000107c52684(puVar6);
    func_0x000107c5a05c(puVar6);
    func_0x000107c52aa4(puVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c61170(uVar7);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar6;
}



/* Entry: 10289a8b4; end: 10289a917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10289a8b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec6818;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec6818);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10289a918();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10289a918; end: 10289ab0f;  */

/* WARNING: Possible PIC construction at 0x00010289a974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010289a988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289a978) */
/* WARNING: Removing unreachable block (ram,0x00010289a98c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289a918(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ec67d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c610f8(PTR_PTR_1126ab610);
      goto code_r0x000107c453e4;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
code_r0x000107c453e4:
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10289ab10; end: 10289ac27;  */

void FUN_10289ab10(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "actionMenuView";
  func_0x0001000c10c0("actionMenuView");
  func_0x000107c61180();
  puVar2 = &UNK_11055ebd8;
  func_0x000107c613fc(&UNK_11055ebd8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  *(undefined4 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  uStack_60 = 0x10289e3e4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11055ebf0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_6);
  func_0x000100d0d008(param_2,param_3);
  func_0x000100d0d008(param_4,param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10289ac28; end: 10289afbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289ac28(long param_1,undefined4 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ec6860;
    *(undefined4 *)(lVar1 + 8) = param_2;
    *(undefined2 *)(lVar1 + 0xc) = 0;
    if (param_3 == 0) {
      puVar12 = (undefined *)0x0;
      pcVar13 = FUN_10289afc0;
    }
    else {
      puVar12 = &UNK_11055ed90;
      func_0x000107c613fc(&UNK_11055ed90,0x20,7);
      *(long *)(puVar12 + 0x10) = param_3;
      *(undefined8 *)(puVar12 + 0x18) = param_4;
      pcVar13 = (code *)0x10289e478;
    }
    puVar5 = &UNK_11055ec28;
    func_0x000107c613fc(&UNK_11055ec28,0x20,7);
    *(code **)(puVar5 + 0x10) = pcVar13;
    *(undefined **)(puVar5 + 0x18) = puVar12;
    if (param_5 == 0) {
      puVar12 = &UNK_11055ec50;
      func_0x000107c613fc(&UNK_11055ec50,0x20,7);
      *(code **)(puVar12 + 0x10) = FUN_10289e3f8;
      *(undefined **)(puVar12 + 0x18) = puVar5;
      func_0x000107c6157c(puVar5);
      pcVar13 = FUN_10289e418;
    }
    else {
      puVar12 = &UNK_11055ed68;
      func_0x000107c613fc(&UNK_11055ed68,0x20,7);
      *(long *)(puVar12 + 0x10) = param_5;
      *(undefined8 *)(puVar12 + 0x18) = param_6;
      pcVar13 = (code *)0x10289e450;
    }
    puVar6 = &UNK_11055ec78;
    func_0x000107c613fc(&UNK_11055ec78,0x20,7);
    *(code **)(puVar6 + 0x10) = pcVar13;
    *(undefined **)(puVar6 + 0x18) = puVar12;
    puVar2 = (undefined8 *)(param_1 + _DAT_112ec6850);
    uVar11 = *puVar2;
    uVar3 = puVar2[1];
    *puVar2 = FUN_10289e420;
    puVar2[1] = puVar6;
    func_0x000100d0d008(param_3,param_4);
    func_0x000100d0d008(param_5,param_6);
    func_0x000100d0cf90(uVar11,uVar3);
    FUN_10289a7b8();
    func_0x000107c42018();
    func_0x000107c61170(uVar11);
    lVar1 = _DAT_112ec6840;
    if ((*(char *)(param_1 + _DAT_112ec6848) == '\x01') ||
       (*(char *)(param_1 + _DAT_112ec6840) != '\x01')) {
      func_0x000107c61574(puVar5);
      func_0x000107c61170(param_1);
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112ec6848) = 0;
      *(undefined1 *)(param_1 + lVar1) = 0;
      uVar11 = *(undefined8 *)(param_1 + _DAT_112ec6838);
      func_0x000107c6157c(uVar11);
      func_0x000100c82230();
      func_0x000107c61574(uVar11);
      puVar12 = &UNK_11055eca0;
      func_0x000107c613fc(&UNK_11055eca0,0x18,7);
      *(long *)(puVar12 + 0x10) = param_1;
      puVar6 = &UNK_11055ecc8;
      func_0x000107c613fc(&UNK_11055ecc8,0x18,7);
      *(long *)(puVar6 + 0x10) = param_1;
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x10289ea3c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11055ece0;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar12;
      func_0x000107c60bc4(ppuVar8);
      puVar9 = puStack_80;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c6157c(puVar12);
      func_0x000107c61574(puVar9);
      puVar9 = &UNK_11055ed18;
      func_0x000107c613fc(&UNK_11055ed18,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = 0x10289ea40;
      *(undefined **)(puVar9 + 0x18) = puVar6;
      uStack_88 = 0x10289ea90;
      puStack_a8 = puVar4;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100288f10;
      puStack_90 = &UNK_11055ed30;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_80;
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar9);
      func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(puVar6);
    }
  }
  return;
}



/* Entry: 10289afc0; end: 10289afc3;  */

void FUN_10289afc0(void)

{
  return;
}



/* Entry: 10289afc4; end: 10289b053;  */

void FUN_10289afc4(undefined8 *param_1,code *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_38;
  
  (*param_2)();
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppuVar2 = &puStack_38;
  puStack_38 = puVar1;
  func_0x000104888f7c(ppuVar2);
  func_0x000107c61170();
  func_0x000103edf0bc();
  func_0x000107c61574(ppuVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10289b054; end: 10289b143;  */

void FUN_10289b054(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar4 = (code *)0x0;
  }
  else {
    puVar3 = &UNK_11055ebb0;
    func_0x000107c613fc(&UNK_11055ebb0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    pcVar4 = FUN_10289e3d8;
  }
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar5 = (undefined *)0x0;
    pcVar6 = (code *)0x0;
  }
  else {
    puVar5 = &UNK_11055eb88;
    func_0x000107c613fc(&UNK_11055eb88,0x18,7);
    *(long *)(puVar5 + 0x10) = param_4;
    pcVar6 = FUN_10289e3b8;
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,pcVar4,puVar3,pcVar6,puVar5);
  func_0x000100d0cf90(pcVar6,puVar5);
  func_0x000100d0cf90(pcVar4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10289b144; end: 10289b1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10289b144(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec6820;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ec6820);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126a64f8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10289b1c0; end: 10289b36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10289b1c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec6828;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec6828);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    func_0x00010289b22c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x0001011a1ca0(uVar4);
  }
  func_0x0001011a1ca4(lVar3);
  return lVar2;
}



/* Entry: 10289b36c; end: 10289b42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10289b36c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec6830;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ec6830);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    puVar2 = puVar3;
    func_0x000107c526c0(0);
    FUN_10289b144();
    func_0x000107c3d89c(puVar3,param_2,puVar2);
    func_0x000107c61170();
    FUN_10289b1c0();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c3d89c(puVar3,param_2,puVar2);
      func_0x000107c61170(puVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10289b430; end: 10289b457; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController initWithCoder:] */

void FUN_10289b430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10289e498();
  return;
}



/* Entry: 10289b458; end: 10289b613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289b458(uint param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  
  plVar2 = (long *)&stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  FUN_10289e88c();
  func_0x000104884898();
  puVar3 = &UNK_11055eac0;
  func_0x000107c613fc(&UNK_11055eac0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar1 = FUN_10289e8e0;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_10289e8e0);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar1);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec6838);
  pcVar8 = *(code **)(puVar6 + 0x18);
  func_0x000107c6157c(uVar7);
  (*pcVar8)();
  func_0x000107c615e8(pcVar1);
  func_0x000107c61574(uVar7);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c3d6fc();
    func_0x000107c61170();
    FUN_10289c014();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      FUN_10289b144();
      func_0x000107c538a4();
      func_0x000107c61170(lVar5);
      func_0x000107c53830(*(undefined8 *)(unaff_x20 + _DAT_112ec67c0));
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289b614);
  (*pcVar1)();
}



/* Entry: 10289b614; end: 10289b6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289b614(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_10289b144();
    func_0x000107c5a588();
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(param_2 + _DAT_112ec67c8);
    *(undefined8 *)(param_2 + _DAT_112ec67c8) = uVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(uVar3);
    FUN_10289b6a8();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10289b6a8; end: 10289c013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289b6a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long unaff_x20;
  double dVar17;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  if ((*(byte *)(unaff_x20 + _DAT_112ec6840) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ec6840) = 1;
    *(undefined1 *)(unaff_x20 + _DAT_112ec6858) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ec6860);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined2 *)((long)puVar1 + 0xc) = 1;
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289bffc);
      (*pcVar3)();
    }
    lVar5 = lVar4;
    FUN_10289b36c();
    func_0x000107c3d89c(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289c000);
      (*pcVar3)();
    }
    func_0x000107c515a0();
    dVar17 = param_1;
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289c004);
      (*pcVar3)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170();
    func_0x000107c609b0(dVar17,param_2,param_3,param_4);
    FUN_10289b1c0();
    if (lVar4 == 0) {
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = 0x112d360b8;
      FUN_10289dc20(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 3;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ec6830);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar9 = uVar12;
      FUN_10289b144();
      uVar10 = uVar9;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      uVar9 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      uVar9 = 0;
      func_0x00010289e910(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar4;
      func_0x000107c5fc48(lVar4,uVar9);
      func_0x000107c61574(lVar4);
      func_0x000107c3d048(puVar11);
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      lVar6 = 0x112d360b8;
      FUN_10289dc20(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x18) = 9;
      *(undefined8 *)(lVar6 + 0x10) = 4;
      func_0x000107c61174();
      lVar5 = lVar4;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar7 = lVar5;
      FUN_10289b144();
      lVar8 = lVar7;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      lVar7 = lVar5;
      func_0x000107c40284(0x4020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar8);
      *(long *)(lVar6 + 0x20) = lVar7;
      lVar7 = lVar4;
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar5 = _DAT_112ec6830;
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec6830);
      func_0x000107c4ace0(uVar9);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c40284(0x4020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar9);
      *(long *)(lVar6 + 0x28) = lVar8;
      lVar7 = lVar4;
      func_0x000107c50890();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
      func_0x000107c50890(uVar9);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c40284(0xc020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar9);
      *(long *)(lVar6 + 0x30) = lVar8;
      uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c3ec1c(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      uVar9 = uVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar5);
      *(undefined8 *)(lVar6 + 0x38) = uVar9;
      uVar9 = 0;
      func_0x00010289e910(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar6;
      func_0x000107c5fc48(lVar6,uVar9);
      func_0x000107c61574(lVar6);
      func_0x000107c3d048(puVar11);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar5);
    lVar4 = 0x112d360b8;
    FUN_10289dc20(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 0xd;
    *(undefined8 *)(lVar4 + 0x10) = 6;
    lVar5 = lVar4;
    FUN_10289b144();
    lVar7 = lVar5;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar6 = _DAT_112ec6830;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec6830);
    func_0x000107c4ace0(uVar9);
    func_0x000107c61180();
    lVar5 = lVar7;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar9);
    *(long *)(lVar4 + 0x20) = lVar5;
    lVar5 = _DAT_112ec6820;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ec6820);
    func_0x000107c50890();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c50890(uVar12);
    func_0x000107c61180();
    uVar9 = uVar10;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar12);
    *(undefined8 *)(lVar4 + 0x28) = uVar9;
    uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c5cbe4(uVar12);
    func_0x000107c61180();
    uVar9 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar12);
    *(undefined8 *)(lVar4 + 0x30) = uVar9;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289c008);
      (*pcVar3)();
    }
    lVar7 = lVar5;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar4 + 0x38) = uVar10;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c50890();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289c00c);
      (*pcVar3)();
    }
    lVar7 = lVar5;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar4 + 0x40) = uVar10;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289c010);
      (*pcVar3)();
    }
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = lVar5;
    func_0x000107c5cbe4(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar10 = uVar9;
    func_0x000107c40284(param_1 + (dVar17 * 0.5 - param_1) * 0.5);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x48) = uVar10;
    uVar9 = 0;
    func_0x00010289e910(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,uVar9);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar11);
    func_0x000107c61170(lVar5);
    puVar11 = &UNK_11055f0d8;
    func_0x000107c613fc(&UNK_11055f0d8,0x18,7);
    *(long *)(puVar11 + 0x10) = unaff_x20;
    puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a0 = FUN_10289e950;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_11055f0f0;
    ppuVar14 = &puStack_c0;
    puStack_98 = puVar11;
    func_0x000107c60bc4(ppuVar14);
    puVar15 = puStack_98;
    func_0x000107c61174();
    func_0x000107c6157c(puVar11);
    func_0x000107c61574(puVar15);
    puVar15 = &UNK_11055f128;
    func_0x000107c613fc(&UNK_11055f128,0x20,7);
    *(undefined8 *)(puVar15 + 0x10) = 0;
    *(undefined8 *)(puVar15 + 0x18) = 0;
    pcStack_a0 = (code *)0x10289eaa0;
    puStack_c0 = puVar2;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100288f10;
    puStack_a8 = &UNK_11055f140;
    ppuVar16 = &puStack_c0;
    puStack_98 = puVar15;
    func_0x000107c60bc4(ppuVar16);
    func_0x000107c61574(puStack_98);
    uVar9 = 0x3fd3333333333333;
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar13);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61574(puVar11);
    if (*(long *)(*(long *)(unaff_x20 + _DAT_112ec67b0) + 0x10) != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112ec6848) = 1;
      func_0x000107c60734();
      *puVar1 = uVar9;
      FUN_10289a7b8();
      func_0x000107c4ef2c(0x3fe0000000000000);
      func_0x000107c61170(puVar11);
    }
    puVar11 = PTR_PTR_1126affa8;
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289c014);
      (*pcVar3)();
    }
    func_0x000107c4e57c();
    func_0x000107c61170(puVar11);
  }
  return;
}



/* Entry: 10289c014; end: 10289c223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10289c014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  lVar10 = *(long *)(unaff_x20 + _DAT_112ec67c0);
  lVar2 = lVar10;
  func_0x000107c40514(lVar10,param_6,*(undefined8 *)(unaff_x20 + _DAT_112ec67d0));
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ec60(lVar2);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(param_3,param_4);
    puVar4 = &UNK_11055f060;
    func_0x000107c613fc(&UNK_11055f060,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    puVar5 = &UNK_11055f088;
    func_0x000107c613fc(&UNK_11055f088,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x10289e8e8;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_70 = FUN_10289e8f0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f9148c;
    puStack_78 = &UNK_11055f0a0;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    lVar7 = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar8);
    puVar8 = puVar3;
    func_0x000107c45138(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    puVar9 = puVar5;
    func_0x000107c61544(puVar5,"",0x67,0x13b,0x24,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10289c224);
      (*pcVar1)();
    }
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x000107c469a4(0,0,0,0);
    func_0x000107c438d4(lVar7);
    func_0x000107c54b80(puVar5);
    func_0x000107c55258(puVar5);
    func_0x000107c526c0(0x3fe0000000000000,puVar5);
    func_0x000107c5742c(lVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
  }
  return lVar2;
}



/* Entry: 10289c224; end: 10289c253; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController viewDidAppear:] */

void FUN_10289c224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10289b458(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10289c254; end: 10289c2df;  */

/* WARNING: Possible PIC construction at 0x00010289c2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289c2b0) */

void FUN_10289c254(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289c2e0);
  (*pcVar1)();
}



/* Entry: 10289c2e0; end: 10289c33b;  */

/* WARNING: Possible PIC construction at 0x00010289c328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289c32c) */

void FUN_10289c2e0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10289c33c; end: 10289c807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289c33c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ec6848;
  lVar2 = _DAT_112ec6840;
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + _DAT_112ec6840) & 1) == 0) {
    if (*(char *)(param_1 + _DAT_112ec6858) != '\x01') {
      *(undefined1 *)(param_1 + _DAT_112ec6858) = 1;
      FUN_10289c830();
      puVar9 = &UNK_11055eac0;
      func_0x000107c613fc(&UNK_11055eac0,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,param_1);
      uStack_98 = 0x10289eaa4;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11055ee98;
      ppuVar10 = &puStack_b8;
      puStack_90 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(puStack_90);
      func_0x000107c420a8(param_1);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar10);
      return;
    }
LAB_10289c738:
    func_0x000107c61170();
  }
  else {
    if (*(char *)(param_1 + _DAT_112ec6848) == '\x01') {
      lVar4 = param_1;
      FUN_10289a7b8();
      func_0x000107c42018();
      func_0x000107c61170(lVar4);
      if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
        if (*(char *)(param_1 + lVar2) != '\x01') goto LAB_10289c738;
        *(undefined1 *)(param_1 + lVar3) = 0;
        *(undefined1 *)(param_1 + lVar2) = 0;
        uVar11 = *(undefined8 *)(param_1 + _DAT_112ec6838);
        func_0x000107c6157c(uVar11);
        func_0x000100c82230();
        func_0x000107c61574(uVar11);
        puVar9 = &UNK_11055ef98;
        func_0x000107c613fc(&UNK_11055ef98,0x18,7);
        *(long *)(puVar9 + 0x10) = param_1;
        puVar5 = &UNK_11055efc0;
        func_0x000107c613fc(&UNK_11055efc0,0x18,7);
        *(long *)(puVar5 + 0x10) = param_1;
        puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x10289ea74;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_11055efd8;
        ppuVar10 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar7 = puStack_90;
        func_0x000107c61174(param_1);
        func_0x000107c61174();
        func_0x000107c6157c(puVar9);
        func_0x000107c61574(puVar7);
        puVar7 = &UNK_11055f010;
        func_0x000107c613fc(&UNK_11055f010,0x20,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x10289ea78;
        *(undefined **)(puVar7 + 0x18) = puVar5;
        uStack_98 = 0x10289ea9c;
        puStack_b8 = puVar1;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100288f10;
        puStack_a0 = &UNK_11055f028;
        ppuVar8 = &puStack_b8;
        puStack_90 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar7 = puStack_90;
        func_0x000107c6157c(puVar5);
        func_0x000107c61574(puVar7);
        func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar6);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(puVar5);
      }
      if (*(char *)(param_1 + lVar2) != '\x01') goto LAB_10289c738;
    }
    *(undefined1 *)(param_1 + lVar3) = 0;
    *(undefined1 *)(param_1 + lVar2) = 0;
    uVar11 = *(undefined8 *)(param_1 + _DAT_112ec6838);
    func_0x000107c6157c(uVar11);
    func_0x000100c82230();
    func_0x000107c61574(uVar11);
    puVar9 = &UNK_11055eed0;
    func_0x000107c613fc(&UNK_11055eed0,0x18,7);
    *(long *)(puVar9 + 0x10) = param_1;
    puVar5 = &UNK_11055eef8;
    func_0x000107c613fc(&UNK_11055eef8,0x18,7);
    *(long *)(puVar5 + 0x10) = param_1;
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x10289ea64;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_11055ef10;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar7 = puStack_90;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_11055ef48;
    func_0x000107c613fc(&UNK_11055ef48,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x10289ea68;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    uStack_98 = 0x10289ea98;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100288f10;
    puStack_a0 = &UNK_11055ef60;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_90;
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar6);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 10289c808; end: 10289c82f; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController dismissActionMenu] */

void FUN_10289c808(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10289a6ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10289c830; end: 10289ca9b;  */

/* WARNING: Possible PIC construction at 0x00010289c93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010289c978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010289c9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010289c9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010289ca30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289c940) */
/* WARNING: Removing unreachable block (ram,0x00010289c948) */
/* WARNING: Removing unreachable block (ram,0x00010289c958) */
/* WARNING: Removing unreachable block (ram,0x00010289c97c) */
/* WARNING: Removing unreachable block (ram,0x00010289c984) */
/* WARNING: Removing unreachable block (ram,0x00010289c994) */
/* WARNING: Removing unreachable block (ram,0x00010289c9b8) */
/* WARNING: Removing unreachable block (ram,0x00010289c9e0) */
/* WARNING: Removing unreachable block (ram,0x00010289ca38) */
/* WARNING: Removing unreachable block (ram,0x00010289ca04) */
/* WARNING: Removing unreachable block (ram,0x00010289c9c0) */
/* WARNING: Removing unreachable block (ram,0x00010289c99c) */
/* WARNING: Removing unreachable block (ram,0x00010289c960) */
/* WARNING: Removing unreachable block (ram,0x00010289ca34) */
/* WARNING: Removing unreachable block (ram,0x00010289ca3c) */
/* WARNING: Removing unreachable block (ram,0x00010289ca68) */
/* WARNING: Removing unreachable block (ram,0x00010289ca7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289c830(undefined8 param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ec6808))[1];
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec6808);
    pdVar1 = (double *)(unaff_x20 + _DAT_112ec6860);
    dVar5 = *pdVar1;
    if (0.0 < dVar5) {
      func_0x000107c60734();
      dVar5 = dVar5 - *pdVar1;
      param_2 = 0;
    }
    puVar2 = PTR_PTR_1126ab608;
    func_0x000107c610f8(dVar5,param_2,PTR_PTR_1126ab608);
    func_0x000107c453e4();
    if (((*(byte *)((long)pdVar1 + 0xd) & 1) == 0) && (*(char *)((long)pdVar1 + 0xc) != '\x01')) {
      FUN_10289cf10(*(undefined4 *)(pdVar1 + 1));
    }
    func_0x000107c5473c(puVar2);
    func_0x000107c54740(puVar2);
    func_0x000107c5fadc(uVar4,lVar3);
    func_0x000107c5663c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10289ca9c; end: 10289cbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289ca9c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar6 = *(code **)(param_1 + _DAT_112ec6850);
    if (pcVar6 == (code *)0x0) {
      lVar4 = param_1 + _DAT_112ec67e0;
      func_0x000107c61618();
      if (lVar4 != 0) {
        FUN_102898e1c();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c61170(param_1);
    }
    else {
      uVar5 = ((undefined8 *)(param_1 + _DAT_112ec6850))[1];
      uVar1 = uVar5;
      func_0x000107c6157c(uVar5);
      (*pcVar6)();
      puVar2 = &UNK_11055eac0;
      func_0x000107c613fc(&UNK_11055eac0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      uStack_68 = 0x10289db80;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_101286f34;
      puStack_70 = &UNK_11055eb00;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_60);
      func_0x000107c4db80(uVar1);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(uVar1);
      func_0x000100d0cf90(pcVar6,uVar5);
    }
  }
  return;
}



/* Entry: 10289cbec; end: 10289cca3;  */

void FUN_10289cbec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "notifyDelegateToDismiss()";
  func_0x0001000c10c0("notifyDelegateToDismiss()");
  func_0x000107c61180();
  uStack_40 = 0x10289db88;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11055eb28;
  uStack_38 = param_3;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10289cca4; end: 10289cd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289cca4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112ec6850);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100d0cf90(uVar2,uVar3);
    lVar4 = param_1 + _DAT_112ec67e0;
    func_0x000107c61618();
    if (lVar4 != 0) {
      FUN_102898e1c();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10289cd30; end: 10289cf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10289cd30(void)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_112ec67b0);
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar16 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar16 < 0x40) {
    uVar17 = ~(-1L << (-uVar16 & 0x3f));
  }
  uVar17 = uVar17 & *puVar13;
  lVar10 = 2;
  func_0x000107c61438(lVar12);
  lVar14 = 0;
  lVar15 = lVar14;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar17 != 0) {
      uVar2 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar1 = *(uint *)(*(long *)(lVar12 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 4 +
                       lVar14 * 0x100);
      func_0x000102895b00(0);
      if (0x1c < uVar1) {
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10289cf10);
        (*pcVar3)();
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar5 = *(long *)(&UNK_10dae7f18 + (ulong)uVar1 * 8);
      func_0x000107c31130();
      func_0x000107c61180();
      lVar15 = lVar14;
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c5faec();
        lVar11 = lVar10;
        func_0x000107c61170(lVar5);
        puVar7 = puVar9;
        func_0x000107c61558();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          lVar11 = *(long *)(puVar9 + 0x10) + 1;
          puVar8 = (undefined *)0x0;
          func_0x0001000d182c(0,lVar11,1,puVar9);
        }
        uVar2 = *(ulong *)(puVar8 + 0x10);
        lVar5 = uVar2 + 1;
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          lVar11 = lVar5;
          func_0x0001000d182c(puVar9,lVar5,1,puVar8);
        }
        *(long *)(puVar9 + 0x10) = lVar5;
        *(long *)(puVar9 + uVar2 * 0x10 + 0x20) = lVar6;
        *(long *)(puVar9 + uVar2 * 0x10 + 0x28) = lVar10;
        lVar10 = lVar11;
      }
    }
    bVar4 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289cef4);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar16 >> 6) <= lVar14) break;
    uVar17 = puVar13[lVar14];
  }
  func_0x000107c6142c(lVar12);
  func_0x00010289db90(lVar12,puVar13,~uVar16,lVar15,0);
  return puVar9;
}



/* Entry: 10289cf10; end: 10289cf5f;  */

undefined8 FUN_10289cf10(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1d) {
    return *(undefined8 *)(&UNK_10dae7f18 + (ulong)param_1 * 8);
  }
  func_0x000102895b00(0);
  func_0x000107c60614();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289cf60);
  (*pcVar1)();
}



/* Entry: 10289cf60; end: 10289cfeb;  */

/* WARNING: Possible PIC construction at 0x00010289cfb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289cfbc) */

void FUN_10289cf60(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289cfec);
  (*pcVar1)();
}



/* Entry: 10289cfec; end: 10289d12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289cfec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  ppuVar4 = &puStack_50;
  lVar5 = *(long *)(param_1 + _DAT_112ec67e8);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  lVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar2 = lVar5;
  }
  FUN_10289b144();
  func_0x000107c50524();
  func_0x000107c61170(lVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112ec67c0);
  func_0x000107c5742c(uVar6);
  func_0x000107c50580(uVar6);
  func_0x000107c53830(uVar6);
  if ((*(byte *)(param_1 + _DAT_112ec6858) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112ec6858) = 1;
    FUN_10289c830();
    puVar3 = &UNK_11055eac0;
    func_0x000107c613fc(&UNK_11055eac0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    uStack_30 = 0x10289db78;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0x42000000;
    puStack_40 = &UNK_1000f6b44;
    puStack_38 = &UNK_11055ead8;
    puStack_28 = puVar3;
    func_0x000107c60bc4(&puStack_50);
    func_0x000107c61574(puStack_28);
    func_0x000107c420a8(param_1);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 10289d130; end: 10289d18f; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController initWithNibName:bundle:] */

void FUN_10289d130(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatActionMenuScopeEntryPoint.ChatActionMenuViewController",0x3a,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289d15c);
  (*pcVar1)();
}



/* Entry: 10289d190; end: 10289d31b; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010289d1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010289d2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289d1d4) */
/* WARNING: Removing unreachable block (ram,0x00010289d2fc) */
/* WARNING: Removing unreachable block (ram,0x000100d0cf90) */
/* WARNING: Removing unreachable block (ram,0x000100d0cf9c) */
/* WARNING: Removing unreachable block (ram,0x000100d0cf94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289d190(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec6798));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec67b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec67b8));
  return;
}



/* Entry: 10289d31c; end: 10289d33b;  */

void FUN_10289d31c(void)

{
  func_0x000107c61168(&PTR_PTR_112868f20);
  return;
}



/* Entry: 10289d33c; end: 10289d38f; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x00010289d378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289d37c) */

void FUN_10289d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10289e5d4(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10289d390; end: 10289d3f7; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController tray:heightForPosition:] */

undefined8
FUN_10289d390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_10289e7cc(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10289d3f8; end: 10289d61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289d3f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar2 = param_1 + _DAT_112ec6860;
  *(undefined4 *)(lVar2 + 8) = 0;
  *(undefined2 *)(lVar2 + 0xc) = 0x101;
  lVar2 = param_1;
  FUN_10289a7b8();
  func_0x000107c42018();
  func_0x000107c61170(lVar2);
  lVar2 = _DAT_112ec6840;
  if (((*(byte *)(param_1 + _DAT_112ec6848) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_112ec6840) & 1) != 0)) {
    *(undefined1 *)(param_1 + _DAT_112ec6848) = 0;
    *(undefined1 *)(param_1 + lVar2) = 0;
    uVar9 = *(undefined8 *)(param_1 + _DAT_112ec6838);
    func_0x000107c6157c(uVar9);
    func_0x000100c82230();
    func_0x000107c61574(uVar9);
    puVar3 = &UNK_11055e9f8;
    func_0x000107c613fc(&UNK_11055e9f8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    puVar4 = &UNK_11055ea20;
    func_0x000107c613fc(&UNK_11055ea20,0x18,7);
    *(long *)(puVar4 + 0x10) = param_1;
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10289db64;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11055ea38;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_11055ea70;
    func_0x000107c613fc(&UNK_11055ea70,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x10289db6c;
    *(undefined **)(puVar7 + 0x18) = puVar4;
    uStack_70 = 0x10289db74;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11055ea88;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 10289d620; end: 10289d787; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController didReactToMessage] */

void FUN_10289d620(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c61174();
  pcVar1 = "didReactToMessage()";
  func_0x0001000c10c0("didReactToMessage()");
  func_0x000107c61180();
  puVar2 = &UNK_11055e9a8;
  func_0x000107c613fc(&UNK_11055e9a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_40 = 0x10289db40;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11055e9c0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10289d788; end: 10289d7bb; -[_TtC29ChatActionMenuScopeEntryPoint28ChatActionMenuViewController getFocusedMessageContext] */

void FUN_10289d788(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010289d700();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10289d7bc; end: 10289d87b;  */

void FUN_10289d7bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)param_2 + 6);
  *param_1 = uVar1;
  return;
}



/* Entry: 10289d87c; end: 10289d8df;  */

long FUN_10289d87c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10289d8e0; end: 10289d9ff;  */

undefined8 * FUN_10289d8e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10289da00; end: 10289da6b;  */

undefined8 * FUN_10289da00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 10289da6c; end: 10289db97;  */

int FUN_10289da6c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10289db98; end: 10289dc0b;  */

/* WARNING: Possible PIC construction at 0x00010289dbd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289dbdc) */
/* WARNING: Removing unreachable block (ram,0x00010289dbe0) */

void FUN_10289db98(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x10289dbdc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 10289dc0c; end: 10289dc1f;  */

void FUN_10289dc0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec68b0 == (undefined *)0x0 || ((ulong)puRam0000000112ec68b0 & 1) != 0) {
    puVar1 = &UNK_10e92ca18;
    func_0x000107c61518(&UNK_10e92ca18,0x2a,0,0);
    puRam0000000112ec68b0 = puVar1;
  }
  return;
}



/* Entry: 10289dc20; end: 10289dc97;  */

void FUN_10289dc20(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x00010289e910(0,param_1,param_2);
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



/* Entry: 10289dc98; end: 10289dd83;  */

void FUN_10289dc98(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10289dd84();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10289dd84; end: 10289decb;  */

undefined *
FUN_10289dd84(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10289decc);
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
    puVar3 = param_5;
    FUN_10289db98(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10289decc; end: 10289e277;  */

undefined * FUN_10289decc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10289dffc);
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
    FUN_10289dc0c();
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
    uVar5 = 0x112ec6760;
    func_0x0001000285a8(0x112ec6760,&UNK_10dae7f10);
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



/* Entry: 10289e278; end: 10289e27f;  */

void FUN_10289e278(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "actionMenuView";
  func_0x0001000c10c0("actionMenuView");
  func_0x000107c61180();
  puVar2 = &UNK_11055ebd8;
  func_0x000107c613fc(&UNK_11055ebd8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined4 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  uStack_60 = 0x10289e3e4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11055ebf0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c();
  func_0x000100d0d008(param_2,param_3);
  func_0x000100d0d008(param_4,param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10289e280; end: 10289e3a3;  */

long FUN_10289e280(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10289e3a0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10289e3a4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ec6760;
        func_0x0001000285a8(0x112ec6760,&UNK_10dae7f10);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ec6760;
      func_0x0001000285a8(0x112ec6760,&UNK_10dae7f10);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10289e39c);
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



/* Entry: 10289e3a4; end: 10289e3b7;  */

void FUN_10289e3a4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10289e3b8; end: 10289e3d7;  */

void FUN_10289e3b8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10289e3d8; end: 10289e3f7;  */

void FUN_10289e3d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010289e3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10289e3f8; end: 10289e417;  */

void FUN_10289e3f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10289e418; end: 10289e41f;  */

void FUN_10289e418(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puStack_38;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppuVar2 = &puStack_38;
  puStack_38 = puVar1;
  func_0x000104888f7c(ppuVar2);
  func_0x000107c61170();
  func_0x000103edf0bc();
  func_0x000107c61574(ppuVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10289e420; end: 10289e497;  */

undefined8 FUN_10289e420(void)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return uStack_28;
}



/* Entry: 10289e498; end: 10289e5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289e498(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ec67c8) = 0;
  lVar1 = unaff_x20 + _DAT_112ec67e0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec6810) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6818) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6820) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6828) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec6830) = 0;
  lVar1 = _DAT_112ec6838;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112ec6840) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ec6848) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ec6850);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ec6858) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ec6860);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined2 *)((long)puVar2 + 0xc) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ChatActionMenuScopeEntryPoint/ChatActionMenuViewController.swift",0x40,2,0xc5
                      ,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10289e5d4);
  (*pcVar3)();
}



/* Entry: 10289e5d4; end: 10289e7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289e5d4(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112ec6840;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  if (((param_1 >> 1 & 1) != 0) && (*(char *)(unaff_x20 + _DAT_112ec6840) == '\x01')) {
    *(undefined1 *)(unaff_x20 + _DAT_112ec6848) = 0;
    *(undefined1 *)(unaff_x20 + lVar2) = 0;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec6838);
    func_0x000107c6157c(uVar9);
    func_0x000100c82230();
    func_0x000107c61574(uVar9);
    puVar3 = &UNK_11055edb8;
    func_0x000107c613fc(&UNK_11055edb8,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = &UNK_11055ede0;
    func_0x000107c613fc(&UNK_11055ede0,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10289ea4c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11055edf8;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_11055ee30;
    func_0x000107c613fc(&UNK_11055ee30,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x10289ea50;
    *(undefined **)(puVar7 + 0x18) = puVar4;
    uStack_70 = 0x10289ea94;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11055ee48;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 10289e7cc; end: 10289e883;  */

double FUN_10289e7cc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    uint param_5)

{
  code *pcVar1;
  long unaff_x20;
  double dVar2;
  
  if ((param_5 >> 4 & 1) == 0) {
    param_1 = -1.0;
    if ((param_5 >> 2 & 1) == 0) {
      return -1.0;
    }
    func_0x000107c5de64(0xbff0000000000000);
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10289e884);
      (*pcVar1)();
    }
    dVar2 = 0.5;
  }
  else {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10289e880);
      (*pcVar1)();
    }
    dVar2 = 0.85;
  }
  func_0x000107c3ec60();
  func_0x000107c61170(unaff_x20);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  return param_1 * dVar2;
}



/* Entry: 10289e884; end: 10289e88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289e884(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ec6848;
  lVar2 = _DAT_112ec6840;
  if (lVar4 == 0) {
    return;
  }
  if ((*(byte *)(lVar4 + _DAT_112ec6840) & 1) == 0) {
    if (*(char *)(lVar4 + _DAT_112ec6858) != '\x01') {
      *(undefined1 *)(lVar4 + _DAT_112ec6858) = 1;
      FUN_10289c830();
      puVar10 = &UNK_11055eac0;
      func_0x000107c613fc(&UNK_11055eac0,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,lVar4);
      uStack_98 = 0x10289eaa4;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11055ee98;
      ppuVar11 = &puStack_b8;
      puStack_90 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_90);
      func_0x000107c420a8(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c60bd0(ppuVar11);
      return;
    }
LAB_10289c738:
    func_0x000107c61170();
  }
  else {
    if (*(char *)(lVar4 + _DAT_112ec6848) == '\x01') {
      lVar5 = lVar4;
      FUN_10289a7b8();
      func_0x000107c42018();
      func_0x000107c61170(lVar5);
      if ((*(byte *)(lVar4 + lVar3) & 1) == 0) {
        if (*(char *)(lVar4 + lVar2) != '\x01') goto LAB_10289c738;
        *(undefined1 *)(lVar4 + lVar3) = 0;
        *(undefined1 *)(lVar4 + lVar2) = 0;
        uVar12 = *(undefined8 *)(lVar4 + _DAT_112ec6838);
        func_0x000107c6157c(uVar12);
        func_0x000100c82230();
        func_0x000107c61574(uVar12);
        puVar10 = &UNK_11055ef98;
        func_0x000107c613fc(&UNK_11055ef98,0x18,7);
        *(long *)(puVar10 + 0x10) = lVar4;
        puVar6 = &UNK_11055efc0;
        func_0x000107c613fc(&UNK_11055efc0,0x18,7);
        *(long *)(puVar6 + 0x10) = lVar4;
        puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x10289ea74;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_11055efd8;
        ppuVar11 = &puStack_b8;
        puStack_90 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar8 = puStack_90;
        func_0x000107c61174(lVar4);
        func_0x000107c61174();
        func_0x000107c6157c(puVar10);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_11055f010;
        func_0x000107c613fc(&UNK_11055f010,0x20,7);
        *(undefined8 *)(puVar8 + 0x10) = 0x10289ea78;
        *(undefined **)(puVar8 + 0x18) = puVar6;
        uStack_98 = 0x10289ea9c;
        puStack_b8 = puVar1;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100288f10;
        puStack_a0 = &UNK_11055f028;
        ppuVar9 = &puStack_b8;
        puStack_90 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar8 = puStack_90;
        func_0x000107c6157c(puVar6);
        func_0x000107c61574(puVar8);
        func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar7);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar6);
      }
      if (*(char *)(lVar4 + lVar2) != '\x01') goto LAB_10289c738;
    }
    *(undefined1 *)(lVar4 + lVar3) = 0;
    *(undefined1 *)(lVar4 + lVar2) = 0;
    uVar12 = *(undefined8 *)(lVar4 + _DAT_112ec6838);
    func_0x000107c6157c(uVar12);
    func_0x000100c82230();
    func_0x000107c61574(uVar12);
    puVar10 = &UNK_11055eed0;
    func_0x000107c613fc(&UNK_11055eed0,0x18,7);
    *(long *)(puVar10 + 0x10) = lVar4;
    puVar6 = &UNK_11055eef8;
    func_0x000107c613fc(&UNK_11055eef8,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar4;
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x10289ea64;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_11055ef10;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar8 = puStack_90;
    func_0x000107c61174(lVar4);
    func_0x000107c61174();
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_11055ef48;
    func_0x000107c613fc(&UNK_11055ef48,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x10289ea68;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    uStack_98 = 0x10289ea98;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100288f10;
    puStack_a0 = &UNK_11055ef60;
    ppuVar9 = &puStack_b8;
    puStack_90 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_90;
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar8);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 10289e88c; end: 10289e8df;  */

void FUN_10289e88c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec68a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010289e910(0xff,0x112ec68a8,&PTR_PTR_1126d4360);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112ec68a0 = puVar2;
  return;
}



/* Entry: 10289e8e0; end: 10289e8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289e8e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_10289b144();
    func_0x000107c5a588();
    func_0x000107c61170(lVar2);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ec67c8);
    *(undefined8 *)(lVar1 + _DAT_112ec67c8) = uVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(uVar4);
    FUN_10289b6a8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10289e8f0; end: 10289e94f;  */

void FUN_10289e8f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10289e950; end: 10289e957;  */

/* WARNING: Possible PIC construction at 0x00010289c2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289c2b0) */

void FUN_10289e950(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289c2e0);
  (*pcVar1)();
}



/* Entry: 10289e958; end: 10289e983;  */

void FUN_10289e958(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10289e984; end: 10289e9cf;  */

void FUN_10289e984(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 10289e9d0; end: 10289eaa7;  */

void FUN_10289e9d0(long param_1,long param_2)

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



/* Entry: 10289eaa8; end: 10289eb6b;  */

void FUN_10289eaa8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ec68c0;
  func_0x0001000285a8(0x112ec68c0,&UNK_10dae8000);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10289eb6c; end: 10289eb6f;  */

void FUN_10289eb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec68d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae8010;
  func_0x000107c61520(&UNK_10dae8010,&UNK_11055f270);
  puRam0000000112ec68d0 = puVar1;
  return;
}



/* Entry: 10289eb70; end: 10289ebdb;  */

void FUN_10289eb70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec68d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae8010;
  func_0x000107c61520(&UNK_10dae8010,&UNK_11055f270);
  puRam0000000112ec68d0 = puVar1;
  return;
}



/* Entry: 10289ebdc; end: 10289ebdf;  */

void FUN_10289ebdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec68e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae80b8;
  func_0x000107c61520(&UNK_10dae80b8,&UNK_11055f300);
  puRam0000000112ec68e8 = puVar1;
  return;
}



/* Entry: 10289ebe0; end: 10289ec4b;  */

void FUN_10289ebe0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec68e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae80b8;
  func_0x000107c61520(&UNK_10dae80b8,&UNK_11055f300);
  puRam0000000112ec68e8 = puVar1;
  return;
}



/* Entry: 10289ec4c; end: 10289eccf;  */

void FUN_10289ec4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10289ecd0; end: 10289ecd3;  */

void FUN_10289ecd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec6900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae8128;
  func_0x000107c61520(&UNK_10dae8128,&UNK_11055f300);
  puRam0000000112ec6900 = puVar1;
  return;
}



/* Entry: 10289ecd4; end: 10289ed13;  */

void FUN_10289ecd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec6900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae8128;
  func_0x000107c61520(&UNK_10dae8128,&UNK_11055f300);
  puRam0000000112ec6900 = puVar1;
  return;
}



/* Entry: 10289ed14; end: 10289ed17;  */

void FUN_10289ed14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec6908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae80e0;
  func_0x000107c61520(&UNK_10dae80e0,&UNK_11055f300);
  puRam0000000112ec6908 = puVar1;
  return;
}



/* Entry: 10289ed18; end: 10289ed57;  */

void FUN_10289ed18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec6908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae80e0;
  func_0x000107c61520(&UNK_10dae80e0,&UNK_11055f300);
  puRam0000000112ec6908 = puVar1;
  return;
}



/* Entry: 10289ed58; end: 10289eeff;  */

void FUN_10289ed58(void)

{
  return;
}



/* Entry: 10289ef00; end: 10289ef4b;  */

void FUN_10289ef00(undefined8 param_1)

{
  func_0x0001000285a8(0x112ec6998,&UNK_10dae81b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10289efb8,param_1);
  return;
}



/* Entry: 10289ef4c; end: 10289efb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289ef4c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10289f1cc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec69a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10289efb8; end: 10289efbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289efb8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10289f1cc();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec69a0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10289efc0; end: 10289f00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289efc0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec69a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10289f00c; end: 10289f14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10289f00c(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112ec69d0);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          func_0x00010289e150(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x00010289e150(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  return puVar5;
}



/* Entry: 10289f14c; end: 10289f1ab; -[_TtC35MessageActionMenuItemPluginRegistry39MessageActionMenuItemPluginSaberService init] */

void FUN_10289f14c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessageActionMenuItemPluginRegistry.MessageActionMenuItemPluginSaberService",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289f178);
  (*pcVar1)();
}



/* Entry: 10289f1ac; end: 10289f1cb; -[_TtC35MessageActionMenuItemPluginRegistry39MessageActionMenuItemPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289f1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec69a0));
  return;
}



/* Entry: 10289f1cc; end: 10289f1eb;  */

void FUN_10289f1cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128690a8);
  return;
}



/* Entry: 10289f1ec; end: 10289f257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289f1ec(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10289f5e0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec6a08) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10289f258; end: 10289f2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289f258(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec6a08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


