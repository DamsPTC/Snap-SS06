/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036b7ad4; end: 1036b7af7;  */

undefined1  [16] FUN_1036b7ad4(void)

{
  return ZEXT816(0x11067f1d0);
}



/* Entry: 1036b7af8; end: 1036b7ba3;  */

void FUN_1036b7af8(void)

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



/* Entry: 1036b7ba4; end: 1036b7bb3;  */

void FUN_1036b7ba4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1036b7bb4; end: 1036b7c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b7bb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(long *)(unaff_x20 + _DAT_112f86b10) = param_1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302bad8);
  *(undefined8 *)(unaff_x20 + _DAT_112f86b18) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86b20) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(uVar2);
  func_0x000107c61154(auStack_40,puVar1);
  return;
}



/* Entry: 1036b7c40; end: 1036b7cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b7c40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(long *)(unaff_x20 + _DAT_112f86b10) = param_1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302bad8);
  *(undefined8 *)(unaff_x20 + _DAT_112f86b18) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86b20) = param_2;
  FUN_1036b7cb8();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffd0,puVar1);
  return;
}



/* Entry: 1036b7cb8; end: 1036b7cd7;  */

void FUN_1036b7cb8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0be8);
  return;
}



/* Entry: 1036b7cd8; end: 1036b7e53;  */

void FUN_1036b7cd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = &UNK_11067f298;
  func_0x000107c613fc(&UNK_11067f298,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = PTR_PTR_1126ad418;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1036b7e54;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1036b97f8;
  puStack_68 = &UNK_11067f2b0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174();
  func_0x000107c46b4c();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puStack_58);
  puVar2 = &UNK_11067f2e8;
  func_0x000107c613fc(&UNK_11067f2e8,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar3;
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = (code *)0x1036b985c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_101016bdc;
  puStack_68 = &UNK_11067f300;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(puVar3);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c57ee0(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1036b7e54; end: 1036b7f1b;  */

undefined * FUN_1036b7e54(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112f86b58,&UNK_10dbfaa50);
  puVar1 = &UNK_11067f3d8;
  func_0x000107c613fc(&UNK_11067f3d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61174(uVar2);
  uVar2 = 1;
  func_0x000104887c7c(1,0,0x54,4,0xd000000000000018,0x800000010f1590e0,&UNK_10dbfaa60,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000103edf0bc();
  func_0x000107c61574(uVar2);
  return puVar1;
}



/* Entry: 1036b7f1c; end: 1036b7f73;  */

void FUN_1036b7f1c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1036b7f74;
  plVar1[4] = param_3;
  plVar1[5] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b8068,0,0);
  return;
}



/* Entry: 1036b7f74; end: 1036b7fe7;  */

void FUN_1036b7f74(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001036b7fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b7fe8,0,0);
  return;
}



/* Entry: 1036b7fe8; end: 1036b7fff;  */

void FUN_1036b7fe8(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001036b7ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036b8000; end: 1036b804f; -[_TtC33SnapEditorReversePluginEntryPoint23SnapEditorReversePlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b8038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b803c) */

void FUN_1036b8000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036b7cd8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b8050; end: 1036b8067;  */

void FUN_1036b8050(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b8068,0,0);
  return;
}



/* Entry: 1036b8068; end: 1036b8177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b8068(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  puVar2 = PTR_PTR_1126bcf20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x30) = puVar2;
  func_0x000107c56438();
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  lVar3 = *(long *)(lVar3 + 0x40);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  uVar5 = lVar3 + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar5;
  func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_112f86b18);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  func_0x000107c4ca6c();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
  func_0x000107c61170(uVar6);
  plVar8 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1036b8178;
                    /* WARNING: Could not recover jumptable at 0x0001036b8174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10121ae24)();
  return;
}



/* Entry: 1036b8178; end: 1036b81cb;  */

void FUN_1036b8178(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0xb8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b81cc,0,0);
  return;
}



/* Entry: 1036b81cc; end: 1036b8427;  */

