/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102eb634c; end: 102eb63c3;  */

undefined1 * FUN_102eb634c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102eb63c4; end: 102eb64ab;  */

int FUN_102eb63c4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
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



/* Entry: 102eb64ac; end: 102eb64ff;  */

void FUN_102eb64ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eb6500; end: 102eb6517;  */

void FUN_102eb6500(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb6518,0,0);
  return;
}



/* Entry: 102eb6518; end: 102eb65bb;  */

void FUN_102eb6518(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x40) + 0x18);
  *(long **)(unaff_x22 + 0x48) = plVar7;
  uVar1 = 0;
  FUN_102eb74c4(0,0x112f27320,&PTR_PTR_1126b5570);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb65bc;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb65bc; end: 102eb6613;  */

void FUN_102eb65bc(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb6614;
  }
  else {
    pcVar1 = FUN_102eb67f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb6614; end: 102eb66a7;  */

void FUN_102eb6614(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar7;
  func_0x000108e00cf8();
  *(char *)(unaff_x22 + 0x78) = (char)uVar1;
  func_0x000107c61170(uVar7);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb66a8;
  plVar8 = *(long **)(unaff_x22 + 0x48);
  plVar2[0xb] = *(long *)(unaff_x22 + 0x60);
  plVar2[0xc] = unaff_x22 + 0x38;
  plVar2[9] = unaff_x22 + 0x30;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x28;
  lVar6 = *plVar8;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar8;
  lVar6 = *(long *)(*plVar8 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb66a8; end: 102eb66ff;  */

void FUN_102eb66a8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb6700;
  }
  else {
    pcVar1 = FUN_102eb6844;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb6700; end: 102eb6767;  */

void FUN_102eb6700(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = uVar3;
  func_0x000108e00d3c();
  *(char *)(unaff_x22 + 0x79) = (char)uVar1;
  func_0x000107c61170(uVar3);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb6768;
  plVar2[5] = *(long *)(unaff_x22 + 0x40);
  *(char *)(plVar2 + 8) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb6f4c,0,0);
  return;
}



/* Entry: 102eb6768; end: 102eb67f3;  */

void FUN_102eb6768(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102eb67b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))(0);
    return;
  }
  uVar1 = 1;
  if ((param_1 & 1) != 0) {
    uVar1 = 2;
  }
  if (*(char *)(lVar2 + 0x79) == '\0') {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(*(undefined1 *)(lVar2 + 0x78),0,uVar1);
  return;
}



/* Entry: 102eb67f4; end: 102eb6843;  */

void FUN_102eb67f4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102eb6840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102eb6844; end: 102eb6893;  */

void FUN_102eb6844(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102eb6890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102eb6894; end: 102eb68af;  */

void FUN_102eb6894(undefined2 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined2 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb68b0,0,0);
  return;
}



/* Entry: 102eb68b0; end: 102eb694b;  */

void FUN_102eb68b0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x30) + 0x18);
  uVar1 = 0;
  FUN_102eb74c4(0,0x112f27320,&PTR_PTR_1126b5570);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb694c;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb694c; end: 102eb69a3;  */

void FUN_102eb694c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb69a4;
  }
  else {
    pcVar1 = FUN_102eb6a74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb69a4; end: 102eb6a0f;  */

void FUN_102eb69a4(void)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar2 = *(ushort *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = uVar5;
  func_0x000108e00cf8();
  *(char *)(unaff_x22 + 0x52) = (char)uVar3;
  func_0x000107c61170(uVar5);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102eb6a10;
  lVar1 = *(long *)(unaff_x22 + 0x30);
  plVar4[3] = *(long *)(unaff_x22 + 0x28);
  plVar4[4] = lVar1;
  *(ushort *)(plVar4 + 6) = uVar2 & 0x101;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb6ae0,0,0);
  return;
}



/* Entry: 102eb6a10; end: 102eb6a73;  */

void FUN_102eb6a10(void)

{
  undefined1 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0x52);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(uVar1);
  return;
}



/* Entry: 102eb6a74; end: 102eb6ac3;  */

void FUN_102eb6a74(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102eb6ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102eb6ac4; end: 102eb6adf;  */

void FUN_102eb6ac4(undefined2 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined2 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb6ae0,0,0);
  return;
}



/* Entry: 102eb6ae0; end: 102eb6b7f;  */

void FUN_102eb6ae0(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x20) + 0x20);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102eb6b38;
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



/* Entry: 102eb6b80; end: 102eb6caf;  */

void FUN_102eb6b80(void)

