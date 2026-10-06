/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040e2304; end: 1040e244f;  */

void FUN_1040e2304(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = uVar6;
  (**(code **)(unaff_x22 + 0x88))(uVar6,1,uVar7);
  if ((int)uVar4 == 1) {
    lVar9 = *(long *)(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    (**(code **)(lVar9 + 8))(*(undefined8 *)(unaff_x22 + 0x78),uVar7);
    (**(code **)(lVar3 + 8))(uVar6,uVar4);
    (**(code **)(lVar9 + 0x38))(uVar8,1,1,uVar7);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040e23dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar9 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(unaff_x22 + 0x90))(*(undefined8 *)(unaff_x22 + 0x70),uVar6,uVar7);
  piVar2 = *(int **)(lVar9 + *(int *)(lVar3 + 0x24));
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1040e2450;
                    /* WARNING: Could not recover jumptable at 0x0001040e244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 1040e2450; end: 1040e24bf;  */

void FUN_1040e2450(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0xcc) = param_1 & 1;
    pcVar1 = FUN_1040e24c0;
  }
  else {
    pcVar1 = FUN_1040e27f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040e24c0; end: 1040e2683;  */

void FUN_1040e24c0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((*(byte *)(unaff_x22 + 0xcc) & 1) != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x38));
    puVar3 = PTR___sSciTL_11034fea8;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar5,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar5,uVar1,uVar4,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1040e22a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar6,*(undefined8 *)(unaff_x22 + 0x58),uVar4,uVar5);
    return;
  }
  pcVar9 = *(code **)(unaff_x22 + 0x90);
  lVar10 = (long)*(int *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar11 = *(long *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(lVar11 + 8))(*(undefined8 *)(unaff_x22 + 0x78),uVar4);
  (**(code **)(lVar2 + 8))(lVar12 + lVar10,uVar1);
  (**(code **)(lVar11 + 0x10))(lVar12 + lVar10,uVar5,uVar4);
  pcVar7 = *(code **)(lVar11 + 0x38);
  (*pcVar7)(lVar12 + lVar10,0,1,uVar4);
  (*pcVar9)(uVar8,uVar5,uVar4);
  (*pcVar7)(uVar8,0,1,uVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040e2680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e2684; end: 1040e26df;  */

void FUN_1040e2684(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040e26e0;
  }
  else {
    pcVar1 = FUN_1040e2784;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040e26e0; end: 1040e2783;  */

void FUN_1040e26e0(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  pcVar5 = *(code **)(unaff_x22 + 0x80);
  iVar2 = *(int *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar7 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x28))
            (lVar7 + iVar2,*(undefined8 *)(unaff_x22 + 0x50),uVar4);
  (*pcVar5)(uVar3,lVar7 + iVar2,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001040e2780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e2784; end: 1040e27ef;  */

void FUN_1040e2784(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001040e27ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e27f0; end: 1040e287f;  */

void FUN_1040e27f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  pcVar4 = *(code **)(*(long *)(unaff_x22 + 0x68) + 8);
  (*pcVar4)(*(undefined8 *)(unaff_x22 + 0x70),uVar3);
  (*pcVar4)(uVar1,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001040e287c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e2880; end: 1040e28df;  */

void FUN_1040e2880(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1040e3efc;
  plVar4[3] = param_2;
  plVar4[4] = unaff_x20;
  plVar4[2] = param_1;
  lVar6 = *(long *)(param_2 + 0x18);
  plVar4[5] = lVar6;
  lVar5 = *(long *)(param_2 + 0x10);
  plVar4[6] = lVar5;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar6,lVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar4[7] = lVar1;
  lVar5 = 0;
  __sSqMa(0,lVar1);
  plVar4[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[9] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xb] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xd] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xe] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xf] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e210c,0,0);
  return;
}



/* Entry: 1040e28e0; end: 1040e296b;  */

void FUN_1040e28e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040e296c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6,unaff_x22 + 0x10);
  return;
}



/* Entry: 1040e296c; end: 1040e29bf;  */

void FUN_1040e296c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040e29bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040e29c0; end: 1040e2adb;  */

void FUN_1040e29c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar3 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar6 + 0x10))(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar3,lVar4,uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar2 = puVar1[1];
  FUN_1040e1f3c(param_1,lVar3,*puVar1,uVar2,lVar4,uVar5,param_3);
  _swift_retain(uVar2);
  return;
}



/* Entry: 1040e2adc; end: 1040e2b67;  */

void FUN_1040e2adc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar4,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1040e2b68; end: 1040e2b9f;  */

void FUN_1040e2b68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd6f70,param_1);
  return;
}



/* Entry: 1040e2ba0; end: 1040e2bd3;  */

void FUN_1040e2ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1040e29c0(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001040e2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040e2bd4; end: 1040e2bdf;  */

void FUN_1040e2bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f00c0);
  return;
}



/* Entry: 1040e2be0; end: 1040e2c57;  */

void FUN_1040e2be0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040e2c58; end: 1040e2d07;  */

long * FUN_1040e2c58(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar4[1];
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Entry: 1040e2d08; end: 1040e2d47;  */

void FUN_1040e2d08(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040e2d48; end: 1040e2edb;  */

long FUN_1040e2d48(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = puVar2[1];
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 1040e2edc; end: 1040e2fcf;  */

uint * FUN_1040e2edc(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_1040e2f6c;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1040e2f6c:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_1040e2f6c;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040e2fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Entry: 1040e2fd0; end: 1040e312f;  */

void FUN_1040e2fd0(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)lVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001040e30e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
        puVar7[1] = 0;
      }
      else {
        *puVar7 = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,lVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  return;
}



/* Entry: 1040e3130; end: 1040e313b;  */

void FUN_1040e3130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f0138);
  return;
}



/* Entry: 1040e313c; end: 1040e3213;  */

void FUN_1040e313c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = 0x13f;
  uVar4 = uVar2;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar4 < 0x40) {
    lStack_48 = *(long *)(lVar3 + -8) + 0x40;
    puStack_40 = PTR___syycWV_11034f1c0 + 0x40;
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    lVar3 = 0x13f;
    __sSqMa();
    if (uVar4 < 0x40) {
      lStack_38 = *(long *)(lVar3 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,3,&lStack_48,param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 1040e3214; end: 1040e33ab;  */

long * FUN_1040e3214(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar2 = PTR___sSciTL_11034fea8;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar15,uVar5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar14 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar15,uVar5,puVar2,PTR___s7ElementSciTl_11034fb58);
  lVar11 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  lVar7 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar1 = (uint)uVar6 | *(uint *)(lVar14 + 0x50) & 0xf8;
  if ((((*(uint *)(lVar14 + 0x50) | *(uint *)(lVar11 + 0x50)) >> 0x14 & 1) == 0) &&
     (0xffffffffffffffe6 < ((-0x11 - uVar6) - (lVar12 + 7U & 0xfffffffffffffff8) | uVar6) - lVar7 &&
      uVar1 < 8)) {
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar3);
    puVar9 = (undefined8 *)((long)param_1 + lVar12 + 7 & 0xffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar12 + 7 & 0xfffffffffffffff8);
    uVar5 = puVar8[1];
    uVar15 = *puVar8;
    puVar10 = puVar9 + 2;
    puVar9[1] = puVar8[1];
    *puVar9 = uVar15;
    pcVar13 = *(code **)(lVar11 + 0x30);
    _swift_retain(uVar5);
    puVar9 = puVar8 + 2;
    (*pcVar13)(puVar9,1,lVar4);
    if ((int)puVar9 == 0) {
      (**(code **)(lVar11 + 0x10))(puVar10,puVar8 + 2,lVar4);
      (**(code **)(lVar11 + 0x38))(puVar10,0,1,lVar4);
    }
    else {
      _memcpy(puVar10,puVar8 + 2,lVar7);
    }
  }
  else {
    uVar6 = (ulong)(uVar1 | 7);
    lVar7 = *param_2;
    *param_1 = lVar7;
    param_1 = (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040e33ac; end: 1040e3493;  */

void FUN_1040e33ac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = PTR___sSciTL_11034fea8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar4 + -8);
  (**(code **)(lVar7 + 8))(param_1,lVar4);
  uVar8 = param_1 + *(long *)(lVar7 + 0x40) + 7U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar8 + 8));
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,puVar3,PTR___s7ElementSciTl_11034fb58);
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar8 + uVar6 + 0x10;
  uVar5 = uVar8 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x30))(uVar5,1,lVar4);
  if ((int)uVar5 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040e3490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(uVar8 & (uVar6 ^ 0xffffffffffffffff),lVar4);
  return;
}



