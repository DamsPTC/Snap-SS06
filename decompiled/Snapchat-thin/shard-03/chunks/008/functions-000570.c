/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102de47b8; end: 102de4807;  */

void FUN_102de47b8(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102de4808;
  *(undefined1 *)(plVar2 + 0xd) = param_1;
  plVar1 = (long *)0x150;
  func_0x000107c615b8();
  plVar2[8] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x102de22d0;
  plVar1[0x20] = (long)(plVar2 + 2);
  plVar1[0x21] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar1[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x24] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de4808; end: 102de4843;  */

void FUN_102de4808(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de4840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de4844; end: 102de48eb;  */

void FUN_102de4844(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de4e68;
  plVar3[0x16] = lVar5;
  plVar3[0x17] = unaff_x20 + 0x28;
  plVar3[0x14] = lVar4;
  plVar3[0x15] = lVar1;
  plVar3[0x12] = param_4;
  plVar3[0x13] = param_5;
  *(undefined1 *)(plVar3 + 0x34) = param_3;
  plVar3[0x10] = param_1;
  plVar3[0x11] = param_2;
  lVar4 = *(long *)(unaff_x20 + 0x40);
  plVar3[0x18] = *(long *)(unaff_x20 + 0x30);
  plVar3[0x19] = lVar4;
  plVar3[0x1a] = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar3[0x1b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x1c] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1d] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2548,0,0);
  return;
}



/* Entry: 102de48ec; end: 102de497b;  */

void FUN_102de48ec(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102de4e6c;
  plVar4[0xe] = lVar1;
  plVar4[0xf] = lVar5;
  plVar4[0xc] = param_4;
  plVar4[0xd] = lVar2;
  plVar4[10] = param_2;
  plVar4[0xb] = param_3;
  plVar4[9] = param_1;
  lVar2 = 0;
  func_0x000107c5fcbc();
  plVar4[0x10] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x11] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x12] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de37fc,0,0);
  return;
}



/* Entry: 102de497c; end: 102de49cb;  */

void FUN_102de497c(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de4e70;
  *(undefined1 *)(plVar2 + 0xd) = param_1;
  plVar1 = (long *)0x150;
  func_0x000107c615b8();
  plVar2[8] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x102de22d0;
  plVar1[0x20] = (long)(plVar2 + 2);
  plVar1[0x21] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar1[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x24] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de49cc; end: 102de4a17;  */

void FUN_102de49cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102de4a18; end: 102de4abf;  */

void FUN_102de4a18(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de4e74;
  plVar3[0x16] = lVar5;
  plVar3[0x17] = unaff_x20 + 0x28;
  plVar3[0x14] = lVar4;
  plVar3[0x15] = lVar1;
  plVar3[0x12] = param_4;
  plVar3[0x13] = param_5;
  *(undefined1 *)(plVar3 + 0x34) = param_3;
  plVar3[0x10] = param_1;
  plVar3[0x11] = param_2;
  lVar4 = *(long *)(unaff_x20 + 0x40);
  plVar3[0x18] = *(long *)(unaff_x20 + 0x30);
  plVar3[0x19] = lVar4;
  plVar3[0x1a] = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar3[0x1b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x1c] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1d] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2548,0,0);
  return;
}



/* Entry: 102de4ac0; end: 102de4aeb;  */

void FUN_102de4ac0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102de4aec; end: 102de4b7b;  */

void FUN_102de4aec(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102de4e78;
  plVar4[0xe] = lVar1;
  plVar4[0xf] = lVar5;
  plVar4[0xc] = param_4;
  plVar4[0xd] = lVar2;
  plVar4[10] = param_2;
  plVar4[0xb] = param_3;
  plVar4[9] = param_1;
  lVar2 = 0;
  func_0x000107c5fcbc();
  plVar4[0x10] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x11] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x12] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de37fc,0,0);
  return;
}



/* Entry: 102de4b7c; end: 102de4bb7;  */

/* WARNING: Possible PIC construction at 0x000102de4b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102de4b9c) */

void FUN_102de4b7c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102de4bb8; end: 102de4c2f;  */

