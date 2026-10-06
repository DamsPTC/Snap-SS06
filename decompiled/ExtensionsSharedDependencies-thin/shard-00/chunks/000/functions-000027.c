/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00089a04; end: 00089a1f;  */

void FUN_00089a04(undefined8 param_1)

{
  FUN_000899c8();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x40,7);
  return;
}



/* Entry: 00089a20; end: 00089a5f;  */

void FUN_00089a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00840e6c);
  return;
}



/* Entry: 00089a60; end: 00089ab7;  */

void FUN_00089a60(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = &UNK_007d3bd0;
  puStack_20 = &UNK_007d3be8;
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0xb8);
  return;
}



/* Entry: 00089ab8; end: 00089b67;  */

void FUN_00089ab8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __sScSMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar6 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(lVar5 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar6));
  (**(code **)(lVar7 + 8))(unaff_x20 + (uVar4 + uVar6 + 8 & (uVar4 ^ 0xffffffffffffffff)),lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00089b68; end: 00089c1b;  */

void FUN_00089b68(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  long *plVar8;
  ulong uVar9;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = 0;
  __sScSMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar9 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  uVar6 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  plVar8 = *(long **)(unaff_x20 + uVar5);
  pcVar4 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar4;
  *(long *)pcVar4 = unaff_x22;
  *(code **)(pcVar4 + 8) = FUN_00089c1c;
  *(long *)(pcVar4 + 0x28) = lVar2;
  *(undefined8 *)(pcVar4 + 0x30) = uVar1;
  *(long **)(pcVar4 + 0x18) = plVar8;
  *(ulong *)(pcVar4 + 0x20) = unaff_x20 + (uVar6 + uVar5 + 8 & (uVar6 ^ 0xffffffffffffffff));
  *(ulong *)(pcVar4 + 0x10) = unaff_x20 + uVar9;
  lVar3 = *plVar8;
  lVar7 = *(long *)(lVar3 + 0xb0);
  *(long *)(pcVar4 + 0x38) = lVar7;
  lVar2 = 0;
  __sSqMa(0,lVar7);
  *(long *)(pcVar4 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(pcVar4 + 0x48) = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar4 + 0x50) = uVar5;
  lVar2 = *(long *)(lVar7 + -8);
  *(long *)(pcVar4 + 0x58) = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar4 + 0x60) = uVar5;
  lVar3 = *(long *)(lVar3 + 0xa8);
  *(long *)(pcVar4 + 0x68) = lVar3;
  lVar2 = *(long *)(lVar3 + -8);
  *(long *)(pcVar4 + 0x70) = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar4 + 0x78) = uVar5;
  lVar2 = 0;
  __sSqMa(0,lVar3);
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar4 + 0x80) = uVar5;
  lVar2 = 0;
  __sScS8IteratorVMa(0,lVar3);
  *(long *)(pcVar4 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(pcVar4 + 0x90) = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar4 + 0x98) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00089638,0,0);
  return;
}



/* Entry: 00089c1c; end: 00089c7b;  */

void FUN_00089c1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00089c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 00089c7c; end: 00089ceb;  */

void FUN_00089c7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  segment_command *psVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar3 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar3;
  psVar3->cmd = (int)unaff_x22;
  psVar3->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar3->segname[0] = '\x1c';
  psVar3->segname[1] = -99;
  psVar3->segname[2] = '\b';
  psVar3->segname[3] = '\0';
  psVar3->segname[4] = '\0';
  psVar3->segname[5] = '\0';
  psVar3->segname[6] = '\0';
  psVar3->segname[7] = '\0';
  FUN_0003eb58(psVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 00089cec; end: 00089d1f;  */

void FUN_00089cec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 0xfc) != 0x6c) {
    return;
  }
  if ((param_3 & 3) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
    return;
  }
  return;
}



/* Entry: 00089d20; end: 00089d67;  */

void FUN_00089d20(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)
           PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_0099bee8;
  lVar2 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00089d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x68))(param_1,uVar1,lVar2);
  return;
}



/* Entry: 00089d68; end: 00089ddf;  */

void FUN_00089d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined1 *)(unaff_x20 + 0x29) = param_5;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00089de0; end: 0008a0cf;  */

