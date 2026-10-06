/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101be9790; end: 101be9c57;  */

void FUN_101be9790(double param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  double dVar16;
  
  lVar13 = *(long *)(unaff_x22 + 0xe0);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c61428(lVar13 + 0xa0,unaff_x22 + 0x10,0,0);
  lVar11 = *(long *)(lVar13 + 0xa0);
  if (*(long *)(lVar11 + 0x10) == 0) {
    pcVar14 = *(code **)(*(long *)(unaff_x22 + 0x118) + 0x38);
    (*pcVar14)(*(undefined8 *)(unaff_x22 + 0x108),1,1,*(undefined8 *)(unaff_x22 + 0x110));
LAB_101be9888:
    FUN_101befa44(*(undefined8 *)(unaff_x22 + 0x108),0x112e08830,&UNK_10d9dd418);
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 200);
    uVar8 = *(ulong *)(unaff_x22 + 0xd0);
    func_0x000107c61434(lVar11);
    func_0x000100029284(lVar10);
    bVar1 = (uVar8 & 1) == 0;
    if (!bVar1) {
      func_0x000101bee04c(*(long *)(lVar11 + 0x38) +
                          *(long *)(*(long *)(unaff_x22 + 0x118) + 0x48) * lVar10,
                          *(undefined8 *)(unaff_x22 + 0x108),FUN_101bedd44);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar10 = *(long *)(unaff_x22 + 0x118);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x108);
    pcVar14 = *(code **)(lVar10 + 0x38);
    (*pcVar14)(uVar12,bVar1,1,uVar7);
    func_0x000107c6142c(lVar11);
    (**(code **)(lVar10 + 0x30))(uVar12,1,uVar7);
    if ((int)uVar12 == 1) goto LAB_101be9888;
    lVar10 = *(long *)(unaff_x22 + 0x120);
    lVar11 = *(long *)(unaff_x22 + 0x110);
    func_0x000101bedfc4(*(undefined8 *)(unaff_x22 + 0x108),lVar10,FUN_101bedd44);
    func_0x000107c5ee68(lVar10 + *(int *)(lVar11 + 0x14));
    dVar16 = param_1;
    func_0x000100083b20(unaff_x22 + 0xb8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c4d8a4(uVar7);
    func_0x000107c615e8(uVar7);
    if (param_1 < dVar16) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(*(long *)(unaff_x22 + 0x130) + 8))
                (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x128));
      func_0x000101befa84(uVar7,uVar12,0x112d5ed18,&UNK_10d925c50);
      func_0x000101bee090(uVar7,FUN_101bedd44);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x138));
      func_0x000107c615c0(uVar15);
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar7);
      func_0x000107c615c0(uVar9);
      func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101be9a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c61428(lVar13 + 0xa0,unaff_x22 + 0xa0,0x21,0);
    FUN_101bec608(uVar9,uVar7,uVar12);
    func_0x000107c614a8(unaff_x22 + 0xa0);
    FUN_101befa44(uVar9,0x112e08830,&UNK_10d9dd418);
    func_0x000101bee090(uVar5,FUN_101bedd44);
  }
  *(code **)(unaff_x22 + 0x140) = pcVar14;
  lVar13 = *(long *)(unaff_x22 + 0xe0);
  func_0x000107c61428(lVar13 + 0xa8,unaff_x22 + 0x28,0,0);
  lVar11 = *(long *)(lVar13 + 0xa8);
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar10 = *(long *)(unaff_x22 + 200);
    uVar8 = *(ulong *)(unaff_x22 + 0xd0);
    func_0x000107c61434(lVar11);
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + lVar10 * 8);
      *(undefined8 *)(unaff_x22 + 0x148) = uVar9;
      func_0x000107c6157c(uVar9);
      func_0x000107c6142c(lVar11);
      plVar4 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x150) = plVar4;
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101be9c58;
      uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
      goto LAB_101be9bcc;
    }
    func_0x000107c6142c(lVar11);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x17c);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined4 *)(unaff_x22 + 0x178);
  uVar15 = *(undefined8 *)(unaff_x22 + 200);
  puVar6 = &UNK_110454790;
  func_0x000107c613fc(&UNK_110454790,0x39,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar15;
  *(undefined8 *)(puVar6 + 0x18) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  puVar6[0x28] = (char)uVar2;
  puVar6[0x29] = (char)((uint)uVar2 >> 8);
  puVar6[0x2a] = (char)((uint)uVar2 >> 0x10);
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  puVar6[0x38] = uVar3;
  func_0x000107c61434(uVar12);
  func_0x000107c6157c(uVar7);
  uVar9 = 10;
  func_0x000100859150(10,3,0x50,4,0,0,&UNK_10d9dd448,puVar6,uVar5);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar9;
  func_0x000107c61574(puVar6);
  func_0x000107c61428(lVar13 + 0xa8,unaff_x22 + 0x40,0x21,0);
  func_0x000107c61434(uVar12);
  func_0x000107c6157c(uVar9);
  uVar7 = *(undefined8 *)(lVar13 + 0xa8);
  func_0x000107c61558(uVar7);
  uVar5 = *(undefined8 *)(lVar13 + 0xa8);
  *(undefined8 *)(lVar13 + 0xa8) = 0x8000000000000000;
  func_0x000101bec970(uVar9,uVar15,uVar12,uVar7);
  func_0x000107c6142c(uVar12);
  *(undefined8 *)(lVar13 + 0xa8) = uVar5;
  func_0x000107c614a8(unaff_x22 + 0x40);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x168) = plVar4;
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101be9d70;
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
LAB_101be9bcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(uVar5,uVar9,uVar12,uVar7,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 101be9c58; end: 101be9cb3;  */

void FUN_101be9c58(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101be9cb4;
  }
  else {
    pcVar1 = FUN_101be9f60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0xe0),0);
  return;
}



/* Entry: 101be9cb4; end: 101be9d6f;  */

void FUN_101be9cb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x148));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  FUN_101bedf7c(uVar5,uVar6,0x112d5ed18,&UNK_10d925c50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101be9d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be9d70; end: 101be9dcb;  */

void FUN_101be9d70(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x170) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x168));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101be9dcc;
  }
  else {
    pcVar1 = FUN_101bea004;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0xe0),0);
  return;
}



