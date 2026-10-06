/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10412414c; end: 1041245d3;  */

void FUN_10412414c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *param_4;
  lVar12 = *(long *)(lVar13 + 0x60);
  lVar5 = 0;
  plStack_e8 = param_4;
  uStack_b0 = param_1;
  __sSqMa(0,lVar12);
  lStack_f8 = *(long *)(lVar5 + -8);
  lStack_f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = *(long *)(lVar13 + 0x58);
  lStack_108 = *(long *)(lVar11 + -8);
  lStack_100 = (long)&lStack_120 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar9 = ((long)&lStack_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(lVar13 + 0x50);
  lStack_e0 = *(long *)(lVar16 + -8);
  lStack_110 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(lVar13 + 0x68);
  uVar8 = *(undefined8 *)(lVar13 + 0x70);
  uVar15 = *(undefined8 *)(lVar13 + 0x78);
  lVar5 = 0;
  lStack_120 = lVar9;
  lStack_98 = lVar16;
  lStack_90 = lVar11;
  lStack_88 = lVar12;
  uStack_80 = uVar7;
  uStack_78 = uVar8;
  uStack_70 = uVar15;
  func_0x00010411d5c8(0,&lStack_98);
  lVar14 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar9 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar9 - extraout_x12;
  uVar6 = 0;
  lStack_118 = lVar12;
  lStack_d8 = lVar16;
  lStack_d0 = lVar11;
  lStack_98 = lVar16;
  lStack_90 = lVar11;
  lStack_88 = lVar12;
  uStack_80 = uVar7;
  uStack_78 = uVar8;
  uStack_70 = uVar15;
  FUN_104111460(0,&lStack_98);
  func_0x00010411c8f4(lVar5,param_3,uVar6);
  lVar13 = lStack_c8;
  lStack_c0 = lVar5;
  lStack_b8 = lVar14;
  (**(code **)(lVar14 + 0x10))(lVar9,lVar5,lStack_c8);
  lVar16 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar13);
  lVar14 = lStack_b8;
  lVar12 = lStack_d0;
  lVar11 = lStack_d8;
  lVar5 = lStack_f0;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  iVar4 = (int)lVar16;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      lVar16 = 0;
      _swift_getTupleTypeMetadata3(0,lStack_d8,lStack_d0,lStack_f0,0,0);
      lVar14 = lStack_120;
      iVar4 = *(int *)(lVar16 + 0x30);
      lStack_118 = (long)*(int *)(lVar16 + 0x40);
      (**(code **)(lStack_e0 + 0x20))(lStack_120,lVar9,lVar11);
      lVar16 = lStack_108;
      lVar11 = lStack_110;
      (**(code **)(lStack_108 + 0x20))(lStack_110,lVar9 + iVar4,lVar12);
      lVar3 = lStack_f8;
      lVar12 = lStack_100;
      (**(code **)(lStack_f8 + 0x20))(lStack_100,lVar9 + lStack_118,lVar5);
      FUN_1041245d4(param_2,lVar14,lVar11,lVar12,param_3);
      (**(code **)(lVar3 + 8))(lVar12,lVar5);
      (**(code **)(lVar16 + 8))(lVar11,lStack_d0);
      (**(code **)(lStack_e0 + 8))(lVar14,lStack_d8);
      lVar5 = lStack_b8;
      (**(code **)(lStack_b8 + 8))(lStack_c0,lVar13);
      pcVar10 = *(code **)(lVar5 + 0x38);
      uVar8 = 1;
      uVar7 = uStack_b0;
      goto LAB_1041245a4;
    }
    (**(code **)(lStack_b8 + 8))(lVar9,lVar13);
  }
  else if (iVar4 == 2) {
    uVar6 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar7,lStack_d8,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
    uVar7 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar8,lStack_d0,puVar2,puVar1);
    uVar8 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar15,lStack_118,puVar2,puVar1);
    uVar15 = 0xff;
    __sSqMa(0xff,uVar8);
    uVar8 = 0xff;
    _swift_getTupleTypeMetadata3(0xff,uVar6,uVar7,uVar15,0,0);
    uVar6 = 0xff;
    __sSqMa(0xff,uVar8);
    uVar7 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    lVar11 = 0xff;
    __ss6ResultOMa(0xff,uVar6,uVar7,PTR___ss5ErrorWS_11034ee10);
    uVar7 = 0xff;
    __sSccMa(0xff,lVar11,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar12 = 0;
    _swift_getTupleTypeMetadata2(0,uVar7,lVar11,"downstreamContinuation result ",0);
    uVar7 = uStack_b0;
    lVar5 = lStack_b8;
    iVar4 = *(int *)(lVar12 + 0x30);
    (**(code **)(lStack_b8 + 0x20))(uStack_b0,lStack_c0,lVar13);
    (**(code **)(lVar5 + 0x38))(uVar7,0,1,lVar13);
    (**(code **)(*(long *)(lVar11 + -8) + 8))(lVar9 + iVar4,lVar11);
    return;
  }
  uVar7 = uStack_b0;
  (**(code **)(lVar14 + 0x20))(uStack_b0,lStack_c0,lVar13);
  pcVar10 = *(code **)(lVar14 + 0x38);
  uVar8 = 0;
LAB_1041245a4:
  (*pcVar10)(uVar7,uVar8,1,lVar13);
  return;
}



/* Entry: 1041245d4; end: 104124c7b;  */

void FUN_1041245d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar22 = *unaff_x20;
  uVar9 = *(undefined8 *)(lVar22 + 0x60);
  lVar4 = 0;
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  uStack_e0 = param_4;
  __sSqMa();
  lVar10 = *(long *)(lVar4 + -8);
  lStack_d8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_d8 + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)&lStack_110 - extraout_x8;
  lVar21 = *(long *)(lVar22 + 0x58);
  lVar11 = *(long *)(lVar21 + -8);
  lVar16 = *(long *)(lVar11 + 0x40);
  lStack_100 = lVar26;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar26 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar22 + 0x50);
  lVar20 = *(long *)(lVar12 + -8);
  lVar17 = *(long *)(lVar20 + 0x40);
  lStack_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar14 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d453c8;
  lStack_110 = lVar24;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_e8 = lVar24 - extraout_x8_00;
  __sScPMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar24 - extraout_x8_00,1,1,lVar5);
  (**(code **)(lVar20 + 0x10))(lVar24,uStack_f8,lVar12);
  (**(code **)(lVar11 + 0x10))(lVar14,uStack_f0,lVar21);
  (**(code **)(lVar10 + 0x10))(lVar26,uStack_e0,lVar4);
  bVar1 = *(byte *)(lVar20 + 0x50);
  uVar27 = (ulong)bVar1 + 0x50 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar18 = lVar17 + uVar27 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar13 = bVar2 + uVar18 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar10 + 0x50);
  uVar15 = lVar16 + (ulong)bVar3 + uVar13 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110748278;
  _swift_allocObject(&UNK_110748278,uVar15 + lStack_d8,bVar1 | bVar2 | bVar3 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(long *)(puVar6 + 0x20) = lVar12;
  *(long *)(puVar6 + 0x28) = lVar21;
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  uVar25 = *(undefined8 *)(lVar22 + 0x68);
  *(undefined8 *)(puVar6 + 0x38) = uVar25;
  uVar19 = *(undefined8 *)(lVar22 + 0x70);
  *(undefined8 *)(puVar6 + 0x40) = uVar19;
  uVar23 = *(undefined8 *)(lVar22 + 0x78);
  *(undefined8 *)(puVar6 + 0x48) = uVar23;
  (**(code **)(lVar20 + 0x20))(puVar6 + uVar27,lStack_110);
  *(long **)(puVar6 + uVar18) = unaff_x20;
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar13,lStack_108,lVar21);
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar15,lStack_100,lVar4);
  _swift_retain(unaff_x20);
  uVar7 = 0;
  func_0x0001000abba4(0,0,lStack_e8,&UNK_10dcd86c0,puVar6);
  uVar8 = 0;
  lStack_98 = lVar12;
  lStack_90 = lVar21;
  uStack_88 = uVar9;
  uStack_80 = uVar25;
  uStack_78 = uVar19;
  uStack_70 = uVar23;
  FUN_104111460(0,&lStack_98);
  func_0x000104117088(uVar7,param_5,uVar8);
  _swift_release(uVar7);
  return;
}



/* Entry: 104124c7c; end: 104124c9b;  */

void FUN_104124c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = param_7;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104124c9c,0,0);
  return;
}



/* Entry: 104124c9c; end: 104124de3;  */

void FUN_104124c9c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x160);
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = 0x104124d90;
    puVar1 = PTR___sytN_11034f1b0 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar5,*(undefined8 *)(unaff_x22 + 0x148),puVar1,puVar1,0,0,&UNK_10dcd86d0,unaff_x22 + 0x110,
      puVar1,puVar1);
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar6 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104124de4;
  lVar3 = *(long *)(unaff_x22 + 0x168);
  lVar2 = *(long *)(unaff_x22 + 0x150);
  plVar5 = *(long **)(unaff_x22 + 0x158);
  plVar6[0x23] = *(long *)(unaff_x22 + 0x160);
  plVar6[0x24] = lVar3;
  plVar6[0x21] = lVar2;
  plVar6[0x22] = (long)plVar5;
  plVar6[0x1b] = unaff_x22 + 0x140;
  plVar6[0x25] = *plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104125058,0,0);
  return;
}



/* Entry: 104124de4; end: 104124e8f;  */

void FUN_104124de4(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x178));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104124f08,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x188) = plVar1;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_104124e90;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 104124e90; end: 104124f07;  */

void FUN_104124e90(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104124ed8,0,0);
  return;
}



/* Entry: 104124f08; end: 104124fa3;  */

void FUN_104124f08(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  __sScg9cancelAllyyF(uVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar2;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104124fa4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 104124fa4; end: 104124feb;  */

void FUN_104124fa4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104124fec,0,0);
  return;
}



/* Entry: 104124fec; end: 10412502f;  */

void FUN_104124fec(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 104125030; end: 104125057;  */

void FUN_104125030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_5;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  *(undefined8 **)(unaff_x22 + 0x110) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = *param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104125058,0,0);
  return;
}



/* Entry: 104125058; end: 1041255cf;  */

