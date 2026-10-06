/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c3d260; end: 101c3d29f;  */

long FUN_101c3d260(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 101c3d2a0; end: 101c3d2bb;  */

void FUN_101c3d2a0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 101c3d2bc; end: 101c3d2df;  */

void FUN_101c3d2bc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined1 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3d2e0,0,0);
  return;
}



/* Entry: 101c3d2e0; end: 101c3d44b;  */

/* WARNING: Removing unreachable block (ram,0x000101c3d37c) */

void FUN_101c3d2e0(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined1 *)(unaff_x22 + 200);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa0) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar7 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar7,uVar3);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  *(undefined1 *)(unaff_x22 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  FUN_101c38cd4();
  func_0x000100075890(unaff_x22 + 0x70,0,0,&UNK_11045a4a8,PTR___s10Foundation4DataVN_110350ae0,lVar7
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
  piVar10 = *(int **)(lVar5 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  plVar9 = plVar8;
  FUN_101c38dd0();
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101c3d44c;
                    /* WARNING: Could not recover jumptable at 0x000101c3d448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (unaff_x22 + 0x58,0xd000000000000055,0x800000010f004b40,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x98),&UNK_11045a528,plVar9,uVar3,lVar5);
  return;
}



/* Entry: 101c3d44c; end: 101c3d4bf;  */

void FUN_101c3d44c(void)

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
    pcVar2 = FUN_101c3d4c0;
  }
  else {
    pcVar2 = FUN_101c3d510;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3d4c0; end: 101c3d50f;  */

void FUN_101c3d4c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c3d50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar1,uVar2);
  return;
}



/* Entry: 101c3d510; end: 101c3d547;  */

void FUN_101c3d510(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c3d544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101c3d548; end: 101c3d563;  */

void FUN_101c3d548(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3d564,0,0);
  return;
}



/* Entry: 101c3d564; end: 101c3d6bb;  */

/* WARNING: Removing unreachable block (ram,0x000101c3d5f8) */

void FUN_101c3d564(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x40);
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
  FUN_101c38ecc();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_11045a5a8,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  FUN_101c38fc8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c3d6bc;
                    /* WARNING: Could not recover jumptable at 0x000101c3d6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000051,0x800000010f004ba0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_11045a6b8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 101c3d6bc; end: 101c3d72f;  */

void FUN_101c3d6bc(void)

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
    pcVar2 = FUN_101c3d730;
  }
  else {
    pcVar2 = FUN_101c3d770;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3d730; end: 101c3d76f;  */

void FUN_101c3d730(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000101c3d76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 101c3d770; end: 101c3d7a3;  */

void FUN_101c3d770(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000101c3d7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3d7a4; end: 101c3d7c7;  */

void FUN_101c3d7a4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined1 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3d7c8,0,0);
  return;
}



/* Entry: 101c3d7c8; end: 101c3d92f;  */

/* WARNING: Removing unreachable block (ram,0x000101c3d864) */

void FUN_101c3d7c8(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined1 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar7 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar7,uVar3);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  *(undefined1 *)(unaff_x22 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  FUN_101c390c4();
  func_0x000100075890(unaff_x22 + 0x68,0,0,&UNK_11045a738,PTR___s10Foundation4DataVN_110350ae0,lVar7
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  piVar10 = *(int **)(lVar5 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar8;
  plVar9 = plVar8;
  FUN_101c391c0();
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101c3d930;
                    /* WARNING: Could not recover jumptable at 0x000101c3d92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (unaff_x22 + 0x58,0xd000000000000053,0x800000010f004c00,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_11045a7b8,plVar9,uVar3,lVar5);
  return;
}



/* Entry: 101c3d930; end: 101c3d9a3;  */

void FUN_101c3d930(void)

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
    pcVar2 = FUN_101c3d9a4;
  }
  else {
    pcVar2 = FUN_101c3d9e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3d9a4; end: 101c3d9e3;  */

void FUN_101c3d9a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c3d9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 101c3d9e4; end: 101c3da17;  */

void FUN_101c3d9e4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c3da14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3da18; end: 101c3da3b;  */

void FUN_101c3da18(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1e0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_5;
  *(undefined1 *)(unaff_x22 + 0x208) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3da3c,0,0);
  return;
}



/* Entry: 101c3da3c; end: 101c3db97;  */

/* WARNING: Removing unreachable block (ram,0x000101c3dad4) */

void FUN_101c3da3c(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x208);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1e0) + 0x10,unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar5 = *(long *)(unaff_x22 + 0x180);
  lVar7 = unaff_x22 + 0x160;
  func_0x0001000a8868(lVar7,uVar3);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar11;
  *(undefined1 *)(unaff_x22 + 400) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar4;
  FUN_101c392bc();
  func_0x000100075890(unaff_x22 + 0x1a8,0,0,&UNK_11045a838,PTR___s10Foundation4DataVN_110350ae0,
                      lVar7,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar4;
  piVar10 = *(int **)(lVar5 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f8) = plVar8;
  plVar9 = plVar8;
  FUN_101c393b8();
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101c3db98;
                    /* WARNING: Could not recover jumptable at 0x000101c3db94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (unaff_x22 + 0x10,0xd00000000000004d,0x800000010f004c60,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x1d8),&UNK_11045a8b8,plVar9,uVar3,lVar5);
  return;
}



/* Entry: 101c3db98; end: 101c3dc03;  */

void FUN_101c3db98(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1e8),*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = FUN_101c3dc04;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1e8),*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = FUN_101c3dcbc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c3dc04; end: 101c3dcbb;  */

void FUN_101c3dc04(void)

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
  
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000834e4(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar1[3] = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar1[2] = uVar4;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[0xb] = *(undefined8 *)(unaff_x22 + 0x110);
  puVar1[10] = uVar6;
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[9] = uVar5;
  puVar1[8] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar1[0x14] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0x11] = uVar5;
  puVar1[0x10] = uVar4;
  puVar1[0x13] = uVar7;
  puVar1[0x12] = uVar6;
  puVar1[0xf] = uVar3;
  puVar1[0xe] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101c3dcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3dcbc; end: 101c3dcef;  */

void FUN_101c3dcbc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x160);
                    /* WARNING: Could not recover jumptable at 0x000101c3dcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3dcf0; end: 101c3dd0b;  */

void FUN_101c3dcf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3dd0c,0,0);
  return;
}



