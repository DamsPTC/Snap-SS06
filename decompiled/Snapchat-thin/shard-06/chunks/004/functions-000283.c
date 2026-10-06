/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048937fc; end: 10489394b;  */

void FUN_1048937fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x10))(uVar9,*(undefined8 *)(unaff_x22 + 200),uVar1);
  _swift_getEnumCaseMultiPayload(uVar9,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar5 = *(long *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  if ((int)uVar9 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar8 = *(long *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    (**(code **)(lVar8 + 0x20))(uVar7,uVar1,uVar3);
    (**(code **)(lVar8 + 0x10))(uVar9,uVar7,uVar3);
    func_0x0001031ade78(uVar9,uVar3,uVar6);
    (**(code **)(lVar8 + 8))(uVar7,uVar3);
    (**(code **)(lVar5 + 8))(uVar4,uVar2);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(lVar5 + 8))(uVar4,uVar2);
    (**(code **)(*(long *)(lVar8 + -8) + 0x20))(uVar9,uVar1,lVar8);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000104893948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10489394c; end: 1048939b7;  */

void FUN_10489394c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  lVar3 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1048939b8,0,0);
  return;
}



/* Entry: 1048939b8; end: 104893a33;  */

void FUN_1048939b8(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x22 + 0x30);
  uVar4 = **(undefined8 **)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104893a34;
                    /* WARNING: Could not recover jumptable at 0x000104893a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar3,*(undefined8 *)(unaff_x22 + 0x20),(undefined8 *)(unaff_x22 + 0x10),
             *(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 104893a34; end: 104893ae7;  */

void FUN_104893a34(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x104893a8c;
  }
  else {
    pcVar1 = FUN_104893ae8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104893ae8; end: 104893c33;  */

void FUN_104893ae8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  code *pcVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  pcVar8 = *(code **)(*(long *)(unaff_x22 + 0x60) + 0x20);
  (*pcVar8)(lVar3,*(undefined8 *)(unaff_x22 + 0x70),uVar7);
  __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(lVar3,uVar7,uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  if (lVar3 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar3 = lVar4;
    _swift_allocError(lVar4,uVar7,0,0);
    (*pcVar8)(uVar7,uVar5,lVar4);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar5);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = 0;
  __ss6ResultOMa(0,*(undefined8 *)(unaff_x22 + 0x40),uVar7,uVar1);
  __sScG9cancelAllyyF(uVar6,uVar5);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  _swift_dynamicCast(uVar9,(long *)(unaff_x22 + 0x18),uVar5,uVar7,7);
  uVar5 = 0;
  __ss6ResultOMa(0,uVar2,uVar7,uVar1);
  _swift_storeEnumTagMultiPayload(uVar9,uVar5,1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000104893c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104893c34; end: 104893d7b;  */

void FUN_104893c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x104894e7c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar2 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x104894e74;
                    /* WARNING: Could not recover jumptable at 0x000104893d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104894910(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 104893d7c; end: 104893e03;  */

void FUN_104893d7c(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  plVar2 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104893e04;
  plVar2[4] = param_7;
  plVar2[5] = param_8;
  plVar2[2] = param_1;
  plVar2[3] = param_6;
  lVar6 = *(long *)(param_7 + -8);
  plVar2[6] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3,param_4,param_5);
  plVar2[7] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[8] = uVar4;
  iVar1 = *param_4;
  plVar5 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  plVar2[9] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)FUN_104893eec;
                    /* WARNING: Could not recover jumptable at 0x000104893ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar5,param_1,uVar3);
  return;
}



/* Entry: 104893e04; end: 104893e3f;  */

void FUN_104893e04(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104893e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104893e40; end: 104893eeb;  */

void FUN_104893e40(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  lVar5 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  iVar1 = *param_2;
  plVar4 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_104893eec;
                    /* WARNING: Could not recover jumptable at 0x000104893ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar4,param_1,uVar2);
  return;
}



/* Entry: 104893eec; end: 104893f43;  */

void FUN_104893eec(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104893f44;
  }
  else {
    pcVar1 = FUN_104893fa8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104893f44; end: 104893fa7;  */

void FUN_104893f44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = 0;
  __ss6ResultOMa(0,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                 *(undefined8 *)(unaff_x22 + 0x28));
  _swift_storeEnumTagMultiPayload(uVar2,uVar4,0);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104893fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104893fa8; end: 10489403b;  */

void FUN_104893fa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  code *pcVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar5 = *(code **)(*(long *)(unaff_x22 + 0x30) + 0x20);
  (*pcVar5)(uVar1,*(undefined8 *)(unaff_x22 + 0x38),uVar3);
  (*pcVar5)(uVar4,uVar1,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = 0;
  __ss6ResultOMa(0,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                 *(undefined8 *)(unaff_x22 + 0x28));
  _swift_storeEnumTagMultiPayload(uVar3,uVar2,1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104894038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10489403c; end: 1048941e3;  */

void FUN_10489403c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_a0 + -extraout_x8;
  func_0x0001000abe04(param_1,puVar5);
  lVar1 = 0;
  __sScPMa();
  lVar9 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar9 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar5);
    uVar7 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar9 + 8))(puVar5,lVar1);
    uVar7 = (ulong)puVar2 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x18);
    lVar9 = lVar1;
    _swift_getObjectType();
    _swift_unknownObjectRetain(lVar1);
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  uVar6 = *unaff_x20;
  puVar3 = &UNK_1107ad358;
  _swift_allocObject(&UNK_1107ad358,0x28,7);
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(long *)(puVar3 + 0x20) = param_3;
  puStack_90 = (undefined8 *)0x0;
  if (lVar8 != 0 || lVar9 != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = &uStack_80;
    lStack_70 = lVar9;
    lStack_68 = lVar8;
  }
  uStack_98 = 1;
  uStack_88 = uVar6;
  _swift_task_create(uVar7,&uStack_98,uVar4,&UNK_10dd3d320,puVar3);
  _swift_release();
  return;
}



/* Entry: 1048941e4; end: 1048942f7;  */

void FUN_1048941e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar6 = *(long *)(param_4 + 0x18);
  *(long *)(unaff_x22 + 0x30) = lVar6;
  lVar5 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar4,lVar6,*(undefined8 *)(param_4 + 0x20));
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  lVar5 = 0;
  __sSqMa(0,uVar2);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  uVar4 = 0;
  __sScGMa(0,uVar2);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1048942f8;
                    /* WARNING: Could not recover jumptable at 0x0001048942f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10489445c(uVar1,param_2,param_3,uVar4);
  return;
}



/* Entry: 1048942f8; end: 10489436b;  */

void FUN_1048942f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  lVar3 = *(long *)(lVar4 + 0x18);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  if (lVar3 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    uVar1 = *(undefined8 *)(lVar4 + 0x20);
    _swift_getObjectType(uVar2);
    __sScA15unownedExecutorScevgTj();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10489436c,uVar2,uVar1);
  return;
}



/* Entry: 10489436c; end: 10489445b;  */

/* WARNING: Removing unreachable block (ram,0x0001048943dc) */

void FUN_10489436c(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  uVar2 = uVar4;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar4,1,lVar3);
  bVar1 = (int)uVar2 != 1;
  if (bVar1) {
    func_0x0001031acf04(*(undefined8 *)(unaff_x22 + 0x10),lVar3,*(undefined8 *)(unaff_x22 + 0x40));
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x58));
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x48) + -8) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),!bVar1,1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000104894458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10489445c; end: 10489454f;  */