void FUN_00089de0(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lStack_70 = *unaff_x20;
  lVar11 = *(long *)(param_2 + -8);
  lStack_78 = *(long *)(lVar11 + 0x40);
  lStack_90 = param_2;
  uStack_88 = param_1;
  uStack_68 = param_3;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar8 = *(undefined8 *)(extraout_x12 + 0xa8);
  lVar4 = 0;
  puStack_b8 = auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = uVar8;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar8);
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  lVar5 = 0;
  __sScSMa(0,uVar8);
  lVar16 = *(long *)(lVar5 + -8);
  lVar17 = *(long *)(lVar16 + 0x40);
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar9 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar12 - extraout_x12_00;
  (**(code **)(lVar15 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_0099bee8,
             lVar4);
  lStack_80 = lVar13;
  FUN_0009f6e4(lVar13,lVar9);
  (**(code **)(lVar15 + 8))(lVar9,lVar4);
  lVar4 = lStack_c0;
  lStack_98 = unaff_x20[3];
  lStack_a0 = unaff_x20[4];
  uStack_a8 = (uint)*(byte *)(unaff_x20 + 5);
  uStack_a4 = (uint)*(byte *)((long)unaff_x20 + 0x29);
  (**(code **)(lVar16 + 0x10))(lVar12,lVar13,lStack_c0);
  lVar5 = lStack_90;
  puVar3 = puStack_b8;
  lStack_c8 = lVar11;
  (**(code **)(lVar11 + 0x10))(puStack_b8,uStack_88,lStack_90);
  bVar1 = *(byte *)(lVar16 + 0x50);
  uVar10 = (ulong)bVar1 + 0x30 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar14 = lVar17 + uVar10 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar18 = bVar2 + uVar14 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar6 = &UNK_009a4768;
  _swift_allocObject(&UNK_009a4768,uVar18 + lStack_78,bVar1 | bVar2 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uStack_b0;
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(lStack_70 + 0xb0);
  *(long *)(puVar6 + 0x20) = lVar5;
  *(undefined8 *)(puVar6 + 0x28) = uStack_68;
  (**(code **)(lVar16 + 0x20))(puVar6 + uVar10,lVar12,lVar4);
  *(long **)(puVar6 + uVar14) = unaff_x20;
  (**(code **)(lStack_c8 + 0x20))(puVar6 + uVar18,puVar3,lVar5);
  puVar7 = &UNK_009a4790;
  _swift_allocObject(&UNK_009a4790,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_007d3ce8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  _swift_retain();
  _swift_retain(puVar6);
  *(undefined **)(lVar13 + -0x10) = PTR___sytN_0099b8e0 + 8;
  lVar5 = lStack_98;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (lStack_98,lStack_a0,uStack_a8,uStack_a4,0,0,&UNK_007d3cf0,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  (**(code **)(lVar16 + 8))(lStack_80,lVar4);
  lVar4 = 0xae9838;
  func_0x000115a8(0xae9838,&UNK_007d3c40);
  _swift_allocObject();
  *(long *)(lVar4 + 0x10) = lVar5;
  return;
}



/* Entry: 0008a0d0; end: 0008a1ab;  */

void FUN_0008a0d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(long **)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *param_2;
  lVar2 = *(long *)(lVar3 + 0xb0);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar3 = *(long *)(lVar3 + 0xa8);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  lVar2 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0;
  __sSqMa(0,lVar3);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  lVar2 = 0;
  __sScS8IteratorVMa(0,lVar3);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0008a1ac,0,0);
  return;
}



/* Entry: 0008a1ac; end: 0008a233;  */

void FUN_0008a1ac(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  __sScSMa(0,*(undefined8 *)(unaff_x22 + 0x50));
  __sScS17makeAsyncIteratorScS0C0Vyx_GyF(uVar3);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(lVar1 + 0x38);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_0099bf28 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_0008a234;
                    /* WARNING: Could not recover jumptable at 0x007788a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_0099bf20)
            (plVar2,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 0008a234; end: 0008a27b;  */

void FUN_0008a234(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0008a27c,0,0);
  return;
}



/* Entry: 0008a27c; end: 0008a3a3;  */

void FUN_0008a27c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar4 = uVar6;
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar2);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x70));
    (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0008a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar8 = *(int **)(unaff_x22 + 0x88);
  (**(code **)(lVar3 + 0x20))(*(undefined8 *)(unaff_x22 + 0x60),uVar6,uVar2);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_0008a3a4;
                    /* WARNING: Could not recover jumptable at 0x0008a3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 0008a3a4; end: 0008a3eb;  */

void FUN_0008a3a4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0008a3ec,0,0);
  return;
}



/* Entry: 0008a3ec; end: 0008a497;  */

void FUN_0008a3ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x18))(uVar2,*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar6 + 8))(uVar2,uVar3);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_0099bf28 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_0008a234;
                    /* WARNING: Could not recover jumptable at 0x007788a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_0099bf20)
            (plVar7,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 0008a498; end: 0008a4b7;  */

void FUN_0008a498(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 0008a4b8; end: 0008a4f3;  */

long FUN_0008a4b8(long param_1)

{
  FUN_00092370();
  FUN_00089cec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  return param_1;
}



/* Entry: 0008a4f4; end: 0008a50f;  */

void FUN_0008a4f4(undefined8 param_1)

{
  FUN_0008a4b8();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x40,7);
  return;
}



/* Entry: 0008a510; end: 0008a51f;  */

void FUN_0008a510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00840ed8);
  return;
}



/* Entry: 0008a520; end: 0008a577;  */

void FUN_0008a520(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = &UNK_007d3c88;
  puStack_20 = &UNK_007d3ca0;
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0xb8);
  return;
}



/* Entry: 0008a578; end: 0008a627;  */

void FUN_0008a578(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __sScSMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar6 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(lVar5 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar6));
  (**(code **)(lVar7 + 8))(unaff_x20 + (uVar4 + uVar6 + 8 & (uVar4 ^ 0xffffffffffffffff)),lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0008a628; end: 0008a6db;  */

void FUN_0008a628(void)

{
  undefined8 uVar1;
  long lVar2;
  dword *pdVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = 0;
  __sScSMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar8 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  plVar7 = *(long **)(unaff_x20 + uVar5);
  pdVar3 = &section_00000068.reserved2;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(code **)(pdVar3 + 2) = FUN_0008a6dc;
  *(long *)(pdVar3 + 10) = lVar4;
  *(undefined8 *)(pdVar3 + 0xc) = uVar1;
  *(long **)(pdVar3 + 6) = plVar7;
  *(ulong *)(pdVar3 + 8) = unaff_x20 + (uVar6 + uVar5 + 8 & (uVar6 ^ 0xffffffffffffffff));
  *(ulong *)(pdVar3 + 4) = unaff_x20 + uVar8;
  lVar2 = *plVar7;
  lVar4 = *(long *)(lVar2 + 0xb0);
  *(long *)(pdVar3 + 0xe) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(pdVar3 + 0x10) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar3 + 0x12) = uVar5;
  lVar2 = *(long *)(lVar2 + 0xa8);
  *(long *)(pdVar3 + 0x14) = lVar2;
  lVar4 = *(long *)(lVar2 + -8);
  *(long *)(pdVar3 + 0x16) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar3 + 0x18) = uVar5;
  lVar4 = 0;
  __sSqMa(0,lVar2);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar3 + 0x1a) = uVar5;
  lVar4 = 0;
  __sScS8IteratorVMa(0,lVar2);
  *(long *)(pdVar3 + 0x1c) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(pdVar3 + 0x1e) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar3 + 0x20) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0008a1ac,0,0);
  return;
}



/* Entry: 0008a6dc; end: 0008a73b;  */

void FUN_0008a6dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0008a714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0008a73c; end: 0008a7ab;  */

void FUN_0008a73c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  segment_command *psVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar3 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar3;
  psVar3->cmd = (int)unaff_x22;
  psVar3->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar3->segname = FUN_0008a7ac;
  FUN_0003eb58(psVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 0008a7ac; end: 0008a7af;  */

void FUN_0008a7ac(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0008a714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0008a7b0; end: 0008a7e7;  */

void FUN_0008a7b0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_0009ea40();
  return;
}



/* Entry: 0008a7e8; end: 0008a863;  */

void FUN_0008a7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long lVar1;
  
  FUN_0008b29c(0,*(undefined8 *)(*unaff_x20 + 0x88));
  lVar1 = unaff_x20[2];
  _swift_bridgeObjectRetain(lVar1);
  FUN_000a0834(param_2,param_3);
  FUN_0008a95c(lVar1,param_2);
  return;
}



