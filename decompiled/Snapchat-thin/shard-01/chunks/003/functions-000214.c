/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e9f040; end: 100e9f0cb;  */

void FUN_100e9f040(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd8);
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
                    /* WARNING: Could not recover jumptable at 0x000100e9f094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e9f0cc; end: 100e9f0e7;  */

void FUN_100e9f0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_3;
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e9f0e8,0,0);
  return;
}



/* Entry: 100e9f0e8; end: 100e9f23f;  */

/* WARNING: Removing unreachable block (ram,0x000100e9f17c) */

void FUN_100e9f0e8(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x130);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x140) + 0x10,unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  lVar4 = unaff_x22 + 0xf0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 200) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  FUN_100e9b8ac();
  func_0x000100075890(unaff_x22 + 0x118,0,0,&UNK_11035f638,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar5;
  plVar6 = plVar5;
  FUN_100e9b9a8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100e9f240;
                    /* WARNING: Could not recover jumptable at 0x000100e9f23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000003d,0x800000010ef16940,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x138),&UNK_11035f6c0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 100e9f240; end: 100e9f2ab;  */

void FUN_100e9f240(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
    pcVar1 = FUN_100e9f2ac;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
    pcVar1 = (code *)0x100e9f334;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e9f2ac; end: 100e9f367;  */

void FUN_100e9f2ac(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x128);
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
  func_0x0001000834e4(unaff_x22 + 0xf0);
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
                    /* WARNING: Could not recover jumptable at 0x000100e9f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e9f368; end: 100e9f383;  */

void FUN_100e9f368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_3;
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e9f384,0,0);
  return;
}



/* Entry: 100e9f384; end: 100e9f4db;  */

/* WARNING: Removing unreachable block (ram,0x000100e9f418) */

void FUN_100e9f384(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x130);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x140) + 0x10,unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  lVar4 = unaff_x22 + 0xf0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 200) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  FUN_100e9bba0();
  func_0x000100075890(unaff_x22 + 0x118,0,0,&UNK_11035f8e8,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar5;
  plVar6 = plVar5;
  FUN_100e9bc9c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100e9f4dc;
                    /* WARNING: Could not recover jumptable at 0x000100e9f4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000003c,0x800000010ef16980,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x138),&UNK_11035f970,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 100e9f4dc; end: 100e9f547;  */

void FUN_100e9f4dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
    pcVar1 = FUN_100e9f814;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
    pcVar1 = FUN_100e9f814;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e9f548; end: 100e9f56b;  */

void FUN_100e9f548(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_6;
  *(undefined8 *)(unaff_x22 + 0x110) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x100) = param_5;
  *(undefined1 *)(unaff_x22 + 0x138) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e9f56c,0,0);
  return;
}



/* Entry: 100e9f56c; end: 100e9f6d7;  */

/* WARNING: Removing unreachable block (ram,0x000100e9f608) */