void FUN_104125058(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  ulong *puVar17;
  long lVar18;
  long unaff_x22;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  lVar19 = *(long *)(unaff_x22 + 0x128);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar14 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  lVar3 = 0;
  __sScPMa();
  pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar7)(uVar2,1,1,lVar3);
  lVar18 = *(long *)(lVar19 + 0x50);
  *(long *)(unaff_x22 + 0x130) = lVar18;
  lVar21 = *(long *)(lVar18 + -8);
  lVar3 = *(long *)(lVar21 + 0x40);
  uVar4 = lVar3 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar21 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar15 = uVar8 + 0x50 & (uVar8 ^ 0xffffffffffffffff);
  uVar20 = lVar3 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_1107482a0;
  _swift_allocObject(&UNK_1107482a0,uVar20 + 8,uVar8 | 7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(long *)(puVar5 + 0x20) = lVar18;
  lVar22 = *(long *)(lVar19 + 0x58);
  *(long *)(unaff_x22 + 0x138) = lVar22;
  *(long *)(puVar5 + 0x28) = lVar22;
  lVar9 = *(long *)(lVar19 + 0x60);
  *(long *)(unaff_x22 + 0x140) = lVar9;
  *(long *)(puVar5 + 0x30) = lVar9;
  uVar10 = *(undefined8 *)(lVar19 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar10;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  uVar11 = *(undefined8 *)(lVar19 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar11;
  *(undefined8 *)(puVar5 + 0x40) = uVar11;
  uVar12 = *(undefined8 *)(lVar19 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar12;
  *(undefined8 *)(puVar5 + 0x48) = uVar12;
  (**(code **)(lVar21 + 0x20))(puVar5 + uVar15,uVar4,lVar18);
  *(undefined8 *)(puVar5 + uVar20) = uVar13;
  _swift_task_dealloc(uVar4);
  _swift_retain(uVar13);
  func_0x000101e9558c(uVar2,&UNK_10dcd86e8,puVar5);
  func_0x0001000abe54(uVar2);
  _swift_task_dealloc(uVar2);
  uVar2 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  (*pcVar7)();
  lVar3 = *(long *)(lVar22 + -8);
  lVar19 = *(long *)(lVar3 + 0x40);
  uVar4 = lVar19 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar3 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar20 = uVar8 + 0x50 & (uVar8 ^ 0xffffffffffffffff);
  uVar15 = lVar19 + uVar20 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_1107482c8;
  _swift_allocObject(&UNK_1107482c8,uVar15 + 8,uVar8 | 7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(long *)(puVar5 + 0x20) = lVar18;
  *(long *)(puVar5 + 0x28) = lVar22;
  *(long *)(puVar5 + 0x30) = lVar9;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  *(undefined8 *)(puVar5 + 0x40) = uVar11;
  *(undefined8 *)(puVar5 + 0x48) = uVar12;
  (**(code **)(lVar3 + 0x20))(puVar5 + uVar20,uVar4,lVar22);
  *(undefined8 *)(puVar5 + uVar15) = uVar13;
  _swift_task_dealloc(uVar4);
  _swift_retain(uVar13);
  func_0x000101e9558c(uVar2,&UNK_10dcd86f8,puVar5);
  func_0x0001000abe54(uVar2);
  _swift_task_dealloc(uVar2);
  lVar19 = *(long *)(lVar9 + -8);
  lVar23 = *(long *)(lVar19 + 0x40);
  uVar2 = lVar23 + 0xf;
  uVar8 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  lVar3 = 0;
  __sSqMa(0,lVar9);
  lVar21 = *(long *)(lVar3 + -8);
  uVar15 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar21 + 0x10))();
  uVar4 = uVar15;
  (**(code **)(lVar19 + 0x30))(uVar15,1,lVar9);
  if ((int)uVar4 == 1) {
    (**(code **)(lVar21 + 8))(uVar15,lVar3);
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
    pcVar16 = *(code **)(lVar19 + 0x20);
    (*pcVar16)(uVar8,uVar15,lVar9);
    _swift_task_dealloc(uVar15);
    uVar15 = uVar14 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar15);
    (*pcVar7)();
    uVar2 = uVar2 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar2);
    (**(code **)(lVar19 + 0x10))();
    uVar14 = (ulong)*(byte *)(lVar19 + 0x50);
    uVar4 = uVar14 + 0x50 & (uVar14 ^ 0xffffffffffffffff);
    uVar20 = lVar23 + uVar4 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_1107482f0;
    _swift_allocObject(&UNK_1107482f0,uVar20 + 8,uVar14 | 7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(long *)(puVar5 + 0x20) = lVar18;
    *(long *)(puVar5 + 0x28) = lVar22;
    *(long *)(puVar5 + 0x30) = lVar9;
    *(undefined8 *)(puVar5 + 0x38) = uVar10;
    *(undefined8 *)(puVar5 + 0x40) = uVar11;
    *(undefined8 *)(puVar5 + 0x48) = uVar12;
    (*pcVar16)(puVar5 + uVar4,uVar2,lVar9);
    *(undefined8 *)(puVar5 + uVar20) = uVar13;
    _swift_task_dealloc(uVar2);
    _swift_retain(uVar13);
    func_0x000101e9558c(uVar15,&UNK_10dcd8708,puVar5);
    func_0x0001000abe54(uVar15);
    (**(code **)(lVar19 + 8))(uVar8,lVar9);
  }
  puVar17 = *(ulong **)(unaff_x22 + 0xd8);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  uVar2 = *puVar17;
  uVar13 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar13;
  uVar14 = uVar2;
  __sScg7isEmptySbvg(uVar2,PTR___sytN_11034f1b0 + 8,uVar13,PTR___ss5ErrorWS_11034ee10);
  if ((uVar14 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104125500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x110);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0x180) = iVar1;
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(lVar3 + 0x10);
  if (iVar1 != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar6;
    uVar13 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1041255d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x184,0,0,uVar13);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x185,uVar2,FUN_10412562c,unaff_x22 + 0xe0);
  return;
}



/* Entry: 1041255d0; end: 10412562b;  */