/* Entry: 0008a864; end: 0008a86b;  */

void FUN_0008a864(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 0008a86c; end: 0008a89f;  */

void FUN_0008a86c(long param_1)

{
  func_0x0009ea4c();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x18,7);
  return;
}



/* Entry: 0008a8a0; end: 0008a8af;  */

void FUN_0008a8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00840f44);
  return;
}



/* Entry: 0008a8b0; end: 0008a8f3;  */

void FUN_0008a8b0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBbWV_0099ae78 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x90);
  return;
}



/* Entry: 0008a8f4; end: 0008a8f7;  */

void FUN_0008a8f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0008a8f8; end: 0008a95b;  */

void FUN_0008a8f8(long param_1)

{
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_40 = PTR___sBbWV_0099ae78 + 0x40;
  puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_30 = puStack_38;
  puStack_28 = puStack_38;
  puStack_20 = puStack_40;
  _swift_initClassMetadata2(param_1,0,6,&puStack_40,param_1 + 0x58);
  return;
}



/* Entry: 0008a95c; end: 0008a9a7;  */

undefined8 FUN_0008a95c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_0008a9a8(param_1,param_2);
  return unaff_x20;
}



/* Entry: 0008a9a8; end: 0008ac83;  */

void FUN_0008a9a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  code *pcVar11;
  undefined *puVar12;
  long *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  lVar14 = *unaff_x20;
  lVar1 = 0;
  func_0x0009e3e0();
  _swift_allocObject();
  lVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  lVar3 = lVar2;
  _swift_allocObject();
  func_0x001d45e0();
  puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined **)(lVar1 + 0x18) = puVar4;
  unaff_x20[4] = lVar1;
  _swift_allocObject(lVar2,0x18,7);
  func_0x001d45e0();
  unaff_x20[5] = lVar2;
  uVar13 = *(undefined8 *)(lVar14 + 0x50);
  puVar4 = PTR___sSiN_0099b2c0;
  __sS2Dyxq_GycfC(PTR___sSiN_0099b2c0,uVar13,PTR___sSiSHsWP_0099b2d0);
  unaff_x20[6] = (long)puVar4;
  unaff_x20[7] = 0;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  uVar5 = 0xff;
  alStack_78[0] = param_1;
  FUN_0009eb08(0xff,uVar13);
  uVar13 = 0;
  __sSaMa(0,uVar5);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(param_2);
  puVar4 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar13);
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(&uStack_88,uVar13,puVar4);
  __ss18EnumeratedSequenceVMa(0,uVar13,puVar4);
  __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(alStack_78);
  uVar6 = 0;
  __ss18EnumeratedSequenceV8IteratorVMa(0,uVar13,puVar4);
  __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF(&uStack_88);
  uVar5 = uStack_88;
  lVar3 = lStack_80;
  while (lVar3 != 0) {
    puVar4 = &UNK_009a4980;
    puVar7 = puVar4;
    uStack_88 = uVar5;
    lStack_80 = lVar3;
    _swift_allocObject(&UNK_009a4980,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar8 = &UNK_009a49a8;
    _swift_allocObject(&UNK_009a49a8,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar5;
    *(long *)(puVar8 + 0x20) = param_2;
    _swift_allocObject(&UNK_009a4980,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar9 = &UNK_009a49d0;
    _swift_allocObject(&UNK_009a49d0,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar4;
    *(long *)(puVar9 + 0x18) = param_1;
    *(long *)(puVar9 + 0x20) = param_2;
    _swift_retain_n(param_2,2);
    _swift_bridgeObjectRetain(param_1);
    _swift_retain(puVar7);
    _swift_retain(puVar4);
    pcVar10 = FUN_0008b314;
    puVar12 = puVar8;
    func_0x0009e974(FUN_0008b314,puVar8,FUN_0008b354,puVar9);
    _swift_release(puVar7);
    _swift_release(puVar4);
    _swift_release(puVar8);
    _swift_release(puVar9);
    pcVar11 = pcVar10;
    _swift_getObjectType(pcVar10);
    (**(code **)(puVar12 + 0x10))(unaff_x20[4],pcVar11,puVar12);
    _swift_release(lVar3);
    _swift_unknownObjectRelease(pcVar10);
    __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF(&uStack_88,uVar6);
    uVar5 = uStack_88;
    lVar3 = lStack_80;
  }
  _swift_bridgeObjectRelease(param_1);
  _swift_release(param_2);
  _swift_bridgeObjectRelease(alStack_78[0]);
  return;
}



/* Entry: 0008ac84; end: 0008ae2f;  */

void FUN_0008ac84(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_90 [8];
  undefined8 ***apppuStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(*(long *)(*param_4 + 0x50) + 0x10);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    _swift_retain(uVar3);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(uVar3);
    lVar1 = *(long *)(lVar4 + -8);
    (**(code **)(lVar1 + 0x10))(puVar5,param_1,lVar4);
    (**(code **)(lVar1 + 0x38))(puVar5,0,1,lVar4);
    uStack_70 = param_3;
    _swift_beginAccess(param_2 + 0x30,apppuStack_88,0x21,0);
    uVar3 = 0;
    __sSDMa(0,PTR___sSiN_0099b2c0,lVar4,PTR___sSiSHsWP_0099b2d0);
    __sSDyq_Sgxcis(puVar5,&uStack_70,uVar3);
    ppppuVar2 = apppuStack_88;
    _swift_endAccess();
    FUN_0008ae30();
    if (ppppuVar2 == (undefined8 ****)0x0) {
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_retain(lVar1);
      func_0x001d46c8();
      _swift_release(param_2);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      _swift_retain(uVar3);
      func_0x001d46c8();
      _swift_release(uVar3);
      apppuStack_88[0] = ppppuVar2;
      FUN_000a08b0(apppuStack_88);
      _swift_bridgeObjectRelease(ppppuVar2);
      lVar1 = param_2;
    }
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 0008ae30; end: 0008b0eb;  */

code * FUN_0008ae30(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 auStack_80 [2];
  long lStack_70;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar7 = *unaff_x20;
  func_0x001d46d0();
  lVar9 = unaff_x20[2];
  lVar8 = *(long *)(lVar7 + 0x50);
  uVar1 = 0;
  FUN_0009eb08(0,lVar8);
  __sSa5countSivg(lVar9,uVar1);
  _swift_beginAccess(unaff_x20 + 6,auStack_58,0,0);
  lVar10 = unaff_x20[6];
  lVar7 = lVar10;
  _swift_bridgeObjectRetain();
  __sSD5countSivg();
  _swift_bridgeObjectRelease(lVar10);
  puVar6 = PTR___sSiN_0099b2c0;
  pcVar2 = (code *)0x0;
  if (lVar9 == lVar7) {
    lVar7 = unaff_x20[6];
    uVar3 = 0;
    lStack_70 = lVar8;
    lStack_60 = lVar7;
    __sSDMa(0,PTR___sSiN_0099b2c0,lVar8,PTR___sSiSHsWP_0099b2d0);
    _swift_bridgeObjectRetain(lVar7);
    puVar4 = PTR___sSDyxq_GSTsMc_0099af00;
    _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_0099af00,uVar3);
    uVar1 = 0x8b360;
    __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(0x8b360,auStack_80,uVar3,puVar4);
    _swift_bridgeObjectRelease(lVar7);
    puVar4 = &UNK_007d3dd0;
    auStack_80[0] = uVar1;
    lStack_60 = lVar8;
    _swift_getKeyPath(&UNK_007d3dd0,&lStack_60);
    uVar3 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,puVar6,lVar8,"key value ",0);
    uVar5 = 0;
    __sSaMa(0,uVar3);
    puVar6 = PTR___sSayxGSlsMc_0099b208;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar5);
    pcVar2 = FUN_0008b374;
    FUN_000955ec(FUN_0008b374,puVar4,uVar5,lVar8,PTR___ss5NeverON_0099b788,puVar6,
                 PTR___ss5NeverOs5ErrorsWP_0099b790);
    _swift_bridgeObjectRelease(uVar1);
    _swift_release(puVar4);
  }
  return pcVar2;
}



/* Entry: 0008b0ec; end: 0008b1f3;  */

void FUN_0008b0ec(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR___ss7KeyPathCMo_0099b888;
  lVar6 = *param_3;
  lVar3 = *(long *)(lVar6 + *(long *)PTR___ss7KeyPathCMo_0099b888);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40),param_2,param_2);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar5 = (undefined8 *)((long)puVar4 - extraout_x12);
  (**(code **)(lVar7 + 0x10))(puVar5);
  iVar1 = *(int *)(lVar3 + 0x30);
  *puVar4 = *puVar5;
  (**(code **)(*(long *)(*(long *)(lVar6 + *(long *)puVar2 + 8) + -8) + 0x20))
            ((undefined1 *)((long)puVar4 + (long)iVar1),(long)puVar5 + (long)iVar1);
  _swift_getAtKeyPath(param_1,puVar4,param_3);
  (**(code **)(lVar7 + 8))(puVar4,lVar3);
  return;
}