/* Entry: 1040e3494; end: 1040e3c3f;  */

long FUN_1040e3494(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  puVar5 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar9 = *(long *)(lVar6 + -8);
  (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar6);
  lVar6 = *(long *)(lVar9 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar6 + param_1 & 0xfffffffffffffff8);
  puVar12 = (undefined8 *)(lVar6 + param_2 & 0xfffffffffffffff8);
  uVar10 = puVar12[1];
  uVar14 = *puVar12;
  puVar11[1] = puVar12[1];
  *puVar11 = uVar14;
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar3,puVar5,PTR___s7ElementSciTl_11034fb58);
  lVar9 = *(long *)(lVar6 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = uVar8 + 0x10 + (long)puVar11;
  uVar2 = uVar8 + 0x10 + (long)puVar12;
  pcVar13 = *(code **)(lVar9 + 0x30);
  _swift_retain(uVar10);
  uVar7 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar13)(uVar7,1,lVar6);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar9 + 0x10))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar6);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar6);
  }
  else {
    lVar6 = *(long *)(lVar9 + 0x40);
    if (*(int *)(lVar9 + 0x54) == 0) {
      lVar6 = lVar6 + 1;
    }
    _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar6);
  }
  return param_1;
}



/* Entry: 1040e3c40; end: 1040e3ef7;  */

void FUN_1040e3c40(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  byte bVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  
  puVar8 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar21 = *(long *)(lVar9 + -8);
  uVar5 = *(uint *)(lVar21 + 0x54);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar3,puVar8,PTR___s7ElementSciTl_11034fb58);
  lVar12 = *(long *)(lVar10 + -8);
  uVar11 = *(uint *)(lVar12 + 0x54);
  uVar2 = 0;
  if (uVar11 != 0) {
    uVar2 = uVar11 - 1;
  }
  uVar1 = uVar5;
  if (uVar5 <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar14 = *(long *)(lVar21 + 0x40);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar17 = *(long *)(lVar12 + 0x40);
  if (uVar11 == 0) {
    lVar17 = lVar17 + 1;
  }
  lVar17 = (uVar13 + (lVar14 + 7U & 0xfffffffffffffff8) + 0x10 & (uVar13 ^ 0xffffffffffffffff)) +
           lVar17;
  uVar20 = (uint)lVar17;
  uVar18 = (uint)param_2;
  bVar16 = 0;
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    if (uVar20 < 4) {
      uVar6 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar20 << 3 & 0x1f)) >>
              (ulong)(uVar20 << 3 & 0x1f);
      bVar16 = 2;
      if (0xfffe < uVar6) {
        bVar16 = 4;
      }
      if (uVar6 < 0xff) {
        bVar16 = uVar6 != 0;
      }
    }
    else {
      bVar16 = 1;
    }
  }
  if (uVar2 < uVar18) {
    uVar18 = uVar18 + ~uVar2;
    if (uVar20 < 4) {
      iVar19 = (uVar18 >> (ulong)(uVar20 << 3 & 0x1f)) + 1;
      if (uVar20 != 0) {
        uVar2 = uVar18 & (-1 << (ulong)(uVar20 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar17);
        uVar7 = (undefined2)uVar2;
        if (uVar20 == 3) {
          *(undefined2 *)param_1 = uVar7;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar20 == 2) {
          *(undefined2 *)param_1 = uVar7;
        }
        else {
          *(char *)param_1 = (char)uVar18;
        }
      }
    }
    else {
      _bzero(param_1,lVar17);
      *param_1 = uVar18;
      iVar19 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + lVar17) = (char)iVar19;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + lVar17) = (short)iVar19;
    }
    else {
      *(int *)((long)param_1 + lVar17) = iVar19;
    }
  }
  else {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + lVar17) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + lVar17) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar17) = 0;
    }
    if (uVar18 != 0) {
      if (uVar5 == uVar2) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
        lVar10 = lVar9;
        uVar11 = uVar5;
      }
      else {
        puVar15 = (ulong *)((long)param_1 + lVar14 + 7 & 0xfffffffffffffff8);
        if (-1 < (int)uVar1) {
          if (-1 < (int)uVar18) {
            *puVar15 = (ulong)(uVar18 - 1);
            return;
          }
          *puVar15 = (ulong)(uVar18 & 0x7fffffff);
          puVar15[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
        param_1 = (uint *)((long)puVar15 + uVar13 + 0x10 & ~uVar13);
        param_2 = (ulong)(uVar18 + 1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001040e3e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar11,lVar10);
      return;
    }
  }
  return;
}



/* Entry: 1040e3ef8; end: 1040e3f9f;  */

void FUN_1040e3ef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001040e1d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e3fa0; end: 1040e40e3;  */

void FUN_1040e3fa0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  (**(code **)(lVar1 + 0x10))(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  (**(code **)(lVar1 + 0x20))
            (param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return;
}



/* Entry: 1040e40e4; end: 1040e4197;  */

void FUN_1040e40e4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,uVar4,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar2 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e4198,0,0);
  return;
}



/* Entry: 1040e4198; end: 1040e4373;  */

void FUN_1040e4198(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  if ((param_1 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar1 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar5,uVar6,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar4,1,lVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar2 = *(long *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    if ((int)uVar4 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar5,uVar6,lVar1,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
      __sSt4next7ElementQzSgyFTj(uVar3,lVar1,uVar5);
      (**(code **)(lVar2 + 0x30))(uVar3,1,uVar7);
      if ((int)uVar3 != 1) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
        pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x50) + 0x20);
        (*pcVar8)(uVar5,*(undefined8 *)(unaff_x22 + 0x48),uVar3);
        (*pcVar8)(uVar6,uVar5,uVar3);
        uVar5 = 0;
        goto LAB_1040e42ec;
      }
    }
    else {
      (**(code **)(lVar2 + 0x38))(uVar3,1,1,uVar7);
    }
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
              (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
             PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(uVar3,lVar1);
  uVar5 = 1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar3,1,1,lVar2);
LAB_1040e42ec:
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar5,1,*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001040e4338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e4374; end: 1040e43d3;  */

void FUN_1040e4374(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040e43d4;
  plVar3[2] = param_1;
  plVar3[3] = unaff_x20;
  lVar5 = *(long *)(param_2 + 0x18);
  plVar3[4] = lVar5;
  lVar4 = *(long *)(param_2 + 0x10);
  plVar3[5] = lVar4;
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar5,lVar4,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  plVar3[6] = lVar1;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  plVar3[7] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[8] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[9] = uVar2;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xb] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e4198,0,0);
  return;
}



/* Entry: 1040e43d4; end: 1040e4413;  */

void FUN_1040e43d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040e4410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040e4414; end: 1040e4497;  */

void FUN_1040e4414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040e4498;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar1,param_1,param_2,param_3,param_5,param_6);
  return;
}



/* Entry: 1040e4498; end: 1040e44db;  */

void FUN_1040e4498(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040e44d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040e44dc; end: 1040e45cb;  */

void FUN_1040e44dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x8_00;
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __sST12makeIterator0B0QzyFTj(lVar1,lVar2,uVar3);
  func_0x0001040e4020(param_1,lVar1,lVar2,uVar3);
  return;
}



/* Entry: 1040e45cc; end: 1040e45e7;  */

undefined * FUN_1040e45cc(void)

{
  return PTR___ss5NeverOs5ErrorsWP_11034ee90;
}



/* Entry: 1040e45e8; end: 1040e46f3;  */

void FUN_1040e45e8(long param_1)

{
  FUN_1040e44dc();
                    /* WARNING: Could not recover jumptable at 0x0001040e4614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040e46f4; end: 1040e4703;  */

void FUN_1040e46f4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001040e4700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 1040e4704; end: 1040e47c3;  */

undefined8 FUN_1040e4704(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x10))();
  return param_1;
}



/* Entry: 1040e47c4; end: 1040e48b7;  */

uint * FUN_1040e47c4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1040e485c;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_1040e47f4;
    }
    if (1 < uVar7) goto LAB_1040e47f0;
  }
  else {
LAB_1040e47f0:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1040e47f4:
    if (uVar7 != 0) {
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar4 != 0) {
        uVar3 = 4;
        if (uVar4 < 4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_1040e485c:
                    /* WARNING: Could not recover jumptable at 0x0001040e4860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Entry: 1040e48b8; end: 1040e4a63;  */

void FUN_1040e48b8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = (uint)lVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar6);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001040e4a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Entry: 1040e4a64; end: 1040e4a6f;  */

void FUN_1040e4a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f01b0);
  return;
}