void FUN_1036b81cc(void)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  code *pcVar12;
  
  lVar10 = *(long *)(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar10;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar9);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    if (lVar10 != 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar1 = *(long *)(unaff_x22 + 0x40);
      uVar2 = *(undefined1 *)(unaff_x22 + 0xb8);
      lVar10 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar5 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      (**(code **)(lVar1 + 0x38))();
      uVar9 = 0x112d68ec0;
      FUN_1036b9c9c(0x112d68ec0,PTR___s10Foundation3URLVs21_ObjectiveCBridgeableAAMc_1103509b8);
      func_0x000107c604bc(uVar11,uVar5,uVar4,uVar9);
      func_0x000100d592c4(uVar11,uVar2);
      uVar7 = uVar5;
      (**(code **)(lVar1 + 0x30))(uVar5,1,uVar4);
      if ((int)uVar7 != 1) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
        lVar10 = *(long *)(unaff_x22 + 0x48);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
        pcVar12 = *(code **)(*(long *)(unaff_x22 + 0x40) + 0x20);
        (*pcVar12)(uVar4,uVar5,uVar11);
        func_0x000107c615c0(uVar5);
        (*pcVar12)(uVar9,uVar4,uVar11);
        func_0x000107c615c0(uVar4);
        uVar7 = lVar10 + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x80) = uVar7;
        plVar8 = (long *)0xd0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x88) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_1036b8428;
        lVar10 = *(long *)(unaff_x22 + 0x28);
        plVar8[0x11] = *(long *)(unaff_x22 + 0x50);
        plVar8[0x12] = lVar10;
        plVar8[0x10] = uVar7;
        lVar10 = 0;
        func_0x000107c5ede0();
        plVar8[0x13] = lVar10;
        lVar10 = *(long *)(lVar10 + -8);
        plVar8[0x14] = lVar10;
        uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar8[0x15] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b8b1c,0,0);
        return;
      }
      func_0x000107c615c0(uVar5);
    }
    puVar6 = *(undefined1 **)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c615c0();
    FUN_1036b9a4c();
    func_0x000107c613f8(&UNK_11067f470,puVar6,0,0);
    *puVar6 = 2;
    func_0x000107c61654();
    func_0x000107c61170(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x0001036b8384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036b8428; end: 1036b8483;  */

void FUN_1036b8428(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1036b8484;
  }
  else {
    pcVar1 = FUN_1036b8a50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1036b8484; end: 1036b85f3;  */

void FUN_1036b8484(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  
  puVar2 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  func_0x000107c5dda4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x98) = puVar2;
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126affe0;
  func_0x000107c61168();
  uVar4 = 0;
  func_0x0001036b9cdc(0,0x112d530c8,&PTR_PTR_1126affc8);
  func_0x000107c61174(puVar2);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
  func_0x000107c3d5d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar2 = puVar3;
    func_0x000100759c94(puVar3,0);
    *(undefined **)(unaff_x22 + 0xa0) = puVar2;
    func_0x000107c61170(puVar3);
    plVar6 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1036b85f4;
                    /* WARNING: Could not recover jumptable at 0x0001036b85ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)0x1036b9864)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036b85f4);
  (*pcVar1)();
}



/* Entry: 1036b85f4; end: 1036b8647;  */

void FUN_1036b85f4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  *(undefined1 *)(lVar1 + 0xb9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b8648,0,0);
  return;
}



/* Entry: 1036b8648; end: 1036b8a4f;  */

void FUN_1036b8648(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)(unaff_x22 + 0xb0);
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    *(long *)(unaff_x22 + 0x18) = lVar13;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
    if (iVar2 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar12,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar11);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar13 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61170(uVar14);
    pcVar15 = *(code **)(lVar13 + 8);
    (*pcVar15)(uVar12,uVar11);
  }
  else {
    puVar3 = *(undefined1 **)(unaff_x22 + 0xa0);
    func_0x000107c61574();
    if (lVar13 == 0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar13 = *(long *)(unaff_x22 + 0x40);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
      FUN_1036b9a4c();
      func_0x000107c613f8(&UNK_11067f470,puVar3,0,0);
      *puVar3 = 4;
      func_0x000107c61654();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar14);
      pcVar15 = *(code **)(lVar13 + 8);
      (*pcVar15)(uVar12,uVar11);
    }
    else {
      puVar3 = *(undefined1 **)(unaff_x22 + 0x60);
      func_0x000107c4e924();
      func_0x000107c61180();
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = puVar3;
        func_0x000107c4c930();
        func_0x000107c61180();
        func_0x000107c61170();
        if (puVar4 != (undefined1 *)0x0) {
          puVar3 = puVar4;
          func_0x000107c41214();
          func_0x000107c61180();
          if (puVar3 != (undefined1 *)0x0) {
            puVar5 = puVar3;
            func_0x000107c5ee30();
            uVar11 = param_2;
            func_0x000107c61170(puVar3);
            puVar3 = puVar4;
            func_0x000107c4c99c();
            func_0x000107c61180();
            if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x1036b8a50);
              (*pcVar15)();
            }
            lVar13 = *(long *)(unaff_x22 + 0x60);
            func_0x000107c4ca08();
            func_0x000107c61180();
            func_0x000107c61170(puVar3);
            if (lVar13 != 0) {
              lVar6 = lVar13;
              func_0x000107c41214();
              func_0x000107c61180();
              func_0x000107c61170(lVar13);
              if (lVar6 != 0) {
                uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
                uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
                uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
                uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
                uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
                lVar13 = *(long *)(unaff_x22 + 0x40);
                uVar17 = *(undefined8 *)(unaff_x22 + 0x30);
                uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
                lVar7 = lVar6;
                func_0x000107c5ee30(lVar6);
                func_0x000107c61170(lVar6);
                puVar8 = PTR_PTR_1126a61e0;
                func_0x000107c610f8(PTR_PTR_1126a61e0);
                lVar6 = lVar7;
                func_0x000107c5ee20(lVar7,uVar11);
                puVar3 = puVar5;
                func_0x000107c5ee20(puVar5,param_2);
                func_0x000107c47694(puVar8);
                func_0x000107c61170(uVar17);
                func_0x00010006c090(puVar5,param_2);
                func_0x000107c61170(puVar3);
                func_0x000107c61170(lVar6);
                func_0x00010006c090(lVar7,uVar11);
                func_0x000100d592c4(uVar14,uVar1);
                func_0x000107c61170(puVar4);
                func_0x000107c61170(uVar9);
                pcVar15 = *(code **)(lVar13 + 8);
                (*pcVar15)(uVar10,uVar12);
                (*pcVar15)(uVar16,uVar12);
                func_0x000107c615c0(uVar10);
                func_0x000107c615c0(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001036b8908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(unaff_x22 + 8))(puVar8);
                return;
              }
            }
            func_0x00010006c090(puVar5,param_2);
          }
          func_0x000107c61170();
          puVar3 = puVar4;
        }
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar13 = *(long *)(unaff_x22 + 0x40);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
      FUN_1036b9a4c();
      func_0x000107c613f8(&UNK_11067f470,puVar3,0,0);
      *puVar3 = 4;
      func_0x000107c61654();
      func_0x000107c61170(uVar10);
      func_0x000100d592c4(uVar9,uVar1);
      func_0x000107c61170(uVar14);
      pcVar15 = *(code **)(lVar13 + 8);
      (*pcVar15)(uVar12,uVar11);
    }
  }
  (*pcVar15)(uVar16,uVar11);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001036b8a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036b8a50; end: 1036b8ab7;  */

void FUN_1036b8a50(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036b8ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036b8ab8; end: 1036b8b1b;  */

void FUN_1036b8ab8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b8b1c,0,0);
  return;
}



/* Entry: 1036b8b1c; end: 1036b8c8b;  */

/* WARNING: Removing unreachable block (ram,0x0001036b8b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b8b1c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  undefined8 *puVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  FUN_1036b90d4();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar6 = *(long *)(unaff_x22 + 0x90);
  FUN_1036b9a8c();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1036b8c8c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar5 = *(undefined8 *)(lVar6 + _DAT_112f86b20);
  puVar2 = &UNK_11067f338;
  func_0x000107c613fc(&UNK_11067f338,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,lVar6);
  puVar3 = &UNK_11067f360;
  func_0x000107c613fc(&UNK_11067f360,0x20,7);
  puVar7 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(code **)(unaff_x22 + 0x70) = FUN_1036b9c88;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_101a37074;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11067f378;
  func_0x000107c60bc4(puVar7);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c5c304(uVar5);
  func_0x000107c60bd0(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1036b8c8c; end: 1036b8d03;  */

void FUN_1036b8c8c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    (**(code **)(*(long *)(lVar2 + 0xa0) + 0x20))
              (*(undefined8 *)(lVar2 + 0x80),*(undefined8 *)(lVar2 + 0xa8),
               *(undefined8 *)(lVar2 + 0x98));
    pcVar1 = FUN_1036b8d04;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_1036b8d4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1036b8d04; end: 1036b8d4b;  */

void FUN_1036b8d04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001036b8d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036b8d4c; end: 1036b8d8f;  */

void FUN_1036b8d4c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001036b8d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036b8d90; end: 1036b90d3;  */