/* Entry: 101c3dd0c; end: 101c3de67;  */

/* WARNING: Removing unreachable block (ram,0x000101c3dda4) */

void FUN_101c3dd0c(void)

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
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  uVar7 = puVar9[4];
  uVar12 = *puVar9;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x40) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar7;
  FUN_101c394b4();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_11045a940,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  FUN_101c395b0();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c3de68;
                    /* WARNING: Could not recover jumptable at 0x000101c3de64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x60,0xd000000000000050,0x800000010f004cb0,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_11045a9c8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 101c3de68; end: 101c3dedb;  */

void FUN_101c3de68(void)

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
    uVar1 = 0x101c3ed70;
  }
  else {
    uVar1 = 0x101c3ed6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101c3dedc; end: 101c3def7;  */

void FUN_101c3dedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3def8,0,0);
  return;
}



/* Entry: 101c3def8; end: 101c3e053;  */

/* WARNING: Removing unreachable block (ram,0x000101c3df90) */

void FUN_101c3def8(void)

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
  FUN_101c396ac();
  func_0x000100075890(unaff_x22 + 0xa0,0,0,&UNK_11045aa48,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  FUN_101c397a8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c3e054;
                    /* WARNING: Could not recover jumptable at 0x000101c3e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000004c,0x800000010f004d10,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xc0),&UNK_11045aad0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 101c3e054; end: 101c3e0c7;  */

void FUN_101c3e054(void)

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
    pcVar2 = FUN_101c3e0c8;
  }
  else {
    pcVar2 = FUN_101c3e140;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3e0c8; end: 101c3e13f;  */

void FUN_101c3e0c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  puVar7 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x78);
  *puVar7 = uVar1;
  puVar7[1] = uVar3;
  *(undefined1 *)(puVar7 + 2) = uVar5;
  puVar7[3] = uVar8;
  *(undefined1 *)(puVar7 + 4) = uVar6;
  puVar7[5] = uVar2;
  puVar7[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000101c3e13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3e140; end: 101c3e173;  */

void FUN_101c3e140(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000101c3e170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3e174; end: 101c3e18f;  */

void FUN_101c3e174(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3e190,0,0);
  return;
}



/* Entry: 101c3e190; end: 101c3e2ef;  */

/* WARNING: Removing unreachable block (ram,0x000101c3e22c) */

void FUN_101c3e190(void)

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
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xd8) + 0x10,unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  lVar4 = unaff_x22 + 0x70;
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
  FUN_101c398a4();
  func_0x000100075890(unaff_x22 + 0xb8,0,0,&UNK_11045ab58,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar5;
  plVar6 = plVar5;
  FUN_101c399a0();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c3e2f0;
                    /* WARNING: Could not recover jumptable at 0x000101c3e2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x98,0xd000000000000052,0x800000010f004d60,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xd0),&UNK_11045abe8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 101c3e2f0; end: 101c3e363;  */

void FUN_101c3e2f0(void)

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
    pcVar2 = FUN_101c3e364;
  }
  else {
    pcVar2 = FUN_101c3e3bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3e364; end: 101c3e3bb;  */

void FUN_101c3e364(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xa0);
  func_0x0001000834e4(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000101c3e3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 101c3e3bc; end: 101c3e3ef;  */

void FUN_101c3e3bc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000101c3e3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3e3f0; end: 101c3e413;  */

void FUN_101c3e3f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3e414,0,0);
  return;
}



