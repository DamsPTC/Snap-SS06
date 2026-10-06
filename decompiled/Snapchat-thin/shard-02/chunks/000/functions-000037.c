/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101718adc; end: 101718b87;  */

void FUN_101718adc(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  (**(code **)(lVar1 + 8))(uVar4,uVar3);
  func_0x000107c615c0(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x00010171905c(uVar4,0x112dbf790,&UNK_10d97ae40);
  func_0x000107c615c0(uVar4);
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101717edc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
  )(plVar2,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101718b88; end: 101718cb7;  */

void FUN_101718b88(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017190e0,0,0);
  return;
}



/* Entry: 101718cb8; end: 101718cf7;  */

void FUN_101718cb8(void)

{
  return;
}



/* Entry: 101718cf8; end: 101718e53;  */

long * FUN_101718cf8(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 != 0) {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    func_0x000107c6157c(lVar1);
    return param_1;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 101718e54; end: 101718f0f;  */

int FUN_101718e54(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101718f10; end: 101718f63;  */

void FUN_101718f10(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101718f64;
  plVar1[0xb] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101717dbc,0,0);
  return;
}



/* Entry: 101718f64; end: 101718f9f;  */

void FUN_101718f64(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101718f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101718fa0; end: 101718fc3;  */

void FUN_101718fa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 101718fc4; end: 10171909b;  */

undefined8 FUN_101718fc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10171909c; end: 1017190df;  */

void FUN_10171909c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc4298 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f900(0xff);
  puVar2 = PTR___s8StoreKit11TransactionV6ReasonVSQAAMc_110347c28;
  func_0x000107c61520(PTR___s8StoreKit11TransactionV6ReasonVSQAAMc_110347c28,uVar1);
  puRam0000000112dc4298 = puVar2;
  return;
}



/* Entry: 1017190e0; end: 101719103;  */

void FUN_1017190e0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  (**(code **)(lVar1 + 8))(uVar4,uVar3);
  func_0x000107c615c0(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x00010171905c(uVar4,0x112dbf790,&UNK_10d97ae40);
  func_0x000107c615c0(uVar4);
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101717edc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
  )(plVar2,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101719104; end: 10171919b;  */

void FUN_101719104(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10171919c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  func_0x00010375f088(0);
  puVar2 = &UNK_1103fe168;
  func_0x000107c613fc(&UNK_1103fe168,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010375ec24(0x10171a7e0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10171919c; end: 1017191db;  */

void FUN_10171919c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017191dc,0,0);
  return;
}



/* Entry: 1017191dc; end: 1017192d3;  */

void FUN_1017191dc(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x100);
  *(long *)(unaff_x22 + 0x118) = lVar4;
  lVar1 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  plVar6 = *(long **)(*(long *)(unaff_x22 + 0x110) + 0x10);
  if (plVar6 != (long *)0x0) {
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
    }
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    piVar5 = *(int **)(*plVar6 + 0x240);
    iVar3 = *piVar5;
    plVar6 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1017192d4;
                    /* WARNING: Could not recover jumptable at 0x00010171928c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar3 + (long)piVar5))
              (plVar6,unaff_x22 + 0xb0,uVar2,lVar1,0,0xc000000000000000,unaff_x22 + 0x50);
    return;
  }
  puVar7 = *(undefined8 **)(unaff_x22 + 0x108);
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
  puVar7[8] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001017192d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1017192d4; end: 101719347;  */

void FUN_1017192d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)(lVar2 + 0x148) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)(lVar2 + 0x158) = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(lVar2 + 0x150) = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 0x168) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0x160) = *(undefined8 *)(lVar2 + 0xe0);
    *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)(lVar2 + 0xf0);
    pcVar1 = FUN_101719348;
  }
  else {
    pcVar1 = FUN_1017193d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101719348; end: 1017193d3;  */

void FUN_101719348(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x108);
  lVar1 = -0x2000000000000000;
  if (*(long *)(unaff_x22 + 0x118) != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x118);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
  puVar2[1] = uVar8;
  *puVar2 = uVar6;
  puVar2[3] = uVar11;
  puVar2[2] = uVar10;
  puVar2[5] = uVar9;
  puVar2[4] = uVar7;
  puVar2[7] = uVar5;
  puVar2[6] = uVar4;
  puVar2[8] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001017193d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1017193d4; end: 10171941f;  */

void FUN_1017193d4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = -0x2000000000000000;
  if (*(long *)(unaff_x22 + 0x118) != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x118);
  }
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010171941c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101719420; end: 10171943b;  */

void FUN_101719420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171943c,0,0);
  return;
}



/* Entry: 10171943c; end: 10171951b;  */

