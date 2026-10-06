/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cd2660; end: 103cd2693;  */

void FUN_103cd2660(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103cd2690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd2694; end: 103cd26af;  */

void FUN_103cd2694(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd26b0,0,0);
  return;
}



/* Entry: 103cd26b0; end: 103cd280f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd274c) */

void FUN_103cd26b0(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  lVar4 = unaff_x22 + 0x60;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  uVar9 = puVar8[6];
  uVar11 = puVar8[9];
  uVar10 = puVar8[8];
  uVar15 = puVar8[3];
  uVar14 = puVar8[2];
  uVar13 = puVar8[5];
  uVar12 = puVar8[4];
  *(undefined8 *)(unaff_x22 + 0x48) = puVar8[7];
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  FUN_103cbe360();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1106f9d60,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_103cbe45c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd2810;
                    /* WARNING: Could not recover jumptable at 0x000103cd280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x88,0xd000000000000043,0x800000010f1b40b0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1106f9df0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd2810; end: 103cd2883;  */

void FUN_103cd2810(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd2884;
  }
  else {
    pcVar2 = FUN_103cd28c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd2884; end: 103cd28c3;  */

void FUN_103cd2884(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000103cd28c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 103cd28c4; end: 103cd28f7;  */

void FUN_103cd28c4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000103cd28f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd28f8; end: 103cd2917;  */

void FUN_103cd28f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd2918,0,0);
  return;
}



/* Entry: 103cd2918; end: 103cd2a73;  */

/* WARNING: Removing unreachable block (ram,0x000103cd29a4) */

void FUN_103cd2918(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x60);
  lVar6 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  FUN_103cd2b58();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_110708d00,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd2b98();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd2a74;
                    /* WARNING: Could not recover jumptable at 0x000103cd2a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000031,0x800000010f1b4100,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_110708d80,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd2a74; end: 103cd2ae7;  */

void FUN_103cd2a74(void)

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
    pcVar2 = FUN_103cd2ae8;
  }
  else {
    pcVar2 = (code *)0x103cd8a6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd2ae8; end: 103cd2b57;  */

void FUN_103cd2ae8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = *(undefined8 **)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000834e4(unaff_x22 + 0x40);
  *puVar5 = uVar4;
  puVar5[2] = uVar7;
  puVar5[1] = uVar6;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  puVar5[4] = uVar1;
  puVar5[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd2b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd2b58; end: 103cd2bd7;  */

void FUN_103cd2b58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8a1c0;
  func_0x000107c61520(&DAT_10dc8a1c0,&UNK_110708d00);
  puRam0000000113000768 = puVar1;
  return;
}



/* Entry: 103cd2bd8; end: 103cd2bf3;  */

void FUN_103cd2bd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd2bf4,0,0);
  return;
}



/* Entry: 103cd2bf4; end: 103cd2d4b;  */

/* WARNING: Removing unreachable block (ram,0x000103cd2c88) */

void FUN_103cd2bf4(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_103cd2dc0();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_110708e08,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  func_0x000103cd2e00();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd2d4c;
                    /* WARNING: Could not recover jumptable at 0x000103cd2d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000003c,0x800000010f1b4140,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_110708e90,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd2d4c; end: 103cd2dbf;  */

void FUN_103cd2d4c(void)

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
    uVar1 = 0x103cd8ab0;
  }
  else {
    uVar1 = 0x103cd8a70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd2dc0; end: 103cd2e3f;  */

void FUN_103cd2dc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8a370;
  func_0x000107c61520(&DAT_10dc8a370,&UNK_110708e08);
  puRam0000000113000778 = puVar1;
  return;
}



/* Entry: 103cd2e40; end: 103cd2e5b;  */

void FUN_103cd2e40(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd2e5c,0,0);
  return;
}



/* Entry: 103cd2e5c; end: 103cd2fb3;  */

/* WARNING: Removing unreachable block (ram,0x000103cd2ef0) */