{
  ulong uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = uVar6;
  func_0x000107c43c88();
  func_0x000107c615e8(uVar6);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)uVar4 == 0) {
    bVar3 = false;
    puVar7 = (undefined *)0x3;
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x18);
    uVar2 = *(ushort *)(unaff_x22 + 0x30);
    lVar5 = *(long *)(lVar8 + 0x10);
    if (lVar5 != 0) {
      func_0x000100403514(0,lVar5,0);
      lVar10 = *(ulong *)(puVar7 + 0x10) << 4;
      puVar11 = (undefined8 *)(lVar8 + 0x28);
      uVar12 = *(ulong *)(puVar7 + 0x10);
      do {
        uVar4 = puVar11[-1];
        uVar6 = *puVar11;
        uVar1 = uVar12 + 1;
        uVar9 = *(ulong *)(puVar7 + 0x18);
        func_0x000107c61434(uVar6);
        if (uVar9 >> 1 <= uVar12) {
          func_0x000100403514(1 < uVar9,uVar1,1);
        }
        puVar11 = puVar11 + 2;
        *(ulong *)(puVar7 + 0x10) = uVar1;
        *(undefined8 *)(puVar7 + lVar10 + 0x20) = uVar4;
        *(undefined8 *)(puVar7 + lVar10 + 0x28) = uVar6;
        lVar10 = lVar10 + 0x10;
        lVar5 = lVar5 + -1;
        uVar12 = uVar1;
      } while (lVar5 != 0);
    }
    bVar3 = (uVar2 & 0x101) != 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb6cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar3,puVar7);
  return;
}



/* Entry: 102eb6cb0; end: 102eb6d5f;  */

void FUN_102eb6cb0(ulong param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  if ((param_1 & 0xff00000000) == 0x100000000) {
LAB_102eb6cd8:
    plVar2 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x10) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102eb6d60;
    plVar2[8] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb6518,0,0);
    return;
  }
  iVar1 = (int)param_1;
  if (iVar1 == 1) {
    uVar3 = 0;
    param_1 = param_1 & 0xffffffff;
  }
  else if (iVar1 == 3) {
    uVar3 = 1;
    param_1 = 3;
  }
  else {
    if (iVar1 != 2) goto LAB_102eb6cd8;
    uVar3 = 1;
    param_1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb6d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,0,param_1);
  return;
}



/* Entry: 102eb6d60; end: 102eb6dc7;  */

void FUN_102eb6d60(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb6dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102eb6dc8; end: 102eb6e2f;  */

void FUN_102eb6dc8(ushort param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eb7504;
  plVar1[5] = param_2;
  plVar1[6] = lVar2;
  *(ushort *)(plVar1 + 10) = param_1 & 0x101;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb68b0,0,0);
  return;
}



/* Entry: 102eb6e30; end: 102eb6e4b;  */

void FUN_102eb6e30(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb6e4c,0,0);
  return;
}



/* Entry: 102eb6e4c; end: 102eb6eeb;  */

void FUN_102eb6e4c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x20);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102eb6ea4;
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



/* Entry: 102eb6eec; end: 102eb6f2f;  */

void FUN_102eb6eec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar2;
  func_0x000107c43c88(uVar2);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102eb6f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102eb6f30; end: 102eb6f4b;  */

void FUN_102eb6f30(undefined1 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined1 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb6f4c,0,0);
  return;
}



/* Entry: 102eb6f4c; end: 102eb7013;  */

void FUN_102eb6f4c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    plVar7 = *(long **)(*(long *)(unaff_x22 + 0x28) + 0x18);
    uVar1 = 0;
    FUN_102eb74c4(0,0x112f27320,&PTR_PTR_1126b5570);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    plVar5 = plVar2;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x38) = plVar5;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102eb7014;
    plVar2[0xb] = (long)plVar5;
    plVar2[0xc] = unaff_x22 + 0x20;
    plVar2[9] = unaff_x22 + 0x18;
    plVar2[10] = (long)&UNK_1107a6f08;
    plVar2[8] = unaff_x22 + 0x10;
    lVar6 = *plVar7;
    plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar3 = 0x10;
    _swift_task_alloc();
    plVar2[0xe] = lVar3;
    lVar3 = *(long *)(lVar6 + 0x50);
    plVar2[0xf] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar2[0x10] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0x11] = uVar4;
    plVar5 = (long *)0x70;
    _swift_task_alloc();
    plVar2[0x12] = (long)plVar5;
    *plVar5 = (long)plVar2;
    plVar5[1] = (long)&UNK_104876614;
    plVar5[5] = uVar4;
    plVar5[6] = (long)plVar7;
    lVar6 = *(long *)(*plVar7 + 0x50);
    plVar5[7] = lVar6;
    lVar3 = 0;
    __sSqMa(0,lVar6);
    plVar5[8] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar5[9] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar5[10] = uVar4;
    lVar3 = *(long *)(lVar6 + -8);
    plVar5[0xb] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102eb7014; end: 102eb706b;  */