/* Entry: 101c3e414; end: 101c3e57f;  */

/* WARNING: Removing unreachable block (ram,0x000101c3e4b0) */

void FUN_101c3e414(void)

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
  FUN_101c39a9c();
  func_0x000100075890(unaff_x22 + 0xd8,0,0,&UNK_11045ac68,PTR___s10Foundation4DataVN_110350ae0,lVar7
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
  FUN_101c39b98();
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101c3e580;
                    /* WARNING: Could not recover jumptable at 0x000101c3e57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (unaff_x22 + 0x10,0xd00000000000004e,0x800000010f004dc0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x108),&UNK_11045ace8,plVar9,uVar3,lVar5);
  return;
}



/* Entry: 101c3e580; end: 101c3e5eb;  */

void FUN_101c3e580(void)

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
    pcVar1 = FUN_101c3e5ec;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
    pcVar1 = (code *)0x101c3e644;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c3e5ec; end: 101c3e677;  */

void FUN_101c3e5ec(void)

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
                    /* WARNING: Could not recover jumptable at 0x000101c3e640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3e678; end: 101c3e693;  */

void FUN_101c3e678(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3e694,0,0);
  return;
}



/* Entry: 101c3e694; end: 101c3e7eb;  */

/* WARNING: Removing unreachable block (ram,0x000101c3e728) */

void FUN_101c3e694(void)

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
  FUN_101c39c94();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_11045ad78,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  FUN_101c39d90();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c3e7ec;
                    /* WARNING: Could not recover jumptable at 0x000101c3e7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd00000000000004f,0x800000010f004e10,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_11045ae08,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 101c3e7ec; end: 101c3e85f;  */