void FUN_103cd2e5c(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_103cd3028();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_110708fa0,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  func_0x000103cd3068();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd2fb4;
                    /* WARNING: Could not recover jumptable at 0x000103cd2fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000003f,0x800000010f1b4180,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_110709028,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd2fb4; end: 103cd3027;  */

void FUN_103cd2fb4(void)

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
    uVar1 = 0x103cd8ab4;
  }
  else {
    uVar1 = 0x103cd8a74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd3028; end: 103cd30a7;  */

void FUN_103cd3028(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8a530;
  func_0x000107c61520(&DAT_10dc8a530,&UNK_110708fa0);
  puRam0000000113000788 = puVar1;
  return;
}



/* Entry: 103cd30a8; end: 103cd30c3;  */

void FUN_103cd30a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd30c4,0,0);
  return;
}



/* Entry: 103cd30c4; end: 103cd321b;  */

/* WARNING: Removing unreachable block (ram,0x000103cd3158) */

void FUN_103cd30c4(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x110);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x120) + 0x10,unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  lVar4 = unaff_x22 + 0xd0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0xa8) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar11;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  FUN_103cbe558();
  func_0x000100075890(unaff_x22 + 0xf8,0,0,&UNK_1106f9e70,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  FUN_103cbe654();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd321c;
                    /* WARNING: Could not recover jumptable at 0x000103cd3218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000033,0x800000010f1b41c0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x118),&UNK_1106f9ef8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd321c; end: 103cd3287;  */

void FUN_103cd321c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x128),*(undefined8 *)(lVar2 + 0x130));
    pcVar1 = FUN_103cd3288;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x128),*(undefined8 *)(lVar2 + 0x130));
    pcVar1 = (code *)0x103cd3304;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd3288; end: 103cd3337;  */

void FUN_103cd3288(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0xd0);
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
                    /* WARNING: Could not recover jumptable at 0x000103cd3300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd3338; end: 103cd3357;  */

void FUN_103cd3338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd3358,0,0);
  return;
}



/* Entry: 103cd3358; end: 103cd34b3;  */

/* WARNING: Removing unreachable block (ram,0x000103cd33e4) */

void FUN_103cd3358(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa0) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  FUN_103cd3590();
  func_0x000100075890(unaff_x22 + 0x70,0,0,&UNK_110701128,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd35d0();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd34b4;
                    /* WARNING: Could not recover jumptable at 0x000103cd34b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000035,0x800000010f1b4200,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x98),&UNK_1107011a8,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd34b4; end: 103cd3527;  */

void FUN_103cd34b4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb0);
  uVar4 = *(undefined8 *)(lVar3 + 0xa8);
  *(long *)(lVar3 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd3528;
  }
  else {
    pcVar2 = (code *)0x103cd8a78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd3528; end: 103cd358f;  */

void FUN_103cd3528(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *puVar3 = uVar6;
  puVar3[2] = uVar5;
  puVar3[1] = uVar4;
  puVar3[3] = uVar1;
  puVar3[4] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd3590; end: 103cd360f;  */

void FUN_103cd3590(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc7fd50;
  func_0x000107c61520(&DAT_10dc7fd50,&UNK_110701128);
  puRam0000000113000798 = puVar1;
  return;
}



/* Entry: 103cd3610; end: 103cd363b;  */

void FUN_103cd3610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x228) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x220) = param_6;
  *(undefined8 *)(unaff_x22 + 0x218) = param_5;
  *(undefined8 *)(unaff_x22 + 0x210) = param_4;
  *(undefined8 *)(unaff_x22 + 0x208) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x200) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd363c,0,0);
  return;
}



/* Entry: 103cd363c; end: 103cd379f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd36d8) */

void FUN_103cd363c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x228) + 0x10,unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
  lVar3 = *(long *)(unaff_x22 + 0x1c0);
  lVar4 = unaff_x22 + 0x1a0;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar8;
  func_0x000103cd3908();
  func_0x000100075890(unaff_x22 + 0x1e8,0,0,&UNK_110701350,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x230) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar9;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x240) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd3948();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd37a0;
                    /* WARNING: Could not recover jumptable at 0x000103cd379c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000031,0x800000010f1b4240,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0x220),&UNK_1107014f8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd37a0; end: 103cd3813;  */