/* Entry: 0008b1f4; end: 0008b23f;  */

void FUN_0008b1f4(void)

{
  long unaff_x20;
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF
            (FUN_0008b2ac,*(undefined8 *)(unaff_x20 + 0x20),PTR___sytN_0099b8e0 + 8);
  return;
}



/* Entry: 0008b240; end: 0008b29b;  */

void FUN_0008b240(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 0008b29c; end: 0008b2ab;  */

void FUN_0008b29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00840fb0);
  return;
}



/* Entry: 0008b2ac; end: 0008b313;  */

void FUN_0008b2ac(void)

{
  FUN_0009e2fc();
  return;
}



/* Entry: 0008b314; end: 0008b31f;  */

void FUN_0008b314(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_90 [8];
  undefined8 ***apppuStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(*(long *)(**(long **)(unaff_x20 + 0x20) + 0x50) + 0x10);
  lVar1 = 0;
  __sSqMa(0,lVar6);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + -extraout_x8;
  _swift_beginAccess(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    _swift_retain(uVar5);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(uVar5);
    lVar1 = *(long *)(lVar6 + -8);
    (**(code **)(lVar1 + 0x10))(puVar7,param_1,lVar6);
    (**(code **)(lVar1 + 0x38))(puVar7,0,1,lVar6);
    uStack_70 = uVar3;
    _swift_beginAccess(lVar2 + 0x30,apppuStack_88,0x21,0);
    uVar3 = 0;
    __sSDMa(0,PTR___sSiN_0099b2c0,lVar6,PTR___sSiSHsWP_0099b2d0);
    __sSDyq_Sgxcis(puVar7,&uStack_70,uVar3);
    ppppuVar4 = apppuStack_88;
    _swift_endAccess();
    FUN_0008ae30();
    if (ppppuVar4 == (undefined8 ****)0x0) {
      lVar1 = *(long *)(lVar2 + 0x28);
      _swift_retain(lVar1);
      func_0x001d46c8();
      _swift_release(lVar2);
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      _swift_retain(uVar3);
      func_0x001d46c8();
      _swift_release(uVar3);
      apppuStack_88[0] = ppppuVar4;
      FUN_000a08b0(apppuStack_88);
      _swift_bridgeObjectRelease(ppppuVar4);
      lVar1 = lVar2;
    }
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 0008b320; end: 0008b353;  */

void FUN_0008b320(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0008b354; end: 0008b373;  */

void FUN_0008b354(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = **(long **)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    _swift_retain(uVar4);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(uVar4);
    if (SCARRY8(*(long *)(lVar2 + 0x38),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8b0ec);
      (*pcVar1)();
    }
    *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + 1;
    uVar4 = 0;
    FUN_0009eb08(0,*(undefined8 *)(*(long *)(lVar5 + 0x50) + 0x10));
    __sSa5countSivg(lVar3,uVar4);
    lVar6 = *(long *)(lVar2 + 0x38);
    lVar5 = *(long *)(lVar2 + 0x28);
    _swift_retain(lVar5);
    func_0x001d46c8();
    if (lVar3 == lVar6) {
      _swift_release(lVar5);
      FUN_000a08f8();
      lVar5 = lVar2;
    }
    else {
      _swift_release(lVar2);
    }
    _swift_release(lVar5);
  }
  return;
}



/* Entry: 0008b374; end: 0008b38f;  */

void FUN_0008b374(void)

{
  FUN_0008b0ec();
  return;
}



/* Entry: 0008b390; end: 0008b3d3;  */

void FUN_0008b390(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_0009ea40();
  return;
}



/* Entry: 0008b3d4; end: 0008b487;  */

undefined1  [16] FUN_0008b3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  FUN_0008c51c(0,*(undefined8 *)(*unaff_x20 + 0x88),*(undefined8 *)(*unaff_x20 + 0x90));
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  _swift_retain(lVar1);
  _swift_retain(lVar2);
  FUN_000a0834(param_2,param_3);
  lVar3 = lVar1;
  FUN_0008c7d4(lVar1,lVar2,param_2);
  _swift_release(lVar1);
  _swift_release(lVar2);
  _swift_release(param_2);
  auVar4._8_8_ = &PTR_DAT_009a4da0;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 0008b488; end: 0008b4df;  */

void FUN_0008b488(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1);
  return;
}



/* Entry: 0008b4e0; end: 0008b4fb;  */

void FUN_0008b4e0(undefined8 param_1)

{
  func_0x0008b4ac();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x20,7);
  return;
}