void FUN_101c3e7ec(void)

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
    pcVar2 = FUN_101c3e860;
  }
  else {
    pcVar2 = FUN_101c3e8a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3e860; end: 101c3e89f;  */

void FUN_101c3e860(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000101c3e89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 101c3e8a0; end: 101c3e8d3;  */

void FUN_101c3e8a0(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000101c3e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3e8d4; end: 101c3e8f7;  */

void FUN_101c3e8d4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined1 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3e8f8,0,0);
  return;
}



/* Entry: 101c3e8f8; end: 101c3ea5f;  */

/* WARNING: Removing unreachable block (ram,0x000101c3e994) */

void FUN_101c3e8f8(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined1 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar7 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar7,uVar3);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  *(undefined1 *)(unaff_x22 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  FUN_101c39e8c();
  func_0x000100075890(unaff_x22 + 0x68,0,0,&UNK_11045ae88,PTR___s10Foundation4DataVN_110350ae0,lVar7
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  piVar10 = *(int **)(lVar5 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar8;
  plVar9 = plVar8;
  FUN_101c39f88();
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101c3ea60;
                    /* WARNING: Could not recover jumptable at 0x000101c3ea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))
            (unaff_x22 + 0x58,0xd000000000000054,0x800000010f004e60,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_11045af08,plVar9,uVar3,lVar5);
  return;
}



/* Entry: 101c3ea60; end: 101c3ead3;  */

void FUN_101c3ea60(void)

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
    pcVar2 = (code *)0x101c3ed74;
  }
  else {
    pcVar2 = FUN_101c3ed68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3ead4; end: 101c3eaef;  */

void FUN_101c3ead4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c3eaf0,0,0);
  return;
}



/* Entry: 101c3eaf0; end: 101c3ec4b;  */

/* WARNING: Removing unreachable block (ram,0x000101c3eb88) */

void FUN_101c3eaf0(void)

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
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x98) + 0x10,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  uVar7 = puVar9[4];
  uVar12 = *puVar9;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x40) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar7;
  FUN_101c3a084();
  func_0x000100075890(unaff_x22 + 0x78,0,0,&UNK_11045af88,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar10;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  plVar6 = plVar5;
  FUN_101c3a180();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c3ec4c;
                    /* WARNING: Could not recover jumptable at 0x000101c3ec48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x60,0xd000000000000056,0x800000010f004ec0,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0x90),&UNK_11045b010,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 101c3ec4c; end: 101c3ecbf;  */

void FUN_101c3ec4c(void)

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
    pcVar2 = FUN_101c3ecc0;
  }
  else {
    pcVar2 = FUN_101c3ed10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c3ecc0; end: 101c3ed0f;  */

void FUN_101c3ecc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c3ed0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c3ed10; end: 101c3ed67;  */

void FUN_101c3ed10(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c3ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3ed68; end: 101c3ed87;  */

void FUN_101c3ed68(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c3da14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c3ed88; end: 101c3edb7;  */

void FUN_101c3ed88(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_101c42d98();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101c3edb8; end: 101c3edbf;  */

undefined8 FUN_101c3edb8(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101c3edc0; end: 101c3ee33;  */

void FUN_101c3edc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e0adf8;
  func_0x0001000285a8(0x112e0adf8,&UNK_10d9e3a90);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101c3ee34; end: 101c3ee3f;  */

void FUN_101c3ee34(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101c3ee40; end: 101c3eeeb;  */

void FUN_101c3ee40(void)

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



/* Entry: 101c3eeec; end: 101c3eeff;  */

bool FUN_101c3eeec(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c3ef00; end: 101c3ef47;  */

void FUN_101c3ef00(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e4200,0x46,2);
  uRam0000000113804320 = uStack_38;
  uRam0000000113804318 = uStack_40;
  uRam0000000113804330 = uStack_28;
  uRam0000000113804328 = uStack_30;
  uRam0000000113804340 = uStack_18;
  uRam0000000113804338 = uStack_20;
  return;
}



/* Entry: 101c3ef48; end: 101c3efe7;  */

/* WARNING: Possible PIC construction at 0x000101c3ef94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c3efa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c3ef98) */
/* WARNING: Removing unreachable block (ram,0x000101c3efa8) */

void FUN_101c3ef48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0ae40 != -1) {
    func_0x000107c61568(0x112e0ae40,FUN_101c3ef00);
  }
  uVar5 = uRam0000000113804340;
  uVar4 = uRam0000000113804338;
  uVar3 = uRam0000000113804330;
  uVar2 = uRam0000000113804328;
  uVar1 = uRam0000000113804320;
  *param_1 = uRam0000000113804318;
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



/* Entry: 101c3efe8; end: 101c3f02f;  */

void FUN_101c3efe8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e41c0,0x3e,2);
  uRam0000000113804350 = uStack_38;
  uRam0000000113804348 = uStack_40;
  uRam0000000113804360 = uStack_28;
  uRam0000000113804358 = uStack_30;
  uRam0000000113804370 = uStack_18;
  uRam0000000113804368 = uStack_20;
  return;
}



/* Entry: 101c3f030; end: 101c3f0fb;  */

void FUN_101c3f030(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101c3f0c8;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101c3f0c8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 4) goto LAB_101c3f0d8;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_101c3f0c8:
        (*pcVar3)();
      }
LAB_101c3f0d8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c3f0fc; end: 101c3f1ff;  */

void FUN_101c3f0fc(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[7];
        uVar1 = unaff_x20[6] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
          func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 101c3f200; end: 101c3f247;  */

void FUN_101c3f200(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}



/* Entry: 101c3f248; end: 101c3f277;  */

undefined1  [16] FUN_101c3f248(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 101c3f278; end: 101c3f2ab;  */

void FUN_101c3f278(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 101c3f2ac; end: 101c3f2bf;  */

undefined1  [16] FUN_101c3f2ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x101c3f2bc;
  return auVar1;
}



/* Entry: 101c3f2c0; end: 101c3f2e7;  */

void FUN_101c3f2c0(void)

{
  FUN_101c3f030();
  return;
}



/* Entry: 101c3f2e8; end: 101c3f2eb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c3f2e8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c3f2ec; end: 101c3f323;  */

uint FUN_101c3f2ec(long param_1,long param_2)

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
  func_0x000101c44d30();
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



/* Entry: 101c3f324; end: 101c3f37b;  */

uint FUN_101c3f324(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_101c43c60(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101c3f37c; end: 101c3f41b;  */

/* WARNING: Possible PIC construction at 0x000101c3f3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c3f3d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c3f3cc) */
/* WARNING: Removing unreachable block (ram,0x000101c3f3dc) */

void FUN_101c3f37c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0ae48 != -1) {
    func_0x000107c61568(0x112e0ae48,FUN_101c3efe8);
  }
  uVar5 = uRam0000000113804370;
  uVar4 = uRam0000000113804368;
  uVar3 = uRam0000000113804360;
  uVar2 = uRam0000000113804358;
  uVar1 = uRam0000000113804350;
  *param_1 = uRam0000000113804348;
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



/* Entry: 101c3f41c; end: 101c3f457;  */

void FUN_101c3f41c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b258;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b258,&UNK_10d9e4010);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c3f458; end: 101c3f56b;  */

void FUN_101c3f458(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c3f56c; end: 101c3f60b;  */

uint FUN_101c3f56c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_101c43c60(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101c3f60c; end: 101c3f70f;  */

/* WARNING: Removing unreachable block (ram,0x000101c3f700) */

void FUN_101c3f60c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x90);
        }
        else {
          if (lVar1 != 2) goto LAB_101c3f684;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_101c3f674:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101c3f674;
        }
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x000101c44db0();
          (*pcVar3)(unaff_x20 + 0x38,&UNK_11045bbb8,lVar1,param_2,param_3);
        }
      }
LAB_101c3f684:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c3f710; end: 101c3f7eb;  */

void FUN_101c3f710(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 == 0) ||
     ((**(code **)(param_3 + 0x30))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[1] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[4];
      uVar1 = unaff_x20[3] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (((uVar1 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,3,param_2,param_3), unaff_x21 == 0)) &&
         (FUN_101c3f7ec(), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 101c3f7ec; end: 101c3f88b;  */

void FUN_101c3f7ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_90 = *(long *)(param_1 + 0x40);
  if (lStack_90 != 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101c44db0();
    (*pcVar1)(&uStack_98,4,&UNK_11045bbb8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101c3f88c; end: 101c3f8eb;  */

void FUN_101c3f88c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 101c3f8ec; end: 101c3f91b;  */

undefined1  [16] FUN_101c3f8ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 101c3f91c; end: 101c3f94f;  */

void FUN_101c3f91c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 101c3f950; end: 101c3f963;  */

undefined1  [16] FUN_101c3f950(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x101c3f960;
  return auVar1;
}



/* Entry: 101c3f964; end: 101c3f977;  */

void FUN_101c3f964(void)

{
  FUN_101c3f60c();
  return;
}



/* Entry: 101c3f978; end: 101c3f9c7;  */

void FUN_101c3f978(void)

{
  FUN_101c3f710();
  return;
}



/* Entry: 101c3f9c8; end: 101c3f9cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c3f9c8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c3f9cc; end: 101c3fa03;  */

uint FUN_101c3f9cc(long param_1,long param_2)

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
  func_0x000101c44cf0();
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



/* Entry: 101c3fa04; end: 101c3fa83;  */

uint FUN_101c3fa04(undefined8 *param_1)

{
  uint uVar1;
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
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_28 = param_1[0x11];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[0x11];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_101c43930(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 101c3fa84; end: 101c3fb23;  */

/* WARNING: Possible PIC construction at 0x000101c3fad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c3fae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c3fad4) */
/* WARNING: Removing unreachable block (ram,0x000101c3fae4) */

void FUN_101c3fa84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0ae58 != -1) {
    func_0x000107c61568(0x112e0ae58,0x101c3f5c4);
  }
  uVar5 = uRam00000001138043a0;
  uVar4 = uRam0000000113804398;
  uVar3 = uRam0000000113804390;
  uVar2 = uRam0000000113804388;
  uVar1 = uRam0000000113804380;
  *param_1 = uRam0000000113804378;
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



/* Entry: 101c3fb24; end: 101c3fb5f;  */

void FUN_101c3fb24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b248;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b248,&UNK_10d9e4008);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c3fb60; end: 101c3fc9b;  */

void FUN_101c3fb60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c3fc9c; end: 101c3fd1b;  */

uint FUN_101c3fc9c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_28 = param_2[0x11];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_101c43930(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 101c3fd1c; end: 101c3fd63;  */

void FUN_101c3fd1c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e4020,0x167,2);
  uRam00000001138043b0 = uStack_38;
  uRam00000001138043a8 = uStack_40;
  uRam00000001138043c0 = uStack_28;
  uRam00000001138043b8 = uStack_30;
  uRam00000001138043d0 = uStack_18;
  uRam00000001138043c8 = uStack_20;
  return;
}



/* Entry: 101c3fd64; end: 101c3fea3;  */

void FUN_101c3fd64(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101c42dd8();
  func_0x000107c613fc();
  func_0x000101c3fda0();
  uRam0000000112e0ae38 = uVar1;
  return;
}



/* Entry: 101c3fea4; end: 101c3ffcb;  */

void FUN_101c3fea4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000101c437f8(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_101c44bdc(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                *(undefined8 *)(unaff_x20 + 0xd8));
  FUN_101c44bdc(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000101c44c48(*(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1c0));
  FUN_101c438f0(unaff_x20 + 0x1c8,0x112e0ae20,&UNK_10d9e3ab8);
  FUN_101c44bdc(*(undefined8 *)(unaff_x20 + 0x260),*(undefined8 *)(unaff_x20 + 0x268),
                *(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278),
                *(undefined8 *)(unaff_x20 + 0x280),*(undefined8 *)(unaff_x20 + 0x288),
                *(undefined8 *)(unaff_x20 + 0x290),*(undefined8 *)(unaff_x20 + 0x298),
                *(undefined8 *)(unaff_x20 + 0x2a0),*(undefined8 *)(unaff_x20 + 0x2a8),
                *(undefined8 *)(unaff_x20 + 0x2b0));
  return;
}



/* Entry: 101c3ffcc; end: 101c4006f;  */

void FUN_101c3ffcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    FUN_101c42dd8(0);
    func_0x000107c613fc();
    FUN_101c42df8();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  FUN_101c40070(uVar3,param_1,param_2,param_3);
  return;
}



/* Entry: 101c40070; end: 101c4040f;  */

/* WARNING: Removing unreachable block (ram,0x000101c402e8) */
/* WARNING: Removing unreachable block (ram,0x000101c40284) */
/* WARNING: Removing unreachable block (ram,0x000101c403f0) */
/* WARNING: Removing unreachable block (ram,0x000101c40304) */
/* WARNING: Removing unreachable block (ram,0x000101c403b0) */
/* WARNING: Removing unreachable block (ram,0x000101c40268) */
/* WARNING: Removing unreachable block (ram,0x000101c4040c) */

void FUN_101c40070(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x90);
        lVar2 = param_1 + 0x10;
        break;
      case 2:
        func_0x000107c61428(param_1 + 0x18,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x18;
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x28,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x28;
        break;
      case 4:
        func_0x000107c61428(param_1 + 0x38,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x38;
        break;
      default:
        goto LAB_101c4011c;
      case 7:
        func_0x000107c61428(param_1 + 0x48,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x90);
        lVar2 = param_1 + 0x48;
        break;
      case 8:
        FUN_101c40410(param_2,param_1,param_3,param_4);
        goto LAB_101c4011c;
      case 9:
        func_0x000107c61428(param_1 + 0x78,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x78;
        break;
      case 10:
        FUN_101c404a4(param_2,param_1,param_3,param_4);
        goto LAB_101c4011c;
      case 0xb:
        FUN_101c40538(param_2,param_1,param_3,param_4);
        goto LAB_101c4011c;
      case 0xc:
        func_0x000107c61428(param_1 + 0x138,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x138;
        break;
      case 0xd:
        func_0x000107c61428(param_1 + 0x13c,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x78);
        lVar2 = param_1 + 0x13c;
        break;
      case 0xe:
        FUN_101c405cc(param_2,param_1,param_3,param_4);
        goto LAB_101c4011c;
      case 0x10:
        func_0x000107c61428(param_1 + 0x150,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x150;
        break;
      case 0x11:
        func_0x000107c61428(param_1 + 0x160,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x160;
        break;
      case 0x12:
        FUN_101c40660(param_2,param_1,param_3,param_4);
        goto LAB_101c4011c;
      case 0x13:
        func_0x000107c61428(param_1 + 0x1b8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x1b8;
        break;
      case 0x14:
        FUN_101c406f4(param_2,param_1,param_3,param_4);
        goto LAB_101c4011c;
      case 0x15:
        func_0x000107c61428(param_1 + 600,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 600;
        break;
      case 0x16:
        func_0x000107c61428(param_1 + 0x259,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x259;
        break;
      case 0x17:
        func_0x000107c61428(param_1 + 0x25a,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x25a;
        break;
      case 0x18:
        FUN_101c40788(param_2,param_1,param_3,param_4);
        goto LAB_101c4011c;
      case 0x19:
        func_0x000107c61428(param_1 + 0x2b8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x2b8;
      }
      (*pcVar3)(lVar2,param_3,param_4);
      func_0x000107c614a8(auStack_68);
LAB_101c4011c:
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c40410; end: 101c404a3;  */

void FUN_101c40410(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x50;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101c44df0();
  (*pcVar2)(param_2 + 0x50,&UNK_11045b830,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c404a4; end: 101c40537;  */

void FUN_101c404a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101c44db0();
  (*pcVar2)(param_2 + 0x88,&UNK_11045bbb8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c40538; end: 101c405cb;  */

void FUN_101c40538(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101c44db0();
  (*pcVar2)(param_2 + 0xe0,&UNK_11045bbb8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


