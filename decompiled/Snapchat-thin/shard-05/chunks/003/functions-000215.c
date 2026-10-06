/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ccef4c; end: 103ccef67;  */

void FUN_103ccef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccef68,0,0);
  return;
}



/* Entry: 103ccef68; end: 103ccf0bf;  */

/* WARNING: Removing unreachable block (ram,0x000103cceffc) */

void FUN_103ccef68(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 200);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xd8) + 0x10,unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  lVar4 = unaff_x22 + 0x88;
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
  FUN_103cbbcc4();
  func_0x000100075890(unaff_x22 + 0xb0,0,0,&UNK_1106f82e8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar5;
  plVar6 = plVar5;
  FUN_103cbbdc0();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ccf0c0;
                    /* WARNING: Could not recover jumptable at 0x000103ccf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x50,0xd00000000000003e,0x800000010f1b3b50,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xd0),&UNK_1106f8370,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103ccf0c0; end: 103ccf133;  */

void FUN_103ccf0c0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xe8);
  uVar4 = *(undefined8 *)(lVar3 + 0xe0);
  *(long *)(lVar3 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xf0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103ccf134;
  }
  else {
    pcVar2 = FUN_103ccf1ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103ccf134; end: 103ccf1ab;  */

void FUN_103ccf134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x88);
  puVar6[1] = uVar8;
  *puVar6 = uVar7;
  puVar6[2] = uVar1;
  puVar6[3] = uVar3;
  *(undefined1 *)(puVar6 + 4) = uVar5;
  puVar6[5] = uVar2;
  puVar6[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103ccf1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccf1ac; end: 103ccf1df;  */

void FUN_103ccf1ac(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000103ccf1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccf1e0; end: 103ccf1fb;  */

void FUN_103ccf1e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccf1fc,0,0);
  return;
}



/* Entry: 103ccf1fc; end: 103ccf35b;  */

/* WARNING: Removing unreachable block (ram,0x000103ccf298) */

void FUN_103ccf1fc(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xc0) + 0x10,unaff_x22 + 0x60);
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
  FUN_103cbbebc();
  func_0x000100075890(unaff_x22 + 0xa0,0,0,&UNK_1106f8488,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 200) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar5;
  plVar6 = plVar5;
  FUN_103cbc0b4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ccf35c;
                    /* WARNING: Could not recover jumptable at 0x000103ccf358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x88,0xd00000000000003e,0x800000010f1b3b90,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb8),&UNK_1106f85b8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103ccf35c; end: 103ccf3cf;  */

void FUN_103ccf35c(void)

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
    pcVar2 = FUN_103ccf3d0;
  }
  else {
    pcVar2 = FUN_103ccf420;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103ccf3d0; end: 103ccf41f;  */

void FUN_103ccf3d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000103ccf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 103ccf420; end: 103ccf453;  */

void FUN_103ccf420(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000103ccf450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccf454; end: 103ccf477;  */

void FUN_103ccf454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccf478,0,0);
  return;
}



/* Entry: 103ccf478; end: 103ccf5e3;  */

/* WARNING: Removing unreachable block (ram,0x000103ccf514) */

void FUN_103ccf478(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x118) + 0x10,unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  lVar6 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
  FUN_103cbc26c();
  func_0x000100075890(unaff_x22 + 0xd8,0,0,&UNK_1106f8768,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar7;
  plVar8 = plVar7;
  FUN_103cbc368();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103ccf5e4;
                    /* WARNING: Could not recover jumptable at 0x000103ccf5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000036,0x800000010f1b3bd0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x110),&UNK_1106f87e8,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103ccf5e4; end: 103ccf64f;  */

void FUN_103ccf5e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
    pcVar1 = FUN_103ccf650;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
    pcVar1 = (code *)0x103ccf6a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ccf650; end: 103ccf6db;  */

void FUN_103ccf650(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0x78);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103ccf6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccf6dc; end: 103ccf6f7;  */

void FUN_103ccf6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccf6f8,0,0);
  return;
}