/* Entry: 1040e4a70; end: 1040e4af7;  */

void FUN_1040e4a70(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&lStack_28,param_1 + 0x20);
  }
  return;
}



/* Entry: 1040e4af8; end: 1040e4bf7;  */

long * FUN_1040e4af8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSTTL_11034db40
             ,PTR___s8IteratorSTTl_11034d648);
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) && uVar3 < 0x19) {
    plVar2 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar1);
    if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar3);
      return param_1;
    }
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040e4bf8; end: 1040e4d33;  */

void FUN_1040e4bf8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),PTR___sSTTL_11034db40
             ,PTR___s8IteratorSTTl_11034d648);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040e4c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 1040e4d34; end: 1040e4e3f;  */

undefined8 FUN_1040e4d34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSTTL_11034db40
             ,PTR___s8IteratorSTTl_11034d648);
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,1,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_1040e4de8;
    }
    (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_1040e4de8:
      lVar1 = *(long *)(lVar4 + 0x40);
      if (*(int *)(lVar4 + 0x54) == 0) {
        lVar1 = lVar1 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
      return param_1;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Entry: 1040e4e40; end: 1040e4efb;  */

undefined8 FUN_1040e4e40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSTTL_11034db40
             ,PTR___s8IteratorSTTl_11034d648);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
    lVar1 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar1 = lVar1 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
    return param_1;
  }
  (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 1040e4efc; end: 1040e5007;  */

undefined8 FUN_1040e4efc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSTTL_11034db40
             ,PTR___s8IteratorSTTl_11034d648);
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,1,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,1,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_1040e4fb0;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_1040e4fb0:
      lVar1 = *(long *)(lVar4 + 0x40);
      if (*(int *)(lVar4 + 0x54) == 0) {
        lVar1 = lVar1 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
      return param_1;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Entry: 1040e5008; end: 1040e5153;  */

int FUN_1040e5008(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),PTR___sSTTL_11034db40
             ,PTR___s8IteratorSTTl_11034d648);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 == 0) {
    uVar7 = uVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1040e50d8;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1040e50d8;
      goto LAB_1040e5070;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1040e5070:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_1040e50d8:
  if (uVar2 < 2) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if ((int)param_1 != 0) {
    return (int)param_1 + -1;
  }
  return 0;
}



/* Entry: 1040e5154; end: 1040e5337;  */

void FUN_1040e5154(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),PTR___sSTTL_11034db40
             ,PTR___s8IteratorSTTl_11034d648);
  bVar10 = 0;
  lVar6 = *(long *)(lVar5 + -8);
  uVar3 = *(uint *)(lVar6 + 0x54);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar3 - 1;
  }
  lVar7 = *(long *)(lVar6 + 0x40);
  if (uVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar8 = (uint)lVar7;
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    if (uVar8 < 4) {
      uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar8 << 3 & 0x1f)) >> (ulong)(uVar8 << 3 & 0x1f)
              ) + 1;
      bVar10 = 2;
      if (0xffff < uVar1) {
        bVar10 = 4;
      }
      if (uVar1 < 0x100) {
        bVar10 = 1 < uVar1;
      }
    }
    else {
      bVar10 = 1;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar8 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar7);
        uVar4 = (undefined2)uVar2;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar7);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + lVar7) = (char)iVar9;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + lVar7) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + lVar7) = iVar9;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar7) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar7) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar7) = 0;
    }
    if ((param_2 != 0) && (1 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0001040e52d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2 + 1,uVar3,lVar5);
      return;
    }
  }
  return;
}



/* Entry: 1040e5338; end: 1040e534b;  */

void FUN_1040e5338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f01ec);
  return;
}



/* Entry: 1040e534c; end: 1040e53df;  */

void FUN_1040e534c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  lVar2 = 0;
  __sSqMa(0,uVar1);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e53e0,0,0);
  return;
}



/* Entry: 1040e53e0; end: 1040e54cb;  */

void FUN_1040e53e0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar2 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x10))
              (uVar1,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x30));
    lVar5 = *(long *)(lVar3 + -8);
    pcVar2 = *(code **)(lVar5 + 0x30);
    (*pcVar2)(uVar1,1,lVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    if ((int)uVar1 == 1) {
      (**(code **)(lVar5 + 0x10))
                (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x20),lVar3);
      (*pcVar2)(uVar4,1,lVar3);
      if ((int)uVar4 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
      }
      goto LAB_1040e54ac;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar2 = *(code **)(lVar5 + 0x20);
  }
  (*pcVar2)(uVar1,uVar4,lVar3);
LAB_1040e54ac:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001040e54c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e54cc; end: 1040e5627;  */

void FUN_1040e54cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = param_10;
  uStack_68 = param_11;
  lVar4 = 0;
  uStack_88 = param_7;
  lStack_80 = param_8;
  uStack_78 = param_9;
  FUN_1040e8e0c(0,&uStack_88);
  puVar3 = PTR___ss5ClockTL_110350028;
  iVar2 = *(int *)(lVar4 + 0x3c);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_11,param_8,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_10,param_7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  iVar2 = *(int *)(lVar4 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,param_11,param_8,puVar3,PTR___s8Durations5ClockPTl_11034fb70);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1 + iVar2,param_3,lVar5);
  (**(code **)(*(long *)(param_8 + -8) + 0x20))(param_1 + *(int *)(lVar4 + 0x44),param_4,param_8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x48));
  *puVar1 = param_5;
  puVar1[1] = param_6;
  return;
}



/* Entry: 1040e5628; end: 1040e58d7;  */

void FUN_1040e5628(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  puVar1 = PTR___ss5ClockTL_110350028;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,uVar8,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,uVar8,puVar1,PTR___s7Instants5ClockPTl_11034fb68);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  lVar5 = 0xff;
  __sSqMa(0xff,lVar3);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,lVar5,0,0);
  *(long *)(unaff_x22 + 0x68) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  lVar9 = *(long *)(param_2 + 0x20);
  *(long *)(unaff_x22 + 0x98) = lVar9;
  lVar2 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  lVar6 = 0;
  __sSqMa(0,lVar2);
  *(long *)(unaff_x22 + 200) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar4;
  lVar2 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar4;
  lVar2 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar4;
  lVar2 = 0;
  __sSqMa(0,lVar9);
  *(long *)(unaff_x22 + 0x148) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e58d8,0,0);
  return;
}



/* Entry: 1040e58d8; end: 1040e5a6f;  */

void FUN_1040e58d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar2 = *(long *)(unaff_x22 + 0x118);
  lVar11 = *(long *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  pcVar8 = *(code **)(*(long *)(unaff_x22 + 0xa0) + 0x38);
  *(code **)(unaff_x22 + 0x168) = pcVar8;
  (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x160),1,1,*(undefined8 *)(unaff_x22 + 0x98));
  iVar4 = *(int *)(lVar1 + 0x3c);
  *(int *)(unaff_x22 + 0x1b0) = iVar4;
  pcVar8 = *(code **)(lVar11 + 0x10);
  *(code **)(unaff_x22 + 0x170) = pcVar8;
  (*pcVar8)(uVar9,lVar3 + iVar4,uVar6);
  pcVar8 = *(code **)(lVar2 + 0x30);
  *(code **)(unaff_x22 + 0x178) = pcVar8;
  (*pcVar8)(uVar9,1,uVar10);
  if ((int)uVar9 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    __ss5ClockP3now7InstantQzvgTj
              (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x30),
               *(undefined8 *)(unaff_x22 + 0x28));
    (*pcVar8)(uVar9,1,uVar10);
    if ((int)uVar9 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
                (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x60));
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x110),
               *(undefined8 *)(unaff_x22 + 0x58));
  }
  puVar5 = PTR___sSciTL_11034fea8;
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar9,uVar10,uVar6,puVar5,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x180) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1040e5a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar7,*(undefined8 *)(unaff_x22 + 0xd8),uVar6,uVar9);
  return;
}



/* Entry: 1040e5a70; end: 1040e5acb;  */