/* Entry: 101be9dcc; end: 101be9f5f;  */

void FUN_101be9dcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  pcVar3 = *(code **)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar4 = *(long *)(unaff_x22 + 0x130);
  lVar9 = *(long *)(unaff_x22 + 0x110);
  lVar12 = *(long *)(unaff_x22 + 0x100);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar11 = *(long *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000101befa84(uVar10,lVar12,0x112d5ed18,&UNK_10d925c50);
  iVar6 = *(int *)(lVar9 + 0x14);
  func_0x000107c61434(uVar5);
  func_0x000107c5eea0(lVar12 + iVar6);
  (*pcVar3)(lVar12,0,1,lVar9);
  func_0x000107c61428(lVar11 + 0xa0,unaff_x22 + 0x70,0x21,0);
  FUN_101be92c8(lVar12,uVar7,uVar5);
  func_0x000107c614a8(unaff_x22 + 0x70);
  func_0x000107c61428(lVar11 + 0xa8,unaff_x22 + 0x88,0x21,0);
  FUN_101bec748(uVar7,uVar5);
  func_0x000107c614a8(unaff_x22 + 0x88);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar7);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  FUN_101bedf7c(uVar10,uVar8,0x112d5ed18,&UNK_10d925c50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101be9f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be9f60; end: 101bea003;  */

void FUN_101be9f60(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x148));
  (**(code **)(lVar1 + 8))(uVar5,uVar6);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101bea000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bea004; end: 101bea0ef;  */

void FUN_101bea004(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61428(*(long *)(unaff_x22 + 0xe0) + 0xa8,unaff_x22 + 0x58,0x21,0);
  FUN_101bec748(uVar8,uVar3);
  func_0x000107c614a8(unaff_x22 + 0x58);
  func_0x000107c61574(uVar8);
  func_0x000107c61654();
  lVar1 = *(long *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bea0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bea0f0; end: 101bea117;  */

void FUN_101bea0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x4c) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined4 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea118,param_4,0);
  return;
}



/* Entry: 101bea118; end: 101bea1f7;  */

void FUN_101bea118(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long *plVar10;
  
  uVar6 = *(undefined1 *)(unaff_x22 + 0x4c);
  uVar5 = *(undefined4 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar7 = &UNK_1104547f8;
  func_0x000107c613fc(&UNK_1104547f8,0x39,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  puVar7[0x28] = (char)uVar5;
  puVar7[0x29] = (char)((uint)uVar5 >> 8);
  puVar7[0x2a] = (char)((uint)uVar5 >> 0x10);
  *(undefined8 *)(puVar7 + 0x30) = uVar3;
  puVar7[0x38] = uVar6;
  plVar10 = (long *)0x1c0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101bea1f8;
  lVar9 = *(long *)(unaff_x22 + 0x28);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  plVar10[0x2b] = (long)puVar7;
  plVar10[0x2c] = lVar9;
  plVar10[0x29] = lVar8;
  plVar10[0x2a] = (long)&UNK_10d9dd5a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beabe0,lVar9,0);
  return;
}



/* Entry: 101bea1f8; end: 101bea23b;  */

void FUN_101bea1f8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bea238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101bea23c; end: 101bea257;  */

void FUN_101bea23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea258,param_2,0);
  return;
}



/* Entry: 101bea258; end: 101bea29b;  */

void FUN_101bea258(void)

{
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea29c,0,0);
  return;
}



/* Entry: 101bea29c; end: 101bea37b;  */

void FUN_101bea29c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar6 = *(undefined4 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  lVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x58) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  piVar9 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c61434(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101bea37c;
                    /* WARNING: Could not recover jumptable at 0x000101bea378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(lVar7,uVar6,uVar3,lVar5);
  return;
}



/* Entry: 101bea37c; end: 101bea3e3;  */

void FUN_101bea37c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar3 + 0x68) = param_1;
  *(long *)(lVar3 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x60));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101bea3e4;
  }
  else {
    pcVar2 = FUN_101bea4b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bea3e4; end: 101bea4b7;  */

void FUN_101bea3e4(void)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x68);
  bVar2 = *(byte *)(lVar5 + 0x20);
  func_0x000107c61434(lVar5);
  lVar4 = lVar5 + 0x40;
  func_0x000107c60268(lVar4,~(-1L << ((ulong)bVar2 & 0x3f)));
  uVar1 = *(undefined4 *)(lVar5 + 0x24);
  bVar2 = *(byte *)(lVar5 + 0x20);
  func_0x000107c6142c(lVar5);
  bVar3 = lVar4 == 1L << ((ulong)bVar2 & 0x3f);
  if (!bVar3) {
    FUN_101bed9c0(*(undefined8 *)(unaff_x22 + 0x38),lVar4,uVar1,0,*(undefined8 *)(unaff_x22 + 0x68))
    ;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar7,bVar3,1,lVar4);
  func_0x000107c6142c(uVar6);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bea4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bea4b8; end: 101bea4eb;  */

void FUN_101bea4b8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bea4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bea4ec; end: 101bea513;  */

void FUN_101bea4ec(undefined4 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xac) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 **)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea514);
  return;
}



/* Entry: 101bea514; end: 101bea587;  */

void FUN_101bea514(void)

{
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x90) + 0xb0) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bea544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0x90) + 0xb0) = 1;
  func_0x000100083b20(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea588,0,0);
  return;
}



/* Entry: 101bea588; end: 101bea617;  */

void FUN_101bea588(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101bef2a4(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea618,uVar2,uVar3);
  return;
}



/* Entry: 101bea618; end: 101bea70f;  */