void FUN_102eb7014(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb706c;
  }
  else {
    pcVar1 = FUN_102eb70b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb706c; end: 102eb70b3;  */

void FUN_102eb706c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar2;
  func_0x000107c43c70(uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102eb70b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102eb70b4; end: 102eb7103;  */

void FUN_102eb70b4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102eb7100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102eb7104; end: 102eb7157;  */

void FUN_102eb7104(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102eb7158();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102eb7158; end: 102eb725f;  */

undefined * FUN_102eb7158(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102eb7260);
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
    puVar3 = (undefined *)0x112f27348;
    func_0x0001000285a8(0x112f27348,&UNK_10db629e8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1105e4dd8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102eb7260; end: 102eb74c3;  */

undefined * FUN_102eb7260(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102eb7390);
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
    puVar3 = (undefined *)0x112f27328;
    func_0x0001000285a8(0x112f27328,&UNK_10db62e30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f27330;
    func_0x0001000285a8(0x112f27330,&UNK_10db629d0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102eb74c4; end: 102eb7503;  */

void FUN_102eb74c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102eb7504; end: 102eb7507;  */

void FUN_102eb7504(uint param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb6dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102eb7508; end: 102eb763f;  */

void FUN_102eb7508(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102eb7640; end: 102eb76e3;  */

/* WARNING: Removing unreachable block (ram,0x000102eb766c) */

void FUN_102eb7640(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  FUN_102eb414c();
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x68) + 0x18);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eb76e4;
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



/* Entry: 102eb76e4; end: 102eb772b;  */

void FUN_102eb76e4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb772c,0,0);
  return;
}



/* Entry: 102eb772c; end: 102eb77c3;  */

void FUN_102eb772c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102eb77c4;
                    /* WARNING: Could not recover jumptable at 0x000102eb77c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x90),"save(snapDoc:)",0xe,0x1000000000000002,0x44,uVar2,
             lVar3);
  return;
}



/* Entry: 102eb77c4; end: 102eb7823;  */

void FUN_102eb77c4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xa8) = param_1;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb7824;
  }
  else {
    pcVar1 = FUN_102eb7ef0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb7824; end: 102eb79f3;  */

void FUN_102eb7824(void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  lVar12 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c5fd64();
  if (lVar12 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar12 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar9);
    (**(code **)(lVar12 + 0x40))(uVar13,uVar6,0,0,0x54,uVar9,lVar12);
    func_0x000107c61574();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar6);
    func_0x000102ebf318(unaff_x22 + 0x10);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000102eb78e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar10 = *(ulong *)(unaff_x22 + 0x38);
  uVar3 = uVar10;
  func_0x000107c5ab5c();
  func_0x000107c615e8();
  if (((uVar3 & 1) == 0) || (func_0x000103be4468(), (uVar10 & 1) == 0)) {
    plVar11 = *(long **)(*(long *)(unaff_x22 + 0x68) + 0x28);
    uVar9 = 0x112f27440;
    func_0x0001000285a8(0x112f27440,&UNK_10db62ae0);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar2;
    plVar1 = plVar2;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0xd8) = plVar1;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102eb7c74;
    plVar2[0xb] = (long)plVar1;
    plVar2[0xc] = unaff_x22 + 0x58;
    plVar2[9] = unaff_x22 + 0x50;
    plVar2[10] = (long)&UNK_1107a6f08;
    plVar2[8] = unaff_x22 + 0x48;
    lVar8 = *plVar11;
    plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar12 = 0x10;
    _swift_task_alloc();
    plVar2[0xe] = lVar12;
    lVar12 = *(long *)(lVar8 + 0x50);
    plVar2[0xf] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar2[0x10] = lVar12;
    uVar3 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0x11] = uVar3;
    plVar1 = (long *)0x70;
    _swift_task_alloc();
    plVar2[0x12] = (long)plVar1;
    *plVar1 = (long)plVar2;
    plVar1[1] = (long)&UNK_104876614;
    plVar1[5] = uVar3;
    plVar1[6] = (long)plVar11;
    lVar8 = *(long *)(*plVar11 + 0x50);
    plVar1[7] = lVar8;
    lVar12 = 0;
    __sSqMa(0,lVar8);
    plVar1[8] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar1[9] = lVar12;
    uVar3 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar3;
    lVar12 = *(long *)(lVar8 + -8);
    plVar1[0xb] = lVar12;
    uVar3 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar3;
    pcVar4 = (code *)&UNK_104875f90;
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0xa8);
    plVar1 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102eb79f4;
    lVar5 = *(long *)(unaff_x22 + 0x90);
    lVar12 = *(long *)(unaff_x22 + 0x68);
    lVar8 = *(long *)(unaff_x22 + 0x70);
    plVar1[0x10] = lVar7;
    plVar1[0x11] = lVar12;
    plVar1[0xe] = lVar8;
    plVar1[0xf] = lVar5;
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar3 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x12] = uVar3;
    lVar12 = 0;
    func_0x000107c5ede0();
    plVar1[0x13] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar1[0x14] = lVar12;
    uVar3 = *(long *)(lVar12 + 0x40) + 0xf;
    uVar10 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x15] = uVar10;
    uVar10 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x16] = uVar10;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x17] = uVar3;
    pcVar4 = FUN_102eb8304;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 102eb79f4; end: 102eb7a3b;  */

void FUN_102eb79f4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb7a3c,0,0);
  return;
}



/* Entry: 102eb7a3c; end: 102eb7b53;  */