void FUN_1040e5a70(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040e5acc;
  }
  else {
    pcVar1 = FUN_1040e69b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040e5acc; end: 1040e5fcf;  */

void FUN_1040e5acc(void)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 *puVar27;
  undefined8 uVar28;
  code *pcVar29;
  code *pcVar30;
  
  uVar20 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar21 = *(long *)(unaff_x22 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar23 = uVar20;
  (**(code **)(lVar21 + 0x30))(uVar20,1,uVar19);
  if ((int)uVar23 != 1) {
    lVar9 = *(long *)(unaff_x22 + 0x18);
    lVar16 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(lVar21 + 0x20))(*(undefined8 *)(unaff_x22 + 0xe8),uVar20,uVar19);
    piVar2 = *(int **)(lVar16 + *(int *)(lVar9 + 0x48));
    iVar8 = *piVar2;
    plVar11 = (long *)(ulong)(uint)piVar2[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_1040e5fd0;
                    /* WARNING: Could not recover jumptable at 0x0001040e5c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar8 + (long)piVar2))
              (plVar11,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x160),
               *(undefined8 *)(unaff_x22 + 0xe8));
    return;
  }
  uVar23 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar21 = *(long *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar9 = *(long *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))(uVar20,*(undefined8 *)(unaff_x22 + 200));
  (**(code **)(lVar21 + 0x10))(uVar23,uVar28,uVar19);
  uVar20 = uVar23;
  (**(code **)(lVar9 + 0x30))(uVar23,1,uVar1);
  (**(code **)(lVar21 + 8))(uVar23,uVar19);
  if ((int)uVar20 == 1) {
    pcVar30 = *(code **)(*(long *)(unaff_x22 + 0x118) + 8);
    puVar25 = (undefined8 *)(unaff_x22 + 0x140);
    puVar27 = (undefined8 *)(unaff_x22 + 0x58);
  }
  else {
    puVar25 = (undefined8 *)(unaff_x22 + 0xf8);
    uVar20 = *puVar25;
    pcVar29 = *(code **)(unaff_x22 + 0x178);
    puVar27 = (undefined8 *)(unaff_x22 + 0x58);
    uVar23 = *puVar27;
    (**(code **)(unaff_x22 + 0x170))
              (uVar20,*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x1b0),
               *(undefined8 *)(unaff_x22 + 0x60));
    (*pcVar29)(uVar20,1,uVar23);
    if ((int)uVar20 == 1) {
      lVar21 = *(long *)(unaff_x22 + 0xf0);
      (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
                (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x58));
      pcVar30 = *(code **)(lVar21 + 8);
      puVar27 = (undefined8 *)(unaff_x22 + 0x60);
    }
    else {
      uVar23 = *(undefined8 *)(unaff_x22 + 0x130);
      lVar16 = *(long *)(unaff_x22 + 0x118);
      uVar10 = *(ulong *)(unaff_x22 + 0x88);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar12 = *(long *)(unaff_x22 + 0x80);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar21 = *(long *)(unaff_x22 + 0x20);
      lVar9 = *(long *)(unaff_x22 + 0x28);
      lVar22 = *(long *)(unaff_x22 + 0x18);
      (**(code **)(lVar16 + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0xf8),uVar28);
      iVar8 = *(int *)(lVar22 + 0x40);
      __ss5ClockP3now7InstantQzvgTj(uVar23,uVar20,lVar9);
      _swift_getAssociatedConformanceWitness
                (lVar9,uVar20,uVar28,PTR___ss5ClockTL_110350028,
                 PTR___ss5ClockP7InstantAB_s0B8ProtocolTn_110350018);
      __ss15InstantProtocolP8duration2to8DurationQzx_tFTj(uVar19,uVar23,uVar28,lVar9);
      pcVar30 = *(code **)(lVar16 + 8);
      *(code **)(unaff_x22 + 0x198) = pcVar30;
      (*pcVar30)(uVar23,uVar28);
      lVar16 = lVar9;
      _swift_getAssociatedConformanceWitness
                (lVar9,uVar28,uVar1,PTR___ss15InstantProtocolTL_11034e700,
                 PTR___ss15InstantProtocolP8DurationAB_s0cB0Tn_11034e6e8);
      uVar20 = *(undefined8 *)(lVar16 + 8);
      __ss18AdditiveArithmeticP1soiyxx_xtFZTj(uVar10,lVar21 + iVar8,uVar19,uVar1,uVar20);
      pcVar29 = *(code **)(lVar12 + 8);
      *(code **)(unaff_x22 + 0x1a0) = pcVar29;
      (*pcVar29)(uVar19,uVar1);
      __ss18AdditiveArithmeticP4zeroxvgZTj(uVar19,uVar1,uVar20);
      __sSL1goiySbx_xtFZTj(uVar10,uVar19,uVar1,*(undefined8 *)(lVar16 + 0x10));
      (*pcVar29)(uVar19,uVar1);
      if ((uVar10 & 1) != 0) {
        uVar28 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar21 = *(long *)(unaff_x22 + 0x80);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
        __ss5ClockP3now7InstantQzvgTj
                  (uVar28,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x28));
        __ss15InstantProtocolP8advanced2byx8DurationQz_tFTj(uVar26,uVar23,uVar19,lVar9);
        (*pcVar30)(uVar28,uVar19);
        (**(code **)(lVar21 + 0x38))(uVar20,1,1,uVar1);
        plVar11 = (long *)(ulong)*(uint *)(
                                          PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTjTu_110350010
                                          + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1a8) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_1040e6630;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTj_110350008)
                  (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x50),
                   *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x28));
        return;
      }
      uVar23 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x58);
      (*pcVar29)(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x38));
      (*pcVar30)(uVar23,uVar20);
      puVar25 = (undefined8 *)(unaff_x22 + 0x140);
    }
  }
  uVar23 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar21 = *(long *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
  (*pcVar30)(*puVar25,*puVar27);
  (**(code **)(lVar21 + 0x20))(uVar19,uVar23,uVar20);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar28 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001040e5fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e5fd0; end: 1040e6017;  */

void FUN_1040e5fd0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e6018,0,0);
  return;
}



/* Entry: 1040e6018; end: 1040e662f;  */

void FUN_1040e6018(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  code *pcVar29;
  undefined8 uVar30;
  long *plVar31;
  long lVar32;
  
  uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar21 = *(ulong *)(unaff_x22 + 0x90);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar19 = *(long *)(unaff_x22 + 0x20);
  lVar17 = *(long *)(unaff_x22 + 0x28);
  lVar25 = *(long *)(unaff_x22 + 0x18);
  __ss5ClockP3now7InstantQzvgTj(uVar23,uVar24,lVar17);
  _swift_getAssociatedConformanceWitness
            (lVar17,uVar24,uVar30,PTR___ss5ClockTL_110350028,
             PTR___ss5ClockP7InstantAB_s0B8ProtocolTn_110350018);
  __ss15InstantProtocolP8duration2to8DurationQzx_tFTj(uVar21,uVar23,uVar30,lVar17);
  iVar3 = *(int *)(lVar25 + 0x40);
  lVar25 = lVar17;
  _swift_getAssociatedConformanceWitness
            (lVar17,uVar30,uVar26,PTR___ss15InstantProtocolTL_11034e700,
             PTR___ss15InstantProtocolP8DurationAB_s0cB0Tn_11034e6e8);
  uVar5 = uVar21;
  __sSL2geoiySbx_xtFZTj(uVar21,lVar19 + iVar3,uVar26,*(undefined8 *)(lVar25 + 0x10));
  (**(code **)(lVar6 + 8))(uVar21,uVar26);
  if ((uVar5 & 1) == 0) {
    plVar31 = (long *)(unaff_x22 + 0x78);
    lVar19 = *plVar31;
    pcVar16 = *(code **)(unaff_x22 + 0x170);
    pcVar29 = *(code **)(unaff_x22 + 0x178);
    iVar3 = *(int *)(unaff_x22 + 0x1b0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar6 = *(long *)(unaff_x22 + 0x68);
    puVar15 = (undefined8 *)(unaff_x22 + 0x60);
    uVar24 = *puVar15;
    uVar26 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar25 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x38))(uVar23,1,1,uVar26);
    lVar6 = (long)*(int *)(lVar6 + 0x30);
    (*pcVar16)(lVar19,lVar25 + iVar3,uVar24);
    (*pcVar16)(lVar19 + lVar6,uVar23,uVar24);
    lVar25 = lVar19;
    (*pcVar29)(lVar19,1,uVar26);
    pcVar29 = *(code **)(unaff_x22 + 0x178);
    if ((int)lVar25 == 1) {
      uVar30 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar17 = *(long *)(unaff_x22 + 0x150);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar25 = *(long *)(unaff_x22 + 0xe0);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x58);
      pcVar16 = *(code **)(*(long *)(unaff_x22 + 0xf0) + 8);
      (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x60));
      (**(code **)(lVar25 + 8))(uVar24,uVar22);
      (**(code **)(lVar17 + 8))(uVar30,uVar23);
      lVar19 = lVar19 + lVar6;
      (*pcVar29)(lVar19,1,uVar26);
      if ((int)lVar19 == 1) goto LAB_1040e6128;
    }
    else {
      uVar23 = *(undefined8 *)(unaff_x22 + 0x58);
      (**(code **)(unaff_x22 + 0x170))
                (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x78),
                 *(undefined8 *)(unaff_x22 + 0x60));
      lVar25 = lVar19 + lVar6;
      (*pcVar29)(lVar25,1,uVar23);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar32 = *(long *)(unaff_x22 + 0x150);
      if ((int)lVar25 != 1) {
        uVar27 = *(undefined8 *)(unaff_x22 + 0x130);
        lVar18 = *(long *)(unaff_x22 + 0x118);
        uVar5 = *(ulong *)(unaff_x22 + 0x100);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xe8);
        lVar25 = *(long *)(unaff_x22 + 0xf0);
        lVar10 = *(long *)(unaff_x22 + 0xe0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x60);
        (**(code **)(lVar18 + 0x20))(uVar27,lVar19 + lVar6,uVar30);
        uVar21 = uVar5;
        __sSQ2eeoiySbx_xtFZTj(uVar5,uVar27,uVar30,*(undefined8 *)(*(long *)(lVar17 + 8) + 8));
        pcVar29 = *(code **)(lVar18 + 8);
        (*pcVar29)(uVar27,uVar30);
        pcVar16 = *(code **)(lVar25 + 8);
        (*pcVar16)(uVar22,uVar28);
        (**(code **)(lVar10 + 8))(uVar26,uVar11);
        (**(code **)(lVar32 + 8))(uVar24,uVar23);
        (*pcVar29)(uVar5,uVar30);
        (*pcVar16)(uVar12,uVar28);
        if ((uVar21 & 1) != 0) goto LAB_1040e6134;
        goto LAB_1040e647c;
      }
      lVar19 = *(long *)(unaff_x22 + 0x118);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar30 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar17 = *(long *)(unaff_x22 + 0xe0);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x58);
      (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
                (*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x60));
      (**(code **)(lVar17 + 8))(uVar30,uVar28);
      (**(code **)(lVar32 + 8))(uVar24,uVar23);
      (**(code **)(lVar19 + 8))(uVar26,uVar22);
    }
    lVar19 = *(long *)(unaff_x22 + 0x118);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
              (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x68));
    pcVar29 = *(code **)(lVar19 + 8);