/* Entry: 103ccf6f8; end: 103ccf85f;  */

/* WARNING: Removing unreachable block (ram,0x000103ccf79c) */

void FUN_103ccf6f8(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xf0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x100) + 0x10,unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  lVar4 = unaff_x22 + 0xb0;
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
  uVar9 = puVar8[10];
  uVar11 = puVar8[0xd];
  uVar10 = puVar8[0xc];
  uVar15 = puVar8[7];
  uVar14 = puVar8[6];
  uVar13 = puVar8[9];
  uVar12 = puVar8[8];
  *(undefined8 *)(unaff_x22 + 0x68) = puVar8[0xb];
  *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
  FUN_103cbc464();
  func_0x000100075890(unaff_x22 + 0xd8,0,0,&UNK_1106f8990,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar5;
  plVar6 = plVar5;
  FUN_103cbc560();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ccf860;
                    /* WARNING: Could not recover jumptable at 0x000103ccf85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x80,0xd000000000000035,0x800000010f1b3c10,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xf8),&UNK_1106f8a18,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103ccf860; end: 103ccf8d3;  */

void FUN_103ccf860(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x110);
  uVar4 = *(undefined8 *)(lVar3 + 0x108);
  *(long *)(lVar3 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x118));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103ccf8d4;
  }
  else {
    pcVar2 = FUN_103ccf944;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103ccf8d4; end: 103ccf943;  */

void FUN_103ccf8d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = *(undefined8 **)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000834e4(unaff_x22 + 0xb0);
  *puVar5 = uVar4;
  *(undefined1 *)(puVar5 + 1) = uVar3;
  puVar5[3] = uVar7;
  puVar5[2] = uVar6;
  puVar5[4] = uVar1;
  puVar5[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103ccf940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccf944; end: 103ccf977;  */

void FUN_103ccf944(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x000103ccf974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccf978; end: 103ccf993;  */

void FUN_103ccf978(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccf994,0,0);
  return;
}



/* Entry: 103ccf994; end: 103ccfafb;  */

/* WARNING: Removing unreachable block (ram,0x000103ccfa38) */

void FUN_103ccf994(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xc0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xd0) + 0x10,unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar3 = *(long *)(unaff_x22 + 0x88);
  lVar4 = unaff_x22 + 0x68;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  uVar12 = puVar8[7];
  uVar11 = puVar8[6];
  uVar10 = puVar8[9];
  uVar9 = puVar8[8];
  uVar14 = puVar8[5];
  uVar13 = puVar8[4];
  *(undefined8 *)(unaff_x22 + 0x60) = puVar8[10];
  *(undefined8 *)(unaff_x22 + 0x48) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
  FUN_103cbc854();
  func_0x000100075890(unaff_x22 + 0xb0,0,0,&UNK_1106f8c30,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar5;
  plVar6 = plVar5;
  FUN_103cbca0c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ccfafc;
                    /* WARNING: Could not recover jumptable at 0x000103ccfaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x90,0xd00000000000003f,0x800000010f1b3c50,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 200),&UNK_1106f8d50,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103ccfafc; end: 103ccfb6f;  */

void FUN_103ccfafc(void)

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
    pcVar2 = FUN_103ccfb70;
  }
  else {
    pcVar2 = FUN_103ccfbc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103ccfb70; end: 103ccfbc3;  */

void FUN_103ccfb70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000834e4(unaff_x22 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x000103ccfbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103ccfbc4; end: 103ccfbf7;  */

void FUN_103ccfbc4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x000103ccfbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccfbf8; end: 103ccfc17;  */

void FUN_103ccfbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccfc18,0,0);
  return;
}



/* Entry: 103ccfc18; end: 103ccfd83;  */

/* WARNING: Removing unreachable block (ram,0x000103ccfcb4) */

void FUN_103ccfc18(void)

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
  FUN_103cbc65c();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_1106f8aa0,PTR___s10Foundation4DataVN_110350ae0,lVar6
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
  FUN_103cbc758();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103ccfd84;
                    /* WARNING: Could not recover jumptable at 0x000103ccfd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000036,0x800000010f1b3c90,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa8),&UNK_1106f8b20,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103ccfd84; end: 103ccfdf7;  */

void FUN_103ccfd84(void)

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
    pcVar2 = FUN_103ccfdf8;
  }
  else {
    pcVar2 = FUN_103ccfe50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103ccfdf8; end: 103ccfe4f;  */

void FUN_103ccfdf8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103ccfe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 103ccfe50; end: 103ccfe83;  */

void FUN_103ccfe50(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103ccfe80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccfe84; end: 103ccfea3;  */

void FUN_103ccfe84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccfea4,0,0);
  return;
}



/* Entry: 103ccfea4; end: 103ccffff;  */

/* WARNING: Removing unreachable block (ram,0x000103ccff30) */

void FUN_103ccfea4(void)

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
  FUN_103cba1b8();
  func_0x000100075890(unaff_x22 + 0x70,0,0,&UNK_1106f6fd0,PTR___s10Foundation4DataVN_110350ae0,lVar6
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
  FUN_103cba2b4();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd0000;
                    /* WARNING: Could not recover jumptable at 0x000103ccfffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000034,0x800000010f1b3cd0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x98),&UNK_1106f7050,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd0000; end: 103cd0073;  */

void FUN_103cd0000(void)

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
    pcVar2 = FUN_103cd0074;
  }
  else {
    pcVar2 = FUN_103cd00dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd0074; end: 103cd00db;  */

void FUN_103cd0074(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined1 **)(unaff_x22 + 0x80);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *puVar4 = uVar3;
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 8) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd00d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd00dc; end: 103cd010f;  */

void FUN_103cd00dc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103cd010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd0110; end: 103cd0133;  */

void FUN_103cd0110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd0134,0,0);
  return;
}