void FUN_10171943c(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  plVar3 = *(long **)(*(long *)(unaff_x22 + 0xe8) + 0x10);
  if (plVar3 != (long *)0x0) {
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    piVar2 = *(int **)(*plVar3 + 0x238);
    iVar1 = *piVar2;
    plVar3 = (long *)(ulong)(uint)piVar2[1];
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10171951c;
                    /* WARNING: Could not recover jumptable at 0x0001017194d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))
              (plVar3,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0xd8),
               *(undefined8 *)(unaff_x22 + 0xe0),0,0xc000000000000000,unaff_x22 + 0x10);
    return;
  }
  puVar4 = *(undefined8 **)(unaff_x22 + 0xd0);
  func_0x00010006c090(0,0xc000000000000000);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 1;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
                    /* WARNING: Could not recover jumptable at 0x000101719518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171951c; end: 10171958f;  */

void FUN_10171951c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar2 + 0x80);
    *(undefined8 *)(lVar2 + 0x128) = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar2 + 0xa0);
    *(undefined8 *)(lVar2 + 0x148) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)(lVar2 + 0x158) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x150) = *(undefined8 *)(lVar2 + 0xc0);
    pcVar1 = FUN_101719590;
  }
  else {
    pcVar1 = (code *)0x101719618;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101719590; end: 101719657;  */

void FUN_101719590(void)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x00010006c090(0,0xc000000000000000);
  puVar1[1] = uVar9;
  *puVar1 = uVar6;
  puVar1[3] = uVar4;
  puVar1[2] = uVar2;
  puVar1[5] = uVar10;
  puVar1[4] = uVar7;
  puVar1[7] = uVar13;
  puVar1[6] = uVar12;
  puVar1[9] = uVar11;
  puVar1[8] = uVar8;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000101719614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101719658; end: 10171967b;  */

void FUN_101719658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x428) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x420) = param_3;
  *(undefined8 *)(unaff_x22 + 0x418) = param_2;
  *(undefined8 *)(unaff_x22 + 0x410) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171967c,0,0);
  return;
}



/* Entry: 10171967c; end: 101719747;  */

void FUN_10171967c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x22 + 0x3d8) = 0xe000000000000000;
  *(undefined8 *)(unaff_x22 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x22 + 1000) = 0xe000000000000000;
  *(undefined8 *)(unaff_x22 + 0x3f8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0x418);
  *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x420);
  func_0x000107c61434();
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x400;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101719748;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  func_0x00010375f088(0);
  puVar2 = &UNK_1103fe118;
  func_0x000107c613fc(&UNK_1103fe118,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010375ec24(FUN_10171a7d8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101719748; end: 10171989b;  */

void FUN_101719748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101719788,0,0);
  return;
}



/* Entry: 10171989c; end: 101719937;  */

void FUN_10171989c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x438) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x430));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x2f8) = *(undefined8 *)(lVar2 + 0x118);
    *(undefined8 *)(lVar2 + 0x2f0) = *(undefined8 *)(lVar2 + 0x110);
    *(undefined8 *)(lVar2 + 0x308) = *(undefined8 *)(lVar2 + 0x128);
    *(undefined8 *)(lVar2 + 0x300) = *(undefined8 *)(lVar2 + 0x120);
    *(undefined8 *)(lVar2 + 0x318) = *(undefined8 *)(lVar2 + 0x138);
    *(undefined8 *)(lVar2 + 0x310) = *(undefined8 *)(lVar2 + 0x130);
    *(undefined8 *)(lVar2 + 0x2b8) = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(lVar2 + 0x2b0) = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 0x2c8) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0x2c0) = *(undefined8 *)(lVar2 + 0xe0);
    *(undefined8 *)(lVar2 + 0x2d8) = *(undefined8 *)(lVar2 + 0xf8);
    *(undefined8 *)(lVar2 + 0x2d0) = *(undefined8 *)(lVar2 + 0xf0);
    *(undefined8 *)(lVar2 + 0x2e8) = *(undefined8 *)(lVar2 + 0x108);
    *(undefined8 *)(lVar2 + 0x2e0) = *(undefined8 *)(lVar2 + 0x100);
    *(undefined8 *)(lVar2 + 0x278) = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x270) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + 0x288) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(lVar2 + 0x280) = *(undefined8 *)(lVar2 + 0xa0);
    *(undefined8 *)(lVar2 + 0x298) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + 0x290) = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)(lVar2 + 0x2a8) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x2a0) = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)(lVar2 + 0x238) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0x230) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0x248) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x240) = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 600) = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x250) = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar2 + 0x268) = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0x260) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_101719938;
  }
  else {
    pcVar1 = (code *)0x1017199f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101719938; end: 101719a2b;  */

void FUN_101719938(void)

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
  
  FUN_10171a664(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x2f8);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x2f0);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x308);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x310);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x2b8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x2b0);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x2c0);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x2d0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x2e8);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x278);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x270);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x288);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x280);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x290);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x2a8);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x2a0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x260);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x410);
  FUN_10171a630(unaff_x22 + 0x3c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x148);
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar1[0xb] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar4;
  puVar1[0xc] = uVar3;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[9] = uVar6;
  puVar1[8] = uVar5;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
  puVar1[0x13] = *(undefined8 *)(unaff_x22 + 0x1d8);
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar4;
  puVar1[0x14] = uVar3;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar7;
  puVar1[0x11] = uVar6;
  puVar1[0x10] = uVar5;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  puVar1[0x1b] = *(undefined8 *)(unaff_x22 + 0x218);
  puVar1[0x1a] = uVar2;
  puVar1[0x1d] = uVar4;
  puVar1[0x1c] = uVar3;
  puVar1[0x17] = uVar8;
  puVar1[0x16] = uVar7;
  puVar1[0x19] = uVar6;
  puVar1[0x18] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0001017199f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101719a2c; end: 101719a43;  */

