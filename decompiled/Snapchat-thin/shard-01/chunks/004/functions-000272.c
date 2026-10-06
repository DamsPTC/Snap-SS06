/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fbc3ac; end: 100fbc3c3;  */

void FUN_100fbc3ac(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc3c4,0,0);
  return;
}



/* Entry: 100fbc3c4; end: 100fbc48b;  */

void FUN_100fbc3c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_110372b10;
  func_0x000107c613fc(&UNK_110372b10,0x20,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x000107c615f0(uVar2);
  uVar2 = 0;
  func_0x0001048897a0(0,1,0,FUN_100fc38a4,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fbc48c;
                    /* WARNING: Could not recover jumptable at 0x000100fbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fab8ec();
  return;
}



/* Entry: 100fbc48c; end: 100fbc4df;  */

void FUN_100fbc48c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc4e0,0,0);
  return;
}



/* Entry: 100fbc4e0; end: 100fbc583;  */

void FUN_100fbc4e0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    func_0x000100fc38ac(uVar4,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x000100fbc580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbc584; end: 100fbc70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbc584(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _DAT_1137ff110;
  lVar3 = *(long *)(unaff_x20 + _DAT_1137ff110);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar3);
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000100fa58f4(unaff_x20 + 0x80);
  func_0x0001000834e4(unaff_x20 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x108));
  lVar1 = _DAT_112d51880;
  lVar3 = 0x112d51788;
  func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar1,lVar3);
  lVar1 = _DAT_112d51888;
  lVar3 = 0x112d51790;
  func_0x0001000285a8(0x112d51790,&UNK_10d918ae0);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar1,lVar3);
  func_0x000107c61610(unaff_x20 + _DAT_112d51890);
  func_0x000107c61610(unaff_x20 + _DAT_112d51898);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d518a0));
  return;
}



/* Entry: 100fbc710; end: 100fbc78b;  */

void FUN_100fbc710(void)

{
  FUN_100fbc584();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fbc78c; end: 100fbc8af;  */

void FUN_100fbc78c(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0xc0) + 0x10);
  *(long *)(unaff_x22 + 0xd0) = lVar8;
  uVar7 = *(ulong *)(*(long *)(unaff_x22 + 0xc0) + 0x18);
  *(ulong *)(unaff_x22 + 0xd8) = uVar7;
  lVar6 = lVar8;
  func_0x000107c614f0();
  *(long *)(unaff_x22 + 0xe0) = lVar6;
  uVar4 = uVar7;
  (**(code **)(uVar7 + 8))();
  FUN_100fc3f6c();
  if ((uVar4 & 0x3000000000000000) == 0x1000000000000000) {
    lVar8 = *(long *)(unaff_x22 + 0xc0);
    (**(code **)(uVar7 + 0x48))(lVar6,uVar7);
    uVar2 = *(undefined8 *)(lVar8 + 0x48);
    lVar6 = *(long *)(lVar8 + 0x50);
    func_0x0001000a8868(lVar8 + 0x30,uVar2);
    piVar5 = *(int **)(lVar6 + 0x28);
    iVar1 = *piVar5;
    plVar3 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100fbc8b0;
                    /* WARNING: Could not recover jumptable at 0x000100fbc85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar6);
    return;
  }
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fbcbd0;
  lVar6 = *(long *)(unaff_x22 + 0xc0);
  plVar3[9] = uVar7;
  plVar3[10] = lVar6;
  plVar3[7] = unaff_x22 + 0x88;
  plVar3[8] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbd728,0,0);
  return;
}



/* Entry: 100fbc8b0; end: 100fbc8f7;  */

void FUN_100fbc8b0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc8f8,0,0);
  return;
}



/* Entry: 100fbc8f8; end: 100fbcbcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbc8f8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  ulong uVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(lVar12 + _DAT_112d518a0);
  func_0x000107c6157c(uVar11);
  func_0x000100075034(FUN_100fc3fbc,lVar12,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar11);
  *(undefined8 *)(unaff_x22 + 0x130) = 0;
  *(undefined8 *)(unaff_x22 + 0x138) = 1;
  *(undefined1 *)(unaff_x22 + 0xab) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  FUN_100fa58a4(*(long *)(unaff_x22 + 0xc0) + 0x80,unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x50);
  func_0x000100fa58f4(unaff_x22 + 0x38);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    lVar13 = *(long *)(unaff_x22 + 0xc0);
    puVar4 = (undefined *)0x112d51a48;
    func_0x0001000285a8(0x112d51a48,&UNK_10d918998);
    lVar5 = 0;
    FUN_10101134c();
    uVar10 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar14 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar14 + *(long *)(*(long *)(lVar5 + -8) + 0x48),uVar10 | 7);
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    lVar2 = _DAT_112d51880;
    puVar1 = (undefined8 *)(puVar4 + uVar14);
    lVar12 = 0x112d51788;
    func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
    puVar6 = puVar1;
    (**(code **)(*(long *)(lVar12 + -8) + 0x10))(puVar1,lVar13 + lVar2,lVar12);
    func_0x000101015bec();
    uVar11 = *puVar6;
    uVar3 = puVar6[1];
    puVar7 = &UNK_1103729a8;
    func_0x000107c613fc(&UNK_1103729a8,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,lVar13);
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x14));
    *puVar6 = uVar11;
    puVar6[1] = uVar3;
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x18));
    *puVar1 = 0x100fc3fb4;
    puVar1[1] = puVar7;
    func_0x000107c61434(uVar3);
  }
  lVar12 = *(long *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar11 = *(undefined8 *)(unaff_x22 + 200);
  lVar13 = *(long *)(unaff_x22 + 0xc0);
  uVar8 = uVar3;
  (**(code **)(lVar12 + 0x28))(uVar3,lVar12);
  lVar2 = *(long *)(lVar13 + 0x48);
  lVar5 = *(long *)(lVar13 + 0x50);
  func_0x0001000a8868(lVar13 + 0x30,lVar2);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar5 + 8);
  func_0x0001000c5db4(unaff_x22 + 0x60);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))();
  (**(code **)(lVar12 + 0x10))(uVar11,uVar3,lVar12);
  lVar12 = *(long *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar11 = *(undefined8 *)(unaff_x22 + 200);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(lVar12 + 0x38))();
  (**(code **)(lVar12 + 0x40))(uVar3,lVar12);
  FUN_101012194(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar15);
  func_0x000101011eb8(uVar8,unaff_x22 + 0x60,puVar4,uVar11,uVar15,&PTR_DAT_110372a10,0,0,0,1);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar8;
  plVar9 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x148) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100fbd274;
  plVar9[2] = *(long *)(unaff_x22 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fbcbd0; end: 100fbcc37;  */

void FUN_100fbcbd0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf8) = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined1 *)(lVar1 + 0xa9) = *(undefined1 *)(lVar1 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbcc38,0,0);
  return;
}



/* Entry: 100fbcc38; end: 100fbce0f;  */

void FUN_100fbcc38(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_100fa58a4(*(long *)(unaff_x22 + 0xc0) + 0x80,unaff_x22 + 0x10);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xa9);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  if (*(long *)(unaff_x22 + 0x28) == 0) {
    func_0x000100fc3f8c(uVar13,uVar4,uVar6,uVar3);
    func_0x000100fa58f4(unaff_x22 + 0x10);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x0001000a8868(unaff_x22 + 0x10);
    func_0x000100fc3f8c(uVar13,uVar4,uVar6,uVar3);
    uVar4 = 0;
    FUN_100f9b1c4(0);
    FUN_100f9b1e4(uVar14,uVar4,&PTR_DAT_110371398);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
  lVar10 = *(long *)(unaff_x22 + 0xf8);
  lVar9 = *(long *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x0001000d224c(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar12 = *(long *)(unaff_x22 + 0xb8);
  uVar13 = uVar4;
  func_0x000107c614f0(uVar4);
  lVar5 = lVar10;
  FUN_100fc2db8();
  uVar1 = (uint)lVar5 & 0xff;
  uVar2 = 0;
  if (uVar1 != 3) {
    uVar2 = uVar1;
  }
  (**(code **)(lVar12 + 0x10))(0,uVar2,*(undefined8 *)(lVar10 + 0x10),uVar13,lVar12);
  func_0x000107c615e8(uVar4);
  pcVar11 = *(code **)(lVar9 + 0x48);
  (*pcVar11)(uVar6,lVar9);
  if ((int)uVar6 == 0) {
    plVar7 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100fbcf1c;
    lVar9 = *(long *)(unaff_x22 + 0xc0);
    plVar7[7] = *(long *)(unaff_x22 + 0xf8);
    plVar7[8] = lVar9;
    pcVar11 = FUN_100fbdb84;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
    (*pcVar11)(uVar4,*(undefined8 *)(unaff_x22 + 0xd8));
    plVar7 = (long *)0x180;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x118) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100fbce10;
    lVar9 = *(long *)(unaff_x22 + 0xf8);
    lVar12 = *(long *)(unaff_x22 + 0xc0);
    *(bool *)(plVar7 + 0x2f) = (int)uVar4 == 2;
    plVar7[0x12] = lVar9;
    plVar7[0x13] = lVar12;
    lVar9 = 0;
    func_0x0001038e5950();
    uVar8 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar7[0x14] = uVar8;
    lVar9 = 0x112d515c0;
    func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
    plVar7[0x15] = lVar9;
    lVar9 = *(long *)(lVar9 + -8);
    plVar7[0x16] = lVar9;
    uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar7[0x17] = uVar8;
    pcVar11 = FUN_100fbdfb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar11,0,0);
  return;
}



/* Entry: 100fbce10; end: 100fbce5f;  */

void FUN_100fbce10(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xaa) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbce60,0,0);
  return;
}