/* Entry: 103cd0134; end: 103cd029f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd01d0) */

void FUN_103cd0134(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x118) + 0x10,unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  lVar6 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
  FUN_103cb9fc0();
  func_0x000100075890(unaff_x22 + 0xd8,0,0,&UNK_1106f6ec8,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar7;
  plVar8 = plVar7;
  FUN_103cba0bc();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd02a0;
                    /* WARNING: Could not recover jumptable at 0x000103cd029c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000037,0x800000010f1b3d10,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x110),&UNK_1106f6f48,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd02a0; end: 103cd030b;  */

void FUN_103cd02a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
    uVar1 = 0x103cd8aa4;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
    uVar1 = 0x103cd8a60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd030c; end: 103cd032b;  */

void FUN_103cd030c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd032c,0,0);
  return;
}



/* Entry: 103cd032c; end: 103cd0487;  */

/* WARNING: Removing unreachable block (ram,0x000103cd03b8) */

void FUN_103cd032c(void)

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
  FUN_103cbcdbc();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_1106f9028,PTR___s10Foundation4DataVN_110350ae0,lVar6
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
  FUN_103cbceb8();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd0488;
                    /* WARNING: Could not recover jumptable at 0x000103cd0484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd00000000000003b,0x800000010f1b3d50,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_1106f90a8,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd0488; end: 103cd04fb;  */

void FUN_103cd0488(void)

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
    pcVar2 = FUN_103cd04fc;
  }
  else {
    pcVar2 = FUN_103cd056c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd04fc; end: 103cd056b;  */

void FUN_103cd04fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = *(undefined8 **)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x40);
  *puVar5 = uVar4;
  *(undefined1 *)(puVar5 + 1) = uVar3;
  puVar5[3] = uVar7;
  puVar5[2] = uVar6;
  puVar5[4] = uVar1;
  puVar5[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd056c; end: 103cd059f;  */

void FUN_103cd056c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000103cd059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd05a0; end: 103cd05bb;  */

void FUN_103cd05a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd05bc,0,0);
  return;
}



/* Entry: 103cd05bc; end: 103cd0717;  */

/* WARNING: Removing unreachable block (ram,0x000103cd0654) */