void FUN_1041255d0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104125654;
  }
  else {
    *(long *)(lVar2 + 0x178) = unaff_x20;
    pcVar1 = FUN_104125738;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10412562c; end: 104125653;  */

void FUN_10412562c(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104125654;
  }
  else {
    *(long *)(unaff_x22 + 0x178) = unaff_x20;
    pcVar1 = FUN_104125738;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104125654; end: 104125737;  */

void FUN_104125654(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar4 = **(ulong **)(unaff_x22 + 0xd8);
  uVar1 = uVar4;
  __sScg7isEmptySbvg(uVar4,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x160),
                     PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001041256a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(int *)(unaff_x22 + 0x180) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar2;
    uVar3 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1041255d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x184,0,0,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x185,uVar4,FUN_10412562c,unaff_x22 + 0xe0);
  return;
}



/* Entry: 104125738; end: 104125c07;  */

void FUN_104125738(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar11;
  uVar5 = 0;
  FUN_104111460(0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar16;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar11;
  uVar6 = 0xff;
  func_0x00010411fc94(0xff,(undefined8 *)(unaff_x22 + 0x88));
  uVar7 = 0;
  __sSqMa(0,uVar6);
  FUN_104146aa0(unaff_x22 + 0xb8,FUN_104128b94,unaff_x22 + 0x10,uVar13,uVar5,uVar7);
  uVar9 = *(ulong *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  uVar15 = *(ulong *)(unaff_x22 + 200);
  lVar2 = *(long *)(unaff_x22 + 0xd0);
  puVar18 = PTR___sytN_11034f1b0;
  if (((uVar9 & uVar15 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if ((long)uVar15 < 0) {
      lVar17 = *(long *)(lVar2 + 0x10);
      if (lVar17 == 0) {
        _swift_errorRetain(lVar1);
        _swift_retain(uVar15 & 0x7fffffffffffffff);
      }
      else {
        _swift_errorRetain(lVar1);
        uVar7 = 0;
        __sScEMa();
        uVar6 = uVar7;
        func_0x000100f5abbc();
        _swift_retain(uVar15 & 0x7fffffffffffffff);
        puVar18 = PTR___ss5ErrorWS_11034ee10;
        puVar14 = (undefined8 *)(lVar2 + 0x20);
        do {
          uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
          uVar19 = *puVar14;
          uVar8 = uVar7;
          uVar11 = uVar6;
          _swift_allocError(uVar7,uVar6,0,0);
          __sS2cEycfC(uVar11);
          puVar12 = (undefined8 *)puVar18;
          _swift_allocError(uVar16,puVar18,0,0);
          *puVar12 = uVar8;
          _swift_continuation_throwingResumeWithError(uVar19,uVar16);
          lVar17 = lVar17 + -1;
          puVar14 = puVar14 + 1;
        } while (lVar17 != 0);
      }
      puVar18 = PTR___sytN_11034f1b0;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x130);
      __sScT6cancelyyF(uVar15 & 0x7fffffffffffffff,PTR___sytN_11034f1b0 + 8,
                       PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      puVar4 = PTR___sSciTL_11034fea8;
      puVar3 = PTR___s7ElementSciTl_11034fb58;
      uVar5 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar7,uVar13,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
      uVar7 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,uVar16,uVar8,puVar4,puVar3);
      uVar8 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,uVar6,uVar19,puVar4,puVar3);
      uVar6 = 0xff;
      __sSqMa(0xff,uVar8);
      uVar8 = 0xff;
      _swift_getTupleTypeMetadata3(0xff,uVar5,uVar7,uVar6,0,0);
      uVar6 = 0xff;
      __sSqMa(0xff,uVar8);
      lVar17 = 0;
      __ss6ResultOMa(0,uVar6,uVar11,PTR___ss5ErrorWS_11034ee10);
      plVar10 = (long *)(*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *plVar10 = lVar1;
      _swift_storeEnumTagMultiPayload();
      func_0x000103969044(plVar10,uVar9,lVar17);
      _swift_release(uVar15 & 0x7fffffffffffffff);
      _swift_task_dealloc(plVar10);
    }
    else {
      lVar17 = *(long *)(lVar1 + 0x10);
      if (lVar17 == 0) {
        _swift_retain(uVar9);
      }
      else {
        uVar7 = 0;
        __sScEMa();
        uVar6 = uVar7;
        func_0x000100f5abbc();
        _swift_retain(uVar9);
        puVar18 = PTR___ss5ErrorWS_11034ee10;
        puVar14 = (undefined8 *)(lVar1 + 0x20);
        do {
          uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
          uVar19 = *puVar14;
          uVar8 = uVar7;
          uVar11 = uVar6;
          _swift_allocError(uVar7,uVar6,0,0);
          __sS2cEycfC(uVar11);
          puVar12 = (undefined8 *)puVar18;
          _swift_allocError(uVar16,puVar18,0,0);
          *puVar12 = uVar8;
          _swift_continuation_throwingResumeWithError(uVar19,uVar16);
          lVar17 = lVar17 + -1;
          puVar14 = puVar14 + 1;
        } while (lVar17 != 0);
      }
      puVar18 = PTR___sytN_11034f1b0;
      __sScT6cancelyyF(uVar9,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      _swift_release(uVar9);
    }
  }
  puVar3 = PTR___ss5ErrorWS_11034ee10;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  __sScg9cancelAllyyF(**(undefined8 **)(unaff_x22 + 0xd8),puVar18 + 8,
                      *(undefined8 *)(unaff_x22 + 0x160),PTR___ss5ErrorWS_11034ee10);
  FUN_104128c0c(uVar9,lVar1,uVar15,lVar2);
  _swift_errorRelease(uVar6);
  uVar15 = **(ulong **)(unaff_x22 + 0xd8);
  uVar9 = uVar15;
  __sScg7isEmptySbvg(uVar15,puVar18 + 8,*(undefined8 *)(unaff_x22 + 0x160),puVar3);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(unaff_x22 + 0x180) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
                (unaff_x22 + 0x185,uVar15,FUN_10412562c,unaff_x22 + 0xe0);
      return;
    }
    plVar10 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar10;
    uVar6 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1041255d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)(unaff_x22 + 0x184,0,0,uVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104125b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104125c08; end: 104125e8f;  */

void FUN_104125c08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 in_x3;
  long *in_x4;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar14 = *in_x4;
  uVar9 = *(undefined8 *)(lVar14 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
  lVar10 = *(long *)(lVar14 + 0x50);
  *(long *)(unaff_x22 + 0x1c8) = lVar10;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar9,lVar10,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x1d0) = lVar3;
  uVar11 = *(undefined8 *)(lVar14 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar11;
  uVar12 = *(undefined8 *)(lVar14 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar12;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar11,uVar12,puVar2,puVar1);
  uVar13 = *(undefined8 *)(lVar14 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar13;
  uVar15 = *(undefined8 *)(lVar14 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar15;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar13,uVar15,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar3,uVar4,uVar6,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar5;
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar4 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar4;
  lVar14 = 0;
  __ss6ResultOMa(0,uVar6,uVar4,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x208) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x210) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x58) = lVar10;
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  uVar4 = 0xff;
  FUN_10411d5bc();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar4;
  lVar14 = 0;
  __sSqMa(0,uVar4);
  *(long *)(unaff_x22 + 0x230) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  lVar14 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x250) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 600) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar8;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar8;
  lVar3 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar8;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x288) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar3;
  uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104125e90,0,0);
  return;
}



/* Entry: 104125e90; end: 104125f2f;  */

void FUN_104125e90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar3 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_104125f30;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1041274e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 104125f30; end: 104125fff;  */

void FUN_104125f30(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104129128,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1c0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1c8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104126000;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 104126000; end: 10412605b;  */

void FUN_104126000(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10412605c;
  }
  else {
    pcVar1 = (code *)0x10412912c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10412605c; end: 1041265b7;  */

void FUN_10412605c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = uVar13;
  (**(code **)(lVar17 + 0x30))(uVar13,1,uVar15);
  if ((int)uVar2 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar20;
    *(undefined8 *)(unaff_x22 + 400) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    uVar13 = 0;
    FUN_104111460(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar20;
    *(undefined8 *)(unaff_x22 + 200) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
    uVar2 = 0xff;
    func_0x00010411d828(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    uVar15 = 0;
    __sSqMa(0,uVar2);
    FUN_104146aa0(unaff_x22 + 0x118,0x104128d90,unaff_x22 + 0x170,uVar11,uVar13,uVar15);
    uVar10 = *(ulong *)(unaff_x22 + 0x118);
    if (((uVar10 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      lVar17 = *(long *)(unaff_x22 + 0x120);
      lVar6 = *(long *)(unaff_x22 + 0x128);
      if ((long)uVar10 < 0) {
        lVar12 = *(long *)(lVar6 + 0x10);
        if (lVar12 != 0) {
          uVar13 = 0;
          __sScEMa();
          uVar2 = uVar13;
          func_0x000100f5abbc();
          puVar1 = PTR___ss5ErrorWS_11034ee10;
          puVar16 = (undefined8 *)(lVar6 + 0x20);
          do {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar20 = *puVar16;
            uVar15 = uVar13;
            uVar14 = uVar2;
            _swift_allocError(uVar13,uVar2,0,0);
            __sS2cEycfC(uVar14);
            puVar4 = (undefined8 *)puVar1;
            _swift_allocError(uVar18,puVar1,0,0);
            *puVar4 = uVar15;
            _swift_continuation_throwingResumeWithError(uVar20,uVar18);
            lVar12 = lVar12 + -1;
            puVar16 = puVar16 + 1;
          } while (lVar12 != 0);
        }
        uVar2 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x208);
        lVar12 = *(long *)(unaff_x22 + 0x1f8);
        __sScT6cancelyyF(lVar17,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                         PTR___ss5NeverOs5ErrorsWP_11034ee90);
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar2,1,1,lVar12);
        _swift_storeEnumTagMultiPayload(uVar2,uVar13,0);
        func_0x000103969044(uVar2,uVar10 & 0x7fffffffffffffff,uVar13);
      }
      else {
        lVar12 = *(long *)(lVar17 + 0x10);
        if (lVar12 != 0) {
          uVar13 = 0;
          __sScEMa();
          uVar2 = uVar13;
          func_0x000100f5abbc();
          puVar1 = PTR___ss5ErrorWS_11034ee10;
          puVar16 = (undefined8 *)(lVar17 + 0x20);
          do {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar20 = *puVar16;
            uVar15 = uVar13;
            uVar14 = uVar2;
            _swift_allocError(uVar13,uVar2,0,0);
            __sS2cEycfC(uVar14);
            puVar4 = (undefined8 *)puVar1;
            _swift_allocError(uVar18,puVar1,0,0);
            *puVar4 = uVar15;
            _swift_continuation_throwingResumeWithError(uVar20,uVar18);
            lVar12 = lVar12 + -1;
            puVar16 = puVar16 + 1;
          } while (lVar12 != 0);
        }
        __sScT6cancelyyF(uVar10,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                         PTR___ss5NeverOs5ErrorsWP_11034ee90);
      }
      FUN_104128cd8(uVar10,lVar17,lVar6);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x218);
    (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x288));
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001041265b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar6 = *(long *)(unaff_x22 + 0x238);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x230);
  lVar12 = *(long *)(unaff_x22 + 0x228);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (**(code **)(lVar17 + 0x20))(uVar3,uVar13,uVar15);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
  uVar2 = 0;
  FUN_104111460(0);
  FUN_104146aa0(uVar9,FUN_104128e20,unaff_x22 + 0x10,uVar8,uVar2,uVar7);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar9,uVar7);
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar5,1);
  if ((int)uVar5 != 1) {
    puVar16 = *(undefined8 **)(unaff_x22 + 0x240);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
    lVar6 = *(long *)(unaff_x22 + 0x210);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar18 = *puVar16;
    uVar2 = 0xff;
    __sSccMa(0xff,uVar14,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,uVar2,uVar14,"downstreamContinuation result ",0);
    (**(code **)(lVar6 + 0x20))(uVar15,(long)puVar16 + (long)*(int *)(lVar17 + 0x30),uVar14);
    (**(code **)(lVar6 + 0x10))(uVar13,uVar15,uVar14);
    func_0x000103969044(uVar13,uVar18,uVar14);
    (**(code **)(lVar6 + 8))(uVar15,uVar14);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
  (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
            (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
  (**(code **)(lVar17 + 8))(uVar13,uVar2);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1041265b8;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1041274e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 1041265b8; end: 104126687;  */

void FUN_1041265b8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104129128,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1c0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1c8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104126000;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 104126688; end: 1041268df;  */

void FUN_104126688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  uStack_f8 = param_4;
  uStack_f0 = param_7;
  uStack_e8 = param_5;
  uStack_e0 = param_8;
  uStack_d8 = param_3;
  uStack_c0 = param_6;
  uStack_b8 = param_9;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = auStack_100 + -extraout_x8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_d0 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = (long)puVar9 - extraout_x8_00;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar11 - extraout_x8_01;
  lVar8 = *(long *)(lVar5 + -8);
  (**(code **)(lVar8 + 0x10))(lVar12,uStack_d8,lVar5);
  (**(code **)(lVar8 + 0x38))(lVar12,0,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar11,1,1,lVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar9,1,1,lVar3);
  uStack_90 = uStack_f8;
  uStack_88 = uStack_e8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_f0;
  uStack_70 = uStack_e0;
  uStack_68 = uStack_b8;
  uVar7 = 0;
  FUN_104111460(0,&uStack_90);
  func_0x0001041180c8(uStack_a0,lVar12,lVar11,puVar9,uVar7);
  (**(code **)(lStack_b0 + 8))(puVar9,lStack_a8);
  (**(code **)(lStack_d0 + 8))(lVar11,lStack_c8);
  (**(code **)(lVar10 + 8))(lVar12,lVar6);
  return;
}



/* Entry: 1041268e0; end: 104126b67;  */

void FUN_1041268e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 in_x3;
  long *in_x4;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar14 = *in_x4;
  uVar11 = *(undefined8 *)(lVar14 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar11;
  uVar12 = *(undefined8 *)(lVar14 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,uVar12,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar9 = *(undefined8 *)(lVar14 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar9;
  lVar10 = *(long *)(lVar14 + 0x58);
  *(long *)(unaff_x22 + 0x1d8) = lVar10;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar9,lVar10,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x1e0) = lVar4;
  uVar13 = *(undefined8 *)(lVar14 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar13;
  uVar15 = *(undefined8 *)(lVar14 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar15;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar13,uVar15,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,lVar4,uVar6,0,0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar5;
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar3;
  lVar14 = 0;
  __ss6ResultOMa(0,uVar6,uVar3,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x208) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x210) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar12;
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  *(long *)(unaff_x22 + 0x60) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  uVar3 = 0xff;
  FUN_10411d5bc();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar3;
  lVar14 = 0;
  __sSqMa(0,uVar3);
  *(long *)(unaff_x22 + 0x230) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  uVar7 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  lVar14 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0x250) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 600) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar8;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar4;
  uVar8 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar8;
  lVar4 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar4;
  uVar8 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar8;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar10,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x288) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar4;
  uVar8 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104126b68,0,0);
  return;
}



/* Entry: 104126b68; end: 104126c07;  */

void FUN_104126b68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar3 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_104126c08;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1041274e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 104126c08; end: 104126cd7;  */

void FUN_104126c08(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104126d34,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1d0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1d8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104126cd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 104126cd8; end: 104126d33;  */

void FUN_104126cd8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104126df4;
  }
  else {
    pcVar1 = FUN_104127420;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104126d34; end: 104126df3;  */

void FUN_104126d34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000104126df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104126df4; end: 10412734f;  */

void FUN_104126df4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar2 = uVar13;
  (**(code **)(lVar17 + 0x30))(uVar13,1,uVar15);
  if ((int)uVar2 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar20;
    *(undefined8 *)(unaff_x22 + 400) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    uVar13 = 0;
    FUN_104111460(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar20;
    *(undefined8 *)(unaff_x22 + 200) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
    uVar2 = 0xff;
    func_0x00010411d828(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    uVar15 = 0;
    __sSqMa(0,uVar2);
    FUN_104146aa0(unaff_x22 + 0x118,FUN_104128d44,unaff_x22 + 0x170,uVar11,uVar13,uVar15);
    uVar10 = *(ulong *)(unaff_x22 + 0x118);
    if (((uVar10 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      lVar17 = *(long *)(unaff_x22 + 0x120);
      lVar6 = *(long *)(unaff_x22 + 0x128);
      if ((long)uVar10 < 0) {
        lVar12 = *(long *)(lVar6 + 0x10);
        if (lVar12 != 0) {
          uVar13 = 0;
          __sScEMa();
          uVar2 = uVar13;
          func_0x000100f5abbc();
          puVar1 = PTR___ss5ErrorWS_11034ee10;
          puVar16 = (undefined8 *)(lVar6 + 0x20);
          do {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar20 = *puVar16;
            uVar15 = uVar13;
            uVar14 = uVar2;
            _swift_allocError(uVar13,uVar2,0,0);
            __sS2cEycfC(uVar14);
            puVar4 = (undefined8 *)puVar1;
            _swift_allocError(uVar18,puVar1,0,0);
            *puVar4 = uVar15;
            _swift_continuation_throwingResumeWithError(uVar20,uVar18);
            lVar12 = lVar12 + -1;
            puVar16 = puVar16 + 1;
          } while (lVar12 != 0);
        }
        uVar2 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x208);
        lVar12 = *(long *)(unaff_x22 + 0x1f8);
        __sScT6cancelyyF(lVar17,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                         PTR___ss5NeverOs5ErrorsWP_11034ee90);
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar2,1,1,lVar12);
        _swift_storeEnumTagMultiPayload(uVar2,uVar13,0);
        func_0x000103969044(uVar2,uVar10 & 0x7fffffffffffffff,uVar13);
      }
      else {
        lVar12 = *(long *)(lVar17 + 0x10);
        if (lVar12 != 0) {
          uVar13 = 0;
          __sScEMa();
          uVar2 = uVar13;
          func_0x000100f5abbc();
          puVar1 = PTR___ss5ErrorWS_11034ee10;
          puVar16 = (undefined8 *)(lVar17 + 0x20);
          do {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x200);
            uVar20 = *puVar16;
            uVar15 = uVar13;
            uVar14 = uVar2;
            _swift_allocError(uVar13,uVar2,0,0);
            __sS2cEycfC(uVar14);
            puVar4 = (undefined8 *)puVar1;
            _swift_allocError(uVar18,puVar1,0,0);
            *puVar4 = uVar15;
            _swift_continuation_throwingResumeWithError(uVar20,uVar18);
            lVar12 = lVar12 + -1;
            puVar16 = puVar16 + 1;
          } while (lVar12 != 0);
        }
        __sScT6cancelyyF(uVar10,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                         PTR___ss5NeverOs5ErrorsWP_11034ee90);
      }
      FUN_104128cd8(uVar10,lVar17,lVar6);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x218);
    (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x288));
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010412734c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar6 = *(long *)(unaff_x22 + 0x238);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x230);
  lVar12 = *(long *)(unaff_x22 + 0x228);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (**(code **)(lVar17 + 0x20))(uVar3,uVar13,uVar15);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
  uVar2 = 0;
  FUN_104111460(0);
  FUN_104146aa0(uVar9,0x104128d5c,unaff_x22 + 0x10,uVar8,uVar2,uVar7);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar9,uVar7);
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar5,1);
  if ((int)uVar5 != 1) {
    puVar16 = *(undefined8 **)(unaff_x22 + 0x240);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
    lVar6 = *(long *)(unaff_x22 + 0x210);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar18 = *puVar16;
    uVar2 = 0xff;
    __sSccMa(0xff,uVar14,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,uVar2,uVar14,"downstreamContinuation result ",0);
    (**(code **)(lVar6 + 0x20))(uVar15,(long)puVar16 + (long)*(int *)(lVar17 + 0x30),uVar14);
    (**(code **)(lVar6 + 0x10))(uVar13,uVar15,uVar14);
    func_0x000103969044(uVar13,uVar18,uVar14);
    (**(code **)(lVar6 + 8))(uVar15,uVar14);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
            (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x230));
  (**(code **)(lVar17 + 8))(uVar13,uVar2);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_104127350;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1041274e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 104127350; end: 10412741f;  */

void FUN_104127350(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104126d34,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1d0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1d8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104126cd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 104127420; end: 1041274df;  */

void FUN_104127420(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001041274dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041274e0; end: 104127623;  */

void FUN_1041274e0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar9 = *param_2;
  lVar10 = param_2[2];
  uVar1 = *(ulong *)(lVar9 + 0x50);
  uVar11 = *(ulong *)(lVar9 + 0x58);
  uVar7 = *(undefined8 *)(lVar9 + 0x60);
  uVar3 = *(undefined8 *)(lVar9 + 0x68);
  uVar2 = *(undefined8 *)(lVar9 + 0x70);
  uVar4 = *(undefined8 *)(lVar9 + 0x78);
  uVar5 = 0;
  uStack_e8 = uVar1;
  uStack_e0 = uVar11;
  uStack_d8 = uVar7;
  uStack_d0 = uVar3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar4;
  uStack_a0 = uVar1;
  uStack_98 = uVar11;
  uStack_90 = uVar7;
  uStack_88 = uVar3;
  uStack_80 = uVar2;
  uStack_78 = uVar4;
  uStack_70 = param_1;
  FUN_104111460(0,&uStack_e8);
  uVar6 = 0xff;
  uStack_e8 = uVar1;
  uStack_e0 = uVar11;
  uStack_d8 = uVar7;
  uStack_d0 = uVar3;
  uStack_c8 = uVar2;
  uStack_c0 = uVar4;
  func_0x00010411d794(0xff,&uStack_e8);
  uVar7 = 0;
  __sSqMa(0,uVar6);
  FUN_104146aa0(&uStack_e8,param_3,auStack_b0,lVar10,uVar5,uVar7);
  uVar11 = uStack_e0;
  uVar1 = uStack_e8;
  if ((((uStack_e8 ^ 0xffffffffffffffff) & 0xf00000000000000f) != 0) ||
     ((uStack_e0 & 0xf000000000000007) != 0xf000000000000007)) {
    if ((long)uStack_e0 < 0) {
      uVar11 = uStack_e0 & 0x7fffffffffffffff;
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar8 = (ulong *)PTR___ss5ErrorWS_11034ee10;
      _swift_allocError();
      *puVar8 = uVar11;
      _swift_continuation_throwingResumeWithError(uVar1,uVar7);
    }
    else {
      _swift_continuation_throwingResume(uStack_e8);
      FUN_104128d20(uVar1,uVar11);
    }
  }
  return;
}



/* Entry: 104127624; end: 10412787b;  */

void FUN_104127624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  uStack_f0 = param_7;
  uStack_e8 = param_5;
  uStack_e0 = param_8;
  uStack_d8 = param_3;
  uStack_c0 = param_6;
  uStack_b8 = param_9;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)&uStack_f0 - extraout_x8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_d0 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar8 - extraout_x8_00;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x10))(lVar10,uStack_d8,lVar4);
  (**(code **)(lVar5 + 0x38))(lVar10,0,1,lVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar8,1,1,lVar3);
  uStack_88 = uStack_e8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_f0;
  uStack_70 = uStack_e0;
  uStack_68 = uStack_b8;
  uVar7 = 0;
  uStack_90 = param_4;
  FUN_104111460(0,&uStack_90);
  func_0x0001041180c8(uStack_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(lStack_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(lStack_d0 + 8))(lVar10,lStack_c8);
  (**(code **)(lVar9 + 8))(lVar11,lVar6);
  return;
}