/* Entry: 100fbce60; end: 100fbcf1b;  */

void FUN_100fbce60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xaa) == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar3 = *(undefined1 *)(unaff_x22 + 0xa9);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000100fc3fa0(uVar2,uVar5,uVar1,uVar3);
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000100fc3fa0(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                        *(undefined8 *)(unaff_x22 + 0x110),*(undefined1 *)(unaff_x22 + 0xa9));
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100fbced8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fbcf1c;
  lVar6 = *(long *)(unaff_x22 + 0xc0);
  plVar4[7] = *(long *)(unaff_x22 + 0xf8);
  plVar4[8] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbdb84,0,0);
  return;
}



/* Entry: 100fbcf1c; end: 100fbcf9b;  */

void FUN_100fbcf1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long *unaff_x22;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0x108);
  uVar3 = *(undefined8 *)(lVar6 + 0x110);
  uVar2 = *(undefined8 *)(lVar6 + 0xf8);
  uVar4 = *(undefined8 *)(lVar6 + 0x100);
  uVar5 = *(undefined1 *)(lVar6 + 0xa9);
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x120));
  func_0x000107c6142c(uVar2);
  func_0x000100fc3fa0(uVar4,uVar1,uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbcf9c,0,0);
  return;
}



/* Entry: 100fbcf9c; end: 100fbd273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbcf9c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x22;
  undefined1 uVar15;
  undefined8 uVar16;
  long lStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  uVar15 = *(undefined1 *)(unaff_x22 + 0xa9);
  lStack_78 = *(long *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  uStack_60 = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar11;
  *(long *)(unaff_x22 + 0x138) = lStack_78;
  *(undefined1 *)(unaff_x22 + 0xab) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x128) = uStack_60;
  FUN_100fa58a4(*(long *)(unaff_x22 + 0xc0) + 0x80,unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x50);
  func_0x000100fa58f4(unaff_x22 + 0x38);
  if (lVar12 == 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0xc0);
    puStack_68 = (undefined *)0x112d51a48;
    func_0x0001000285a8(0x112d51a48,&UNK_10d918998);
    lVar5 = 0;
    FUN_10101134c();
    uVar10 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar14 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puStack_68,uVar14 + *(long *)(*(long *)(lVar5 + -8) + 0x48),uVar10 | 7);
    *(undefined8 *)(puStack_68 + 0x18) = 2;
    *(undefined8 *)(puStack_68 + 0x10) = 1;
    lVar3 = _DAT_112d51880;
    puVar1 = (undefined8 *)(puStack_68 + uVar14);
    lVar12 = 0x112d51788;
    func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
    puVar6 = puVar1;
    (**(code **)(*(long *)(lVar12 + -8) + 0x10))(puVar1,lVar13 + lVar3,lVar12);
    func_0x000101015bec();
    uVar2 = *puVar6;
    uVar4 = puVar6[1];
    puVar7 = &UNK_1103729a8;
    func_0x000107c613fc(&UNK_1103729a8,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,lVar13);
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x14));
    *puVar6 = uVar2;
    puVar6[1] = uVar4;
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x18));
    *puVar1 = 0x100fc3fb4;
    puVar1[1] = puVar7;
    func_0x000107c61434(uVar4);
  }
  lVar12 = *(long *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar13 = *(long *)(unaff_x22 + 0xc0);
  uVar8 = uVar4;
  (**(code **)(lVar12 + 0x28))(uVar4,lVar12);
  lVar3 = *(long *)(lVar13 + 0x48);
  lVar5 = *(long *)(lVar13 + 0x50);
  func_0x0001000a8868(lVar13 + 0x30,lVar3);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar5 + 8);
  func_0x0001000c5db4(unaff_x22 + 0x60);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))();
  (**(code **)(lVar12 + 0x10))(uVar2,uVar4,lVar12);
  if (lStack_78 == 1) {
    uVar11 = 0;
    uStack_60 = 0;
    lStack_78 = 0;
    uVar15 = 1;
  }
  else {
    func_0x000107c61434(lStack_78);
  }
  lVar12 = *(long *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(lVar12 + 0x38))();
  (**(code **)(lVar12 + 0x40))(uVar4,lVar12);
  FUN_101012194(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar16);
  func_0x000101011eb8(uVar8,unaff_x22 + 0x60,puStack_68,uVar2,uVar16,&PTR_DAT_110372a10,uStack_60,
                      lStack_78,uVar11,uVar15);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar8;
  plVar9 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x148) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100fbd274;
  plVar9[2] = *(long *)(unaff_x22 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fbd274; end: 100fbd31b;  */

void FUN_100fbd274(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fbd2bc,0,0);
  return;
}



/* Entry: 100fbd31c; end: 100fbd3cf;  */

void FUN_100fbd31c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61574(*param_1);
  puVar1 = &UNK_1103729a8;
  func_0x000107c613fc(&UNK_1103729a8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  uVar2 = 0x112d50c60;
  func_0x0001000285a8(0x112d50c60,&UNK_10d9175e0);
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d9189b0,puVar1,uVar2);
  func_0x000107c61574(puVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 100fbd3d0; end: 100fbd3e7;  */

void FUN_100fbd3d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbd3e8,0,0);
  return;
}



/* Entry: 100fbd3e8; end: 100fbd4af;  */

void FUN_100fbd3e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  long *plVar4;
  
  lVar2 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x60,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
    *(long *)(unaff_x22 + 0xa0) = lVar1;
    lVar3 = *(long *)(lVar2 + 0x18);
    plVar4 = (long *)0xd0;
    func_0x000107c615f0(lVar1);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100fbd4b0;
    plVar4[9] = lVar3;
    plVar4[10] = lVar2;
    plVar4[7] = unaff_x22 + 0x38;
    plVar4[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbd728,0,0);
    return;
  }
  **(undefined8 **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x000100fbd4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbd4b0; end: 100fbd533;  */

void FUN_100fbd4b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long *unaff_x22;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0xa0);
  uVar3 = *(undefined8 *)(lVar6 + 0x40);
  *(undefined8 *)(lVar6 + 0xb0) = *(undefined8 *)(lVar6 + 0x38);
  uVar2 = *(undefined8 *)(lVar6 + 0x48);
  uVar4 = *(undefined8 *)(lVar6 + 0x50);
  uVar5 = *(undefined1 *)(lVar6 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xa8));
  func_0x000107c615e8(uVar1);
  func_0x000100fc3fa0(uVar3,uVar2,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbd534,0,0);
  return;
}



/* Entry: 100fbd534; end: 100fbd687;  */

void FUN_100fbd534(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0xb0);
  lVar9 = *(long *)(unaff_x22 + 0x98);
  func_0x0001000d224c(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar8 = uVar4;
  func_0x000107c614f0(uVar4);
  lVar3 = lVar7;
  FUN_100fc2db8();
  uVar1 = (uint)lVar3 & 0xff;
  uVar2 = 0;
  if (uVar1 != 3) {
    uVar2 = uVar1;
  }
  (**(code **)(lVar6 + 0x10))(1,uVar2,*(undefined8 *)(lVar7 + 0x10),uVar8,lVar6);
  func_0x000107c615e8(uVar4);
  FUN_100fa58a4(lVar9 + 0x80,unaff_x22 + 0x10);
  if (*(long *)(unaff_x22 + 0x28) == 0) {
    func_0x000100fa58f4(unaff_x22 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x10);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x10);
    uVar4 = 0;
    FUN_100f9b1c4(0);
    FUN_100f9b1e4(uVar8,uVar4,&PTR_DAT_110371398);
    func_0x0001000834e4(unaff_x22 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x10);
  }
  if (lVar6 != 0) {
    plVar5 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100fbd688;
    lVar6 = *(long *)(unaff_x22 + 0x98);
    plVar5[7] = *(long *)(unaff_x22 + 0xb0);
    plVar5[8] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbdb84,0,0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  **(undefined8 **)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x000100fbd684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbd688; end: 100fbd70b;  */

void FUN_100fbd688(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fbd6d0,0,0);
  return;
}