void FUN_101719a2c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101719a44,0,0);
  return;
}



/* Entry: 101719a44; end: 101719adb;  */

void FUN_101719a44(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101719adc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  func_0x00010375f088(0);
  puVar2 = &UNK_1103fe0f0;
  func_0x000107c613fc(&UNK_1103fe0f0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010375ec24(0x10171a5fc,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101719adc; end: 101719b1b;  */

void FUN_101719adc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101719b1c,0,0);
  return;
}



/* Entry: 101719b1c; end: 101719c03;  */

void FUN_101719b1c(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xb8);
  *(long *)(unaff_x22 + 200) = lVar4;
  lVar1 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  plVar6 = *(long **)(*(long *)(unaff_x22 + 0xc0) + 0x10);
  if (plVar6 != (long *)0x0) {
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    }
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    piVar5 = *(int **)(*plVar6 + 0x268);
    iVar3 = *piVar5;
    plVar6 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101719c04;
                    /* WARNING: Could not recover jumptable at 0x000101719bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar3 + (long)piVar5))(uVar2,lVar1,0,0xc000000000000000,unaff_x22 + 0x50);
    return;
  }
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x000101719c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0);
  return;
}



/* Entry: 101719c04; end: 101719c87;  */

void FUN_101719c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xe0) = param_1;
    *(undefined8 *)(lVar2 + 0xe8) = param_4;
    *(undefined8 *)(lVar2 + 0xf0) = param_3;
    *(undefined8 *)(lVar2 + 0xf8) = param_2;
    pcVar1 = FUN_101719c88;
  }
  else {
    pcVar1 = FUN_101719d04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101719c88; end: 101719d03;  */

void FUN_101719c88(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(ulong *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar1 = -0x2000000000000000;
  if (*(long *)(unaff_x22 + 200) != 0) {
    lVar1 = *(long *)(unaff_x22 + 200);
  }
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x000101719d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3 & 0x101010101,uVar4,uVar2,uVar5);
  return;
}



/* Entry: 101719d04; end: 101719d4f;  */

void FUN_101719d04(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = -0x2000000000000000;
  if (*(long *)(unaff_x22 + 200) != 0) {
    lVar1 = *(long *)(unaff_x22 + 200);
  }
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x000101719d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101719d50; end: 101719d6b;  */

void FUN_101719d50(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101719d6c,0,0);
  return;
}



/* Entry: 101719d6c; end: 101719e03;  */

void FUN_101719d6c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x138;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101719e04;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  func_0x00010375f088(0);
  puVar2 = &UNK_1103fe140;
  func_0x000107c613fc(&UNK_1103fe140,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010375ec24(0x10171a7dc,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101719e04; end: 101719e43;  */

void FUN_101719e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101719e44,0,0);
  return;
}



/* Entry: 101719e44; end: 101719f1b;  */

void FUN_101719e44(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  FUN_10171a668(unaff_x22 + 0xf8,*(undefined8 *)(unaff_x22 + 0x150),
                *(undefined8 *)(unaff_x22 + 0x138),uVar3);
  func_0x000107c6142c(uVar3);
  plVar5 = *(long **)(lVar2 + 0x10);
  if (plVar5 != (long *)0x0) {
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    piVar4 = *(int **)(*plVar5 + 0x200);
    iVar1 = *piVar4;
    plVar5 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x160) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101719f1c;
                    /* WARNING: Could not recover jumptable at 0x000101719ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))
              (plVar5,unaff_x22 + 0xb0,unaff_x22 + 0xf8,unaff_x22 + 0x50);
    return;
  }
  puVar6 = *(undefined8 **)(unaff_x22 + 0x148);
  FUN_10171a734(unaff_x22 + 0xf8);
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[8] = 0;
                    /* WARNING: Could not recover jumptable at 0x000101719f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101719f1c; end: 101719f8f;  */

void FUN_101719f1c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x178) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)(lVar2 + 0x188) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x180) = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)(lVar2 + 0x198) = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(lVar2 + 400) = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 0x1a8) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0x1a0) = *(undefined8 *)(lVar2 + 0xe0);
    *(undefined8 *)(lVar2 + 0x1b0) = *(undefined8 *)(lVar2 + 0xf0);
    pcVar1 = FUN_101719f90;
  }
  else {
    pcVar1 = FUN_10171a004;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101719f90; end: 10171a003;  */

void FUN_101719f90(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  FUN_10171a734(unaff_x22 + 0xf8);
  puVar1[1] = uVar7;
  *puVar1 = uVar5;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar1[5] = uVar8;
  puVar1[4] = uVar6;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  puVar1[8] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010171a000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171a004; end: 10171a037;  */

void FUN_10171a004(void)

{
  long unaff_x22;
  
  FUN_10171a734(unaff_x22 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010171a034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171a038; end: 10171a06b;  */

void FUN_10171a038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 1000) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x3e0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x3d8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x3d0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x3c8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x3c0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x3b8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x3b0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171a06c,0,0);
  return;
}



/* Entry: 10171a06c; end: 10171a20f;  */

void FUN_10171a06c(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)(unaff_x22 + 0x3c0);
  *(undefined8 *)(unaff_x22 + 0x360) = 0;
  *(undefined8 *)(unaff_x22 + 0x368) = 0xe000000000000000;
  *(undefined8 *)(unaff_x22 + 0x390) = 0;
  *(undefined1 *)(unaff_x22 + 0x398) = 1;
  *(undefined8 *)(unaff_x22 + 0x3a8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x3a0) = 0;
  if (lVar6 != 0) {
    *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x3b8);
    *(long *)(unaff_x22 + 0x368) = lVar6;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x3c8);
  *(undefined8 *)(unaff_x22 + 0x378) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x3d8);
  *(undefined8 *)(unaff_x22 + 0x388) = uVar3;
  plVar4 = *(long **)(*(long *)(unaff_x22 + 1000) + 0x10);
  if (plVar4 != (long *)0x0) {
    *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x388);
    *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x380);
    *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x398);
    *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x390);
    *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0x3a8);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x3a0);
    *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x368);
    *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x360);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x378);
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x370);
    *(undefined8 *)(unaff_x22 + 0x2b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x308) = 0;
    *(undefined8 *)(unaff_x22 + 0x300) = 0;
    piVar2 = *(int **)(*plVar4 + 0x1e8);
    iVar1 = *piVar2;
    plVar4 = (long *)(ulong)(uint)piVar2[1];
    func_0x000107c61434(lVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x3f0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10171a210;
                    /* WARNING: Could not recover jumptable at 0x00010171a188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))
              (plVar4,unaff_x22 + 0x10,unaff_x22 + 0x310,unaff_x22 + 0x2b0);
    return;
  }
  FUN_10171a598(unaff_x22 + 0xf0);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x3b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar3);
  FUN_10171a5c4(unaff_x22 + 0x360);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar5[1] = *(undefined8 *)(unaff_x22 + 0xf8);
  *puVar5 = uVar8;
  puVar5[3] = uVar7;
  puVar5[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar5[9] = *(undefined8 *)(unaff_x22 + 0x138);
  puVar5[8] = uVar3;
  puVar5[0xb] = uVar8;
  puVar5[10] = uVar7;
  puVar5[5] = uVar12;
  puVar5[4] = uVar11;
  puVar5[7] = uVar10;
  puVar5[6] = uVar9;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar5[0x11] = *(undefined8 *)(unaff_x22 + 0x178);
  puVar5[0x10] = uVar3;
  puVar5[0x13] = uVar8;
  puVar5[0x12] = uVar7;
  puVar5[0xd] = uVar12;
  puVar5[0xc] = uVar11;
  puVar5[0xf] = uVar10;
  puVar5[0xe] = uVar9;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar11 = *(undefined8 *)(unaff_x22 + 400);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar5[0x19] = *(undefined8 *)(unaff_x22 + 0x1b8);
  puVar5[0x18] = uVar3;
  puVar5[0x1b] = uVar8;
  puVar5[0x1a] = uVar7;
  puVar5[0x15] = uVar12;
  puVar5[0x14] = uVar11;
  puVar5[0x17] = uVar10;
  puVar5[0x16] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010171a20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171a210; end: 10171a2a3;  */

void FUN_10171a210(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3f8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x3f0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x278) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + 0x270) = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)(lVar2 + 0x288) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x280) = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)(lVar2 + 0x298) = *(undefined8 *)(lVar2 + 0xd8);
    *(undefined8 *)(lVar2 + 0x290) = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 0x2a8) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0x2a0) = *(undefined8 *)(lVar2 + 0xe0);
    *(undefined8 *)(lVar2 + 0x238) = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x230) = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar2 + 0x248) = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0x240) = *(undefined8 *)(lVar2 + 0x80);
    *(undefined8 *)(lVar2 + 600) = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x250) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + 0x268) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(lVar2 + 0x260) = *(undefined8 *)(lVar2 + 0xa0);
    *(undefined8 *)(lVar2 + 0x1f8) = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x1f0) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x208) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x200) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar2 + 0x218) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0x210) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0x228) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x220) = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x1d8) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x1d0) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x1e8) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x1e0) = *(undefined8 *)(lVar2 + 0x20);
    pcVar1 = FUN_10171a2a4;
  }
  else {
    pcVar1 = (code *)0x10171a354;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10171a2a4; end: 10171a387;  */

void FUN_10171a2a4(void)

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
  
  FUN_10171a5f8(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x278);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x270);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x288);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x280);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x290);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x2a8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x2a0);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x1e0);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x3b0);
  FUN_10171a5c4(unaff_x22 + 0x360);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xf8);
  *puVar1 = uVar4;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x138);
  puVar1[8] = uVar2;
  puVar1[0xb] = uVar4;
  puVar1[10] = uVar3;
  puVar1[5] = uVar8;
  puVar1[4] = uVar7;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0x11] = *(undefined8 *)(unaff_x22 + 0x178);
  puVar1[0x10] = uVar2;
  puVar1[0x13] = uVar4;
  puVar1[0x12] = uVar3;
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  puVar1[0xf] = uVar6;
  puVar1[0xe] = uVar5;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x19] = *(undefined8 *)(unaff_x22 + 0x1b8);
  puVar1[0x18] = uVar2;
  puVar1[0x1b] = uVar4;
  puVar1[0x1a] = uVar3;
  puVar1[0x15] = uVar8;
  puVar1[0x14] = uVar7;
  puVar1[0x17] = uVar6;
  puVar1[0x16] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010171a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171a388; end: 10171a56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10171a388(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [40];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar1 = 0;
  func_0x000101705ffc();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  lVar2 = *(long *)(param_2 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010efb92c0);
    lVar3 = lVar2;
    func_0x000107c4e60c(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uStack_d0 = 0xd000000000000018;
    uStack_c8 = 0x800000010ef1b1f0;
    uStack_c0 = 0;
    uStack_b8 = 0x201;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    func_0x000103e3687c(auStack_120);
    func_0x0001000a8868(auStack_120,uStack_108);
    pcVar5 = *(code **)(lStack_100 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(auStack_f8,0xd000000000000022,0x800000010efb92e0,&uStack_d0,lVar3,uStack_108,
              lStack_100);
    func_0x000100e1b054(&uStack_d0);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar2);
    func_0x000107c615ec(lVar3,2);
    func_0x000107c61170(param_1);
    func_0x0001000834e4(auStack_120);
    func_0x000103cd8a38(0);
    func_0x000107c613fc();
    puVar4 = auStack_f8;
    func_0x000103ccdb8c();
  }
  *(undefined1 **)(unaff_x20 + 0x10) = puVar4;
  return;
}