void FUN_100e9f56c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x110) + 0x10,unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  lVar7 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar7,uVar3);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar11;
  *(undefined1 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
  FUN_100e9be94();
  func_0x000100075890(unaff_x22 + 0xd8,0,0,&UNK_11035fb98,PTR___s10Foundation4DataVN_110350ae0,lVar7
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar4;
  piVar10 = *(int **)(lVar5 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar8;
  plVar9 = plVar8;
  FUN_100e9bfc0();
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100e9f6d8;
                    /* WARNING: Could not recover jumptable at 0x000100e9f6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (unaff_x22 + 0x10,0xd00000000000003e,0x800000010ef169c0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x108),&UNK_11035fc18,plVar9,uVar3,lVar5);
  return;
}



/* Entry: 100e9f6d8; end: 100e9f743;  */

void FUN_100e9f6d8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
    pcVar1 = FUN_100e9f744;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
    pcVar1 = (code *)0x100e9f79c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e9f744; end: 100e9f813;  */

void FUN_100e9f744(void)

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
                    /* WARNING: Could not recover jumptable at 0x000100e9f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e9f814; end: 100e9f81b;  */

void FUN_100e9f814(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x000100e9f364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e9f81c; end: 100e9f89b;  */

void FUN_100e9f81c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d463d8;
  func_0x0001000285a8(0x112d463d8,&UNK_10d90d108);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e9f89c; end: 100e9f8a7;  */

void FUN_100e9f89c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x100ea1d80)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e9f8a8; end: 100e9f8e7;  */

void FUN_100e9f8a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d464a8;
  func_0x0001000285a8(0x112d464a8,&UNK_10d90d118);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100e9f8e8; end: 100e9f8ff;  */

void FUN_100e9f8e8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x100ea1d80)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e9f900; end: 100e9f96f;  */

void FUN_100e9f900(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e9f970; end: 100e9f97b;  */

void FUN_100e9f970(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x100ea1d7c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 100e9f97c; end: 100e9fa73;  */

void FUN_100e9f97c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
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



/* Entry: 100e9fa74; end: 100e9fabb;  */

void FUN_100e9fa74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90da70,0x76,2);
  uRam00000001137feea8 = uStack_38;
  uRam00000001137feea0 = uStack_40;
  uRam00000001137feeb8 = uStack_28;
  uRam00000001137feeb0 = uStack_30;
  uRam00000001137feec8 = uStack_18;
  uRam00000001137feec0 = uStack_20;
  return;
}



/* Entry: 100e9fabc; end: 100e9fbe7;  */

/* WARNING: Removing unreachable block (ram,0x000100e9fbc0) */

void FUN_100e9fabc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 3) goto LAB_100e9fb34;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_100e9fb24:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_100e9fb24;
        }
        if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_100e9fb24;
        }
        if (lVar1 == 6) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_100ea15c0();
          (*pcVar3)(unaff_x20 + 0x30,&UNK_110360348,lVar1,param_2,param_3);
        }
      }
LAB_100e9fb34:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 100e9fbe8; end: 100e9fcf3;  */