void FUN_102de4bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102de4e7c;
  piVar2 = *(int **)(param_1 + 0x20);
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar6[2] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = 0x102de4e64;
                    /* WARNING: Could not recover jumptable at 0x000102de42a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4,param_2,param_3);
  return;
}



/* Entry: 102de4c30; end: 102de4ca3;  */

void FUN_102de4c30(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102de4e84;
  plVar4[0xd] = lVar2;
  plVar4[0xe] = lVar7;
  plVar4[0xc] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[0xf] = lVar2;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar2;
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  plVar4[0x11] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102de449c;
  plVar3[0x20] = (long)(plVar4 + 2);
  plVar3[0x21] = lVar5;
  lVar5 = 0;
  func_0x000107c5eec8();
  plVar3[0x22] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[0x23] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x24] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de4ca4; end: 102de4cf3;  */

void FUN_102de4ca4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e55c38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e55c30;
  func_0x00010002969c(0x112e55c30,&UNK_10db509e0);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112e55c38 = puVar2;
  return;
}



/* Entry: 102de4cf4; end: 102de4d73;  */

void FUN_102de4cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  plVar7 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102de4e80;
  piVar2 = *(int **)(param_1 + 0x10);
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar7[2] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_102de3754;
                    /* WARNING: Could not recover jumptable at 0x000102de3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4,uVar5,param_2,param_3);
  return;
}



/* Entry: 102de4d74; end: 102de4daf;  */

void FUN_102de4d74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102de4db0; end: 102de4e23;  */

void FUN_102de4db0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102de4e24;
  plVar4[0xd] = lVar2;
  plVar4[0xe] = lVar7;
  plVar4[0xc] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[0xf] = lVar2;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar2;
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  plVar4[0x11] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102de449c;
  plVar3[0x20] = (long)(plVar4 + 2);
  plVar3[0x21] = lVar5;
  lVar5 = 0;
  func_0x000107c5eec8();
  plVar3[0x22] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[0x23] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x24] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de4e24; end: 102de4e5f;  */

void FUN_102de4e24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de4e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de4e60; end: 102de4e87;  */