void FUN_1036b8d90(undefined1 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  puVar2 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined1 *)0x0) {
    if (param_2 == 0) {
      puVar3 = puVar2;
      if (param_1 != (undefined1 *)0x0) {
        func_0x000107c61174();
        puVar3 = param_1;
        func_0x00010af20360();
        func_0x000107c61180();
        if (puVar3 != (undefined1 *)0x0) {
          func_0x000107c5edb4(lVar8);
          func_0x000107c61170(puVar3);
          pcVar12 = *(code **)(lVar11 + 0x20);
          (*pcVar12)(lVar9,lVar8,lVar1);
          uStack_88 = 0;
          uStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x25);
          func_0x000107c6142c(uStack_80);
          uStack_88 = 0xd000000000000023;
          uStack_80 = 0x800000010f159090;
          uVar5 = 0x112d4b608;
          FUN_1036b9c9c(0x112d4b608,PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0
                       );
          func_0x000107c6057c(lVar1,uVar5);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(uStack_80);
          (**(code **)(lVar11 + 0x10))(puVar10,lVar9,lVar1);
          (*pcVar12)(*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x28),puVar10,lVar1);
          func_0x000107c61450(param_4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar2);
          (**(code **)(lVar11 + 8))(lVar9,lVar1);
          return;
        }
        func_0x000107c61170();
        puVar3 = param_1;
      }
      FUN_1036b9a4c();
      puVar4 = &UNK_11067f470;
      func_0x000107c613f8(&UNK_11067f470,puVar3,0,0);
      *puVar3 = 3;
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar7 = puVar4;
      func_0x000107c61454(param_4,uVar5);
      func_0x000107c61170(puVar2);
    }
    else {
      uStack_88 = 0;
      uStack_80 = 0xe000000000000000;
      func_0x000107c614b0(param_2);
      func_0x000107c602fc(0x16);
      func_0x000107c6142c(uStack_80);
      uStack_88 = 0xd000000000000014;
      uStack_80 = 0x800000010f1590c0;
      func_0x000107c614cc(param_2,auStack_90,auStack_a8);
      uVar5 = uStack_98;
      func_0x000107c60640(uStack_a0,uStack_98);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uStack_80);
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      plVar6 = (long *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *plVar6 = param_2;
      func_0x000107c614b0(param_2);
      func_0x000107c61454(param_4,uVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c614ac(param_2);
    }
  }
  return;
}



/* Entry: 1036b90d4; end: 1036b977f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036b90d4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  puVar5 = puVar4;
  func_0x000107c5ed90();
  func_0x000107c48fd4();
  func_0x000107c61170(puVar5);
  func_0x000107c42378(&uStack_78,puVar4);
  puVar5 = PTR_PTR_1126bf698;
  func_0x000107c61168(PTR_PTR_1126bf698);
  puVar6 = puVar5;
  func_0x000107c5ed90();
  func_0x000107c3e244(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar20 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar2 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar18 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c61174(puVar5);
  puVar7 = puVar6;
  uStack_78 = uVar20;
  uStack_70 = uVar11;
  uStack_68 = uVar18;
  func_0x000107c5dc5c(puVar6);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c5dc5c(puVar6);
  func_0x000107c61180();
  uStack_78 = uVar20;
  uStack_70 = uVar2;
  uStack_68 = uVar18;
  func_0x000107c5dc5c(puVar6);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126bf6a0;
  func_0x000107c610f8();
  func_0x000107c30984(0x3ff0000000000000);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  puVar15 = (undefined1 *)0x112deb0b0;
  puVar10 = puVar15;
  FUN_1036b99d4(0x112deb0b0,&PTR_PTR_1126bf6a0,0x112deb0b8,&UNK_10d9b73c8);
  func_0x000107c613fc();
  *(undefined8 *)(puVar10 + 0x18) = 3;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(undefined **)(puVar10 + 0x20) = puVar9;
  uVar11 = 0;
  func_0x0001036b9cdc(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
  func_0x000107c61174();
  puVar12 = puVar10;
  func_0x000107c5fc48(puVar10,uVar11);
  func_0x000107c61574(puVar10);
  puVar10 = puVar12;
  func_0x00010911db9c(puVar12,0,0);
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar10 == (undefined1 *)0x0) {
    FUN_1036b9a4c();
    func_0x000107c613f8(&UNK_11067f470,puVar12,0,0);
    *puVar12 = 5;
    func_0x000107c61654();
  }
  else {
    puVar6 = PTR_PTR_1126bf6c0;
    func_0x000107c610f8(PTR_PTR_1126bf6c0);
    func_0x000107c309bc();
    puVar7 = PTR_PTR_1126bf7a8;
    func_0x000107c610f8(PTR_PTR_1126bf7a8);
    func_0x000107c453e4();
    func_0x00010af222ac();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar8 = PTR_PTR_1126c4910;
    func_0x000107c610f8(PTR_PTR_1126c4910);
    func_0x00010b68e9f8();
    puVar13 = puVar7;
    func_0x00010af222dc(puVar7,puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar13);
    func_0x00010af2227c(puVar7,0);
    func_0x000107c61180();
    func_0x000107c61170();
    puVar8 = PTR_PTR_1126bf7b0;
    func_0x000107c61168();
    func_0x00010af20be0();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b977c);
      (*pcVar3)();
    }
    lVar19 = *(long *)(unaff_x20 + _DAT_112f86b10);
    func_0x00010af20c00();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar13 = puVar8;
    func_0x00010af20ce8(puVar8);
    func_0x000107c61180();
    puVar14 = puVar7;
    func_0x00010af228f4(puVar7,puVar13);
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar14);
    puVar1 = (undefined8 *)(lVar19 + _DAT_11302bae0);
    puVar15 = (undefined1 *)*puVar1;
    uVar11 = puVar1[1];
    func_0x000107c61434(uVar11);
    func_0x000107c5fadc(puVar15,uVar11);
    func_0x000107c6142c(uVar11);
    puVar13 = puVar7;
    func_0x00010af22364(puVar7,puVar15);
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar13);
    func_0x00010af22520(0xbff0000000000000,puVar7);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x00010af2247c(puVar7,5000);
    func_0x000107c61180();
    func_0x000107c61170();
    puVar13 = puVar7;
    func_0x00010af22938(puVar7);
    func_0x000107c61180();
    puVar14 = PTR_PTR_1126bf7b8;
    func_0x000107c61168();
    func_0x00010af206d8();
    func_0x000107c61180();
    if (puVar14 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b9780);
      (*pcVar3)();
    }
    func_0x00010af207cc();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar12 = puVar14;
    func_0x00010af20854();
    func_0x000107c61180();
    if (puVar12 != (undefined1 *)0x0) {
      lVar19 = 0x112dec740;
      FUN_1036b99d4(0x112dec740,&PTR_PTR_1126de9f0,0x112dec748,&UNK_10d9b8548);
      func_0x000107c613fc();
      *(undefined8 *)(lVar19 + 0x18) = 3;
      *(undefined8 *)(lVar19 + 0x10) = 1;
      *(undefined1 **)(lVar19 + 0x20) = puVar12;
      puVar16 = PTR_PTR_1126bf7c0;
      func_0x000107c610f8(PTR_PTR_1126bf7c0);
      uVar11 = 0;
      func_0x0001036b9cdc(0,0x112dec740,&PTR_PTR_1126de9f0);
      func_0x000107c61174();
      lVar17 = lVar19;
      func_0x000107c5fc48(lVar19,uVar11);
      func_0x000107c61574(lVar19);
      func_0x00010af1fd14(puVar16,puVar6,lVar17);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar17);
      return puVar16;
    }
    FUN_1036b9a4c();
    func_0x000107c613f8(&UNK_11067f470,puVar12,0,0);
    *puVar12 = 5;
    func_0x000107c61654();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    puVar9 = puVar14;
    puVar5 = puVar13;
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar4);
  return puVar15;
}



/* Entry: 1036b9780; end: 1036b97af;  */