void FUN_100e9fbe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((((((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
        (((int)unaff_x20[2] == 0 ||
         ((**(code **)(param_3 + 0x18))((int)unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(int *)((long)unaff_x20 + 0x14) == 0 ||
        ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x14),3,param_2,param_3),
        unaff_x21 == 0)))) &&
      (((int)unaff_x20[3] == 0 ||
       ((**(code **)(param_3 + 0x18))((int)unaff_x20[3],4,param_2,param_3), unaff_x21 == 0)))) &&
     (((*(int *)((long)unaff_x20 + 0x1c) == 0 ||
       ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x1c),5,param_2,param_3),
       unaff_x21 == 0)) && (FUN_100e9fcf4(), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 100e9fcf4; end: 100e9fd7b;  */

void FUN_100e9fcf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x40);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_100ea15c0();
    (*pcVar1)(&uStack_70,6,&UNK_110360348,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 100e9fd7c; end: 100e9fdc7;  */

uint FUN_100e9fd7c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_e8 [40];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if (((((uVar2 != *param_2 || param_1[1] != param_2[1]) &&
        (func_0x000107c605b8(), (uVar2 & 1) == 0)) || ((int)param_1[2] != (int)param_2[2])) ||
      ((*(int *)((long)param_1 + 0x14) != *(int *)((long)param_2 + 0x14) ||
       ((int)param_1[3] != (int)param_2[3])))) ||
     (*(int *)((long)param_1 + 0x1c) != *(int *)((long)param_2 + 0x1c))) {
    uVar1 = 0;
    goto LAB_100ea0d78;
  }
  uVar7 = param_1[7];
  uVar2 = param_1[6];
  uVar11 = param_1[9];
  uVar9 = param_1[8];
  uVar4 = param_1[10];
  uVar8 = param_2[7];
  uVar6 = param_2[6];
  uVar12 = param_2[9];
  uVar10 = param_2[8];
  uVar5 = param_2[10];
  uStack_c0 = uVar6;
  uStack_b8 = uVar8;
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar5;
  uStack_90 = uVar2;
  uStack_88 = uVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar4;
  if (uVar9 == 0) {
    if (uVar10 == 0) {
      FUN_100ea06bc(&uStack_90,auStack_e8);
      FUN_100ea06bc(&uStack_c0,auStack_e8);
LAB_100ea0e5c:
      FUN_100e9e104(uVar2,uVar7,uVar9,uVar11,uVar4);
      uVar2 = param_1[4];
      FUN_100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)uVar2;
      goto LAB_100ea0d78;
    }
LAB_100ea0da0:
    FUN_100ea06bc(&uStack_90,auStack_e8);
    FUN_100ea06bc(&uStack_c0,auStack_e8);
    FUN_100e9e104(uVar2,uVar7,uVar9,uVar11,uVar4);
    uVar2 = uVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
    uVar11 = uVar12;
    uVar4 = uVar5;
  }
  else {
    if (uVar10 == 0) goto LAB_100ea0da0;
    if (((int)uVar2 == (int)uVar6) &&
       (((uVar7 == uVar8 && (uVar9 == uVar10)) ||
        (uVar3 = uVar7, func_0x000107c605b8(uVar7,uVar9,uVar8,uVar10,0), (uVar3 & 1) != 0)))) {
      FUN_100ea06bc(&uStack_90,auStack_e8);
      FUN_100ea06bc(&uStack_c0,auStack_e8);
      uVar3 = uVar11;
      FUN_100e25fcc(uVar11,uVar4,uVar12,uVar5);
      FUN_100e9e104(uVar6,uVar8,uVar10,uVar12,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_100ea0e5c;
    }
    else {
      FUN_100ea06bc(&uStack_90,auStack_e8);
      FUN_100ea06bc(&uStack_c0,auStack_e8);
      FUN_100e9e104(uVar6,uVar8,uVar10,uVar12,uVar5);
    }
  }
  FUN_100e9e104(uVar2,uVar7,uVar9,uVar11,uVar4);
  uVar1 = 0;
LAB_100ea0d78:
  return uVar1 & 1;
}



/* Entry: 100e9fdc8; end: 100e9fdf7;  */

undefined1  [16] FUN_100e9fdc8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 100e9fdf8; end: 100e9fe2b;  */

void FUN_100e9fdf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 100e9fe2c; end: 100e9fe3f;  */

undefined1  [16] FUN_100e9fe2c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100e9fe3c;
  return auVar1;
}



/* Entry: 100e9fe40; end: 100e9fe53;  */

void FUN_100e9fe40(void)

{
  FUN_100e9fabc();
  return;
}



/* Entry: 100e9fe54; end: 100e9fe9b;  */

void FUN_100e9fe54(void)

{
  FUN_100e9fbe8();
  return;
}



/* Entry: 100e9fe9c; end: 100e9fe9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100e9fe9c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 100e9fea0; end: 100e9fed7;  */

uint FUN_100e9fea0(long param_1,long param_2)

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
  func_0x000100ea1c4c();
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



/* Entry: 100e9fed8; end: 100e9ff3f;  */

uint FUN_100e9fed8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_100ea0c10(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 100e9ff40; end: 100e9ffdf;  */

/* WARNING: Possible PIC construction at 0x000100e9ff8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e9ff9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e9ff90) */
/* WARNING: Removing unreachable block (ram,0x000100e9ffa0) */

void FUN_100e9ff40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d46580 != -1) {
    func_0x000107c61568(0x112d46580,FUN_100e9fa74);
  }
  uVar5 = uRam00000001137feec8;
  uVar4 = uRam00000001137feec0;
  uVar3 = uRam00000001137feeb8;
  uVar2 = uRam00000001137feeb0;
  uVar1 = uRam00000001137feea8;
  *param_1 = uRam00000001137feea0;
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



/* Entry: 100e9ffe0; end: 100ea001b;  */

void FUN_100e9ffe0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d466c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d466c8,&UNK_10d90d910);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100ea001c; end: 100ea013f;  */

