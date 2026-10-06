/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001b2234; end: 001b229f;  */

void FUN_001b2234(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b22a0,uVar1,uVar2);
  return;
}



/* Entry: 001b22a0; end: 001b22db;  */

void FUN_001b22a0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  __s10AppIntents12IntentResultPAAE6resultAA0cD9ContainerVys5NeverOA3HGyAIRszrlFZ(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001b22d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b22dc; end: 001b22df;  */

void FUN_001b22dc(void)

{
  return;
}



/* Entry: 001b22e0; end: 001b230b;  */

void FUN_001b22e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b24bc();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b230c; end: 001b2317;  */

undefined1  [16] FUN_001b230c(void)

{
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 001b2318; end: 001b2343;  */

void FUN_001b2318(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_bridgeObjectRelease(param_3);
  *param_1 = 1;
  return;
}



/* Entry: 001b2344; end: 001b235b;  */

undefined1  [16] FUN_001b2344(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 001b235c; end: 001b23ab;  */

void FUN_001b235c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b23ac();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 001b23ac; end: 001b23eb;  */

void FUN_001b23ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e259c;
  _swift_getWitnessTable(&UNK_007e259c,&UNK_009b5b50);
  puRam0000000000af2e68 = puVar1;
  return;
}



/* Entry: 001b23ec; end: 001b23ef;  */

void FUN_001b23ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e23a0;
  _swift_getWitnessTable(&UNK_007e23a0,&__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e70 = puVar1;
  return;
}



/* Entry: 001b23f0; end: 001b242f;  */

void FUN_001b23f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e23a0;
  _swift_getWitnessTable(&UNK_007e23a0,&__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e70 = puVar1;
  return;
}



/* Entry: 001b2430; end: 001b2433;  */

void FUN_001b2430(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e24ac;
  _swift_getWitnessTable(&UNK_007e24ac,&UNK_009b5b30);
  puRam0000000000af2e78 = puVar1;
  return;
}



/* Entry: 001b2434; end: 001b2473;  */

void FUN_001b2434(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e24ac;
  _swift_getWitnessTable(&UNK_007e24ac,&UNK_009b5b30);
  puRam0000000000af2e78 = puVar1;
  return;
}



/* Entry: 001b2474; end: 001b2477;  */

void FUN_001b2474(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e24d4;
  _swift_getWitnessTable(&UNK_007e24d4,&UNK_009b5b30);
  puRam0000000000af2e80 = puVar1;
  return;
}



/* Entry: 001b2478; end: 001b24b7;  */

void FUN_001b2478(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e24d4;
  _swift_getWitnessTable(&UNK_007e24d4,&UNK_009b5b30);
  puRam0000000000af2e80 = puVar1;
  return;
}



/* Entry: 001b24b8; end: 001b24bb;  */

void FUN_001b24b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s18SnapchatAppIntents13CaptureIntentV0bC00bE0AAMc;
  _swift_getWitnessTable
            (&__s18SnapchatAppIntents13CaptureIntentV0bC00bE0AAMc,
             &__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e88 = puVar1;
  return;
}



/* Entry: 001b24bc; end: 001b24fb;  */

void FUN_001b24bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s18SnapchatAppIntents13CaptureIntentV0bC00bE0AAMc;
  _swift_getWitnessTable
            (&__s18SnapchatAppIntents13CaptureIntentV0bC00bE0AAMc,
             &__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e88 = puVar1;
  return;
}



/* Entry: 001b24fc; end: 001b24ff;  */

void FUN_001b24fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2468;
  _swift_getWitnessTable(&UNK_007e2468,&__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e90 = puVar1;
  return;
}



/* Entry: 001b2500; end: 001b253f;  */

void FUN_001b2500(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2468;
  _swift_getWitnessTable(&UNK_007e2468,&__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e90 = puVar1;
  return;
}



/* Entry: 001b2540; end: 001b2543;  */

void FUN_001b2540(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2490;
  _swift_getWitnessTable(&UNK_007e2490,&__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e98 = puVar1;
  return;
}



/* Entry: 001b2544; end: 001b2583;  */

void FUN_001b2544(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2490;
  _swift_getWitnessTable(&UNK_007e2490,&__s18SnapchatAppIntents13CaptureIntentVN);
  puRam0000000000af2e98 = puVar1;
  return;
}



/* Entry: 001b2584; end: 001b2593;  */

void FUN_001b2584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_008460b8,1);
  return;
}



/* Entry: 001b2594; end: 001b25d3;  */

void FUN_001b2594(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b24bc();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b25d4; end: 001b25f7;  */

void FUN_001b25d4(void)

{
  FUN_00011670();
  return;
}



/* Entry: 001b25f8; end: 001b26bf;  */

void FUN_001b25f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar3 = 0xaf2e60;
  func_0x000115a8(0xaf2e60,&UNK_007e2358);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_0001393c(param_1,uVar1);
  FUN_001b23ac();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffb0 + -extraout_x8,&UNK_009b5b50,&UNK_009b5b50,param_1,uVar1,uVar2
            );
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 001b26c0; end: 001b26f7;  */

undefined1  [16] FUN_001b26c0(void)

{
  return ZEXT816(0x9b5b10);
}



/* Entry: 001b26f8; end: 001b2737;  */

void FUN_001b26f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2574;
  _swift_getWitnessTable(&UNK_007e2574,&UNK_009b5b50);
  puRam0000000000af2ea0 = puVar1;
  return;
}



/* Entry: 001b2738; end: 001b273b;  */

void FUN_001b2738(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e254c;
  _swift_getWitnessTable(&UNK_007e254c,&UNK_009b5b50);
  puRam0000000000af2ea8 = puVar1;
  return;
}



/* Entry: 001b273c; end: 001b277b;  */

void FUN_001b273c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e254c;
  _swift_getWitnessTable(&UNK_007e254c,&UNK_009b5b50);
  puRam0000000000af2ea8 = puVar1;
  return;
}