void FUN_10489445c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScG4next9isolationxSgScA_pSgYi_tYaFTu_11034fbf0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_104894550;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG4next9isolationxSgScA_pSgYi_tYaF_11034fbe8)
              (plVar2,param_1,param_2,param_3,param_4);
    return;
  }
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x104894e78;
                    /* WARNING: Could not recover jumptable at 0x00010489454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_104894af4(plVar2,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104894550; end: 10489458b;  */

void FUN_104894550(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000104894588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10489458c; end: 104894627;  */

void FUN_10489458c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  lVar7 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar4;
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104894628;
  plVar5[2] = uVar4;
  lVar8 = *(long *)(param_2 + 0x18);
  plVar5[3] = lVar8;
  lVar7 = *(long *)(lVar8 + -8);
  plVar5[4] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[5] = uVar4;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  plVar5[6] = (long)plVar1;
  lVar7 = 0;
  func_0x000104894860(0,*(undefined8 *)(param_2 + 0x10),lVar8,*(undefined8 *)(param_2 + 0x20));
  *plVar1 = (long)plVar5;
  plVar1[1] = (long)FUN_104893558;
  plVar1[4] = 0;
  plVar1[5] = uVar4;
  plVar1[2] = param_1;
  plVar1[3] = 0;
  lVar9 = *(long *)(lVar7 + 0x18);
  plVar1[6] = lVar9;
  lVar8 = *(long *)(lVar9 + -8);
  plVar1[7] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[8] = uVar4;
  lVar6 = *(long *)(lVar7 + 0x10);
  plVar1[9] = lVar6;
  lVar8 = 0xff;
  __ss6ResultOMa(0xff,lVar6,lVar9,*(undefined8 *)(lVar7 + 0x20));
  plVar1[10] = lVar8;
  lVar7 = 0;
  __sSqMa(0,lVar8);
  plVar1[0xb] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar1[0xc] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xd] = uVar4;
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  plVar1[0xe] = (long)plVar5;
  uVar2 = 0;
  __sScGMa(0,lVar8);
  *plVar5 = (long)plVar1;
  plVar5[1] = (long)FUN_1048942f8;
                    /* WARNING: Could not recover jumptable at 0x0001048942f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10489445c(uVar4,0,0,uVar2);
  return;
}



/* Entry: 104894628; end: 10489471f;  */

void FUN_104894628(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar7 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x38));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    lVar1 = *(long *)(lVar7 + 0x28);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + 0x20) + 0x20);
    (*UNRECOVERED_JUMPTABLE)(lVar1,*(undefined8 *)(lVar7 + 0x30),uVar2);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(lVar1,uVar2,uVar4);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    if (lVar1 == 0) {
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
      _swift_allocError(uVar6,uVar4,0,0);
      (*UNRECOVERED_JUMPTABLE)(uVar4,uVar2,uVar6);
    }
    else {
      (**(code **)(*(long *)(lVar7 + 0x20) + 8))(uVar2,*(undefined8 *)(lVar7 + 0x18));
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010489471c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104894720; end: 1048947db;  */

void FUN_104894720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar3 = *(long *)(param_5 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_11034fc58
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1048947dc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_11034fc50)
            (plVar2,param_1,param_2,param_3,param_5,param_6,uVar1);
  return;
}



/* Entry: 1048947dc; end: 10489484b;  */

void FUN_1048947dc(void)

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
                    /* WARNING: Could not recover jumptable at 0x000104894848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10489484c; end: 10489486b;  */

void FUN_10489484c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10489486c; end: 1048948cf;  */

void FUN_10489486c(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1048948d0;
                    /* WARNING: Could not recover jumptable at 0x0001048948cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1048948d0; end: 10489490f;  */

void FUN_1048948d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010489490c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104894910; end: 10489497f;  */

void FUN_104894910(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_7;
  *(undefined8 *)(unaff_x22 + 0x130) = param_8;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  if (param_4 == 0) {
    param_4 = 0;
    param_5 = 0;
  }
  else {
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
  }
  *(long *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104894980,param_4);
  return;
}



/* Entry: 104894980; end: 104894a07;  */

void FUN_104894980(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  piVar4 = *(int **)(unaff_x22 + 0x120);
  _swift_taskGroup_initialize(unaff_x22 + 0x10,uVar5);
  lVar2 = unaff_x22 + 0x10;
  __sScG5groupScGyxGBp_tcfC(lVar2,uVar5);
  *(long *)(unaff_x22 + 0x110) = lVar2;
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104894a08;
                    /* WARNING: Could not recover jumptable at 0x000104894a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar3,*(undefined8 *)(unaff_x22 + 0x118),unaff_x22 + 0x110);
  return;
}



/* Entry: 104894a08; end: 104894a7f;  */

void FUN_104894a08(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x130);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x148));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x150) = plVar1;
  __sScGMa(0,uVar3);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_104894a80;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 104894a80; end: 104894af3;  */

void FUN_104894a80(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x104894ac4,*(undefined8 *)(lVar1 + 0x138),*(undefined8 *)(lVar1 + 0x140));
  return;
}



/* Entry: 104894af4; end: 104894b5b;  */

void FUN_104894af4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
  }
  *(long *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104894b5c,param_2);
  return;
}



/* Entry: 104894b5c; end: 104894baf;  */

void FUN_104894b5c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (*(undefined8 *)(unaff_x22 + 0x38),**(undefined8 **)(unaff_x22 + 0x40),0x104894b74,
             unaff_x22 + 0x10);
  return;
}



/* Entry: 104894bb0; end: 104894c43;  */

void FUN_104894bb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  plVar8 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_104894c44;
  plVar8[10] = lVar1;
  plVar8[0xb] = lVar4;
  plVar8[8] = lVar9;
  plVar8[9] = lVar3;
  plVar8[6] = lVar2;
  plVar8[7] = lVar5;
  plVar8[4] = param_1;
  plVar8[5] = param_2;
  lVar9 = *(long *)(lVar1 + -8);
  plVar8[0xc] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xd] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xe] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1048939b8,0,0);
  return;
}



/* Entry: 104894c44; end: 104894c7f;  */