void FUN_101bea618(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined1 *)(unaff_x22 + 0xac);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined4 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar3);
  func_0x000101bef2e4(unaff_x22 + 0x60,unaff_x22 + 0x10);
  puVar8 = &UNK_110454870;
  func_0x000107c613fc(&UNK_110454870,0x58,7);
  FUN_101bef328(unaff_x22 + 0x10,puVar8 + 0x10);
  puVar8[0x38] = (char)uVar6;
  puVar8[0x39] = (char)((uint)uVar6 >> 8);
  puVar8[0x3a] = (char)((uint)uVar6 >> 0x10);
  *(undefined8 *)(puVar8 + 0x40) = uVar2;
  puVar8[0x48] = uVar7;
  *(undefined8 *)(puVar8 + 0x50) = uVar1;
  (**(code **)(lVar5 + 0x30))(FUN_101bef340,puVar8,uVar3,lVar5);
  func_0x000107c61574(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea710,uVar4,0);
  return;
}



/* Entry: 101bea710; end: 101bea747;  */

void FUN_101bea710(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101bea744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bea748; end: 101bea7e7;  */

void FUN_101bea748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x54) = param_6;
  *(undefined4 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101bef2a4(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea7e8,uVar2,uVar3);
  return;
}



/* Entry: 101bea7e8; end: 101bea877;  */

void FUN_101bea7e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar4 = *(uint *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar2);
  piVar7 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bea878;
                    /* WARNING: Could not recover jumptable at 0x000101bea874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x20),uVar4 & 0xffffff,*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined1 *)(unaff_x22 + 0x54),uVar2,lVar3);
  return;
}



/* Entry: 101bea878; end: 101bea8c3;  */

void FUN_101bea878(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x55) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101bea8c4,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
  return;
}



/* Entry: 101bea8c4; end: 101bea8ff;  */

void FUN_101bea8c4(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x55);
  puVar2 = *(undefined1 **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  *puVar2 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000101bea8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bea900; end: 101beabc3;  */

undefined * FUN_101bea900(undefined *param_1)

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
    FUN_101bef870(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
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
LAB_101beab80:
        puStack_58 = (undefined *)0x0;
LAB_101beab84:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_101bef870(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101beabc4);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_101beab80;
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
    if (puVar10 == (undefined *)0x0) goto LAB_101beab84;
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



/* Entry: 101beabc4; end: 101beabdf;  */

void FUN_101beabc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_3;
  *(undefined8 *)(unaff_x22 + 0x160) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beabe0);
  return;
}



/* Entry: 101beabe0; end: 101bead7f;  */

void FUN_101beabe0(double param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x138);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c4d8ac(uVar5);
  *(double *)(unaff_x22 + 0x168) = param_1;
  func_0x000107c615e8(uVar5);
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  param_1 = param_1 * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bead78);
    (*pcVar1)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bead7c);
    (*pcVar1)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    uVar5 = 0x112e08a58;
    FUN_101bef2a4();
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
    *(long *)(unaff_x22 + 0x130) = (long)param_1;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
    if (iVar2 != 0) {
      uVar3 = 0x112d5ed18;
      func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x170) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101bead80;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
      )(plVar4,*(undefined8 *)(unaff_x22 + 0x148),uVar3,uVar3,uVar6,uVar5,&UNK_10d9dd638,
        unaff_x22 + 0x110,uVar3,uVar3);
      return;
    }
    func_0x000107c614f0();
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x178) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101beadbc,uVar6,uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bead80);
  (*pcVar1)();
}



/* Entry: 101bead80; end: 101beadbb;  */

void FUN_101bead80(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x000101beadb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101beadbc; end: 101beae87;  */

void FUN_101beadbc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  double dVar4;
  
  dVar4 = *(double *)(unaff_x22 + 0x168);
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  *(long *)(unaff_x22 + 0x188) = lVar1;
  func_0x000107c615ac(unaff_x22 + 0x10,lVar1);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 400) = uVar2;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101beae88;
  if (dVar4 < 0.0) {
    dVar4 = 0.0;
  }
  lVar1 = *(long *)(unaff_x22 + 0x150);
  plVar3[10] = *(long *)(unaff_x22 + 0x158);
  plVar3[0xb] = (long)(dVar4 * 1000000000.0);
  plVar3[8] = unaff_x22 + 0x140;
  plVar3[9] = lVar1;
  plVar3[7] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beb618,0,0);
  return;
}



/* Entry: 101beae88; end: 101beaf2f;  */

void FUN_101beae88(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x1a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)
              (FUN_101beafd4,*(undefined8 *)(lVar2 + 0x178),*(undefined8 *)(lVar2 + 0x180));
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x1a8) = plVar1;
  func_0x0001000285a8(0x112e08a78,&UNK_10d9dd640);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101beaf30;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101beaf30; end: 101beaf73;  */

void FUN_101beaf30(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101beaf74,*(undefined8 *)(lVar1 + 0x178),*(undefined8 *)(lVar1 + 0x180));
  return;
}



/* Entry: 101beaf74; end: 101beafd3;  */

void FUN_101beaf74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  func_0x000107c615a8(unaff_x22 + 0x10);
  FUN_101bedf7c(uVar2,uVar1,0x112d5ed18,&UNK_10d925c50);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101beafd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101beafd4; end: 101beb06f;  */

void FUN_101beafd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 400));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar4,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b0) = plVar3;
  func_0x0001000285a8(0x112e08a78,&UNK_10d9dd640);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101beb070;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101beb070; end: 101beb0b3;  */

void FUN_101beb070(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101beb0b4,*(undefined8 *)(lVar1 + 0x178),*(undefined8 *)(lVar1 + 0x180));
  return;
}



/* Entry: 101beb0b4; end: 101beb0f7;  */

void FUN_101beb0b4(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101beb0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101beb0f8; end: 101beb113;  */

void FUN_101beb0f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  *(undefined8 *)(unaff_x22 + 0x160) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beb114);
  return;
}



/* Entry: 101beb114; end: 101beb2b3;  */

void FUN_101beb114(double param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x138);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c4d8ac(uVar5);
  *(double *)(unaff_x22 + 0x168) = param_1;
  func_0x000107c615e8(uVar5);
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  param_1 = param_1 * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101beb2ac);
    (*pcVar1)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101beb2b0);
    (*pcVar1)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    uVar5 = 0x112e08a58;
    FUN_101bef2a4();
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
    *(long *)(unaff_x22 + 0x130) = (long)param_1;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
    if (iVar2 != 0) {
      uVar3 = 0x112e08a60;
      func_0x0001000285a8(0x112e08a60,&UNK_10dac5380);
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x170) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101beb2b4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
      )(plVar4,unaff_x22 + 0x140,uVar3,uVar3,uVar6,uVar5,&UNK_10d9dd5d0,unaff_x22 + 0x110,uVar3,
        uVar3);
      return;
    }
    func_0x000107c614f0();
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x178) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101beb30c,uVar6,uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101beb2b4);
  (*pcVar1)();
}