/* Entry: 001b277c; end: 001b27d3;  */

void FUN_001b277c(undefined8 param_1,undefined8 param_2)

{
  segment_command *psVar1;
  qword *pqVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  psVar1 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar1;
  psVar1->cmd = (int)unaff_x22;
  psVar1->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar1->segname = FUN_001b27d4;
  pqVar2 = &section_000002e8.size;
  _swift_task_alloc();
  *(qword **)(psVar1->segname + 8) = pqVar2;
  *pqVar2 = (qword)psVar1;
  pqVar2[1] = (qword)FUN_001c2e24;
  *(undefined1 *)((long)pqVar2 + 0x62) = 1;
  pqVar2[0x52] = param_2;
  pqVar2[0x51] = param_1;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  pqVar2[0x53] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  pqVar2[0x54] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[0x55] = uVar4;
  lVar3 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[0x56] = uVar4;
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  pqVar2[0x57] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  pqVar2[0x58] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[0x59] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001c4c44,0,0);
  return;
}



/* Entry: 001b27d4; end: 001b2817;  */

void FUN_001b27d4(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b2814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 001b2818; end: 001b286f;  */

void FUN_001b2818(undefined8 param_1,undefined8 param_2)

{
  segment_command *psVar1;
  qword *pqVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  psVar1 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar1;
  psVar1->cmd = (int)unaff_x22;
  psVar1->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar1->segname = FUN_001b2870;
  pqVar2 = &section_000002e8.size;
  _swift_task_alloc();
  *(qword **)(psVar1->segname + 8) = pqVar2;
  *pqVar2 = (qword)psVar1;
  pqVar2[1] = 0x1c7888;
  *(undefined1 *)((long)pqVar2 + 0x62) = 0;
  pqVar2[0x52] = param_2;
  pqVar2[0x51] = param_1;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  pqVar2[0x53] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  pqVar2[0x54] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[0x55] = uVar4;
  lVar3 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[0x56] = uVar4;
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  pqVar2[0x57] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  pqVar2[0x58] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[0x59] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001c4c44,0,0);
  return;
}



/* Entry: 001b2870; end: 001b29b3;  */