void FUN_104894c44(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104894c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104894c80; end: 104894d13;  */

void FUN_104894c80(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x22;
  
  lVar11 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  piVar6 = *(int **)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x104894e80;
  plVar7 = (long *)0x50;
  _swift_task_alloc(0x50,uVar2,uVar5);
  plVar10[2] = (long)plVar7;
  *plVar7 = (long)plVar10;
  plVar7[1] = (long)FUN_104893e04;
  plVar7[4] = lVar4;
  plVar7[5] = lVar3;
  plVar7[2] = param_1;
  plVar7[3] = lVar11;
  lVar11 = *(long *)(lVar4 + -8);
  plVar7[6] = lVar11;
  uVar9 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8,piVar6,uVar12);
  plVar7[7] = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[8] = uVar9;
  iVar1 = *piVar6;
  plVar10 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  plVar7[9] = (long)plVar10;
  *plVar10 = (long)plVar7;
  plVar10[1] = (long)FUN_104893eec;
                    /* WARNING: Could not recover jumptable at 0x000104893ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar10,param_1,uVar8);
  return;
}



/* Entry: 104894d14; end: 104894d93;  */

void FUN_104894d14(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  piVar3 = *(int **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104894d94;
  iVar1 = *piVar3;
  plVar4 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc(plVar4,(code *)((long)iVar1 + (long)piVar3),uVar6,uVar2);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1048948d0;
                    /* WARNING: Could not recover jumptable at 0x0001048948cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar4,param_1);
  return;
}



/* Entry: 104894d94; end: 104894dcf;  */

void FUN_104894d94(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104894dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104894dd0; end: 104894e83;  */

uint FUN_104894dd0(long *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 2;
  }
  return (uint)(*param_1 == 0);
}



/* Entry: 104894e84; end: 104894f23;  */

void FUN_104894e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104894f24;
                    /* WARNING: Could not recover jumptable at 0x000104894f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_104167d8c)(plVar1,param_1,param_2,param_3,param_6,param_7,param_8);
  return;
}



/* Entry: 104894f24; end: 104894f93;  */

void FUN_104894f24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104894f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104894f94; end: 104895033;  */

void FUN_104894f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104895034;
                    /* WARNING: Could not recover jumptable at 0x000104895030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_1041506d4)(plVar1,param_1,param_2,param_3,param_6,param_7,param_8);
  return;
}



/* Entry: 104895034; end: 10489506f;  */

void FUN_104895034(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010489506c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104895070; end: 1048950bb;  */

void FUN_104895070(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
  }
                    /* WARNING: Could not recover jumptable at 0x0001048950b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1048950bc; end: 10489512f;  */

void FUN_1048950bc(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104895130; end: 1048952ef;  */

void FUN_104895130(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar2 = 0x113097380;
  func_0x0001000285a8(0x113097380,&UNK_10dd3d460);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0x1130971c8;
  func_0x0001000285a8(0x1130971c8,&UNK_10dd3d3b0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001048964d4(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000104896454(lVar5,0x113097380,&UNK_10dd3d460);
    FUN_1048957e0(puVar4,param_2);
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    func_0x000104896454(puVar4,0x113097380,&UNK_10dd3d460);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5 - extraout_x8_00,lVar5,lVar2);
    uVar3 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uStack_58 = *unaff_x20;
    FUN_104895924(lVar5 - extraout_x8_00,param_2,uVar3);
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 1048952f0; end: 104895307;  */

void FUN_1048952f0(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104895308,0,0);
  return;
}



/* Entry: 104895308; end: 10489541b;  */

void FUN_104895308(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = uRam00000001130971d0;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10489535c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(uVar1);
  return;
}



/* Entry: 10489541c; end: 1048955b7;  */

void FUN_10489541c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x113097380;
  func_0x0001000285a8(0x113097380,&UNK_10dd3d460);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010c09faa0(uVar6);
  _swift_beginAccess(unaff_x20 + 0x48,auStack_68,0x21,0);
  FUN_1048957e0(lVar4,param_1);
  _swift_endAccess(auStack_68);
  func_0x00010c280b40(uVar6);
  func_0x000104896524(lVar4,puVar3,0x113097380,&UNK_10dd3d460);
  lVar1 = 0x1130971c8;
  func_0x0001000285a8(0x1130971c8,&UNK_10dd3d3b0);
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000104896454(lVar4,0x113097380,&UNK_10dd3d460);
    func_0x000104896454(puVar3,0x113097380,&UNK_10dd3d460);
  }
  else {
    auStack_68[0] = 0;
    __sScC6resume9returningyxn_tF(auStack_68,lVar1);
    func_0x000104896454(lVar4,0x113097380,&UNK_10dd3d460);
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
  }
  return;
}



/* Entry: 1048955b8; end: 10489562f;  */

void FUN_1048955b8(long param_1,long param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x20;
  long *plVar3;
  long unaff_x22;
  
  plVar3 = (long *)*unaff_x20;
  plVar2 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104895630;
  plVar2[0xc] = param_4;
  plVar2[0xd] = (long)plVar3;
  *(undefined1 *)(plVar2 + 0x10) = param_3;
  plVar2[10] = param_1;
  plVar2[0xb] = param_2;
  plVar1 = (long *)0x130;
  func_0x000107c615b8();
  plVar2[0xe] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)&UNK_1000afc54;
  plVar1[0x1c] = param_2;
  plVar1[0x1d] = (long)plVar3;
  *(undefined1 *)((long)plVar1 + 0x129) = param_3;
  plVar1[0x1b] = param_1;
  plVar1[0x1e] = *plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000acd38,0,0);
  return;
}



/* Entry: 104895630; end: 10489566b;  */

void FUN_104895630(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104895668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10489566c; end: 1048956a7; -[SCWorkSchedulerBootstrap init] */

void FUN_10489566c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048956a8; end: 10489571b;  */

void FUN_1048956a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10489571c; end: 1048957df;  */

void FUN_10489571c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0x1130971c8;
  func_0x0001000285a8(0x1130971c8,&UNK_10dd3d3b0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_3,lVar2);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048957e0);
  (*pcVar1)();
}



/* Entry: 1048957e0; end: 104895923;  */

void FUN_1048957e0(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  func_0x0001000c8928(param_2);
  _swift_bridgeObjectRelease(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0x1130971c8;
    func_0x0001000285a8(0x1130971c8,&UNK_10dd3d3b0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000104895ab8();
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar4 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_2,lVar4);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0x1130971c8;
    func_0x0001000285a8(0x1130971c8,&UNK_10dd3d3b0);
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    func_0x0001048960fc(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000104895910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 104895924; end: 104896387;  */

void FUN_104895924(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar4 = param_2;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar3 = param_2;
  func_0x0001000c8928(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104895a54);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    func_0x000104895d44();
    uVar3 = param_2;
    func_0x0001000c8928(param_2);
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104895ab8);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    func_0x000104895ab8();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    lVar2 = 0x1130971c8;
    func_0x0001000285a8(0x1130971c8,&UNK_10dd3d3b0);
                    /* WARNING: Could not recover jumptable at 0x000104895a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * uVar3,param_1,lVar2);
    return;
  }
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_10489571c(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar5);
  return;
}



/* Entry: 104896388; end: 1048963a7;  */

void FUN_104896388(void)

{
  _objc_opt_self(&PTR_PTR_1129df378);
  return;
}



/* Entry: 1048963a8; end: 104896417;  */

void FUN_1048963a8(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104896418;
  plVar2[5] = lVar1;
  plVar2[6] = unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104895308,0,0);
  return;
}



/* Entry: 104896418; end: 104896453;  */

void FUN_104896418(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104896450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104896454; end: 10489656b;  */

undefined8 FUN_104896454(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10489656c; end: 104896577;  */

void FUN_10489656c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_10489541c(*(undefined8 *)(unaff_x22 + 0x30));
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000104895418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104896578; end: 104896617;  */

void FUN_104896578(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104896618; end: 10489670f;  */

void FUN_104896618(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 104896710; end: 10489679f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104896710(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  func_0x0001000d7920(param_1,unaff_x20 + _DAT_1130975b0);
  func_0x0001000d7920(param_2,unaff_x20 + _DAT_1130975b8);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1048967a0; end: 1048967ff; -[_TtC21WorkSchedulerServices21WorkSchedulerServices init] */

void FUN_1048967a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WorkSchedulerServices.WorkSchedulerServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048967cc);
  (*pcVar1)();
}



/* Entry: 104896800; end: 104896837; -[_TtC21WorkSchedulerServices21WorkSchedulerServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010489681c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104896820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104896800(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_1130975b0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130975b0));
  return;
}



/* Entry: 104896838; end: 104896857;  */

void FUN_104896838(byte param_1)

{
  FUN_104896858();
  bRam0000000113815528 = param_1 & 1;
  return;
}



/* Entry: 104896858; end: 1048969bb;  */

uint FUN_104896858(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar6 - extraout_x12;
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_opt_self();
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf063a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,puVar3);
    _objc_release(puVar3);
    lVar4 = lVar8;
    (**(code **)(lVar9 + 0x20))(lVar8,lVar6,lVar1);
    __s10Foundation3URLV14absoluteStringSSvg();
    uStack_60 = 0x52786f62646e6173;
    uStack_58 = 0xee00747069656365;
    lStack_50 = lVar4;
    lStack_48 = lVar6;
    func_0x000100e8b654();
    puVar5 = &uStack_60;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar4,lVar4);
    uVar7 = (uint)puVar5;
    _swift_bridgeObjectRelease(lVar6);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
  }
  return uVar7 & 1;
}



/* Entry: 1048969bc; end: 1048969fb;  */

undefined8 FUN_1048969bc(void)

{
  if (lRam000000011368aea0 != -1) {
    _swift_once(0x11368aea0,FUN_104896838);
  }
  return 0x113815528;
}



/* Entry: 1048969fc; end: 104896acb;  */

long FUN_1048969fc(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(unaff_x20 + 0x10) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11a0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  *puVar1 = 0;
  return unaff_x20;
}



/* Entry: 104896acc; end: 104896b2f;  */

void FUN_104896acc(code *param_1)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  _os_unfair_lock_trylock();
  if (iVar1 != 0) {
    (*param_1)();
    _os_unfair_lock_unlock(*(undefined8 *)(unaff_x20 + 0x10));
  }
  return;
}



/* Entry: 104896b30; end: 104896b43;  */

void FUN_104896b30(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107ad808;
  if (lRam0000000113097688 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113097688 = param_1;
  }
  return;
}



/* Entry: 104896b44; end: 104896b87;  */

void FUN_104896b44(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 104896b88; end: 104896b8f;  */

int FUN_104896b88(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[1] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104896b90; end: 104896c53;  */

void FUN_104896b90(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_58 [24];
  
  iVar1 = (int)*(undefined8 *)(unaff_x20[2] + 0x10);
  _os_unfair_lock_trylock();
  if (iVar1 == 0) {
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,1,1,param_4);
  }
  else {
    lVar2 = *(long *)(*unaff_x20 + 0x60);
    _swift_beginAccess((long)unaff_x20 + lVar2,auStack_58,0x21,0);
    (*param_2)(param_1,(long)unaff_x20 + lVar2);
    _swift_endAccess(auStack_58);
    _os_unfair_lock_unlock(*(undefined8 *)(unaff_x20[2] + 0x10));
  }
  return;
}



/* Entry: 104896c54; end: 104896c6b;  */

bool FUN_104896c54(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104896c6c; end: 104896cab;  */

void FUN_104896c6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d650;
  _swift_getWitnessTable(&UNK_10dd3d650,&UNK_1107ad990);
  puRam0000000113097710 = puVar1;
  return;
}



/* Entry: 104896cac; end: 104896d57;  */

void FUN_104896cac(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104896d58; end: 104896d8f;  */

void FUN_104896d58(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 104896d90; end: 104896ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104896d90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113097718) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104896ddc; end: 104896e33; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService initWithCriticalSectionRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104896ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113097718) = param_3;
  lVar2 = param_1;
  func_0x0001000966a4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104896e34; end: 104896e8f; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService init] */

void FUN_104896e34(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCriticalSectionRegistryService.SCCriticalSectionRegistryService",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104896e60);
  (*pcVar1)();
}



/* Entry: 104896e90; end: 104896e9f; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104896e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113097718));
  return;
}



/* Entry: 104896ea0; end: 104896eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104896ea0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113097748) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104896eec; end: 104896f43; -[_TtC21SCAttributionServices21SCAttributionServices initWithCurrentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104896eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113097748) = param_3;
  lVar2 = param_1;
  func_0x000100093164();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104896f44; end: 104896f9f; -[_TtC21SCAttributionServices21SCAttributionServices init] */

void FUN_104896f44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAttributionServices.SCAttributionServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104896f70);
  (*pcVar1)();
}