void FUN_100ea001c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 100ea0140; end: 100ea01ef;  */

uint FUN_100ea0140(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_100ea0c10(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 100ea01f0; end: 100ea028f;  */

/* WARNING: Possible PIC construction at 0x000100ea023c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea024c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea0240) */
/* WARNING: Removing unreachable block (ram,0x000100ea0250) */

void FUN_100ea01f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d46590 != -1) {
    func_0x000107c61568(0x112d46590,0x100ea01a8);
  }
  uVar5 = uRam00000001137feef8;
  uVar4 = uRam00000001137feef0;
  uVar3 = uRam00000001137feee8;
  uVar2 = uRam00000001137feee0;
  uVar1 = uRam00000001137feed8;
  *param_1 = uRam00000001137feed0;
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



/* Entry: 100ea0290; end: 100ea02d7;  */

void FUN_100ea0290(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d9f0,0x2d,2);
  uRam00000001137fef08 = uStack_38;
  uRam00000001137fef00 = uStack_40;
  uRam00000001137fef18 = uStack_28;
  uRam00000001137fef10 = uStack_30;
  uRam00000001137fef28 = uStack_18;
  uRam00000001137fef20 = uStack_20;
  return;
}



/* Entry: 100ea02d8; end: 100ea0377;  */

/* WARNING: Possible PIC construction at 0x000100ea0324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea0334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea0328) */
/* WARNING: Removing unreachable block (ram,0x000100ea0338) */

void FUN_100ea02d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d46598 != -1) {
    func_0x000107c61568(0x112d46598,FUN_100ea0290);
  }
  uVar5 = uRam00000001137fef28;
  uVar4 = uRam00000001137fef20;
  uVar3 = uRam00000001137fef18;
  uVar2 = uRam00000001137fef10;
  uVar1 = uRam00000001137fef08;
  *param_1 = uRam00000001137fef00;
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



/* Entry: 100ea0378; end: 100ea03bf;  */

void FUN_100ea0378(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d9b0,0x32,2);
  uRam00000001137fef38 = uStack_38;
  uRam00000001137fef30 = uStack_40;
  uRam00000001137fef48 = uStack_28;
  uRam00000001137fef40 = uStack_30;
  uRam00000001137fef58 = uStack_18;
  uRam00000001137fef50 = uStack_20;
  return;
}



/* Entry: 100ea03c0; end: 100ea045f;  */

/* WARNING: Possible PIC construction at 0x000100ea040c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea041c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea0410) */
/* WARNING: Removing unreachable block (ram,0x000100ea0420) */

void FUN_100ea03c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d465a0 != -1) {
    func_0x000107c61568(0x112d465a0,FUN_100ea0378);
  }
  uVar5 = uRam00000001137fef58;
  uVar4 = uRam00000001137fef50;
  uVar3 = uRam00000001137fef48;
  uVar2 = uRam00000001137fef40;
  uVar1 = uRam00000001137fef38;
  *param_1 = uRam00000001137fef30;
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



/* Entry: 100ea0460; end: 100ea04a7;  */

void FUN_100ea0460(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d970,0x33,2);
  uRam00000001137fef68 = uStack_38;
  uRam00000001137fef60 = uStack_40;
  uRam00000001137fef78 = uStack_28;
  uRam00000001137fef70 = uStack_30;
  uRam00000001137fef88 = uStack_18;
  uRam00000001137fef80 = uStack_20;
  return;
}



/* Entry: 100ea04a8; end: 100ea0547;  */

/* WARNING: Possible PIC construction at 0x000100ea04f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea0504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea04f8) */
/* WARNING: Removing unreachable block (ram,0x000100ea0508) */

void FUN_100ea04a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d465a8 != -1) {
    func_0x000107c61568(0x112d465a8,FUN_100ea0460);
  }
  uVar5 = uRam00000001137fef88;
  uVar4 = uRam00000001137fef80;
  uVar3 = uRam00000001137fef78;
  uVar2 = uRam00000001137fef70;
  uVar1 = uRam00000001137fef68;
  *param_1 = uRam00000001137fef60;
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