/* Entry: 10171a56c; end: 10171a597;  */

void FUN_10171a56c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10171a598; end: 10171a5c3;  */

void FUN_10171a598(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  return;
}



/* Entry: 10171a5c4; end: 10171a5f7;  */

undefined8 FUN_10171a5c4(undefined8 param_1)

{
  (*(code *)&DAT_103d519f0)();
  return param_1;
}



/* Entry: 10171a5f8; end: 10171a62f;  */

void FUN_10171a5f8(void)

{
  return;
}



/* Entry: 10171a630; end: 10171a663;  */

undefined8 FUN_10171a630(undefined8 param_1)

{
  (*(code *)&DAT_103d519c0)();
  return param_1;
}



/* Entry: 10171a664; end: 10171a667;  */

void FUN_10171a664(void)

{
  return;
}



/* Entry: 10171a668; end: 10171a733;  */

void FUN_10171a668(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_f0 [64];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = param_3;
  }
  lVar2 = -0x2000000000000000;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  func_0x000107c61434(param_4);
  func_0x000101597350(0,0,0,0);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000101597ae4(0,0,0,0);
  uStack_a8 = 0;
  uStack_98 = 0xc000000000000000;
  uStack_a0 = 0;
  uStack_78 = 0xc000000000000000;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_58 = 0xc000000000000000;
  uStack_60 = 0;
  uStack_38 = 0xc000000000000000;
  uStack_40 = 0;
  uStack_b0 = param_2;
  uStack_90 = uVar1;
  lStack_88 = lVar2;
  uStack_70 = param_2;
  uStack_50 = uVar1;
  lStack_48 = lVar2;
  func_0x00010171a768(&uStack_b0,auStack_f0);
  func_0x00010171a734(&uStack_70);
  param_1[1] = CONCAT44(uStack_a4,uStack_a8);
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = lStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  return;
}