void FUN_103cd37a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x248) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x240));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x230),*(undefined8 *)(lVar2 + 0x238));
    pcVar1 = FUN_103cd3814;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x230),*(undefined8 *)(lVar2 + 0x238));
    pcVar1 = FUN_103cd38d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd3814; end: 103cd38d3;  */

void FUN_103cd3814(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x50);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xe0);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x110);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x150);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
  puVar1[0x18] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
  puVar1[0x17] = uVar7;
  puVar1[0x16] = uVar6;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd38d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd38d4; end: 103cd3987;  */

void FUN_103cd38d4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x000103cd3904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd3988; end: 103cd39a7;  */

void FUN_103cd3988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd39a8,0,0);
  return;
}



/* Entry: 103cd39a8; end: 103cd3b13;  */

/* WARNING: Removing unreachable block (ram,0x000103cd3a44) */

void FUN_103cd39a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar8;
  func_0x000103cd3bbc();
  func_0x000100075890(unaff_x22 + 0x68,0,0,&UNK_110701610,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd3bfc();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd3b14;
                    /* WARNING: Could not recover jumptable at 0x000103cd3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x38,0xd000000000000038,0x800000010f1b4280,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_110701690,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd3b14; end: 103cd3b87;  */

void FUN_103cd3b14(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  uVar4 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = (code *)0x103cd8ad0;
  }
  else {
    pcVar2 = FUN_103cd3b88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd3b88; end: 103cd3c3b;  */

void FUN_103cd3b88(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103cd3bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd3c3c; end: 103cd3c5f;  */

void FUN_103cd3c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd3c60,0,0);
  return;
}



/* Entry: 103cd3c60; end: 103cd3dcb;  */

/* WARNING: Removing unreachable block (ram,0x000103cd3cfc) */

void FUN_103cd3c60(void)

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
  func_0x000103cd3ed4();
  func_0x000100075890(unaff_x22 + 0x118,0,0,&UNK_110701710,PTR___s10Foundation4DataVN_110350ae0,
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
  func_0x000103cd3f14();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd3dcc;
                    /* WARNING: Could not recover jumptable at 0x000103cd3dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000033,0x800000010f1b42c0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x150),&UNK_110701790,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd3dcc; end: 103cd3e37;  */

void FUN_103cd3dcc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
    pcVar1 = FUN_103cd3e38;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
    pcVar1 = (code *)0x103cd3ea0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd3e38; end: 103cd3f53;  */

void FUN_103cd3e38(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x78);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cd3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd3f54; end: 103cd3f6f;  */

void FUN_103cd3f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd3f70,0,0);
  return;
}



/* Entry: 103cd3f70; end: 103cd40c7;  */

/* WARNING: Removing unreachable block (ram,0x000103cd4004) */

void FUN_103cd3f70(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_103cd413c();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_11070dd90,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  func_0x000103cd417c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd40c8;
                    /* WARNING: Could not recover jumptable at 0x000103cd40c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000032,0x800000010f1b4300,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_11070de18,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd40c8; end: 103cd413b;  */

void FUN_103cd40c8(void)

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
    uVar1 = 0x103cd8ab8;
  }
  else {
    uVar1 = 0x103cd8a80;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd413c; end: 103cd41bb;  */

void FUN_103cd413c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130007d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc905e8;
  func_0x000107c61520(&DAT_10dc905e8,&UNK_11070dd90);
  puRam00000001130007d8 = puVar1;
  return;
}



/* Entry: 103cd41bc; end: 103cd41d7;  */

void FUN_103cd41bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd41d8,0,0);
  return;
}



/* Entry: 103cd41d8; end: 103cd432f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd426c) */