void FUN_102de4e60(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de4e88; end: 102de502f;  */

void FUN_102de4e88(void)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x74616863;
  if (cVar3 != '\x01') {
    uVar4 = 0x70616e73;
  }
  uVar1 = 0x747065636361;
  if (cVar3 != '\0') {
    uVar1 = (ulong)uVar4;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\0') {
    uVar2 = 0xe400000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102de5030; end: 102de507b;  */

void FUN_102de5030(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x74616863;
  if (cVar3 != '\x01') {
    uVar4 = 0x70616e73;
  }
  uVar1 = 0x747065636361;
  if (cVar3 != '\0') {
    uVar1 = (ulong)uVar4;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\0') {
    uVar2 = 0xe400000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102de507c; end: 102de52bf;  */

void FUN_102de507c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar5 = 0xe900000000000064;
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6572756c696166;
  if (bVar3 != 2) {
    uVar1 = 0x656c6c65636e6163;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar4 = 0x6574706d65747461;
  if (bVar3 != 0) {
    uVar5 = 0xe700000000000000;
    uVar4 = 0x73736563637573;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102de52c0; end: 102de533f;  */

void FUN_102de52c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  uVar5 = 0xe900000000000064;
  bVar3 = *unaff_x20;
  uVar1 = 0x6572756c696166;
  if (bVar3 != 2) {
    uVar1 = 0x656c6c65636e6163;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar4 = 0x6574706d65747461;
  if (bVar3 != 0) {
    uVar5 = 0xe700000000000000;
    uVar4 = 0x73736563637573;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102de5340; end: 102de54a3;  */

void FUN_102de5340(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6465727265666564;
  if (cVar3 != '\x01') {
    uVar1 = 0x74616964656d6d69;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe900000000000065;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102de54a4; end: 102de551b;  */

void FUN_102de54a4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102de551c; end: 102de5563;  */

void FUN_102de551c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x6465727265666564;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x74616964656d6d69;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000065;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102de5564; end: 102de562b;  */

ulong FUN_102de5564(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102de562c; end: 102de562f;  */

void FUN_102de562c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f199b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50a90;
  func_0x000107c61520(&UNK_10db50a90,&UNK_1105d36d0);
  puRam0000000112f199b0 = puVar1;
  return;
}



/* Entry: 102de5630; end: 102de566f;  */

void FUN_102de5630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f199b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50a90;
  func_0x000107c61520(&UNK_10db50a90,&UNK_1105d36d0);
  puRam0000000112f199b0 = puVar1;
  return;
}



/* Entry: 102de5670; end: 102de5673;  */

void FUN_102de5670(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f199b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50b30;
  func_0x000107c61520(&UNK_10db50b30,&UNK_1105d3760);
  puRam0000000112f199b8 = puVar1;
  return;
}



/* Entry: 102de5674; end: 102de56b3;  */

void FUN_102de5674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f199b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50b30;
  func_0x000107c61520(&UNK_10db50b30,&UNK_1105d3760);
  puRam0000000112f199b8 = puVar1;
  return;
}



/* Entry: 102de56b4; end: 102de56b7;  */

void FUN_102de56b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f199c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50bd0;
  func_0x000107c61520(&UNK_10db50bd0,&UNK_1105d37f0);
  puRam0000000112f199c0 = puVar1;
  return;
}



/* Entry: 102de56b8; end: 102de56f7;  */

void FUN_102de56b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f199c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50bd0;
  func_0x000107c61520(&UNK_10db50bd0,&UNK_1105d37f0);
  puRam0000000112f199c0 = puVar1;
  return;
}



/* Entry: 102de56f8; end: 102de5afb;  */

int FUN_102de56f8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102de5774;
        goto LAB_102de5758;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102de5758:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102de5774:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102de5afc; end: 102de5b67;  */

undefined8 * FUN_102de5afc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 102de5b68; end: 102de5c2b;  */

int FUN_102de5b68(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102de5c2c; end: 102de5c6b;  */

void FUN_102de5c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50d60;
  func_0x000107c61520(&UNK_10db50d60,&UNK_1105d38e8);
  puRam0000000112f19ac0 = puVar1;
  return;
}



/* Entry: 102de5c6c; end: 102de5c6f;  */

void FUN_102de5c6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50d88;
  func_0x000107c61520(&UNK_10db50d88,&UNK_1105d38e8);
  puRam0000000112f19ac8 = puVar1;
  return;
}



/* Entry: 102de5c70; end: 102de5caf;  */

void FUN_102de5c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50d88;
  func_0x000107c61520(&UNK_10db50d88,&UNK_1105d38e8);
  puRam0000000112f19ac8 = puVar1;
  return;
}



/* Entry: 102de5cb0; end: 102de5cbf;  */

void FUN_102de5cb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e731154,1);
  return;
}



/* Entry: 102de5cc0; end: 102de5cff;  */

void FUN_102de5cc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de5d00();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de5d00; end: 102de5d3f;  */

void FUN_102de5d00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50cc8;
  func_0x000107c61520(&UNK_10db50cc8,&UNK_1105d38e8);
  puRam0000000112f19ad0 = puVar1;
  return;
}



/* Entry: 102de5d40; end: 102de5eaf;  */

void FUN_102de5d40(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113804fc8);
  func_0x000107c5fad4(lVar4,0x6d6143206e65704f,0xeb00000000617265);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de5eb0; end: 102de5f1f;  */

void FUN_102de5eb0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19ad8 != -1) {
    func_0x000107c61568(0x112f19ad8,FUN_102de5d40);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de5f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de5f20; end: 102de5f27;  */

undefined8 FUN_102de5f20(void)

{
  return 1;
}



/* Entry: 102de5f28; end: 102de5f8f;  */

void FUN_102de5f28(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de5f90; end: 102de5fab;  */

void FUN_102de5f90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de5fac,0,0);
  return;
}



/* Entry: 102de5fac; end: 102de607b;  */