/* Entry: 101beb2b4; end: 101beb30b;  */

void FUN_101beb2b4(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x170));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101beb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101beb308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x140));
  return;
}



/* Entry: 101beb30c; end: 101beb3ab;  */

void FUN_101beb30c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  double dVar4;
  
  dVar4 = *(double *)(unaff_x22 + 0x168);
  uVar2 = 0x112e08a60;
  func_0x0001000285a8(0x112e08a60,&UNK_10dac5380);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar2;
  func_0x000107c615ac(unaff_x22 + 0x10,uVar2);
  *(long *)(unaff_x22 + 0x148) = unaff_x22 + 0x10;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 400) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101beb3ac;
  if (dVar4 < 0.0) {
    dVar4 = 0.0;
  }
  lVar1 = *(long *)(unaff_x22 + 0x150);
  plVar3[0xb] = *(long *)(unaff_x22 + 0x158);
  plVar3[0xc] = (long)(dVar4 * 1000000000.0);
  plVar3[9] = unaff_x22 + 0x148;
  plVar3[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beba70,0,0);
  return;
}



/* Entry: 101beb3ac; end: 101beb45b;  */

void FUN_101beb3ac(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x198) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 400));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)
              (FUN_101beb4d8,*(undefined8 *)(lVar2 + 0x178),*(undefined8 *)(lVar2 + 0x180));
    return;
  }
  *(undefined8 *)(lVar2 + 0x1a0) = param_1;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x1a8) = plVar1;
  func_0x0001000285a8(0x112e08a68,&UNK_10d9dd5e8);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101beb45c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101beb45c; end: 101beb4d7;  */

void FUN_101beb45c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101beb4a0,*(undefined8 *)(lVar1 + 0x178),*(undefined8 *)(lVar1 + 0x180));
  return;
}



/* Entry: 101beb4d8; end: 101beb56f;  */

void FUN_101beb4d8(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar3,uVar4,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b0) = plVar2;
  func_0x0001000285a8(0x112e08a68,&UNK_10d9dd5e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101beb570;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101beb570; end: 101beb5b3;  */

void FUN_101beb570(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101beb5b4,*(undefined8 *)(lVar1 + 0x178),*(undefined8 *)(lVar1 + 0x180));
  return;
}



/* Entry: 101beb5b4; end: 101beb5f7;  */

void FUN_101beb5b4(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101beb5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101beb5f8; end: 101beb617;  */

void FUN_101beb5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beb618,0,0);
  return;
}



/* Entry: 101beb618; end: 101beb887;  */

void FUN_101beb618(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar2);
  lVar3 = 0;
  func_0x000107c5fd0c();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(uVar2,1,1,lVar3);
  puVar4 = &UNK_1104548c0;
  func_0x000107c613fc(&UNK_1104548c0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  func_0x000107c6157c(uVar9);
  FUN_101bebe70(uVar2,&UNK_10d9dd650,puVar4,0x112d5ed18,&UNK_10d925c50);
  FUN_101befa44(uVar2,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar2);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (*pcVar8)();
  puVar4 = &UNK_1104548e8;
  func_0x000107c613fc(&UNK_1104548e8,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  FUN_101bebe70(uVar5,&UNK_10d9dd660,puVar4,0x112d5ed18,&UNK_10d925c50);
  FUN_101befa44(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar5);
  lVar3 = 0x112e08a80;
  func_0x0001000285a8(0x112e08a80,&UNK_10d9dd668);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar5;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar6;
    uVar7 = 0x112e08a78;
    func_0x0001000285a8(0x112e08a78,&UNK_10d9dd640);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101beb888;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(uVar5,0,0,uVar7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (uVar5,**(undefined8 **)(unaff_x22 + 0x40),FUN_101beb8e4,unaff_x22 + 0x10);
  return;
}



/* Entry: 101beb888; end: 101beb8e3;  */

void FUN_101beb888(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101beb90c;
  }
  else {
    *(long *)(lVar2 + 0x70) = unaff_x20;
    pcVar1 = FUN_101beba20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101beb8e4; end: 101beb90b;  */

void FUN_101beb8e4(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101beb90c;
  }
  else {
    *(long *)(unaff_x22 + 0x70) = unaff_x20;
    pcVar1 = FUN_101beba20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101beb90c; end: 101beba1f;  */

void FUN_101beb90c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar3 = uVar4;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar4,1,lVar2);
  if ((int)uVar3 == 1) {
    FUN_101befa44(uVar4,0x112e08a80,&UNK_10d9dd668);
    func_0x000107c615c0(uVar4);
    FUN_101bef264();
    func_0x000107c613f8(&UNK_110454910,uVar4,0,0);
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
    FUN_101bedf7c(uVar4,*(undefined8 *)(unaff_x22 + 0x38),0x112d5ed18,&UNK_10d925c50);
    func_0x000107c615c0(uVar4);
    uVar4 = *puVar1;
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd94(uVar4,lVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101beba1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101beba20; end: 101beba53;  */

void FUN_101beba20(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101beba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101beba54; end: 101beba6f;  */

void FUN_101beba54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beba70,0,0);
  return;
}



/* Entry: 101beba70; end: 101bebcaf;  */

void FUN_101beba70(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar2);
  lVar3 = 0;
  func_0x000107c5fd0c();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(uVar2,1,1,lVar3);
  puVar4 = &UNK_110454820;
  func_0x000107c613fc(&UNK_110454820,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  func_0x000107c6157c(uVar9);
  FUN_101bebe70(uVar2,&UNK_10d9dd600,puVar4,0x112e08a60,&UNK_10dac5380);
  FUN_101befa44(uVar2,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar2);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (*pcVar8)();
  puVar4 = &UNK_110454848;
  func_0x000107c613fc(&UNK_110454848,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  FUN_101bebe70(uVar5,&UNK_10d9dd610,puVar4,0x112e08a60,&UNK_10dac5380);
  FUN_101befa44(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar5);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar6;
    uVar7 = 0x112e08a68;
    func_0x0001000285a8(0x112e08a68,&UNK_10d9dd5e8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101bebcb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x38,0,0,uVar7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x40,**(undefined8 **)(unaff_x22 + 0x48),FUN_101bebd18,unaff_x22 + 0x10);
  return;
}



/* Entry: 101bebcb0; end: 101bebd17;  */

void FUN_101bebcb0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bebcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bebd40,0,0);
  return;
}



/* Entry: 101bebd18; end: 101bebd3f;  */

void FUN_101bebd18(void)

{
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bebd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bebd40,0,0);
  return;
}



/* Entry: 101bebd40; end: 101bebe0b;  */

void FUN_101bebd40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  if (lVar4 != 0) {
    uVar3 = **(undefined8 **)(unaff_x22 + 0x48);
    uVar1 = 0x112e08a60;
    func_0x0001000285a8(0x112e08a60,&UNK_10dac5380);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd94(uVar3,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
                    /* WARNING: Could not recover jumptable at 0x000101bebdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar4);
    return;
  }
  FUN_101bef264();
  func_0x000107c613f8(&UNK_110454910,param_1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bebe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bebe0c; end: 101bebe6f;  */

void FUN_101bebe0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101befae0;
                    /* WARNING: Could not recover jumptable at 0x000101bebe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 101bebe70; end: 101bec027;  */

void FUN_101bebe70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_a0 + -extraout_x8;
  func_0x000101befa84(param_1,puVar3,0x112d453c8,&UNK_10d90ac60);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar7 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar7 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000101befa44(puVar3,0x112d453c8,&UNK_10d90ac60);
    uVar5 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar7 + 8))(puVar3,lVar1);
    uVar5 = (ulong)puVar2 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x18);
    lVar7 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  uVar4 = *unaff_x20;
  func_0x0001000285a8(param_4,param_5);
  puStack_90 = (undefined8 *)0x0;
  if (lVar6 != 0 || lVar7 != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = &uStack_80;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
  }
  uStack_98 = 1;
  uStack_88 = uVar4;
  func_0x000107c615bc(uVar5,&uStack_98,param_4,param_2,param_3);
  func_0x000107c61574();
  return;
}