void FUN_103cd41d8(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xc0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xd0) + 0x10,unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  lVar4 = unaff_x22 + 0x80;
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
  func_0x000103cd4430();
  func_0x000100075890(unaff_x22 + 0xa8,0,0,&UNK_1107042c8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd4470();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd4330;
                    /* WARNING: Could not recover jumptable at 0x000103cd432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x50,0xd00000000000004c,0x800000010f1b4340,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 200),&UNK_110704350,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd4330; end: 103cd43a3;  */

void FUN_103cd4330(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xe0);
  uVar4 = *(undefined8 *)(lVar3 + 0xd8);
  *(long *)(lVar3 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd43a4;
  }
  else {
    pcVar2 = FUN_103cd43fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd43a4; end: 103cd43fb;  */

void FUN_103cd43a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000834e4(unaff_x22 + 0x80);
  puVar3[1] = uVar7;
  *puVar3 = uVar6;
  puVar3[3] = uVar5;
  puVar3[2] = uVar4;
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd43f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd43fc; end: 103cd44af;  */

void FUN_103cd43fc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000103cd442c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd44b0; end: 103cd44cb;  */

void FUN_103cd44b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd44cc,0,0);
  return;
}



/* Entry: 103cd44cc; end: 103cd4623;  */

/* WARNING: Removing unreachable block (ram,0x000103cd4560) */

void FUN_103cd44cc(void)

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
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x120) + 0x10,unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  lVar4 = unaff_x22 + 0xd0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x78) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  func_0x000103cd471c();
  func_0x000100075890(unaff_x22 + 0xf8,0,0,&UNK_1107043d8,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  func_0x000103cd475c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd4624;
                    /* WARNING: Could not recover jumptable at 0x000103cd4620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000004d,0x800000010f1b4390,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x118),&UNK_110704460,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd4624; end: 103cd468f;  */

void FUN_103cd4624(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x128),*(undefined8 *)(lVar2 + 0x130));
    pcVar1 = FUN_103cd4690;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x128),*(undefined8 *)(lVar2 + 0x130));
    pcVar1 = (code *)0x103cd46e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd4690; end: 103cd479b;  */

void FUN_103cd4690(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cd46e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd479c; end: 103cd47b7;  */

void FUN_103cd479c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd47b8,0,0);
  return;
}



/* Entry: 103cd47b8; end: 103cd490f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd484c) */

void FUN_103cd47b8(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x50);
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
  func_0x000103cd4a0c();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1107044e8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd4a4c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd4910;
                    /* WARNING: Could not recover jumptable at 0x000103cd490c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd000000000000042,0x800000010f1b43e0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_110704570,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd4910; end: 103cd4983;  */

void FUN_103cd4910(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd4984;
  }
  else {
    pcVar2 = FUN_103cd49d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd4984; end: 103cd49d7;  */

void FUN_103cd4984(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103cd49d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103cd49d8; end: 103cd4a8b;  */

void FUN_103cd49d8(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103cd4a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd4a8c; end: 103cd4aa7;  */

void FUN_103cd4a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd4aa8,0,0);
  return;
}



/* Entry: 103cd4aa8; end: 103cd4bff;  */

/* WARNING: Removing unreachable block (ram,0x000103cd4b3c) */

void FUN_103cd4aa8(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xc0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xd0) + 0x10,unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  lVar4 = unaff_x22 + 0x80;
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
  FUN_103cd4c74();
  func_0x000100075890(unaff_x22 + 0xa8,0,0,&UNK_1107045f0,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd4cb4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd4c00;
                    /* WARNING: Could not recover jumptable at 0x000103cd4bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x50,0xd000000000000047,0x800000010f1b4430,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 200),&UNK_110704678,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd4c00; end: 103cd4c73;  */

void FUN_103cd4c00(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xe0);
  uVar3 = *(undefined8 *)(lVar2 + 0xd8);
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x103cd8ac0;
  }
  else {
    uVar1 = 0x103cd8a84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd4c74; end: 103cd4cf3;  */

void FUN_103cd4c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc81e38;
  func_0x000107c61520(&DAT_10dc81e38,&UNK_1107045f0);
  puRam0000000113000818 = puVar1;
  return;
}



/* Entry: 103cd4cf4; end: 103cd4d0f;  */

void FUN_103cd4cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd4d10,0,0);
  return;
}