void FUN_103cd05bc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar7 = puVar9[4];
  uVar12 = *puVar9;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x70) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x68) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
  FUN_103cbcfb4();
  func_0x000100075890(unaff_x22 + 0x90,0,0,&UNK_1106f9130,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar7;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_103cbd0b0();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd0718;
                    /* WARNING: Could not recover jumptable at 0x000103cd0714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x10,0xd000000000000030,0x800000010f1b3d90,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1106f91b8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd0718; end: 103cd078b;  */

void FUN_103cd0718(void)

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
    pcVar2 = FUN_103cd078c;
  }
  else {
    pcVar2 = FUN_103cd07e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd078c; end: 103cd07e3;  */

void FUN_103cd078c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x40);
  puVar3[1] = uVar5;
  *puVar3 = uVar4;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd07e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd07e4; end: 103cd0817;  */

void FUN_103cd07e4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000103cd0814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd0818; end: 103cd0833;  */

void FUN_103cd0818(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_2;
  *(undefined8 *)(unaff_x22 + 0x110) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd0834,0,0);
  return;
}



/* Entry: 103cd0834; end: 103cd09b3;  */

/* WARNING: Removing unreachable block (ram,0x000103cd08f0) */

void FUN_103cd0834(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x100);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x110) + 0x10,unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar3 = *(long *)(unaff_x22 + 0xd8);
  lVar4 = unaff_x22 + 0xb8;
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
  uVar9 = puVar8[10];
  uVar11 = puVar8[0xd];
  uVar10 = puVar8[0xc];
  uVar15 = puVar8[7];
  uVar14 = puVar8[6];
  uVar13 = puVar8[9];
  uVar12 = puVar8[8];
  *(undefined8 *)(unaff_x22 + 0x68) = puVar8[0xb];
  *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
  uVar12 = puVar8[0x11];
  uVar11 = puVar8[0x10];
  uVar10 = puVar8[0x13];
  uVar9 = puVar8[0x12];
  uVar14 = puVar8[0xf];
  uVar13 = puVar8[0xe];
  *(undefined8 *)(unaff_x22 + 0xb0) = puVar8[0x14];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  FUN_103cbd268();
  func_0x000100075890(unaff_x22 + 0xf0,0,0,&UNK_1106f92c8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar5;
  plVar6 = plVar5;
  FUN_103cbd364();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd09b4;
                    /* WARNING: Could not recover jumptable at 0x000103cd09b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0xe0,0xd000000000000030,0x800000010f1b3dd0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x108),&UNK_1106f9358,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd09b4; end: 103cd0a27;  */

void FUN_103cd09b4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x120);
  uVar4 = *(undefined8 *)(lVar3 + 0x118);
  *(long *)(lVar3 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x128));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd0a28;
  }
  else {
    pcVar2 = FUN_103cd0a68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd0a28; end: 103cd0a67;  */

void FUN_103cd0a28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x0001000834e4(unaff_x22 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x000103cd0a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 103cd0a68; end: 103cd0a9b;  */

void FUN_103cd0a68(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x000103cd0a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd0a9c; end: 103cd0ab7;  */

void FUN_103cd0a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd0ab8,0,0);
  return;
}



/* Entry: 103cd0ab8; end: 103cd0c13;  */

/* WARNING: Removing unreachable block (ram,0x000103cd0b44) */

void FUN_103cd0ab8(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x90) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  FUN_103cbd460();
  func_0x000100075890(unaff_x22 + 0x68,0,0,&UNK_1106f93d8,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  plVar8 = plVar7;
  FUN_103cbd55c();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd0c14;
                    /* WARNING: Could not recover jumptable at 0x000103cd0c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd00000000000002c,0x800000010f1b3e10,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x88),&UNK_1106f9458,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd0c14; end: 103cd0c87;  */

void FUN_103cd0c14(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  uVar4 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd0c88;
  }
  else {
    pcVar2 = FUN_103cd0cdc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd0c88; end: 103cd0cdb;  */

void FUN_103cd0c88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103cd0cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103cd0cdc; end: 103cd0d0f;  */

void FUN_103cd0cdc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103cd0d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd0d10; end: 103cd0d2b;  */

void FUN_103cd0d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd0d2c,0,0);
  return;
}



/* Entry: 103cd0d2c; end: 103cd0e83;  */

/* WARNING: Removing unreachable block (ram,0x000103cd0dc0) */

void FUN_103cd0d2c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x1a8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1b8) + 0x10,unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar3 = *(long *)(unaff_x22 + 0x160);
  lVar4 = unaff_x22 + 0x140;
  func_0x0001000a8868(lVar4,uVar2);
  uVar7 = puVar9[4];
  uVar12 = *puVar9;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x170) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x168) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x180) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x178) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar7;
  FUN_103cbd714();
  func_0x000100075890(unaff_x22 + 400,0,0,&UNK_1106f9578,PTR___s10Foundation4DataVN_110350ae0,lVar4,
                      &PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  plVar6 = plVar5;
  FUN_103cbd810();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd0e84;
                    /* WARNING: Could not recover jumptable at 0x000103cd0e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x10,0xd00000000000002e,0x800000010f1b3e40,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1b0),&UNK_1106f9600,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd0e84; end: 103cd0eef;  */

void FUN_103cd0e84(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = FUN_103cd0ef0;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = FUN_103cd0fa4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd0ef0; end: 103cd0fa3;  */

void FUN_103cd0ef0(void)

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
  
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xb0);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0xf0);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  puVar1[0x12] = *(undefined8 *)(unaff_x22 + 0x138);
  puVar1[0xf] = uVar5;
  puVar1[0xe] = uVar4;
  puVar1[0x11] = uVar7;
  puVar1[0x10] = uVar6;
  puVar1[0xd] = uVar3;
  puVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd0fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd0fa4; end: 103cd0fd7;  */