/* Entry: 101bec028; end: 101bec0d7;  */

void FUN_101bec028(void)

{
  long *plVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bec078;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(in_x3);
  return;
}



/* Entry: 101bec0d8; end: 101bec12f;  */

void FUN_101bec0d8(undefined8 param_1)

{
  long unaff_x22;
  
  FUN_101bef264();
  func_0x000107c613f8(&UNK_110454910,param_1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bec12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bec130; end: 101bec1a3;  */

void FUN_101bec130(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61470();
  return;
}



/* Entry: 101bec1a4; end: 101bec1af;  */

void FUN_101bec1a4(void)

{
  return;
}



/* Entry: 101bec1b0; end: 101bec22b;  */

void FUN_101bec1b0(long param_1,uint param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101befae4;
  plVar4[9] = param_3;
  plVar4[10] = lVar5;
  *(undefined1 *)((long)plVar4 + 0x9d) = param_4;
  *(uint *)(plVar4 + 0x13) = param_2 & 0xffffff;
  plVar4[8] = param_1;
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xb] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be7548,lVar5,0);
  return;
}



/* Entry: 101bec22c; end: 101bec2a3;  */

void FUN_101bec22c(long param_1,uint param_2,long param_3,undefined1 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bec2a4;
  plVar4[0xd] = param_3;
  plVar4[0xe] = lVar5;
  *(undefined1 *)((long)plVar4 + 0x18c) = param_4;
  *(uint *)(plVar4 + 0x31) = param_2 & 0xffffff;
  plVar4[0xc] = param_1;
  lVar3 = 0x112e08830;
  func_0x0001000285a8(0x112e08830,&UNK_10d9dd418);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x11] = uVar2;
  lVar3 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x12] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x14] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x17] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x19] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1a] = uVar2;
  lVar3 = 0;
  func_0x000103a814dc();
  plVar4[0x1b] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x1c] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1d] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1e] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1f] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x20] = uVar2;
  lVar3 = 0;
  FUN_101bedd44();
  plVar4[0x21] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x22] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x23] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x24] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x25] = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar4[0x26] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x27] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x28] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x29] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be7df0,lVar5,0);
  return;
}



/* Entry: 101bec2a4; end: 101bec2eb;  */

void FUN_101bec2a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bec2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bec2ec; end: 101bec37f;  */

void FUN_101bec2ec(long param_1,long param_2,long param_3,uint param_4,long param_5,
                  undefined1 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bec380;
  plVar4[0x1b] = param_5;
  plVar4[0x1c] = lVar5;
  *(undefined1 *)((long)plVar4 + 0x17c) = param_6;
  *(uint *)(plVar4 + 0x2f) = param_4 & 0xffffff;
  plVar4[0x19] = param_2;
  plVar4[0x1a] = param_3;
  plVar4[0x18] = param_1;
  lVar3 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  plVar4[0x1d] = lVar3;
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1e] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1f] = uVar2;
  lVar3 = 0x112e08830;
  func_0x0001000285a8(0x112e08830,&UNK_10d9dd418);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x20] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x21] = uVar2;
  lVar3 = 0;
  FUN_101bedd44();
  plVar4[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x23] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x24] = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar4[0x25] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x26] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x27] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be9790,lVar5,0);
  return;
}



/* Entry: 101bec380; end: 101bec3bb;  */

void FUN_101bec380(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bec3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bec3bc; end: 101bec607;  */

void FUN_101bec3bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  FUN_101bedd44();
  func_0x000101bedfc4(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,
                      FUN_101bedd44);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bec44c);
  (*pcVar2)();
}



/* Entry: 101bec608; end: 101bec747;  */