/* Entry: 10412787c; end: 104127aff;  */

void FUN_10412787c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 in_x3;
  long *in_x4;
  long lVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x3;
  *(long **)(unaff_x22 + 0x1b8) = in_x4;
  lVar11 = *in_x4;
  uVar13 = *(undefined8 *)(lVar11 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar13;
  uVar14 = *(undefined8 *)(lVar11 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar14;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar13,uVar14,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar15 = *(undefined8 *)(lVar11 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar15;
  uVar16 = *(undefined8 *)(lVar11 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar16;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar15,uVar16,puVar2,puVar1);
  uVar10 = *(undefined8 *)(lVar11 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar10;
  lVar12 = *(long *)(lVar11 + 0x60);
  *(long *)(unaff_x22 + 0x1e8) = lVar12;
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar10,lVar12,puVar2,puVar1);
  *(long *)(unaff_x22 + 0x1f0) = lVar11;
  lVar5 = 0xff;
  __sSqMa(0xff,lVar11);
  *(long *)(unaff_x22 + 0x1f8) = lVar5;
  uVar6 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,lVar5,0,0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar6;
  uVar4 = 0xff;
  __sSqMa(0xff,uVar6);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x208) = uVar3;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar4,uVar3,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x210) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x218) = lVar7;
  uVar9 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar14;
  *(ulong *)(unaff_x22 + 0x228) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar16;
  *(long *)(unaff_x22 + 0x68) = lVar12;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
  uVar3 = 0xff;
  FUN_10411d5bc();
  *(undefined8 *)(unaff_x22 + 0x230) = uVar3;
  lVar7 = 0;
  __sSqMa(0,uVar3);
  *(long *)(unaff_x22 + 0x238) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x240) = lVar7;
  uVar9 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar9;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 600) = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  lVar11 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar9;
  lVar11 = *(long *)(lVar12 + -8);
  *(long *)(unaff_x22 + 0x278) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar9;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar12,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  *(long *)(unaff_x22 + 0x288) = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x290) = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104127b00,0,0);
  return;
}



/* Entry: 104127b00; end: 104127b9f;  */

void FUN_104127b00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  lVar3 = *(long *)(unaff_x22 + 0x1b8);
  (**(code **)(*(long *)(unaff_x22 + 0x278) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x1b0),uVar2);
  __sSci17makeAsyncIterator0bC0QzyFTj(uVar4,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_104127ba0;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1041274e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 104127ba0; end: 104127c6f;  */

void FUN_104127ba0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104127ccc,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1e0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1e8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104127c70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 104127c70; end: 104127ccb;  */

void FUN_104127c70(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104127d8c;
  }
  else {
    pcVar1 = FUN_1041283b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104127ccc; end: 104127d8b;  */

void FUN_104127ccc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000104127d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104127d8c; end: 1041282e7;  */

void FUN_104127d8c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar2 = uVar13;
  (**(code **)(lVar17 + 0x30))(uVar13,1,uVar15);
  if ((int)uVar2 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (**(code **)(*(long *)(unaff_x22 + 600) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x1f8));
    *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar20;
    *(undefined8 *)(unaff_x22 + 400) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    uVar13 = 0;
    FUN_104111460(0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar20;
    *(undefined8 *)(unaff_x22 + 200) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
    uVar2 = 0xff;
    func_0x00010411d828(0xff,(undefined8 *)(unaff_x22 + 0xb8));
    uVar15 = 0;
    __sSqMa(0,uVar2);
    FUN_104146aa0(unaff_x22 + 0x118,FUN_104128cc0,unaff_x22 + 0x170,uVar11,uVar13,uVar15);
    uVar10 = *(ulong *)(unaff_x22 + 0x118);
    if (((uVar10 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      lVar17 = *(long *)(unaff_x22 + 0x120);
      lVar6 = *(long *)(unaff_x22 + 0x128);
      if ((long)uVar10 < 0) {
        lVar12 = *(long *)(lVar6 + 0x10);
        if (lVar12 != 0) {
          uVar13 = 0;
          __sScEMa();
          uVar2 = uVar13;
          func_0x000100f5abbc();
          puVar1 = PTR___ss5ErrorWS_11034ee10;
          puVar16 = (undefined8 *)(lVar6 + 0x20);
          do {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
            uVar20 = *puVar16;
            uVar15 = uVar13;
            uVar14 = uVar2;
            _swift_allocError(uVar13,uVar2,0,0);
            __sS2cEycfC(uVar14);
            puVar4 = (undefined8 *)puVar1;
            _swift_allocError(uVar18,puVar1,0,0);
            *puVar4 = uVar15;
            _swift_continuation_throwingResumeWithError(uVar20,uVar18);
            lVar12 = lVar12 + -1;
            puVar16 = puVar16 + 1;
          } while (lVar12 != 0);
        }
        uVar2 = *(undefined8 *)(unaff_x22 + 0x228);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x210);
        lVar12 = *(long *)(unaff_x22 + 0x200);
        __sScT6cancelyyF(lVar17,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                         PTR___ss5NeverOs5ErrorsWP_11034ee90);
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar2,1,1,lVar12);
        _swift_storeEnumTagMultiPayload(uVar2,uVar13,0);
        func_0x000103969044(uVar2,uVar10 & 0x7fffffffffffffff,uVar13);
      }
      else {
        lVar12 = *(long *)(lVar17 + 0x10);
        if (lVar12 != 0) {
          uVar13 = 0;
          __sScEMa();
          uVar2 = uVar13;
          func_0x000100f5abbc();
          puVar1 = PTR___ss5ErrorWS_11034ee10;
          puVar16 = (undefined8 *)(lVar17 + 0x20);
          do {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
            uVar20 = *puVar16;
            uVar15 = uVar13;
            uVar14 = uVar2;
            _swift_allocError(uVar13,uVar2,0,0);
            __sS2cEycfC(uVar14);
            puVar4 = (undefined8 *)puVar1;
            _swift_allocError(uVar18,puVar1,0,0);
            *puVar4 = uVar15;
            _swift_continuation_throwingResumeWithError(uVar20,uVar18);
            lVar12 = lVar12 + -1;
            puVar16 = puVar16 + 1;
          } while (lVar12 != 0);
        }
        __sScT6cancelyyF(uVar10,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                         PTR___ss5NeverOs5ErrorsWP_11034ee90);
      }
      FUN_104128cd8(uVar10,lVar17,lVar6);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
    (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x288));
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001041282e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar6 = *(long *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar12 = *(long *)(unaff_x22 + 0x230);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (**(code **)(lVar17 + 0x20))(uVar3,uVar13,uVar15);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar19;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
  uVar2 = 0;
  FUN_104111460(0);
  FUN_104146aa0(uVar9,FUN_104128cec,unaff_x22 + 0x10,uVar8,uVar2,uVar7);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar9,uVar7);
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar5,1);
  if ((int)uVar5 != 1) {
    puVar16 = *(undefined8 **)(unaff_x22 + 0x248);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar6 = *(long *)(unaff_x22 + 0x218);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar18 = *puVar16;
    uVar2 = 0xff;
    __sSccMa(0xff,uVar14,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,uVar2,uVar14,"downstreamContinuation result ",0);
    (**(code **)(lVar6 + 0x20))(uVar15,(long)puVar16 + (long)*(int *)(lVar17 + 0x30),uVar14);
    (**(code **)(lVar6 + 0x10))(uVar13,uVar15,uVar14);
    func_0x000103969044(uVar13,uVar18,uVar14);
    (**(code **)(lVar6 + 8))(uVar15,uVar14);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar17 = *(long *)(unaff_x22 + 0x268);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  (**(code **)(*(long *)(unaff_x22 + 0x240) + 8))
            (*(undefined8 *)(unaff_x22 + 0x250),*(undefined8 *)(unaff_x22 + 0x238));
  (**(code **)(lVar17 + 8))(uVar13,uVar2);
  *(long *)(unaff_x22 + 0x130) = unaff_x22;
  *(code **)(unaff_x22 + 0x138) = FUN_1041282e8;
  _swift_continuation_init(unaff_x22 + 0x130,1);
  FUN_1041274e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x130);
  return;
}



/* Entry: 1041282e8; end: 1041283b7;  */

void FUN_1041282e8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  if (*(long *)(lVar4 + 0x150) != 0) {
    *(long *)(lVar4 + 0x2b8) = *(long *)(lVar4 + 0x150);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_104127ccc,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x1e0);
  _swift_getAssociatedConformanceWitness
            (uVar1,*(undefined8 *)(lVar4 + 0x1e8),*(undefined8 *)(lVar4 + 0x288),
             PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x2a8) = plVar2;
  *plVar2 = lVar3;
  plVar2[1] = (long)FUN_104127c70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar2,*(undefined8 *)(lVar4 + 0x260),*(undefined8 *)(lVar4 + 0x288),uVar1);
  return;
}



/* Entry: 1041283b8; end: 104128477;  */

void FUN_1041283b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000104128474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104128478; end: 1041286cf;  */

void FUN_104128478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  uStack_f0 = param_7;
  uStack_e8 = param_5;
  uStack_e0 = param_8;
  uStack_c8 = param_3;
  uStack_c0 = param_6;
  uStack_b8 = param_9;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_6,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)&uStack_f0 - extraout_x8;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_8,param_5,puVar2,puVar1);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lStack_d8 = *(long *)(lVar5 + -8);
  lStack_d0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar8 - extraout_x8_00;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_7,param_4,puVar2,puVar1);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar10,1,1,lVar4);
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(lVar8,uStack_c8,lVar3);
  (**(code **)(lVar4 + 0x38))(lVar8,0,1,lVar3);
  uStack_88 = uStack_e8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_f0;
  uStack_70 = uStack_e0;
  uStack_68 = uStack_b8;
  uVar7 = 0;
  uStack_90 = param_4;
  FUN_104111460(0,&uStack_90);
  func_0x0001041180c8(uStack_a0,lVar11,lVar10,lVar8,uVar7);
  (**(code **)(lStack_b0 + 8))(lVar8,lStack_a8);
  (**(code **)(lStack_d8 + 8))(lVar10,lStack_d0);
  (**(code **)(lVar9 + 8))(lVar11,lVar6);
  return;
}



/* Entry: 1041286d0; end: 1041286f3;  */

void FUN_1041286d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1041286f4; end: 1041286ff;  */

void FUN_1041286f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e7f13fc);
  return;
}



/* Entry: 104128700; end: 10412875f;  */