void FUN_102de5fac(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de6020;
                    /* WARNING: Could not recover jumptable at 0x000102de601c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(0);
  return;
}



/* Entry: 102de607c; end: 102de60d7;  */

void FUN_102de607c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de60d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de60d8; end: 102de611f;  */

void FUN_102de60d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de611c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de6120; end: 102de619f;  */

void FUN_102de6120(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de61dc,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de61a0; end: 102de61cb;  */

void FUN_102de61a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de5d00();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de61cc; end: 102de6207;  */

undefined1  [16] FUN_102de61cc(void)

{
  return ZEXT816(0x1105d38e8);
}



/* Entry: 102de6208; end: 102de6247;  */

void FUN_102de6208(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50e70;
  func_0x000107c61520(&UNK_10db50e70,&UNK_1105d39b0);
  puRam0000000112f19ae0 = puVar1;
  return;
}



/* Entry: 102de6248; end: 102de624b;  */

void FUN_102de6248(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50e98;
  func_0x000107c61520(&UNK_10db50e98,&UNK_1105d39b0);
  puRam0000000112f19ae8 = puVar1;
  return;
}



/* Entry: 102de624c; end: 102de628b;  */

void FUN_102de624c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50e98;
  func_0x000107c61520(&UNK_10db50e98,&UNK_1105d39b0);
  puRam0000000112f19ae8 = puVar1;
  return;
}



/* Entry: 102de628c; end: 102de629b;  */

void FUN_102de628c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e731198,1);
  return;
}



/* Entry: 102de629c; end: 102de62db;  */

void FUN_102de629c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de62dc();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de62dc; end: 102de631b;  */

void FUN_102de62dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50dd8;
  func_0x000107c61520(&UNK_10db50dd8,&UNK_1105d39b0);
  puRam0000000112f19af0 = puVar1;
  return;
}



/* Entry: 102de631c; end: 102de6487;  */

void FUN_102de631c(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113804fe0);
  func_0x000107c5fad4(lVar4,0x616843206e65704f,0xe900000000000074);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de6488; end: 102de64f7;  */

void FUN_102de6488(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19af8 != -1) {
    func_0x000107c61568(0x112f19af8,FUN_102de631c);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de64dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de64f8; end: 102de64ff;  */

undefined8 FUN_102de64f8(void)

{
  return 1;
}



/* Entry: 102de6500; end: 102de6567;  */

void FUN_102de6500(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de6568; end: 102de6583;  */

void FUN_102de6568(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de6584,0,0);
  return;
}



/* Entry: 102de6584; end: 102de6653;  */

void FUN_102de6584(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de65f8;
                    /* WARNING: Could not recover jumptable at 0x000102de65f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(6);
  return;
}



/* Entry: 102de6654; end: 102de66af;  */

void FUN_102de6654(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de66ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de66b0; end: 102de66f7;  */

void FUN_102de66b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de66f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de66f8; end: 102de6777;  */

void FUN_102de66f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de67b4,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de6778; end: 102de67a3;  */

void FUN_102de6778(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de62dc();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de67a4; end: 102de67df;  */

undefined1  [16] FUN_102de67a4(void)

{
  return ZEXT816(0x1105d39b0);
}



/* Entry: 102de67e0; end: 102de681f;  */

void FUN_102de67e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50f80;
  func_0x000107c61520(&UNK_10db50f80,&UNK_1105d3a78);
  puRam0000000112f19b00 = puVar1;
  return;
}



/* Entry: 102de6820; end: 102de6823;  */

void FUN_102de6820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50fa8;
  func_0x000107c61520(&UNK_10db50fa8,&UNK_1105d3a78);
  puRam0000000112f19b08 = puVar1;
  return;
}



/* Entry: 102de6824; end: 102de6863;  */

void FUN_102de6824(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50fa8;
  func_0x000107c61520(&UNK_10db50fa8,&UNK_1105d3a78);
  puRam0000000112f19b08 = puVar1;
  return;
}



/* Entry: 102de6864; end: 102de6873;  */

void FUN_102de6864(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7311dc,1);
  return;
}



/* Entry: 102de6874; end: 102de68b3;  */

void FUN_102de6874(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de68b4();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de68b4; end: 102de68f3;  */

void FUN_102de68b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50ee8;
  func_0x000107c61520(&UNK_10db50ee8,&UNK_1105d3a78);
  puRam0000000112f19b10 = puVar1;
  return;
}



/* Entry: 102de68f4; end: 102de6a5f;  */

void FUN_102de68f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113804ff8);
  func_0x000107c5fad4(lVar4,0x6d6147206e65704f,0xea00000000007365);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de6a60; end: 102de6acf;  */