void FUN_102eb7a3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = uVar9;
  (**(code **)(lVar4 + 0x30))(uVar9,1,uVar2);
  if ((int)uVar1 == 1) {
    func_0x0001000293e4(uVar9);
    plVar10 = *(long **)(*(long *)(unaff_x22 + 0x68) + 0x28);
    uVar2 = 0x112f27440;
    func_0x0001000285a8(0x112f27440,&UNK_10db62ae0);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
    plVar3 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar3;
    plVar6 = plVar3;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0xd8) = plVar6;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102eb7c74;
    plVar3[0xb] = (long)plVar6;
    plVar3[0xc] = unaff_x22 + 0x58;
    plVar3[9] = unaff_x22 + 0x50;
    plVar3[10] = (long)&UNK_1107a6f08;
    plVar3[8] = unaff_x22 + 0x48;
    lVar8 = *plVar10;
    plVar3[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar4 = 0x10;
    _swift_task_alloc();
    plVar3[0xe] = lVar4;
    lVar4 = *(long *)(lVar8 + 0x50);
    plVar3[0xf] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar3[0x10] = lVar4;
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[0x11] = uVar5;
    plVar6 = (long *)0x70;
    _swift_task_alloc();
    plVar3[0x12] = (long)plVar6;
    *plVar6 = (long)plVar3;
    plVar6[1] = (long)&UNK_104876614;
    plVar6[5] = uVar5;
    plVar6[6] = (long)plVar10;
    lVar8 = *(long *)(*plVar10 + 0x50);
    plVar6[7] = lVar8;
    lVar4 = 0;
    __sSqMa(0,lVar8);
    plVar6[8] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar6[9] = lVar4;
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[10] = uVar5;
    lVar4 = *(long *)(lVar8 + -8);
    plVar6[0xb] = lVar4;
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0xc] = uVar5;
    pcVar7 = (code *)&UNK_104875f90;
  }
  else {
    (**(code **)(lVar4 + 0x20))(*(undefined8 *)(unaff_x22 + 0x88),uVar9,uVar2);
    plVar6 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102eb7b54;
    lVar4 = *(long *)(unaff_x22 + 0x68);
    plVar6[5] = *(long *)(unaff_x22 + 0x88);
    plVar6[6] = lVar4;
    pcVar7 = FUN_102eb8b8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,0,0);
  return;
}



/* Entry: 102eb7b54; end: 102eb7baf;  */

void FUN_102eb7b54(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb7bb0;
  }
  else {
    pcVar1 = FUN_102eb7f74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb7bb0; end: 102eb7c73;  */

void FUN_102eb7bb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar4 + 0x40))(uVar3,uVar5,0,0,0x54,uVar2,lVar4);
  func_0x000107c61574();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000102ebf318(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102eb7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb7c74; end: 102eb7d1b;  */

void FUN_102eb7c74(void)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xd0));
  if (unaff_x20 == 0) {
    lVar4 = *(long *)(lVar5 + 0x48);
    *(long *)(lVar5 + 0xe0) = lVar4;
    func_0x000107c614f0(lVar4);
    plVar2 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0xe8) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_102eb7d1c;
    lVar5 = *(long *)(lVar5 + 0x90);
    plVar1 = (long *)0x100;
    func_0x000107c615b8();
    plVar2[2] = (long)plVar1;
    *plVar1 = (long)plVar2;
    plVar1[1] = 0x102eb4c30;
    plVar1[0x13] = 0;
    plVar1[0x14] = lVar4;
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    plVar1[0xf] = lVar5;
    plVar1[0x10] = 0x10;
    pcVar3 = FUN_102eb4270;
  }
  else {
    pcVar3 = FUN_102eb802c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102eb7d1c; end: 102eb7d83;  */

void FUN_102eb7d1c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(lVar3 + 0xf0) = param_1;
  *(long *)(lVar3 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe8));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102eb7d84;
  }
  else {
    pcVar2 = FUN_102eb80fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102eb7d84; end: 102eb7e33;  */

void FUN_102eb7d84(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  plVar1 = (long *)0x1f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102eb7dd8;
  lVar4 = *(long *)(unaff_x22 + 0xf0);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  plVar1[0x1a] = *(long *)(unaff_x22 + 0x90);
  plVar1[0x1b] = lVar5;
  plVar1[0x19] = lVar4;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar1[0x1c] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x1d] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1e] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1f] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8df8,0,0);
  return;
}



/* Entry: 102eb7e34; end: 102eb7eef;  */

void FUN_102eb7e34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf0));
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar4 + 0x40))(uVar3,uVar5,0,0,0x54,uVar2,lVar4);
  func_0x000107c61574();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000102ebf318(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102eb7eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb7ef0; end: 102eb7f73;  */

void FUN_102eb7ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb7f74; end: 102eb802b;  */

void FUN_102eb7f74(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar4);
  (**(code **)(lVar2 + 0x40))(uVar1,uVar3,0,0,0x54,uVar4,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102eb8028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb802c; end: 102eb80fb;  */

void FUN_102eb802c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c613f8(&UNK_1107a6f08,puVar2,0,0);
  *puVar2 = uVar4;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar4);
  (**(code **)(lVar1 + 0x40))(uVar5,uVar3,0,0,0x54,uVar4,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102eb80f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb80fc; end: 102eb81a7;  */

void FUN_102eb80fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
  (**(code **)(lVar1 + 0x40))(uVar4,uVar2,0,0,0x54,uVar3,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102eb81a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb81a8; end: 102eb825b;  */

void FUN_102eb81a8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf0));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
  (**(code **)(lVar1 + 0x40))(uVar4,uVar2,0,0,0x54,uVar3,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102eb8258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb825c; end: 102eb8303;  */

void FUN_102eb825c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8304,0,0);
  return;
}