void FUN_104128700(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_60;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_104111460();
  func_0x000104116a0c();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Entry: 104128760; end: 10412878b;  */

void FUN_104128760(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 10412878c; end: 1041287df;  */

void FUN_10412878c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *unaff_x20;
  long unaff_x22;
  long lVar9;
  
  plVar8 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1041287e0;
  plVar8[2] = param_1;
  plVar8[3] = (long)unaff_x20;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar9 = *unaff_x20;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x68),*(undefined8 *)(lVar9 + 0x50),PTR___sSciTL_11034fea8
             ,PTR___s7ElementSciTl_11034fb58);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x70),*(undefined8 *)(lVar9 + 0x58),puVar2,puVar1);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x78),*(undefined8 *)(lVar9 + 0x60),puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  uVar4 = 0xff;
  __sSqMa(0xff,uVar5);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar9 = 0;
  __ss6ResultOMa(0,uVar4,uVar3,PTR___ss5ErrorWS_11034ee10);
  plVar8[4] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar8[5] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[6] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104123bf8,0,0);
  return;
}



/* Entry: 1041287e0; end: 10412881b;  */

void FUN_1041287e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104128818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10412881c; end: 104128823;  */

void FUN_10412881c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  long *unaff_x20;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar12 = *unaff_x20;
  uVar8 = *(undefined8 *)(lVar12 + 0x68);
  uVar9 = *(ulong *)(lVar12 + 0x50);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar8,uVar9,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar11 = *(undefined8 *)(lVar12 + 0x70);
  lVar15 = *(long *)(lVar12 + 0x58);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar11,lVar15,puVar2,puVar1);
  uVar16 = *(undefined8 *)(lVar12 + 0x78);
  lVar13 = *(long *)(lVar12 + 0x60);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar16,lVar13,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  lVar12 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,uVar6,0,0);
  uVar4 = 0xff;
  lStack_f8 = lVar12;
  __sSqMa(0xff);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar12 = 0;
  __ss6ResultOMa(0,uVar4,uVar3,PTR___ss5ErrorWS_11034ee10);
  lStack_100 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_110 + -extraout_x8;
  lVar12 = unaff_x20[2];
  uVar4 = 0;
  uStack_e8 = uVar9;
  lStack_e0 = lVar15;
  lStack_d8 = lVar13;
  uStack_d0 = uVar8;
  uStack_c8 = uVar11;
  uStack_c0 = uVar16;
  uStack_a0 = uVar9;
  lStack_98 = lVar15;
  lStack_90 = lVar13;
  uStack_88 = uVar8;
  uStack_80 = uVar11;
  uStack_78 = uVar16;
  FUN_104111460(0,&uStack_e8);
  uVar5 = 0xff;
  uStack_e8 = uVar9;
  lStack_e0 = lVar15;
  lStack_d8 = lVar13;
  uStack_d0 = uVar8;
  uStack_c8 = uVar11;
  uStack_c0 = uVar16;
  func_0x000104123530(0xff,&uStack_e8);
  uVar6 = 0;
  __sSqMa(0,uVar5);
  FUN_104146aa0(&uStack_e8,FUN_104128824,auStack_b0,lVar12,uVar4,uVar6);
  lVar13 = lStack_d8;
  lVar12 = lStack_e0;
  uVar9 = uStack_e8;
  if (((uStack_e8 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if ((long)uStack_e8 < 0) {
      lVar15 = *(long *)(lStack_e0 + 0x10);
      if (lVar15 == 0) {
        _swift_retain(uStack_e8 & 0x7fffffffffffffff);
      }
      else {
        puVar10 = (undefined8 *)(lStack_e0 + 0x20);
        uVar5 = 0;
        __sScEMa();
        uVar4 = uVar5;
        func_0x000100f5abbc();
        _swift_retain(uVar9 & 0x7fffffffffffffff);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        do {
          uVar11 = *puVar10;
          uVar6 = uVar5;
          uVar8 = uVar4;
          _swift_allocError(uVar5,uVar4,0,0);
          __sS2cEycfC(uVar8);
          uVar8 = uVar3;
          puVar7 = (undefined8 *)puVar1;
          _swift_allocError(uVar3,puVar1,0,0);
          *puVar7 = uVar6;
          _swift_continuation_throwingResumeWithError(uVar11,uVar8);
          lVar15 = lVar15 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar15 != 0);
      }
      __sScT6cancelyyF(uVar9 & 0x7fffffffffffffff,PTR___sytN_11034f1b0 + 8,
                       PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
      FUN_104128888(uVar9,lVar12,lVar13);
      _swift_release(uVar9 & 0x7fffffffffffffff);
    }
    else {
      lVar15 = *(long *)(lStack_d8 + 0x10);
      lStack_108 = lStack_e0;
      if (lVar15 == 0) {
        _swift_retain(lStack_e0);
      }
      else {
        puVar10 = (undefined8 *)(lStack_d8 + 0x20);
        uVar5 = 0;
        __sScEMa();
        uVar4 = uVar5;
        func_0x000100f5abbc();
        _swift_retain(lVar12);
        puVar1 = PTR___ss5ErrorWS_11034ee10;
        do {
          uVar11 = *puVar10;
          uVar6 = uVar5;
          uVar8 = uVar4;
          _swift_allocError(uVar5,uVar4,0,0);
          __sS2cEycfC(uVar8);
          uVar8 = uVar3;
          puVar7 = (undefined8 *)puVar1;
          _swift_allocError(uVar3,puVar1,0,0);
          *puVar7 = uVar6;
          _swift_continuation_throwingResumeWithError(uVar11,uVar8);
          lVar15 = lVar15 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar15 != 0);
      }
      lVar12 = lStack_108;
      __sScT6cancelyyF(lStack_108,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                       PTR___ss5NeverOs5ErrorsWP_11034ee90);
      (**(code **)(*(long *)(lStack_f8 + -8) + 0x38))(puVar14,1,1);
      lVar15 = lStack_100;
      _swift_storeEnumTagMultiPayload(puVar14,lStack_100,0);
      func_0x000103969044(puVar14,uVar9,lVar15);
      _swift_release(lVar12);
      FUN_104128888(uVar9,lVar12,lVar13);
    }
  }
  return;
}



/* Entry: 104128824; end: 104128887;  */

void FUN_104128824(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_60;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_104111460();
  func_0x00010411bdc4();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  return;
}



/* Entry: 104128888; end: 1041288a3;  */

void FUN_104128888(ulong param_1,ulong param_2,ulong param_3)

{
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if (0x7fffffffffffffff < param_1) {
      param_3 = param_2;
      param_2 = param_1 & 0x7fffffffffffffff;
    }
    _swift_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  return;
}



/* Entry: 1041288a4; end: 1041288bb;  */

void FUN_1041288a4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10412414c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1041288bc; end: 10412899f;  */

void FUN_1041288bc(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar6 = uVar3 + 0x50 & (uVar3 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar2 + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar7 = uVar3 + uVar5 + 8 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  lVar2 = 0;
  __sSqMa(0,*(undefined8 *)(unaff_x20 + 0x30));
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + uVar5);
  plVar1 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1041289a0;
  plVar1[0x2c] = unaff_x20 + uVar7;
  plVar1[0x2d] = unaff_x20 + (uVar7 + lVar4 + uVar3 & (uVar3 ^ 0xffffffffffffffff));
  plVar1[0x2a] = unaff_x20 + uVar6;
  plVar1[0x2b] = lVar2;
  plVar1[0x29] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104124c9c,0,0);
  return;
}



/* Entry: 1041289a0; end: 1041289db;  */

void FUN_1041289a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001041289d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1041289dc; end: 104128a5b;  */

void FUN_1041289dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar3 = *(long **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x104129130;
  plVar5[0x23] = lVar2;
  plVar5[0x24] = lVar4;
  plVar5[0x21] = lVar1;
  plVar5[0x22] = (long)plVar3;
  plVar5[0x1b] = param_2;
  plVar5[0x25] = *plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104125058,0,0);
  return;
}



/* Entry: 104128a5c; end: 104128af7;  */

void FUN_104128a5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long unaff_x22;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar12 + 0x50 & (uVar12 ^ 0xffffffffffffffff);
  plVar15 = *(long **)(unaff_x20 + (*(long *)(lVar11 + 0x40) + uVar12 + 7 & 0xffffffffffffff8));
  plVar9 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x104129134;
  plVar9[0x36] = unaff_x20 + uVar12;
  plVar9[0x37] = (long)plVar15;
  lVar11 = *plVar15;
  lVar10 = *(long *)(lVar11 + 0x68);
  plVar9[0x38] = lVar10;
  lVar13 = *(long *)(lVar11 + 0x50);
  plVar9[0x39] = lVar13;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar9[0x3a] = lVar3;
  lVar14 = *(long *)(lVar11 + 0x70);
  plVar9[0x3b] = lVar14;
  lVar16 = *(long *)(lVar11 + 0x58);
  plVar9[0x3c] = lVar16;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar14,lVar16,puVar2,puVar1);
  lVar17 = *(long *)(lVar11 + 0x78);
  plVar9[0x3d] = lVar17;
  lVar18 = *(long *)(lVar11 + 0x60);
  plVar9[0x3e] = lVar18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar17,lVar18,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  lVar11 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,lVar3,uVar4,uVar6,0,0);
  plVar9[0x3f] = lVar11;
  uVar4 = 0xff;
  __sSqMa(0xff,lVar11);
  lVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar9[0x40] = lVar11;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar4,lVar11,PTR___ss5ErrorWS_11034ee10);
  plVar9[0x41] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x42] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x43] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xb] = lVar13;
  plVar9[0x44] = uVar12;
  plVar9[0xc] = lVar16;
  plVar9[0xd] = lVar18;
  plVar9[0xe] = lVar10;
  plVar9[0xf] = lVar14;
  plVar9[0x10] = lVar17;
  lVar11 = 0xff;
  FUN_10411d5bc();
  plVar9[0x45] = lVar11;
  lVar7 = 0;
  __sSqMa(0,lVar11);
  plVar9[0x46] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x47] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x48] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x49] = uVar12;
  lVar11 = 0;
  __sSqMa(0,lVar3);
  plVar9[0x4a] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x4b] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4c] = uVar12;
  lVar11 = *(long *)(lVar3 + -8);
  plVar9[0x4d] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4e] = uVar12;
  lVar11 = *(long *)(lVar13 + -8);
  plVar9[0x4f] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x50] = uVar12;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar9[0x51] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x52] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x53] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104125e90,0,0);
  return;
}



/* Entry: 104128af8; end: 104128b93;  */

void FUN_104128af8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar12 + 0x50 & (uVar12 ^ 0xffffffffffffffff);
  plVar15 = *(long **)(unaff_x20 + (*(long *)(lVar11 + 0x40) + uVar12 + 7 & 0xffffffffffffff8));
  plVar9 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x104129138;
  plVar9[0x36] = unaff_x20 + uVar12;
  plVar9[0x37] = (long)plVar15;
  lVar11 = *plVar15;
  lVar14 = *(long *)(lVar11 + 0x68);
  plVar9[0x38] = lVar14;
  lVar16 = *(long *)(lVar11 + 0x50);
  plVar9[0x39] = lVar16;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar14,lVar16,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar10 = *(long *)(lVar11 + 0x70);
  plVar9[0x3a] = lVar10;
  lVar13 = *(long *)(lVar11 + 0x58);
  plVar9[0x3b] = lVar13;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar10,lVar13,puVar2,puVar1);
  plVar9[0x3c] = lVar4;
  lVar17 = *(long *)(lVar11 + 0x78);
  plVar9[0x3d] = lVar17;
  lVar18 = *(long *)(lVar11 + 0x60);
  plVar9[0x3e] = lVar18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar17,lVar18,puVar2,puVar1);
  uVar6 = 0xff;
  __sSqMa(0xff,uVar5);
  lVar11 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,lVar4,uVar6,0,0);
  plVar9[0x3f] = lVar11;
  uVar3 = 0xff;
  __sSqMa(0xff,lVar11);
  lVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar9[0x40] = lVar11;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar3,lVar11,PTR___ss5ErrorWS_11034ee10);
  plVar9[0x41] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x42] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x43] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xb] = lVar16;
  plVar9[0x44] = uVar12;
  plVar9[0xc] = lVar13;
  plVar9[0xd] = lVar18;
  plVar9[0xe] = lVar14;
  plVar9[0xf] = lVar10;
  plVar9[0x10] = lVar17;
  lVar11 = 0xff;
  FUN_10411d5bc();
  plVar9[0x45] = lVar11;
  lVar7 = 0;
  __sSqMa(0,lVar11);
  plVar9[0x46] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x47] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x48] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x49] = uVar12;
  lVar11 = 0;
  __sSqMa(0,lVar4);
  plVar9[0x4a] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x4b] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4c] = uVar12;
  lVar11 = *(long *)(lVar4 + -8);
  plVar9[0x4d] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4e] = uVar12;
  lVar11 = *(long *)(lVar13 + -8);
  plVar9[0x4f] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x50] = uVar12;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar9[0x51] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x52] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x53] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104126b68,0,0);
  return;
}