/* Entry: 100fbd70c; end: 100fbd727;  */

void FUN_100fbd70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbd728,0,0);
  return;
}



/* Entry: 100fbd728; end: 100fbd89f;  */

void FUN_100fbd728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(ulong *)(unaff_x22 + 0x48);
  func_0x000107c614f0();
  *(long *)(unaff_x22 + 0x58) = lVar8;
  lVar1 = lVar8;
  (**(code **)(uVar5 + 8))();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  *(ulong *)(unaff_x22 + 0x68) = uVar5;
  uVar6 = (uint)(uVar5 >> 0x3c) & 3;
  lVar3 = lVar1;
  if (uVar6 < 2) {
    if (uVar6 != 0) {
      plVar2 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x80) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100fbd94c;
      lVar8 = *(long *)(unaff_x22 + 0x50);
      plVar2[0xe] = uVar5 & 0xcfffffffffffffff;
      plVar2[0xf] = lVar8;
      plVar2[0xc] = unaff_x22 + 0x10;
      plVar2[0xd] = lVar1;
      pcVar4 = FUN_100fbf2f0;
      goto LAB_107c615e0;
    }
    plVar2 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fbd8a0;
    lVar8 = *(long *)(unaff_x22 + 0x50);
  }
  else {
    if (uVar6 == 2) {
      lVar1 = *(long *)(unaff_x22 + 0x48);
      FUN_100fc3f6c();
      (**(code **)(lVar1 + 0x18))();
      puVar7 = *(undefined8 **)(unaff_x22 + 0x38);
      *puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar7[1] = lVar8;
      puVar7[2] = lVar1;
      puVar7[3] = param_3;
      *(undefined1 *)(puVar7 + 4) = param_4;
                    /* WARNING: Could not recover jumptable at 0x000100fbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    FUN_100fbf57c();
    *(long *)(unaff_x22 + 0xb8) = lVar3;
    FUN_100fc3f6c(lVar1,uVar5);
    plVar2 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fbdac8;
    lVar8 = *(long *)(unaff_x22 + 0x50);
  }
  plVar2[0x14] = lVar3;
  plVar2[0x15] = lVar8;
  pcVar4 = FUN_100fbee14;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 100fbd8a0; end: 100fbd8ff;  */

void FUN_100fbd8a0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  FUN_100fc3f6c(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbd900,0,0);
  return;
}



/* Entry: 100fbd900; end: 100fbd94b;  */

void FUN_100fbd900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  (**(code **)(lVar2 + 0x18))();
  puVar3 = *(undefined8 **)(unaff_x22 + 0x38);
  *puVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar3[1] = uVar1;
  puVar3[2] = lVar2;
  puVar3[3] = param_3;
  *(undefined1 *)(puVar3 + 4) = param_4;
                    /* WARNING: Could not recover jumptable at 0x000100fbd948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbd94c; end: 100fbd9cb;  */

void FUN_100fbd94c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  lVar2 = *(long *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x88) = lVar2;
  *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined1 *)(lVar3 + 0x31) = *(undefined1 *)(lVar3 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x80));
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(lVar3 + 0xa8) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_100fbd9cc;
  lVar3 = *(long *)(lVar3 + 0x50);
  plVar1[0x14] = lVar2;
  plVar1[0x15] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbee14,0,0);
  return;
}



/* Entry: 100fbd9cc; end: 100fbda1b;  */

void FUN_100fbd9cc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbda1c,0,0);
  return;
}



/* Entry: 100fbda1c; end: 100fbdac7;  */

void FUN_100fbda1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  if (lVar5 == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar5 = *(long *)(unaff_x22 + 0x48);
    (**(code **)(lVar5 + 0x18))();
    FUN_100fc3f6c(uVar1,uVar2);
  }
  else {
    FUN_100fc3f6c(uVar1,uVar2);
    param_4 = *(undefined1 *)(unaff_x22 + 0x31);
    lVar5 = *(long *)(unaff_x22 + 0x98);
    param_3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  }
  puVar4 = *(undefined8 **)(unaff_x22 + 0x38);
  *puVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar4[1] = uVar3;
  puVar4[2] = lVar5;
  puVar4[3] = param_3;
  *(undefined1 *)(puVar4 + 4) = param_4;
                    /* WARNING: Could not recover jumptable at 0x000100fbdac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbdac8; end: 100fbdb6b;  */

void FUN_100fbdac8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar2 + 200) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fbdb20,0,0);
  return;
}



/* Entry: 100fbdb6c; end: 100fbdb83;  */

void FUN_100fbdb6c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbdb84,0,0);
  return;
}



/* Entry: 100fbdb84; end: 100fbdc07;  */

void FUN_100fbdb84(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  FUN_100fc27c0(lVar3);
  lVar3 = *(long *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 != 0) {
    plVar4 = *(long **)(*(long *)(unaff_x22 + 0x40) + 0xe0);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100fbdc08;
    plVar1[5] = unaff_x22 + 0x30;
    plVar1[6] = (long)plVar4;
    lVar5 = *(long *)(*plVar4 + 0x50);
    plVar1[7] = lVar5;
    lVar3 = 0;
    __sSqMa(0,lVar5);
    plVar1[8] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar1[9] = lVar3;
    uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar2;
    lVar3 = *(long *)(lVar5 + -8);
    plVar1[0xb] = lVar3;
    uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fbdc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbdc08; end: 100fbdc4f;  */

void FUN_100fbdc08(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbdc50,0,0);
  return;
}



/* Entry: 100fbdc50; end: 100fbdd0b;  */

void FUN_100fbdc50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x40) + 0xd0);
  puVar2 = &UNK_110372b60;
  func_0x000107c613fc(&UNK_110372b60,0x20,7);
  *(undefined **)(unaff_x22 + 0x60) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  plVar3 = (long *)0x60;
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fbdd0c;
                    /* WARNING: Could not recover jumptable at 0x000100fbdd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fae018(uVar4,0x100fc38e0,puVar2);
  return;
}



/* Entry: 100fbdd0c; end: 100fbdd67;  */

void FUN_100fbdd0c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  *(undefined8 *)(lVar2 + 0x78) = param_2;
  *(undefined1 *)(lVar2 + 0x88) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbdd68,0,0);
  return;
}



/* Entry: 100fbdd68; end: 100fbdea7;  */

void FUN_100fbdd68(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  long lVar11;
  
  bVar7 = *(char *)(unaff_x22 + 0x88) != '\x01';
  lVar5 = 0;
  if (bVar7) {
    lVar5 = *(long *)(unaff_x22 + 0x70);
  }
  lVar1 = 0;
  if (bVar7) {
    lVar1 = *(long *)(unaff_x22 + 0x78);
  }
  if (!SCARRY8(lVar5,lVar1)) {
    if (lVar5 + lVar1 != *(long *)(unaff_x22 + 0x48)) {
      func_0x0001000d224c(unaff_x22 + 0x20);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
      lVar4 = *(long *)(unaff_x22 + 0x28);
      uVar8 = uVar3;
      func_0x000107c614f0(uVar3);
      (**(code **)(lVar4 + 0xc0))(0,0xd000000000000036,0x800000010ef1db40,uVar8,lVar4);
      func_0x000107c615e8(uVar3);
    }
    lVar11 = *(long *)(unaff_x22 + 0x40);
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    uVar8 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(lVar4 + 0x30))(lVar5,lVar1,uVar8,lVar4);
    func_0x000107c615e8(uVar3);
    uVar3 = *(undefined8 *)(lVar11 + 0x48);
    lVar5 = *(long *)(lVar11 + 0x50);
    func_0x0001000a8868(lVar11 + 0x30,uVar3);
    piVar10 = *(int **)(lVar5 + 0x10);
    iVar2 = *piVar10;
    plVar9 = (long *)(ulong)(uint)piVar10[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100fbdea8;
                    /* WARNING: Could not recover jumptable at 0x000100fbdea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar10))(*(undefined8 *)(unaff_x22 + 0x38),uVar3,lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100fbdea8);
  (*pcVar6)();
}



/* Entry: 100fbdea8; end: 100fbdfaf;  */

void FUN_100fbdea8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fbdef0,0,0);
  return;
}



/* Entry: 100fbdfb0; end: 100fbe0af;  */

void FUN_100fbdfb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x68);
  *(long *)(unaff_x22 + 0xc0) = lVar3;
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec();
    *(undefined8 *)(unaff_x22 + 200) = uVar1;
    func_0x000107c6157c();
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0xd0) = lVar3;
    func_0x000100eea164();
    *(long *)(unaff_x22 + 0xd8) = lVar3;
    func_0x000107c5fca8(uVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbe0b0,uVar1,lVar3);
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  (**(code **)(lVar3 + 0xc0))(0,0xd000000000000047,0x800000010ef1db80,uVar2,lVar3);
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fbe0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100fbe0b0; end: 100fbe0f7;  */