/* Entry: 103cd4d10; end: 103cd4e6b;  */

/* WARNING: Removing unreachable block (ram,0x000103cd4da8) */

void FUN_103cd4d10(void)

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
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x50) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  func_0x000103cd4f84();
  func_0x000100075890(unaff_x22 + 0xa0,0,0,&UNK_110704700,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  func_0x000103cd4fc4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd4e6c;
                    /* WARNING: Could not recover jumptable at 0x000103cd4e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000042,0x800000010f1b4480,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xc0),&UNK_110704788,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd4e6c; end: 103cd4edf;  */

void FUN_103cd4e6c(void)

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
    pcVar2 = FUN_103cd4ee0;
  }
  else {
    pcVar2 = FUN_103cd4f50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd4ee0; end: 103cd4f4f;  */

void FUN_103cd4ee0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000834e4(unaff_x22 + 0x78);
  *puVar4 = uVar3;
  puVar4[2] = uVar6;
  puVar4[1] = uVar5;
  puVar4[4] = uVar8;
  puVar4[3] = uVar7;
  puVar4[5] = uVar1;
  puVar4[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd4f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd4f50; end: 103cd5003;  */

void FUN_103cd4f50(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000103cd4f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd5004; end: 103cd5027;  */

void FUN_103cd5004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x280) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x278) = param_3;
  *(undefined8 *)(unaff_x22 + 0x270) = param_2;
  *(undefined8 *)(unaff_x22 + 0x268) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd5028,0,0);
  return;
}



/* Entry: 103cd5028; end: 103cd518b;  */

/* WARNING: Removing unreachable block (ram,0x000103cd50c0) */

void FUN_103cd5028(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x270);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x280) + 0x10,unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar10 = *(long *)(unaff_x22 + 0x250);
  lVar2 = unaff_x22 + 0x230;
  func_0x0001000a8868(lVar2,uVar9);
  uVar7 = puVar6[4];
  uVar11 = puVar6[7];
  uVar8 = puVar6[6];
  uVar15 = puVar6[1];
  uVar14 = *puVar6;
  uVar13 = puVar6[3];
  uVar12 = puVar6[2];
  *(undefined8 *)(unaff_x22 + 0x218) = puVar6[5];
  *(undefined8 *)(unaff_x22 + 0x210) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x220) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x200) = uVar12;
  func_0x000103cd52ec();
  func_0x000100075890(unaff_x22 + 600,0,0,&UNK_110704940,PTR___s10Foundation4DataVN_110350ae0,lVar2,
                      &PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x290) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x298) = plVar3;
  plVar4 = plVar3;
  func_0x000103cd532c();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103cd518c;
                    /* WARNING: Could not recover jumptable at 0x000103cd5188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd000000000000044,0x800000010f1b44d0,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x278),&UNK_110704a50,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 103cd518c; end: 103cd51ff;  */

void FUN_103cd518c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x298));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x288),*(undefined8 *)(lVar2 + 0x290));
    pcVar1 = FUN_103cd5200;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x288),*(undefined8 *)(lVar2 + 0x290));
    pcVar1 = (code *)0x103cd52b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd5200; end: 103cd536b;  */

void FUN_103cd5200(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x230);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[3] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[2] = uVar4;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0xb] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[10] = uVar6;
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[9] = uVar5;
  puVar1[8] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x13] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x12] = uVar6;
  puVar1[0x15] = uVar8;
  puVar1[0x14] = uVar7;
  puVar1[0xf] = uVar3;
  puVar1[0xe] = uVar2;
  puVar1[0x11] = uVar5;
  puVar1[0x10] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e0);
  puVar1[0x1b] = *(undefined8 *)(unaff_x22 + 0x1d8);
  puVar1[0x1a] = uVar6;
  puVar1[0x1d] = uVar8;
  puVar1[0x1c] = uVar7;
  puVar1[0x17] = uVar3;
  puVar1[0x16] = uVar2;
  puVar1[0x19] = uVar5;
  puVar1[0x18] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cd52b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd536c; end: 103cd538f;  */