/* Entry: 0008b4fc; end: 0008b50b;  */

void FUN_0008b4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841000);
  return;
}



/* Entry: 0008b50c; end: 0008b54b;  */

void FUN_0008b50c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_007d3e18;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x98);
  return;
}



/* Entry: 0008b54c; end: 0008b597;  */

void FUN_0008b54c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_0009ea40();
  return;
}



/* Entry: 0008b598; end: 0008b667;  */

undefined1  [16] FUN_0008b598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x20;
  FUN_0008cbf8(0,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90),
               *(undefined8 *)(lVar3 + 0x98));
  lVar3 = unaff_x20[2];
  lVar1 = unaff_x20[3];
  lVar4 = unaff_x20[4];
  _swift_retain(lVar3);
  _swift_retain(lVar1);
  _swift_retain(lVar4);
  FUN_000a0834(param_2,param_3);
  lVar2 = lVar3;
  FUN_0008cf14(lVar3,lVar1,lVar4,param_2);
  _swift_release(lVar3);
  _swift_release(lVar1);
  _swift_release(lVar4);
  _swift_release(param_2);
  auVar5._8_8_ = &PTR_DAT_009a4e88;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 0008b668; end: 0008b6e7;  */

void FUN_0008b668(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1);
  return;
}



/* Entry: 0008b6e8; end: 0008b703;  */

void FUN_0008b6e8(undefined8 param_1)

{
  func_0x0008b6a0();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 0008b704; end: 0008b713;  */

void FUN_0008b704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_0084106c);
  return;
}



/* Entry: 0008b714; end: 0008b753;  */

void FUN_0008b714(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_007d3e88;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xa0);
  return;
}



/* Entry: 0008b754; end: 0008b7ab;  */

void FUN_0008b754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_0009ea40();
  return;
}



/* Entry: 0008b7ac; end: 0008b8a7;  */

undefined1  [16] FUN_0008b7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *unaff_x20;
  uStack_78 = *(undefined8 *)(lVar5 + 0x90);
  uStack_80 = *(undefined8 *)(lVar5 + 0x88);
  uStack_68 = *(undefined8 *)(lVar5 + 0xa0);
  uStack_70 = *(undefined8 *)(lVar5 + 0x98);
  FUN_0008d350(0,&uStack_80);
  lVar5 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  lVar1 = unaff_x20[4];
  lVar3 = unaff_x20[5];
  _swift_retain(lVar5);
  _swift_retain(lVar2);
  _swift_retain(lVar1);
  _swift_retain(lVar3);
  FUN_000a0834(param_2,param_3);
  lVar4 = lVar5;
  FUN_0008d6a0(lVar5,lVar2,lVar1,lVar3,param_2);
  _swift_release(lVar5);
  _swift_release(lVar2);
  _swift_release(lVar1);
  _swift_release(lVar3);
  _swift_release(param_2);
  auVar6._8_8_ = &PTR_DAT_009a4f70;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 0008b8a8; end: 0008b937;  */

void FUN_0008b8a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(uVar2);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1);
  return;
}



/* Entry: 0008b938; end: 0008b953;  */

void FUN_0008b938(undefined8 param_1)

{
  func_0x0008b8e8();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x30,7);
  return;
}



/* Entry: 0008b954; end: 0008b963;  */

void FUN_0008b954(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_0099ba28)(param_1,param_2,&UNK_008410d8);
  return;
}



/* Entry: 0008b964; end: 0008b9a3;  */

void FUN_0008b964(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_007d3ef8;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xa8);
  return;
}



/* Entry: 0008b9a4; end: 0008bccb;  */

void FUN_0008b9a4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *param_1;
  puVar3 = &UNK_009a4c70;
  puVar1 = puVar3;
  _swift_allocObject(&UNK_009a4c70,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puVar2 = &UNK_009a4c98;
  _swift_allocObject(&UNK_009a4c98,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uVar7 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(long *)(puVar2 + 0x20) = param_4;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  _swift_allocObject(&UNK_009a4c70,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &UNK_009a4cc0;
  _swift_allocObject(&UNK_009a4cc0,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(long *)(puVar4 + 0x20) = param_4;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  _swift_retain_n(param_2,2);
  _swift_retain(puVar1);
  _swift_retain(puVar3);
  uVar7 = 0x8c128;
  puVar5 = puVar2;
  func_0x0009e974(0x8c128,puVar2,FUN_0008c164,puVar4);
  _swift_release(puVar1);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  _swift_getObjectType(uVar7);
  (**(code **)(param_4 + 0x58))(param_3,param_4);
  (**(code **)(puVar5 + 0x10))();
  _swift_unknownObjectRelease(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_3);
  return;
}



/* Entry: 0008bccc; end: 0008bdfb;  */

void FUN_0008bccc(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar5 = *param_2;
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    pcVar4 = *(code **)(param_5 + 0x60);
    lVar1 = param_3;
    (*pcVar4)(param_3,param_5);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(lVar1);
    pcVar2 = (code *)auStack_88;
    lVar1 = param_3;
    (**(code **)(param_5 + 0x50))(pcVar2,param_3,param_5);
    pcVar3 = (code *)auStack_a8;
    _swift_modifyAtWritableKeyPath();
    *(undefined1 *)
     (lVar1 + *(int *)(*(long *)(lVar5 + *(long *)PTR___ss15WritableKeyPathCMo_0099b4f8 + 8) + 0x30)
     ) = 1;
    (*pcVar3)(auStack_a8,0);
    (*pcVar2)(auStack_88,0);
    (**(code **)(param_5 + 0x78))(param_3,param_5);
    (*pcVar4)(param_3,param_5);
    func_0x001d46c8();
    _swift_release(param_3);
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 0008bdfc; end: 0008bfe7;  */

void FUN_0008bdfc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_2,param_1,&UNK_0084116c,&UNK_008411a4);
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_80 - extraout_x8;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_0084116c,&UNK_00841184);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_0084116c,&UNK_0084118c);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_0084116c,&UNK_00841194);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_0084116c,&UNK_0084119c);
  uVar6 = 0;
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  FUN_0008f320(0,&uStack_80);
  lVar9 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_2 + 0x40))(lVar8 - extraout_x8_00,param_1,param_2);
  uVar7 = uVar6;
  FUN_0008f32c();
  (**(code **)(lVar9 + 8))(lVar8 - extraout_x8_00,uVar6);
  if ((uVar7 & 1) != 0) {
    (**(code **)(param_2 + 0x68))(lVar8,param_1,param_2);
    _swift_getAssociatedConformanceWitness(param_2,param_1,lVar1,&UNK_0084116c,&UNK_0084117c);
    (**(code **)(param_2 + 0x20))(lVar1,param_2);
    (**(code **)(lVar10 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 0008bfe8; end: 0008c043;  */

void FUN_0008bfe8(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x58))();
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_0008c0e8,param_1,PTR___sytN_0099b8e0 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1);
  return;
}