void FUN_100fbe0b0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61574();
  FUN_100fbfcb4();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbe0f8,0,0);
  return;
}



/* Entry: 100fbe0f8; end: 100fbe17b;  */

void FUN_100fbe0f8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(lVar5 + 0x48);
  lVar3 = *(long *)(lVar5 + 0x50);
  func_0x0001000a8868(lVar5 + 0x30,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fbe17c;
                    /* WARNING: Could not recover jumptable at 0x000100fbe178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x90),uVar2,lVar3);
  return;
}



/* Entry: 100fbe17c; end: 100fbe1e7;  */

void FUN_100fbe17c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xf8) = param_1;
    pcVar1 = FUN_100fbe1e8;
  }
  else {
    pcVar1 = FUN_100fbe7b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fbe1e8; end: 100fbe253;  */

void FUN_100fbe1e8(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x98);
  func_0x0001000d224c(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x80);
  plVar4 = *(long **)(lVar3 + 0xe0);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fbe254;
  plVar1[5] = unaff_x22 + 0x88;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[9] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar2;
  lVar3 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fbe254; end: 100fbe2cf;  */

void FUN_100fbe254(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  lVar3 = *(long *)(lVar2 + 0x88);
  *(long *)(lVar2 + 0x110) = lVar3;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x118) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_100fbe2d0;
  lVar4 = *(long *)(lVar2 + 0xf8);
  lVar2 = *(long *)(lVar2 + 0x100);
  plVar1[0xe] = (long)FUN_100fbfd58;
  plVar1[0xf] = 0;
  plVar1[0xc] = lVar2;
  plVar1[0xd] = lVar3;
  plVar1[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fefe98,0,0);
  return;
}



/* Entry: 100fbe2d0; end: 100fbe353;  */

void FUN_100fbe2d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  long *unaff_x22;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x110);
  uVar2 = *(undefined8 *)(lVar5 + 0xf8);
  uVar3 = *(undefined8 *)(lVar5 + 0x100);
  *(undefined8 *)(lVar5 + 0x120) = param_1;
  *(long *)(lVar5 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x118));
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c6142c(uVar2);
  if (unaff_x20 == 0) {
    pcVar4 = FUN_100fbe354;
  }
  else {
    pcVar4 = FUN_100fbe90c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 100fbe354; end: 100fbe3f3;  */

void FUN_100fbe354(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x98) + 0x60);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fbe3ac;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fbe3f4; end: 100fbe4b7;  */

void FUN_100fbe3f4(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  lVar6 = *(long *)(lVar2 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(lVar2 + 0x10));
  (**(code **)(lVar6 + 0x10))(uVar4);
  piVar8 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100fbe4b8;
                    /* WARNING: Could not recover jumptable at 0x000100fbe4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar7,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0x120),
             *(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xa0),
             *(undefined1 *)(unaff_x22 + 0x178),uVar3,lVar5);
  return;
}



/* Entry: 100fbe4b8; end: 100fbe51b;  */

void FUN_100fbe4b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    FUN_100fc3b98(*(undefined8 *)(lVar2 + 0xa0));
    pcVar1 = FUN_100fbe51c;
  }
  else {
    pcVar1 = FUN_100fbea64;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fbe51c; end: 100fbe5f7;  */

void FUN_100fbe51c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  FUN_100fbfd5c(uVar8,1);
  func_0x0001000d224c(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar5 = *(long *)(unaff_x22 + 0x70);
  uVar6 = uVar2;
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar5 + 0xa8))(1,uVar6,lVar5);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uVar2);
  (**(code **)(lVar4 + 8))(uVar8,uVar1);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fbe5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 100fbe5f8; end: 100fbe6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbe5f8(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar2 = _DAT_112d51898;
  lVar5 = *(long *)(unaff_x22 + 0x98);
  lVar4 = lVar5 + _DAT_112d51898;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x150));
    pcVar3 = FUN_100fbe754;
    lVar2 = 0;
    lVar4 = 0;
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x98);
    func_0x000107c61170();
    func_0x000107c61604(lVar5 + lVar2,0);
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar2 = *(long *)(lVar6 + 0x18);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x28))();
    *(long *)(unaff_x22 + 0x168) = lVar4;
    lVar2 = lVar4;
    func_0x000107c614f0();
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x170) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100fbe6cc;
    plVar1[3] = lVar2;
    plVar1[4] = lVar4;
    lVar2 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar2;
    func_0x000107c5fce8();
    plVar1[5] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[6] = lVar2;
    plVar1[7] = lVar4;
    pcVar3 = FUN_100ff4210;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar2,lVar4);
  return;
}



/* Entry: 100fbe6cc; end: 100fbe717;  */

void FUN_100fbe6cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x168);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fbe718,*(undefined8 *)(lVar2 + 0x158),*(undefined8 *)(lVar2 + 0x160));
  return;
}



/* Entry: 100fbe718; end: 100fbe753;  */

void FUN_100fbe718(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbe754,0,0);
  return;
}



/* Entry: 100fbe754; end: 100fbe7b3;  */

void FUN_100fbe754(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61574(uVar1);
  func_0x000107c614ac(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fbe7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100fbe7b4; end: 100fbe90b;  */

void FUN_100fbe7b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar7;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  func_0x0001000d224c(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = uVar3;
  func_0x000107c614f0(uVar3);
  func_0x000107c602fc(0x42);
  puVar5 = (undefined8 *)(unaff_x22 + 0x58);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000040,0x800000010ef1dbd0);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x78),puVar5,uVar7,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(lVar1 + 0xc0))(0,*puVar5,uVar7,uVar2,lVar1);
  func_0x000107c6142c(uVar7);
  func_0x000107c615e8();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x150) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x158) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbe5f8,uVar6,uVar4);
  return;
}



/* Entry: 100fbe90c; end: 100fbea63;  */

void FUN_100fbe90c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar7;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  func_0x0001000d224c(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = uVar3;
  func_0x000107c614f0(uVar3);
  func_0x000107c602fc(0x42);
  puVar5 = (undefined8 *)(unaff_x22 + 0x58);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000040,0x800000010ef1dbd0);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x78),puVar5,uVar7,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(lVar1 + 0xc0))(0,*puVar5,uVar7,uVar2,lVar1);
  func_0x000107c6142c(uVar7);
  func_0x000107c615e8();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x150) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x158) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbe5f8,uVar6,uVar4);
  return;
}



/* Entry: 100fbea64; end: 100fbebd7;  */

void FUN_100fbea64(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x120));
  FUN_100fc3b98(uVar5);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar5;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 200);
  func_0x0001000d224c(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = uVar3;
  func_0x000107c614f0(uVar3);
  func_0x000107c602fc(0x42);
  puVar6 = (undefined8 *)(unaff_x22 + 0x58);
  *puVar6 = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000040,0x800000010ef1dbd0);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x78),puVar6,uVar5,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(lVar1 + 0xc0))(0,*puVar6,uVar5,uVar2,lVar1);
  func_0x000107c6142c(uVar5);
  func_0x000107c615e8();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x150) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x158) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbe5f8,uVar7,uVar4);
  return;
}



/* Entry: 100fbebd8; end: 100fbebef;  */

void FUN_100fbebd8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fbebf0; end: 100fbecbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbebf0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x58);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x10);
    func_0x000107c61170();
    lVar1 = lVar1 + _DAT_112d51890;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x20) = lVar1;
    if (lVar1 != 0) {
      uVar2 = 0;
      func_0x000107c5fcec();
      uVar3 = uVar2;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
      func_0x000100eea164();
      func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbecbc,uVar2,uVar3);
      return;
    }
    func_0x000107c4ffe8(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x000107c61180();
    func_0x000107c615e8();
  }
                    /* WARNING: Could not recover jumptable at 0x000100fbecb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbecbc; end: 100fbed13;  */

void FUN_100fbecbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  uVar2 = uVar1;
  func_0x000107c4f090();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbed14,0,0);
  return;
}



/* Entry: 100fbed14; end: 100fbedb7;  */

void FUN_100fbed14(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x38) = lVar3;
    if (lVar3 != 0) {
      lVar1 = lVar3;
      func_0x000107c614f0();
      plVar2 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x40) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100fbedb8;
      plVar2[3] = lVar1;
      plVar2[4] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc3c4,0,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100fbedb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbedb8; end: 100fbedfb;  */

void FUN_100fbedb8(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100fbedf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100fbedfc; end: 100fbee13;  */

void FUN_100fbedfc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbee14,0,0);
  return;
}



/* Entry: 100fbee14; end: 100fbeef3;  */