/* Entry: 104128b94; end: 104128c0b;  */

void FUN_104128b94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_104111460(0,&uStack_70);
  func_0x00010411b2fc();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 104128c0c; end: 104128c23;  */

void FUN_104128c0c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (((param_1 & param_3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  if (-1 < (long)param_3) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  _swift_errorRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 104128c24; end: 104128cbf;  */

void FUN_104128c24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x30) + -8);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar12 + 0x50 & (uVar12 ^ 0xffffffffffffffff);
  plVar15 = *(long **)(unaff_x20 + (*(long *)(lVar11 + 0x40) + uVar12 + 7 & 0xffffffffffffff8));
  plVar9 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x10412913c;
  plVar9[0x36] = unaff_x20 + uVar12;
  plVar9[0x37] = (long)plVar15;
  lVar11 = *plVar15;
  lVar14 = *(long *)(lVar11 + 0x68);
  plVar9[0x38] = lVar14;
  lVar16 = *(long *)(lVar11 + 0x50);
  plVar9[0x39] = lVar16;
  puVar2 = PTR___sSciTL_11034fea8;
  puVar1 = PTR___s7ElementSciTl_11034fb58;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar14,lVar16,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  lVar17 = *(long *)(lVar11 + 0x70);
  plVar9[0x3a] = lVar17;
  lVar18 = *(long *)(lVar11 + 0x58);
  plVar9[0x3b] = lVar18;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar17,lVar18,puVar2,puVar1);
  lVar10 = *(long *)(lVar11 + 0x78);
  plVar9[0x3c] = lVar10;
  lVar13 = *(long *)(lVar11 + 0x60);
  plVar9[0x3d] = lVar13;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar10,lVar13,puVar2,puVar1);
  plVar9[0x3e] = lVar5;
  lVar6 = 0xff;
  __sSqMa(0xff,lVar5);
  plVar9[0x3f] = lVar6;
  lVar11 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar3,uVar4,lVar6,0,0);
  plVar9[0x40] = lVar11;
  uVar3 = 0xff;
  __sSqMa(0xff,lVar11);
  lVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  plVar9[0x41] = lVar11;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar3,lVar11,PTR___ss5ErrorWS_11034ee10);
  plVar9[0x42] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x43] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x44] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0xb] = lVar16;
  plVar9[0x45] = uVar12;
  plVar9[0xc] = lVar18;
  plVar9[0xd] = lVar13;
  plVar9[0xe] = lVar14;
  plVar9[0xf] = lVar17;
  plVar9[0x10] = lVar10;
  lVar11 = 0xff;
  FUN_10411d5bc();
  plVar9[0x46] = lVar11;
  lVar7 = 0;
  __sSqMa(0,lVar11);
  plVar9[0x47] = lVar7;
  lVar11 = *(long *)(lVar7 + -8);
  plVar9[0x48] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x49] = uVar8;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4a] = uVar12;
  lVar11 = *(long *)(lVar6 + -8);
  plVar9[0x4b] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4c] = uVar12;
  lVar11 = *(long *)(lVar5 + -8);
  plVar9[0x4d] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x4e] = uVar12;
  lVar11 = *(long *)(lVar13 + -8);
  plVar9[0x4f] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x50] = uVar12;
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar10,lVar13,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  plVar9[0x51] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x52] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x53] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104127b00,0,0);
  return;
}



/* Entry: 104128cc0; end: 104128cd7;  */

void FUN_104128cc0(undefined8 param_1)

{
  FUN_104128da8(param_1,2);
  return;
}



/* Entry: 104128cd8; end: 104128ceb;  */

void FUN_104128cd8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    uVar1 = param_2;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_3;
      param_1 = param_2;
    }
    _swift_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  return;
}



/* Entry: 104128cec; end: 104128d1f;  */

void FUN_104128cec(undefined8 param_1)

{
  func_0x000104128e3c(param_1,FUN_104128478);
  return;
}



/* Entry: 104128d20; end: 104128d43;  */

void FUN_104128d20(ulong param_1,ulong param_2)

{
  if ((((param_1 ^ 0xffffffffffffffff) & 0xf00000000000000f) == 0) &&
     ((param_2 & 0xf000000000000007) == 0xf000000000000007)) {
    return;
  }
  if (-1 < (long)param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2 & 0x7fffffffffffffff);
  return;
}



/* Entry: 104128d44; end: 104128da7;  */

void FUN_104128d44(undefined8 param_1)

{
  FUN_104128da8(param_1,1);
  return;
}



/* Entry: 104128da8; end: 104128e1f;  */

void FUN_104128da8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_104111460(0,&uStack_70);
  func_0x00010411a42c();
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  return;
}



/* Entry: 104128e20; end: 104128e7b;  */

void FUN_104128e20(undefined8 param_1)

{
  func_0x000104128e3c(param_1,FUN_104126688);
  return;
}



/* Entry: 104128e7c; end: 104128ef7;  */

void FUN_104128e7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_104111460(0,&uStack_70);
  func_0x000104117bc0(param_3,uVar2,uVar1);
  *param_1 = param_3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 104128ef8; end: 1041290d7;  */

void FUN_104128ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  lVar1 = 0;
  uStack_d0 = uVar2;
  uStack_b8 = param_1;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  __sSqMa();
  lStack_c0 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)&uStack_e0 - extraout_x8;
  lVar8 = *(long *)(lVar3 + 0x58);
  lStack_c8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar10 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar3 + 0x50);
  lVar1 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_d8 = *(undefined8 *)(lVar3 + 0x68);
  uStack_e0 = *(undefined8 *)(lVar3 + 0x70);
  uVar4 = *(undefined8 *)(lVar3 + 0x78);
  lVar3 = 0;
  lStack_90 = lVar11;
  lStack_88 = lVar8;
  uStack_80 = uVar2;
  uStack_78 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_68 = uVar4;
  FUN_104111460(0,&lStack_90);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar9 - extraout_x8_02;
  (**(code **)(lVar1 + 0x10))(lVar9,uStack_b8,lVar11);
  (**(code **)(lStack_c8 + 0x10))(lVar10,uStack_a8,lVar8);
  (**(code **)(lStack_c0 + 0x10))(lVar7,uStack_a0,lStack_b0);
  *(undefined8 *)(lVar6 + -0x10) = uVar4;
  FUN_104116874(lVar6,lVar9,lVar10,lVar7,lVar11,lVar8,uStack_d0,uStack_d8,uStack_e0);
  lVar1 = lVar6;
  FUN_104146c54(lVar6,lVar3);
  (**(code **)(lVar5 + 8))(lVar6,lVar3);
  unaff_x20[2] = lVar1;
  return;
}



/* Entry: 1041290d8; end: 104129127;  */

void FUN_1041290d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_104128ef8(param_1,param_2,param_3);
  return;
}



/* Entry: 104129128; end: 10412913f;  */

void FUN_104129128(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x288));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000104126df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104129140; end: 1041292cb;  */

void FUN_104129140(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_88 = *(long *)(lVar3 + -8);
  lVar1 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar6 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  lVar1 = 0xff;
  lStack_90 = lVar6;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,lVar3,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_00;
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = lVar3;
  uStack_68 = uVar5;
  FUN_10413b984(0,&uStack_80);
  (**(code **)(lVar4 + 0x10))(lVar6 - extraout_x8_01,unaff_x20 + *(int *)(param_1 + 0x38),lVar1);
  (**(code **)(lVar7 + 0x10))(lVar6,unaff_x20 + *(int *)(param_1 + 0x3c),lVar2);
  (**(code **)(lStack_88 + 0x10))(lStack_90,unaff_x20 + *(int *)(param_1 + 0x34),lVar3);
  FUN_10413c270();
  FUN_1041292cc();
  return;
}



/* Entry: 1041292cc; end: 104129317;  */

void FUN_1041292cc(long *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  uStack_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x68);
  uStack_30 = *(undefined8 *)(lVar1 + 0x60);
  lVar1 = 0;
  FUN_10412a734(0,&uStack_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Entry: 104129318; end: 10412935f;  */

void FUN_104129318(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_104129140();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Entry: 104129360; end: 1041293cf;  */

void FUN_104129360(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1041293d0; end: 1041293ef;  */

void FUN_1041293d0(void)

{
  func_0x000104129390();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1041293f0; end: 104129407;  */

void FUN_1041293f0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104129408,0,0);
  return;
}



/* Entry: 104129408; end: 104129497;  */

void FUN_104129408(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10412945c;
  plVar1[2] = *(long *)(unaff_x22 + 0x10);
  plVar1[3] = (long)plVar2;
  plVar1[4] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104137efc,0,0);
  return;
}



/* Entry: 104129498; end: 1041294af;  */

void FUN_104129498(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041294b0,0,0);
  return;
}



/* Entry: 1041294b0; end: 104129503;  */

void FUN_1041294b0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = **(long **)(unaff_x22 + 0x18);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10412a740;
  plVar1[2] = *(long *)(unaff_x22 + 0x10);
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104129408,0,0);
  return;
}



/* Entry: 104129504; end: 104129553;  */

void FUN_104129504(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104129554;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1041294b0,0,0);
  return;
}



/* Entry: 104129554; end: 10412958f;  */

void FUN_104129554(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010412958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104129590; end: 104129667;  */

void FUN_104129590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x10),
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
  plVar3[1] = (long)FUN_104129668;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar3,param_1,param_2,param_3,param_5,param_6,uVar2);
  return;
}



/* Entry: 104129668; end: 1041296d7;  */

void FUN_104129668(void)

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
                    /* WARNING: Could not recover jumptable at 0x0001041296d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1041296d8; end: 1041296e7;  */

void FUN_1041296d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd8778,param_1);
  return;
}



/* Entry: 1041296e8; end: 104129777;  */

void FUN_1041296e8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___sSciTL_11034fea8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
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



/* Entry: 104129778; end: 10412977f;  */

void FUN_104129778(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104129780; end: 10412986f;  */

undefined1  [16] FUN_104129780(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(uVar1 - 8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    uVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      lStack_38 = *(long *)(uVar1 - 8) + 0x40;
      uVar3 = *(ulong *)(param_1 + 0x28);
      uVar2 = 0x13f;
      _swift_getAssociatedTypeWitness();
      uVar1 = uVar2;
      if (uVar3 < 0x40) {
        lStack_30 = *(long *)(uVar2 - 8) + 0x40;
        uVar1 = 0x13f;
        __sSqMa();
        if (uVar2 < 0x40) {
          lStack_28 = *(long *)(uVar1 - 8) + 0x40;
          _swift_initStructMetadata(param_1,0,4,&lStack_40,param_1 + 0x30);
          uVar1 = 0;
          uVar4 = 0;
          goto LAB_10412985c;
        }
      }
    }
  }
  uVar4 = 0x3f;
LAB_10412985c:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 104129870; end: 104129a4f;  */

long * FUN_104129870(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar3 + -8);
  uVar4 = *(uint *)(lVar15 + 0x50);
  uVar9 = (ulong)uVar4 & 0xff;
  uVar11 = *(long *)(lVar16 + 0x40) + uVar9;
  lVar10 = *(long *)(lVar15 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar3,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar14 = *(long *)(lVar6 + -8);
  uVar7 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  lVar10 = lVar10 + uVar7;
  lVar8 = *(long *)(lVar14 + 0x40);
  lVar1 = lVar8 + uVar7;
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar5 = uVar4 | *(uint *)(lVar16 + 0x50) | *(uint *)(lVar14 + 0x50);
  uVar4 = uVar5 & 0xff;
  if ((uVar4 < 8 && (uVar5 & 0x100000) == 0) &&
      (lVar1 + (lVar10 + (uVar11 & (uVar9 ^ 0xffffffffffffffff)) & (uVar7 ^ 0xffffffffffffffff)) &
      (uVar7 ^ 0xffffffffffffffff)) + lVar8 < 0x19) {
    uVar7 = ~uVar7;
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar2);
    uVar12 = uVar11 + (long)param_1 & ~uVar9;
    uVar9 = uVar11 + (long)param_2 & ~uVar9;
    (**(code **)(lVar15 + 0x10))(uVar12,uVar9,lVar3);
    uVar11 = uVar12 + lVar10 & uVar7;
    uVar9 = uVar9 + lVar10 & uVar7;
    pcVar13 = *(code **)(lVar14 + 0x10);
    (*pcVar13)(uVar11,uVar9,lVar6);
    uVar11 = lVar1 + uVar11;
    uVar9 = lVar1 + uVar9;
    uVar12 = uVar9 & uVar7;
    (**(code **)(lVar14 + 0x30))(uVar12,1,lVar6);
    if ((int)uVar12 == 0) {
      (*pcVar13)(uVar11 & uVar7,uVar9 & uVar7,lVar6);
      (**(code **)(lVar14 + 0x38))(uVar11 & uVar7,0,1,lVar6);
    }
    else {
      _memcpy(uVar11 & uVar7,uVar9 & uVar7,lVar8);
    }
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    param_1 = (long *)(lVar10 + ((ulong)uVar4 + 0x10 & ((ulong)uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104129a50; end: 104129b5b;  */

void FUN_104129a50(long param_1,long param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar2 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar3 + 0x40) + param_1 + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 8))(uVar4,lVar2);
  lVar5 = *(long *)(lVar5 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar2,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar2 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar4 = uVar4 + lVar5 + uVar6 & (uVar6 ^ 0xffffffffffffffff);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  (*UNRECOVERED_JUMPTABLE)(uVar4,lVar3);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar6 + uVar4;
  uVar1 = uVar4 & (uVar6 ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 0x30))(uVar1,1,lVar3);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104129b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4 & (uVar6 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 104129b5c; end: 104129ca7;  */

long FUN_104129b5c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar4 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar1;
  uVar5 = lVar3 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x10))(uVar5,uVar2,lVar4);
  lVar3 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar4,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar4 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar3 = lVar3 + uVar8;
  uVar1 = lVar3 + uVar5 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + uVar2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar6 = *(code **)(lVar4 + 0x10);
  (*pcVar6)(uVar1,uVar2,lVar7);
  lVar3 = *(long *)(lVar4 + 0x40);
  uVar1 = lVar3 + uVar8 + uVar1;
  uVar2 = lVar3 + uVar8 + uVar2;
  uVar5 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar5,1,lVar7);
  if ((int)uVar5 == 0) {
    (*pcVar6)(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar4 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      lVar3 = lVar3 + 1;
    }
    _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar3);
  }
  return param_1;
}