void FUN_1036b9780(void)

{
  FUN_1036b7cb8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036b97b0; end: 1036b97f7; -[_TtC33SnapEditorReversePluginEntryPoint23SnapEditorReversePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036b97dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b97e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b97b0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86b10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f86b18));
  return;
}



/* Entry: 1036b97f8; end: 1036b983f;  */

void FUN_1036b97f8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1036b9840; end: 1036b987b;  */

void FUN_1036b9840(long param_1,long param_2)

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



/* Entry: 1036b987c; end: 1036b9943;  */

void FUN_1036b987c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001036b98c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1036b9944;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11067f3b0;
  func_0x000107c613fc(&UNK_11067f3b0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_1036b9d1c,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1036b9944; end: 1036b99c3;  */

void FUN_1036b9944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1036b9fd0,0,0);
  return;
}



/* Entry: 1036b99c4; end: 1036b99d3;  */

void FUN_1036b99c4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001036b99d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1036b99d4; end: 1036b9a4b;  */

void FUN_1036b99d4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001036b9cdc(0,param_1,param_2);
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



/* Entry: 1036b9a4c; end: 1036b9a8b;  */

void FUN_1036b9a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f86b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfaaf8;
  func_0x000107c61520(&UNK_10dbfaaf8,&UNK_11067f470);
  puRam0000000112f86b50 = puVar1;
  return;
}



/* Entry: 1036b9a8c; end: 1036b9c87;  */

undefined * FUN_1036b9a8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5f11c();
  lVar12 = *(long *)(lVar3 + -8);
  lStack_78 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar4 + -8);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_70 = 0x6465737265766572;
  uStack_68 = 0xe90000000000002d;
  func_0x00010011df08();
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  func_0x000107c5fb78(lVar5,param_2);
  func_0x000107c6142c(param_2);
  uVar2 = uStack_68;
  uVar1 = uStack_70;
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c5edb4(lVar11,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c5f0f4(puVar9);
  func_0x000107c5ed94(lVar11 - extraout_x12,uVar1,uVar2,puVar9);
  func_0x000107c6142c(uVar2);
  (**(code **)(lVar12 + 8))(puVar9,lStack_78);
  pcVar10 = *(code **)(lVar8 + 8);
  (*pcVar10)(lVar11,lVar4);
  puVar6 = PTR_PTR_1126bf7c8;
  func_0x000107c610f8(PTR_PTR_1126bf7c8);
  puVar7 = puVar6;
  func_0x000107c5ed90();
  func_0x00010af1ff64(puVar6,puVar7);
  func_0x000107c61170(puVar7);
  (*pcVar10)(lVar11 - extraout_x12,lVar4);
  return puVar6;
}



/* Entry: 1036b9c88; end: 1036b9c9b;  */

void FUN_1036b9c88(undefined8 param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_00;
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  puVar4 = (undefined1 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar4 != (undefined1 *)0x0) {
    if (param_3 == 0) {
      puVar5 = puVar4;
      if (param_2 != (undefined1 *)0x0) {
        func_0x000107c61174();
        puVar5 = param_2;
        func_0x00010af20360();
        func_0x000107c61180();
        if (puVar5 != (undefined1 *)0x0) {
          func_0x000107c5edb4(lVar10);
          func_0x000107c61170(puVar5);
          pcVar14 = *(code **)(lVar13 + 0x20);
          (*pcVar14)(lVar11,lVar10,lVar3);
          uStack_88 = 0;
          uStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x25);
          func_0x000107c6142c(uStack_80);
          uStack_88 = 0xd000000000000023;
          uStack_80 = 0x800000010f159090;
          uVar7 = 0x112d4b608;
          FUN_1036b9c9c(0x112d4b608,PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0
                       );
          func_0x000107c6057c(lVar3,uVar7);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(uStack_80);
          (**(code **)(lVar13 + 0x10))(puVar12,lVar11,lVar3);
          (*pcVar14)(*(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x28),puVar12,lVar3);
          func_0x000107c61450(lVar2);
          func_0x000107c61170(param_2);
          func_0x000107c61170(puVar4);
          (**(code **)(lVar13 + 8))(lVar11,lVar3);
          return;
        }
        func_0x000107c61170();
        puVar5 = param_2;
      }
      FUN_1036b9a4c();
      puVar6 = &UNK_11067f470;
      func_0x000107c613f8(&UNK_11067f470,puVar5,0,0);
      *puVar5 = 3;
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar9 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar9 = puVar6;
      func_0x000107c61454(lVar2,uVar7);
      func_0x000107c61170(puVar4);
    }
    else {
      uStack_88 = 0;
      uStack_80 = 0xe000000000000000;
      func_0x000107c614b0(param_3);
      func_0x000107c602fc(0x16);
      func_0x000107c6142c(uStack_80);
      uStack_88 = 0xd000000000000014;
      uStack_80 = 0x800000010f1590c0;
      func_0x000107c614cc(param_3,auStack_90,auStack_a8);
      uVar7 = uStack_98;
      func_0x000107c60640(uStack_a0,uStack_98);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uStack_80);
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      plVar8 = (long *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *plVar8 = param_3;
      func_0x000107c614b0(param_3);
      func_0x000107c61454(lVar2,uVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c614ac(param_3);
    }
  }
  return;
}



/* Entry: 1036b9c9c; end: 1036b9d1b;  */

void FUN_1036b9c9c(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5ede0(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1036b9d1c; end: 1036b9d27;  */

void FUN_1036b9d1c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*(code *)0x1036b9fd4)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1036b9d28; end: 1036b9d77;  */

void FUN_1036b9d28(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1036b9d78; end: 1036b9ddb;  */

void FUN_1036b9d78(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1036b9ddc;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_1036b7f74;
  plVar3[4] = lVar2;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b8068,0,0);
  return;
}



/* Entry: 1036b9ddc; end: 1036b9e17;  */

void FUN_1036b9ddc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001036b9e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1036b9e18; end: 1036b9f7f;  */

int FUN_1036b9e18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1036b9e94;
        goto LAB_1036b9e78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1036b9e78:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1036b9e94:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1036b9f80; end: 1036b9fbf;  */

void FUN_1036b9f80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f86b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfaad0;
  func_0x000107c61520(&UNK_10dbfaad0,&UNK_11067f470);
  puRam0000000112f86b60 = puVar1;
  return;
}



/* Entry: 1036b9fc0; end: 1036b9fd7;  */

void FUN_1036b9fc0(long param_1,long param_2)

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



/* Entry: 1036b9fd8; end: 1036ba17b;  */