/* Entry: 100ea0548; end: 100ea058f;  */

void FUN_100ea0548(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d950,0x17,2);
  uRam00000001137fef98 = uStack_38;
  uRam00000001137fef90 = uStack_40;
  uRam00000001137fefa8 = uStack_28;
  uRam00000001137fefa0 = uStack_30;
  uRam00000001137fefb8 = uStack_18;
  uRam00000001137fefb0 = uStack_20;
  return;
}



/* Entry: 100ea0590; end: 100ea0627;  */

void FUN_100ea0590(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_100ea05e4:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000100ea0600;
  pcVar3 = *(code **)(param_3 + 0x48);
  goto LAB_100ea05cc;
code_r0x000100ea0600:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_100ea05cc:
    (*pcVar3)();
  }
  goto LAB_100ea05e4;
}



/* Entry: 100ea0628; end: 100ea06bb;  */

void FUN_100ea0628(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 == 0) ||
     ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = *(ulong *)(unaff_x20 + 4);
    uVar1 = *(ulong *)(unaff_x20 + 2) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 2),uVar2,2,param_2,param_3),
       unaff_x21 == 0)) {
      func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),
                          param_2,param_3);
    }
  }
  return;
}



/* Entry: 100ea06bc; end: 100ea070b;  */

undefined8 FUN_100ea06bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d46378;
  func_0x0001000285a8(0x112d46378,&UNK_10d90d100);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ea070c; end: 100ea074b;  */

void FUN_100ea070c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 8) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 100ea074c; end: 100ea077b;  */

undefined1  [16] FUN_100ea074c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 100ea077c; end: 100ea07af;  */

void FUN_100ea077c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 100ea07b0; end: 100ea07c3;  */

undefined1  [16] FUN_100ea07b0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x100ea07c0;
  return auVar1;
}



/* Entry: 100ea07c4; end: 100ea07eb;  */

void FUN_100ea07c4(void)

{
  FUN_100ea0590();
  return;
}



/* Entry: 100ea07ec; end: 100ea07ef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100ea07ec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 100ea07f0; end: 100ea0827;  */

uint FUN_100ea07f0(long param_1,long param_2)

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
  FUN_100ea1c0c();
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



/* Entry: 100ea0828; end: 100ea094f;  */

/* WARNING: Possible PIC construction at 0x000100ea086c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100ea0870) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_100ea0828(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  int *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  if (*unaff_x20 != *param_1) {
    return (byte *)0x0;
  }
  lVar23 = *(long *)(param_1 + 6);
  uVar15 = *(ulong *)(param_1 + 8);
  pbVar9 = *(byte **)(unaff_x20 + 6);
  pbVar24 = *(byte **)(unaff_x20 + 8);
  pbVar11 = *(byte **)(unaff_x20 + 2);
  pbVar13 = *(byte **)(unaff_x20 + 4);
  pbVar14 = *(byte **)(param_1 + 2);
  pbVar16 = *(byte **)(param_1 + 4);
  if (*(byte **)(unaff_x20 + 2) != *(byte **)(param_1 + 2) ||
      *(byte **)(unaff_x20 + 4) != *(byte **)(param_1 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar19 != uVar21) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar19 < 1) goto LAB_100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (int *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,uVar15)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(int **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar9 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(int **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 100ea0950; end: 100ea098b;  */

void FUN_100ea0950(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d466b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d466b8,&UNK_10d90d908);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100ea098c; end: 100ea0b27;  */

void FUN_100ea098c(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined8 *)(unaff_x20 + 2);
  uStack_48 = *(undefined8 *)(unaff_x20 + 4);
  uStack_38 = *(undefined8 *)(unaff_x20 + 8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 6);
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 100ea0b28; end: 100ea0b6f;  */