/* Entry: 10171a734; end: 10171a7d7;  */

undefined8 FUN_10171a734(undefined8 param_1)

{
  (*(code *)&DAT_103d487cc)();
  return param_1;
}



/* Entry: 10171a7d8; end: 10171a7e3;  */

void FUN_10171a7d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 10171a7e4; end: 10171aa4b;  */

undefined1  [16] FUN_10171a7e4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe1;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efb9360);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010efb9330);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10171a8b0);
  (*pcVar1)();
}



/* Entry: 10171aa4c; end: 10171aa93;  */

void FUN_10171aa4c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d981b70,0x46,2);
  uRam0000000113802c60 = uStack_38;
  uRam0000000113802c58 = uStack_40;
  uRam0000000113802c70 = uStack_28;
  uRam0000000113802c68 = uStack_30;
  uRam0000000113802c80 = uStack_18;
  uRam0000000113802c78 = uStack_20;
  return;
}



/* Entry: 10171aa94; end: 10171ab3f;  */

void FUN_10171aa94(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_10171aad0;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x138);
LAB_10171aad0:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_10171aad0;
}



/* Entry: 10171ab40; end: 10171ac0b;  */

void FUN_10171ab40(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 != '\x01') || ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar2 = *(ulong *)(unaff_x20 + 0x10);
    uVar1 = *(ulong *)(unaff_x20 + 8) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 8),uVar2,2,param_2,param_3),
       unaff_x21 == 0)) {
      uVar2 = *(ulong *)(unaff_x20 + 0x20);
      uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 0x18),uVar2,3,param_2,param_3),
         unaff_x21 == 0)) {
        func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x28),
                            *(undefined8 *)(unaff_x20 + 0x30),param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 10171ac0c; end: 10171ac4f;  */