void FUN_1036b9fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067f598;
  func_0x000107c613fc(&UNK_11067f598,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1036ba070,puVar1);
  return;
}



/* Entry: 1036ba17c; end: 1036ba18b;  */

undefined1  [16] FUN_1036ba17c(void)

{
  return ZEXT816(0x11067f5c0);
}



/* Entry: 1036ba18c; end: 1036ba313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036ba18c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112f86b68;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86b70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86b78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86b80) = *(undefined8 *)(param_3 + _DAT_112ff4f08);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_50,puVar2);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 1036ba314; end: 1036ba547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ba314(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f86b78) + _DAT_112fb1200);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&puStack_80);
  func_0x000107c61574(uVar7);
  puVar1 = puStack_80;
  func_0x000107c614f0(puStack_80);
  pcVar11 = *(code **)(lStack_78 + 0x10);
  func_0x000107c615f0();
  (*pcVar11)();
  puVar2 = PTR_PTR_1126ad420;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59378();
  puVar3 = PTR_PTR_1133bb560;
  lVar8 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86b70) + _DAT_11302bab8);
  lVar9 = 0;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x10) != 0) {
      uVar6 = 0;
      func_0x000107c61438(lVar8);
      func_0x000100fac3bc();
      if ((uVar6 & 1) != 0) {
        lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + (long)puVar3 * 8);
        func_0x000107c615f0(lVar10);
        func_0x000107c61430(lVar8,2);
        puVar3 = PTR_PTR_1126d2670;
        func_0x000107c61168(PTR_PTR_1126d2670);
        lVar9 = lVar10;
        func_0x000107c6148c(lVar10,puVar3);
        if (lVar9 == 0) {
          func_0x000107c615e8(lVar10);
        }
        goto LAB_1036ba458;
      }
      func_0x000107c61430(lVar8,2);
    }
    lVar9 = 0;
  }
LAB_1036ba458:
  func_0x000107c58bc0(param_1);
  func_0x000107c61170(lVar9);
  puVar3 = &UNK_11067f688;
  func_0x000107c613fc(&UNK_11067f688,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar4 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = FUN_1036ba548;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_78 = 0x42000000;
  puStack_70 = &UNK_101016bdc;
  puStack_68 = &UNK_11067f6a0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(puVar2);
  func_0x000107c46b38(puVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_58);
  func_0x000107c58bc4(param_1);
  func_0x000107c615e8(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1036ba548; end: 1036ba54f;  */

void FUN_1036ba548(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036ba550; end: 1036ba59f; -[_TtC30SnapEditorSavePluginEntryPoint20SnapEditorSavePlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036ba588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ba58c) */

void FUN_1036ba550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036ba314(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036ba5a0; end: 1036ba5d3;  */

void FUN_1036ba5a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ba5d4; end: 1036ba62b; -[_TtC30SnapEditorSavePluginEntryPoint20SnapEditorSavePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036ba5f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ba5f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ba5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86b70));
  return;
}



/* Entry: 1036ba62c; end: 1036ba64b; -[_TtC30SnapEditorSavePluginEntryPoint20SnapEditorSavePlugin commonLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ba62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112f86b70) + _DAT_11302baf0));
  return;
}



/* Entry: 1036ba64c; end: 1036ba733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ba64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_11302bad0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f86b70);
  func_0x000107c61428(lVar4 + _DAT_11302bad0,auStack_58,0,0);
  uVar2 = lVar4 + lVar1;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c61150();
    if ((uVar3 & 1) == 0) {
      func_0x000107c615e8(uVar2);
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c5b220(uVar2);
      func_0x000107c615e8(uVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 1036ba734; end: 1036ba7b7; -[_TtC30SnapEditorSavePluginEntryPoint20SnapEditorSavePlugin snapDocSaveServiceDidSaveMemoriesWithEntryId:snapId:] */

/* WARNING: Possible PIC construction at 0x0001036ba79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ba7a0) */

void FUN_1036ba734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1036ba64c(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1036ba7b8; end: 1036ba82b; -[_TtC30SnapEditorSavePluginEntryPoint20SnapEditorSavePlugin snapDocSaveServiceShouldSkipExitGuard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036ba7b8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uVar1 = (uint)uVar2;
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8(uStack_40);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 1036ba82c; end: 1036ba847;  */

void FUN_1036ba82c(long param_1,long param_2)

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



/* Entry: 1036ba848; end: 1036ba867;  */

void FUN_1036ba848(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0cf0);
  return;
}



/* Entry: 1036ba868; end: 1036baa63;  */

void FUN_1036ba868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067f7b0;
  func_0x000107c613fc(&UNK_11067f7b0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x1036ba924,puVar1);
  return;
}



/* Entry: 1036baa64; end: 1036baa73;  */

undefined1  [16] FUN_1036baa64(void)

{
  return ZEXT816(0x11067f7d8);
}



/* Entry: 1036baa74; end: 1036babfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036baa74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f86bb0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86bb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86bc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86bc8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86bd0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86bd8) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036babfc; end: 1036bae33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036babfc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86bc8) + _DAT_112ff76b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c53fcc();
  lVar7 = *(long *)(unaff_x20 + _DAT_112f86bb8);
  func_0x000107c59354(lVar1);
  func_0x000107c57ebc(lVar1);
  puVar2 = PTR_PTR_1126ad428;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59380();
  puVar3 = PTR_PTR_1133bb570;
  lVar7 = *(long *)(lVar7 + _DAT_11302bab8);
  uVar4 = 0;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x000107c61434(lVar7);
      func_0x000100fac3bc();
      if ((param_2 & 1) == 0) {
        func_0x000107c6142c(lVar7);
      }
      else {
        lVar8 = *(long *)(*(long *)(lVar7 + 0x38) + (long)puVar3 * 8);
        func_0x000107c615f0(lVar8);
        func_0x000107c6142c(lVar7);
        uVar4 = 0;
        FUN_1038ec560(0);
        lVar7 = lVar8;
        func_0x000107c61480(lVar8,uVar4);
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)(lVar7 + _DAT_112fad218);
          func_0x000107c61174(uVar4);
          func_0x000107c615e8(lVar8);
          goto LAB_1036bad48;
        }
        func_0x000107c615e8(lVar8);
      }
    }
    uVar4 = 0;
  }
LAB_1036bad48:
  func_0x000107c58e9c(param_1);
  func_0x000107c61170(uVar4);
  puVar3 = &UNK_11067f8d0;
  func_0x000107c613fc(&UNK_11067f8d0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_50 = FUN_1036bae34;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101016bdc;
  puStack_58 = &UNK_11067f8e8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61174(puVar2);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_48);
  func_0x000107c58ea4(param_1);
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1036bae34; end: 1036bae3b;  */

void FUN_1036bae34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036bae3c; end: 1036bae8b; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036bae74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bae78) */

void FUN_1036bae3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036babfc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036bae8c; end: 1036bb20b;  */