void FUN_103cd536c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x270) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x268) = param_3;
  *(undefined8 *)(unaff_x22 + 0x260) = param_2;
  *(undefined8 *)(unaff_x22 + 600) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd5390,0,0);
  return;
}



/* Entry: 103cd5390; end: 103cd54fb;  */

/* WARNING: Removing unreachable block (ram,0x000103cd5430) */

void FUN_103cd5390(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x260);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x270) + 0x10,unaff_x22 + 0x220);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar10 = *(long *)(unaff_x22 + 0x240);
  lVar2 = unaff_x22 + 0x220;
  func_0x0001000a8868(lVar2,uVar9);
  uVar7 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x1d8) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar7;
  uVar7 = puVar6[6];
  uVar11 = puVar6[9];
  uVar8 = puVar6[8];
  uVar15 = puVar6[3];
  uVar14 = puVar6[2];
  uVar13 = puVar6[5];
  uVar12 = puVar6[4];
  *(undefined8 *)(unaff_x22 + 0x208) = puVar6[7];
  *(undefined8 *)(unaff_x22 + 0x200) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar12;
  func_0x000103cd564c();
  func_0x000100075890(unaff_x22 + 0x248,0,0,&UNK_110704ad8,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x278) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x280) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x288) = plVar3;
  plVar4 = plVar3;
  func_0x000103cd568c();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103cd54fc;
                    /* WARNING: Could not recover jumptable at 0x000103cd54f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd000000000000034,0x800000010f1b4520,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x268),&UNK_110704c78,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 103cd54fc; end: 103cd556f;  */

void FUN_103cd54fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x290) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x288));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x278),*(undefined8 *)(lVar2 + 0x280));
    pcVar1 = FUN_103cd5570;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x278),*(undefined8 *)(lVar2 + 0x280));
    pcVar1 = (code *)0x103cd5618;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd5570; end: 103cd56cb;  */

void FUN_103cd5570(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x220);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xf8);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x138);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x178);
  puVar1[0x10] = uVar6;
  puVar1[0x13] = uVar8;
  puVar1[0x12] = uVar7;
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = uVar5;
  puVar1[0xe] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
  puVar1[0x19] = *(undefined8 *)(unaff_x22 + 0x1b8);
  puVar1[0x18] = uVar6;
  puVar1[0x1b] = uVar8;
  puVar1[0x1a] = uVar7;
  puVar1[0x15] = uVar3;
  puVar1[0x14] = uVar2;
  puVar1[0x17] = uVar5;
  puVar1[0x16] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cd5614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd56cc; end: 103cd56ef;  */

void FUN_103cd56cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x260) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 600) = param_3;
  *(undefined8 *)(unaff_x22 + 0x250) = param_2;
  *(undefined8 *)(unaff_x22 + 0x248) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd56f0,0,0);
  return;
}



/* Entry: 103cd56f0; end: 103cd5853;  */

/* WARNING: Removing unreachable block (ram,0x000103cd5788) */

void FUN_103cd56f0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x250);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x260) + 0x10,unaff_x22 + 0x210);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar10 = *(long *)(unaff_x22 + 0x230);
  lVar2 = unaff_x22 + 0x210;
  func_0x0001000a8868(lVar2,uVar9);
  uVar7 = puVar6[4];
  uVar11 = puVar6[7];
  uVar8 = puVar6[6];
  uVar15 = puVar6[1];
  uVar14 = *puVar6;
  uVar13 = puVar6[3];
  uVar12 = puVar6[2];
  *(undefined8 *)(unaff_x22 + 0x1f8) = puVar6[5];
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar12;
  FUN_103cd58c8();
  func_0x000100075890(unaff_x22 + 0x238,0,0,&UNK_110704b68,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x268) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x270) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x278) = plVar3;
  plVar4 = plVar3;
  func_0x000103cd5908();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103cd5854;
                    /* WARNING: Could not recover jumptable at 0x000103cd5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd000000000000036,0x800000010f1b4560,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 600),&UNK_110704bf0,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 103cd5854; end: 103cd58c7;  */