/* Entry: 102eb8304; end: 102eb83af;  */

void FUN_102eb8304(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x88);
  func_0x0001000d224c(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = uVar4;
  func_0x000107c5ab80();
  func_0x000107c615e8(uVar4);
  plVar5 = *(long **)(lVar7 + 0x20);
  if ((int)uVar1 == 0) {
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd8) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102eb8600;
    lVar7 = unaff_x22 + 0x10;
  }
  else {
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102eb83b0;
    lVar7 = unaff_x22 + 0x38;
  }
  plVar2[5] = lVar7;
  plVar2[6] = (long)plVar5;
  lVar6 = *(long *)(*plVar5 + 0x50);
  plVar2[7] = lVar6;
  lVar7 = 0;
  __sSqMa(0,lVar6);
  plVar2[8] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar2[9] = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar3;
  lVar7 = *(long *)(lVar6 + -8);
  plVar2[0xb] = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb83b0; end: 102eb84c7;  */

void FUN_102eb83b0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102eb83f8,0,0);
  return;
}



/* Entry: 102eb84c8; end: 102eb85ff;  */

void FUN_102eb84c8(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  code *pcVar6;
  
  FUN_102ebf318(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar6 = *(code **)(lVar5 + 0x20);
  (*pcVar6)(uVar3,*(undefined8 *)(unaff_x22 + 0xb0),uVar1);
  FUN_102ebda14(uVar4,uVar3);
  (**(code **)(lVar5 + 0x30))(uVar4,1,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  if ((int)uVar4 == 1) {
    lVar5 = *(long *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(lVar5 + 8))(*(undefined8 *)(unaff_x22 + 0xb8),uVar3);
    func_0x0001000293e4(uVar1);
    (**(code **)(lVar5 + 0x38))(uVar4,1,1,uVar3);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102eb85ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (*pcVar6)(*(undefined8 *)(unaff_x22 + 0xa8),uVar1,uVar3);
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb89c8;
  plVar2[0x13] = *(long *)(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebf0a8,0,0);
  return;
}



/* Entry: 102eb8600; end: 102eb8647;  */

void FUN_102eb8600(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8648,0,0);
  return;
}



/* Entry: 102eb8648; end: 102eb879f;  */

void FUN_102eb8648(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  func_0x000102ebf338(puVar2,*(undefined8 *)(unaff_x22 + 0x28));
  func_0x00010391354c();
  *(undefined8 **)(unaff_x22 + 0xe0) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    plVar3 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102eb87a0;
                    /* WARNING: Could not recover jumptable at 0x000102eb86e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_102ebecf4(plVar3,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x78),
                  *(undefined8 *)(unaff_x22 + 0x80),puVar2);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000102ebe138();
  puVar4 = &UNK_1105e4c38;
  func_0x000107c613f8(&UNK_1105e4c38,puVar2,0,0);
  *puVar2 = uVar1;
  puVar2[1] = uVar5;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 5;
  func_0x000107c61654();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000102ebf318(unaff_x22 + 0x10);
  func_0x000107c614ac(puVar4);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x70),1,1,*(undefined8 *)(unaff_x22 + 0x98));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102eb879c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb87a0; end: 102eb87fb;  */

void FUN_102eb87a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb87fc;
  }
  else {
    pcVar1 = FUN_102eb893c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb87fc; end: 102eb893b;  */

void FUN_102eb87fc(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  code *pcVar6;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar6 = *(code **)(lVar5 + 0x20);
  (*pcVar6)(uVar3,*(undefined8 *)(unaff_x22 + 0xb0),uVar1);
  FUN_102ebda14(uVar4,uVar3);
  (**(code **)(lVar5 + 0x30))(uVar4,1,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  if ((int)uVar4 == 1) {
    lVar5 = *(long *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(lVar5 + 8))(*(undefined8 *)(unaff_x22 + 0xb8),uVar3);
    func_0x0001000293e4(uVar1);
    (**(code **)(lVar5 + 0x38))(uVar4,1,1,uVar3);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102eb88e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (*pcVar6)(*(undefined8 *)(unaff_x22 + 0xa8),uVar1,uVar3);
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb89c8;
  plVar2[0x13] = *(long *)(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebf0a8,0,0);
  return;
}



/* Entry: 102eb893c; end: 102eb89c7;  */

void FUN_102eb893c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  FUN_102ebf318(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar2);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x70),1,1,*(undefined8 *)(unaff_x22 + 0x98));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102eb89c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb89c8; end: 102eb8a17;  */

void FUN_102eb89c8(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x100) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8a18,0,0);
  return;
}



/* Entry: 102eb8a18; end: 102eb8aef;  */

void FUN_102eb8a18(void)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  bVar3 = *(char *)(unaff_x22 + 0x100) != '\x01';
  if (!bVar3) {
    (**(code **)(lVar1 + 0x10))(uVar6,uVar5,uVar4);
  }
  (**(code **)(lVar1 + 0x38))(uVar6,bVar3,1,uVar4);
  FUN_102ebde24(uVar2,uVar5);
  pcVar7 = *(code **)(lVar1 + 8);
  (*pcVar7)(uVar2,uVar4);
  (*pcVar7)(uVar5,uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102eb8aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb8af0; end: 102eb8b73;  */

void FUN_102eb8af0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_102ebf318(unaff_x22 + 0x38);
  func_0x000107c614ac(uVar2);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x70),1,1,*(undefined8 *)(unaff_x22 + 0x98));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102eb8b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb8b74; end: 102eb8b8b;  */