/* WARNING: Possible PIC construction at 0x0001036baf20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036baf44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bafc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036baff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bb19c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb184) */
/* WARNING: Removing unreachable block (ram,0x0001036bb08c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb098) */
/* WARNING: Removing unreachable block (ram,0x0001036bb028) */
/* WARNING: Removing unreachable block (ram,0x0001036bb12c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb130) */
/* WARNING: Removing unreachable block (ram,0x0001036bb034) */
/* WARNING: Removing unreachable block (ram,0x0001036bb140) */
/* WARNING: Removing unreachable block (ram,0x0001036bb03c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb04c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb050) */
/* WARNING: Removing unreachable block (ram,0x0001036bb09c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb054) */
/* WARNING: Removing unreachable block (ram,0x0001036bb128) */
/* WARNING: Removing unreachable block (ram,0x0001036bb060) */
/* WARNING: Removing unreachable block (ram,0x0001036bb06c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb124) */
/* WARNING: Removing unreachable block (ram,0x0001036bb078) */
/* WARNING: Removing unreachable block (ram,0x0001036bb0ac) */
/* WARNING: Removing unreachable block (ram,0x0001036bb0bc) */
/* WARNING: Removing unreachable block (ram,0x0001036bb0d8) */
/* WARNING: Removing unreachable block (ram,0x0001036bb100) */
/* WARNING: Removing unreachable block (ram,0x0001036bb0e8) */
/* WARNING: Removing unreachable block (ram,0x0001036bb0fc) */
/* WARNING: Removing unreachable block (ram,0x0001036bb148) */
/* WARNING: Removing unreachable block (ram,0x0001036bb154) */
/* WARNING: Removing unreachable block (ram,0x0001036bb1c0) */
/* WARNING: Removing unreachable block (ram,0x0001036bb158) */
/* WARNING: Removing unreachable block (ram,0x0001036bb1cc) */
/* WARNING: Removing unreachable block (ram,0x0001036bb160) */
/* WARNING: Removing unreachable block (ram,0x0001036bb1f8) */
/* WARNING: Removing unreachable block (ram,0x0001036bb168) */
/* WARNING: Removing unreachable block (ram,0x0001036bb208) */
/* WARNING: Removing unreachable block (ram,0x0001036bb170) */
/* WARNING: Removing unreachable block (ram,0x0001036bb178) */
/* WARNING: Removing unreachable block (ram,0x0001036bb084) */
/* WARNING: Removing unreachable block (ram,0x0001036baff8) */
/* WARNING: Removing unreachable block (ram,0x0001036bafc4) */
/* WARNING: Removing unreachable block (ram,0x0001036baf48) */
/* WARNING: Removing unreachable block (ram,0x0001036baf24) */
/* WARNING: Removing unreachable block (ram,0x0001036baf6c) */
/* WARNING: Removing unreachable block (ram,0x0001036baf78) */
/* WARNING: Removing unreachable block (ram,0x0001036baf30) */
/* WARNING: Removing unreachable block (ram,0x0001036bb1d4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bae8c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f86bd8) + _DAT_113077160);
  func_0x000107c51e80();
  if (iVar1 != 0) {
    uVar2 = 0x6375735f746e6573;
    func_0x000107c5fadc(0x6375735f746e6573,0xee00646564656563);
    uVar3 = 0;
    func_0x000107c5fe40(0);
    func_0x000107c312f4(uVar2,uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1036bb20c; end: 1036bb23f;  */

void FUN_1036bb20c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036bb240; end: 1036bb2b7; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036bb25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bb280) */
/* WARNING: Removing unreachable block (ram,0x0001036bb260) */
/* WARNING: Removing unreachable block (ram,0x0001036bb2a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bb240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86bb8));
  return;
}



/* Entry: 1036bb2b8; end: 1036bb413;  */

/* WARNING: Possible PIC construction at 0x0001036bb338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb3c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bb33c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb3f8) */
/* WARNING: Removing unreachable block (ram,0x0001036bb354) */
/* WARNING: Removing unreachable block (ram,0x0001036bb38c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb390) */
/* WARNING: Removing unreachable block (ram,0x0001036bb3ac) */
/* WARNING: Removing unreachable block (ram,0x0001036bb3bc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bb2b8(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  puVar1 = PTR_PTR_1133bb570;
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86bb8) + _DAT_11302bab8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    func_0x000107c61434(lVar2);
    func_0x000100fac3bc();
    if ((param_2 & 1) != 0) {
      func_0x000107c615f0(*(undefined8 *)(*(long *)(lVar2 + 0x38) + (long)puVar1 * 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1036bb414; end: 1036bb457; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin didDetermineSendRecipientsWithRecipientsCount:groupCount:] */

void FUN_1036bb414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1036bb2b8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036bb458; end: 1036bb857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bb458(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined1 auStack_78 [24];
  
  puVar12 = (undefined *)*param_1;
  cVar2 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (cVar2 == '\x01') goto LAB_1036bb78c;
  puVar4 = puVar12;
  func_0x000107c49a98();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar4);
  }
  puVar4 = puVar12;
  func_0x000107c4ec44();
  func_0x000107c61180();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar4);
  }
  puVar4 = puVar12;
  func_0x000107c4ebe4();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar4;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar4);
  }
  puVar4 = puVar12;
  func_0x000107c4ebe8();
  func_0x000107c61180();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    uVar7 = 0;
    FUN_1036bbf40(0,0x112d51360,&PTR_PTR_1126becd8);
    puVar8 = puVar4;
    func_0x000107c5fc54(puVar4,uVar7);
    func_0x000107c61170(puVar4);
  }
  puVar4 = puVar12;
  func_0x000107c49bd0();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar4);
  }
  puVar4 = puVar12;
  func_0x000107c5d0f0();
  iVar3 = (int)puVar4;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(puVar6);
      if (((ulong)puVar13 & 1) == 0) {
        puVar1 = (undefined8 *)
                 (*(long *)(*(long *)(param_2 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd70);
        uVar7 = *puVar1;
        lVar9 = puVar1[1];
        uVar10 = uVar7;
        func_0x000107c614f0();
        pcVar15 = *(code **)(lVar9 + 8);
        func_0x000107c615f0(uVar7);
        (*pcVar15)(0x4f545f444e4553,0xe700000000000000,1,0,PTR___swiftEmptyArrayStorage_11034f1c8,
                   PTR___swiftEmptyArrayStorage_11034f1c8,puVar5,0,uVar10,lVar9);
        func_0x000107c615e8(uVar7);
      }
      func_0x000107c6142c(puVar5);
      FUN_1036bae8c();
      goto LAB_1036bb78c;
    }
    if ((iVar3 == 1) && (((ulong)puVar13 & 1) == 0)) {
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(param_2 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd70);
      uVar7 = *puVar1;
      lVar9 = puVar1[1];
      uVar10 = uVar7;
      func_0x000107c614f0();
      pcVar15 = *(code **)(lVar9 + 8);
      func_0x000107c615f0(uVar7);
      uVar11 = 0;
      goto LAB_1036bb754;
    }
  }
  else if (iVar3 == 2) {
    if (((ulong)puVar13 & 1) == 0) {
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(param_2 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd70);
      uVar7 = *puVar1;
      lVar9 = puVar1[1];
      uVar10 = uVar7;
      func_0x000107c614f0();
      pcVar15 = *(code **)(lVar9 + 8);
      func_0x000107c615f0(uVar7);
      uVar11 = 1;
LAB_1036bb754:
      (*pcVar15)(0x4f545f444e4553,0xe700000000000000,uVar11,1,puVar6,puVar8,puVar5,puVar14,uVar10,
                 lVar9);
      func_0x000107c615e8(uVar7);
    }
  }
  else if ((iVar3 != 3) && (iVar3 == 4)) {
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar5);
    func_0x000107c4a03c();
    func_0x000107c61180();
    if (puVar12 != (undefined *)0x0) {
      puVar4 = puVar12;
      func_0x000107c3ebcc();
      func_0x000107c61170(puVar12);
      if ((int)puVar4 != 0) {
        lVar9 = *(long *)(*(long *)(param_2 + _DAT_112f86bd0) + _DAT_112febd00);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar9 != 0) {
          func_0x000107c42148();
          func_0x000107c615e8(lVar9);
        }
      }
    }
    goto LAB_1036bb78c;
  }
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puVar5);
LAB_1036bb78c:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1036bb858; end: 1036bb917; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin sendDidReturnPromise:] */