void FUN_103cd5854(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x280) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x278));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x268),*(undefined8 *)(lVar2 + 0x270));
    uVar1 = 0x103cd8aa8;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x268),*(undefined8 *)(lVar2 + 0x270));
    uVar1 = 0x103cd8a88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd58c8; end: 103cd5947;  */

void FUN_103cd58c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc825e0;
  func_0x000107c61520(&DAT_10dc825e0,&UNK_110704b68);
  puRam0000000113000858 = puVar1;
  return;
}



/* Entry: 103cd5948; end: 103cd596b;  */

void FUN_103cd5948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x260) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 600) = param_3;
  *(undefined8 *)(unaff_x22 + 0x250) = param_2;
  *(undefined8 *)(unaff_x22 + 0x248) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd596c,0,0);
  return;
}



/* Entry: 103cd596c; end: 103cd5acf;  */

/* WARNING: Removing unreachable block (ram,0x000103cd5a04) */

void FUN_103cd596c(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x250);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x260) + 0x10,unaff_x22 + 0x210);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar10 = *(long *)(unaff_x22 + 0x230);
  lVar2 = unaff_x22 + 0x210;
  func_0x0001000a8868(lVar2,uVar9);
  uVar7 = puVar6[4];
  uVar11 = puVar6[7];
  uVar8 = puVar6[6];
  uVar15 = puVar6[1];
  uVar14 = *puVar6;
  uVar13 = puVar6[3];
  uVar12 = puVar6[2];
  *(undefined8 *)(unaff_x22 + 0x1f8) = puVar6[5];
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar12;
  func_0x000103cd5c20();
  func_0x000100075890(unaff_x22 + 0x238,0,0,&UNK_110704d00,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x268) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x270) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x278) = plVar3;
  plVar4 = plVar3;
  func_0x000103cd5c60();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103cd5ad0;
                    /* WARNING: Could not recover jumptable at 0x000103cd5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd000000000000036,0x800000010f1b45a0,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 600),&UNK_110704d88,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 103cd5ad0; end: 103cd5b43;  */

void FUN_103cd5ad0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x280) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x278));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x268),*(undefined8 *)(lVar2 + 0x270));
    pcVar1 = FUN_103cd5b44;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x268),*(undefined8 *)(lVar2 + 0x270));
    pcVar1 = (code *)0x103cd5bec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd5b44; end: 103cd5c9f;  */

void FUN_103cd5b44(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x210);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xf8);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x138);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x178);
  puVar1[0x10] = uVar6;
  puVar1[0x13] = uVar8;
  puVar1[0x12] = uVar7;
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = uVar5;
  puVar1[0xe] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
  puVar1[0x19] = *(undefined8 *)(unaff_x22 + 0x1b8);
  puVar1[0x18] = uVar6;
  puVar1[0x1b] = uVar8;
  puVar1[0x1a] = uVar7;
  puVar1[0x15] = uVar3;
  puVar1[0x14] = uVar2;
  puVar1[0x17] = uVar5;
  puVar1[0x16] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cd5be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd5ca0; end: 103cd5cbb;  */

void FUN_103cd5ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_3;
  *(undefined8 *)(unaff_x22 + 0x130) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd5cbc,0,0);
  return;
}



/* Entry: 103cd5cbc; end: 103cd5e13;  */

/* WARNING: Removing unreachable block (ram,0x000103cd5d50) */