void FUN_100fbee14(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0xd8);
  if (*(char *)(unaff_x22 + 0xd8) == '\x01') {
    plVar4 = *(long **)(*(long *)(unaff_x22 + 0xa8) + 0xd8);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x100fbeeac;
    plVar1[5] = unaff_x22 + 0x10;
    plVar1[6] = (long)plVar4;
    lVar5 = *(long *)(*plVar4 + 0x50);
    plVar1[7] = lVar5;
    lVar2 = 0;
    __sSqMa(0,lVar5);
    plVar1[8] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    plVar1[9] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar3;
    lVar2 = *(long *)(lVar5 + -8);
    plVar1[0xb] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x000100fbeea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fbeef4; end: 100fbef67;  */

void FUN_100fbeef4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000d224c(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(lVar2 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  plVar3 = (long *)0x150;
  func_0x000107c6157c();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fbef68;
  plVar3[0x15] = *(long *)(unaff_x22 + 0xa0);
  plVar3[0x16] = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa1840,0,0);
  return;
}



/* Entry: 100fbef68; end: 100fbefcb;  */

void FUN_100fbef68(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xc0) = param_1;
  *(undefined8 *)(lVar2 + 200) = param_2;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fbefcc;
  }
  else {
    pcVar1 = FUN_100fbf1b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fbefcc; end: 100fbf1af;  */

void FUN_100fbefcc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x22 + 200);
  if (0 < lVar8) {
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    func_0x0001000d224c(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar3 = *(long *)(unaff_x22 + 0x78);
    uVar5 = uVar2;
    func_0x000107c614f0();
    func_0x000107c602fc(0x38);
    func_0x000107c5fb78(0xd000000000000022,0x800000010ef1dc90);
    *(long *)(unaff_x22 + 0x90) = lVar8;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar4 = PTR___sSiN_11034deb0;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0xd000000000000014,0x800000010ef1dcc0);
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6057c(puVar4,puVar7);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    func_0x000107c61434(0xe000000000000000);
    func_0x000107c5fb78(0xd00000000000001f,0x800000010ef1dce0);
    func_0x000107c6142c(0x800000010ef1dce0);
    func_0x000107c6142c(0xe000000000000000);
    (**(code **)(lVar3 + 0xc0))(0,0,0xe000000000000000,uVar5,lVar3);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c615e8(uVar2);
  }
  FUN_100fc406c(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100fbf1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 100fbf1b0; end: 100fbf2d3;  */

void FUN_100fbf1b0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  FUN_100fc406c(unaff_x22 + 0x10);
  func_0x0001000d224c(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x68);
  uVar3 = uVar5;
  func_0x000107c614f0(uVar5);
  func_0x000107c602fc(0x2d);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c614cc(uVar6,unaff_x22 + 0x88,unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x50),uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  (**(code **)(lVar2 + 0xc0))(0,0xd00000000000002b,0x800000010ef1dc60,uVar3,lVar2);
  func_0x000107c614ac(uVar6);
  func_0x000107c6142c(0x800000010ef1dc60);
  func_0x000107c615e8(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fbf2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}



/* Entry: 100fbf2d4; end: 100fbf2ef;  */

void FUN_100fbf2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbf2f0,0,0);
  return;
}



/* Entry: 100fbf2f0; end: 100fbf3b7;  */

void FUN_100fbf2f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x78) + 0x10);
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x78) + 0x18);
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x20))();
  *(long *)(unaff_x22 + 0x80) = lVar3;
  if (lVar3 != 0) {
    plVar4 = (long *)(*(long *)(unaff_x22 + 0x78) + 0xa8);
    func_0x0001000a8868(plVar4,*(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0xc0));
    lVar6 = *plVar4;
    plVar4 = (long *)0x210;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100fbf3b8;
    lVar1 = *(long *)(unaff_x22 + 0x68);
    lVar2 = *(long *)(unaff_x22 + 0x70);
    plVar4[0x31] = lVar3;
    plVar4[0x32] = lVar6;
    plVar4[0x2f] = lVar1;
    plVar4[0x30] = lVar2;
    plVar4[0x2e] = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa8bd8,0,0);
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x22 + 0x60);
  *puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5[2] = 1;
  puVar5[1] = 0;
  puVar5[3] = 0;
  *(undefined1 *)(puVar5 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100fbf3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbf3b8; end: 100fbf417;  */

void FUN_100fbf3b8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fbf418;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_100fbf528;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fbf418; end: 100fbf527;  */

void FUN_100fbf418(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)(unaff_x22 + 0x10);
  puVar2 = (undefined *)*puVar4;
  if (*(long *)(puVar2 + 0x10) == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    FUN_100fc4028(puVar4);
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 1;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x0001000d224c(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    uVar5 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(lVar1 + 0xc0))(1,0xd000000000000038,0x800000010ef1dc20,uVar5,lVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar3);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x30);
    func_0x000107c61434(puVar2);
    func_0x000100fc3f8c(uVar3,uVar7,uVar5,uVar6);
    FUN_100fc4028(puVar4);
  }
  puVar4 = *(undefined8 **)(unaff_x22 + 0x60);
  *puVar4 = puVar2;
  puVar4[1] = uVar3;
  puVar4[2] = uVar7;
  puVar4[3] = uVar5;
  *(undefined1 *)(puVar4 + 4) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000100fbf524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbf528; end: 100fbf57b;  */

void FUN_100fbf528(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  *puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1[2] = 1;
  puVar1[1] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100fbf578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fbf57c; end: 100fbf95f;  */

/* WARNING: Removing unreachable block (ram,0x000100fbf950) */
/* WARNING: Type propagation algorithm not settling */

undefined * FUN_100fbf57c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong *puVar20;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar3 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  lVar5 = param_1;
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  puVar13 = puVar3;
  func_0x000107c4310c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    uVar12 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    puVar6 = puVar13;
    func_0x000107c5fc54(puVar13,uVar12);
    func_0x000107c61170(puVar13);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar13 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar9 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    puStack_68 = puVar9;
    puVar9 = (undefined *)((ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100fa7f40(0,puVar9,0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fbf950);
      (*pcVar4)();
    }
    puVar15 = (undefined *)0x0;
    do {
      puVar8 = puStack_68;
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar16 = *(undefined **)(puVar6 + (long)puVar15 * 8 + 0x20);
        func_0x000107c615f0(puVar16);
        puVar10 = puVar9;
      }
      else {
        puVar16 = puVar15;
        puVar10 = puVar6;
        FUN_100fb0ba0();
      }
      puVar19 = puVar16;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (puVar19 == (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        puVar19 = (undefined *)0x0;
        puVar9 = puVar10;
      }
      else {
        puVar17 = puVar19;
        func_0x000107c5faec();
        puVar9 = puVar10;
        func_0x000107c61170(puVar19);
        puVar19 = puVar10;
      }
      uVar14 = *(ulong *)(puVar8 + 0x10);
      puVar10 = (undefined *)(uVar14 + 1);
      puStack_68 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
        puVar9 = puVar10;
        func_0x000100fa7f40(1 < *(ulong *)(puVar8 + 0x18),puVar10,1);
      }
      puVar8 = puStack_68;
      puVar15 = puVar15 + 1;
      *(undefined **)(puStack_68 + 0x10) = puVar10;
      *(undefined **)(puStack_68 + uVar14 * 0x18 + 0x20) = puVar17;
      *(undefined **)(puStack_68 + uVar14 * 0x18 + 0x28) = puVar19;
      *(undefined **)(puStack_68 + uVar14 * 0x18 + 0x30) = puVar16;
    } while (puVar13 != puVar15);
    func_0x000107c6142c(puVar6);
    puVar9 = *(undefined **)(puVar8 + 0x10);
    puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar13;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d51628,&UNK_10d918320);
    func_0x000107c60498();
    puVar13 = puVar9;
  }
  puStack_68 = puVar13;
  FUN_100fc38e8(puVar8,1,&puStack_68);
  func_0x000107c6142c(puVar8);
  puVar9 = puStack_68;
  uVar14 = *(ulong *)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 == 0) {
LAB_100fbf914:
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(puVar9);
    return puVar13;
  }
  uVar18 = 0;