void FUN_001b2870(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b28a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b29b4; end: 001b2a5b;  */

void FUN_001b29b4(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x48);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  if (lVar4 != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x001b2a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_001b2a5c;
                    /* WARNING: Could not recover jumptable at 0x001b2a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined1 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 001b2a5c; end: 001b2bc7;  */

void FUN_001b2a5c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x1b2ab8;
  }
  else {
    uVar1 = 0x1b2afc;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(uVar1,0,0);
  return;
}



/* Entry: 001b2bc8; end: 001b2d7f;  */

void FUN_001b2bc8(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
  _swift_retain(uVar10);
  uVar7 = 0xaf2eb0;
  func_0x000115a8(0xaf2eb0,&UNK_007e2670);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar7;
  FUN_001d496c(unaff_x22 + 0x10,FUN_001b96a0,0,uVar7);
  *(undefined8 *)(unaff_x22 + 0xf8) = 0;
  _swift_release(uVar10);
  bVar1 = *(long *)(unaff_x22 + 0x10) == 0;
  if (!bVar1) {
    FUN_001b4e74(*(long *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                 *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                 *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  }
  *(bool *)(unaff_x22 + 0x1a1) = bVar1;
  puVar5 = *(undefined8 **)(unaff_x22 + 0xb8);
  (**(code **)(unaff_x22 + 0xa8))(0,0,bVar1);
  piVar8 = (int *)*puVar5;
  *(undefined8 *)(unaff_x22 + 0x100) = puVar5[2];
  *(undefined8 *)(unaff_x22 + 0x108) = puVar5[4];
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    plVar6 = (long *)(ulong)(uint)piVar8[1];
    _swift_retain(uVar9);
    _swift_retain(uVar3);
    _swift_retain(uVar4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_001b2d80;
                    /* WARNING: Could not recover jumptable at 0x001b2d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar8 + (long)iVar2))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
  uVar7 = 0;
  (**(code **)(unaff_x22 + 0xa8))(0,2,bVar1);
  func_0x001b5014();
  _swift_allocError(&UNK_009b6820,uVar7,0,0);
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x001b2c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b2d80; end: 001b2dcf;  */

void FUN_001b2d80(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x1a2) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b2dd0,0,0);
  return;
}



/* Entry: 001b2dd0; end: 001b3107;  */

void FUN_001b2dd0(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)(unaff_x22 + 0x1a2) & 1) != 0) {
    piVar9 = *(int **)(unaff_x22 + 0x108);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar9 + (long)piVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_001b3108;
LAB_001b3018:
                    /* WARNING: Could not recover jumptable at 0x001b3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar3 = &UNK_009b5d10;
  _swift_allocObject(&UNK_009b5d10,0x21,7);
  *(undefined **)(unaff_x22 + 0x128) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  puVar3[0x20] = uVar2;
  _swift_bridgeObjectRetain(uVar10);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  if (lVar12 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
    _swift_retain(uVar13);
    uVar7 = 0;
    FUN_001d496c(unaff_x22 + 0x40,FUN_001b96a0,0,uVar10);
    _swift_release(uVar13);
    piVar9 = *(int **)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x68);
    if (*(long *)(unaff_x22 + 0x40) != 0) {
      iVar1 = *piVar9;
      plVar6 = (long *)(ulong)(uint)piVar9[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x148) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_001b34a8;
                    /* WARNING: Could not recover jumptable at 0x001b2f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)piVar9 + (long)iVar1))
                (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                 *(undefined1 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x90),
                 *(undefined8 *)(unaff_x22 + 0x98));
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    piVar9 = *(int **)(unaff_x22 + 0x90);
    puVar4 = PTR___sytN_0099b8e0 + 8;
    FUN_001c7e10();
    *(undefined **)(unaff_x22 + 0x158) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
    puVar5 = &UNK_009b5d38;
    _swift_allocObject(&UNK_009b5d38,0x38,7);
    *(undefined **)(unaff_x22 + 0x168) = puVar5;
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(undefined **)(puVar5 + 0x18) = &UNK_007e26c0;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    *(undefined **)(puVar5 + 0x28) = puVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar7;
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    _swift_retain(uVar10);
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    _swift_retain(uVar7);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_001b3738;
    puVar3 = &UNK_007e26c8;
  }
  else {
    _swift_release(puVar3);
    if ((*(byte *)(unaff_x22 + 0x1a2) & 1) == 0) {
      uVar11 = *(ulong *)(unaff_x22 + 0xe8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      *(long *)(unaff_x22 + 0x70) = lVar12;
      _swift_errorRetain(lVar12);
      uVar7 = 0xae60d0;
      func_0x000115a8(0xae60d0,&UNK_007ccdd0);
      _swift_dynamicCast(uVar11,unaff_x22 + 0x70,uVar7,uVar10,6);
      if ((int)uVar11 == 0) {
        __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
        uVar8 = 2;
        if ((uVar11 & 1) != 0) {
          uVar8 = 3;
        }
      }
      else {
        (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                  (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
        uVar8 = 3;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 200);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(unaff_x22 + 0xa8))(0,uVar8,*(undefined1 *)(unaff_x22 + 0x1a1));
      _swift_willThrow();
      _swift_release(uVar13);
      _swift_release(uVar7);
      _swift_release(uVar10);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
      UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
      goto LAB_001b3018;
    }
    *(long *)(unaff_x22 + 400) = lVar12;
    piVar9 = *(int **)(unaff_x22 + 0x100);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x198) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_001b3c04;
    puVar3 = *(undefined **)(unaff_x22 + 0x80);
    puVar5 = *(undefined **)(unaff_x22 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x001b3104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3,puVar5);
  return;
}



/* Entry: 001b3108; end: 001b31af;  */

void FUN_001b3108(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x118));
  if (unaff_x20 != 0) {
    *(long *)(lVar4 + 400) = unaff_x20;
    piVar3 = *(int **)(lVar4 + 0x100);
    iVar1 = *piVar3;
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    _swift_task_alloc();
    *(long **)(lVar4 + 0x198) = plVar2;
    *plVar2 = lVar5;
    plVar2[1] = (long)FUN_001b3c04;
                    /* WARNING: Could not recover jumptable at 0x001b3188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar3))
              (*(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(lVar4 + 0x88));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b31b0,0,0);
  return;
}



/* Entry: 001b31b0; end: 001b34a7;  */

void FUN_001b31b0(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar12 = *(long *)(unaff_x22 + 0x120);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar3 = &UNK_009b5d10;
  _swift_allocObject(&UNK_009b5d10,0x21,7);
  *(undefined **)(unaff_x22 + 0x128) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  puVar3[0x20] = uVar2;
  _swift_bridgeObjectRetain(uVar10);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  if (lVar12 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
    _swift_retain(uVar13);
    uVar7 = 0;
    FUN_001d496c(unaff_x22 + 0x40,FUN_001b96a0,0,uVar10);
    _swift_release(uVar13);
    piVar9 = *(int **)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x68);
    if (*(long *)(unaff_x22 + 0x40) != 0) {
      iVar1 = *piVar9;
      plVar6 = (long *)(ulong)(uint)piVar9[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x148) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_001b34a8;
                    /* WARNING: Could not recover jumptable at 0x001b3304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)piVar9 + (long)iVar1))
                (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                 *(undefined1 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x90),
                 *(undefined8 *)(unaff_x22 + 0x98));
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    piVar9 = *(int **)(unaff_x22 + 0x90);
    puVar4 = PTR___sytN_0099b8e0 + 8;
    FUN_001c7e10();
    *(undefined **)(unaff_x22 + 0x158) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
    puVar5 = &UNK_009b5d38;
    _swift_allocObject(&UNK_009b5d38,0x38,7);
    *(undefined **)(unaff_x22 + 0x168) = puVar5;
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(undefined **)(puVar5 + 0x18) = &UNK_007e26c0;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    *(undefined **)(puVar5 + 0x28) = puVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar7;
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    _swift_retain(uVar10);
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    _swift_retain(uVar7);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_001b3738;
    puVar3 = &UNK_007e26c8;
  }
  else {
    _swift_release(puVar3);
    if ((*(byte *)(unaff_x22 + 0x1a2) & 1) == 0) {
      uVar11 = *(ulong *)(unaff_x22 + 0xe8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      *(long *)(unaff_x22 + 0x70) = lVar12;
      _swift_errorRetain(lVar12);
      uVar7 = 0xae60d0;
      func_0x000115a8(0xae60d0,&UNK_007ccdd0);
      _swift_dynamicCast(uVar11,unaff_x22 + 0x70,uVar7,uVar10,6);
      if ((int)uVar11 == 0) {
        __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
        uVar8 = 2;
        if ((uVar11 & 1) != 0) {
          uVar8 = 3;
        }
      }
      else {
        (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                  (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
        uVar8 = 3;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 200);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(unaff_x22 + 0xa8))(0,uVar8,*(undefined1 *)(unaff_x22 + 0x1a1));
      _swift_willThrow();
      _swift_release(uVar13);
      _swift_release(uVar7);
      _swift_release(uVar10);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x001b33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 400) = lVar12;
    piVar9 = *(int **)(unaff_x22 + 0x100);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x198) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_001b3c04;
    puVar3 = *(undefined **)(unaff_x22 + 0x80);
    puVar5 = *(undefined **)(unaff_x22 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x001b34a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3,puVar5);
  return;
}



/* Entry: 001b34a8; end: 001b3503;  */

void FUN_001b34a8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001b3504;
  }
  else {
    pcVar1 = FUN_001b35b8;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001b3504; end: 001b35b7;  */

void FUN_001b3504(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x140));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  pcVar3 = *(code **)(unaff_x22 + 0xa8);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x1a1);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_release(uVar1);
  _swift_release(uVar4);
  (*pcVar3)(0,1,uVar6);
  _swift_release(uVar8);
  _swift_release(uVar2);
  _swift_release(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x001b35b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b35b8; end: 001b3737;  */

void FUN_001b35b8(void)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_release(uVar7);
  _swift_release(uVar5);
  _swift_release(uVar8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  if (*(char *)(unaff_x22 + 0x1a2) != '\x01') {
    uVar6 = *(ulong *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
    _swift_errorRetain(uVar5);
    uVar5 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    _swift_dynamicCast(uVar6,unaff_x22 + 0x70,uVar5,uVar7,6);
    if ((int)uVar6 == 0) {
      __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
      uVar3 = 2;
      if ((uVar6 & 1) != 0) {
        uVar3 = 3;
      }
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
      uVar3 = 3;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    (**(code **)(unaff_x22 + 0xa8))(0,uVar3,*(undefined1 *)(unaff_x22 + 0x1a1));
    _swift_willThrow();
    _swift_release(uVar8);
    _swift_release(uVar5);
    _swift_release(uVar7);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x001b3734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  piVar4 = *(int **)(unaff_x22 + 0x100);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001b3c04;
                    /* WARNING: Could not recover jumptable at 0x001b3664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 001b3738; end: 001b380b;  */

void FUN_001b3738(void)

{
  qword *pqVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  qword qVar5;
  qword *unaff_x22;
  qword qVar6;
  
  qVar5 = *unaff_x22;
  qVar6 = *unaff_x22;
  *(long *)(qVar5 + 0x178) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(qVar5 + 0x170));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(qVar5 + 0x158);
    _swift_release(*(undefined8 *)(qVar5 + 0x168));
    *(undefined8 *)(qVar5 + 0x78) = uVar4;
    pqVar1 = &section_00000068.size;
    _swift_task_alloc();
    *(qword **)(qVar5 + 0x180) = pqVar1;
    uVar4 = 0xaf2eb8;
    func_0x000115a8(0xaf2eb8,&UNK_007e26a0);
    uVar2 = uVar4;
    FUN_001b4fc4();
    *pqVar1 = qVar6;
    pqVar1[1] = (qword)FUN_001b380c;
    pqVar1[0xe] = uVar2;
    pqVar1[0xf] = qVar5 + 0x78;
    pqVar1[0xd] = uVar4;
    pqVar1[7] = uVar2;
    pcVar3 = FUN_001ca160;
  }
  else {
    _swift_release(*(undefined8 *)(qVar5 + 0x168));
    pcVar3 = FUN_001b3868;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar3,0,0);
  return;
}



/* Entry: 001b380c; end: 001b3867;  */

void FUN_001b380c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001b39e0;
  }
  else {
    pcVar1 = FUN_001b3a8c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001b3868; end: 001b39df;  */

void FUN_001b3868(void)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_release(uVar5);
  _swift_release(uVar7);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x178);
  if (*(char *)(unaff_x22 + 0x1a2) != '\x01') {
    uVar6 = *(ulong *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
    _swift_errorRetain(uVar5);
    uVar5 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    _swift_dynamicCast(uVar6,unaff_x22 + 0x70,uVar5,uVar7,6);
    if ((int)uVar6 == 0) {
      __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
      uVar3 = 2;
      if ((uVar6 & 1) != 0) {
        uVar3 = 3;
      }
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
      uVar3 = 3;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    (**(code **)(unaff_x22 + 0xa8))(0,uVar3,*(undefined1 *)(unaff_x22 + 0x1a1));
    _swift_willThrow();
    _swift_release(uVar8);
    _swift_release(uVar5);
    _swift_release(uVar7);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x001b39dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  piVar4 = *(int **)(unaff_x22 + 0x100);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001b3c04;
                    /* WARNING: Could not recover jumptable at 0x001b390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 001b39e0; end: 001b3a8b;  */

void FUN_001b39e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  pcVar3 = *(code **)(unaff_x22 + 0xa8);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x1a1);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_release(uVar1);
  _swift_release(uVar4);
  (*pcVar3)(0,1,uVar6);
  _swift_release(uVar8);
  _swift_release(uVar2);
  _swift_release(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x001b3a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b3a8c; end: 001b3c03;  */

void FUN_001b3a8c(void)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_release(uVar5);
  _swift_release(uVar7);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  if (*(char *)(unaff_x22 + 0x1a2) != '\x01') {
    uVar6 = *(ulong *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
    _swift_errorRetain(uVar5);
    uVar5 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    _swift_dynamicCast(uVar6,unaff_x22 + 0x70,uVar5,uVar7,6);
    if ((int)uVar6 == 0) {
      __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
      uVar3 = 2;
      if ((uVar6 & 1) != 0) {
        uVar3 = 3;
      }
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
      uVar3 = 3;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    (**(code **)(unaff_x22 + 0xa8))(0,uVar3,*(undefined1 *)(unaff_x22 + 0x1a1));
    _swift_willThrow();
    _swift_release(uVar8);
    _swift_release(uVar5);
    _swift_release(uVar7);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x001b3c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  piVar4 = *(int **)(unaff_x22 + 0x100);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001b3c04;
                    /* WARNING: Could not recover jumptable at 0x001b3b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 001b3c04; end: 001b3c4b;  */

void FUN_001b3c04(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b3c4c,0,0);
  return;
}



/* Entry: 001b3c4c; end: 001b3d43;  */

void FUN_001b3c4c(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(ulong *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_errorRetain(*(undefined8 *)(unaff_x22 + 400));
  uVar1 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  _swift_dynamicCast(uVar3,(undefined8 *)(unaff_x22 + 0x70),uVar1,uVar4,6);
  if ((int)uVar3 == 0) {
    __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
    uVar2 = 2;
    if ((uVar3 & 1) != 0) {
      uVar2 = 3;
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
    uVar2 = 3;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(unaff_x22 + 0xa8))(0,uVar2,*(undefined1 *)(unaff_x22 + 0x1a1));
  _swift_willThrow();
  _swift_release(uVar5);
  _swift_release(uVar1);
  _swift_release(uVar4);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x001b3d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b3d44; end: 001b3dd3;  */

void FUN_001b3d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(param_1 + 0x10);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_001b3dd4;
                    /* WARNING: Could not recover jumptable at 0x001b3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_4,param_5,param_6,param_2,param_3);
  return;
}



/* Entry: 001b3dd4; end: 001b3e7b;  */

void FUN_001b3dd4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b3e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b3e7c; end: 001b3f8f;  */

void FUN_001b3e7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  qword *pqVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_001b4664(uVar1,*(undefined8 *)(unaff_x22 + 0x50));
  *(char *)(unaff_x22 + 0xb0) = (char)uVar1;
  if (((uint)uVar1 & 0xff) == 3) {
    pqVar4 = &section_000000b8.size;
    _swift_task_alloc();
    *(qword **)(unaff_x22 + 0x98) = pqVar4;
    pcVar5 = FUN_001b3f90;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x10);
    _swift_retain(uVar7);
    uVar2 = 0xaf2eb0;
    func_0x000115a8(0xaf2eb0,&UNK_007e2670);
    FUN_001d496c(unaff_x22 + 0x10,FUN_001b96a0,0,uVar2);
    _swift_release(uVar7);
    lVar3 = *(long *)(unaff_x22 + 0x10);
    if (lVar3 != 0) {
      FUN_001b4e74(lVar3,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                   *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                   *(undefined8 *)(unaff_x22 + 0x38));
    }
    *(bool *)(unaff_x22 + 0xb1) = lVar3 == 0;
    (**(code **)(unaff_x22 + 0x70))(uVar1,0);
    pqVar4 = &section_000000b8.size;
    _swift_task_alloc();
    *(qword **)(unaff_x22 + 0xa0) = pqVar4;
    pcVar5 = FUN_001b3fd4;
  }
  *pqVar4 = unaff_x22;
  pqVar4[1] = (qword)pcVar5;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  pqVar4[0xc] = *(undefined8 *)(unaff_x22 + 0x58);
  pqVar4[0xd] = uVar1;
  pqVar4[10] = uVar2;
  pqVar4[0xb] = uVar7;
  pqVar4[9] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b415c,0,0);
  return;
}



/* Entry: 001b3f90; end: 001b3fd3;  */

void FUN_001b3f90(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x98));
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x001b3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 001b3fd4; end: 001b4077;  */

void FUN_001b3fd4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x1b4030;
  }
  else {
    pcVar1 = FUN_001b4078;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001b4078; end: 001b413b;  */

void FUN_001b4078(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(ulong *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_errorRetain();
  uVar1 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  _swift_dynamicCast(uVar3,(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar4,6);
  if ((int)uVar3 == 0) {
    __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
    uVar2 = 2;
    if ((uVar3 & 1) != 0) {
      uVar2 = 3;
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
              (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80));
    uVar2 = 3;
  }
  (**(code **)(unaff_x22 + 0x70))
            (*(undefined1 *)(unaff_x22 + 0xb0),uVar2,*(undefined1 *)(unaff_x22 + 0xb1));
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x001b4138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b413c; end: 001b415b;  */

void FUN_001b413c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b415c,0,0);
  return;
}



/* Entry: 001b415c; end: 001b435f;  */

/* WARNING: Removing unreachable block (ram,0x001b41b4) */

void FUN_001b415c(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar3 = &UNK_009b5cc0;
  _swift_allocObject(&UNK_009b5cc0,0x20,7);
  *(undefined **)(unaff_x22 + 0x70) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  _swift_bridgeObjectRetain(uVar8);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x10);
  _swift_retain(uVar9);
  uVar4 = 0xaf2eb0;
  func_0x000115a8(0xaf2eb0,&UNK_007e2670);
  uVar8 = 0;
  FUN_001d496c(unaff_x22 + 0x10,FUN_001b96a0,0,uVar4);
  _swift_release(uVar9);
  piVar2 = *(int **)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(long *)(unaff_x22 + 0x10) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    piVar2 = *(int **)(unaff_x22 + 0x60);
    puVar5 = PTR___sytN_0099b8e0 + 8;
    FUN_001c7e10();
    *(undefined **)(unaff_x22 + 0xa0) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
    puVar6 = &UNK_009b5ce8;
    _swift_allocObject(&UNK_009b5ce8,0x38,7);
    *(undefined **)(unaff_x22 + 0xb0) = puVar6;
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = &UNK_007e2688;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    *(undefined **)(puVar6 + 0x28) = puVar5;
    *(undefined8 *)(puVar6 + 0x30) = uVar8;
    iVar1 = *piVar2;
    plVar7 = (long *)(ulong)(uint)piVar2[1];
    _swift_retain(uVar4);
    _swift_retain(puVar3);
    _swift_retain(puVar5);
    _swift_retain(uVar8);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_001b4464;
                    /* WARNING: Could not recover jumptable at 0x001b435c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(&UNK_007e2698,puVar6);
    return;
  }
  iVar1 = *piVar2;
  plVar7 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_001b4360;
                    /* WARNING: Could not recover jumptable at 0x001b428c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)piVar2 + (long)iVar1))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 001b4360; end: 001b43bb;  */

void FUN_001b4360(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001b43bc;
  }
  else {
    pcVar1 = FUN_001b440c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001b43bc; end: 001b440b;  */

void FUN_001b43bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b4408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b440c; end: 001b4463;  */

void FUN_001b440c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001b4460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b4464; end: 001b452f;  */

void FUN_001b4464(void)

{
  qword *pqVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  qword qVar5;
  qword *unaff_x22;
  qword qVar6;
  
  qVar5 = *unaff_x22;
  uVar2 = *(undefined8 *)(qVar5 + 0xb0);
  qVar6 = *unaff_x22;
  *(long *)(qVar5 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(qVar5 + 0xb8));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    *(undefined8 *)(qVar5 + 0x40) = *(undefined8 *)(qVar5 + 0xa0);
    pqVar1 = &section_00000068.size;
    _swift_task_alloc();
    *(qword **)(qVar5 + 200) = pqVar1;
    uVar2 = 0xaf2eb8;
    func_0x000115a8(0xaf2eb8,&UNK_007e26a0);
    uVar3 = uVar2;
    FUN_001b4fc4();
    *pqVar1 = qVar6;
    pqVar1[1] = (qword)FUN_001b4530;
    pqVar1[0xe] = uVar3;
    pqVar1[0xf] = qVar5 + 0x40;
    pqVar1[0xd] = uVar2;
    pqVar1[7] = uVar3;
    pcVar4 = FUN_001ca160;
  }
  else {
    pcVar4 = FUN_001b458c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar4,0,0);
  return;
}



/* Entry: 001b4530; end: 001b458b;  */

void FUN_001b4530(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001b45d4;
  }
  else {
    pcVar1 = FUN_001b461c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001b458c; end: 001b45d3;  */

void FUN_001b458c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b45d4; end: 001b461b;  */

void FUN_001b45d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b4618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b461c; end: 001b4663;  */

void FUN_001b461c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b4660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b4664; end: 001b489f;  */

undefined4 FUN_001b4664(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  uVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar3,param_1,param_2);
  puVar2 = puVar3;
  (**(code **)(lVar6 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0002f32c(puVar3);
  }
  else {
    uVar5 = uVar4;
    (**(code **)(lVar6 + 0x20))(uVar4,puVar3,lVar1);
    __s10Foundation3URLV4hostSSSgvg();
    if (puVar3 != (undefined1 *)0x0) {
      puVar2 = puVar3;
      if (uVar5 == 0x74616863 && puVar3 == (undefined1 *)0xe400000000000000) {
        _swift_bridgeObjectRelease();
LAB_001b47bc:
        uVar5 = 0x747865742f;
        __s10Foundation3URLV4pathSSvg();
        if ((puVar3 == (undefined1 *)0x747865742f && puVar2 == (undefined1 *)0xe500000000000000) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x747865742f,0xe500000000000000,puVar3,puVar2,0), (uVar5 & 1) != 0)) {
          (**(code **)(lVar6 + 8))(uVar4,lVar1);
          _swift_bridgeObjectRelease(puVar2);
          return 1;
        }
        uVar5 = 0x6172656d61632f;
        if (puVar3 == (undefined1 *)0x6172656d61632f && puVar2 == (undefined1 *)0xe700000000000000)
        {
          _swift_bridgeObjectRelease(puVar2);
          (**(code **)(lVar6 + 8))(uVar4,lVar1);
          return 2;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6172656d61632f,0xe700000000000000,puVar3,puVar2,0);
        _swift_bridgeObjectRelease(puVar2);
        (**(code **)(lVar6 + 8))(uVar4,lVar1);
        if ((uVar5 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease();
      if ((uVar5 & 1) != 0) goto LAB_001b47bc;
    }
    (**(code **)(lVar6 + 8))(uVar4,lVar1);
  }
  return 3;
}



/* Entry: 001b48a0; end: 001b4923;  */

void FUN_001b48a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(param_1 + 0x20);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1b51e8;
                    /* WARNING: Could not recover jumptable at 0x001b4920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_4,param_5,param_2,param_3);
  return;
}



/* Entry: 001b4924; end: 001b498f;  */

void FUN_001b4924(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b4990,uVar1,uVar2);
  return;
}



/* Entry: 001b4990; end: 001b4a13;  */

/* WARNING: Removing unreachable block (ram,0x001b49b8) */

void FUN_001b4990(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  piVar3 = *(int **)(unaff_x22 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001b4a14;
                    /* WARNING: Could not recover jumptable at 0x001b4a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 001b4a14; end: 001b4a57;  */

void FUN_001b4a14(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)
            (FUN_001b4a58,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 001b4a58; end: 001b4aa7;  */

void FUN_001b4a58(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
                    /* WARNING: Could not recover jumptable at 0x001b4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b4aa8; end: 001b4b1b;  */

void FUN_001b4aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar1 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  pdVar2 = &section_00000108.reserved2;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x88) = pdVar2;
  *(long *)pdVar2 = unaff_x22;
  *(code **)(pdVar2 + 2) = FUN_001b4b1c;
  *(long *)(pdVar2 + 0x40) = unaff_x22 + 0x10;
  *(undefined8 *)(pdVar2 + 0x42) = param_1;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(pdVar2 + 0x44) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pdVar2 + 0x46) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar2 + 0x48) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b4b1c; end: 001b4b9f;  */

void FUN_001b4b1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x88);
  *(long *)(lVar4 + 0x90) = unaff_x20;
  _swift_task_dealloc();
  uVar2 = *(undefined8 *)(lVar4 + 0x78);
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x98) = uVar2;
    *(undefined8 *)(lVar4 + 0xa0) = uVar1;
    pcVar3 = FUN_001b4ba0;
  }
  else {
    pcVar3 = FUN_001b4d40;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar3,uVar2);
  return;
}



/* Entry: 001b4ba0; end: 001b4c8b;  */

void FUN_001b4ba0(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x90);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  if (lVar4 != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    *(long *)(unaff_x22 + 0x40) = lVar4;
    *(undefined1 *)(unaff_x22 + 0x48) = 1;
    _swift_errorRetain(lVar4);
    FUN_001ca8e8((long *)(unaff_x22 + 0x40));
    _swift_errorRelease(lVar4);
    _swift_errorRelease(lVar4);
                    /* WARNING: Could not recover jumptable at 0x001b4c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar3 = *(int **)(unaff_x22 + 0x60);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001b4c8c;
                    /* WARNING: Could not recover jumptable at 0x001b4c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,&UNK_007e26a8,0);
  return;
}



/* Entry: 001b4c8c; end: 001b4ce3;  */

void FUN_001b4c8c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001b4ce4;
  }
  else {
    pcVar1 = FUN_001b4db0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)
            (pcVar1,*(undefined8 *)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa0));
  return;
}



/* Entry: 001b4ce4; end: 001b4d3f;  */

void FUN_001b4ce4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined1 *)(unaff_x22 + 0x58) = 0;
  FUN_001ca8e8();
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x001b4d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b4d40; end: 001b4daf;  */

void FUN_001b4d40(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x48) = 1;
  _swift_errorRetain(uVar1);
  FUN_001ca8e8((undefined8 *)(unaff_x22 + 0x40));
  _swift_errorRelease(uVar1);
  _swift_errorRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001b4dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b4db0; end: 001b4e37;  */

void FUN_001b4db0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x48) = 1;
  _swift_errorRetain(uVar1);
  FUN_001ca8e8((undefined8 *)(unaff_x22 + 0x40));
  _swift_errorRelease(uVar1);
  _swift_errorRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001b4e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b4e38; end: 001b4e73;  */

void FUN_001b4e38(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b4e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b4e74; end: 001b4eaf;  */

void FUN_001b4e74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_release(param_2);
    _swift_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_6);
    return;
  }
  return;
}



/* Entry: 001b4eb0; end: 001b4ed3;  */

void FUN_001b4eb0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b4ed4; end: 001b4f4b;  */

void FUN_001b4ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  segment_command *psVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar6 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar6;
  psVar6->cmd = (int)unaff_x22;
  psVar6->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar6->segname[0] = -0x14;
  psVar6->segname[1] = 'Q';
  psVar6->segname[2] = '\x1b';
  psVar6->segname[3] = '\0';
  psVar6->segname[4] = '\0';
  psVar6->segname[5] = '\0';
  psVar6->segname[6] = '\0';
  psVar6->segname[7] = '\0';
  piVar2 = *(int **)(param_1 + 0x20);
  iVar1 = *piVar2;
  puVar5 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(undefined8 **)(psVar6->segname + 8) = puVar5;
  *puVar5 = psVar6;
  puVar5[1] = 0x1b51e8;
                    /* WARNING: Could not recover jumptable at 0x001b4920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4,param_2,param_3);
  return;
}



/* Entry: 001b4f4c; end: 001b4f4f;  */

void FUN_001b4f4c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b4f50; end: 001b4fc3;  */

void FUN_001b4f50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  dword *pdVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar5 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar5;
  *(long *)pcVar5 = unaff_x22;
  pcVar5[8] = -0xc;
  pcVar5[9] = 'Q';
  pcVar5[10] = '\x1b';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  *(undefined8 *)(pcVar5 + 0x68) = uVar3;
  *(undefined8 *)(pcVar5 + 0x70) = uVar8;
  *(undefined8 *)(pcVar5 + 0x60) = uVar2;
  uVar3 = 0;
  __sScMMa();
  *(undefined8 *)(pcVar5 + 0x78) = uVar3;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar5 + 0x80) = uVar3;
  pdVar4 = &section_00000108.reserved2;
  _swift_task_alloc();
  *(dword **)(pcVar5 + 0x88) = pdVar4;
  *(char **)pdVar4 = pcVar5;
  *(code **)(pdVar4 + 2) = FUN_001b4b1c;
  *(char **)(pdVar4 + 0x40) = pcVar5 + 0x10;
  *(undefined8 *)(pdVar4 + 0x42) = uVar1;
  lVar6 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(pdVar4 + 0x44) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(pdVar4 + 0x46) = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar4 + 0x48) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b4fc4; end: 001b5077;  */