LAB_1040e647c:
    uVar23 = *(undefined8 *)(unaff_x22 + 0x160);
    pcVar16 = *(code **)(unaff_x22 + 0x168);
    lVar19 = *(long *)(unaff_x22 + 0xa0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x98);
    (*pcVar29)(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x58));
    (**(code **)(lVar19 + 0x20))(uVar23,uVar24,uVar26);
    (*pcVar16)(uVar23,0,1,uVar26);
    puVar4 = PTR___sSciTL_11034fea8;
    uVar23 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar26 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar23,uVar24,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    _swift_getAssociatedConformanceWitness
              (uVar23,uVar24,uVar26,puVar4,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
    plVar31 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x180) = plVar31;
    *plVar31 = unaff_x22;
    plVar31[1] = (long)FUN_1040e5a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar31,*(undefined8 *)(unaff_x22 + 0xd8),uVar26,uVar23);
    return;
  }
  lVar19 = *(long *)(unaff_x22 + 0x150);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xc0));
  pcVar16 = *(code **)(lVar19 + 8);
  plVar31 = (long *)(unaff_x22 + 0x160);
  puVar15 = (undefined8 *)(unaff_x22 + 0x148);
LAB_1040e6128:
  (*pcVar16)(*plVar31,*puVar15);
LAB_1040e6134:
  lVar25 = (long)*(int *)(unaff_x22 + 0x1b0);
  pcVar16 = *(code **)(unaff_x22 + 0x168);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar32 = *(long *)(unaff_x22 + 0x118);
  lVar6 = *(long *)(unaff_x22 + 0xf0);
  lVar19 = *(long *)(unaff_x22 + 0xa0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar17 = *(long *)(unaff_x22 + 0x20);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(lVar32 + 8))(*(undefined8 *)(unaff_x22 + 0x140),uVar24);
  (**(code **)(lVar6 + 8))(lVar17 + lVar25,uVar30);
  (**(code **)(lVar32 + 0x20))(lVar17 + lVar25,uVar23,uVar24);
  (**(code **)(lVar32 + 0x38))(lVar17 + lVar25,0,1,uVar24);
  (**(code **)(lVar19 + 0x20))(uVar28,uVar26,uVar22);
  (*pcVar16)(uVar28,0,1,uVar22);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001040e62c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e6630; end: 1040e66bb;  */

void FUN_1040e6630(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  code *pcVar4;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1a8));
  if (unaff_x20 == 0) {
    pcVar4 = *(code **)(lVar3 + 0x198);
    uVar2 = *(undefined8 *)(lVar3 + 0x120);
    uVar1 = *(undefined8 *)(lVar3 + 0x58);
    (**(code **)(*(long *)(lVar3 + 0x48) + 8))
              (*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x40));
    (*pcVar4)(uVar2,uVar1);
    pcVar4 = FUN_1040e66bc;
  }
  else {
    _swift_errorRelease();
    pcVar4 = FUN_1040e6828;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 1040e66bc; end: 1040e6827;  */

void FUN_1040e66bc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x198);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(unaff_x22 + 0x1a0))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x38));
  (*pcVar1)(uVar17,uVar16);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(unaff_x22 + 0x198))
            (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar5 + 0x20))(uVar19,uVar17,uVar16);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001040e6824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e6828; end: 1040e69b3;  */

void FUN_1040e6828(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  
  pcVar1 = *(code **)(unaff_x22 + 0x198);
  pcVar4 = *(code **)(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  (*pcVar1)(uVar2,uVar19);
  (*pcVar4)(uVar18,uVar20);
  (*pcVar1)(uVar16,uVar19);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(unaff_x22 + 0x198))
            (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar5 + 0x20))(uVar19,uVar16,uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001040e69b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e69b4; end: 1040e6af7;  */

void FUN_1040e69b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar10 = *(long *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar10 + 8))(uVar9,uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001040e6af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e6af8; end: 1040e6b57;  */

void FUN_1040e6af8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  
  plVar6 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040e6b58;
  plVar6[3] = param_2;
  plVar6[4] = unaff_x20;
  plVar6[2] = param_1;
  lVar9 = *(long *)(param_2 + 0x30);
  plVar6[5] = lVar9;
  lVar7 = *(long *)(param_2 + 0x18);
  plVar6[6] = lVar7;
  puVar1 = PTR___ss5ClockTL_110350028;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar9,lVar7,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  plVar6[7] = lVar2;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  plVar6[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[10] = uVar4;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar9,lVar7,puVar1,PTR___s7Instants5ClockPTl_11034fb68);
  plVar6[0xb] = lVar3;
  lVar7 = 0xff;
  __sSqMa(0xff,lVar3);
  plVar6[0xc] = lVar7;
  lVar9 = 0;
  _swift_getTupleTypeMetadata2(0,lVar7,lVar7,0,0);
  plVar6[0xd] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar6[0xe] = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xf] = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x10] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x11] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x12] = uVar4;
  lVar8 = *(long *)(param_2 + 0x20);
  plVar6[0x13] = lVar8;
  lVar2 = *(long *)(lVar8 + -8);
  plVar6[0x14] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x15] = uVar4;
  plVar6[0x16] = *(long *)(param_2 + 0x28);
  plVar6[0x17] = *(long *)(param_2 + 0x10);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness();
  plVar6[0x18] = lVar2;
  lVar9 = 0;
  __sSqMa(0,lVar2);
  plVar6[0x19] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar6[0x1a] = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1b] = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x1c] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1d] = uVar4;
  lVar2 = *(long *)(lVar7 + -8);
  plVar6[0x1e] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x1f] = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x20] = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x21] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x22] = uVar4;
  lVar2 = *(long *)(lVar3 + -8);
  plVar6[0x23] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x24] = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x25] = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x26] = uVar5;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x27] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x28] = uVar4;
  lVar2 = 0;
  __sSqMa(0,lVar8);
  plVar6[0x29] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar6[0x2a] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x2b] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x2c] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e58d8,0,0);
  return;
}



/* Entry: 1040e6b58; end: 1040e6b93;  */

void FUN_1040e6b58(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040e6b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040e6b94; end: 1040e6c6b;  */

void FUN_1040e6b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s7FailureSciTl_11034fb60);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040e6c6c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 1040e6c6c; end: 1040e6cdb;  */