/* WARNING: Possible PIC construction at 0x0001036bb900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bb904) */

void FUN_1036bb858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001000285a8(0x112ebb4f8,&UNK_10dad3f50);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000103edf20c(param_3);
  puVar2 = &UNK_11067f920;
  func_0x000107c613fc(&UNK_11067f920,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x00010075a04c(0,1,FUN_1036bbf80,puVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036bb918; end: 1036bbbeb;  */

/* WARNING: Possible PIC construction at 0x0001036bb984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bb9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bba70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bbac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bbaf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bbb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bbb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bbb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bbb1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036bbb10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bbb20) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb50) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb88) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb08) */
/* WARNING: Removing unreachable block (ram,0x0001036bbac4) */
/* WARNING: Removing unreachable block (ram,0x0001036bbaf8) */
/* WARNING: Removing unreachable block (ram,0x0001036bbac8) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb78) */
/* WARNING: Removing unreachable block (ram,0x0001036bbae4) */
/* WARNING: Removing unreachable block (ram,0x0001036bba74) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb48) */
/* WARNING: Removing unreachable block (ram,0x0001036bba8c) */
/* WARNING: Removing unreachable block (ram,0x0001036bb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001036bba0c) */
/* WARNING: Removing unreachable block (ram,0x0001036bba10) */
/* WARNING: Removing unreachable block (ram,0x0001036bba30) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb0c) */
/* WARNING: Removing unreachable block (ram,0x0001036bba38) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb18) */
/* WARNING: Removing unreachable block (ram,0x0001036bba5c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001036bb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001036bb988) */
/* WARNING: Removing unreachable block (ram,0x0001036bbb14) */
/* WARNING: Removing unreachable block (ram,0x0001036bb9ec) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1036bb918(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036bbbec);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c615f0(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x00010274d138(0,param_1);
    }
    func_0x000107c4e090(uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
    return;
  }
  return;
}



/* Entry: 1036bbbec; end: 1036bbc4f; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin sendDidStartWithSnapDocBundles:] */

void FUN_1036bbbec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebb4f0;
  func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_1036bb918(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1036bbc50; end: 1036bbc6f; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin commonLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bbc50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112f86bb8) + _DAT_11302baf0));
  return;
}



/* Entry: 1036bbc70; end: 1036bbd0b; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bbc70(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(param_1 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd68);
  uVar2 = *puVar1;
  lVar3 = puVar1[1];
  uVar4 = uVar2;
  func_0x000107c614f0(uVar2);
  pcVar6 = *(code **)(lVar3 + 8);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar2);
  uVar5 = 0;
  (*pcVar6)(0,uVar4,lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1036bbd0c; end: 1036bbda3; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin uiViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bbd0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(param_1 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd68);
  uVar2 = *puVar1;
  lVar3 = puVar1[1];
  uVar4 = uVar2;
  func_0x000107c614f0(uVar2);
  pcVar5 = *(code **)(lVar3 + 0x30);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar2);
  (*pcVar5)(uVar4,lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1036bbda4; end: 1036bbe37; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin lensAssetUploadInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bbda4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_112f86bb8) + _DAT_11302bae8);
  lVar3 = puVar1[1];
  if ((lVar3 == 0) || (*(long *)(*(long *)(param_1 + _DAT_112f86bb8) + _DAT_11302bb08) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    uVar2 = 0;
    func_0x0001036bc0dc(0);
    func_0x000107c613fc();
    FUN_1036bbfc0(uVar4,lVar3,uVar2);
    func_0x000107c61434(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1036bbe38; end: 1036bbeb3; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin mediaSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036bbe38(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + _DAT_112f86bb8) + _DAT_11302baa8);
  uVar2 = lVar1 - 0xb;
  if ((0x3b < uVar2 || (1L << (uVar2 & 0x3f) & 0xc4000801000803fU) == 0) &&
     (uVar2 = lVar1 - 0x51, 0x1e < uVar2 || (1L << (uVar2 & 0x3f) & 0x40000201U) == 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 1036bbeb4; end: 1036bbed3; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036bbeb4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + _DAT_112f86bb8) + _DAT_11302baa8);
}



/* Entry: 1036bbed4; end: 1036bbf1f; -[_TtC30SnapEditorSendPluginEntryPoint20SnapEditorSendPlugin shouldSendAsExternalMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1036bbed4(long param_1)

{
  return *(long *)(*(long *)(param_1 + _DAT_112f86bb8) + _DAT_11302baa8) == 0xb;
}



/* Entry: 1036bbf20; end: 1036bbf3f;  */

void FUN_1036bbf20(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0dc8);
  return;
}



/* Entry: 1036bbf40; end: 1036bbf7f;  */