/* Entry: 0008c044; end: 0008c04b;  */

void FUN_0008c044(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = *unaff_x20;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_2,uVar8,&UNK_0084116c,&UNK_008411a4);
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_80 - extraout_x8;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar8,&UNK_0084116c,&UNK_00841184);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar8,&UNK_0084116c,&UNK_0084118c);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar8,&UNK_0084116c,&UNK_00841194);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,uVar8,&UNK_0084116c,&UNK_0084119c);
  uVar6 = 0;
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  FUN_0008f320(0,&uStack_80);
  lVar10 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_2 + 0x40))(lVar9 - extraout_x8_00,uVar8,param_2);
  uVar7 = uVar6;
  FUN_0008f32c();
  (**(code **)(lVar10 + 8))(lVar9 - extraout_x8_00,uVar6);
  if ((uVar7 & 1) != 0) {
    (**(code **)(param_2 + 0x68))(lVar9,uVar8,param_2);
    _swift_getAssociatedConformanceWitness(param_2,uVar8,lVar1,&UNK_0084116c,&UNK_0084117c);
    (**(code **)(param_2 + 0x20))(lVar1,param_2);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 0008c04c; end: 0008c0e7;  */

void FUN_0008c04c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  puVar1 = &DAT_007d3ff8;
  _swift_getWitnessTable(&DAT_007d3ff8,uVar2);
  (**(code **)(puVar1 + 0x58))();
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_0008c0e8,uVar2,PTR___sytN_0099b8e0 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 0008c0e8; end: 0008c123;  */

void FUN_0008c0e8(void)

{
  FUN_0009e2fc();
  return;
}



/* Entry: 0008c124; end: 0008c137;  */

void FUN_0008c124(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0008c138; end: 0008c163;  */

void FUN_0008c138(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0008c164; end: 0008c187;  */

void FUN_0008c164(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar8 = **(long **)(unaff_x20 + 0x30);
  _swift_beginAccess(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    pcVar7 = *(code **)(lVar1 + 0x60);
    lVar3 = lVar6;
    (*pcVar7)(lVar6,lVar1);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(lVar3);
    pcVar4 = (code *)auStack_88;
    lVar3 = lVar6;
    (**(code **)(lVar1 + 0x50))(pcVar4,lVar6,lVar1);
    pcVar5 = (code *)auStack_a8;
    _swift_modifyAtWritableKeyPath();
    *(undefined1 *)
     (lVar3 + *(int *)(*(long *)(lVar8 + *(long *)PTR___ss15WritableKeyPathCMo_0099b4f8 + 8) + 0x30)
     ) = 1;
    (*pcVar5)(auStack_a8,0);
    (*pcVar4)(auStack_88,0);
    (**(code **)(lVar1 + 0x78))(lVar6,lVar1);
    (*pcVar7)(lVar6,lVar1);
    func_0x001d46c8();
    _swift_release(lVar6);
    _swift_unknownObjectRelease(lVar2);
  }
  return;
}



/* Entry: 0008c188; end: 0008c227;  */

void FUN_0008c188(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_70;
  puStack_48 = &UNK_007d3fa8;
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  puStack_60 = PTR___ss5NeverON_0099b788;
  puStack_58 = PTR___ss5NeverON_0099b788;
  lVar1 = 0x13f;
  FUN_0008f320();
  if (puVar2 <= (undefined1 *)((long)&segment_command_00000020.vmaddr + 7)) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    _swift_initClassMetadata2(param_1,0,5,&puStack_48,param_1 + 0x60);
  }
  return;
}



/* Entry: 0008c228; end: 0008c44b;  */

void FUN_0008c228(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long *unaff_x20;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar6 = *unaff_x20;
  lVar4 = *(long *)(lVar6 + 0x50);
  lVar7 = *(long *)(lVar6 + 0x58);
  lVar2 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar4,lVar7,0,0);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lStack_a0 = *(long *)(lVar3 + -8);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&lStack_a0 - extraout_x8;
  puStack_70 = PTR___ss5NeverON_0099b788;
  puStack_68 = PTR___ss5NeverON_0099b788;
  lVar3 = 0;
  lStack_90 = lVar4;
  lStack_88 = lVar7;
  lStack_80 = lVar4;
  lStack_78 = lVar7;
  FUN_0008f320(0,&lStack_80);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar9 - extraout_x8_00;
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar11 - extraout_x12;
  lVar7 = *(long *)(lVar6 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar7,&lStack_80,0,0);
  (**(code **)(lVar8 + 0x10))(lVar4,(long)unaff_x20 + lVar7,lVar3);
  func_0x0008f7ec(lVar9,lVar3);
  (**(code **)(lVar8 + 8))(lVar4,lVar3);
  lVar4 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,lVar2);
  if ((int)lVar4 == 1) {
    (**(code **)(lStack_a0 + 8))(lVar9,lStack_98);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar12,lVar9,lVar2);
    iVar1 = *(int *)(lVar2 + 0x30);
    (**(code **)(*(long *)(lStack_90 + -8) + 0x10))(lVar11,lVar12);
    (**(code **)(*(long *)(lStack_88 + -8) + 0x10))(lVar11 + iVar1,lVar12 + iVar1);
    FUN_000a08b0(lVar11);
    pcVar5 = *(code **)(lVar10 + 8);
    (*pcVar5)(lVar11,lVar2);
    (*pcVar5)(lVar12,lVar2);
  }
  return;
}