void FUN_001b4fc4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af2ec0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaf2eb8;
  FUN_00016c74(0xaf2eb8,&UNK_007e26a0);
  puVar2 = &DAT_007e4308;
  _swift_getWitnessTable(&DAT_007e4308,uVar1);
  puRam0000000000af2ec0 = puVar2;
  return;
}



/* Entry: 001b5078; end: 001b50f7;  */

void FUN_001b5078(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  segment_command *psVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  psVar7 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar7;
  psVar7->cmd = (int)unaff_x22;
  psVar7->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar7->segname[0] = -0x10;
  psVar7->segname[1] = 'Q';
  psVar7->segname[2] = '\x1b';
  psVar7->segname[3] = '\0';
  psVar7->segname[4] = '\0';
  psVar7->segname[5] = '\0';
  psVar7->segname[6] = '\0';
  psVar7->segname[7] = '\0';
  piVar2 = *(int **)(param_1 + 0x10);
  iVar1 = *piVar2;
  puVar6 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(undefined8 **)(psVar7->segname + 8) = puVar6;
  *puVar6 = psVar7;
  puVar6[1] = FUN_001b3dd4;
                    /* WARNING: Could not recover jumptable at 0x001b3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4,uVar5,param_2,param_3);
  return;
}



/* Entry: 001b50f8; end: 001b5133;  */

void FUN_001b50f8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b5134; end: 001b51a7;  */

void FUN_001b5134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  dword *pdVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar5 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar5;
  *(long *)pcVar5 = unaff_x22;
  *(code **)(pcVar5 + 8) = FUN_001b51a8;
  *(undefined8 *)(pcVar5 + 0x68) = uVar3;
  *(undefined8 *)(pcVar5 + 0x70) = uVar8;
  *(undefined8 *)(pcVar5 + 0x60) = uVar2;
  uVar3 = 0;
  __sScMMa();
  *(undefined8 *)(pcVar5 + 0x78) = uVar3;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar5 + 0x80) = uVar3;
  pdVar4 = &section_00000108.reserved2;
  _swift_task_alloc();
  *(dword **)(pcVar5 + 0x88) = pdVar4;
  *(char **)pdVar4 = pcVar5;
  *(code **)(pdVar4 + 2) = FUN_001b4b1c;
  *(char **)(pdVar4 + 0x40) = pcVar5 + 0x10;
  *(undefined8 *)(pdVar4 + 0x42) = uVar1;
  lVar6 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(pdVar4 + 0x44) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(pdVar4 + 0x46) = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar4 + 0x48) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b51a8; end: 001b51e3;  */

void FUN_001b51a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b51e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b51e4; end: 001b51fb;  */

void FUN_001b51e4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b3e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b51fc; end: 001b53a3;  */

void FUN_001b51fc(void)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
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
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001b53a4; end: 001b5403;  */

void FUN_001b53a4(ulong *param_1)

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



/* Entry: 001b5404; end: 001b5647;  */

void FUN_001b5404(void)

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
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
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
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001b5648; end: 001b56c7;  */

void FUN_001b5648(undefined8 *param_1)

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



/* Entry: 001b56c8; end: 001b582b;  */

void FUN_001b56c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6465727265666564;
  if (cVar3 != '\x01') {
    uVar1 = 0x74616964656d6d69;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe900000000000065;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001b582c; end: 001b58a3;  */

void FUN_001b582c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
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



/* Entry: 001b58a4; end: 001b58eb;  */

void FUN_001b58a4(undefined8 *param_1)

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



/* Entry: 001b58ec; end: 001b59b3;  */

ulong FUN_001b58ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 001b59b4; end: 001b59b7;  */

void FUN_001b59b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2750;
  _swift_getWitnessTable(&UNK_007e2750,&UNK_009b5dd0);
  puRam0000000000af2f28 = puVar1;
  return;
}