void FUN_1036bbf40(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036bbf80; end: 1036bbf83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bbf80(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined1 auStack_78 [24];
  
  puVar13 = (undefined *)*param_1;
  cVar2 = *(char *)(param_1 + 1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  if (cVar2 == '\x01') goto LAB_1036bb78c;
  puVar5 = puVar13;
  func_0x000107c49a98();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar5);
  }
  puVar5 = puVar13;
  func_0x000107c4ec44();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar5);
  }
  puVar5 = puVar13;
  func_0x000107c4ebe4();
  func_0x000107c61180();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != (undefined *)0x0) {
    puVar7 = puVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar5);
  }
  puVar5 = puVar13;
  func_0x000107c4ebe8();
  func_0x000107c61180();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != (undefined *)0x0) {
    uVar8 = 0;
    FUN_1036bbf40(0,0x112d51360,&PTR_PTR_1126becd8);
    puVar9 = puVar5;
    func_0x000107c5fc54(puVar5,uVar8);
    func_0x000107c61170(puVar5);
  }
  puVar5 = puVar13;
  func_0x000107c49bd0();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = puVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar5);
  }
  puVar5 = puVar13;
  func_0x000107c5d0f0();
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(puVar7);
      if (((ulong)puVar14 & 1) == 0) {
        puVar1 = (undefined8 *)
                 (*(long *)(*(long *)(lVar4 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd70);
        uVar8 = *puVar1;
        lVar10 = puVar1[1];
        uVar11 = uVar8;
        func_0x000107c614f0();
        pcVar16 = *(code **)(lVar10 + 8);
        func_0x000107c615f0(uVar8);
        (*pcVar16)(0x4f545f444e4553,0xe700000000000000,1,0,PTR___swiftEmptyArrayStorage_11034f1c8,
                   PTR___swiftEmptyArrayStorage_11034f1c8,puVar6,0,uVar11,lVar10);
        func_0x000107c615e8(uVar8);
      }
      func_0x000107c6142c(puVar6);
      FUN_1036bae8c();
      goto LAB_1036bb78c;
    }
    if ((iVar3 == 1) && (((ulong)puVar14 & 1) == 0)) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar4 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd70);
      uVar8 = *puVar1;
      lVar10 = puVar1[1];
      uVar11 = uVar8;
      func_0x000107c614f0();
      pcVar16 = *(code **)(lVar10 + 8);
      func_0x000107c615f0(uVar8);
      uVar12 = 0;
      goto LAB_1036bb754;
    }
  }
  else if (iVar3 == 2) {
    if (((ulong)puVar14 & 1) == 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar4 + _DAT_112f86bc0) + 0x10) + _DAT_11302bd70);
      uVar8 = *puVar1;
      lVar10 = puVar1[1];
      uVar11 = uVar8;
      func_0x000107c614f0();
      pcVar16 = *(code **)(lVar10 + 8);
      func_0x000107c615f0(uVar8);
      uVar12 = 1;
LAB_1036bb754:
      (*pcVar16)(0x4f545f444e4553,0xe700000000000000,uVar12,1,puVar7,puVar9,puVar6,puVar15,uVar11,
                 lVar10);
      func_0x000107c615e8(uVar8);
    }
  }
  else if ((iVar3 != 3) && (iVar3 == 4)) {
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(puVar6);
    func_0x000107c4a03c();
    func_0x000107c61180();
    if (puVar13 != (undefined *)0x0) {
      puVar5 = puVar13;
      func_0x000107c3ebcc();
      func_0x000107c61170(puVar13);
      if ((int)puVar5 != 0) {
        lVar10 = *(long *)(*(long *)(lVar4 + _DAT_112f86bd0) + _DAT_112febd00);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar10 != 0) {
          func_0x000107c42148();
          func_0x000107c615e8(lVar10);
        }
      }
    }
    goto LAB_1036bb78c;
  }
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(puVar6);
LAB_1036bb78c:
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1036bbf84; end: 1036bbfbf;  */

void FUN_1036bbf84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1036bbfc0; end: 1036bbfd3;  */

void FUN_1036bbfc0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1036bbfd4; end: 1036bbfdb; -[_TtC27LensSnapEditorEventListener24LensPromptUploadInformer requestUploadOperation] */

void FUN_1036bbfd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1036bbfdc; end: 1036bc083;  */

undefined * FUN_1036bbfdc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126c3108;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c4793c();
  func_0x000107c61170(uVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar2;
    func_0x000107d6ae14(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  return puVar4;
}



/* Entry: 1036bc084; end: 1036bc0b7; -[_TtC27LensSnapEditorEventListener24LensPromptUploadInformer requestLocalMediaReference] */

void FUN_1036bc084(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1036bbfdc();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036bc0b8; end: 1036bc0fb;  */

void FUN_1036bc0b8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036bc0fc; end: 1036bc21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036bc0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86cb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86cc0) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = param_3;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112f86cc8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86cd0) = *(undefined8 *)(param_4 + _DAT_112ff4f00);
  uVar3 = *(undefined8 *)(param_4 + _DAT_112ff4f08);
  *(undefined8 *)(unaff_x20 + _DAT_112f86cd8) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_60,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1036bc220; end: 1036bc267;  */

void FUN_1036bc220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1036bcb2c(param_2,param_3);
  return;
}



/* Entry: 1036bc268; end: 1036bc2f7;  */

/* WARNING: Possible PIC construction at 0x0001036bc2d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bc2d8) */

void FUN_1036bc268(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_11067fb88;
  func_0x000107c613fc(&UNK_11067fb88,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1036bc2f8; end: 1036bc313;  */

void FUN_1036bc2f8(long param_1,long param_2)

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



/* Entry: 1036bc314; end: 1036bc423; -[_TtC27LensSnapEditorEventListener27LensSnapEditorEventListener sendActionGuard] */

void FUN_1036bc314(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar2 = PTR_PTR_1126afee8;
  func_0x000107c61168();
  puVar3 = &UNK_11067fb10;
  func_0x000107c613fc(&UNK_11067fb10,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11067fb38;
  func_0x000107c613fc(&UNK_11067fb38,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1036bd0b8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_40 = 0x1036bd0b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1036bc268;
  puStack_48 = &UNK_11067fb50;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4f24c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036bc424);
  (*pcVar1)();
}



/* Entry: 1036bc424; end: 1036bc4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036bc424(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f86cc8);
  if (lVar1 != 0) {
    func_0x000107c4b6c0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x0001000d224c(&uStack_30);
      uVar2 = uStack_30;
      func_0x000107c614f0(uStack_30);
      uVar3 = (uint)uVar2;
      (**(code **)(lStack_28 + 8))();
      func_0x000107c615e8(uStack_30);
      goto LAB_1036bc498;
    }
  }
  uVar3 = 0;
LAB_1036bc498:
  return uVar3 & 1;
}



/* Entry: 1036bc4ac; end: 1036bc51f; -[_TtC27LensSnapEditorEventListener27LensSnapEditorEventListener shouldSkipDiscardDialogForLockedLensPlusContent] */

uint FUN_1036bc4ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036bc424();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1036bc520; end: 1036bc62f; -[_TtC27LensSnapEditorEventListener27LensSnapEditorEventListener saveActionGuard] */

void FUN_1036bc520(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar2 = PTR_PTR_1126d1348;
  func_0x000107c61168();
  puVar3 = &UNK_11067fa98;
  func_0x000107c613fc(&UNK_11067fa98,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11067fac0;
  func_0x000107c613fc(&UNK_11067fac0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1036bd088;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_40 = 0x1036bd0a4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_102827bd8;
  puStack_48 = &UNK_11067fad8;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4f24c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036bc630);
  (*pcVar1)();
}