void FUN_103cd0fa4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x140);
                    /* WARNING: Could not recover jumptable at 0x000103cd0fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd0fd8; end: 103cd0ff3;  */

void FUN_103cd0fd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd0ff4,0,0);
  return;
}



/* Entry: 103cd0ff4; end: 103cd114b;  */

/* WARNING: Removing unreachable block (ram,0x000103cd1088) */

void FUN_103cd0ff4(void)

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
  FUN_103cbdc00();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_1106f98a8,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  FUN_103cbdcfc();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd114c;
                    /* WARNING: Could not recover jumptable at 0x000103cd1148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000031,0x800000010f1b3e70,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_1106f9930,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd114c; end: 103cd11bf;  */

void FUN_103cd114c(void)

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
    pcVar2 = FUN_103cd11c0;
  }
  else {
    pcVar2 = FUN_103cd1218;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd11c0; end: 103cd1217;  */

void FUN_103cd11c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000103cd1214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 103cd1218; end: 103cd124b;  */

void FUN_103cd1218(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000103cd1248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd124c; end: 103cd1267;  */

void FUN_103cd124c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x178) = param_2;
  *(undefined8 *)(unaff_x22 + 0x180) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x170) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd1268,0,0);
  return;
}



/* Entry: 103cd1268; end: 103cd13bf;  */

/* WARNING: Removing unreachable block (ram,0x000103cd12fc) */

void FUN_103cd1268(void)

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
  FUN_103cbda08();
  func_0x000100075890(unaff_x22 + 0x160,0,0,&UNK_1106f97a0,PTR___s10Foundation4DataVN_110350ae0,
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
  FUN_103cbdb04();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103cd13c0;
                    /* WARNING: Could not recover jumptable at 0x000103cd13bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x140,0xd000000000000037,0x800000010f1b3eb0,uVar9,uVar4,
             *(undefined8 *)(unaff_x22 + 0x178),&UNK_1106f9828,plVar7,uVar2,lVar3);
  return;
}



/* Entry: 103cd13c0; end: 103cd1433;  */

void FUN_103cd13c0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 400);
  uVar4 = *(undefined8 *)(lVar3 + 0x188);
  *(long *)(lVar3 + 0x1a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x198));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd1434;
  }
  else {
    pcVar2 = FUN_103cd148c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd1434; end: 103cd148b;  */

void FUN_103cd1434(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x148);
  func_0x0001000834e4(unaff_x22 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x000103cd1488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 103cd148c; end: 103cd14bf;  */

void FUN_103cd148c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x000103cd14bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd14c0; end: 103cd14db;  */

void FUN_103cd14c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd14dc,0,0);
  return;
}