/* Entry: 0008c44c; end: 0008c4f7;  */

void FUN_0008c44c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  _swift_release(unaff_x20[3]);
  _swift_release(lVar1);
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  uStack_48 = *(undefined8 *)(lVar3 + 0x58);
  uStack_50 = *(undefined8 *)(lVar3 + 0x50);
  puStack_40 = PTR___ss5NeverON_0099b788;
  puStack_38 = PTR___ss5NeverON_0099b788;
  lVar1 = 0;
  FUN_0008f320(0,&uStack_50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  return;
}



/* Entry: 0008c4f8; end: 0008c51b;  */

void FUN_0008c4f8(void)

{
  FUN_0008c44c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0008c51c; end: 0008c527;  */

void FUN_0008c51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008411ec);
  return;
}



/* Entry: 0008c528; end: 0008c5ab;  */

void FUN_0008c528(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  puStack_60 = PTR___ss5NeverON_0099b788;
  puStack_58 = PTR___ss5NeverON_0099b788;
  lVar1 = 0;
  FUN_0008f320(0,&uStack_70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 0008c5ac; end: 0008c5eb;  */

undefined1  [16] FUN_0008c5ac(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_0008c5ec;
  return auVar2;
}



/* Entry: 0008c5ec; end: 0008c637;  */

void FUN_0008c5ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_0099b9d0)();
  return;
}



/* Entry: 0008c638; end: 0008c7d3;  */

void FUN_0008c638(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  uVar2 = *(undefined8 *)(lVar8 + 0x58);
  func_0x0008f638((long)unaff_x20 + *(long *)(lVar8 + 0x68),uVar1,uVar2,PTR___ss5NeverON_0099b788,
                  PTR___ss5NeverON_0099b788);
  lVar9 = *(long *)(*unaff_x20 + 0x70);
  lVar3 = 0;
  func_0x0009e3e0();
  _swift_allocObject();
  uVar4 = 0;
  __s11SwiftSCLock4LockCMa();
  uVar5 = uVar4;
  _swift_allocObject();
  func_0x001d45e0();
  puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  *(undefined **)(lVar3 + 0x18) = puVar6;
  *(long *)((long)unaff_x20 + lVar9) = lVar3;
  lVar3 = *(long *)(*unaff_x20 + 0x78);
  _swift_allocObject(uVar4,0x18,7);
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar3) = uVar4;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = param_3;
  puVar6 = &UNK_007d4018;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  _swift_getKeyPath(&UNK_007d4018,&uStack_70);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  puVar7 = &DAT_007d3ff8;
  _swift_getWitnessTable(&DAT_007d3ff8,lVar8);
  FUN_0008b9a4(param_1,puVar6,lVar8,puVar7);
  _swift_release(puVar6);
  puVar6 = &UNK_007d4038;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  _swift_getKeyPath(&UNK_007d4038,&uStack_70);
  FUN_0008b9a4(param_2,puVar6,lVar8,puVar7);
  _swift_release(puVar6);
  return;
}



/* Entry: 0008c7d4; end: 0008c823;  */

void FUN_0008c7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_0008c638(param_1,param_2,param_3);
  return;
}



/* Entry: 0008c824; end: 0008c827;  */

void FUN_0008c824(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0008c828; end: 0008c8cb;  */

void FUN_0008c828(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_70;
  puStack_48 = &UNK_007d4088;
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  puStack_58 = PTR___ss5NeverON_0099b788;
  lVar1 = 0x13f;
  FUN_0008f320();
  if (puVar2 <= (undefined1 *)((long)&segment_command_00000020.vmaddr + 7)) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    _swift_initClassMetadata2(param_1,0,5,&puStack_48,param_1 + 0x68);
  }
  return;
}



/* Entry: 0008c8cc; end: 0008cb17;  */

void FUN_0008c8cc(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar10 = *unaff_x20;
  lVar7 = *(long *)(lVar10 + 0x50);
  lVar9 = *(long *)(lVar10 + 0x58);
  lVar6 = *(long *)(lVar10 + 0x60);
  lVar3 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar7,lVar9,lVar6,0,0);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_b0 + -extraout_x8;
  puStack_68 = PTR___ss5NeverON_0099b788;
  lVar4 = 0;
  lStack_98 = lVar7;
  lStack_90 = lVar9;
  lStack_88 = lVar6;
  lStack_80 = lVar7;
  lStack_78 = lVar9;
  lStack_70 = lVar6;
  FUN_0008f320(0,&lStack_80);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar12 - extraout_x8_00;
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar13 - extraout_x12;
  lVar6 = *(long *)(lVar10 + 0x70);
  _swift_beginAccess((long)unaff_x20 + lVar6,&lStack_80,0,0);
  (**(code **)(lVar11 + 0x10))(lVar7,(long)unaff_x20 + lVar6,lVar4);
  func_0x0008fab8(puVar12,lVar4);
  (**(code **)(lVar11 + 8))(lVar7,lVar4);
  puVar5 = puVar12;
  (**(code **)(lVar9 + 0x30))(puVar12,1,lVar3);
  if ((int)puVar5 == 1) {
    (**(code **)(lStack_a8 + 8))(puVar12,lStack_a0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar14,puVar12,lVar3);
    iVar1 = *(int *)(lVar3 + 0x30);
    iVar2 = *(int *)(lVar3 + 0x40);
    (**(code **)(*(long *)(lStack_98 + -8) + 0x10))(lVar13,lVar14);
    (**(code **)(*(long *)(lStack_90 + -8) + 0x10))(lVar13 + iVar1,lVar14 + iVar1);
    (**(code **)(*(long *)(lStack_88 + -8) + 0x10))(lVar13 + iVar2,lVar14 + iVar2);
    FUN_000a08b0(lVar13);
    pcVar8 = *(code **)(lVar9 + 8);
    (*pcVar8)(lVar13,lVar3);
    (*pcVar8)(lVar14,lVar3);
  }
  return;
}



/* Entry: 0008cb18; end: 0008cbd3;  */