void FUN_102eb8b74(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8b8c,0,0);
  return;
}



/* Entry: 102eb8b8c; end: 102eb8c23;  */

void FUN_102eb8b8c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x30) + 0x10);
  uVar1 = 0x112f27458;
  func_0x0001000285a8(0x112f27458,&UNK_10db62b40);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb8c24;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb8c24; end: 102eb8ccb;  */

void FUN_102eb8c24(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x38));
  if (unaff_x20 == 0) {
    lVar4 = *(long *)(lVar5 + 0x10);
    *(long *)(lVar5 + 0x48) = lVar4;
    lVar1 = lVar4;
    func_0x000107c614f0();
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x50) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_102eb8ccc;
    lVar5 = *(long *)(lVar5 + 0x28);
    plVar2[7] = lVar1;
    plVar2[8] = lVar4;
    plVar2[6] = lVar5;
    pcVar3 = FUN_102eba158;
  }
  else {
    pcVar3 = FUN_102eb8d30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102eb8ccc; end: 102eb8d2f;  */

void FUN_102eb8ccc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = (code *)0x102ebf544;
  }
  else {
    pcVar2 = FUN_102eb8d7c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102eb8d30; end: 102eb8d7b;  */

void FUN_102eb8d30(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102eb8d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb8d7c; end: 102eb8d87;  */

void FUN_102eb8d7c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102eb8d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb8d88; end: 102eb8df7;  */

void FUN_102eb8d88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8df8,0,0);
  return;
}



/* Entry: 102eb8df8; end: 102eb8ea3;  */

/* WARNING: Removing unreachable block (ram,0x000102eb8e1c) */

void FUN_102eb8df8(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000107c5fd64();
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar1;
  plVar5 = *(long **)(lVar4 + 0x18);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb8ea4;
  plVar2[5] = unaff_x22 + 0x10;
  plVar2[6] = (long)plVar5;
  lVar6 = *(long *)(*plVar5 + 0x50);
  plVar2[7] = lVar6;
  lVar4 = 0;
  __sSqMa(0,lVar6);
  plVar2[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[9] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar3;
  lVar4 = *(long *)(lVar6 + -8);
  plVar2[0xb] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb8ea4; end: 102eb8eeb;  */

void FUN_102eb8ea4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8eec,0,0);
  return;
}



/* Entry: 102eb8eec; end: 102eb8f83;  */

void FUN_102eb8eec(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102eb8f84;
                    /* WARNING: Could not recover jumptable at 0x000102eb8f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x100),"save(transcodedSnapDocEditor:snapDoc:)",0x26,
             0x1000000000000002,0x118,uVar2,lVar3);
  return;
}



/* Entry: 102eb8f84; end: 102eb8fe3;  */

void FUN_102eb8f84(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x118) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb8fe4;
  }
  else {
    pcVar1 = FUN_102eb9e6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb8fe4; end: 102eb911b;  */

void FUN_102eb8fe4(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  
  iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c44920();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c4adb4();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x120) = lVar2;
    if (lVar2 != 0) {
      func_0x000107c44fd8();
      *(long *)(unaff_x22 + 0xc0) = lVar2;
      puVar3 = PTR___ss5Int64VN_11034ee50;
      puVar8 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      func_0x000107c6057c();
      *(undefined **)(unaff_x22 + 0x128) = puVar8;
      plVar4 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x130) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102eb911c;
      lVar2 = *(long *)(unaff_x22 + 0xd8);
      plVar4[0x13] = *(long *)(unaff_x22 + 0xd0);
      plVar4[0x14] = lVar2;
      plVar4[0x11] = (long)puVar3;
      plVar4[0x12] = (long)puVar8;
      pcVar7 = FUN_102ebccd4;
      goto _swift_task_switch;
    }
  }
  *(undefined8 *)(unaff_x22 + 0x140) = 0;
  func_0x0001000d224c(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = uVar9;
  func_0x000107c42580();
  func_0x000107c615e8(uVar9);
  uVar9 = 0;
  if ((int)uVar5 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c42bfc();
    func_0x000107c61180();
  }
  *(undefined8 *)(unaff_x22 + 0x148) = uVar9;
  plVar10 = *(long **)(*(long *)(unaff_x22 + 0xd8) + 0x30);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102eb9224;
  plVar4[5] = unaff_x22 + 0x38;
  plVar4[6] = (long)plVar10;
  lVar11 = *(long *)(*plVar10 + 0x50);
  plVar4[7] = lVar11;
  lVar2 = 0;
  __sSqMa(0,lVar11);
  plVar4[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[9] = lVar2;
  uVar6 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar6;
  lVar2 = *(long *)(lVar11 + -8);
  plVar4[0xb] = lVar2;
  uVar6 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar6;
  pcVar7 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,0,0);
  return;
}