/* Entry: 103cd14dc; end: 103cd1637;  */

/* WARNING: Removing unreachable block (ram,0x000103cd1568) */

void FUN_103cd14dc(void)

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
  FUN_103cb9dc8();
  func_0x000100075890(unaff_x22 + 0x60,0,0,&UNK_1106f6dc8,PTR___s10Foundation4DataVN_110350ae0,lVar6
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
  FUN_103cb9ec4();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd1638;
                    /* WARNING: Could not recover jumptable at 0x000103cd1634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000032,0x800000010f1b3ef0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x80),&UNK_1106f6e48,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd1638; end: 103cd16ab;  */

void FUN_103cd1638(void)

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
    uVar1 = 0x103cd8ac4;
  }
  else {
    uVar1 = 0x103cd8a64;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd16ac; end: 103cd16c7;  */

void FUN_103cd16ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd16c8,0,0);
  return;
}



/* Entry: 103cd16c8; end: 103cd183f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd177c) */

void FUN_103cd16c8(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xe8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xf8) + 0x10,unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar3 = *(long *)(unaff_x22 + 0xb8);
  lVar4 = unaff_x22 + 0x98;
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
  uVar12 = puVar8[0xd];
  uVar11 = puVar8[0xc];
  uVar10 = puVar8[0xf];
  uVar9 = puVar8[0xe];
  uVar14 = puVar8[0xb];
  uVar13 = puVar8[10];
  *(undefined8 *)(unaff_x22 + 0x90) = puVar8[0x10];
  *(undefined8 *)(unaff_x22 + 0x78) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
  func_0x000103cd1938();
  func_0x000100075890(unaff_x22 + 0xd8,0,0,&UNK_11070ca18,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar5;
  plVar6 = plVar5;
  func_0x000103cd1978();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd1840;
                    /* WARNING: Could not recover jumptable at 0x000103cd183c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0xc0,0xd00000000000003a,0x800000010f1b3f30,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xf0),&UNK_11070cd50,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd1840; end: 103cd18b3;  */

void FUN_103cd1840(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x108);
  uVar4 = *(undefined8 *)(lVar3 + 0x100);
  *(long *)(lVar3 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x110));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cd18b4;
  }
  else {
    pcVar2 = FUN_103cd1904;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd18b4; end: 103cd1903;  */

void FUN_103cd18b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x0001000834e4(unaff_x22 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x000103cd1900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 103cd1904; end: 103cd19b7;  */

void FUN_103cd1904(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x000103cd1934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd19b8; end: 103cd19d3;  */

void FUN_103cd19b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd19d4,0,0);
  return;
}



/* Entry: 103cd19d4; end: 103cd1b2f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd1a60) */

void FUN_103cd19d4(void)

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
  FUN_103cd1ba4();
  func_0x000100075890(unaff_x22 + 0x60,0,0,&UNK_1107093c8,PTR___s10Foundation4DataVN_110350ae0,lVar6
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
  func_0x000103cd1be4();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd1b30;
                    /* WARNING: Could not recover jumptable at 0x000103cd1b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd00000000000003e,0x800000010f1b3f70,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x80),&UNK_1107094d0,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd1b30; end: 103cd1ba3;  */

void FUN_103cd1b30(void)

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
    uVar1 = 0x103cd8ac8;
  }
  else {
    uVar1 = 0x103cd8a68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd1ba4; end: 103cd1c23;  */

void FUN_103cd1ba4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8a9d0;
  func_0x000107c61520(&DAT_10dc8a9d0,&UNK_1107093c8);
  puRam0000000113000738 = puVar1;
  return;
}



/* Entry: 103cd1c24; end: 103cd1c43;  */

void FUN_103cd1c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = param_4;
  *(undefined8 *)(unaff_x22 + 0x128) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd1c44,0,0);
  return;
}