void FUN_101bec608(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    FUN_101bedd44();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101becac0(FUN_101bedd44,0x112e08a50,&UNK_10d9dd5b8);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    FUN_101bedd44();
    lVar6 = *(long *)(lVar4 + -8);
    func_0x000101bedfc4(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1,FUN_101bedd44);
    func_0x000101bed3ec(param_2,lVar3,FUN_101bedd44);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bec71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 101bec748; end: 101bec803;  */

undefined8 FUN_101bec748(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101beccd8();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000101bed5c0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 101bec804; end: 101becabf;  */

void FUN_101bec804(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bec910);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_101bece48(lVar4,param_4 & 1,FUN_101bedd44,0x112e08a50,&UNK_10d9dd5b8);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bec8bc);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101becac0(FUN_101bedd44,0x112e08a50,&UNK_10d9dd5b8);
    lVar4 = *unaff_x20;
    goto joined_r0x000101bec940;
  }
  lVar4 = *unaff_x20;
joined_r0x000101bec940:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    FUN_101bedd44();
    func_0x000101bee008(param_1,lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2,
                        FUN_101bedd44);
    return;
  }
  FUN_101bec3bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101becac0; end: 101beccd7;  */

void FUN_101becac0(code *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uStack_68;
  
  lVar6 = 0;
  (*param_1)();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(param_2,param_3);
  lVar10 = *unaff_x20;
  lVar6 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) == 0) {
    func_0x000107c61574(lVar10);
LAB_101beccb0:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar10 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar10 || lVar1 + uVar8 * 8 <= lVar6 + 0x40U) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar8 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar10 + 0x40);
  if (uStack_68 == 0) goto LAB_101becbf0;
  do {
    uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar11 = *(long *)(lVar7 + 0x48) * uVar9;
      func_0x000101bee04c(*(long *)(lVar10 + 0x38) + lVar11,&stack0xffffffffffffff70 + -extraout_x8,
                          param_1);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000101bedfc4(&stack0xffffffffffffff70 + -extraout_x8,*(long *)(lVar6 + 0x38) + lVar11,
                          param_1);
      func_0x000107c61434(uVar4);
      if (uStack_68 != 0) break;
LAB_101becbf0:
      do {
        lVar11 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101beccd8);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar10);
          goto LAB_101beccb0;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar13 = lVar13 + 1;
      } while (uStack_68 == 0);
      uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar13 = lVar11;
    }
  } while( true );
}



/* Entry: 101beccd8; end: 101bece47;  */

void FUN_101beccd8(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e08a48,&UNK_10d9dd598);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101becdb4;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_101becdb4:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101bece48);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101bece20;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101bece20:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101bece48; end: 101bed76f;  */

void FUN_101bece48(long param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  lVar6 = 0;
  (*param_3)();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_e0 + -extraout_x8;
  lVar18 = *unaff_x20;
  lVar6 = *(long *)(lVar18 + 0x18);
  if (*(long *)(lVar18 + 0x18) <= param_1) {
    lVar6 = param_1;
  }
  func_0x0001000285a8(param_4,param_5);
  lVar7 = lVar18;
  func_0x000107c60490(lVar18,lVar6,param_2,param_4);
  if (*(long *)(lVar18 + 0x10) == 0) {
LAB_101bed11c:
    func_0x000107c61574(lVar18);
LAB_101bed124:
    *unaff_x20 = lVar7;
    return;
  }
  puVar21 = (ulong *)(lVar18 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *puVar21;
  lVar6 = lVar7 + 0x40;
  lVar8 = 0;
  do {
    if (uVar20 == 0) {
      do {
        lVar17 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101bed14c);
          (*pcVar5)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar18);
            goto LAB_101bed124;
          }
          uVar20 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
          if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
            *puVar21 = -1L << (uVar20 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar21,uVar20 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar18 + 0x10) = 0;
          goto LAB_101bed11c;
        }
        uVar20 = puVar21[lVar17];
        lVar8 = lVar8 + 1;
      } while (uVar20 == 0);
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
    }
    else {
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar17 = lVar8;
    }
    uVar12 = LZCOUNT(uVar12) | lVar17 << 6;
    puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x30) + uVar12 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    lVar19 = *(long *)(lVar10 + 0x48);
    lVar8 = *(long *)(lVar18 + 0x38) + lVar19 * uVar12;
    if ((param_2 & 1) == 0) {
      func_0x000101bee04c(lVar8,puVar11,param_3);
      func_0x000107c61434(uVar3);
    }
    else {
      func_0x000101bedfc4(lVar8,puVar11,param_3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar2,uVar3);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar12 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar6 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar4 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar12) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101bed150);
          (*pcVar5)();
        }
        uVar13 = 0;
        if (uVar15 != uVar12) {
          uVar13 = uVar15;
        }
        bVar4 = (bool)(uVar15 == uVar12 | bVar4);
        uVar15 = *(ulong *)(lVar6 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar6 + uVar13) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar6 + uVar13);
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar12 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    func_0x000101bedfc4(puVar11,*(long *)(lVar7 + 0x38) + lVar19 * uVar12,param_3);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar8 = lVar17;
  } while( true );
}



/* Entry: 101bed770; end: 101bed7df;  */

void FUN_101bed770(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bed7e0;
  plVar1[0xb] = param_4;
  plVar1[0xc] = param_5;
  plVar1[9] = param_2;
  plVar1[10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beba70,0,0);
  return;
}



/* Entry: 101bed7e0; end: 101bed833;  */

