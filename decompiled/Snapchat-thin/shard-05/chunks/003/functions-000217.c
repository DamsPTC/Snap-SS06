/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cd6704; end: 103cd6777;  */

void FUN_103cd6704(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 400);
  uVar3 = *(undefined8 *)(lVar2 + 0x188);
  *(long *)(lVar2 + 0x1a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x103cd8abc;
  }
  else {
    uVar1 = 0x103cd8a8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd6778; end: 103cd6793;  */

void FUN_103cd6778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd6794,0,0);
  return;
}



/* Entry: 103cd6794; end: 103cd68f3;  */

/* WARNING: Removing unreachable block (ram,0x000103cd6830) */

void FUN_103cd6794(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xc0) + 0x10,unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x68);
  lVar4 = unaff_x22 + 0x48;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar14 = puVar8[1];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  func_0x000103cd69f4();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1107051e8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 200) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd6a34();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd68f4;
                    /* WARNING: Could not recover jumptable at 0x000103cd68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x70,0xd000000000000036,0x800000010f1b46f0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb8),&UNK_110705270,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd68f4; end: 103cd6967;  */

void FUN_103cd68f4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd0);
  uVar4 = *(undefined8 *)(lVar3 + 200);
  *(long *)(lVar3 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd6968;
  }
  else {
    pcVar2 = FUN_103cd69c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd6968; end: 103cd69bf;  */

void FUN_103cd6968(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x0001000834e4(unaff_x22 + 0x48);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000103cd69bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd69c0; end: 103cd6a73;  */

void FUN_103cd69c0(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000103cd69f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd6a74; end: 103cd6a8f;  */

void FUN_103cd6a74(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd6a90,0,0);
  return;
}



/* Entry: 103cd6a90; end: 103cd6be7;  */

/* WARNING: Removing unreachable block (ram,0x000103cd6b24) */

void FUN_103cd6a90(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  lVar4 = unaff_x22 + 0x50;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  FUN_103cd6c5c();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_110705398,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd6c9c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd6be8;
                    /* WARNING: Could not recover jumptable at 0x000103cd6be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd000000000000038,0x800000010f1b4730,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_110705420,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd6be8; end: 103cd6c5b;  */

void FUN_103cd6be8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0xb0);
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x103cd8ad8;
  }
  else {
    uVar1 = 0x103cd8a90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd6c5c; end: 103cd6cdb;  */

void FUN_103cd6c5c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130008b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc83288;
  func_0x000107c61520(&DAT_10dc83288,&UNK_110705398);
  puRam00000001130008b8 = puVar1;
  return;
}



/* Entry: 103cd6cdc; end: 103cd6cf7;  */

void FUN_103cd6cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd6cf8,0,0);
  return;
}



/* Entry: 103cd6cf8; end: 103cd6e53;  */

/* WARNING: Removing unreachable block (ram,0x000103cd6d84) */

void FUN_103cd6cf8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x88) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  FUN_103cd6ec8();
  func_0x000100075890(unaff_x22 + 0x60,0,0,&UNK_1107054a0,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd6f08();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd6e54;
                    /* WARNING: Could not recover jumptable at 0x000103cd6e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000037,0x800000010f1b4770,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x80),&UNK_110705520,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd6e54; end: 103cd6ec7;  */

void FUN_103cd6e54(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  uVar3 = *(undefined8 *)(lVar2 + 0x90);
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x103cd8ad4;
  }
  else {
    uVar1 = 0x103cd8a94;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd6ec8; end: 103cd6f47;  */

void FUN_103cd6ec8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130008c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc83438;
  func_0x000107c61520(&DAT_10dc83438,&UNK_1107054a0);
  puRam00000001130008c8 = puVar1;
  return;
}



/* Entry: 103cd6f48; end: 103cd6f6b;  */

void FUN_103cd6f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_6;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x140) = param_4;
  *(undefined8 *)(unaff_x22 + 0x148) = param_5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
  *(undefined8 *)(unaff_x22 + 0x138) = param_3;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd6f6c,0,0);
  return;
}



/* Entry: 103cd6f6c; end: 103cd70d7;  */

/* WARNING: Removing unreachable block (ram,0x000103cd7008) */