void FUN_100ea0b28(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d920,0x25,2);
  uRam00000001137fefc8 = uStack_38;
  uRam00000001137fefc0 = uStack_40;
  uRam00000001137fefd8 = uStack_28;
  uRam00000001137fefd0 = uStack_30;
  uRam00000001137fefe8 = uStack_18;
  uRam00000001137fefe0 = uStack_20;
  return;
}



/* Entry: 100ea0b70; end: 100ea0c0f;  */

/* WARNING: Possible PIC construction at 0x000100ea0bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea0bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea0bc0) */
/* WARNING: Removing unreachable block (ram,0x000100ea0bd0) */

void FUN_100ea0b70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d465c0 != -1) {
    func_0x000107c61568(0x112d465c0,FUN_100ea0b28);
  }
  uVar5 = uRam00000001137fefe8;
  uVar4 = uRam00000001137fefe0;
  uVar3 = uRam00000001137fefd8;
  uVar2 = uRam00000001137fefd0;
  uVar1 = uRam00000001137fefc8;
  *param_1 = uRam00000001137fefc0;
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



/* Entry: 100ea0c10; end: 100ea0e83;  */

uint FUN_100ea0c10(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_e8 [40];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if (((((uVar2 != *param_2 || param_1[1] != param_2[1]) &&
        (func_0x000107c605b8(), (uVar2 & 1) == 0)) || ((int)param_1[2] != (int)param_2[2])) ||
      ((*(int *)((long)param_1 + 0x14) != *(int *)((long)param_2 + 0x14) ||
       ((int)param_1[3] != (int)param_2[3])))) ||
     (*(int *)((long)param_1 + 0x1c) != *(int *)((long)param_2 + 0x1c))) {
    uVar1 = 0;
    goto LAB_100ea0d78;
  }
  uVar7 = param_1[7];
  uVar2 = param_1[6];
  uVar11 = param_1[9];
  uVar9 = param_1[8];
  uVar4 = param_1[10];
  uVar8 = param_2[7];
  uVar6 = param_2[6];
  uVar12 = param_2[9];
  uVar10 = param_2[8];
  uVar5 = param_2[10];
  uStack_c0 = uVar6;
  uStack_b8 = uVar8;
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar5;
  uStack_90 = uVar2;
  uStack_88 = uVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar4;
  if (uVar9 == 0) {
    if (uVar10 == 0) {
      FUN_100ea06bc(&uStack_90,auStack_e8);
      FUN_100ea06bc(&uStack_c0,auStack_e8);
LAB_100ea0e5c:
      FUN_100e9e104(uVar2,uVar7,uVar9,uVar11,uVar4);
      uVar2 = param_1[4];
      FUN_100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)uVar2;
      goto LAB_100ea0d78;
    }
LAB_100ea0da0:
    FUN_100ea06bc(&uStack_90,auStack_e8);
    FUN_100ea06bc(&uStack_c0,auStack_e8);
    FUN_100e9e104(uVar2,uVar7,uVar9,uVar11,uVar4);
    uVar2 = uVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
    uVar11 = uVar12;
    uVar4 = uVar5;
  }
  else {
    if (uVar10 == 0) goto LAB_100ea0da0;
    if (((int)uVar2 == (int)uVar6) &&
       (((uVar7 == uVar8 && (uVar9 == uVar10)) ||
        (uVar3 = uVar7, func_0x000107c605b8(uVar7,uVar9,uVar8,uVar10,0), (uVar3 & 1) != 0)))) {
      FUN_100ea06bc(&uStack_90,auStack_e8);
      FUN_100ea06bc(&uStack_c0,auStack_e8);
      uVar3 = uVar11;
      FUN_100e25fcc(uVar11,uVar4,uVar12,uVar5);
      FUN_100e9e104(uVar6,uVar8,uVar10,uVar12,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_100ea0e5c;
    }
    else {
      FUN_100ea06bc(&uStack_90,auStack_e8);
      FUN_100ea06bc(&uStack_c0,auStack_e8);
      FUN_100e9e104(uVar6,uVar8,uVar10,uVar12,uVar5);
    }
  }
  FUN_100e9e104(uVar2,uVar7,uVar9,uVar11,uVar4);
  uVar1 = 0;
LAB_100ea0d78:
  return uVar1 & 1;
}