void FUN_10171ac0c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0x30) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10171ac50; end: 10171ac7f;  */

undefined1  [16] FUN_10171ac50(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 10171ac80; end: 10171acb3;  */

void FUN_10171ac80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 10171acb4; end: 10171acc7;  */

undefined1  [16] FUN_10171acb4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x10171acc4;
  return auVar1;
}



/* Entry: 10171acc8; end: 10171acef;  */

void FUN_10171acc8(void)

{
  FUN_10171aa94();
  return;
}



/* Entry: 10171acf0; end: 10171acf3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10171acf0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10171acf4; end: 10171ad2b;  */

uint FUN_10171acf4(long param_1,long param_2)

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
  FUN_10171b3c8();
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



/* Entry: 10171ad2c; end: 10171ad83;  */

uint FUN_10171ad2c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_10171afdc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10171ad84; end: 10171ae23;  */

/* WARNING: Possible PIC construction at 0x00010171add0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010171ade0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010171add4) */
/* WARNING: Removing unreachable block (ram,0x00010171ade4) */

void FUN_10171ad84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4348 != -1) {
    func_0x000107c61568(0x112dc4348,FUN_10171aa4c);
  }
  uVar5 = uRam0000000113802c80;
  uVar4 = uRam0000000113802c78;
  uVar3 = uRam0000000113802c70;
  uVar2 = uRam0000000113802c68;
  uVar1 = uRam0000000113802c60;
  *param_1 = uRam0000000113802c58;
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



/* Entry: 10171ae24; end: 10171ae5f;  */

void FUN_10171ae24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc4368;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc4368,&UNK_10d981b68);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10171ae60; end: 10171af83;  */

void FUN_10171ae60(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_60 = *(undefined8 *)(unaff_x20 + 8);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10171af84; end: 10171afdb;  */

uint FUN_10171af84(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_10171afdc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10171afdc; end: 10171b067;  */

/* WARNING: Possible PIC construction at 0x00010171b02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010171b030) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10171afdc(byte *param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (((*param_1 ^ *param_2) & 1) == 0) {
    pbVar12 = *(byte **)(param_1 + 8);
    pbVar15 = *(byte **)(param_1 + 0x10);
    pbVar16 = *(byte **)(param_2 + 8);
    pbVar17 = *(byte **)(param_2 + 0x10);
    if (*(byte **)(param_1 + 8) != *(byte **)(param_2 + 8) ||
        *(byte **)(param_1 + 0x10) != *(byte **)(param_2 + 0x10)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    uVar13 = *(ulong *)(param_1 + 0x18);
    if ((uVar13 == *(ulong *)(param_2 + 0x18) &&
         *(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20)) ||
       (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
      pbVar10 = *(byte **)(param_1 + 0x28);
      pbVar25 = *(byte **)(param_1 + 0x30);
      lVar24 = *(long *)(param_2 + 0x28);
      uVar13 = *(ulong *)(param_2 + 0x30);
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar24 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar24 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar24 = *(long *)(pbVar14 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar14 + 0x20);
            lVar24 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar24;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar26;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar14 + 0x20);
          lVar24 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar24;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar26;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 10171b068; end: 10171b0a7;  */

void FUN_10171b068(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d981aa0;
  func_0x000107c61520(&UNK_10d981aa0,&UNK_1103fe2b0);
  puRam0000000112dc4350 = puVar1;
  return;
}



/* Entry: 10171b0a8; end: 10171b0cb;  */

void FUN_10171b0a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10171b0cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10171b0cc; end: 10171b10b;  */

void FUN_10171b0cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d981a78;
  func_0x000107c61520(&UNK_10d981a78,&UNK_1103fe2b0);
  puRam0000000112dc4358 = puVar1;
  return;
}



/* Entry: 10171b10c; end: 10171b137;  */

void FUN_10171b10c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10171b068();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101717a2c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10171b138; end: 10171b13b;  */

void FUN_10171b138(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d981ae0;
  func_0x000107c61520(&UNK_10d981ae0,&UNK_1103fe2b0);
  puRam0000000112dc4360 = puVar1;
  return;
}



/* Entry: 10171b13c; end: 10171b17b;  */

void FUN_10171b13c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d981ae0;
  func_0x000107c61520(&UNK_10d981ae0,&UNK_1103fe2b0);
  puRam0000000112dc4360 = puVar1;
  return;
}