/* Entry: 104129ca8; end: 104129e3f;  */

long FUN_104129ca8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  code *pcVar10;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar5 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar2;
  uVar6 = lVar4 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar6,uVar3,lVar5);
  lVar4 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar5,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar5 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar4 = lVar4 + uVar8;
  uVar2 = lVar4 + uVar6 & (uVar8 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + uVar3 & (uVar8 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x18);
  (*pcVar9)(uVar2,uVar3,lVar7);
  lVar4 = *(long *)(lVar5 + 0x40);
  uVar2 = lVar4 + uVar8 + uVar2;
  uVar3 = lVar4 + uVar8 + uVar3;
  pcVar10 = *(code **)(lVar5 + 0x30);
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar6,1,lVar7);
  uVar1 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar1,1,lVar7);
  if ((int)uVar6 == 0) {
    if ((int)uVar1 == 0) {
      (*pcVar9)(uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))
              (uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar5 + 0x38))(uVar2 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  _memcpy(uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar4);
  return param_1;
}



/* Entry: 104129e40; end: 104129f8b;  */

long FUN_104129e40(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar4 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x40) + uVar1;
  uVar5 = lVar3 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x20))(uVar5,uVar2,lVar4);
  lVar3 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar4,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar4 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar3 = lVar3 + uVar8;
  uVar1 = lVar3 + uVar5 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = lVar3 + uVar2 & (uVar8 ^ 0xffffffffffffffff);
  pcVar6 = *(code **)(lVar4 + 0x20);
  (*pcVar6)(uVar1,uVar2,lVar7);
  lVar3 = *(long *)(lVar4 + 0x40);
  uVar1 = lVar3 + uVar8 + uVar1;
  uVar2 = lVar3 + uVar8 + uVar2;
  uVar5 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar5,1,lVar7);
  if ((int)uVar5 == 0) {
    (*pcVar6)(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar4 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
  }
  else {
    if (*(int *)(lVar4 + 0x54) == 0) {
      lVar3 = lVar3 + 1;
    }
    _memcpy(uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar3);
  }
  return param_1;
}



/* Entry: 104129f8c; end: 10412a6cb;  */

long FUN_104129f8c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  code *pcVar10;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar5 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar4 = *(long *)(lVar4 + 0x40) + uVar2;
  uVar6 = lVar4 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x28))(uVar6,uVar3,lVar5);
  lVar4 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar5,PTR___ss5ClockTL_110350028,
             PTR___s8Durations5ClockPTl_11034fb70);
  lVar5 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar4 = lVar4 + uVar8;
  uVar2 = lVar4 + uVar6 & (uVar8 ^ 0xffffffffffffffff);
  uVar3 = lVar4 + uVar3 & (uVar8 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x28);
  (*pcVar9)(uVar2,uVar3,lVar7);
  lVar4 = *(long *)(lVar5 + 0x40);
  uVar2 = lVar4 + uVar8 + uVar2;
  uVar3 = lVar4 + uVar8 + uVar3;
  pcVar10 = *(code **)(lVar5 + 0x30);
  uVar6 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar6,1,lVar7);
  uVar1 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar1,1,lVar7);
  if ((int)uVar6 == 0) {
    if ((int)uVar1 == 0) {
      (*pcVar9)(uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
      return param_1;
    }
    (**(code **)(lVar5 + 8))(uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))
              (uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar5 + 0x38))(uVar2 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
    return param_1;
  }
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  _memcpy(uVar2 & (uVar8 ^ 0xffffffffffffffff),uVar3 & (uVar8 ^ 0xffffffffffffffff),lVar4);
  return param_1;
}



/* Entry: 10412a6cc; end: 10412a6ef;  */

void FUN_10412a6cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1470);
  return;
}



/* Entry: 10412a6f0; end: 10412a733;  */

void FUN_10412a6f0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 10412a734; end: 10412a74b;  */

void FUN_10412a734(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e7f1500);
  return;
}



/* Entry: 10412a74c; end: 10412a817;  */

void FUN_10412a74c(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar2 = &lStack_40;
  uVar4 = *(ulong *)(param_1 + 0x18);
  lStack_38 = *(undefined8 *)(param_1 + 0x18);
  lStack_40 = *(long *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  lStack_30 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = 0x13f;
  func_0x00010412d290();
  if (plVar2 < (undefined1 *)0x40) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar3,uVar4,PTR___ss5ClockTL_110350028,PTR___s8Durations5ClockPTl_11034fb70);
    if (uVar3 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      _swift_checkMetadataState();
      if (uVar4 < 0x40) {
        lStack_30 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,3,&lStack_40,param_1 + 0x30);
      }
    }
  }
  return;
}



/* Entry: 10412a818; end: 10412cc2b;  */

long * FUN_10412a818(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  uint *puVar35;
  ulong uVar36;
  long lVar37;
  
  lVar14 = *(long *)(param_3 + 0x10);
  lVar23 = *(long *)(lVar14 + -8);
  uVar33 = *(ulong *)(lVar23 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),lVar14,PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  puVar8 = PTR___ss5ClockTL_110350028;
  lVar34 = *(long *)(lVar10 + -8);
  uVar18 = *(uint *)(lVar34 + 0x50);
  uVar27 = *(undefined8 *)(param_3 + 0x28);
  lVar37 = *(long *)(param_3 + 0x18);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar27,lVar37,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar20 = *(long *)(lVar11 + -8);
  uVar5 = *(uint *)(lVar20 + 0x54);
  uVar26 = (ulong)*(uint *)(lVar20 + 0x50) & 0xff;
  uVar18 = *(uint *)(lVar20 + 0x50) | uVar18;
  uVar22 = uVar18 & 0xff;
  uVar36 = (ulong)uVar22;
  uVar16 = uVar36 + 0x18 & (uVar36 ^ 0xffffffffffffffff);
  uVar6 = *(uint *)(lVar34 + 0x54);
  uVar25 = *(long *)(lVar34 + 0x40) + uVar26;
  lVar30 = (uVar25 & (uVar26 ^ 0xffffffffffffffff)) + *(long *)(lVar20 + 0x40);
  lVar4 = lVar30;
  if (uVar5 == 0 && uVar6 == 0) {
    lVar4 = lVar30 + 1;
  }
  uVar1 = lVar4 + uVar16;
  if (uVar1 <= uVar33) {
    uVar1 = uVar33;
  }
  uVar16 = lVar30 + uVar16;
  if (uVar1 <= uVar16) {
    uVar1 = uVar16;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,uVar27,lVar37,puVar8,PTR___s8Durations5ClockPTl_11034fb70);
  lVar28 = *(long *)(lVar12 + -8);
  uVar16 = (ulong)*(uint *)(lVar28 + 0x50) & 0xff;
  lVar29 = *(long *)(lVar37 + -8);
  uVar33 = (ulong)*(uint *)(lVar29 + 0x50) & 0xff;
  uVar22 = (uint)uVar16 | *(uint *)(lVar23 + 0x50) & 0xf8 | uVar22 | (uint)uVar33;
  if (7 < uVar22 ||
      ((*(uint *)(lVar28 + 0x50) | *(uint *)(lVar29 + 0x50) | uVar18 | *(uint *)(lVar23 + 0x50)) &
      0x100000) != 0) {
LAB_10412aa00:
    uVar25 = (ulong)(uVar22 | 7);
    lVar30 = *(long *)param_2;
    *param_1 = lVar30;
    _swift_retain();
    return (long *)(lVar30 + (uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff)));
  }
  uVar2 = uVar1 + 1 + uVar16;
  lVar3 = *(long *)(lVar28 + 0x40) + uVar33;
  if (0x18 < (lVar3 + (uVar2 & (uVar16 ^ 0xffffffffffffffff)) & (uVar33 ^ 0xffffffffffffffff)) +
             *(long *)(lVar29 + 0x40)) goto LAB_10412aa00;
  bVar7 = *(byte *)((long)param_2 + uVar1);
  uVar22 = (uint)bVar7;
  if (4 < bVar7) {
    uVar32 = (uint)uVar1;
    uVar18 = 4;
    if (uVar32 < 4) {
      uVar18 = uVar32;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_10412aa68;
      uVar22 = (uint)(byte)*param_2;
    }
    else if (uVar18 == 2) {
      uVar22 = (uint)(ushort)*param_2;
    }
    else if (uVar18 == 3) {
      uVar22 = (uint)(uint3)*param_2;
    }
    else {
      uVar22 = *param_2;
    }
    if (uVar32 < 4) {
      uVar22 = (uVar22 | bVar7 - 5 << (ulong)((uVar32 & 3) << 3)) + 5;
    }
    else {
      uVar22 = uVar22 + 5;
    }
  }
LAB_10412aa68:
  uVar21 = ~uVar36;
  uVar26 = ~uVar26;
  if ((int)uVar22 < 2) {
    if (uVar22 == 0) {
      (**(code **)(lVar23 + 0x10))(param_1,param_2,lVar14);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      goto LAB_10412adac;
    }
    if (uVar22 != 1) {
LAB_10412ac7c:
      _memcpy(param_1,param_2);
      goto LAB_10412adac;
    }
    *param_1 = *(long *)param_2;
    puVar19 = (undefined8 *)((long)param_1 + 0xfU & 0xffffffffffffff8);
    puVar17 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xffffffffffffff8);
    *puVar19 = *puVar17;
    puVar19 = puVar19 + 1;
    puVar17 = puVar17 + 1;
    *puVar19 = *puVar17;
    uVar31 = (long)puVar19 + uVar36 + 8 & uVar21;
    puVar35 = (uint *)((long)puVar17 + uVar36 + 8 & uVar21);
    _swift_retain();
    if (uVar5 == 0 && uVar6 == 0) {
      if (*(byte *)((long)puVar35 + lVar30) != 0) {
        uVar18 = (uint)lVar30;
        uVar22 = 0;
        if (uVar18 < 4) {
          uVar22 = *(byte *)((long)puVar35 + lVar30) - 1 << (ulong)((uVar18 & 3) << 3);
        }
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar32 = 4;
          if (uVar18 < 4) {
            uVar32 = uVar18;
          }
          if ((int)uVar32 < 3) {
            if (uVar32 == 1) {
              uVar18 = (uint)(byte)*puVar35;
            }
            else {
              uVar18 = (uint)(ushort)*puVar35;
            }
          }
          else if (uVar32 == 3) {
            uVar18 = (uint)(uint3)*puVar35;
          }
          else {
            uVar18 = *puVar35;
          }
        }
        if ((uVar18 | uVar22) != 0xffffffff) goto LAB_10412acf4;
      }