/* Entry: 104896fa0; end: 104896fb7; -[_TtC21SCAttributionServices21SCAttributionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104896fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113097748));
  return;
}



/* Entry: 104896fb8; end: 104897fe7;  */

uint FUN_104896fb8(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  int *piVar23;
  code *pcVar24;
  undefined4 *puVar25;
  int *piVar26;
  ulong uVar27;
  int *piVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dStack_150;
  ulong uStack_148;
  double adStack_140 [3];
  ulong auStack_128 [2];
  ulong uStack_118;
  ulong auStack_110 [4];
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lStack_a8 = *(long *)(lVar7 + -8);
  lStack_b0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar7 = (long)&dStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = lVar7 - extraout_x12;
  uStack_c8 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar16 - extraout_x12_00;
  lVar7 = 0x112d373d0;
  auStack_128[1] = lVar15;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  auStack_110[2] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  uVar16 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_118 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = uVar16 - extraout_x12_01;
  auStack_110[1] = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = uVar16 - extraout_x12_02;
  adStack_140[0] = (double)lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = lVar7 - extraout_x12_03;
  lVar7 = 0x112d373d8;
  auStack_110[0] = uVar16;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = uVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  adStack_140[1] = (double)lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_04;
  lStack_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = lVar7 - extraout_x12_05;
  uStack_d8 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = uVar16 - extraout_x12_06;
  auStack_128[0] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_07;
  lStack_f0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = lVar7 - extraout_x12_08;
  uStack_e8 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = uVar16 - extraout_x12_09;
  uStack_148 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = lVar7 - extraout_x12_10;
  uStack_c0 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = uVar16 - extraout_x12_11;
  uStack_b8 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = uVar16 - extraout_x12_12;
  adStack_140[2] = (double)lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = 0;
  auStack_110[3] = lVar17 - extraout_x12_14;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  piVar26 = (int *)((lVar17 - extraout_x12_14) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  piVar23 = (int *)((long)piVar26 - extraout_x12_15);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar25 = (undefined4 *)((long)piVar23 - extraout_x12_16);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  piVar28 = (int *)((long)puVar25 - extraout_x12_17);
  lVar7 = 0x113097820;
  func_0x0001000285a8(0x113097820,&UNK_10dd3d820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)piVar28 - extraout_x8_03;
  piVar1 = (int *)(lVar20 + *(int *)(lVar7 + 0x30));
  FUN_104898c4c(param_1,lVar20);
  FUN_104898c4c(param_2,piVar1);
  lStack_a0 = lVar20;
  _swift_getEnumCaseMultiPayload(lVar20,lVar15);
  lVar7 = lStack_a0;
  iVar6 = (int)lVar20;
  if (1 < iVar6) {
    if (iVar6 == 2) {
      FUN_104898c4c(lStack_a0,piVar23);
      uVar21 = *(undefined8 *)(piVar23 + 2);
      dVar29 = *(double *)(piVar23 + 4);
      lVar20 = 0x11305f568;
      func_0x0001000285a8(0x11305f568,&UNK_10dd3d7c0);
      iVar6 = *(int *)(lVar20 + 0x50);
      lVar20 = (long)piVar23 + (long)iVar6;
      piVar26 = piVar1;
      _swift_getEnumCaseMultiPayload(piVar1,lVar15);
      uVar16 = uStack_e8;
      if ((int)piVar26 != 2) goto LAB_10489790c;
      iVar5 = *piVar23;
      iVar2 = *piVar1;
      uVar18 = *(undefined8 *)(piVar1 + 2);
      dVar30 = *(double *)(piVar1 + 4);
      func_0x0001003a4c00(lVar20,uStack_e8);
      lVar15 = lStack_f0;
      func_0x0001003a4c00((long)piVar1 + (long)iVar6,lStack_f0);
      uVar27 = auStack_110[1];
      if (((iVar5 == iVar2) && ((int)uVar21 == (int)uVar18)) && (dVar29 == dVar30)) {
        lVar20 = (long)*(int *)(auStack_110[2] + 0x30);
        func_0x0001009f0578(uVar16,auStack_110[1]);
        func_0x0001009f0578(lVar15,uVar27 + lVar20);
        lVar8 = lStack_a8;
        lVar17 = lStack_b0;
        pcVar24 = *(code **)(lStack_a8 + 0x30);
        uVar9 = uVar27;
        (*pcVar24)(uVar27,1,lStack_b0);
        if ((int)uVar9 != 1) {
          lVar10 = -0x18;
          goto LAB_104897b88;
        }
LAB_104897850:
        func_0x000104898c90(lVar15,0x112d373d8,&UNK_10d9014c0);
        func_0x000104898c90(uVar16,0x112d373d8,&UNK_10d9014c0);
        lVar20 = uVar27 + lVar20;
        (*pcVar24)(lVar20,1,lVar17);
        if ((int)lVar20 == 1) {
          func_0x000104898c90(uVar27,0x112d373d8,&UNK_10d9014c0);
          goto LAB_104897cb0;
        }
        goto LAB_104897bf0;
      }
LAB_1048978b4:
      uVar27 = uVar16;
      uVar21 = 0x112d373d8;
      puVar13 = &UNK_10d9014c0;
      func_0x000104898c90(lVar15,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      FUN_104898c4c(lStack_a0,piVar26);
      uVar21 = *(undefined8 *)(piVar26 + 2);
      dVar30 = *(double *)(piVar26 + 4);
      dVar29 = *(double *)(piVar26 + 6);
      lVar20 = 0x11305f558;
      func_0x0001000285a8(0x11305f558,&UNK_10dcd48f0);
      iVar6 = *(int *)(lVar20 + 0x60);
      lVar20 = (long)piVar26 + (long)iVar6;
      piVar23 = piVar1;
      _swift_getEnumCaseMultiPayload(piVar1,lVar15);
      uVar16 = uStack_d8;
      if ((int)piVar23 != 3) goto LAB_10489790c;
      iVar5 = *piVar26;
      iVar2 = *piVar1;
      uVar18 = *(undefined8 *)(piVar1 + 2);
      dVar31 = *(double *)(piVar1 + 4);
      dVar32 = *(double *)(piVar1 + 6);
      func_0x0001003a4c00(lVar20,uStack_d8);
      lVar15 = lStack_e0;
      func_0x0001003a4c00((long)piVar1 + (long)iVar6,lStack_e0);
      uVar27 = uStack_118;
      if ((((iVar5 != iVar2) || ((int)uVar21 != (int)uVar18)) || (dVar30 != dVar31)) ||
         (dVar29 != dVar32)) goto LAB_1048978b4;
      lVar20 = (long)*(int *)(auStack_110[2] + 0x30);
      func_0x0001009f0578(uVar16,uStack_118);
      func_0x0001009f0578(lVar15,uVar27 + lVar20);
      lVar8 = lStack_a8;
      lVar17 = lStack_b0;
      pcVar24 = *(code **)(lStack_a8 + 0x30);
      uVar9 = uVar27;
      (*pcVar24)(uVar27,1,lStack_b0);
      if ((int)uVar9 == 1) goto LAB_104897850;
      lVar10 = -0x28;
LAB_104897b88:
      uVar21 = *(undefined8 *)((long)auStack_110 + lVar10);
      func_0x0001009f0578(uVar27,uVar21);
      lVar10 = uVar27 + lVar20;
      (*pcVar24)(lVar10,1,lVar17);
      uVar9 = auStack_128[1];
      if ((int)lVar10 != 1) {
        uVar11 = auStack_128[1];
        (**(code **)(lVar8 + 0x20))(auStack_128[1],uVar27 + lVar20,lVar17);
        func_0x000100df4c40();
        uVar18 = uVar21;
        __sSQ2eeoiySbx_xtFZTj(uVar21,uVar9,lVar17,uVar11);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uVar18);
        pcVar24 = *(code **)(lVar8 + 8);
        (*pcVar24)(uVar9,lVar17);
        func_0x000104898c90(lVar15,0x112d373d8,&UNK_10d9014c0);
        func_0x000104898c90(uVar16,0x112d373d8,&UNK_10d9014c0);
        (*pcVar24)(uVar21,lVar17);
        func_0x000104898c90(uVar27,0x112d373d8,&UNK_10d9014c0);
        if ((uStack_b8 & 1) != 0) {
LAB_104897cb0:
          func_0x0001013d38bc(lVar7);
          return 1;
        }
        goto LAB_1048978e4;
      }
      func_0x000104898c90(lVar15,0x112d373d8,&UNK_10d9014c0);
      func_0x000104898c90(uVar16,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar8 + 8))(uVar21,lVar17);
LAB_104897bf0:
      uVar21 = 0x112d373d0;
      puVar13 = &UNK_10d90f8f0;
    }
    func_0x000104898c90(uVar27,uVar21,puVar13);
LAB_1048978e4:
    func_0x0001013d38bc(lVar7);
    return 0;
  }
  if (iVar6 == 0) {
    FUN_104898c4c(lStack_a0,piVar28);
    uVar21 = *(undefined8 *)(piVar28 + 2);
    dVar29 = *(double *)(piVar28 + 4);
    lVar8 = 0x112d7af10;
    func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
    iVar6 = *(int *)(lVar8 + 0x50);
    lVar20 = (long)piVar28 + (long)iVar6;
    iVar5 = *(int *)(lVar8 + 0x60);
    bVar4 = *(byte *)((long)piVar28 + (long)iVar5);
    piVar23 = piVar1;
    _swift_getEnumCaseMultiPayload(piVar1,lVar15);
    uVar16 = auStack_110[3];
    if ((int)piVar23 != 0) {
LAB_10489790c:
      func_0x000104898c90(lVar20,0x112d373d8,&UNK_10d9014c0);
      func_0x000104898c90(lVar7,0x113097820,&UNK_10dd3d820);
      return 0;
    }
    uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)bVar4);
    iVar2 = *piVar28;
    iVar3 = *piVar1;
    uVar18 = *(undefined8 *)(piVar1 + 2);
    dVar30 = *(double *)(piVar1 + 4);
    bVar4 = *(byte *)((long)piVar1 + (long)iVar5);
    func_0x0001003a4c00(lVar20,auStack_110[3]);
    func_0x0001003a4c00((long)piVar1 + (long)iVar6,lVar17);
    lVar8 = lStack_a0;
    uVar27 = auStack_110[0];
    if (iVar2 != iVar3) {
      func_0x000104898c90(lVar17,0x112d373d8,&UNK_10d9014c0);
LAB_1048979f4:
      func_0x000104898c90(uVar16,0x112d373d8,&UNK_10d9014c0);
      func_0x0001013d38bc(lStack_a0);
      return 0;
    }
    if (((int)uVar21 == (int)uVar18) && (dVar29 == dVar30)) {
      lVar7 = (long)*(int *)(auStack_110[2] + 0x30);
      func_0x0001009f0578(uVar16,auStack_110[0]);
      func_0x0001009f0578(lVar17,uVar27 + lVar7);
      lVar20 = lStack_a8;
      lVar15 = lStack_b0;
      pcVar24 = *(code **)(lStack_a8 + 0x30);
      uVar9 = uVar27;
      (*pcVar24)(uVar27,1,lStack_b0);
      dVar29 = adStack_140[2];
      if ((int)uVar9 == 1) {
        func_0x000104898c90(lVar17,0x112d373d8,&UNK_10d9014c0);
        func_0x000104898c90(uVar16,0x112d373d8,&UNK_10d9014c0);
        lVar7 = uVar27 + lVar7;
        (*pcVar24)(lVar7,1,lVar15);
        if ((int)lVar7 != 1) goto LAB_104897b68;
        func_0x000104898c90(uVar27,0x112d373d8,&UNK_10d9014c0);
      }
      else {
        func_0x0001009f0578(uVar27,adStack_140[2]);
        lVar10 = uVar27 + lVar7;
        (*pcVar24)(lVar10,1,lVar15);
        uVar16 = auStack_128[1];
        if ((int)lVar10 == 1) {
          func_0x000104898c90(lVar17,0x112d373d8,&UNK_10d9014c0);
          func_0x000104898c90(auStack_110[3],0x112d373d8,&UNK_10d9014c0);
          (**(code **)(lVar20 + 8))(dVar29,lVar15);
LAB_104897b68:
          uVar21 = 0x112d373d0;
          puVar13 = &UNK_10d90f8f0;
          uVar16 = uVar27;
          goto LAB_104897a30;
        }
        uVar9 = auStack_128[1];
        (**(code **)(lVar20 + 0x20))(auStack_128[1],uVar27 + lVar7,lVar15);
        func_0x000100df4c40();
        dVar30 = dVar29;
        __sSQ2eeoiySbx_xtFZTj(dVar29,uVar16,lVar15,uVar9);
        uStack_c0 = CONCAT44(uStack_c0._4_4_,SUB84(dVar30,0));
        pcVar24 = *(code **)(lVar20 + 8);
        (*pcVar24)(uVar16,lVar15);
        func_0x000104898c90(lVar17,0x112d373d8,&UNK_10d9014c0);
        func_0x000104898c90(auStack_110[3],0x112d373d8,&UNK_10d9014c0);
        (*pcVar24)(dVar29,lVar15);
        func_0x000104898c90(uVar27,0x112d373d8,&UNK_10d9014c0);
        if ((uStack_c0 & 1) == 0) goto LAB_104897a34;
      }
      uVar14 = (uint)uStack_b8 ^ bVar4;
LAB_104897d78:
      func_0x0001013d38bc(lVar8);
      return uVar14 ^ 1;
    }
    uVar21 = 0x112d373d8;
    puVar13 = &UNK_10d9014c0;
    func_0x000104898c90(lVar17,0x112d373d8,&UNK_10d9014c0);