void FUN_103cd6f6c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x158) + 0x10,unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar5 = *(long *)(unaff_x22 + 0xf0);
  lVar6 = unaff_x22 + 0xd0;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar4;
  FUN_103cd7144();
  func_0x000100075890(unaff_x22 + 0x118,0,0,&UNK_1107056b8,PTR___s10Foundation4DataVN_110350ae0,
                      lVar6,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x170) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd7184();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd70d8;
                    /* WARNING: Could not recover jumptable at 0x000103cd70d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000040,0x800000010f1b47b0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x150),&UNK_110705738,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd70d8; end: 103cd7143;  */

void FUN_103cd70d8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
    uVar1 = 0x103cd8aac;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
    uVar1 = 0x103cd8a98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd7144; end: 103cd71c3;  */

void FUN_103cd7144(void)

{
  undefined *puVar1;
  
  if (puRam00000001130008d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc83798;
  func_0x000107c61520(&DAT_10dc83798,&UNK_1107056b8);
  puRam00000001130008d8 = puVar1;
  return;
}



/* Entry: 103cd71c4; end: 103cd71e7;  */

void FUN_103cd71c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  *(undefined8 *)(unaff_x22 + 0x128) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x110) = param_4;
  *(undefined8 *)(unaff_x22 + 0x118) = param_5;
  *(undefined8 *)(unaff_x22 + 0x100) = param_2;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd71e8,0,0);
  return;
}



/* Entry: 103cd71e8; end: 103cd7353;  */

/* WARNING: Removing unreachable block (ram,0x000103cd7284) */

void FUN_103cd71e8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x128) + 0x10,unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  lVar6 = unaff_x22 + 0xa0;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar11;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
  func_0x000103cd7470();
  func_0x000100075890(unaff_x22 + 0xe8,0,0,&UNK_1107057b8,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x140) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd74b0();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd7354;
                    /* WARNING: Could not recover jumptable at 0x000103cd7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000045,0x800000010f1b4800,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x120),&UNK_110705838,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd7354; end: 103cd73bf;  */

void FUN_103cd7354(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x130),*(undefined8 *)(lVar2 + 0x138));
    pcVar1 = FUN_103cd73c0;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x130),*(undefined8 *)(lVar2 + 0x138));
    pcVar1 = (code *)0x103cd743c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd73c0; end: 103cd74ef;  */

void FUN_103cd73c0(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x60);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1[8] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd7438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd74f0; end: 103cd750b;  */

void FUN_103cd74f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd750c,0,0);
  return;
}



/* Entry: 103cd750c; end: 103cd7683;  */

/* WARNING: Removing unreachable block (ram,0x000103cd75c0) */

void FUN_103cd750c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x110);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x120) + 0x10,unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar3 = *(long *)(unaff_x22 + 200);
  lVar4 = unaff_x22 + 0xa8;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  uVar9 = puVar8[8];
  uVar11 = puVar8[0xb];
  uVar10 = puVar8[10];
  uVar15 = puVar8[5];
  uVar14 = puVar8[4];
  uVar13 = puVar8[7];
  uVar12 = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x58) = puVar8[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  uVar12 = puVar8[0xf];
  uVar11 = puVar8[0xe];
  uVar10 = puVar8[0x11];
  uVar9 = puVar8[0x10];
  uVar14 = puVar8[0xd];
  uVar13 = puVar8[0xc];
  *(undefined8 *)(unaff_x22 + 0xa0) = puVar8[0x12];
  *(undefined8 *)(unaff_x22 + 0x88) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
  func_0x000103cd7794();
  func_0x000100075890(unaff_x22 + 0xf8,0,0,&UNK_110705950,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd77d4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd7684;
                    /* WARNING: Could not recover jumptable at 0x000103cd7680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0xd0,0xd00000000000003b,0x800000010f1b4850,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x118),&UNK_1107059f0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd7684; end: 103cd76f7;  */

void FUN_103cd7684(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x130);
  uVar4 = *(undefined8 *)(lVar3 + 0x128);
  *(long *)(lVar3 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x138));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd76f8;
  }
  else {
    pcVar2 = FUN_103cd7760;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd76f8; end: 103cd775f;  */

void FUN_103cd76f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar5 = *(undefined1 **)(unaff_x22 + 0x108);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined1 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x0001000834e4(unaff_x22 + 0xa8);
  *puVar5 = uVar3;
  *(undefined8 *)(puVar5 + 8) = uVar6;
  puVar5[0x10] = uVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd775c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd7760; end: 103cd7813;  */

void FUN_103cd7760(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000103cd7790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd7814; end: 103cd782f;  */

void FUN_103cd7814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd7830,0,0);
  return;
}