LAB_10412ad48:
      (**(code **)(lVar34 + 0x10))(uVar31,puVar35,lVar10);
      (**(code **)(lVar20 + 0x10))
                (uVar25 + uVar31 & uVar26,(ulong)(uVar25 + (long)puVar35) & uVar26,lVar11);
      if (uVar5 == 0 && uVar6 == 0) {
        *(undefined1 *)(uVar31 + lVar30) = 0;
      }
    }
    else {
      if (uVar6 < uVar5) {
        uVar36 = (ulong)(uVar25 + (long)puVar35) & uVar26;
        (**(code **)(lVar20 + 0x30))(uVar36,uVar5,lVar11);
        iVar9 = (int)uVar36;
      }
      else {
        puVar13 = puVar35;
        (**(code **)(lVar34 + 0x30))(puVar35,uVar6,lVar10);
        iVar9 = (int)puVar13;
      }
      if (iVar9 == 0) goto LAB_10412ad48;
LAB_10412acf4:
      _memcpy(uVar31,puVar35,lVar4);
    }
    uVar15 = 1;
  }
  else {
    if (uVar22 == 2) {
      *param_1 = *(long *)param_2;
      lVar30 = *(long *)(param_2 + 2);
      param_1[2] = *(long *)(param_2 + 4);
      param_1[1] = lVar30;
      *(undefined1 *)((long)param_1 + uVar1) = 2;
      _swift_retain();
      goto LAB_10412adac;
    }
    if (uVar22 == 3) {
      *param_1 = *(long *)param_2;
      puVar19 = (undefined8 *)((long)param_1 + 0xfU & 0xffffffffffffff8);
      puVar17 = (undefined8 *)((ulong)((long)param_2 + 0xf) & 0xfffffffffffffff8);
      *puVar19 = *puVar17;
      puVar19 = puVar19 + 1;
      puVar17 = puVar17 + 1;
      *puVar19 = *puVar17;
      uVar31 = (long)puVar19 + uVar36 + 8 & uVar21;
      uVar21 = (long)puVar17 + uVar36 + 8 & uVar21;
      pcVar24 = *(code **)(lVar34 + 0x10);
      _swift_retain();
      (*pcVar24)(uVar31,uVar21,lVar10);
      (**(code **)(lVar20 + 0x10))(uVar25 + uVar31 & uVar26,uVar25 + uVar21 & uVar26,lVar11);
      *(undefined1 *)((long)param_1 + uVar1) = 3;
      goto LAB_10412adac;
    }
    if (uVar22 != 4) goto LAB_10412ac7c;
    lVar30 = *(long *)param_2;
    _swift_errorRetain(lVar30);
    *param_1 = lVar30;
    uVar15 = 4;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar15;
LAB_10412adac:
  uVar26 = uVar2 + (long)param_1 & ~uVar16;
  uVar25 = (ulong)(uVar2 + (long)param_2) & ~uVar16;
  (**(code **)(lVar28 + 0x10))(uVar26,uVar25,lVar12);
  (**(code **)(lVar29 + 0x10))(lVar3 + uVar26 & ~uVar33,lVar3 + uVar25 & ~uVar33,lVar37);
  return param_1;
}



/* Entry: 10412cc2c; end: 10412ced3;  */

ulong FUN_10412cc2c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  
  uVar19 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(long *)(param_3 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  puVar7 = PTR___ss5ClockTL_110350028;
  lVar20 = *(long *)(lVar8 + -8);
  bVar5 = *(byte *)(lVar20 + 0x50);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar8,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar9 = *(long *)(lVar9 + -8);
  uVar12 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  uVar14 = (ulong)(*(uint *)(lVar9 + 0x50) & 0xff | (uint)bVar5);
  uVar12 = (*(long *)(lVar20 + 0x40) + uVar12 & (uVar12 ^ 0xffffffffffffffff)) +
           *(long *)(lVar9 + 0x40) + (uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff));
  uVar14 = uVar12;
  if (*(int *)(lVar9 + 0x54) == 0 && *(int *)(lVar20 + 0x54) == 0) {
    uVar14 = uVar12 + 1;
  }
  if (uVar14 <= uVar19) {
    uVar14 = uVar19;
  }
  if (uVar14 <= uVar12) {
    uVar14 = uVar12;
  }
  if (uVar14 < 0x19) {
    uVar14 = 0x18;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness(0,uVar18,lVar8,puVar7,PTR___s8Durations5ClockPTl_11034fb70);
  lVar20 = *(long *)(lVar9 + -8);
  uVar13 = *(uint *)(lVar20 + 0x54);
  lVar15 = *(long *)(lVar8 + -8);
  uVar10 = *(uint *)(lVar15 + 0x54);
  uVar4 = uVar13;
  if (uVar13 <= uVar10) {
    uVar4 = uVar10;
  }
  uVar3 = uVar4;
  if (uVar4 < 0xfb) {
    uVar3 = 0xfa;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar16 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar12 = uVar14 + uVar16 + 1;
  uVar19 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar1 = *(long *)(lVar20 + 0x40) + uVar19;
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_10412ce04;
  lVar2 = (lVar1 + (uVar12 & (uVar16 ^ 0xffffffffffffffff)) & (uVar19 ^ 0xffffffffffffffff)) +
          *(long *)(lVar15 + 0x40);
  uVar17 = (uint)lVar2;
  uVar6 = uVar17 << 3;
  if (uVar17 < 4) {
    uVar11 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f)) + 1;
    if (uVar11 < 0x100) {
      if (uVar11 < 2) goto LAB_10412ce04;
      goto LAB_10412cd94;
    }
    if (uVar11 >> 0x10 == 0) {
      uVar11 = (uint)*(ushort *)((long)param_1 + lVar2);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + lVar2);
    }
  }
  else {
LAB_10412cd94:
    uVar11 = (uint)*(byte *)((long)param_1 + lVar2);
  }
  if (uVar11 != 0) {
    uVar4 = 0;
    if (uVar17 < 4) {
      uVar4 = uVar11 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar17 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 4;
      if (uVar17 < 4) {
        uVar13 = uVar17;
      }
      if ((int)uVar13 < 3) {
        if (uVar13 == 1) {
          uVar13 = (uint)(byte)*param_1;
        }
        else {
          uVar13 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar13 == 3) {
        uVar13 = (uint)(uint3)*param_1;
      }
      else {
        uVar13 = *param_1;
      }
    }
    return (ulong)(uVar3 + (uVar13 | uVar4) + 1);
  }
LAB_10412ce04:
  if (uVar4 < 0xfb) {
    uVar4 = 0;
    if (5 < *(byte *)((long)param_1 + uVar14)) {
      uVar4 = (*(byte *)((long)param_1 + uVar14) ^ 0xff) + 1;
    }
    return (ulong)uVar4;
  }
  uVar12 = (ulong)(uVar12 + (long)param_1) & ~uVar16;
  if (uVar13 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x30);
    lVar8 = lVar9;
    uVar10 = uVar13;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x30);
    uVar12 = lVar1 + uVar12 & ~uVar19;
  }
                    /* WARNING: Could not recover jumptable at 0x00010412ce68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12,uVar10,lVar8);
  return uVar12;
}



/* Entry: 10412ced4; end: 10412d283;  */

void FUN_10412ced4(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  byte bVar19;
  ulong uVar20;
  long lVar21;
  
  uVar20 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(long *)(param_4 + 0x10),PTR___sSciTL_11034fea8,
             PTR___s7ElementSciTl_11034fb58);
  puVar6 = PTR___ss5ClockTL_110350028;
  lVar21 = *(long *)(lVar7 + -8);
  bVar19 = *(byte *)(lVar21 + 0x50);
  uVar18 = *(undefined8 *)(param_4 + 0x28);
  lVar7 = *(long *)(param_4 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar7,PTR___ss5ClockTL_110350028,PTR___s7Instants5ClockPTl_11034fb68);
  lVar8 = *(long *)(lVar8 + -8);
  uVar11 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  uVar13 = (ulong)(*(uint *)(lVar8 + 0x50) & 0xff | (uint)bVar19);
  uVar11 = (*(long *)(lVar21 + 0x40) + uVar11 & (uVar11 ^ 0xffffffffffffffff)) +
           *(long *)(lVar8 + 0x40) + (uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff));
  uVar13 = uVar11;
  if (*(int *)(lVar8 + 0x54) == 0 && *(int *)(lVar21 + 0x54) == 0) {
    uVar13 = uVar11 + 1;
  }
  if (uVar13 <= uVar20) {
    uVar13 = uVar20;
  }
  if (uVar13 <= uVar11) {
    uVar13 = uVar11;
  }
  if (uVar13 < 0x19) {
    uVar13 = 0x18;
  }
  lVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar18,lVar7,puVar6,PTR___s8Durations5ClockPTl_11034fb70);
  lVar21 = *(long *)(lVar8 + -8);
  uVar10 = *(uint *)(lVar21 + 0x54);
  lVar12 = *(long *)(lVar7 + -8);
  uVar9 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar10;
  if (uVar10 <= uVar9) {
    uVar3 = uVar9;
  }
  uVar4 = uVar3;
  if (uVar3 < 0xfb) {
    uVar4 = 0xfa;
  }
  uVar14 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar11 = uVar13 + uVar14 + 1;
  uVar20 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar1 = *(long *)(lVar21 + 0x40) + uVar20;
  lVar2 = (lVar1 + (uVar11 & (uVar14 ^ 0xffffffffffffffff)) & (uVar20 ^ 0xffffffffffffffff)) +
          *(long *)(lVar12 + 0x40);
  uVar17 = (uint)lVar2;
  if (param_3 < uVar4 || param_3 - uVar4 == 0) {
    bVar19 = 0;
  }
  else if (uVar17 < 4) {
    uVar15 = ((param_3 - uVar4) + ~(-1 << (ulong)(uVar17 << 3 & 0x1f)) >>
             (ulong)(uVar17 << 3 & 0x1f)) + 1;
    bVar19 = 2;
    if (0xffff < uVar15) {
      bVar19 = 4;
    }
    if (uVar15 < 0x100) {
      bVar19 = 1 < uVar15;
    }
  }
  else {
    bVar19 = 1;
  }
  uVar15 = (uint)param_2;
  if (uVar4 < uVar15) {
    uVar15 = uVar15 + ~uVar4;
    if (uVar17 < 4) {
      iVar16 = (uVar15 >> (ulong)(uVar17 << 3 & 0x1f)) + 1;
      if (uVar17 != 0) {
        uVar3 = uVar15 & (-1 << (ulong)(uVar17 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar17 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar17 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar15;
        }
      }
    }
    else {
      _bzero(param_1,lVar2);
      *param_1 = uVar15;
      iVar16 = 1;
    }
    if (bVar19 < 2) {
      if (bVar19 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar16;
      }
    }
    else if (bVar19 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar16;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar16;
    }
  }
  else {
    if (bVar19 < 2) {
      if (bVar19 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar19 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar15 != 0) {
      if (0xfa < uVar3) {
        uVar11 = uVar11 + (long)param_1 & ~uVar14;
        if (uVar10 == uVar4) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
          lVar7 = lVar8;
          uVar9 = uVar10;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
          uVar11 = lVar1 + uVar11 & ~uVar20;
        }
                    /* WARNING: Could not recover jumptable at 0x00010412d1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar11,param_2,uVar9,lVar7);
        return;
      }
      if (uVar15 < 0xfb) {
        *(char *)((long)param_1 + uVar13) = -(char)param_2;
      }
      else {
        uVar3 = (int)uVar13 + 1;
        uVar10 = 0xffffffff;
        if (uVar3 < 4) {
          uVar10 = ~(-1 << (ulong)(uVar3 * 8 & 0x1f));
        }
        if (uVar3 != 0) {
          uVar10 = uVar10 & uVar15 - 0xfb;
          uVar9 = 4;
          if (uVar3 < 4) {
            uVar9 = uVar3;
          }
          _bzero(param_1);
          if ((int)uVar9 < 3) {
            if (uVar9 == 1) {
              *(char *)param_1 = (char)uVar10;
            }
            else {
              *(short *)param_1 = (short)uVar10;
            }
          }
          else if (uVar9 == 3) {
            *(short *)param_1 = (short)uVar10;
            *(char *)((long)param_1 + 2) = (char)(uVar10 >> 0x10);
          }
          else {
            *param_1 = uVar10;
          }
        }
      }
    }
  }
  return;
}