LAB_100fbf7ec:
  uVar1 = uVar18;
  if (uVar18 <= uVar14) {
    uVar1 = uVar14;
  }
  puVar20 = (ulong *)(param_1 + 0x28 + uVar18 * 0x10);
  uVar18 = uVar18 + 1;
  do {
    if (uVar18 - uVar1 == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fbf94c);
      (*pcVar4)();
    }
    if (*(long *)(puVar9 + 0x10) != 0) {
      uVar7 = puVar20[-1];
      uVar2 = *puVar20;
      func_0x000107c61438(uVar2,2);
      func_0x000107c6157c(puVar9);
      uVar11 = uVar2;
      FUN_100fac43c();
      if ((uVar11 & 1) != 0) break;
      func_0x000107c61430(uVar2,2);
      func_0x000107c61574(puVar9);
    }
    uVar18 = uVar18 + 1;
    puVar20 = puVar20 + 2;
    if (uVar18 - uVar14 == 1) goto LAB_100fbf914;
  } while( true );
  uVar12 = *(undefined8 *)(*(long *)(puVar9 + 0x38) + uVar7 * 8);
  func_0x000107c615f0(uVar12);
  func_0x000107c61574(puVar9);
  func_0x000107c61430(uVar2,2);
  puVar6 = puVar13;
  func_0x000107c61558();
  puVar8 = puVar13;
  if (((ulong)puVar6 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    FUN_100fb4c74(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
  }
  uVar1 = *(ulong *)(puVar8 + 0x10);
  puVar13 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    FUN_100fb4c74(puVar13,uVar1 + 1,1,puVar8);
  }
  *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar13 + uVar1 * 0x10 + 0x20) = uVar12;
  puVar13[uVar1 * 0x10 + 0x28] = 1;
  if (uVar18 == uVar14) goto LAB_100fbf914;
  goto LAB_100fbf7ec;
}



/* Entry: 100fbf960; end: 100fbf9af;  */

void FUN_100fbf960(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fbf9b0;
  plVar1[2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fbf9b0; end: 100fbfa33;  */

void FUN_100fbf9b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x30));
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(lVar3 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(lVar3 + 0x40) = uVar1;
  *(undefined8 *)(lVar3 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbfa34,uVar1,uVar2);
  return;
}



/* Entry: 100fbfa34; end: 100fbfb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbfa34(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar2 = _DAT_112d51898;
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar4 = lVar5 + _DAT_112d51898;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    pcVar3 = FUN_100fbfb90;
    lVar2 = 0;
    lVar4 = 0;
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x10);
    func_0x000107c61170();
    func_0x000107c61604(lVar5 + lVar2,0);
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar2 = *(long *)(lVar6 + 0x18);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x28))();
    *(long *)(unaff_x22 + 0x50) = lVar4;
    lVar2 = lVar4;
    func_0x000107c614f0();
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100fbfb08;
    plVar1[3] = lVar2;
    plVar1[4] = lVar4;
    lVar2 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar2;
    func_0x000107c5fce8();
    plVar1[5] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[6] = lVar2;
    plVar1[7] = lVar4;
    pcVar3 = FUN_100ff4210;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar2,lVar4);
  return;
}



/* Entry: 100fbfb08; end: 100fbfb53;  */

void FUN_100fbfb08(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fbfb54,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48));
  return;
}



/* Entry: 100fbfb54; end: 100fbfb8f;  */

void FUN_100fbfb54(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbfb90,0,0);
  return;
}



/* Entry: 100fbfb90; end: 100fbfc07;  */

void FUN_100fbfb90(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fbfc08;
                    /* WARNING: Could not recover jumptable at 0x000100fbfc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 100fbfc08; end: 100fbfc77;  */

void FUN_100fbfc08(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  piVar3 = *(int **)(lVar4 + 0x20);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x60));
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar4 + 0x68) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_100fbfc78;
                    /* WARNING: Could not recover jumptable at 0x000100fbfc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 100fbfc78; end: 100fbfcb3;  */

void FUN_100fbfc78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000100fbfcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fbfcb4; end: 100fbfd57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100fbfcb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  
  uVar2 = 0;
  func_0x000100f9ab70(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61604(unaff_x20 + _DAT_112d51898,uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar3);
  pcVar4 = *(code **)(lVar1 + 0x28);
  func_0x000107c61174(uVar2);
  (*pcVar4)(uVar3,lVar1);
  func_0x000107c3e2c0();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  return uVar2;
}



/* Entry: 100fbfd58; end: 100fbfd5b;  */

void FUN_100fbfd58(void)

{
  return;
}



/* Entry: 100fbfd5c; end: 100fbff03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbfd5c(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long alStack_80 [2];
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  
  lVar3 = 0x112d515c0;
  uStack_64 = param_2;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  lVar12 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_1137ff110;
  puVar1 = PTR___sytN_11034f1b0;
  lVar11 = *(long *)(unaff_x20 + _DAT_1137ff110);
  if (lVar11 != 0) {
    func_0x000107c6157c(lVar11);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar11);
  }
  puVar4 = &UNK_1103729a8;
  func_0x000107c613fc(&UNK_1103729a8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  (**(code **)(lVar12 + 0x10))(auStack_70 + -extraout_x8,param_1,lVar3);
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_110372b88;
  func_0x000107c613fc(&UNK_110372b88,uVar10 + 9,uVar8 | 7);
  (**(code **)(lVar12 + 0x20))(puVar5 + uVar13,auStack_70 + -extraout_x8,lVar3);
  *(undefined **)(puVar5 + uVar10) = puVar4;
  *(byte *)((long)(puVar5 + uVar10) + 8) = (byte)uStack_64 & 1;
  *(undefined **)((long)alStack_80 + -extraout_x8) = puVar1 + 8;
  uVar6 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918950,puVar5);
  func_0x000107c61574(puVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 100fbff04; end: 100fbff9b;  */

void FUN_100fbff04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbff9c,uVar3,uVar4);
  return;
}



/* Entry: 100fbff9c; end: 100fc01bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbff9c(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x60,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  plVar7 = (long *)(unaff_x22 + 0xe0);
  *plVar7 = lVar3;
  lVar6 = _DAT_112d51890;
  if (lVar3 == 0) {
    plVar7 = (long *)(unaff_x22 + 200);
  }
  else {
    *(long *)(unaff_x22 + 0xe8) = _DAT_112d51890;
    func_0x000107c61604(lVar3 + lVar6,*(undefined8 *)(unaff_x22 + 0xb8));
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112d518a0);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(unaff_x22 + 0xa0);
    func_0x000107c61574(uVar4);
    lVar3 = *(long *)(unaff_x22 + 0xa0);
    *(long *)(unaff_x22 + 0xf0) = lVar3;
    if (lVar3 != 0) {
      plVar7 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf8) = plVar7;
      uVar4 = 0x112d50c60;
      func_0x0001000285a8(0x112d50c60,&UNK_10d9175e0);
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_100fc01c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0xa8,lVar3,uVar4);
      return;
    }
    lVar3 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    func_0x000107c6142c();
    if (lVar3 == 0) {
      lVar6 = *(long *)(unaff_x22 + 0xe0);
      uVar4 = *(undefined8 *)(lVar6 + 0x48);
      lVar3 = *(long *)(lVar6 + 0x50);
      func_0x0001000a8868(lVar6 + 0x30,uVar4);
      lVar3 = *(long *)(lVar3 + 8);
      piVar2 = *(int **)(lVar3 + 8);
      iVar1 = *piVar2;
      plVar7 = (long *)(ulong)(uint)piVar2[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x100) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_100fc0348;
                    /* WARNING: Could not recover jumptable at 0x000100fc01bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar2))(uVar4,lVar3);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
    lVar3 = *(long *)(unaff_x22 + 0xe0);
    iVar1 = (int)*(undefined8 *)(lVar3 + 0x108);
    func_0x000107c49d9c();
    if (iVar1 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar4 = *(undefined8 *)(lVar3 + 0x108);
      lVar6 = *(long *)(*(long *)(unaff_x22 + 0xe0) + 0x110);
      func_0x000107c614f0(uVar4);
      func_0x000107c5eea0(uVar5);
      lVar3 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar5,0,1,lVar3);
      (**(code **)(lVar6 + 0x10))(uVar5,uVar4,lVar6);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*plVar7);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100fc00c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc01c0; end: 100fc020b;  */

void FUN_100fc01c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fc020c,*(undefined8 *)(lVar2 + 0xd0),*(undefined8 *)(lVar2 + 0xd8));
  return;
}



/* Entry: 100fc020c; end: 100fc0347;  */

void FUN_100fc020c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x10);
  func_0x000107c6142c();
  if (lVar5 != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
    lVar5 = *(long *)(unaff_x22 + 0xe0);
    iVar1 = (int)*(undefined8 *)(lVar5 + 0x108);
    func_0x000107c49d9c();
    if (iVar1 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar4 = *(undefined8 *)(lVar5 + 0x108);
      lVar7 = *(long *)(*(long *)(unaff_x22 + 0xe0) + 0x110);
      func_0x000107c614f0(uVar4);
      func_0x000107c5eea0(uVar6);
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar6,0,1,lVar5);
      (**(code **)(lVar7 + 0x10))(uVar6,uVar4,lVar7);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100fc02dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(lVar7 + 0x48);
  lVar5 = *(long *)(lVar7 + 0x50);
  func_0x0001000a8868(lVar7 + 0x30,uVar4);
  lVar5 = *(long *)(lVar5 + 8);
  piVar3 = *(int **)(lVar5 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fc0348;
                    /* WARNING: Could not recover jumptable at 0x000100fc0344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(uVar4,lVar5);
  return;
}



/* Entry: 100fc0348; end: 100fc0393;  */

void FUN_100fc0348(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x109) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fc0394,*(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0xd8));
  return;
}