void FUN_101bed7e0(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 == 0) {
    **(undefined8 **)(lVar1 + 0x10) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101bed834; end: 101bed8ef;  */

void FUN_101bed834(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101bed894;
                    /* WARNING: Could not recover jumptable at 0x000101bed890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Entry: 101bed8f0; end: 101bed90f;  */

void FUN_101bed8f0(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bed900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bed910; end: 101bed9bf;  */

void FUN_101bed910(void)

{
  long *plVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bed960;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(in_x3);
  return;
}



/* Entry: 101bed9c0; end: 101beda4b;  */

void FUN_101bed9c0(undefined8 param_1,ulong param_2,int param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 >> ((ulong)*(byte *)(param_5 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101beda44);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_5 + (param_2 >> 3 & 0xffffffffffffff8) + 0x40) >> (param_2 & 0x3f) & 1) != 0
     ) {
    if (*(int *)(param_5 + 0x24) == param_3) {
      lVar3 = *(long *)(param_5 + 0x38);
      lVar2 = 0;
      func_0x000103a814dc();
      func_0x000101bee04c(lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_2,param_1,
                          &SUB_103a814dc);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101beda4c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101beda48);
  (*pcVar1)();
}



/* Entry: 101beda4c; end: 101bedbd7;  */

undefined * FUN_101beda4c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = 0x112e08a88;
  func_0x0001000285a8(0x112e08a88,&UNK_10d9dd670);
  lVar11 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e08a50,&UNK_10d9dd5b8);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000101befa84(param_1,puVar9,0x112e08a88,&UNK_10d9dd670);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101bedbd4);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      FUN_101bedd44();
      func_0x000101bedfc4((long)puVar9 + (long)iVar4,
                          lVar13 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7,FUN_101bedd44);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101bedbd8);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 101bedbd8; end: 101bedcd3;  */

undefined * FUN_101bedbd8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e08a48,&UNK_10d9dd598);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bedcd0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bedcd4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101bedcd4; end: 101bedd43;  */

void FUN_101bedcd4(long param_1)

{
  uint3 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(uint3 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101befaf0;
  *(uint *)(plVar2 + 0xb) = (uint)uVar1;
  plVar2[7] = param_1;
  plVar2[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be7a84,lVar3,0);
  return;
}



/* Entry: 101bedd44; end: 101bedd7b;  */

void FUN_101bedd44(undefined8 param_1)

{
  if (lRam0000000113489790 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67a694);
  return;
}



/* Entry: 101bedd7c; end: 101bedf07;  */

undefined * FUN_101bedd7c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = 0x112e08a70;
  func_0x0001000285a8(0x112e08a70,&UNK_10dac5350);
  lVar11 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e085e0,&UNK_10d9dcfc0);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000101befa84(param_1,puVar9,0x112e08a70,&UNK_10dac5350);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101bedf04);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      func_0x000103a814dc();
      func_0x000101bedfc4((long)puVar9 + (long)iVar4,
                          lVar13 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7,&SUB_103a814dc);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101bedf08);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 101bedf08; end: 101bedf7b;  */

void FUN_101bedf08(long param_1)

{
  long lVar1;
  long lVar2;
  uint3 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(uint3 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101befaec;
  *(uint *)(plVar4 + 0x11) = (uint)uVar3;
  plVar4[0xb] = lVar1;
  plVar4[0xc] = lVar2;
  plVar4[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be9498,lVar1,0);
  return;
}



/* Entry: 101bedf7c; end: 101bee0cb;  */

undefined8 FUN_101bedf7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101bee0cc; end: 101bee167;  */

void FUN_101bee0cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  uint3 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar4 = *(uint3 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101befaf4;
  *(undefined1 *)((long)plVar5 + 0x4c) = uVar3;
  plVar5[5] = lVar6;
  plVar5[6] = lVar7;
  *(uint *)(plVar5 + 9) = (uint)uVar4;
  plVar5[3] = lVar1;
  plVar5[4] = lVar2;
  plVar5[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea118,lVar6,0);
  return;
}



/* Entry: 101bee168; end: 101bee177;  */

undefined1  [16] FUN_101bee168(void)

{
  return ZEXT816(0x1104547d8);
}



/* Entry: 101bee178; end: 101bee197;  */

void FUN_101bee178(void)

{
  func_0x000107c61168(&PTR_PTR_112e08878);
  return;
}



/* Entry: 101bee198; end: 101bee3bb;  */

long * FUN_101bee198(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar8 = 0;
    func_0x000103a814dc();
    lVar13 = *(long *)(lVar8 + -8);
    plVar9 = param_2;
    (**(code **)(lVar13 + 0x30))(param_2,1,lVar8);
    if ((int)plVar9 == 0) {
      lVar11 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar11;
      lVar3 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar3;
      lVar15 = (long)*(int *)(lVar8 + 0x1c);
      lVar10 = 0;
      func_0x000107c5ede0();
      lVar16 = *(long *)(lVar10 + -8);
      pcVar14 = *(code **)(lVar16 + 0x30);
      func_0x000107c61434(lVar11);
      func_0x000107c61434(lVar3);
      lVar11 = (long)param_2 + lVar15;
      (*pcVar14)(lVar11,1,lVar10);
      if ((int)lVar11 == 0) {
        (**(code **)(lVar16 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,lVar10);
        (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,lVar10);
      }
      else {
        lVar11 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar15,(long)param_2 + lVar15,
                            *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *puVar1 = *puVar2;
      pcVar14 = *(code **)(lVar13 + 0x38);
      func_0x000107c61434();
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      (*pcVar14)(param_1,0,1,lVar8);
    }
    else {
      lVar8 = 0x112d5ed18;
      func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    iVar7 = *(int *)(param_3 + 0x14);
    lVar8 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))
              ((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,lVar8);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar12 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar8 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101bee3bc; end: 101bee4ab;  */

void FUN_101bee3bc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x000103a814dc();
  lVar4 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)lVar4 == 0) {
    func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
    func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
    iVar1 = *(int *)(lVar2 + 0x1c);
    lVar3 = 0;
    func_0x000107c5ede0();
    lVar5 = *(long *)(lVar3 + -8);
    lVar4 = param_1 + iVar1;
    (**(code **)(lVar5 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar3);
    }
    func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x20) + 8));
    func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24) + 8));
    func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x28) + 8));
  }
  iVar1 = *(int *)(param_2 + 0x14);
  lVar4 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101bee4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1 + iVar1,lVar4);
  return;
}



/* Entry: 101bee4ac; end: 101beea9b;  */