LAB_104897a30:
    func_0x000104898c90(uVar16,uVar21,puVar13);
LAB_104897a34:
    func_0x0001013d38bc(lVar8);
    return 0;
  }
  FUN_104898c4c(lStack_a0,puVar25);
  lStack_e0 = *(long *)(puVar25 + 4);
  uStack_d8 = *(ulong *)(puVar25 + 2);
  dVar32 = *(double *)(puVar25 + 6);
  dVar30 = *(double *)(puVar25 + 8);
  uVar27 = *(ulong *)(puVar25 + 10);
  lVar7 = 0x11305f560;
  func_0x0001000285a8(0x11305f560,&UNK_10dcd48f8);
  iVar6 = *(int *)(lVar7 + 0x80);
  lVar20 = (long)puVar25 + (long)iVar6;
  iVar5 = *(int *)(lVar7 + 0x90);
  dVar29 = *(double *)((long)puVar25 + (long)iVar5);
  lVar17 = (long)*(int *)(lVar7 + 0xa0);
  iVar2 = *(int *)(lVar7 + 0xb0);
  bVar4 = *(byte *)((long)puVar25 + (long)iVar2);
  piVar23 = piVar1;
  _swift_getEnumCaseMultiPayload(piVar1,lVar15);
  uVar16 = uStack_b8;
  if ((int)piVar23 != 1) {
    _swift_bridgeObjectRelease(uVar27);
    (**(code **)(lStack_a8 + 8))((long)puVar25 + lVar17,lStack_b0);
    lVar7 = lStack_a0;
    goto LAB_10489790c;
  }
  uStack_e8 = uVar27;
  auStack_110[0] = CONCAT44(auStack_110[0]._4_4_,(uint)bVar4);
  lStack_f0 = CONCAT44(lStack_f0._4_4_,*puVar25);
  iVar3 = *piVar1;
  auStack_110[3] = *(ulong *)(piVar1 + 2);
  auStack_110[1] = *(ulong *)(piVar1 + 4);
  dVar34 = *(double *)(piVar1 + 6);
  dVar33 = *(double *)(piVar1 + 8);
  uVar19 = *(ulong *)(piVar1 + 10);
  dVar31 = *(double *)((long)piVar1 + (long)iVar5);
  uStack_118 = CONCAT44(uStack_118._4_4_,(uint)*(byte *)((long)piVar1 + (long)iVar2));
  func_0x0001003a4c00(lVar20,uStack_b8);
  lVar20 = lStack_a8;
  lVar15 = lStack_b0;
  uVar9 = uStack_c8;
  pcVar24 = *(code **)(lStack_a8 + 0x20);
  (*pcVar24)(uStack_c8,(long)puVar25 + lVar17,lStack_b0);
  uVar11 = uStack_c0;
  func_0x0001003a4c00((long)piVar1 + (long)iVar6,uStack_c0);
  lVar7 = lStack_d0;
  (*pcVar24)(lStack_d0,(long)piVar1 + lVar17,lVar15);
  lVar8 = lStack_a0;
  uVar12 = uStack_b8;
  uVar27 = uStack_e8;
  if ((int)lStack_f0 != iVar3) {
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uStack_e8);
    pcVar24 = *(code **)(lVar20 + 8);
    (*pcVar24)(lVar7,lVar15);
    func_0x000104898c90(uVar11,0x112d373d8,&UNK_10d9014c0);
    (*pcVar24)(uVar9,lVar15);
    goto LAB_1048979f4;
  }
  if ((int)uStack_d8 == (int)auStack_110[3]) {
    if ((int)lStack_e0 == (int)auStack_110[1]) {
      if ((dVar32 == dVar34) && (dVar30 == dVar33)) {
        if (uStack_e8 != 0) {
          uVar16 = uStack_e8;
          if (uVar19 == 0) goto LAB_104897e14;
          func_0x00010142cfc4(uStack_e8,uVar19);
          uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)uVar16);
          _swift_bridgeObjectRelease(uVar27);
          _swift_bridgeObjectRelease(uVar19);
          if ((uStack_d8 & 1) != 0) goto LAB_104897d88;
          goto LAB_104897e18;
        }
        uVar16 = uVar19;
        if (uVar19 != 0) goto LAB_104897e14;
LAB_104897d88:
        dVar30 = adStack_140[0];
        iVar6 = *(int *)(auStack_110[2] + 0x30);
        func_0x0001009f0578(uVar12,adStack_140[0]);
        uStack_d8 = (long)iVar6;
        func_0x0001009f0578(uVar11,(long)dVar30 + (long)iVar6);
        pcVar22 = *(code **)(lVar20 + 0x30);
        dVar32 = dVar30;
        (*pcVar22)(dVar30,1,lVar15);
        uVar16 = uStack_148;
        if (SUB84(dVar32,0) == 1) {
          lVar20 = (long)dVar30 + uStack_d8;
          (*pcVar22)(lVar20,1,lVar15);
          lVar17 = lStack_a8;
          if ((int)lVar20 == 1) {
            func_0x000104898c90(dVar30,0x112d373d8,&UNK_10d9014c0);
LAB_104897f58:
            if (dVar29 == dVar31) {
              uVar16 = uVar9;
              __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar9,lVar7);
              pcVar24 = *(code **)(lVar17 + 8);
              (*pcVar24)(lVar7,lVar15);
              func_0x000104898c90(uVar11,0x112d373d8,&UNK_10d9014c0);
              (*pcVar24)(uVar9,lVar15);
              func_0x000104898c90(uVar12,0x112d373d8,&UNK_10d9014c0);
              if ((uVar16 & 1) == 0) goto LAB_104897e64;
              uVar14 = (uint)auStack_110[0] ^ (uint)uStack_118;
              goto LAB_104897d78;
            }
          }
          else {
LAB_104897eb4:
            func_0x000104898c90(dVar30,0x112d373d0,&UNK_10d90f8f0);
          }
          pcVar24 = *(code **)(lVar17 + 8);
        }
        else {
          func_0x0001009f0578(dVar30,uStack_148);
          lVar20 = (long)dVar30 + uStack_d8;
          (*pcVar22)(lVar20,1,lVar15);
          lVar17 = lStack_a8;
          uVar27 = auStack_128[1];
          if ((int)lVar20 == 1) {
            (**(code **)(lStack_a8 + 8))(uVar16,lVar15);
            goto LAB_104897eb4;
          }
          uVar11 = auStack_128[1];
          (*pcVar24)(auStack_128[1],(long)dVar30 + uStack_d8,lVar15);
          func_0x000100df4c40();
          uVar19 = uVar16;
          __sSQ2eeoiySbx_xtFZTj(uVar16,uVar27,lVar15,uVar11);
          lVar17 = lStack_a8;
          uVar11 = uStack_c0;
          uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)uVar19);
          pcVar24 = *(code **)(lStack_a8 + 8);
          (*pcVar24)(uVar27,lVar15);
          (*pcVar24)(uVar16,lVar15);
          func_0x000104898c90(dVar30,0x112d373d8,&UNK_10d9014c0);
          if ((uStack_d8 & 1) != 0) goto LAB_104897f58;
        }
      }
      else {
        _swift_bridgeObjectRelease(uVar19);
        uVar16 = uStack_e8;
LAB_104897e14:
        _swift_bridgeObjectRelease(uVar16);
LAB_104897e18:
        pcVar24 = *(code **)(lVar20 + 8);
      }
      (*pcVar24)(lVar7,lVar15);
      func_0x000104898c90(uVar11,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(uStack_e8);
      pcVar24 = *(code **)(lVar20 + 8);
      (*pcVar24)(lVar7,lVar15);
      func_0x000104898c90(uVar11,0x112d373d8,&UNK_10d9014c0);
    }
    (*pcVar24)(uVar9,lVar15);
  }
  else {
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uStack_e8);
    pcVar24 = *(code **)(lVar20 + 8);
    (*pcVar24)(lVar7,lVar15);
    func_0x000104898c90(uVar11,0x112d373d8,&UNK_10d9014c0);
    (*pcVar24)(uVar9,lVar15);
    uVar12 = uStack_b8;
  }
  func_0x000104898c90(uVar12,0x112d373d8,&UNK_10d9014c0);