void FUN_1040e6c6c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x20))
              (*(undefined8 *)(lVar2 + 0x10),uVar1,*(undefined8 *)(lVar2 + 0x18));
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001040e6cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1040e6cdc; end: 1040e6ec7;  */

void FUN_1040e6cdc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)(param_2 + 0x18);
  lStack_70 = *(long *)(lVar8 + -8);
  lVar6 = param_2;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  uStack_78 = *(undefined8 *)(lVar6 + 0x30);
  lVar6 = 0;
  puStack_80 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,uStack_78,lVar8,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar11 = *(long *)(lVar6 + -8);
  lStack_88 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar12 = *(long *)(param_2 + 0x10);
  lVar14 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar9 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar12,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar9 - extraout_x8_02;
  (**(code **)(lVar14 + 0x10))(lVar9);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar6,lVar12,uVar10);
  (**(code **)(lVar11 + 0x10))(lVar13,unaff_x20 + *(int *)(param_2 + 0x3c),lStack_88);
  puVar4 = puStack_80;
  (**(code **)(lStack_70 + 0x10))(puStack_80,unaff_x20 + *(int *)(param_2 + 0x40),lVar8);
  uVar5 = uStack_78;
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x44));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar6 + -0x10) = uVar10;
  *(undefined8 *)(lVar6 + -8) = uVar5;
  FUN_1040e54cc(uStack_68,lVar6,lVar13,puVar4,uVar2,uVar3,lVar12,lVar8,uVar7);
  _swift_retain(uVar3);
  return;
}



/* Entry: 1040e6ec8; end: 1040e6f57;  */

void FUN_1040e6ec8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)();
  return;
}



/* Entry: 1040e6f58; end: 1040e6f67;  */

void FUN_1040e6f58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd7258,param_1);
  return;
}



/* Entry: 1040e6f68; end: 1040e6f97;  */

void FUN_1040e6f68(long param_1)

{
  FUN_1040e6cdc();
                    /* WARNING: Could not recover jumptable at 0x0001040e6f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 1040e6f98; end: 1040e6f9f;  */

void FUN_1040e6f98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1040e6fa0; end: 1040e706f;  */

void FUN_1040e6fa0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x30);
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar2,uVar3,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
    if (uVar2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      _swift_checkMetadataState();
      if (uVar3 < 0x40) {
        lStack_30 = *(long *)(lVar1 + -8) + 0x40;
        puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
        _swift_initStructMetadata(param_1,0,4,&lStack_40,param_1 + 0x38);
      }
    }
  }
  return;
}



/* Entry: 1040e7070; end: 1040e7203;  */

long * FUN_1040e7070(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar3,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar15 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  uVar7 = lVar11 + uVar6;
  lVar14 = *(long *)(lVar3 + -8);
  uVar9 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  lVar1 = *(long *)(lVar15 + 0x40) + uVar9;
  lVar11 = *(long *)(lVar14 + 0x40) + 7;
  uVar4 = (uint)uVar9 | *(uint *)(lVar13 + 0x50) & 0xf8 | (uint)uVar6;
  if ((uVar4 < 8 &&
      ((*(uint *)(lVar14 + 0x50) | *(uint *)(lVar13 + 0x50) | *(uint *)(lVar15 + 0x50)) & 0x100000)
      == 0) && (lVar11 + (lVar1 + (uVar7 & (uVar6 ^ 0xffffffffffffffff)) &
                         (uVar9 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar2);
    uVar12 = uVar7 + (long)param_1 & ~uVar6;
    uVar7 = uVar7 + (long)param_2 & ~uVar6;
    (**(code **)(lVar15 + 0x10))(uVar12,uVar7,lVar5);
    uVar6 = uVar12 + lVar1 & ~uVar9;
    uVar7 = uVar7 + lVar1 & ~uVar9;
    (**(code **)(lVar14 + 0x10))(uVar6,uVar7,lVar3);
    puVar8 = (undefined8 *)(lVar11 + uVar6 & 0xffffffffffffff8);
    puVar10 = (undefined8 *)(lVar11 + uVar7 & 0xfffffffffffffff8);
    lVar11 = puVar10[1];
    uVar16 = *puVar10;
    puVar8[1] = puVar10[1];
    *puVar8 = uVar16;
  }
  else {
    uVar7 = (ulong)(uVar4 | 7);
    lVar11 = *param_2;
    *param_1 = lVar11;
    param_1 = (long *)(lVar11 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar11);
  return param_1;
}



/* Entry: 1040e7204; end: 1040e72c3;  */

void FUN_1040e7204(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar4 + 8))();
  lVar1 = *(long *)(lVar4 + 0x40);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x30),lVar2,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar5 = *(long *)(lVar4 + -8);
  uVar3 = lVar1 + param_1 + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 8))(uVar3,lVar4);
  lVar4 = *(long *)(lVar2 + -8);
  uVar3 = uVar3 + *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar4 + 0x50) &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((*(long *)(lVar4 + 0x40) + uVar3 + 7 & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040e72c4; end: 1040e789f;  */

long FUN_1040e72c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar8 + 0x10))();
  lVar8 = *(long *)(lVar8 + 0x40);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar6,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar10 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar8 = lVar8 + uVar3;
  uVar9 = lVar8 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar7 = lVar8 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x10))(uVar9,uVar7,lVar1);
  lVar1 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar8 = *(long *)(lVar10 + 0x40) + uVar3;
  uVar9 = lVar8 + uVar9 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar8 + uVar7 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x10))(uVar9,uVar3,lVar6);
  lVar8 = *(long *)(lVar1 + 0x40) + 7;
  puVar5 = (undefined8 *)(lVar8 + uVar9 & 0xffffffffffffff8);
  puVar4 = (undefined8 *)(lVar8 + uVar3 & 0xfffffffffffffff8);
  uVar2 = puVar4[1];
  uVar11 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar11;
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 1040e78a0; end: 1040e7acf;  */

void FUN_1040e78a0(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  
  lVar6 = *(long *)(param_4 + 0x10);
  lVar13 = *(long *)(param_4 + 0x18);
  lVar21 = *(long *)(lVar6 + -8);
  uVar7 = *(uint *)(lVar21 + 0x54);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x30),lVar13,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar16 = *(long *)(lVar11 + -8);
  uVar8 = *(uint *)(lVar16 + 0x54);
  uVar10 = uVar8;
  if (uVar8 <= uVar7) {
    uVar10 = uVar7;
  }
  lVar15 = *(long *)(lVar13 + -8);
  uVar12 = *(uint *)(lVar15 + 0x54);
  uVar4 = uVar12;
  if (uVar12 <= uVar10) {
    uVar4 = uVar10;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar19 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar3 = *(long *)(lVar21 + 0x40) + uVar19;
  lVar18 = *(long *)(lVar16 + 0x40);
  uVar17 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar1 = *(long *)(lVar15 + 0x40) + 7;
  lVar2 = (lVar1 + (lVar18 + uVar17 + (uVar3 & (uVar19 ^ 0xffffffffffffffff)) &
                   (uVar17 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar20 = uVar10;
  if ((int)lVar2 == 0) {
    uVar20 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar20) {
    uVar10 = 4;
  }
  if (uVar20 < 0x100) {
    uVar10 = 1;
  }
  uVar5 = 0;
  if (1 < uVar20) {
    uVar5 = uVar10;
  }
  uVar10 = 0;
  if (uVar4 < param_3) {
    uVar10 = uVar5;
  }
  uVar20 = (uint)param_2;
  iVar9 = uVar20 - uVar4;
  if (uVar20 < uVar4 || iVar9 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar20 != 0) {
      if (uVar7 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
        lVar13 = lVar6;
        uVar12 = uVar7;
      }
      else {
        param_1 = (int *)(uVar3 + (long)param_1 & ~uVar19);
        if (uVar8 == uVar4) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x38);
          lVar13 = lVar11;
          uVar12 = uVar8;
        }
        else {
          param_1 = (int *)((long)param_1 + uVar17 + lVar18 & ~uVar17);
          if (uVar12 != uVar4) {
            puVar14 = (ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
            if (-1 < (int)uVar20) {
              *puVar14 = (ulong)(uVar20 - 1);
              return;
            }
            *puVar14 = (ulong)(uVar20 & 0x7fffffff);
            puVar14[1] = 0;
            return;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001040e7a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar12,lVar13);
      return;
    }
  }
  else {
    if ((int)lVar2 != 0) {
      iVar9 = 1;
      _bzero(param_1,lVar2);
      *param_1 = uVar20 + ~uVar4;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar9;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar9;
    }
  }
  return;
}



/* Entry: 1040e7ad0; end: 1040e7ae3;  */

void FUN_1040e7ad0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f0228);
  return;
}



/* Entry: 1040e7ae4; end: 1040e7c13;  */

void FUN_1040e7ae4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s13AsyncIteratorSciTl_11034fb50);
  if (uVar2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    uVar4 = *(ulong *)(param_1 + 0x30);
    uVar3 = *(ulong *)(param_1 + 0x18);
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar4,uVar3,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar2 < 0x40) {
      lStack_50 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      _swift_getAssociatedTypeWitness
                (0x13f,uVar4,uVar3,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
      if (uVar4 < 0x40) {
        lStack_48 = *(long *)(lVar1 + -8) + 0x40;
        lVar1 = 0x13f;
        _swift_checkMetadataState();
        if (uVar3 < 0x40) {
          lStack_40 = *(long *)(lVar1 + -8) + 0x40;
          puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
          _swift_initStructMetadata(param_1,0,5,&lStack_58,param_1 + 0x38);
        }
      }
    }
  }
  return;
}