/* Entry: 102eb911c; end: 102eb9173;  */

void FUN_102eb911c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x128);
  *(undefined8 *)(lVar2 + 0x138) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb9174,0,0);
  return;
}



/* Entry: 102eb9174; end: 102eb9223;  */

void FUN_102eb9174(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x120));
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x0001000d224c(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = uVar5;
  func_0x000107c42580();
  func_0x000107c615e8(uVar5);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c42bfc();
    func_0x000107c61180();
  }
  *(undefined8 *)(unaff_x22 + 0x148) = uVar1;
  plVar6 = *(long **)(*(long *)(unaff_x22 + 0xd8) + 0x30);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb9224;
  plVar2[5] = unaff_x22 + 0x38;
  plVar2[6] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar2[7] = lVar7;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar4;
  lVar3 = *(long *)(lVar7 + -8);
  plVar2[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb9224; end: 102eb926b;  */

void FUN_102eb9224(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb926c,0,0);
  return;
}



/* Entry: 102eb926c; end: 102eb9427;  */

void FUN_102eb926c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  func_0x000102ebf338(unaff_x22 + 0x38,uVar1);
  (**(code **)(lVar4 + 8))(lVar6,uVar1,lVar4);
  plVar3 = (long *)(unaff_x22 + 0x38);
  func_0x000102ebf318();
  if (lVar6 == 1) {
    plVar7 = *(long **)(*(long *)(unaff_x22 + 0xd8) + 0x20);
    plVar3 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1a8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102eb9838;
    lVar4 = unaff_x22 + 0x60;
  }
  else {
    if (lVar6 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
      func_0x000102ebe0f8();
      func_0x000107c613f8(&UNK_1105e4ab0,plVar3,0,0);
      *plVar3 = lVar6;
      func_0x000107c61654();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar2);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
      (**(code **)(lVar4 + 0x40))(uVar9,uVar8,0,0,0x54,uVar1,lVar4);
      func_0x000107c61574();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000102ebf318(unaff_x22 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
      func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb9424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    plVar7 = *(long **)(*(long *)(unaff_x22 + 0xd8) + 0x20);
    plVar3 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x158) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102eb9428;
    lVar4 = unaff_x22 + 0x88;
  }
  plVar3[5] = lVar4;
  plVar3[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar3[7] = lVar6;
  lVar4 = 0;
  __sSqMa(0,lVar6);
  plVar3[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[9] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[10] = uVar5;
  lVar4 = *(long *)(lVar6 + -8);
  plVar3[0xb] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eb9428; end: 102eb946f;  */

void FUN_102eb9428(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb9470,0,0);
  return;
}



/* Entry: 102eb9470; end: 102eb94eb;  */

void FUN_102eb9470(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000102ebf338(unaff_x22 + 0x88,*(undefined8 *)(unaff_x22 + 0xa0));
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x160) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eb94ec;
                    /* WARNING: Could not recover jumptable at 0x000102eb94e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102ebcea4(*(undefined8 *)(unaff_x22 + 0x100),uVar2);
  return;
}



/* Entry: 102eb94ec; end: 102eb954b;  */

void FUN_102eb94ec(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x168) = param_1;
  *(long *)(lVar2 + 0x170) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb954c;
  }
  else {
    pcVar1 = FUN_102eb9eec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb954c; end: 102eb9643;  */

void FUN_102eb954c(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x140);
  FUN_102ebf318(unaff_x22 + 0x88);
  if (lVar5 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0x140);
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0xd8) + 0x50);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x178) = lVar4;
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c43d6c();
      if ((int)lVar1 != 0) {
        plVar2 = (long *)0xb0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x180) = plVar2;
        *plVar2 = unaff_x22;
        plVar2[1] = (long)FUN_102eb9644;
        lVar4 = *(long *)(unaff_x22 + 0xd8);
        plVar2[0x12] = *(long *)(unaff_x22 + 0x168);
        plVar2[0x13] = lVar4;
        plVar2[0x11] = lVar5;
        pcVar3 = FUN_102ebd1e8;
        goto LAB_107c615e0;
      }
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(lVar5);
  }
  lVar5 = *(long *)(unaff_x22 + 0x168);
  *(long *)(unaff_x22 + 400) = lVar5;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eb970c;
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  plVar2[6] = *(long *)(unaff_x22 + 0x148);
  plVar2[7] = lVar4;
  plVar2[5] = lVar5;
  pcVar3 = FUN_102eba3c4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102eb9644; end: 102eb9693;  */