LAB_104897e64:
  func_0x0001013d38bc(lVar8);
  return 0;
}



/* Entry: 104897fe8; end: 104898383;  */

long * FUN_104897fe8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar5;
    param_1[2] = param_2[2];
    iVar2 = (int)plVar3;
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        lVar5 = 0x112d7af10;
        func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
        lVar9 = (long)*(int *)(lVar5 + 0x50);
        lVar4 = 0;
        __s10Foundation4DateVMa();
        lVar10 = *(long *)(lVar4 + -8);
        lVar6 = (long)param_2 + lVar9;
        (**(code **)(lVar10 + 0x30))(lVar6,1,lVar4);
        if ((int)lVar6 == 0) {
          (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
          (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
        }
        else {
          lVar6 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
                  *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
        }
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x60));
        uVar7 = 0;
      }
      else {
        lVar5 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar5;
        param_1[5] = param_2[5];
        _swift_bridgeObjectRetain();
        lVar5 = 0x11305f560;
        func_0x0001000285a8(0x11305f560,&UNK_10dcd48f8);
        lVar9 = (long)*(int *)(lVar5 + 0x80);
        lVar4 = 0;
        __s10Foundation4DateVMa();
        lVar10 = *(long *)(lVar4 + -8);
        lVar6 = (long)param_2 + lVar9;
        (**(code **)(lVar10 + 0x30))(lVar6,1,lVar4);
        if ((int)lVar6 == 0) {
          pcVar11 = *(code **)(lVar10 + 0x10);
          (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
          (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
        }
        else {
          lVar6 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
                  *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
          pcVar11 = *(code **)(lVar10 + 0x10);
        }
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x90)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x90));
        (*pcVar11)((long)param_1 + (long)*(int *)(lVar5 + 0xa0),
                   (long)param_2 + (long)*(int *)(lVar5 + 0xa0),lVar4);
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0xb0)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0xb0));
        uVar7 = 1;
      }
    }
    else if (iVar2 == 2) {
      lVar5 = 0x11305f568;
      func_0x0001000285a8(0x11305f568,&UNK_10dd3d7c0);
      lVar4 = (long)*(int *)(lVar5 + 0x50);
      lVar6 = 0;
      __s10Foundation4DateVMa();
      lVar9 = *(long *)(lVar6 + -8);
      lVar5 = (long)param_2 + lVar4;
      (**(code **)(lVar9 + 0x30))(lVar5,1,lVar6);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar9 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar6);
        (**(code **)(lVar9 + 0x38))((long)param_1 + lVar4,0,1,lVar6);
      }
      else {
        lVar5 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
                *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      uVar7 = 2;
    }
    else {
      param_1[3] = param_2[3];
      lVar5 = 0x11305f558;
      func_0x0001000285a8(0x11305f558,&UNK_10dcd48f0);
      lVar4 = (long)*(int *)(lVar5 + 0x60);
      lVar6 = 0;
      __s10Foundation4DateVMa();
      lVar9 = *(long *)(lVar6 + -8);
      lVar5 = (long)param_2 + lVar4;
      (**(code **)(lVar9 + 0x30))(lVar5,1,lVar6);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar9 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar6);
        (**(code **)(lVar9 + 0x38))((long)param_1 + lVar4,0,1,lVar6);
      }
      else {
        lVar5 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
                *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      uVar7 = 3;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar8 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104898384; end: 104898c1b;  */

undefined8 * FUN_104898384(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  if (param_1 != param_2) {
    func_0x0001013d38bc(param_1);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    iVar1 = (int)puVar2;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar4 = 0x112d7af10;
        func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
        lVar6 = (long)*(int *)(lVar4 + 0x50);
        lVar3 = 0;
        __s10Foundation4DateVMa();
        lVar7 = *(long *)(lVar3 + -8);
        lVar5 = (long)param_2 + lVar6;
        (**(code **)(lVar7 + 0x30))(lVar5,1,lVar3);
        if ((int)lVar5 == 0) {
          (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
          (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
        }
        else {
          lVar5 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
                  *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
        }
        iVar1 = *(int *)(lVar4 + 0x60);
      }
      else {
        param_1[3] = param_2[3];
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
        _swift_bridgeObjectRetain();
        lVar4 = 0x11305f560;
        func_0x0001000285a8(0x11305f560,&UNK_10dcd48f8);
        lVar6 = (long)*(int *)(lVar4 + 0x80);
        lVar3 = 0;
        __s10Foundation4DateVMa();
        lVar7 = *(long *)(lVar3 + -8);
        lVar5 = (long)param_2 + lVar6;
        (**(code **)(lVar7 + 0x30))(lVar5,1,lVar3);
        if ((int)lVar5 == 0) {
          pcVar8 = *(code **)(lVar7 + 0x10);
          (*pcVar8)((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
          (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
        }
        else {
          lVar5 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
                  *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
          pcVar8 = *(code **)(lVar7 + 0x10);
        }
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x90)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x90));
        (*pcVar8)((long)param_1 + (long)*(int *)(lVar4 + 0xa0),
                  (long)param_2 + (long)*(int *)(lVar4 + 0xa0),lVar3);
        iVar1 = *(int *)(lVar4 + 0xb0);
      }
      *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
    }
    else {
      if (iVar1 == 2) {
        lVar4 = 0x11305f568;
        func_0x0001000285a8(0x11305f568,&UNK_10dd3d7c0);
        iVar1 = *(int *)(lVar4 + 0x50);
      }
      else {
        param_1[3] = param_2[3];
        lVar4 = 0x11305f558;
        func_0x0001000285a8(0x11305f558,&UNK_10dcd48f0);
        iVar1 = *(int *)(lVar4 + 0x60);
      }
      lVar3 = (long)iVar1;
      lVar5 = 0;
      __s10Foundation4DateVMa();
      lVar6 = *(long *)(lVar5 + -8);
      lVar4 = (long)param_2 + lVar3;
      (**(code **)(lVar6 + 0x30))(lVar4,1,lVar5);
      if ((int)lVar4 == 0) {
        (**(code **)(lVar6 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar5);
        (**(code **)(lVar6 + 0x38))((long)param_1 + lVar3,0,1,lVar5);
      }
      else {
        lVar4 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
                *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
      }
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  }
  return param_1;
}



/* Entry: 104898c1c; end: 104898c4b;  */

void FUN_104898c1c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104898c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 104898c4c; end: 104898da3;  */

undefined8 FUN_104898c4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001000d0cdc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104898da4; end: 104898dc3;  */

void FUN_104898da4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104898dc4; end: 104898e3b; -[SCCurrentPageEvent description] */

void FUN_104898dc4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  func_0x0001000d0fb8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001013d38bc(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104898e3c; end: 104898e83; -[SCCurrentPageEvent init] */

void FUN_104898e3c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAttributionServices/SCCurrentPageEventWrapper.swift",0x35,2,0xad,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104898e84);
  (*pcVar1)();
}



/* Entry: 104898e84; end: 104898eb7; -[SCCurrentPageEvent hash] */

undefined8 FUN_104898e84(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104898eb8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104898eb8; end: 10489970f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104898eb8(void)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [72];
  
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar5 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_02;
  __ss6HasherVABycfC(auStack_a8);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113097828));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097830) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113097830);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097838) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113097838);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_113097840))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_113097840);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x0001000bc298(unaff_x20 + _DAT_113097848,lVar11,0x112d373d8,&UNK_10d9014c0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar3 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar12 = lVar11;
  (*pcVar14)(lVar11,1,lVar3);
  if ((int)lVar12 == 1) {
    func_0x0001000bc2e0(lVar11,0x112d373d8,&UNK_10d9014c0);
    lVar11 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar11,lVar3);
    lVar11 = lVar12;
    func_0x00010bfde980(lVar12);
    _objc_release(lVar12);
  }
  __ss6HasherV8_combineyySuF(lVar11);
  bVar2 = *(byte *)(unaff_x20 + _DAT_113097850);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097858) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113097858);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097860) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113097860);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097868) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113097868);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_113097870))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_113097870);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_113097878))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_113097878);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_113097880);
  if (lVar11 == 0) {
    lVar12 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar11,PTR___sSSN_11034da80);
    lVar12 = lVar11;
    func_0x00010bfde980();
    _objc_release(lVar11);
  }
  __ss6HasherV8_combineyySuF(lVar12);
  func_0x0001000bc298(unaff_x20 + _DAT_113097888,lVar10,0x112d373d8,&UNK_10d9014c0);
  lVar11 = lVar10;
  (*pcVar14)(lVar10,1,lVar3);
  if ((int)lVar11 == 1) {
    func_0x0001000bc2e0(lVar10,0x112d373d8,&UNK_10d9014c0);
    lVar10 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar10,lVar3);
    lVar10 = lVar11;
    func_0x00010bfde980(lVar11);
    _objc_release(lVar11);
  }
  __ss6HasherV8_combineyySuF(lVar10);
  if ((char)((ulong *)(unaff_x20 + _DAT_113097890))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_113097890);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x0001000bc298(unaff_x20 + _DAT_113097898,lVar9,0x112d373d8,&UNK_10d9014c0);
  lVar10 = lVar9;
  (*pcVar14)(lVar9,1,lVar3);
  if ((int)lVar10 == 1) {
    func_0x0001000bc2e0(lVar9,0x112d373d8,&UNK_10d9014c0);
    lVar9 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar9,lVar3);
    lVar9 = lVar10;
    func_0x00010bfde980(lVar10);
    _objc_release(lVar10);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  bVar2 = *(byte *)(unaff_x20 + _DAT_1130978a0);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978a8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130978a8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978b0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130978b0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_1130978b8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_1130978b8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x0001000bc298(unaff_x20 + _DAT_1130978c0,lVar6,0x112d373d8,&UNK_10d9014c0);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar3);
  if ((int)lVar9 == 1) {
    func_0x0001000bc2e0(lVar6,0x112d373d8,&UNK_10d9014c0);
    lVar6 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar6,lVar3);
    lVar6 = lVar9;
    func_0x00010bfde980(lVar9);
    _objc_release(lVar9);
  }
  __ss6HasherV8_combineyySuF(lVar6);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978c8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130978c8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978d0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130978d0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_1130978d8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_1130978d8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_1130978e0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_1130978e0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x0001000bc298(unaff_x20 + _DAT_1130978e8,puVar5,0x112d373d8,&UNK_10d9014c0);
  puVar4 = puVar5;
  (*pcVar14)(puVar5,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x0001000bc2e0(puVar5,0x112d373d8,&UNK_10d9014c0);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(puVar5,lVar3);
    puVar5 = puVar4;
    func_0x00010bfde980(puVar4);
    _objc_release(puVar4);
  }
  __ss6HasherV8_combineyySuF(puVar5);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104899710; end: 104899713; -[SCCurrentPageEvent copyWithZone:] */

void FUN_104899710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104899714; end: 104899807; +[SCCurrentPageEvent startTransitionFromPageName:toPageName:startTimestamp:startDate:] */

void FUN_104899714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_6 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar2,param_6);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_6 == 0,1);
  FUN_104899d14(param_1,param_4,param_5,puVar2);
  func_0x0001000bc2e0(puVar2,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 104899808; end: 104899903; +[SCCurrentPageEvent endTransitionFromPageName:toPageName:startTimestamp:endTimestamp:startDate:] */

void FUN_104899808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_7 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar2,param_7);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_7 == 0,1);
  func_0x00010489a0e0(param_1,param_2,param_5,param_6,puVar2);
  func_0x0001000bc2e0(puVar2,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 104899904; end: 104899b33;  */

void FUN_104899904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  func_0x0001000bc298(param_4,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar2;
  }
  (**(code **)(param_5 + 0x10))(param_1,param_5,param_2,param_3,puVar4);
  _objc_release(puVar4);
  return;
}



/* Entry: 104899b34; end: 104899b67;  */

void FUN_104899b34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