/* Entry: 10171b17c; end: 10171b1d7;  */

long FUN_10171b17c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10171b1d8; end: 10171b2c7;  */

undefined1 * FUN_10171b1d8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return param_1;
}



/* Entry: 10171b2c8; end: 10171b323;  */

undefined1 * FUN_10171b2c8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10171b324; end: 10171b3c7;  */

int FUN_10171b324(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10171b3c8; end: 10171b407;  */

void FUN_10171b3c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d981a4c;
  func_0x000107c61520(&DAT_10d981a4c,&UNK_1103fe2b0);
  puRam0000000112dc4370 = puVar1;
  return;
}



/* Entry: 10171b408; end: 10171b4c7;  */

long FUN_10171b408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined *puStack_58;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112dc4380,&UNK_10d981bc8);
  func_0x000107c613fc();
  ppuVar1 = &puStack_58;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + 0x48) = ppuVar1;
  *(undefined1 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return unaff_x20;
}



/* Entry: 10171b4c8; end: 10171b527;  */

void FUN_10171b4c8(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5f804();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171b528; end: 10171b7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10171b528(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + 0x38);
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x40);
  *(long *)(unaff_x22 + 200) = lVar7;
  lVar8 = lVar7;
  if (lVar7 == 0) {
    func_0x000100083b20(unaff_x22 + 0x90);
    lVar8 = *(long *)(unaff_x22 + 0x90);
    lVar7 = lVar8;
    func_0x000107c5b484();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10171b7dc);
      (*pcVar2)();
    }
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xd0) = lVar8;
    func_0x000107c61170(lVar7);
    if (lVar8 != 0) {
      lVar1 = *(long *)(unaff_x22 + 0xb8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      lVar7 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar6 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      func_0x000100083b20(unaff_x22 + 0xa0);
      lVar9 = *(long *)(unaff_x22 + 0xa0);
      uVar3 = *(undefined8 *)(lVar9 + _DAT_113091ad8);
      func_0x000107c61174();
      func_0x000107c61170(lVar9);
      uVar4 = uVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      *(undefined8 *)(lVar7 + 0x20) = uVar3;
      *(undefined8 *)(lVar7 + 0x28) = uVar6;
      lVar9 = lVar7;
      func_0x000107c5fc48(lVar7,PTR___sSSN_11034da80);
      *(long *)(unaff_x22 + 0xd8) = lVar9;
      func_0x000107c61574(lVar7);
      FUN_10171dbd0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar1 + 0x68))
                (uVar5,*(undefined4 *)
                        PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,uVar10);
      uVar4 = uVar5;
      func_0x000107c5fff0();
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
      (**(code **)(lVar1 + 8))(uVar5,uVar10);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10171b7dc;
      lVar7 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar7,1);
      uVar5 = 0x112dc4478;
      func_0x0001000285a8(0x112dc4478,&UNK_10d9a82c0);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_10171b9f8;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1103fe5b0;
      *(long *)(unaff_x22 + 0x70) = lVar7;
      func_0x000107c5b4fc(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    lVar7 = *(long *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    func_0x000107c6142c(uVar5);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + 0x38);
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x40);
    func_0x000107c61434(lVar8);
    lVar7 = *(long *)(unaff_x22 + 200);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61434(lVar7);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010171b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5,lVar8);
  return;
}



/* Entry: 10171b7dc; end: 10171b833;  */

void FUN_10171b7dc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xe8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10171b834;
  }
  else {
    pcVar1 = FUN_10171b968;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10171b834; end: 10171b967;  */

void FUN_10171b834(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(ulong *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  if (uVar9 != 0) {
    uVar8 = uVar9 & 0xffffffffffffff8;
    if (uVar9 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar4 = uVar9;
      if (-1 < (long)uVar9) {
        uVar4 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(uVar9);
    }
    else {
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10171b968);
          (*pcVar3)();
        }
        lVar5 = *(long *)(uVar9 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar5 = 0;
        param_2 = uVar9;
        func_0x00010103193c();
      }
      func_0x000107c6142c(uVar9);
      lVar7 = lVar5;
      func_0x000107c5b37c();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar7 != 0) {
        lVar5 = lVar7;
        func_0x000107c5faec();
        func_0x000107c61170(lVar7);
        goto LAB_10171b904;
      }
    }
  }
  lVar5 = 0;
  param_2 = 0;
LAB_10171b904:
  lVar7 = *(long *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(lVar7 + 0x40);
  *(long *)(lVar7 + 0x38) = lVar5;
  *(ulong *)(lVar7 + 0x40) = param_2;
  func_0x000107c6142c(uVar6);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + 0x38);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61434(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010171b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6,uVar2);
  return;
}