undefined8 * FUN_101bee4ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar5 = 0;
  func_0x000103a814dc();
  lVar10 = *(long *)(lVar5 + -8);
  puVar6 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    lVar11 = (long)*(int *)(lVar5 + 0x1c);
    lVar7 = 0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar7 + -8);
    pcVar9 = *(code **)(lVar12 + 0x30);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    lVar8 = (long)param_2 + lVar11;
    (*pcVar9)(lVar8,1,lVar7);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar7);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,lVar7);
    }
    else {
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                          *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
    uVar2 = puVar1[1];
    *puVar6 = *puVar1;
    puVar6[1] = uVar2;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
    uVar2 = puVar1[1];
    *puVar6 = *puVar1;
    puVar6[1] = uVar2;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
    uVar3 = puVar1[1];
    *puVar6 = *puVar1;
    puVar6[1] = uVar3;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar1 + 1);
    *puVar6 = *puVar1;
    pcVar9 = *(code **)(lVar10 + 0x38);
    func_0x000107c61434();
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    (*pcVar9)(param_1,0,1,lVar5);
  }
  else {
    lVar5 = 0x112d5ed18;
    func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x14);
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))
            ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar5);
  return param_1;
}



/* Entry: 101beea9c; end: 101beec37;  */

undefined8 * FUN_101beea9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar3 = 0;
  func_0x000103a814dc();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar3);
  if ((int)puVar4 == 0) {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    lVar8 = (long)*(int *)(lVar3 + 0x1c);
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar9 = *(long *)(lVar5 + -8);
    lVar6 = (long)param_2 + lVar8;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    }
    else {
      lVar6 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                          *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x20));
    uVar10 = *puVar4;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
    puVar2[1] = puVar4[1];
    *puVar2 = uVar10;
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x24));
    uVar10 = *puVar4;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
    puVar2[1] = puVar4[1];
    *puVar2 = uVar10;
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x28));
    uVar10 = *puVar4;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
    puVar2[1] = puVar4[1];
    *puVar2 = uVar10;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x2c));
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar4 = *puVar2;
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112d5ed18;
    func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x14);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  return param_1;
}



/* Entry: 101beec38; end: 101beef63;  */

undefined8 * FUN_101beec38(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar2 = 0;
  func_0x000103a814dc();
  lVar8 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  puVar3 = param_1;
  (*pcVar9)(param_1,1,lVar2);
  puVar4 = param_2;
  (*pcVar9)(param_2,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      uVar12 = param_2[1];
      uVar6 = param_1[1];
      *param_1 = *param_2;
      param_1[1] = uVar12;
      func_0x000107c6142c(uVar6);
      uVar12 = param_2[3];
      uVar6 = param_1[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar12;
      func_0x000107c6142c(uVar6);
      lVar10 = (long)*(int *)(lVar2 + 0x1c);
      lVar5 = 0;
      func_0x000107c5ede0();
      lVar11 = *(long *)(lVar5 + -8);
      pcVar9 = *(code **)(lVar11 + 0x30);
      lVar8 = (long)param_1 + lVar10;
      (*pcVar9)(lVar8,1,lVar5);
      lVar7 = (long)param_2 + lVar10;
      (*pcVar9)(lVar7,1,lVar5);
      if ((int)lVar8 == 0) {
        if ((int)lVar7 != 0) {
          (**(code **)(lVar11 + 8))((long)param_1 + lVar10,lVar5);
          goto LAB_101beee70;
        }
        (**(code **)(lVar11 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
      }
      else if ((int)lVar7 == 0) {
        (**(code **)(lVar11 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
        (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
      }
      else {
LAB_101beee70:
        lVar8 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar10,(long)param_2 + lVar10,
                            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x20));
      puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x20));
      uVar12 = puVar4[1];
      uVar6 = puVar3[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar12;
      func_0x000107c6142c(uVar6);
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
      puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x24));
      uVar12 = puVar4[1];
      uVar6 = puVar3[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar12;
      func_0x000107c6142c(uVar6);
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x28));
      puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x28));
      uVar12 = puVar4[1];
      uVar6 = puVar3[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar12;
      func_0x000107c6142c(uVar6);
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
      puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x2c));
      *puVar3 = *puVar4;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
      goto LAB_101beef08;
    }
    func_0x000101bee090(param_1,&SUB_103a814dc);
  }
  else if ((int)puVar4 == 0) {
    uVar12 = *param_2;
    uVar13 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    param_1[3] = uVar13;
    param_1[2] = uVar6;
    lVar10 = (long)*(int *)(lVar2 + 0x1c);
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar11 = *(long *)(lVar5 + -8);
    lVar7 = (long)param_2 + lVar10;
    (**(code **)(lVar11 + 0x30))(lVar7,1,lVar5);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar11 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
    }
    else {
      lVar7 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar10,(long)param_2 + lVar10,
                          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x20));
    uVar12 = *puVar3;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x20));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar12;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x24));
    uVar12 = *puVar3;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar12;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x28));
    uVar12 = *puVar3;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x28));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar12;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x2c));
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *puVar3 = *puVar4;
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar2);
    goto LAB_101beef08;
  }
  lVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_101beef08:
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x28))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 101beef64; end: 101beef7b;  */

void FUN_101beef64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101beef7c; end: 101bef053;  */

void FUN_101beef7c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000101bef000();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000107c5eea4();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 101bef054; end: 101bef0d7;  */

void FUN_101bef054(long param_1)

{
  long lVar1;
  long lVar2;
  uint3 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(uint3 *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101befaf8;
  *(uint *)(plVar4 + 0xf) = (uint)uVar3;
  plVar4[9] = lVar2;
  plVar4[10] = lVar5;
  plVar4[7] = param_1;
  plVar4[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea258,lVar1,0);
  return;
}



/* Entry: 101bef0d8; end: 101bef15f;  */

void FUN_101bef0d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101befb04;
  plVar4[2] = param_1;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101bed7e0;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar5;
  plVar3[9] = param_2;
  plVar3[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beba70,0,0);
  return;
}



/* Entry: 101bef160; end: 101bef1e3;  */

void FUN_101bef160(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101befafc;
  plVar6[3] = param_1;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = 0x101bed894;
                    /* WARNING: Could not recover jumptable at 0x000101bed890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar5,plVar6 + 2);
  return;
}