/* Entry: 100ea0e84; end: 100ea0f03;  */

void FUN_100ea0e84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d6a0;
  func_0x000107c61520(&UNK_10d90d6a0,&UNK_110360070);
  puRam0000000112d46588 = puVar1;
  return;
}



/* Entry: 100ea0f04; end: 100ea0f17;  */

void FUN_100ea0f04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea0f18();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100ea0f58)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea0f18; end: 100ea0fc3;  */

void FUN_100ea0f18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d465c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d1c8;
  func_0x000107c61520(&UNK_10d90d1c8,&UNK_110360120);
  puRam0000000112d465c8 = puVar1;
  return;
}



/* Entry: 100ea0fc4; end: 100ea0fc7;  */

void FUN_100ea0fc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d465e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d208;
  func_0x000107c61520(&UNK_10d90d208,&UNK_110360120);
  puRam0000000112d465e8 = puVar1;
  return;
}



/* Entry: 100ea0fc8; end: 100ea1007;  */

void FUN_100ea0fc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d465e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d208;
  func_0x000107c61520(&UNK_10d90d208,&UNK_110360120);
  puRam0000000112d465e8 = puVar1;
  return;
}



/* Entry: 100ea1008; end: 100ea101b;  */

void FUN_100ea1008(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea101c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100ea105c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea101c; end: 100ea10c7;  */

void FUN_100ea101c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d465f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d2c8;
  func_0x000107c61520(&UNK_10d90d2c8,&UNK_1103601b0);
  puRam0000000112d465f0 = puVar1;
  return;
}



/* Entry: 100ea10c8; end: 100ea10cb;  */

void FUN_100ea10c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d308;
  func_0x000107c61520(&UNK_10d90d308,&UNK_1103601b0);
  puRam0000000112d46610 = puVar1;
  return;
}



/* Entry: 100ea10cc; end: 100ea110b;  */

void FUN_100ea10cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d308;
  func_0x000107c61520(&UNK_10d90d308,&UNK_1103601b0);
  puRam0000000112d46610 = puVar1;
  return;
}



/* Entry: 100ea110c; end: 100ea111f;  */

void FUN_100ea110c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea1120();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100ea1160)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea1120; end: 100ea11cb;  */

void FUN_100ea1120(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d3c8;
  func_0x000107c61520(&UNK_10d90d3c8,&UNK_110360240);
  puRam0000000112d46618 = puVar1;
  return;
}



/* Entry: 100ea11cc; end: 100ea11cf;  */

void FUN_100ea11cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d408;
  func_0x000107c61520(&UNK_10d90d408,&UNK_110360240);
  puRam0000000112d46638 = puVar1;
  return;
}



/* Entry: 100ea11d0; end: 100ea120f;  */

void FUN_100ea11d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d408;
  func_0x000107c61520(&UNK_10d90d408,&UNK_110360240);
  puRam0000000112d46638 = puVar1;
  return;
}



/* Entry: 100ea1210; end: 100ea1223;  */

void FUN_100ea1210(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea1224();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100ea1264)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea1224; end: 100ea12cf;  */

void FUN_100ea1224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d4c8;
  func_0x000107c61520(&UNK_10d90d4c8,&UNK_1103602d0);
  puRam0000000112d46640 = puVar1;
  return;
}



/* Entry: 100ea12d0; end: 100ea12d3;  */

void FUN_100ea12d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d508;
  func_0x000107c61520(&UNK_10d90d508,&UNK_1103602d0);
  puRam0000000112d46660 = puVar1;
  return;
}



/* Entry: 100ea12d4; end: 100ea1313;  */

void FUN_100ea12d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d508;
  func_0x000107c61520(&UNK_10d90d508,&UNK_1103602d0);
  puRam0000000112d46660 = puVar1;
  return;
}