/* Entry: 10171b968; end: 10171b9f7;  */

void FUN_10171b968(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c614ac(uVar3);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61434(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010171b9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3);
  return;
}



/* Entry: 10171b9f8; end: 10171bac3;  */

void FUN_10171b9f8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_10171dc10(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10171dbd0(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c5fc54(param_2,uVar2);
  }
  **(long **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 10171bac4; end: 10171baf7; -[_TtC38StoryReplyMutingServicesImplementation27StoryReplyMutingServiceImpl mutedUsersObservable] */

void FUN_10171bac4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_10171baf8();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10171baf8; end: 10171bc2f;  */

long FUN_10171baf8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  lVar5 = lVar1;
  if (lVar1 == 0) {
    if ((*(byte *)(unaff_x20 + 0x50) & 1) == 0) {
      puVar2 = &UNK_1103fe410;
      func_0x000107c613fc(&UNK_1103fe410,0x18,7);
      func_0x000107c61644(puVar2 + 0x10);
      uVar3 = 1;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10d981bd8,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar3);
    }
    lVar5 = *(long *)(unaff_x20 + 0x48);
    uVar3 = 0;
    FUN_10171dbd0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c6157c(lVar5);
    pcVar4 = FUN_10171c0b4;
    func_0x0001000bfde0(FUN_10171c0b4,0,uVar3);
    func_0x000107c61574();
    func_0x0001004575f0();
    func_0x000107c61574(pcVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
    *(long *)(unaff_x20 + 0x58) = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar5;
}



/* Entry: 10171bc30; end: 10171bc5b; -[_TtC38StoryReplyMutingServicesImplementation27StoryReplyMutingServiceImpl setMutedUsersObservable:] */

void FUN_10171bc30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10171bc5c; end: 10171bc73;  */

void FUN_10171bc5c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171bc74,0,0);
  return;
}



/* Entry: 10171bc74; end: 10171bd47;  */

void FUN_10171bc74(void)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x38) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x10171bcf8;
    plVar2[0x1a] = lVar4;
    plVar3 = (long *)0xf0;
    func_0x000107c615b8();
    plVar2[0x1b] = (long)plVar3;
    *plVar3 = (long)plVar2;
    plVar3[1] = 0x10171bdfc;
    plVar3[0x15] = lVar4;
    lVar4 = 0;
    func_0x000107c5f804();
    plVar3[0x16] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar3[0x17] = lVar4;
    uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x18] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010171bcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171bd48; end: 10171bdb3;  */

void FUN_10171bd48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar3 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar3 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  func_0x000107c6157c(uVar2);
  func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010171bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10171bdb4; end: 10171be4b;  */

void FUN_10171bdb4(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0xd0) = unaff_x20;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10171bdfc;
  plVar3[0x15] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5f804();
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171b528,0,0);
  return;
}



/* Entry: 10171be4c; end: 10171bf27;  */

void FUN_10171be4c(long *param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xe8);
  if (lVar4 != 0) {
    FUN_10171c660();
    *(long **)(unaff_x22 + 0xf0) = param_1;
    if (param_1 != (long *)0x0) {
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xe0);
      *(long *)(unaff_x22 + 0x78) = lVar4;
      *(undefined8 *)(unaff_x22 + 0x80) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xe000000000000000;
      *(undefined8 *)(unaff_x22 + 0x98) = 0xc000000000000000;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      piVar3 = *(int **)(*param_1 + 0xa8);
      iVar1 = *piVar3;
      plVar2 = (long *)(ulong)(uint)piVar3[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf8) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10171bf28;
                    /* WARNING: Could not recover jumptable at 0x00010171befc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar3))
                (plVar2,unaff_x22 + 0xa0,unaff_x22 + 0x70,unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010171bf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 10171bf28; end: 10171bf83;  */

void FUN_10171bf28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10171bf84;
  }
  else {
    pcVar1 = FUN_10171c054;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10171bf84; end: 10171c053;  */

void FUN_10171bf84(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  FUN_10171ceb4();
  if ((*(byte *)(lVar3 + 0x50) & 1) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd0) + 0x48);
    *(undefined8 *)(unaff_x22 + 200) = param_1;
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c6157c(uVar1);
    func_0x0001007d6d78((undefined8 *)(unaff_x22 + 200));
    FUN_10171d320(unaff_x22 + 0xa0);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar1);
    *(undefined1 *)(lVar3 + 0x50) = 1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    FUN_10171d320(unaff_x22 + 0xa0);
    func_0x000107c61574(uVar1);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c6142c(uVar1);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010171c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(param_1);
  return;
}



/* Entry: 10171c054; end: 10171c0b3;  */

void FUN_10171c054(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c614ac(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(0xe000000000000000);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010171c0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}