/* Entry: 103cd1c44; end: 103cd1d9f;  */

/* WARNING: Removing unreachable block (ram,0x000103cd1cd0) */

void FUN_103cd1c44(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x128) + 0x10,unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar5 = *(long *)(unaff_x22 + 0xe0);
  lVar6 = unaff_x22 + 0xc0;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
  func_0x000103cd1ec8();
  func_0x000100075890(unaff_x22 + 0xf8,0,0,&UNK_110707850,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x140) = plVar7;
  plVar8 = plVar7;
  func_0x000103cd1f08();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103cd1da0;
                    /* WARNING: Could not recover jumptable at 0x000103cd1d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x10,0xd000000000000034,0x800000010f1b3fb0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x120),&UNK_1107078d0,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103cd1da0; end: 103cd1e0b;  */

void FUN_103cd1da0(void)

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
    pcVar1 = FUN_103cd1e0c;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x130),*(undefined8 *)(lVar2 + 0x138));
    pcVar1 = (code *)0x103cd1e94;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cd1e0c; end: 103cd1f47;  */

void FUN_103cd1e0c(void)

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
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x70);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  puVar1[10] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  puVar1[9] = uVar7;
  puVar1[8] = uVar6;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103cd1e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd1f48; end: 103cd1f63;  */

void FUN_103cd1f48(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd1f64,0,0);
  return;
}



/* Entry: 103cd1f64; end: 103cd20bb;  */

/* WARNING: Removing unreachable block (ram,0x000103cd1ff8) */

void FUN_103cd1f64(void)

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
  func_0x000103cd21b8();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_110709938,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  func_0x000103cd21f8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd20bc;
                    /* WARNING: Could not recover jumptable at 0x000103cd20b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000039,0x800000010f1b3ff0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_1107099c0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd20bc; end: 103cd212f;  */

void FUN_103cd20bc(void)

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
    pcVar2 = FUN_103cd2130;
  }
  else {
    pcVar2 = FUN_103cd2184;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd2130; end: 103cd2183;  */

void FUN_103cd2130(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000103cd2180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103cd2184; end: 103cd2237;  */

void FUN_103cd2184(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000103cd21b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cd2238; end: 103cd2257;  */

void FUN_103cd2238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd2258,0,0);
  return;
}



/* Entry: 103cd2258; end: 103cd23c3;  */

/* WARNING: Removing unreachable block (ram,0x000103cd22f4) */

void FUN_103cd2258(void)

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
  FUN_103cbdeb4();
  func_0x000100075890(unaff_x22 + 0x68,0,0,&UNK_1106f9ac8,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  FUN_103cbdfb0();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd23c4;
                    /* WARNING: Could not recover jumptable at 0x000103cd23c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x38,0xd00000000000003d,0x800000010f1b4030,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_1106f9b48,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd23c4; end: 103cd2437;  */

void FUN_103cd23c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xa8);
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  func_0x00010006c090(uVar3,uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x103cd8acc;
  }
  else {
    uVar1 = 0x103cd8a7c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cd2438; end: 103cd2453;  */

void FUN_103cd2438(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cd2454,0,0);
  return;
}



/* Entry: 103cd2454; end: 103cd25ab;  */

/* WARNING: Removing unreachable block (ram,0x000103cd24e8) */

void FUN_103cd2454(void)

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
  FUN_103cbe168();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_1106f9c50,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  FUN_103cbe264();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cd25ac;
                    /* WARNING: Could not recover jumptable at 0x000103cd25a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd00000000000003d,0x800000010f1b4070,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_1106f9ce0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cd25ac; end: 103cd261f;  */

void FUN_103cd25ac(void)

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
    pcVar2 = FUN_103cd2620;
  }
  else {
    pcVar2 = FUN_103cd2660;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cd2620; end: 103cd265f;  */

void FUN_103cd2620(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103cd265c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}