/* Entry: 100fc0394; end: 100fc0763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc0394(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  cVar1 = *(char *)(unaff_x22 + 0x109);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  lVar13 = *(long *)(unaff_x22 + 0xe0);
  iVar2 = (int)*(undefined8 *)(lVar13 + 0x108);
  func_0x000107c49d9c();
  if (cVar1 == '\x01') {
    if (iVar2 == 0) {
LAB_100fc06ac:
      lVar9 = *(long *)(unaff_x22 + 0xe0) + *(long *)(unaff_x22 + 0xe8);
      func_0x000107c61618();
      if (lVar9 != 0) {
        lVar10 = *(long *)(unaff_x22 + 0xe0);
        puVar4 = PTR_PTR_1126aff58;
        func_0x000107c610f8(PTR_PTR_1126aff58);
        func_0x000107c48080();
        FUN_100fa58a4(lVar10 + 0x80,unaff_x22 + 0x10);
        if (*(long *)(unaff_x22 + 0x28) == 0) {
          func_0x000107c61170(lVar9);
          func_0x000107c61170(puVar4);
          func_0x000100fa58f4(unaff_x22 + 0x10);
        }
        else {
          func_0x0001000a8868();
          func_0x000107c61174(puVar4);
          FUN_100fc3094();
          func_0x000107c61170(lVar9);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar4);
          func_0x0001000834e4(unaff_x22 + 0x10);
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0xe0) + 0xf0);
      func_0x000107c6157c(uVar6);
      func_0x0001000d224c(unaff_x22 + 0x108);
      func_0x000107c61574(uVar6);
      if (*(char *)(unaff_x22 + 0x108) != '\x01') goto LAB_100fc06ac;
      lVar9 = *(long *)(unaff_x22 + 0xe0) + *(long *)(unaff_x22 + 0xe8);
      func_0x000107c61618();
      if (lVar9 != 0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
        puVar4 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x0001000d224c(unaff_x22 + 0x90);
        lVar11 = *(long *)(unaff_x22 + 0x90);
        lVar10 = lVar11 + _DAT_112d50df0;
        *(undefined ***)(lVar10 + 8) = &PTR_DAT_110372a40;
        func_0x000107c61604(lVar10,uVar8);
        lVar7 = *(long *)(lVar11 + _DAT_112d50dc8);
        uVar6 = *(undefined8 *)(lVar11 + _DAT_112d50dd8);
        FUN_100fc3f28(lVar11 + _DAT_112d50de0,unaff_x22 + 0x38);
        uVar12 = *(undefined8 *)(lVar11 + _DAT_112d50de8);
        func_0x000100fa7f04(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar4);
        func_0x000107c6157c(uVar8);
        func_0x000107c61434(lVar7);
        func_0x000107c61174(uVar6);
        func_0x000107c615f0(uVar12);
        FUN_100fa6508(lVar7,uVar6,unaff_x22 + 0x38,uVar12);
        lVar10 = lVar7 + _DAT_112d50f58;
        func_0x000107c61428(lVar10,unaff_x22 + 0x78,1,0);
        *(undefined ***)(lVar10 + 8) = &PTR_DAT_110371900;
        func_0x000107c61604(lVar10,lVar11);
        puVar3 = PTR_PTR_1126b0a08;
        func_0x000107c610f8();
        func_0x000107c48e84();
        func_0x000107c5a070();
        func_0x000107c52aa4(puVar3);
        func_0x000107c5a074(puVar3);
        func_0x000107c52684(puVar3);
        uVar6 = *(undefined8 *)(lVar11 + _DAT_112d50e00);
        *(undefined **)(lVar11 + _DAT_112d50e00) = puVar3;
        func_0x000107c61174(puVar3);
        func_0x000107c61170(uVar6);
        func_0x000107c4ef3c(0x3fe570a3d70a3d71,puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar7);
        func_0x000107c61604(lVar11 + _DAT_112d50df8,puVar4);
        func_0x000107c61574(uVar8);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar11);
      }
    }
    uVar5 = *(ulong *)(lVar13 + 0x108);
    func_0x000107c49d9c();
    if ((uVar5 & 1) == 0) goto LAB_100fc0674;
  }
  else if (iVar2 == 0) goto LAB_100fc0674;
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(lVar13 + 0x108);
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0xe0) + 0x110);
  func_0x000107c614f0(uVar6);
  func_0x000107c5eea0(uVar8);
  lVar13 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar8,0,1,lVar13);
  (**(code **)(lVar9 + 0x10))(uVar8,uVar6,lVar9);
LAB_100fc0674:
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100fc06a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc0764; end: 100fc0837;  */

void FUN_100fc0764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  lVar5 = 0x112d515c0;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  *(long *)(unaff_x22 + 0x98) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  lVar5 = 0;
  func_0x0001038e5950();
  uVar1 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar1;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc0838,uVar3,uVar4);
  return;
}