void FUN_102eb9644(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x188) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb9694,0,0);
  return;
}



/* Entry: 102eb9694; end: 102eb970b;  */

void FUN_102eb9694(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x178));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  lVar3 = *(long *)(unaff_x22 + 0x188);
  *(long *)(unaff_x22 + 400) = lVar3;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eb970c;
  lVar5 = *(long *)(unaff_x22 + 0xd8);
  plVar1[6] = *(long *)(unaff_x22 + 0x148);
  plVar1[7] = lVar5;
  plVar1[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba3c4,0,0);
  return;
}



/* Entry: 102eb970c; end: 102eb9767;  */

void FUN_102eb970c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb9768;
  }
  else {
    pcVar1 = FUN_102eb9fac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb9768; end: 102eb9837;  */

void FUN_102eb9768(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar4 + 0x40))(uVar3,uVar5,0,0,0x54,uVar2,lVar4);
  func_0x000107c61574();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000102ebf318(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102eb9834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb9838; end: 102eb987f;  */

void FUN_102eb9838(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb9880,0,0);
  return;
}



/* Entry: 102eb9880; end: 102eb9a27;  */

void FUN_102eb9880(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)(unaff_x22 + 0x60);
  func_0x000102ebf338(puVar3,*(undefined8 *)(unaff_x22 + 0x78));
  func_0x00010391354c();
  *(undefined8 **)(unaff_x22 + 0x1b0) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
    plVar4 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1b8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102eb9a28;
                    /* WARNING: Could not recover jumptable at 0x000102eb9928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_102ebecf4(plVar4,*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100),uVar6,
                  puVar3);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000102ebe138();
  func_0x000107c613f8(&UNK_1105e4c38,puVar3,0,0);
  *puVar3 = uVar7;
  puVar3[1] = uVar5;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 5;
  func_0x000107c61654();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000102ebf318(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar6);
  (**(code **)(lVar2 + 0x40))(uVar9,uVar8,0,0,0x54,uVar6,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102eb9a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb9a28; end: 102eb9a83;  */

void FUN_102eb9a28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb9a84;
  }
  else {
    pcVar1 = FUN_102eb9b80;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb9a84; end: 102eb9b7f;  */

void FUN_102eb9a84(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x140);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1b0));
  FUN_102ebf318(unaff_x22 + 0x60);
  if (lVar6 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x140);
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0xd8) + 0x50);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x1c8) = lVar5;
    if (lVar5 != 0) {
      lVar7 = lVar5;
      func_0x000107c43d6c();
      if ((int)lVar7 != 0) {
        plVar1 = (long *)0x110;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1d0) = plVar1;
        *plVar1 = unaff_x22;
        plVar1[1] = (long)FUN_102eb9c4c;
        lVar5 = *(long *)(unaff_x22 + 0xf0);
        lVar7 = *(long *)(unaff_x22 + 0xd8);
        plVar1[0x18] = *(long *)(unaff_x22 + 0xf8);
        plVar1[0x19] = lVar7;
        plVar1[0x16] = lVar5;
        plVar1[0x17] = lVar6;
        lVar6 = 0;
        func_0x000107c5ede0();
        plVar1[0x1a] = lVar6;
        lVar6 = *(long *)(lVar6 + -8);
        plVar1[0x1b] = lVar6;
        lVar6 = *(long *)(lVar6 + 0x40);
        plVar1[0x1c] = lVar6;
        uVar3 = lVar6 + 0xf;
        uVar2 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar1[0x1d] = uVar2;
        uVar3 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar1[0x1e] = uVar3;
        pcVar4 = FUN_102ebd44c;
        goto LAB_107c615e0;
      }
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170(lVar6);
  }
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eb9d34;
  lVar6 = *(long *)(unaff_x22 + 0xd8);
  plVar1[5] = *(long *)(unaff_x22 + 0xf8);
  plVar1[6] = lVar6;
  pcVar4 = FUN_102eb8b8c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 102eb9b80; end: 102eb9c4b;  */

void FUN_102eb9b80(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1b0));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c61170(uVar1);
  FUN_102ebf318(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x40))(uVar4,uVar3,0,0,0x54,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb9c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb9c4c; end: 102eb9c93;  */

void FUN_102eb9c4c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb9c94,0,0);
  return;
}



/* Entry: 102eb9c94; end: 102eb9d33;  */

void FUN_102eb9c94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar6 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x1c8));
  func_0x000107c61170(uVar5);
  (**(code **)(lVar6 + 8))(uVar3,uVar2);
  (**(code **)(lVar6 + 0x20))(uVar3,uVar1,uVar2);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102eb9d34;
  lVar6 = *(long *)(unaff_x22 + 0xd8);
  plVar4[5] = *(long *)(unaff_x22 + 0xf8);
  plVar4[6] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8b8c,0,0);
  return;
}



/* Entry: 102eb9d34; end: 102eb9d8f;  */

void FUN_102eb9d34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1e0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102eb9d90;
  }
  else {
    pcVar1 = FUN_102eba070;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