/* Entry: 1040e7c14; end: 1040e7ebb;  */

long * FUN_1040e7c14(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar15 = *(long *)(lVar5 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  uVar16 = *(undefined8 *)(param_3 + 0x30);
  lVar20 = *(long *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar16,lVar20,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar22 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar22 + 0x50);
  uVar18 = (ulong)uVar3 & 0xff;
  uVar9 = lVar13 + uVar18;
  lVar13 = *(long *)(lVar22 + 0x40);
  if (*(int *)(lVar22 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar16,lVar20,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar14 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  lVar2 = lVar13 + uVar8;
  lVar12 = *(long *)(lVar14 + 0x40);
  lVar21 = *(long *)(lVar20 + -8);
  uVar17 = (ulong)*(uint *)(lVar21 + 0x50) & 0xff;
  lVar1 = *(long *)(lVar21 + 0x40) + 7;
  uVar4 = (uint)uVar18 | *(uint *)(lVar15 + 0x50) & 0xf8 | (uint)uVar8 | (uint)uVar17;
  if ((uVar4 < 8 &&
      ((*(uint *)(lVar14 + 0x50) | uVar3 | *(uint *)(lVar21 + 0x50) | *(uint *)(lVar15 + 0x50)) &
      0x100000) == 0) &&
      (lVar1 + (lVar12 + uVar17 +
                (lVar2 + (uVar9 & (uVar18 ^ 0xffffffffffffffff)) & (uVar8 ^ 0xffffffffffffffff)) &
               (uVar17 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar5);
    uVar19 = uVar9 + (long)param_1 & ~uVar18;
    uVar18 = uVar9 + (long)param_2 & ~uVar18;
    uVar9 = uVar18;
    (**(code **)(lVar22 + 0x30))(uVar18,1,lVar6);
    if ((int)uVar9 == 0) {
      (**(code **)(lVar22 + 0x10))(uVar19,uVar18,lVar6);
      (**(code **)(lVar22 + 0x38))(uVar19,0,1,lVar6);
    }
    else {
      _memcpy(uVar19,uVar18,lVar13);
    }
    uVar19 = lVar2 + uVar19 & ~uVar8;
    uVar9 = lVar2 + uVar18 & ~uVar8;
    (**(code **)(lVar14 + 0x10))(uVar19,uVar9,lVar7);
    lVar12 = lVar12 + uVar17;
    uVar18 = uVar19 + lVar12 & ~uVar17;
    uVar9 = uVar9 + lVar12 & ~uVar17;
    (**(code **)(lVar21 + 0x10))(uVar18,uVar9,lVar20);
    puVar10 = (undefined8 *)(lVar1 + uVar18 & 0xffffffffffffff8);
    puVar11 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
    lVar13 = puVar11[1];
    uVar16 = *puVar11;
    puVar10[1] = puVar11[1];
    *puVar10 = uVar16;
  }
  else {
    uVar9 = (ulong)(uVar4 | 7);
    lVar13 = *param_2;
    *param_1 = lVar13;
    param_1 = (long *)(lVar13 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar13);
  return param_1;
}



/* Entry: 1040e7ebc; end: 1040e801b;  */

void FUN_1040e7ebc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 8))(param_1,lVar2);
  lVar6 = *(long *)(lVar6 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar3,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar8 = *(long *)(lVar2 + -8);
  uVar7 = lVar6 + param_1 + (ulong)*(byte *)(lVar8 + 0x50) &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar7;
  (**(code **)(lVar8 + 0x30))(uVar7,1,lVar2);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar8 + 8))(uVar7,lVar2);
  }
  iVar1 = *(int *)(lVar8 + 0x54);
  lVar2 = *(long *)(lVar8 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar3,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar8 = *(long *)(lVar6 + -8);
  lVar2 = lVar2 + uVar7;
  if (iVar1 == 0) {
    lVar2 = lVar2 + 1;
  }
  uVar5 = lVar2 + (ulong)*(byte *)(lVar8 + 0x50) &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 8))(uVar5,lVar6);
  lVar2 = *(long *)(lVar3 + -8);
  uVar5 = uVar5 + *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar2 + 0x50) &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 8))(uVar5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((*(long *)(lVar2 + 0x40) + uVar5 + 7 & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 1040e801c; end: 1040e81ff;  */

long FUN_1040e801c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar6 + 0x40);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar5,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar11 = *(long *)(lVar6 + -8);
  uVar2 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = lVar1 + uVar2;
  uVar8 = lVar1 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar9 = lVar1 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar9;
  (**(code **)(lVar11 + 0x30))(uVar9,1,lVar6);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar11 + 0x10))(uVar8,uVar9,lVar6);
    (**(code **)(lVar11 + 0x38))(uVar8,0,1,lVar6);
    iVar10 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
    lVar6 = lVar1;
    if (iVar10 == 0) {
      lVar6 = lVar1 + 1;
    }
    _memcpy(uVar8,uVar9,lVar6);
  }
  if (iVar10 == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar5,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar11 = *(long *)(lVar6 + -8);
  uVar2 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = lVar1 + uVar2 + uVar8 & (uVar2 ^ 0xffffffffffffffff);
  uVar9 = lVar1 + uVar2 + uVar9 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x10))(uVar8,uVar9,lVar6);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar1 = *(long *)(lVar11 + 0x40) + uVar2;
  uVar8 = lVar1 + uVar8 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar1 + uVar9 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x10))(uVar8,uVar2,lVar5);
  lVar1 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + uVar8 & 0xffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + uVar2 & 0xfffffffffffffff8);
  uVar7 = puVar3[1];
  uVar12 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar12;
  _swift_retain(uVar7);
  return param_1;
}



/* Entry: 1040e8200; end: 1040e843b;  */

long FUN_1040e8200(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar7 = *(long *)(lVar1 + -8);
  (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar7 + 0x40);
  uVar8 = *(undefined8 *)(param_3 + 0x30);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar5,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar12 = *(long *)(lVar7 + -8);
  uVar2 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar1 = lVar1 + uVar2;
  uVar10 = lVar1 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar11 = lVar1 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  pcVar13 = *(code **)(lVar12 + 0x30);
  uVar2 = uVar10;
  (*pcVar13)(uVar10,1,lVar7);
  uVar9 = uVar11;
  (*pcVar13)(uVar11,1,lVar7);
  if ((int)uVar2 == 0) {
    if ((int)uVar9 == 0) {
      (**(code **)(lVar12 + 0x18))(uVar10,uVar11,lVar7);
      goto LAB_1040e833c;
    }
    (**(code **)(lVar12 + 8))(uVar10,lVar7);
  }
  else if ((int)uVar9 == 0) {
    (**(code **)(lVar12 + 0x10))(uVar10,uVar11,lVar7);
    (**(code **)(lVar12 + 0x38))(uVar10,0,1,lVar7);
    goto LAB_1040e833c;
  }
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  _memcpy(uVar10,uVar11,lVar1);
LAB_1040e833c:
  lVar1 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar5,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar12 = *(long *)(lVar7 + -8);
  uVar2 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar9 = lVar1 + uVar2 + uVar10 & (uVar2 ^ 0xffffffffffffffff);
  uVar10 = lVar1 + uVar2 + uVar11 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar12 + 0x18))(uVar9,uVar10,lVar7);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar1 = *(long *)(lVar12 + 0x40) + uVar2;
  uVar9 = lVar1 + uVar9 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar1 + uVar10 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar9,uVar2,lVar5);
  lVar1 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + uVar2 & 0xfffffffffffffff8);
  uVar6 = puVar4[1];
  uVar8 = puVar3[1];
  uVar14 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar14;
  _swift_retain(uVar8);
  _swift_release(uVar6);
  return param_1;
}