/* Entry: 103cd7830; end: 103cd798f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd78cc) */

void FUN_103cd7830(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 200) + 0x10,unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x98);
  lVar4 = unaff_x22 + 0x78;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar14 = puVar8[1];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  func_0x000103cd7a94();
  func_0x000100075890(unaff_x22 + 0xa0,0,0,&UNK_110705a78,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd7ad4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd7990;
                    /* WARNING: Could not recover jumptable at 0x000103cd798c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x48,0xd00000000000003a,0x800000010f1b4890,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xc0),&UNK_110705b90,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd7990; end: 103cd7a03;  */

void FUN_103cd7990(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  uVar4 = *(undefined8 *)(lVar3 + 0xd0);
  *(long *)(lVar3 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd7a04;
  }
  else {
    pcVar2 = FUN_103cd7a60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd7a04; end: 103cd7a5f;  */

void FUN_103cd7a04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x78);
  puVar3[1] = uVar7;
  *puVar3 = uVar6;
  puVar3[3] = uVar5;
  puVar3[2] = uVar4;
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd7a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd7a60; end: 103cd7b13;  */

void FUN_103cd7a60(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000103cd7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd7b14; end: 103cd7b33;  */

void FUN_103cd7b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd7b34,0,0);
  return;
}



/* Entry: 103cd7b34; end: 103cd7c9b;  */

/* WARNING: Removing unreachable block (ram,0x000103cd7bd0) */

void FUN_103cd7b34(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  func_0x000103cd7d94();
  func_0x000100075890(unaff_x22 + 0x70,0,0,&UNK_110705d48,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd7dd4();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd7c9c;
                    /* WARNING: Could not recover jumptable at 0x000103cd7c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x58,0xd00000000000003f,0x800000010f1b48d0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_110705e50,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd7c9c; end: 103cd7d0f;  */

void FUN_103cd7c9c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  uVar4 = *(undefined8 *)(lVar3 + 0xb0);
  *(long *)(lVar3 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xc0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd7d10;
  }
  else {
    pcVar2 = FUN_103cd7d60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd7d10; end: 103cd7d5f;  */

void FUN_103cd7d10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103cd7d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 103cd7d60; end: 103cd7e13;  */

void FUN_103cd7d60(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103cd7d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd7e14; end: 103cd7e2f;  */

void FUN_103cd7e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x198) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd7e30,0,0);
  return;
}



/* Entry: 103cd7e30; end: 103cd7f87;  */

/* WARNING: Removing unreachable block (ram,0x000103cd7ec4) */

void FUN_103cd7e30(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1b0) + 0x10,unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar3 = *(long *)(unaff_x22 + 0x180);
  func_0x0001000a8868(unaff_x22 + 0x160,uVar2);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c610b4(lVar5,uVar9,0x118);
  func_0x000103cd80b0();
  func_0x000100075890(unaff_x22 + 0x188,0,0,&UNK_110705f68,PTR___s10Foundation4DataVN_110350ae0,
                      lVar5,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar4;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar6;
  plVar7 = plVar6;
  func_0x000103cd80f0();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103cd7f88;
                    /* WARNING: Could not recover jumptable at 0x000103cd7f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x128,0xd000000000000035,0x800000010f1b4910,uVar9,uVar4,
             *(undefined8 *)(unaff_x22 + 0x1a8),&UNK_110705ff0,plVar7,uVar2,lVar3);
  return;
}



/* Entry: 103cd7f88; end: 103cd7ffb;  */

void FUN_103cd7f88(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1c0);
  uVar4 = *(undefined8 *)(lVar3 + 0x1b8);
  *(long *)(lVar3 + 0x1d0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x1c8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd7ffc;
  }
  else {
    pcVar2 = FUN_103cd807c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd7ffc; end: 103cd807b;  */

void FUN_103cd7ffc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar5 = *(undefined1 **)(unaff_x22 + 0x198);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x128);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x0001000834e4(unaff_x22 + 0x160);
  *puVar5 = uVar3;
  *(undefined8 *)(puVar5 + 8) = uVar6;
  puVar5[0x10] = uVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  *(undefined8 *)(puVar5 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd8078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd807c; end: 103cd812f;  */

void FUN_103cd807c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x160);
                    /* WARNING: Could not recover jumptable at 0x000103cd80ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd8130; end: 103cd814f;  */

void FUN_103cd8130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd8150,0,0);
  return;
}



/* Entry: 103cd8150; end: 103cd82bb;  */

/* WARNING: Removing unreachable block (ram,0x000103cd81ec) */

void FUN_103cd8150(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb0) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  func_0x000103cd8418();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_110706450,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd8458();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd82bc;
                    /* WARNING: Could not recover jumptable at 0x000103cd82b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000054,0x800000010f1b4950,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_1107064d0,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd82bc; end: 103cd832f;  */

void FUN_103cd82bc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar4 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd8330;
  }
  else {
    pcVar2 = FUN_103cd83e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd8330; end: 103cd83e3;  */

void FUN_103cd8330(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  bVar7 = *(byte *)(unaff_x22 + 0x38);
  bVar8 = *(byte *)(unaff_x22 + 0x39);
  bVar9 = *(byte *)(unaff_x22 + 0x3a);
  bVar10 = *(byte *)(unaff_x22 + 0x3b);
  bVar11 = *(byte *)(unaff_x22 + 0x3c);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = 0x100;
  if ((bVar8 & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x10000;
  if ((bVar9 & 1) == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x1000000;
  if ((bVar10 & 1) == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100000000;
  if ((bVar11 & 1) == 0) {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000103cd83e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1 | (ulong)bVar7 & 1 | uVar2 | uVar3 | uVar4,uVar5,uVar6,uVar12);
  return;
}



/* Entry: 103cd83e4; end: 103cd8497;  */

void FUN_103cd83e4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103cd8414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd8498; end: 103cd84b7;  */

void FUN_103cd8498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd84b8,0,0);
  return;
}



/* Entry: 103cd84b8; end: 103cd8613;  */

/* WARNING: Removing unreachable block (ram,0x000103cd8544) */

void FUN_103cd84b8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb0) + 0x10,unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  lVar6 = unaff_x22 + 0x48;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  func_0x000103cd8724();
  func_0x000100075890(unaff_x22 + 0x80,0,0,&UNK_11070e430,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd8764();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd8614;
                    /* WARNING: Could not recover jumptable at 0x000103cd8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000038,0x800000010f1b49b0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_11070e4b0,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd8614; end: 103cd8687;  */

void FUN_103cd8614(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar4 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd8688;
  }
  else {
    pcVar2 = FUN_103cd86f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd8688; end: 103cd86ef;  */

void FUN_103cd8688(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000834e4(unaff_x22 + 0x48);
  puVar2[3] = uVar5;
  puVar2[2] = uVar3;
  puVar2[5] = uVar6;
  puVar2[4] = uVar4;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[6] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000103cd86ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd86f0; end: 103cd87a3;  */

void FUN_103cd86f0(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000103cd8720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd87a4; end: 103cd87c3;  */

void FUN_103cd87a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd87c4,0,0);
  return;
}



/* Entry: 103cd87c4; end: 103cd891f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd8850) */

void FUN_103cd87c4(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb0) + 0x10,unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  lVar6 = unaff_x22 + 0x48;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  FUN_103cd8994();
  func_0x000100075890(unaff_x22 + 0x80,0,0,&UNK_11070e530,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd89d4();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd8920;
                    /* WARNING: Could not recover jumptable at 0x000103cd891c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000039,0x800000010f1b49f0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_11070e5b0,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd8920; end: 103cd8993;  */

void FUN_103cd8920(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar4 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd8a58;
  }
  else {
    pcVar2 = (code *)0x103cd8a9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd8994; end: 103cd8a57;  */

void FUN_103cd8994(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc90c58;
  func_0x000107c61520(&DAT_10dc90c58,&UNK_11070e530);
  puRam0000000113000958 = puVar1;
  return;
}



/* Entry: 103cd8a58; end: 103cd8ae7;  */

void FUN_103cd8a58(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000834e4(unaff_x22 + 0x48);
  puVar2[3] = uVar5;
  puVar2[2] = uVar3;
  puVar2[5] = uVar6;
  puVar2[4] = uVar4;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[6] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000103cd86ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd8ae8; end: 103cd8b27;  */

void FUN_103cd8ae8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113000ca0;
  func_0x0001000285a8(0x113000ca0,&UNK_10dc76ee0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cd8b28; end: 103cd8b9b;  */

void FUN_103cd8b28(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103cde0fc();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cd8b9c; end: 103cd8bdb;  */

void FUN_103cd8b9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113000cf0;
  func_0x0001000285a8(0x113000cf0,&UNK_10dc76ee8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cd8bdc; end: 103cd8c17;  */

void FUN_103cd8bdc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103cd8c18; end: 103cd8cf7;  */

void FUN_103cd8c18(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cd8cf8; end: 103cd8d4b;  */

bool FUN_103cd8cf8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 103cd8d4c; end: 103cd8d8b;  */

void FUN_103cd8d4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113000d60;
  func_0x0001000285a8(0x113000d60,&UNK_10dc76f08);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cd8d8c; end: 103cd8db3;  */

void FUN_103cd8d8c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103cd8db4; end: 103cd8df3;  */

void FUN_103cd8db4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113000df0;
  func_0x0001000285a8(0x113000df0,&UNK_10dc76f10);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cd8df4; end: 103cd8dff;  */

void FUN_103cd8df4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103cded78();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cd8e00; end: 103cd8e83;  */

void FUN_103cd8e00(void)

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



/* Entry: 103cd8e84; end: 103cd8eab;  */

long FUN_103cd8e84(long param_1,char param_2)

{
  if (param_2 == '\x01') {
    param_1 = *(long *)(&UNK_10dc78108 + param_1 * 8);
  }
  return param_1;
}



/* Entry: 103cd8eac; end: 103cd8edb;  */

void FUN_103cd8eac(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cd8edc; end: 103cd8ee7;  */

long FUN_103cd8edc(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10dc78108 + lVar1 * 8);
  }
  return lVar1;
}



/* Entry: 103cd8ee8; end: 103cd8f27;  */

void FUN_103cd8ee8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113000f30;
  func_0x0001000285a8(0x113000f30,&UNK_10dc76f18);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cd8f28; end: 103cd8f33;  */

void FUN_103cd8f28(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103cded84)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cd8f34; end: 103cd905f;  */

void FUN_103cd8f34(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cd9060; end: 103cd90b3;  */

bool FUN_103cd9060(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  FUN_103cd8e84(lVar2,(char)param_1[1]);
  FUN_103cd8e84(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 103cd90b4; end: 103cd9153;  */

uint FUN_103cd90b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_f8 = param_1[0x19];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_28 = param_2[0x19];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_103cde5c8(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 103cd9154; end: 103cd919b;  */

void FUN_103cd9154(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc780b0,0x50,2);
  uRam000000011380e8d8 = uStack_38;
  uRam000000011380e8d0 = uStack_40;
  uRam000000011380e8e8 = uStack_28;
  uRam000000011380e8e0 = uStack_30;
  uRam000000011380e8f8 = uStack_18;
  uRam000000011380e8f0 = uStack_20;
  return;
}



/* Entry: 103cd919c; end: 103cd923b;  */

/* WARNING: Possible PIC construction at 0x000103cd91e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cd91f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cd91ec) */
/* WARNING: Removing unreachable block (ram,0x000103cd91fc) */

void FUN_103cd919c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000f60 != -1) {
    func_0x000107c61568(0x113000f60,FUN_103cd9154);
  }
  uVar5 = uRam000000011380e8f8;
  uVar4 = uRam000000011380e8f0;
  uVar3 = uRam000000011380e8e8;
  uVar2 = uRam000000011380e8e0;
  uVar1 = uRam000000011380e8d8;
  *param_1 = uRam000000011380e8d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103cd923c; end: 103cd9283;  */

void FUN_103cd923c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc78090,0x1d,2);
  uRam000000011380e908 = uStack_38;
  uRam000000011380e900 = uStack_40;
  uRam000000011380e918 = uStack_28;
  uRam000000011380e910 = uStack_30;
  uRam000000011380e928 = uStack_18;
  uRam000000011380e920 = uStack_20;
  return;
}



/* Entry: 103cd9284; end: 103cd9323;  */

/* WARNING: Possible PIC construction at 0x000103cd92d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cd92e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cd92d4) */
/* WARNING: Removing unreachable block (ram,0x000103cd92e4) */

void FUN_103cd9284(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000f68 != -1) {
    func_0x000107c61568(0x113000f68,FUN_103cd923c);
  }
  uVar5 = uRam000000011380e928;
  uVar4 = uRam000000011380e920;
  uVar3 = uRam000000011380e918;
  uVar2 = uRam000000011380e910;
  uVar1 = uRam000000011380e908;
  *param_1 = uRam000000011380e900;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103cd9324; end: 103cd936b;  */

void FUN_103cd9324(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc78060,0x2a,2);
  uRam000000011380e938 = uStack_38;
  uRam000000011380e930 = uStack_40;
  uRam000000011380e948 = uStack_28;
  uRam000000011380e940 = uStack_30;
  uRam000000011380e958 = uStack_18;
  uRam000000011380e950 = uStack_20;
  return;
}



/* Entry: 103cd936c; end: 103cd9473;  */

/* WARNING: Removing unreachable block (ram,0x000103cd9470) */

void FUN_103cd936c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        (**(code **)(param_3 + 0x150))();
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_103ce0c10();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_1106fadf8;
        }
        else {
          if (lVar1 != 1) goto LAB_103cd93f4;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000103ccc7cc();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1106facc8;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103cd93f4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103cd9474; end: 103cd9517;  */

void FUN_103cd9474(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_103cd9518();
  if (unaff_x21 == 0) {
    FUN_103cd95a4();
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103cd9518; end: 103cd95a3;  */

void FUN_103cd9518(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(ulong *)(param_1 + 0x28);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103ccc7cc();
    (*pcVar1)(&uStack_70,1,&UNK_1106facc8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103cd95a4; end: 103cd96a7;  */

void FUN_103cd95a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  uStack_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x128);
  uStack_60 = *(undefined8 *)(param_1 + 0x120);
  uStack_48 = *(undefined8 *)(param_1 + 0x138);
  uStack_50 = *(undefined8 *)(param_1 + 0x130);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_98 = *(undefined8 *)(param_1 + 0xe8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 0xf8);
  uStack_90 = *(undefined8 *)(param_1 + 0xf0);
  uStack_78 = *(undefined8 *)(param_1 + 0x108);
  uStack_80 = *(undefined8 *)(param_1 + 0x100);
  uStack_e8 = *(undefined8 *)(param_1 + 0x98);
  uStack_f0 = *(undefined8 *)(param_1 + 0x90);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b8 = *(undefined8 *)(param_1 + 200);
  uStack_c0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0x58);
  uStack_130 = *(undefined8 *)(param_1 + 0x50);
  uStack_118 = *(undefined8 *)(param_1 + 0x68);
  uStack_120 = *(undefined8 *)(param_1 + 0x60);
  uStack_108 = *(undefined8 *)(param_1 + 0x78);
  uStack_110 = *(undefined8 *)(param_1 + 0x70);
  uStack_f8 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = &uStack_130;
  FUN_103cde178();
  if ((int)puVar1 != 1) {
    uStack_158 = uStack_68;
    uStack_160 = uStack_70;
    uStack_148 = uStack_58;
    uStack_150 = uStack_60;
    uStack_138 = uStack_48;
    uStack_140 = uStack_50;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_178 = uStack_88;
    uStack_180 = uStack_90;
    uStack_168 = uStack_78;
    uStack_170 = uStack_80;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_218 = uStack_128;
    uStack_220 = uStack_130;
    uStack_208 = uStack_118;
    uStack_210 = uStack_120;
    uStack_1f8 = uStack_108;
    uStack_200 = uStack_110;
    uStack_1e8 = uStack_f8;
    uStack_1f0 = uStack_100;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103ce0c10();
    (*pcVar2)(&uStack_220,2,&UNK_1106fadf8,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103cd96a8; end: 103cd9737;  */

void FUN_103cd96a8(undefined8 *param_1)

{
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103cde1f4(&uStack_110);
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xf000000000000000;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x23] = uStack_48;
  param_1[0x22] = uStack_50;
  param_1[0x25] = uStack_38;
  param_1[0x24] = uStack_40;
  param_1[0x27] = uStack_28;
  param_1[0x26] = uStack_30;
  param_1[0x1b] = uStack_88;
  param_1[0x1a] = uStack_90;
  param_1[0x1d] = uStack_78;
  param_1[0x1c] = uStack_80;
  param_1[0x1f] = uStack_68;
  param_1[0x1e] = uStack_70;
  param_1[0x21] = uStack_58;
  param_1[0x20] = uStack_60;
  param_1[0x13] = uStack_c8;
  param_1[0x12] = uStack_d0;
  param_1[0x15] = uStack_b8;
  param_1[0x14] = uStack_c0;
  param_1[0x17] = uStack_a8;
  param_1[0x16] = uStack_b0;
  param_1[0x19] = uStack_98;
  param_1[0x18] = uStack_a0;
  param_1[0xb] = uStack_108;
  param_1[10] = uStack_110;
  param_1[0xd] = uStack_f8;
  param_1[0xc] = uStack_100;
  param_1[0xf] = uStack_e8;
  param_1[0xe] = uStack_f0;
  param_1[0x11] = uStack_d8;
  param_1[0x10] = uStack_e0;
  return;
}



/* Entry: 103cd9738; end: 103cd975b;  */

undefined1  [16] FUN_103cd9738(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4a30;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 103cd975c; end: 103cd978b;  */

undefined1  [16] FUN_103cd975c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103cd978c; end: 103cd97bf;  */

void FUN_103cd978c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103cd97c0; end: 103cd97d3;  */

undefined1  [16] FUN_103cd97c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103cd97d0;
  return auVar1;
}



/* Entry: 103cd97d4; end: 103cd97e7;  */

void FUN_103cd97d4(void)

{
  FUN_103cd936c();
  return;
}



/* Entry: 103cd97e8; end: 103cd984f;  */

void FUN_103cd97e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_180);
  FUN_103cd9474(param_1,param_2,param_3);
  return;
}



/* Entry: 103cd9850; end: 103cd9853;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cd9850(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103cd9854; end: 103cd988b;  */

uint FUN_103cd9854(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103ce4308();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103cd988c; end: 103cd98db;  */

uint FUN_103cd988c(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_160,param_1,0x140);
  func_0x000107c610b4(auStack_2a0);
  FUN_103cdf108(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 103cd98dc; end: 103cd997b;  */

/* WARNING: Possible PIC construction at 0x000103cd9928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cd9938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cd992c) */
/* WARNING: Removing unreachable block (ram,0x000103cd993c) */

void FUN_103cd98dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113000f70 != -1) {
    func_0x000107c61568(0x113000f70,FUN_103cd9324);
  }
  uVar5 = uRam000000011380e958;
  uVar4 = uRam000000011380e950;
  uVar3 = uRam000000011380e948;
  uVar2 = uRam000000011380e940;
  uVar1 = uRam000000011380e938;
  *param_1 = uRam000000011380e930;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103cd997c; end: 103cd99b7;  */

void FUN_103cd997c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001210;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001210,&UNK_10dc77cd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cd99b8; end: 103cd9ac3;  */

void FUN_103cd99b8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [320];
  
  func_0x000107c610b4(auStack_170);
  func_0x000107c6068c(auStack_1b8,0);
  func_0x000107c5fa50(auStack_1b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cd9ac4; end: 103cd9b17;  */

uint FUN_103cd9ac4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2a0,param_1,0x140);
  func_0x000107c610b4(auStack_160,param_2,0x140);
  FUN_103cdf108(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 103cd9b18; end: 103cd9b5f;  */

void FUN_103cd9b18(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc78020,0x32,2);
  uRam000000011380e968 = uStack_38;
  uRam000000011380e960 = uStack_40;
  uRam000000011380e978 = uStack_28;
  uRam000000011380e970 = uStack_30;
  uRam000000011380e988 = uStack_18;
  uRam000000011380e980 = uStack_20;
  return;
}