void FUN_103cd5cbc(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x120);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x130) + 0x10,unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar3 = *(long *)(unaff_x22 + 0x100);
  lVar4 = unaff_x22 + 0xe0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 200) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar12;
  func_0x000103cd5f30();
  func_0x000100075890(unaff_x22 + 0x108,0,0,&UNK_110704e10,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x138) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x148) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd5f70();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd5e14;
                    /* WARNING: Could not recover jumptable at 0x000103cd5e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000003c,0x800000010f1b45e0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x128),&UNK_110704e98,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd5e14; end: 103cd5e7f;  */

void FUN_103cd5e14(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x138),*(undefined8 *)(lVar2 + 0x140));
    pcVar1 = FUN_103cd5e80;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x138),*(undefined8 *)(lVar2 + 0x140));
    pcVar1 = (code *)0x103cd5efc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd5e80; end: 103cd5faf;  */

void FUN_103cd5e80(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0xe0);
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
                    /* WARNING: Could not recover jumptable at 0x000103cd5ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd5fb0; end: 103cd5fcb;  */

void FUN_103cd5fb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd5fcc,0,0);
  return;
}



/* Entry: 103cd5fcc; end: 103cd612b;  */

/* WARNING: Removing unreachable block (ram,0x000103cd6068) */

void FUN_103cd5fcc(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x48);
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
  func_0x000103cd6224();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_110704fc8,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  func_0x000103cd6264();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd612c;
                    /* WARNING: Could not recover jumptable at 0x000103cd6128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x70,0xd000000000000035,0x800000010f1b4620,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_110705050,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd612c; end: 103cd619f;  */

void FUN_103cd612c(void)

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
    pcVar2 = FUN_103cd61a0;
  }
  else {
    pcVar2 = FUN_103cd61f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd61a0; end: 103cd61ef;  */

void FUN_103cd61a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000103cd61ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 103cd61f0; end: 103cd62a3;  */

void FUN_103cd61f0(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000103cd6220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd62a4; end: 103cd62bf;  */

void FUN_103cd62a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd62c0,0,0);
  return;
}



/* Entry: 103cd62c0; end: 103cd6417;  */

/* WARNING: Removing unreachable block (ram,0x000103cd6354) */

void FUN_103cd62c0(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb0) + 0x10,unaff_x22 + 0x50);
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
  func_0x000103cd6510();
  func_0x000100075890(unaff_x22 + 0x90,0,0,&UNK_110706110,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd6550();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd6418;
                    /* WARNING: Could not recover jumptable at 0x000103cd6414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd000000000000040,0x800000010f1b4660,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_110706230,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd6418; end: 103cd648b;  */

void FUN_103cd6418(void)

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
    pcVar2 = FUN_103cd648c;
  }
  else {
    pcVar2 = FUN_103cd64dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd648c; end: 103cd64db;  */

void FUN_103cd648c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103cd64d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 103cd64dc; end: 103cd658f;  */

void FUN_103cd64dc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103cd650c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd6590; end: 103cd65ab;  */

void FUN_103cd6590(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x178) = param_2;
  *(undefined8 *)(unaff_x22 + 0x180) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x170) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd65ac,0,0);
  return;
}



/* Entry: 103cd65ac; end: 103cd6703;  */

/* WARNING: Removing unreachable block (ram,0x000103cd6640) */

void FUN_103cd65ac(void)

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
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x180) + 0x10,unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  lVar3 = *(long *)(unaff_x22 + 0x138);
  func_0x0001000a8868(unaff_x22 + 0x118,uVar2);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c610b4(lVar5,uVar9,0x108);
  FUN_103cbe84c();
  func_0x000100075890(unaff_x22 + 0x160,0,0,&UNK_1106fa130,PTR___s10Foundation4DataVN_110350ae0,
                      lVar5,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar9;
  *(undefined8 *)(unaff_x22 + 400) = uVar4;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar6;
  plVar7 = plVar6;
  FUN_103cbe978();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103cd6704;
                    /* WARNING: Could not recover jumptable at 0x000103cd6700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x140,0xd000000000000033,0x800000010f1b46b0,uVar9,uVar4,
             *(undefined8 *)(unaff_x22 + 0x178),&UNK_1106fa1c0,plVar7,uVar2,lVar3);
  return;
}