void FUN_102de6a60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19b18 != -1) {
    func_0x000107c61568(0x112f19b18,FUN_102de68f4);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de6ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de6ad0; end: 102de6ad7;  */

undefined8 FUN_102de6ad0(void)

{
  return 1;
}



/* Entry: 102de6ad8; end: 102de6b3f;  */

void FUN_102de6ad8(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de6b40; end: 102de6b5b;  */

void FUN_102de6b40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de6b5c,0,0);
  return;
}



/* Entry: 102de6b5c; end: 102de6c2b;  */

void FUN_102de6b5c(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de6bd0;
                    /* WARNING: Could not recover jumptable at 0x000102de6bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(7);
  return;
}



/* Entry: 102de6c2c; end: 102de6c87;  */

void FUN_102de6c2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de6c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de6c88; end: 102de6ccf;  */

void FUN_102de6c88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de6ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de6cd0; end: 102de6d4f;  */

void FUN_102de6cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar1 = 0;
  func_0x000107c5ea54(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_60,uVar1,0x102de6d8c,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 102de6d50; end: 102de6d7b;  */

void FUN_102de6d50(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de68b4();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de6d7c; end: 102de6db7;  */

undefined1  [16] FUN_102de6d7c(void)

{
  return ZEXT816(0x1105d3a78);
}



/* Entry: 102de6db8; end: 102de6df7;  */

void FUN_102de6db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db51090;
  func_0x000107c61520(&UNK_10db51090,&UNK_1105d3b40);
  puRam0000000112f19b20 = puVar1;
  return;
}



/* Entry: 102de6df8; end: 102de6dfb;  */

void FUN_102de6df8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db510b8;
  func_0x000107c61520(&UNK_10db510b8,&UNK_1105d3b40);
  puRam0000000112f19b28 = puVar1;
  return;
}



/* Entry: 102de6dfc; end: 102de6e3b;  */

void FUN_102de6dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db510b8;
  func_0x000107c61520(&UNK_10db510b8,&UNK_1105d3b40);
  puRam0000000112f19b28 = puVar1;
  return;
}



/* Entry: 102de6e3c; end: 102de6e4b;  */

void FUN_102de6e3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e731220,1);
  return;
}



/* Entry: 102de6e4c; end: 102de6e8b;  */

void FUN_102de6e4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de6e8c();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de6e8c; end: 102de6ecb;  */

void FUN_102de6e8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50ff8;
  func_0x000107c61520(&UNK_10db50ff8,&UNK_1105d3b40);
  puRam0000000112f19b30 = puVar1;
  return;
}



/* Entry: 102de6ecc; end: 102de703b;  */

void FUN_102de6ecc(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113805010);
  func_0x000107c5fad4(lVar4,0x6e654c206e65704f,0xeb00000000736573);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102de703c; end: 102de70ab;  */

void FUN_102de703c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19b38 != -1) {
    func_0x000107c61568(0x112f19b38,FUN_102de6ecc);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de7090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de70ac; end: 102de70b3;  */

undefined8 FUN_102de70ac(void)

{
  return 1;
}



/* Entry: 102de70b4; end: 102de711b;  */

void FUN_102de70b4(void)

{
  func_0x000107c5ea6c();
  return;
}



/* Entry: 102de711c; end: 102de7137;  */

void FUN_102de711c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de7138,0,0);
  return;
}



/* Entry: 102de7138; end: 102de7207;  */

void FUN_102de7138(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de71ac;
                    /* WARNING: Could not recover jumptable at 0x000102de71a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(3);
  return;
}



/* Entry: 102de7208; end: 102de7263;  */

void FUN_102de7208(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c5eaa0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de7260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de7264; end: 102de72ab;  */

void FUN_102de7264(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de72a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