/* Entry: 100ea1314; end: 100ea1327;  */

void FUN_100ea1314(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea1328();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100ea1368)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea1328; end: 100ea13d3;  */

void FUN_100ea1328(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d5c8;
  func_0x000107c61520(&UNK_10d90d5c8,&UNK_1103603e8);
  puRam0000000112d46668 = puVar1;
  return;
}



/* Entry: 100ea13d4; end: 100ea1417;  */

void FUN_100ea13d4(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100ea1418; end: 100ea141b;  */

void FUN_100ea1418(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d608;
  func_0x000107c61520(&UNK_10d90d608,&UNK_1103603e8);
  puRam0000000112d46688 = puVar1;
  return;
}



/* Entry: 100ea141c; end: 100ea145b;  */

void FUN_100ea141c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d608;
  func_0x000107c61520(&UNK_10d90d608,&UNK_1103603e8);
  puRam0000000112d46688 = puVar1;
  return;
}



/* Entry: 100ea145c; end: 100ea147f;  */

void FUN_100ea145c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea1480();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100ea1480; end: 100ea14bf;  */

void FUN_100ea1480(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d678;
  func_0x000107c61520(&UNK_10d90d678,&UNK_110360070);
  puRam0000000112d46690 = puVar1;
  return;
}



/* Entry: 100ea14c0; end: 100ea14d7;  */

void FUN_100ea14c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea0e84();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e9e57c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea14d8; end: 100ea1517;  */

void FUN_100ea14d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d6e0;
  func_0x000107c61520(&UNK_10d90d6e0,&UNK_110360070);
  puRam0000000112d46698 = puVar1;
  return;
}



/* Entry: 100ea1518; end: 100ea153b;  */

void FUN_100ea1518(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea153c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100ea153c; end: 100ea157b;  */

void FUN_100ea153c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d466a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d790;
  func_0x000107c61520(&UNK_10d90d790,&UNK_110360348);
  puRam0000000112d466a0 = puVar1;
  return;
}



/* Entry: 100ea157c; end: 100ea158f;  */

void FUN_100ea157c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x100ea0ec4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_100ea15c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea1590; end: 100ea15bf;  */

void FUN_100ea1590(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea15c0; end: 100ea15ff;  */

void FUN_100ea15c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d466a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d90d748;
  func_0x000107c61520(&DAT_10d90d748,&UNK_110360348);
  puRam0000000112d466a8 = puVar1;
  return;
}



/* Entry: 100ea1600; end: 100ea1603;  */

void FUN_100ea1600(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d466b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d7f8;
  func_0x000107c61520(&UNK_10d90d7f8,&UNK_110360348);
  puRam0000000112d466b0 = puVar1;
  return;
}



/* Entry: 100ea1604; end: 100ea1643;  */

void FUN_100ea1604(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d466b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90d7f8;
  func_0x000107c61520(&UNK_10d90d7f8,&UNK_110360348);
  puRam0000000112d466b0 = puVar1;
  return;
}



/* Entry: 100ea1644; end: 100ea168b;  */

/* WARNING: Possible PIC construction at 0x000100ea1660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea1664) */
/* WARNING: Removing unreachable block (ram,0x000100ea1680) */
/* WARNING: Removing unreachable block (ram,0x000100ea166c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100ea1644(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100ea168c; end: 100ea1863;  */

undefined8 * FUN_100ea168c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar3);
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  lVar1 = param_2[8];
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  else {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[7] = param_2[7];
    param_1[8] = lVar1;
    uVar2 = param_2[9];
    uVar3 = param_2[10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
  }
  return param_1;
}



/* Entry: 100ea1864; end: 100ea1927;  */

long FUN_100ea1864(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 100ea1928; end: 100ea1a23;  */

int FUN_100ea1928(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100ea1a24; end: 100ea1a4b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100ea1a24(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100ea1a4c; end: 100ea1b0b;  */

undefined4 * FUN_100ea1a4c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}