void FUN_0008cb18(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  _swift_release(unaff_x20[4]);
  _swift_release(lVar2);
  _swift_release(lVar1);
  lVar2 = *(long *)(*unaff_x20 + 0x70);
  uStack_40 = *(undefined8 *)(lVar3 + 0x60);
  uStack_48 = *(undefined8 *)(lVar3 + 0x58);
  uStack_50 = *(undefined8 *)(lVar3 + 0x50);
  puStack_38 = PTR___ss5NeverON_0099b788;
  lVar1 = 0;
  FUN_0008f320(0,&uStack_50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)));
  return;
}



/* Entry: 0008cbd4; end: 0008cbf7;  */

void FUN_0008cbd4(void)

{
  FUN_0008cb18();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0008cbf8; end: 0008cc03;  */

void FUN_0008cbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_0084123c);
  return;
}



/* Entry: 0008cc04; end: 0008cc8b;  */

void FUN_0008cc04(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x70);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  uStack_60 = *(undefined8 *)(param_2 + 0x60);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  puStack_58 = PTR___ss5NeverON_0099b788;
  lVar1 = 0;
  FUN_0008f320(0,&uStack_70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 0008cc8c; end: 0008cccb;  */

undefined1  [16] FUN_0008cc8c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x70);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_0008cccc;
  return auVar2;
}



/* Entry: 0008cccc; end: 0008cd17;  */

void FUN_0008cccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_0099b9d0)();
  return;
}



/* Entry: 0008cd18; end: 0008cf13;  */

void FUN_0008cd18(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  uVar2 = *(undefined8 *)(lVar8 + 0x58);
  uVar9 = *(undefined8 *)(lVar8 + 0x60);
  func_0x0008f638((long)unaff_x20 + *(long *)(lVar8 + 0x70),uVar1,uVar2,uVar9,
                  PTR___ss5NeverON_0099b788);
  lVar10 = *(long *)(*unaff_x20 + 0x78);
  lVar3 = 0;
  func_0x0009e3e0();
  _swift_allocObject();
  uVar4 = 0;
  __s11SwiftSCLock4LockCMa();
  uVar5 = uVar4;
  _swift_allocObject();
  func_0x001d45e0();
  puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  *(undefined **)(lVar3 + 0x18) = puVar6;
  *(long *)((long)unaff_x20 + lVar10) = lVar3;
  lVar3 = *(long *)(*unaff_x20 + 0x80);
  _swift_allocObject(uVar4,0x18,7);
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar3) = uVar4;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  unaff_x20[4] = param_3;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)) = param_4;
  puVar6 = &UNK_007d40f8;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = uVar9;
  _swift_getKeyPath(&UNK_007d40f8,&uStack_80);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_4);
  puVar7 = &DAT_007d40d8;
  _swift_getWitnessTable(&DAT_007d40d8,lVar8);
  FUN_0008b9a4(param_1,puVar6,lVar8,puVar7);
  _swift_release(puVar6);
  puVar6 = &UNK_007d4118;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = uVar9;
  _swift_getKeyPath(&UNK_007d4118,&uStack_80);
  FUN_0008b9a4(param_2,puVar6,lVar8,puVar7);
  _swift_release(puVar6);
  puVar6 = &UNK_007d4138;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  uStack_70 = uVar9;
  _swift_getKeyPath(&UNK_007d4138,&uStack_80);
  FUN_0008b9a4(param_3,puVar6,lVar8,puVar7);
  _swift_release(puVar6);
  return;
}



/* Entry: 0008cf14; end: 0008cf73;  */

void FUN_0008cf14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_allocObject();
  FUN_0008cd18(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 0008cf74; end: 0008cf77;  */

void FUN_0008cf74(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0008cf78; end: 0008d00b;  */

void FUN_0008cf78(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_70;
  puStack_48 = &UNK_007d4188;
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  lVar1 = 0x13f;
  FUN_0008f320();
  if (puVar2 <= (undefined1 *)((long)&segment_command_00000020.vmaddr + 7)) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    _swift_initClassMetadata2(param_1,0,5,&puStack_48,param_1 + 0x70);
  }
  return;
}



/* Entry: 0008d00c; end: 0008d26f;  */

void FUN_0008d00c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = *unaff_x20;
  lVar7 = *(long *)(lVar9 + 0x50);
  lVar10 = *(long *)(lVar9 + 0x58);
  lVar8 = *(long *)(lVar9 + 0x60);
  lVar11 = *(long *)(lVar9 + 0x68);
  lVar4 = 0xff;
  lStack_80 = lVar7;
  lStack_78 = lVar10;
  lStack_70 = lVar8;
  lStack_68 = lVar11;
  _swift_getTupleTypeMetadata(0xff,4,&lStack_80,0,0);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_b0 = *(long *)(lVar5 + -8);
  lStack_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&lStack_b0 - extraout_x8;
  lVar5 = 0;
  lStack_a0 = lVar7;
  lStack_98 = lVar10;
  lStack_90 = lVar8;
  lStack_88 = lVar11;
  lStack_80 = lVar7;
  lStack_78 = lVar10;
  lStack_70 = lVar8;
  lStack_68 = lVar11;
  FUN_0008f320(0,&lStack_80);
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar14 - extraout_x8_00;
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar12 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar12 - extraout_x12;
  lVar10 = *(long *)(lVar9 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar10,&lStack_80,0,0);
  (**(code **)(lVar11 + 0x10))(lVar7,(long)unaff_x20 + lVar10,lVar5);
  func_0x0008fef8(lVar14,lVar5);
  (**(code **)(lVar11 + 8))(lVar7,lVar5);
  lVar7 = lVar14;
  (**(code **)(lVar8 + 0x30))(lVar14,1,lVar4);
  if ((int)lVar7 == 1) {
    (**(code **)(lStack_b0 + 8))(lVar14,lStack_a8);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar13,lVar14,lVar4);
    iVar1 = *(int *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar4 + 0x40);
    iVar3 = *(int *)(lVar4 + 0x50);
    (**(code **)(*(long *)(lStack_a0 + -8) + 0x10))(lVar12,lVar13);
    (**(code **)(*(long *)(lStack_98 + -8) + 0x10))(lVar12 + iVar1,lVar13 + iVar1);
    (**(code **)(*(long *)(lStack_90 + -8) + 0x10))(lVar12 + iVar2,lVar13 + iVar2);
    (**(code **)(*(long *)(lStack_88 + -8) + 0x10))(lVar12 + iVar3,lVar13 + iVar3);
    FUN_000a08b0(lVar12);
    pcVar6 = *(code **)(lVar8 + 8);
    (*pcVar6)(lVar12,lVar4);
    (*pcVar6)(lVar13,lVar4);
  }
  return;
}