/* Entry: 100fc0838; end: 100fc0d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc0838(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte **ppbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long unaff_x22;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  byte *pbStack_68;
  ulong uStack_60;
  
  lVar19 = *(long *)(*(long *)(unaff_x22 + 0x70) + 0x10);
  *(long *)(unaff_x22 + 0xd8) = lVar19;
  lVar20 = *(long *)(*(long *)(unaff_x22 + 0x70) + 0x18);
  *(long *)(unaff_x22 + 0xe0) = lVar20;
  func_0x000107c614f0();
  *(long *)(unaff_x22 + 0xe8) = lVar19;
  lVar7 = lVar19;
  lVar18 = lVar20;
  (**(code **)(lVar20 + 0x30))();
  if (lVar7 == 0) {
    lVar7 = *(long *)(unaff_x22 + 0x70) + _DAT_112d51890;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0xf0) = lVar7;
    if (lVar7 != 0) {
      plVar17 = *(long **)(*(long *)(unaff_x22 + 0x70) + 0x60);
      plVar5 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf8) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_100fc0d30;
      plVar5[5] = unaff_x22 + 0x10;
      plVar5[6] = (long)plVar17;
      lVar18 = *(long *)(*plVar17 + 0x50);
      plVar5[7] = lVar18;
      lVar7 = 0;
      __sSqMa(0,lVar18);
      plVar5[8] = lVar7;
      lVar7 = *(long *)(lVar7 + -8);
      plVar5[9] = lVar7;
      uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar5[10] = uVar8;
      lVar7 = *(long *)(lVar18 + -8);
      plVar5[0xb] = lVar7;
      uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar5[0xc] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    goto LAB_100fc0ca0;
  }
  uVar8 = *(ulong *)(unaff_x22 + 0x80);
  uVar1 = *(ulong *)(unaff_x22 + 0x88);
  lVar15 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  uVar3 = *(undefined8 *)(lVar15 + 0x18);
  lVar16 = *(long *)(lVar15 + 0x20);
  func_0x0001000a8868(lVar15,uVar3);
  (**(code **)(lVar16 + 8))(uVar3,lVar16);
  pbVar9 = (byte *)(uVar8 & 0xffffffffffff);
  pbVar10 = (byte *)(uVar1 >> 0x38 & 0xf);
  pbVar4 = pbVar9;
  if ((uVar1 & 0x2000000000000000) != 0) {
    pbVar4 = pbVar10;
  }
  if (pbVar4 == (byte *)0x0) goto LAB_100fc0bd8;
  if ((uVar1 >> 0x3c & 1) == 0) {
    pbVar4 = *(byte **)(unaff_x22 + 0x80);
    if ((uVar1 >> 0x3d & 1) != 0) {
      pbStack_68 = pbVar4;
      uStack_60 = uVar1 & 0xffffffffffffff;
      uVar21 = (uint)pbVar4 & 0xff;
      if (uVar21 == 0x2b) {
        if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fc0d30);
          (*pcVar2)();
        }
        pbVar10 = pbVar10 + -1;
        if (pbVar10 == (byte *)0x0) goto LAB_100fc0b94;
        lVar16 = 0;
        pbVar4 = (byte *)((ulong)&pbStack_68 | 1);
        do {
          if (((9 < *pbVar4 - 0x30) ||
              (lVar15 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar8 = (ulong)(byte)(*pbVar4 - 0x30), lVar16 = lVar15 + uVar8, SCARRY8(lVar15,uVar8))
             ) goto LAB_100fc0b94;
          uVar21 = 0;
          pbVar10 = pbVar10 + -1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar10 != (byte *)0x0);
      }
      else if (uVar21 == 0x2d) {
        if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fc0d28);
          (*pcVar2)();
        }
        pbVar10 = pbVar10 + -1;
        if (pbVar10 == (byte *)0x0) {
LAB_100fc0b94:
          uVar21 = 1;
        }
        else {
          lVar16 = 0;
          pbVar4 = (byte *)((ulong)&pbStack_68 | 1);
          do {
            if (((9 < *pbVar4 - 0x30) ||
                (lVar15 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f))
               || (uVar8 = (ulong)(byte)(*pbVar4 - 0x30), lVar16 = lVar15 - uVar8,
                  SBORROW8(lVar15,uVar8))) goto LAB_100fc0b94;
            uVar21 = 0;
            pbVar10 = pbVar10 + -1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar10 != (byte *)0x0);
        }
      }
      else {
        if (pbVar10 == (byte *)0x0) goto LAB_100fc0b94;
        lVar16 = 0;
        ppbVar12 = &pbStack_68;
        do {
          if (((9 < *(byte *)ppbVar12 - 0x30) ||
              (lVar15 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar8 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30), lVar16 = lVar15 + uVar8,
             SCARRY8(lVar15,uVar8))) goto LAB_100fc0b94;
          uVar21 = 0;
          pbVar10 = pbVar10 + -1;
          ppbVar12 = (byte **)((long)ppbVar12 + 1);
        } while (pbVar10 != (byte *)0x0);
      }
      goto LAB_100fc0b9c;
    }
    if (((ulong)pbVar4 >> 0x3c & 1) == 0) {
      pbVar9 = *(byte **)(unaff_x22 + 0x88);
      func_0x000107c60358();
    }
    else {
      pbVar4 = (byte *)((uVar1 & 0xfffffffffffffff) + 0x20);
    }
    if (*pbVar4 != 0x2b) {
      if (*pbVar4 != 0x2d) {
        if (pbVar9 != (byte *)0x0) {
          lVar16 = 0;
          pbVar10 = pbVar4;
          while (pbVar10 != (byte *)0x0) {
            if (((9 < *pbVar4 - 0x30) ||
                (lVar15 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f))
               || (uVar8 = (ulong)(byte)(*pbVar4 - 0x30), lVar16 = lVar15 + uVar8,
                  SCARRY8(lVar15,uVar8))) goto LAB_100fc0bd8;
            pbVar9 = pbVar9 + -1;
            pbVar4 = pbVar4 + 1;
            pbVar10 = pbVar9;
          }
          goto LAB_100fc0ba8;
        }
        goto LAB_100fc0bd8;
      }
      pbVar10 = pbVar9 + -1;
      if ((long)pbVar9 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fc0d24);
        (*pcVar2)();
      }
      if (pbVar10 == (byte *)0x0) goto LAB_100fc0bd8;
      lVar16 = 0;
      do {
        pbVar4 = pbVar4 + 1;
        if (((9 < *pbVar4 - 0x30) ||
            (lVar15 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
           (uVar8 = (ulong)(byte)(*pbVar4 - 0x30), lVar16 = lVar15 - uVar8, SBORROW8(lVar15,uVar8)))
        goto LAB_100fc0bd8;
        pbVar10 = pbVar10 + -1;
      } while (pbVar10 != (byte *)0x0);
      goto LAB_100fc0ba8;
    }
    pbVar10 = pbVar9 + -1;
    if ((long)pbVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fc0d2c);
      (*pcVar2)();
    }
    if (pbVar10 != (byte *)0x0) {
      lVar16 = 0;
      do {
        pbVar4 = pbVar4 + 1;
        if (((9 < *pbVar4 - 0x30) ||
            (lVar15 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
           (uVar8 = (ulong)(byte)(*pbVar4 - 0x30), lVar16 = lVar15 + uVar8, SCARRY8(lVar15,uVar8)))
        goto LAB_100fc0bd8;
        pbVar10 = pbVar10 + -1;
      } while (pbVar10 != (byte *)0x0);
      goto LAB_100fc0ba8;
    }
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c61434(uVar11);
    uVar13 = uVar11;
    FUN_100fb6b80(uVar14,uVar11,10);
    uVar21 = (uint)uVar13;
    func_0x000107c6142c(uVar11);
LAB_100fc0b9c:
    if ((uVar21 & 0xff) != 1) {
LAB_100fc0ba8:
      puVar6 = PTR_PTR_1126b00c0;
      func_0x000107c610f8(PTR_PTR_1126b00c0);
      func_0x000107c453e4();
      func_0x000107c55218();
      func_0x000107c55bcc(uVar3);
      func_0x000107c61170(puVar6);
    }
  }
LAB_100fc0bd8:
  uVar22 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar16 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar14);
  (**(code **)(lVar20 + 0x10))(uVar22,lVar19,lVar20);
  (**(code **)(lVar16 + 0x18))(uVar11,uVar1,uVar13,uVar22,uVar14,lVar16);
  FUN_100fc3b98(uVar22);
  func_0x0001000834e4(unaff_x22 + 0x38);
  lVar19 = lVar7;
  func_0x000107c614f0(lVar7);
  (**(code **)(lVar18 + 8))(uVar3,uVar11,lVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(lVar7);
LAB_100fc0ca0:
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100fc0ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc0d30; end: 100fc0d73;  */

void FUN_100fc0d30(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fc0d74,*(undefined8 *)(lVar1 + 200),*(undefined8 *)(lVar1 + 0xd0));
  return;
}



/* Entry: 100fc0d74; end: 100fc0e73;  */

void FUN_100fc0d74(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar2 = *(long *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar11 = *(long *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar7 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar7,uVar3);
  uVar8 = *(undefined8 *)(lVar11 + 0x18);
  lVar6 = *(long *)(lVar11 + 0x20);
  func_0x0001000a8868(lVar11,uVar8);
  (**(code **)(lVar6 + 8))(uVar8,lVar6);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar8;
  (**(code **)(lVar2 + 0x10))(uVar12,uVar4,lVar2);
  piVar10 = *(int **)(lVar5 + 8);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100fc0e74;
                    /* WARNING: Could not recover jumptable at 0x000100fc0e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (*(undefined8 *)(unaff_x22 + 0xa8),uVar8,*(undefined8 *)(unaff_x22 + 0xf0),
             *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0xb0),uVar3,lVar5,lVar7);
  return;
}



/* Entry: 100fc0e74; end: 100fc0ef3;  */

void FUN_100fc0e74(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x108));
  uVar3 = *(undefined8 *)(lVar4 + 0x100);
  if (unaff_x20 == 0) {
    FUN_100fc3b98(*(undefined8 *)(lVar4 + 0xb0));
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_100fc0ef4;
  }
  else {
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_100fc0fc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 100fc0ef4; end: 100fc0fc3;  */

void FUN_100fc0ef4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x0001000834e4(unaff_x22 + 0x10);
  FUN_100fbfd5c(uVar6,0);
  func_0x0001000d224c(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x68);
  uVar4 = uVar2;
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar3 + 0xa8))(0,uVar4,lVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar2);
  (**(code **)(lVar1 + 8))(uVar6,uVar7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100fc0fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc0fc4; end: 100fc1037;  */

void FUN_100fc0fc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar4);
  FUN_100fc3b98(uVar3);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fc1034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc1038; end: 100fc10f7;  */

void FUN_100fc1038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  lVar1 = 0;
  func_0x0001038e5950();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  lVar1 = 0x112d515c0;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc10f8,uVar3,uVar4);
  return;
}



/* Entry: 100fc10f8; end: 100fc11e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc10f8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x48) + _DAT_112d51890;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x90) = lVar2;
  if (lVar2 != 0) {
    plVar4 = *(long **)(*(long *)(unaff_x22 + 0x48) + 0x60);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x100fc11a0;
    plVar1[5] = unaff_x22 + 0x10;
    plVar1[6] = (long)plVar4;
    lVar6 = *(long *)(*plVar4 + 0x50);
    plVar1[7] = lVar6;
    lVar2 = 0;
    __sSqMa(0,lVar6);
    plVar1[8] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    plVar1[9] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar3;
    lVar2 = *(long *)(lVar6 + -8);
    plVar1[0xb] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100fc119c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc11e4; end: 100fc12a7;  */

void FUN_100fc11e4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar8 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  lVar4 = *(long *)(lVar8 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(lVar8 + 0x10));
  (**(code **)(lVar4 + 0x10))(uVar7);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fc12a8;
                    /* WARNING: Could not recover jumptable at 0x000100fc12a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x58),0,uVar2,lVar3);
  return;
}



/* Entry: 100fc12a8; end: 100fc130b;  */

void FUN_100fc12a8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xa0));
  if (unaff_x20 == 0) {
    FUN_100fc3b98(*(undefined8 *)(lVar4 + 0x58));
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    pcVar1 = FUN_100fc130c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    pcVar1 = FUN_100fc13d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}