/* Entry: 1040e843c; end: 1040e8617;  */

long FUN_1040e843c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar6 + 0x40);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar5,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar11 = *(long *)(lVar6 + -8);
  uVar2 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = lVar1 + uVar2;
  uVar8 = lVar1 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar9 = lVar1 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar9;
  (**(code **)(lVar11 + 0x30))(uVar9,1,lVar6);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar11 + 0x20))(uVar8,uVar9,lVar6);
    (**(code **)(lVar11 + 0x38))(uVar8,0,1,lVar6);
    iVar10 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar11 + 0x54);
    lVar1 = *(long *)(lVar11 + 0x40);
    lVar6 = lVar1;
    if (iVar10 == 0) {
      lVar6 = lVar1 + 1;
    }
    _memcpy(uVar8,uVar9,lVar6);
  }
  if (iVar10 == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar5,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar11 = *(long *)(lVar6 + -8);
  uVar2 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = lVar1 + uVar2 + uVar8 & (uVar2 ^ 0xffffffffffffffff);
  uVar9 = lVar1 + uVar2 + uVar9 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x20))(uVar8,uVar9,lVar6);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar1 = *(long *)(lVar11 + 0x40) + uVar2;
  uVar8 = lVar1 + uVar8 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar1 + uVar9 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x20))(uVar8,uVar2,lVar5);
  lVar1 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + uVar8 & 0xffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + uVar2 & 0xffffffffffffff8);
  uVar7 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar7;
  return param_1;
}



/* Entry: 1040e8618; end: 1040e8e0b;  */

long FUN_1040e8618(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar6 + 0x40);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar5,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar11 = *(long *)(lVar6 + -8);
  uVar2 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = lVar1 + uVar2;
  uVar9 = lVar1 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar10 = lVar1 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  pcVar12 = *(code **)(lVar11 + 0x30);
  uVar2 = uVar9;
  (*pcVar12)(uVar9,1,lVar6);
  uVar8 = uVar10;
  (*pcVar12)(uVar10,1,lVar6);
  if ((int)uVar2 == 0) {
    if ((int)uVar8 == 0) {
      (**(code **)(lVar11 + 0x28))(uVar9,uVar10,lVar6);
      goto LAB_1040e8754;
    }
    (**(code **)(lVar11 + 8))(uVar9,lVar6);
  }
  else if ((int)uVar8 == 0) {
    (**(code **)(lVar11 + 0x20))(uVar9,uVar10,lVar6);
    (**(code **)(lVar11 + 0x38))(uVar9,0,1,lVar6);
    goto LAB_1040e8754;
  }
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  _memcpy(uVar9,uVar10,lVar1);
LAB_1040e8754:
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar5,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar11 = *(long *)(lVar6 + -8);
  uVar2 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = lVar1 + uVar2 + uVar9 & (uVar2 ^ 0xffffffffffffffff);
  uVar9 = lVar1 + uVar2 + uVar10 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x28))(uVar8,uVar9,lVar6);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar1 = *(long *)(lVar11 + 0x40) + uVar2;
  uVar8 = lVar1 + uVar8 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar1 + uVar9 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x28))(uVar8,uVar2,lVar5);
  lVar1 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + uVar8 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + uVar2 & 0xffffffffffffff8);
  uVar7 = puVar4[1];
  uVar13 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar13;
  _swift_release(uVar7);
  return param_1;
}



/* Entry: 1040e8e0c; end: 1040e8e17;  */

void FUN_1040e8e0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f0270);
  return;
}



/* Entry: 1040e8e18; end: 1040e8ebb;  */

void FUN_1040e8e18(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_6;
  lVar4 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  iVar1 = *param_3;
  plVar3 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040e8ebc;
                    /* WARNING: Could not recover jumptable at 0x0001040e8eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar3,uVar2,param_1,param_2);
  return;
}



/* Entry: 1040e8ebc; end: 1040e8f27;  */

void FUN_1040e8ebc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar2 + 0x20) + 8))
              (*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    pcVar1 = FUN_1040e8f28;
  }
  else {
    pcVar1 = (code *)0x1040e8f70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040e8f28; end: 1040e8fa3;  */

void FUN_1040e8f28(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar1,*(undefined8 *)(unaff_x22 + 0x18));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001040e8f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040e8fa4; end: 1040e8faf;  */

void FUN_1040e8fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f02b8);
  return;
}



/* Entry: 1040e8fb0; end: 1040e90d3;  */

void FUN_1040e8fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_1040e90d4(0,param_6,param_7,param_8);
  lVar6 = (long)*(int *)(lVar2 + 0x2c);
  lVar4 = *(long *)(param_7 + -8);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(param_1 + lVar6,1,1,param_7);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  lVar3 = 0;
  __sSqMa(0,param_7);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + lVar6,lVar3);
  (**(code **)(lVar4 + 0x20))(param_1 + lVar6,param_3,param_7);
  (*pcVar5)(param_1 + lVar6,0,1,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}



/* Entry: 1040e90d4; end: 1040e90df;  */

void FUN_1040e90d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f02f4);
  return;
}



/* Entry: 1040e90e0; end: 1040e91ff;  */

void FUN_1040e90e0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  lVar4 = 0;
  __sSqMa(0,lVar1);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar4 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x70) = lVar4;
  lVar1 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040e9200,0,0);
  return;
}



/* Entry: 1040e9200; end: 1040e939b;  */

void FUN_1040e9200(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  iVar2 = *(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c);
  *(int *)(unaff_x22 + 0xd8) = iVar2;
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))
            (uVar4,*(long *)(unaff_x22 + 0x20) + (long)iVar2,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar8);
  if ((int)uVar4 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x90);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(lVar1 + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040e92e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x90) + 0x20);
  *(code **)(unaff_x22 + 0xa8) = pcVar7;
  (*pcVar7)(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88),
            *(undefined8 *)(unaff_x22 + 0x70));
  puVar3 = PTR___sSciTL_11034fea8;
  uVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar8,uVar5,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040e939c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar6,*(undefined8 *)(unaff_x22 + 0x68),uVar5,uVar4);
  return;
}



/* Entry: 1040e939c; end: 1040e93f7;  */

void FUN_1040e939c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040e93f8;
  }
  else {
    pcVar1 = FUN_1040e978c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040e93f8; end: 1040e95df;  */

void FUN_1040e93f8(void)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (uVar5,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar3 + 0x30))(uVar5,1,uVar1);
  if ((int)uVar5 == 1) {
    iVar4 = *(int *)(unaff_x22 + 0xd8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar12 = *(long *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar13 = *(long *)(unaff_x22 + 0x20);
    pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x58) + 8);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x68),uVar10);
    (**(code **)(lVar12 + 8))(uVar8,uVar1);
    (*pcVar7)(uVar9,uVar10);
    (**(code **)(lVar3 + 8))(lVar13 + iVar4,uVar5);
    pcVar7 = *(code **)(lVar12 + 0x38);
    (*pcVar7)(lVar13 + iVar4,1,1,uVar1);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
    (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001040e953c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar13 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x38));
  pcVar7 = *(code **)(lVar13 + 0x10);
  *(code **)(unaff_x22 + 0xc0) = pcVar7;
  (*pcVar7)(uVar5,uVar1,uVar9);
  piVar2 = *(int **)(lVar12 + *(int *)(lVar3 + 0x30));
  iVar4 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1040e95e0;
                    /* WARNING: Could not recover jumptable at 0x0001040e95dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar4 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 1040e95e0; end: 1040e963b;  */

void FUN_1040e95e0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040e963c;
  }
  else {
    pcVar1 = FUN_1040e9820;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040e963c; end: 1040e978b;  */

void FUN_1040e963c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  pcVar8 = *(code **)(unaff_x22 + 0xc0);
  lVar14 = (long)*(int *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  pcVar5 = *(code **)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  lVar13 = *(long *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar7 + 8))(uVar4,uVar10);
  (**(code **)(lVar2 + 8))(uVar1,uVar12);
  (**(code **)(lVar6 + 8))(lVar13 + lVar14,uVar3);
  (*pcVar8)(lVar13 + lVar14,uVar11,uVar12);
  pcVar8 = *(code **)(lVar2 + 0x38);
  (*pcVar8)(lVar13 + lVar14,0,1,uVar12);
  (*pcVar5)(uVar9,uVar11,uVar12);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x10),0,1,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001040e9788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


