/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001cde10; end: 001cdeef;  */

void FUN_001cde10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  __ss5ClockP3now7InstantQzvgTj(uVar1,uVar8,uVar5);
  _swift_getAssociatedConformanceWitness
            (uVar5,uVar8,uVar2,PTR___ss5ClockTL_0099c038,
             PTR___ss5ClockP7InstantAB_s0B8ProtocolTn_0099c030);
  __ss15InstantProtocolP8advanced2byx8DurationQz_tFTj(uVar3,uVar9,uVar2,uVar5);
  pcVar7 = *(code **)(lVar4 + 8);
  *(code **)(unaff_x22 + 0x58) = pcVar7;
  (*pcVar7)(uVar1,uVar2);
  plVar6 = (long *)(ulong)*(uint *)(
                                   PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTjTu_0099c028
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_001cdef0;
                    /* WARNING: Could not recover jumptable at 0x00778ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ClockP5sleep5until9tolerancey7InstantQz_8DurationQzSgtYaKFTj_0099c020)
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x18),
             *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 001cdef0; end: 001cdf93;  */

void FUN_001cdef0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  pcVar1 = *(code **)(lVar5 + 0x58);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x38);
  lVar4 = *unaff_x22;
  *(long *)(lVar5 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  (*pcVar1)(uVar2,uVar3);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cdf94,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x50));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001cdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 001cdf94; end: 001cdfcf;  */

void FUN_001cdf94(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001cdfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cdfd0; end: 001cdfd3;  */

void FUN_001cdfd0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001cdfd4; end: 001ce023;  */

undefined8 FUN_001cdfd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 001ce024; end: 001ce14f;  */

void FUN_001ce024(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined1 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001ce150; end: 001ce1e3;  */

void FUN_001ce150(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  segment_command *psVar6;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  piVar4 = *(int **)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  psVar6 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar6;
  psVar6->cmd = (int)unaff_x22;
  psVar6->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar6->segname[0] = '\x10';
  psVar6->segname[1] = -0x1d;
  psVar6->segname[2] = '\x1c';
  psVar6->segname[3] = '\0';
  psVar6->segname[4] = '\0';
  psVar6->segname[5] = '\0';
  psVar6->segname[6] = '\0';
  psVar6->segname[7] = '\0';
  iVar1 = *piVar4;
  puVar5 = (undefined8 *)(ulong)(uint)piVar4[1];
  _swift_task_alloc(puVar5,(code *)((long)iVar1 + (long)piVar4),uVar3,piVar4,uVar7,uVar2);
  *(undefined8 **)(psVar6->segname + 8) = puVar5;
  *puVar5 = psVar6;
  puVar5[1] = 0x1ce304;
                    /* WARNING: Could not recover jumptable at 0x001cc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(puVar5,param_1);
  return;
}



/* Entry: 001ce1e4; end: 001ce263;  */

void FUN_001ce1e4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  piVar3 = *(int **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar5->segname[0] = -4;
  psVar5->segname[1] = -0x1e;
  psVar5->segname[2] = '\x1c';
  psVar5->segname[3] = '\0';
  psVar5->segname[4] = '\0';
  psVar5->segname[5] = '\0';
  psVar5->segname[6] = '\0';
  psVar5->segname[7] = '\0';
  iVar1 = *piVar3;
  puVar4 = (undefined8 *)(ulong)(uint)piVar3[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar3),uVar6,uVar2);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = 0x1ce30c;
                    /* WARNING: Could not recover jumptable at 0x001cdca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(puVar4,param_1);
  return;
}



/* Entry: 001ce264; end: 001ce2e3;  */

void FUN_001ce264(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  piVar3 = *(int **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar5->segname[0] = '\0';
  psVar5->segname[1] = -0x1d;
  psVar5->segname[2] = '\x1c';
  psVar5->segname[3] = '\0';
  psVar5->segname[4] = '\0';
  psVar5->segname[5] = '\0';
  psVar5->segname[6] = '\0';
  psVar5->segname[7] = '\0';
  iVar1 = *piVar3;
  puVar4 = (undefined8 *)(ulong)(uint)piVar3[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar3),uVar6,uVar2);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = 0x1ce30c;
                    /* WARNING: Could not recover jumptable at 0x001cdca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(puVar4,param_1);
  return;
}



/* Entry: 001ce2e4; end: 001ce32b;  */

void FUN_001ce2e4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001ce32c; end: 001ce3ff;  */

void FUN_001ce32c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ce400; end: 001ce41f;  */

void FUN_001ce400(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 001ce420; end: 001ce45f;  */

void FUN_001ce420(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4520;
  _swift_getWitnessTable(&UNK_007e4520,&UNK_009b75f8);
  puRam0000000000af3958 = puVar1;
  return;
}



/* Entry: 001ce460; end: 001ce5c3;  */

int FUN_001ce460(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001ce4dc;
        goto LAB_001ce4c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001ce4c0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_001ce4dc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001ce5c4; end: 001ce70b;  */

void FUN_001ce5c4(byte param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_1 < 2) {
    if (param_1 == 0) {
      __sScP3lowScPvgZ(puVar4);
    }
    else {
      __sScP8rawValueScPs5UInt8V_tcfC(puVar4,0x15);
    }
  }
  else if (param_1 == 2) {
    __sScP4highScPvgZ(puVar4);
  }
  else {
    if (param_1 != 3) {
      lVar1 = 0;
      __sScPMa();
      uVar3 = 1;
      goto LAB_001ce698;
    }
    __sScP13userInitiatedScPvgZ(puVar4);
  }
  lVar1 = 0;
  __sScPMa();
  uVar3 = 0;
LAB_001ce698:
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,uVar3,1);
  puVar2 = &UNK_009b7940;
  _swift_allocObject(&UNK_009b7940,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _swift_retain(param_3);
  FUN_001ce770(0,0,puVar4,&UNK_007e4670,puVar2);
  return;
}



/* Entry: 001ce70c; end: 001ce76f;  */

void FUN_001ce70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1d25e8;
                    /* WARNING: Could not recover jumptable at 0x001ce76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 001ce770; end: 001ce9fb;  */

void FUN_001ce770(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  FUN_001cdfd4(param_3,puVar5);
  lVar1 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  _swift_retain(param_5);
  if ((int)puVar2 == 1) {
    func_0x001d1a08(puVar5,0xae62f0,&UNK_007ccf10);
    uVar7 = 0x1c00;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar1);
  _swift_release(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  if (param_2 == 0) {
    func_0x001d1a08(param_3,0xae62f0,&UNK_007ccf10);
    puVar3 = &UNK_009b7968;
    _swift_allocObject(&UNK_009b7968,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar4 = &uStack_80;
      lStack_70 = lVar6;
      lStack_68 = lVar8;
    }
    _swift_task_create(uVar7,puVar4,PTR___sytN_0099b8e0 + 8,&UNK_007e4678,puVar3);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    puVar3 = &UNK_009b7990;
    _swift_allocObject(&UNK_009b7990,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar8 == 0 && lVar6 == 0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar6;
      lStack_88 = lVar8;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    _swift_task_create(uVar7,&uStack_b8,PTR___sytN_0099b8e0 + 8,&UNK_007e4680,puVar3);
    _swift_release(param_1);
    func_0x001d1a08(param_3,0xae62f0,&UNK_007ccf10);
    _swift_release(param_5);
  }
  return;
}



/* Entry: 001ce9fc; end: 001ceb63;  */

undefined8 FUN_001ce9fc(byte param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_1 < 2) {
    if (param_1 == 0) {
      __sScP3lowScPvgZ(puVar4);
    }
    else {
      __sScP8rawValueScPs5UInt8V_tcfC(puVar4,0x15);
    }
  }
  else if (param_1 == 2) {
    __sScP4highScPvgZ(puVar4);
  }
  else {
    if (param_1 != 3) {
      lVar1 = 0;
      __sScPMa();
      uVar3 = 1;
      goto LAB_001cead0;
    }
    __sScP13userInitiatedScPvgZ(puVar4);
  }
  lVar1 = 0;
  __sScPMa();
  uVar3 = 0;
LAB_001cead0:
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,uVar3,1);
  puVar2 = &UNK_009b77d8;
  _swift_allocObject(&UNK_009b77d8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _swift_retain(param_3);
  uVar3 = 0;
  FUN_001ceb64(0,0,puVar4,&UNK_007e4628,puVar2);
  func_0x001d1a08(puVar4,0xae62f0,&UNK_007ccf10);
  return uVar3;
}



/* Entry: 001ceb64; end: 001cedaf;  */

void FUN_001ceb64(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_b0 + -extraout_x8;
  FUN_001cdfd4(param_3,puVar5);
  lVar1 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  _swift_retain(param_5);
  if ((int)puVar2 == 1) {
    func_0x001d1a08(puVar5,0xae62f0,&UNK_007ccf10);
    uVar7 = 0x1000;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1000;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar1);
  _swift_release(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  if (param_2 == 0) {
    puVar3 = &UNK_009b7800;
    _swift_allocObject(&UNK_009b7800,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_70 = 0;
      uStack_68 = 0;
      puVar4 = &uStack_70;
      lStack_60 = lVar6;
      lStack_58 = lVar8;
    }
    _swift_task_create(uVar7,puVar4,PTR___sytN_0099b8e0 + 8,&UNK_007e4638,puVar3);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    puVar3 = &UNK_009b7828;
    _swift_allocObject(&UNK_009b7828,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar8 == 0 && lVar6 == 0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &uStack_90;
      lStack_80 = lVar6;
      lStack_78 = lVar8;
    }
    uStack_a8 = 7;
    lStack_98 = param_1 + 0x20;
    _swift_task_create(uVar7,&uStack_a8,PTR___sytN_0099b8e0 + 8,&UNK_007e4640,puVar3);
    _swift_release(param_5);
    _swift_release(param_1);
  }
  return;
}



/* Entry: 001cedb0; end: 001cedd7;  */

void FUN_001cedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cedd8,0,0);
  return;
}



/* Entry: 001cedd8; end: 001cef7b;  */

void FUN_001cedd8(void)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  piVar2 = *(int **)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x98);
  puVar4 = (undefined8 *)0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  _swift_allocObject();
  puVar4[3] = 6;
  puVar4[2] = 3;
  puVar4[4] = 0x6b73615470616e53;
  puVar4[5] = 0xe800000000000000;
  func_0x001dc8a4(uVar9,uVar5,uVar3);
  FUN_001d9728();
  puVar4[6] = uVar9;
  puVar4[7] = uVar5;
  puVar4[8] = uVar6;
  puVar4[9] = uVar7;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar4;
  _swift_bridgeObjectRetain(uVar7);
  uVar7 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar5 = 0xae6dd8;
  FUN_001d1a5c(0xae6dd8,0xae6938,&UNK_007cdb30,PTR___sSayxGSKsMc_0099b1e0);
  uVar6 = 0x3a;
  uVar9 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x3a,0xe100000000000000,uVar7,uVar5);
  _swift_release();
  func_0x0021be28();
  *(undefined8 **)(unaff_x22 + 0x80) = puVar4;
  _swift_beginAccess();
  uVar7 = *puVar4;
  _objc_retain(uVar7);
  func_0x0021c244(uVar6,uVar9);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  _objc_release(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  iVar1 = *piVar2;
  plVar8 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_001cef7c;
                    /* WARNING: Could not recover jumptable at 0x001cef78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar8,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 001cef7c; end: 001cefc3;  */

void FUN_001cef7c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cefc4,0,0);
  return;
}



/* Entry: 001cefc4; end: 001cf023;  */

void FUN_001cefc4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_beginAccess(puVar1,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar1;
  _objc_retain(uVar3);
  func_0x0021c438(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001cf020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cf024; end: 001cf097;  */

void FUN_001cf024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined1 *)(unaff_x22 + 0x71) = param_5;
  *(undefined1 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf098,0,0);
  return;
}



/* Entry: 001cf098; end: 001cf1df;  */

void FUN_001cf098(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  qword *pqVar5;
  qword *pqVar6;
  undefined8 uVar7;
  qword unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0x71);
  FUN_001d4c44();
  _swift_beginAccess();
  param_1 = (undefined8 *)*param_1;
  *(undefined8 **)(unaff_x22 + 0x58) = param_1;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      _swift_retain(param_1);
      __sScP3lowScPvgZ(uVar7);
    }
    else {
      _swift_retain(param_1);
      __sScP8rawValueScPs5UInt8V_tcfC(uVar7,0x15);
    }
  }
  else if (bVar2 == 2) {
    _swift_retain(param_1);
    __sScP4highScPvgZ(uVar7);
  }
  else {
    if (bVar2 != 3) {
      lVar4 = 0;
      __sScPMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar7,1,1,lVar4);
      _swift_retain(param_1);
      goto LAB_001cf198;
    }
    _swift_retain(param_1);
    __sScP13userInitiatedScPvgZ(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar7,0,1,lVar4);
LAB_001cf198:
  pqVar5 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x60) = pqVar5;
  *pqVar5 = unaff_x22;
  pqVar5[1] = (qword)FUN_001cf1e0;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x70);
  pqVar5[0xc] = *(undefined8 *)(unaff_x22 + 0x50);
  pqVar5[0xd] = (qword)param_1;
  *(undefined1 *)(pqVar5 + 0x10) = uVar3;
  pqVar5[10] = uVar7;
  pqVar5[0xb] = uVar1;
  pqVar6 = &section_00000108.size;
  _swift_task_alloc();
  pqVar5[0xe] = (qword)pqVar6;
  *pqVar6 = (qword)pqVar5;
  pqVar6[1] = (qword)FUN_001d4d28;
  pqVar6[0x1c] = uVar1;
  pqVar6[0x1d] = (qword)param_1;
  *(undefined1 *)((long)pqVar6 + 0x129) = uVar3;
  pqVar6[0x1b] = uVar7;
  pqVar6[0x1e] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d4ed0,0,0);
  return;
}



/* Entry: 001cf1e0; end: 001cf283;  */

void FUN_001cf1e0(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  int *piVar6;
  long lVar7;
  
  lVar5 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar5 + 0x58);
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  piVar6 = *(int **)(lVar5 + 0x40);
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  _swift_release(uVar2);
  func_0x001d1a08(uVar4,0xae62f0,&UNK_007ccf10);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(lVar5 + 0x68) = plVar3;
  *plVar3 = lVar7;
  plVar3[1] = (long)FUN_001cf284;
                    /* WARNING: Could not recover jumptable at 0x001cf280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(lVar5 + 0x28));
  return;
}



/* Entry: 001cf284; end: 001cf2cb;  */

void FUN_001cf284(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001cf2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 001cf2cc; end: 001cf2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_001cf2cc(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  _objc_retain();
  FUN_001f9cf4();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_00af3738);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    FUN_001dca4c(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_009b7be8;
  _swift_allocObject(&UNK_009b7be8,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_009b7c10;
  _swift_allocObject(&UNK_009b7c10,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_007e46d0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar6 = &UNK_009b7c38;
  _swift_allocObject(&UNK_009b7c38,0x48,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  puVar6[0x20] = uVar1;
  *(undefined **)(puVar6 + 0x28) = param_3;
  *(long *)(puVar6 + 0x30) = lVar13;
  *(undefined **)(puVar6 + 0x38) = &UNK_007e46d8;
  *(undefined **)(puVar6 + 0x40) = puVar7;
  puVar8 = &UNK_009b7c60;
  _swift_allocObject(&UNK_009b7c60,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_007e46e0;
  *(undefined **)(puVar8 + 0x30) = puVar6;
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  lVar2 = lRam0000000000af3938;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar13);
  _swift_retain(puVar7);
  _swift_retain(puVar6);
  if (lVar2 != -1) {
    _swift_once(0xaf3938,FUN_001cc624);
  }
  uVar3 = uRam0000000000af3940;
  pcStack_88 = (code *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd00000000000004f;
  uStack_78 = 0x80000000008b9ae0;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  func_0x00089a2c(param_1,lVar12,puVar10);
  uVar9 = 0xaf3988;
  func_0x000115a8(0xaf3988,&UNK_007e4618);
  _swift_task_localValuePush(uVar3,&puStack_98,uVar9);
  FUN_001ce5c4(uVar14,&UNK_007e46e8,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar13);
  _swift_release(puVar7);
  _swift_release(puVar8);
  _swift_release(puVar6);
  FUN_00089cec(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_00ac3720;
  _objc_allocWithZone();
  uStack_78 = 0x1d2678;
  puStack_98 = PTR___NSConcreteStackBlock_00999f30;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_0001d1e4;
  puStack_80 = &UNK_009b7c78;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar11);
  uVar4 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar4);
  func_0x00784f00();
  __Block_release(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1d0988);
  (*pcVar5)();
}



/* Entry: 001cf2d0; end: 001cf367;  */

void FUN_001cf2d0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined1 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_0099be80;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = 0xae77c8;
  FUN_001d24e8(0xae77c8,puVar1,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf368,uVar2,uVar3);
  return;
}



/* Entry: 001cf368; end: 001cf48b;  */

void FUN_001cf368(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  pcVar2 = *(code **)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  puVar5 = PTR__OBJC_CLASS___NSTimer_00ac3110;
  _objc_opt_self(PTR__OBJC_CLASS___NSTimer_00ac3110);
  puVar6 = &UNK_009b7cb0;
  _swift_allocObject(&UNK_009b7cb0,0x21,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  puVar6[0x20] = uVar3;
  *(code **)(unaff_x22 + 0x30) = FUN_001d2550;
  *(undefined **)(unaff_x22 + 0x38) = puVar6;
  puVar7 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar7 = PTR___NSConcreteStackBlock_00999f30;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_00013b44;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_009b7cc8;
  __Block_copy();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x00089a2c(uVar8,uVar1,uVar3);
  _swift_release(uVar9);
  func_0x0078c340(0x3fe0000000000000,puVar5);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(puVar7);
  uVar4 = (uint)puVar7;
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  (*pcVar2)(uVar4 & 1);
  func_0x00787320(puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x001cf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cf48c; end: 001cf557;  */

void FUN_001cf48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x45);
  FUN_001dca4c(param_2,param_3,param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_3);
  __sSS6appendyySSF(0xd000000000000043,0x80000000008b9b30);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x0076f2ac(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00787330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_invalidate_00abc9d0);
  return;
}



/* Entry: 001cf558; end: 001cf593;  */

void FUN_001cf558(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001cf590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001cf594; end: 001cf5cb; +[SCSnapTaskWrapper attachedNonBlockingSyncWithMainActor:priority:asyncSpanNameSuffix:operation:] */

void FUN_001cf594(void)

{
  FUN_001d046c();
  return;
}



/* Entry: 001cf5cc; end: 001cf5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_001cf5cc(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  _objc_retain();
  FUN_001f9cf4();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_00af3738);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    FUN_001dca4c(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_009b7af8;
  _swift_allocObject(&UNK_009b7af8,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_009b7b20;
  _swift_allocObject(&UNK_009b7b20,0x48,7);
  *(undefined **)(puVar7 + 0x10) = param_1;
  *(long *)(puVar7 + 0x18) = lVar12;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar13;
  *(undefined **)(puVar7 + 0x38) = &UNK_007e46b0;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_009b7b48;
  _swift_allocObject(&UNK_009b7b48,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_007e46b8;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  lVar2 = lRam0000000000af3938;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar13);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  if (lVar2 != -1) {
    _swift_once(0xaf3938,FUN_001cc624);
  }
  uVar3 = uRam0000000000af3940;
  pcStack_88 = (code *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  uStack_78 = 0x80000000008b99e0;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  func_0x00089a2c(param_1,lVar12,puVar10);
  uVar9 = 0xaf3988;
  func_0x000115a8(0xaf3988,&UNK_007e4618);
  _swift_task_localValuePush(uVar3,&puStack_98,uVar9);
  FUN_001ce5c4(uVar14,&UNK_007e46c0,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar13);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(puVar7);
  FUN_00089cec(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_00ac3720;
  _objc_allocWithZone();
  uStack_78 = 0x1d2664;
  puStack_98 = PTR___NSConcreteStackBlock_00999f30;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_0001d1e4;
  puStack_80 = &UNK_009b7b60;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar11);
  uVar4 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar4);
  func_0x00784f00();
  __Block_release(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1d0c90);
  (*pcVar5)();
}



/* Entry: 001cf5f0; end: 001cf70b;  */

void FUN_001cf5f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  pcVar1 = *(code **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x60);
  puVar6 = PTR__OBJC_CLASS___NSTimer_00ac3110;
  _objc_opt_self(PTR__OBJC_CLASS___NSTimer_00ac3110);
  puVar7 = &UNK_009b7b98;
  _swift_allocObject(&UNK_009b7b98,0x21,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  puVar7[0x20] = uVar4;
  *(code **)(unaff_x22 + 0x30) = FUN_001d222c;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  puVar8 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar8 = PTR___NSConcreteStackBlock_00999f30;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_00013b44;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_009b7bb0;
  __Block_copy();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x00089a2c(uVar2,uVar3,uVar4);
  _swift_release(uVar9);
  func_0x0078c340(0x3ff0000000000000,puVar6);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(puVar8);
  uVar5 = (uint)puVar8;
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  (*pcVar1)(uVar5 & 1);
  func_0x00787320(puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x001cf708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cf70c; end: 001cf743; +[SCSnapTaskWrapper attachedNonBlockingSync:priority:asyncSpanNameSuffix:operation:] */

void FUN_001cf70c(void)

{
  FUN_001d046c();
  return;
}



/* Entry: 001cf744; end: 001cf767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_001cf744(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  _objc_retain();
  FUN_001f9cf4();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_00af3738);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    FUN_001dca4c(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_009b7a08;
  _swift_allocObject(&UNK_009b7a08,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_009b7a30;
  _swift_allocObject(&UNK_009b7a30,0x48,7);
  *(undefined **)(puVar7 + 0x10) = param_1;
  *(long *)(puVar7 + 0x18) = lVar12;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar13;
  *(undefined **)(puVar7 + 0x38) = &UNK_007e4690;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_009b7a58;
  _swift_allocObject(&UNK_009b7a58,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_007e4698;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  lVar2 = lRam0000000000af3938;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar13);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  if (lVar2 != -1) {
    _swift_once(0xaf3938,FUN_001cc624);
  }
  uVar3 = uRam0000000000af3940;
  pcStack_88 = (code *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  uStack_78 = 0x80000000008b9a20;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  func_0x00089a2c(param_1,lVar12,puVar10);
  uVar9 = 0xaf3988;
  func_0x000115a8(0xaf3988,&UNK_007e4618);
  _swift_task_localValuePush(uVar3,&puStack_98,uVar9);
  FUN_001ce9fc(uVar14,&UNK_007e46a0,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar13);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(puVar7);
  FUN_00089cec(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_00ac3720;
  _objc_allocWithZone();
  uStack_78 = 0x1d2654;
  puStack_98 = PTR___NSConcreteStackBlock_00999f30;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_0001d1e4;
  puStack_80 = &UNK_009b7a70;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar11);
  uVar4 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar4);
  func_0x00784f00();
  __Block_release(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1d0f98);
  (*pcVar5)();
}



/* Entry: 001cf768; end: 001cf883;  */

void FUN_001cf768(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  pcVar1 = *(code **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x60);
  puVar6 = PTR__OBJC_CLASS___NSTimer_00ac3110;
  _objc_opt_self(PTR__OBJC_CLASS___NSTimer_00ac3110);
  puVar7 = &UNK_009b7aa8;
  _swift_allocObject(&UNK_009b7aa8,0x21,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  puVar7[0x20] = uVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x1d25d4;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  puVar8 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar8 = PTR___NSConcreteStackBlock_00999f30;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_00013b44;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_009b7ac0;
  __Block_copy();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x00089a2c(uVar2,uVar3,uVar4);
  _swift_release(uVar9);
  func_0x0078c340(0x3ff0000000000000,puVar6);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(puVar8);
  uVar5 = (uint)puVar8;
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  (*pcVar1)(uVar5 & 1);
  func_0x00787320(puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x001cf880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cf884; end: 001cf94f;  */

void FUN_001cf884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x43);
  FUN_001dca4c(param_2,param_3,param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_3);
  __sSS6appendyySSF(0xd000000000000041,0x80000000008b9a90);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x0076f2ac(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00787330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_invalidate_00abc9d0);
  return;
}



/* Entry: 001cf950; end: 001cf987; +[SCSnapTaskWrapper detachedNonBlockingSync:priority:asyncSpanNameSuffix:operation:] */

void FUN_001cf950(void)

{
  FUN_001d046c();
  return;
}



/* Entry: 001cf988; end: 001cf98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_001cf988(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_00af3738);
  }
  puVar13 = param_3;
  _objc_retain();
  puVar5 = param_1;
  FUN_001f9cf4();
  lVar12 = param_4;
  if (param_4 == 0) {
    lVar11 = param_2;
    puVar6 = puVar13;
    _objc_retain();
    FUN_001f9cf4();
    param_3 = param_1;
    lVar12 = lVar11;
    FUN_001dca4c();
    FUN_00089cec(param_1,lVar11,puVar6);
  }
  puVar6 = &UNK_009b78a0;
  _swift_allocObject(&UNK_009b78a0,0x40,7);
  puVar6[0x10] = (char)uVar14;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(long *)(puVar6 + 0x20) = param_2;
  uVar1 = SUB81(puVar13,0);
  puVar6[0x28] = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  puVar7 = &UNK_009b78c8;
  _swift_allocObject(&UNK_009b78c8,0x48,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = param_2;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar12;
  *(undefined **)(puVar7 + 0x38) = &UNK_007e4658;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_009b78f0;
  _swift_allocObject(&UNK_009b78f0,0x38,7);
  *(undefined **)(puVar8 + 0x10) = puVar5;
  *(long *)(puVar8 + 0x18) = param_2;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_007e4660;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  func_0x00089a2c(puVar5,param_2,puVar13);
  func_0x00089a2c(puVar5,param_2,puVar13);
  func_0x00089a2c(puVar5,param_2,puVar13);
  lVar11 = lRam0000000000af3938;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar12);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  if (lVar11 != -1) {
    _swift_once(0xaf3938,FUN_001cc624);
  }
  uVar2 = uRam0000000000af3940;
  pcStack_88 = (code *)((ulong)puVar13 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  pcStack_78 = (code *)0x80000000008b99e0;
  puStack_98 = puVar5;
  lStack_90 = param_2;
  func_0x00089a2c(puVar5,param_2,puVar13);
  uVar9 = 0xaf3988;
  func_0x000115a8(0xaf3988,&UNK_007e4618);
  _swift_task_localValuePush(uVar2,&puStack_98,uVar9);
  FUN_001ce5c4(uVar14,&UNK_007e4668,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar12);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(puVar7);
  FUN_00089cec(puVar5,param_2,puVar13);
  puVar5 = PTR_PTR_00ac3720;
  _objc_allocWithZone();
  pcStack_78 = FUN_001d1cc0;
  puStack_98 = PTR___NSConcreteStackBlock_00999f30;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_0001d1e4;
  puStack_80 = &UNK_009b7908;
  ppuVar10 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar10);
  uVar3 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar3);
  func_0x00784f00();
  __Block_release(ppuVar10);
  if (puVar5 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1d12c0);
  (*pcVar4)();
}



/* Entry: 001cf98c; end: 001cfa7f;  */

void FUN_001cf98c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined1 *)(unaff_x22 + 0x101) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined1 *)(unaff_x22 + 0x100) = param_2;
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = 0xaf3990;
  func_0x000115a8(0xaf3990,&UNK_007e4648);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cfa80,0,0);
  return;
}



/* Entry: 001cfa80; end: 001cfdeb;  */

void FUN_001cfa80(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  bVar8 = *(byte *)(unaff_x22 + 0x100);
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_001cfdec;
  lVar10 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar10,0);
  if (bVar8 < 2) {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_0099bca0;
    if (bVar8 != 0) {
      puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_0099bc98;
    }
  }
  else {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88;
    if ((bVar8 != 2) &&
       (puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_0099bc90,
       bVar8 != 3)) {
      uVar15 = 1;
      goto LAB_001cfb30;
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
            (*(undefined8 *)(unaff_x22 + 0xe0),*puVar16,*(undefined8 *)(unaff_x22 + 0xe8));
  uVar15 = 0;
LAB_001cfb30:
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(lVar3 + 0x38))(uVar4,uVar15,1,uVar19);
  FUN_001d19b8(uVar4,uVar11);
  pcVar18 = *(code **)(lVar3 + 0x30);
  (*pcVar18)(uVar11,1,uVar19);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  if ((int)uVar11 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
              (*(undefined8 *)(unaff_x22 + 0xf8),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_0099bc98,uVar19);
    (*pcVar18)(uVar15,1,uVar19);
    if ((int)uVar15 != 1) {
      func_0x001d1a08(*(undefined8 *)(unaff_x22 + 0xd8),0xaf3990,&UNK_007e4648);
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0xf8),uVar15,uVar19);
  }
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar7 = *(long *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined1 *)(unaff_x22 + 0x101);
  FUN_00088dc4(0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = uVar19;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
  (**(code **)(lVar3 + 8))(uVar19,uVar20);
  puVar13 = &UNK_009b79b8;
  _swift_allocObject(&UNK_009b79b8,0x48,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar15;
  *(undefined8 *)(puVar13 + 0x18) = uVar11;
  puVar13[0x20] = uVar9;
  *(undefined8 *)(puVar13 + 0x30) = uVar22;
  *(undefined8 *)(puVar13 + 0x28) = uVar21;
  puVar13[0x38] = param_1 & 1;
  *(long *)(puVar13 + 0x40) = lVar10;
  *(code **)(unaff_x22 + 0x70) = FUN_001d1e74;
  *(undefined **)(unaff_x22 + 0x78) = puVar13;
  puVar14 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar14 = PTR___NSConcreteStackBlock_00999f30;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x563e4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_009b79d0;
  __Block_copy();
  func_0x00089a2c(uVar15,uVar11,uVar9);
  _swift_retain(uVar17);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(uVar5);
  *(undefined8 *)(unaff_x22 + 0x80) = PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar15 = 0xae97a0;
  FUN_001d24e8(0xae97a0,PTR___s8Dispatch0A13WorkItemFlagsVMa_0099bc70,
               PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_0099bc80);
  uVar19 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar11 = 0xae97b0;
  FUN_001d1a5c(0xae97b0,0xae97a8,&UNK_007d4680,PTR___sSayxGSTsMc_0099b1f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (uVar4,(undefined8 *)(unaff_x22 + 0x80),uVar19,uVar11,uVar2,uVar15);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,uVar5,uVar4,puVar14);
  __Block_release(puVar14);
  _objc_release(uVar12);
  (**(code **)(lVar7 + 8))(uVar4,uVar2);
  (**(code **)(lVar1 + 8))(uVar5,uVar6);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 001cfdec; end: 001cfe2b;  */

void FUN_001cfdec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cfe2c,0,0);
  return;
}



/* Entry: 001cfe2c; end: 001cfe8f;  */

void FUN_001cfe2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x001cfe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cfe90; end: 001cfec7; +[SCSnapTaskWrapper attachedBlockingSync:priority:asyncSpanNameSuffix:operation:] */

void FUN_001cfe90(void)

{
  FUN_001d046c();
  return;
}



/* Entry: 001cfec8; end: 001cfecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_001cfec8(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_00af3738);
  }
  puVar13 = param_3;
  _objc_retain();
  puVar5 = param_1;
  FUN_001f9cf4();
  lVar12 = param_4;
  if (param_4 == 0) {
    lVar11 = param_2;
    puVar6 = puVar13;
    _objc_retain();
    FUN_001f9cf4();
    param_3 = param_1;
    lVar12 = lVar11;
    FUN_001dca4c();
    FUN_00089cec(param_1,lVar11,puVar6);
  }
  puVar6 = &UNK_009b7738;
  _swift_allocObject(&UNK_009b7738,0x40,7);
  puVar6[0x10] = (char)uVar14;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(long *)(puVar6 + 0x20) = param_2;
  uVar1 = SUB81(puVar13,0);
  puVar6[0x28] = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  puVar7 = &UNK_009b7760;
  _swift_allocObject(&UNK_009b7760,0x48,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = param_2;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar12;
  *(undefined **)(puVar7 + 0x38) = &UNK_007e45f0;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_009b7788;
  _swift_allocObject(&UNK_009b7788,0x38,7);
  *(undefined **)(puVar8 + 0x10) = puVar5;
  *(long *)(puVar8 + 0x18) = param_2;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_007e4600;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  func_0x00089a2c(puVar5,param_2,puVar13);
  func_0x00089a2c(puVar5,param_2,puVar13);
  func_0x00089a2c(puVar5,param_2,puVar13);
  lVar11 = lRam0000000000af3938;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar12);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  if (lVar11 != -1) {
    _swift_once(0xaf3938,FUN_001cc624);
  }
  uVar2 = uRam0000000000af3940;
  pcStack_88 = (code *)((ulong)puVar13 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  uStack_78 = 0x80000000008b9a20;
  puStack_98 = puVar5;
  lStack_90 = param_2;
  func_0x00089a2c(puVar5,param_2,puVar13);
  uVar9 = 0xaf3988;
  func_0x000115a8(0xaf3988,&UNK_007e4618);
  _swift_task_localValuePush(uVar2,&puStack_98,uVar9);
  FUN_001ce9fc(uVar14,&UNK_007e4610,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar12);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(puVar7);
  FUN_00089cec(puVar5,param_2,puVar13);
  puVar5 = PTR_PTR_00ac3720;
  _objc_allocWithZone();
  uStack_78 = 0x1d263c;
  puStack_98 = PTR___NSConcreteStackBlock_00999f30;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_0001d1e4;
  puStack_80 = &UNK_009b77a0;
  ppuVar10 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar10);
  uVar3 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar3);
  func_0x00784f00();
  __Block_release(ppuVar10);
  if (puVar5 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1d15e8);
  (*pcVar4)();
}



/* Entry: 001cfecc; end: 001cffbf;  */

void FUN_001cfecc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined1 *)(unaff_x22 + 0x101) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined1 *)(unaff_x22 + 0x100) = param_2;
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = 0xaf3990;
  func_0x000115a8(0xaf3990,&UNK_007e4648);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cffc0,0,0);
  return;
}



/* Entry: 001cffc0; end: 001d032b;  */

void FUN_001cffc0(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  bVar8 = *(byte *)(unaff_x22 + 0x100);
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_001d032c;
  lVar10 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar10,0);
  if (bVar8 < 2) {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_0099bca0;
    if (bVar8 != 0) {
      puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_0099bc98;
    }
  }
  else {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88;
    if ((bVar8 != 2) &&
       (puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_0099bc90,
       bVar8 != 3)) {
      uVar15 = 1;
      goto LAB_001d0070;
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
            (*(undefined8 *)(unaff_x22 + 0xe0),*puVar16,*(undefined8 *)(unaff_x22 + 0xe8));
  uVar15 = 0;
LAB_001d0070:
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(lVar3 + 0x38))(uVar4,uVar15,1,uVar19);
  FUN_001d19b8(uVar4,uVar11);
  pcVar18 = *(code **)(lVar3 + 0x30);
  (*pcVar18)(uVar11,1,uVar19);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  if ((int)uVar11 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
              (*(undefined8 *)(unaff_x22 + 0xf8),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_0099bc98,uVar19);
    (*pcVar18)(uVar15,1,uVar19);
    if ((int)uVar15 != 1) {
      func_0x001d1a08(*(undefined8 *)(unaff_x22 + 0xd8),0xaf3990,&UNK_007e4648);
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0xf8),uVar15,uVar19);
  }
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar7 = *(long *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined1 *)(unaff_x22 + 0x101);
  FUN_00088dc4(0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = uVar19;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
  (**(code **)(lVar3 + 8))(uVar19,uVar20);
  puVar13 = &UNK_009b7850;
  _swift_allocObject(&UNK_009b7850,0x48,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar15;
  *(undefined8 *)(puVar13 + 0x18) = uVar11;
  puVar13[0x20] = uVar9;
  *(undefined8 *)(puVar13 + 0x30) = uVar22;
  *(undefined8 *)(puVar13 + 0x28) = uVar21;
  puVar13[0x38] = param_1 & 1;
  *(long *)(puVar13 + 0x40) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x1d1a50;
  *(undefined **)(unaff_x22 + 0x78) = puVar13;
  puVar14 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar14 = PTR___NSConcreteStackBlock_00999f30;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x563e4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_009b7868;
  __Block_copy();
  func_0x00089a2c(uVar15,uVar11,uVar9);
  _swift_retain(uVar17);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(uVar5);
  *(undefined8 *)(unaff_x22 + 0x80) = PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar15 = 0xae97a0;
  FUN_001d24e8(0xae97a0,PTR___s8Dispatch0A13WorkItemFlagsVMa_0099bc70,
               PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_0099bc80);
  uVar19 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar11 = 0xae97b0;
  FUN_001d1a5c(0xae97b0,0xae97a8,&UNK_007d4680,PTR___sSayxGSTsMc_0099b1f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (uVar4,(undefined8 *)(unaff_x22 + 0x80),uVar19,uVar11,uVar2,uVar15);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,uVar5,uVar4,puVar14);
  __Block_release(puVar14);
  _objc_release(uVar12);
  (**(code **)(lVar7 + 8))(uVar4,uVar2);
  (**(code **)(lVar1 + 8))(uVar5,uVar6);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 001d032c; end: 001d036b;  */

void FUN_001d032c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x1d25d8,0,0);
  return;
}



/* Entry: 001d036c; end: 001d0433;  */

void FUN_001d036c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  
  puVar1 = param_1;
  func_0x0021be28();
  _swift_beginAccess();
  uVar2 = *puVar1;
  _objc_retain(uVar2);
  FUN_001dca4c(param_1,param_2,param_3);
  FUN_0021cb48();
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_continuation_throwingResume(in_x6);
  return;
}



/* Entry: 001d0434; end: 001d046b; +[SCSnapTaskWrapper detachedBlockingSync:priority:asyncSpanNameSuffix:operation:] */

void FUN_001d0434(void)

{
  FUN_001d046c();
  return;
}



/* Entry: 001d046c; end: 001d054f;  */

void FUN_001d046c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,long param_7,undefined8 param_8,code *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __Block_copy();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _swift_allocObject(param_7,0x18,7);
  *(undefined8 *)(param_7 + 0x10) = param_6;
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_3;
  (*param_9)(param_3,param_4,param_5,param_2,param_8,param_7);
  _objc_release(param_3);
  _objc_release(uVar1);
  _swift_release(param_7);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 001d0550; end: 001d058b; -[SCSnapTaskWrapper init] */

void FUN_001d0550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_001d15e8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 001d058c; end: 001d05bb;  */

void FUN_001d058c(void)

{
  FUN_001d15e8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 001d05bc; end: 001d061f;  */

void FUN_001d05bc(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001d0620;
                    /* WARNING: Could not recover jumptable at 0x001d061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 001d0620; end: 001d065f;  */

void FUN_001d0620(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d065c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d0660; end: 001d15e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_001d0660(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  _objc_retain();
  FUN_001f9cf4();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_00af3738);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    FUN_001dca4c(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_009b7be8;
  _swift_allocObject(&UNK_009b7be8,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_009b7c10;
  _swift_allocObject(&UNK_009b7c10,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_007e46d0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar6 = &UNK_009b7c38;
  _swift_allocObject(&UNK_009b7c38,0x48,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  puVar6[0x20] = uVar1;
  *(undefined **)(puVar6 + 0x28) = param_3;
  *(long *)(puVar6 + 0x30) = lVar13;
  *(undefined **)(puVar6 + 0x38) = &UNK_007e46d8;
  *(undefined **)(puVar6 + 0x40) = puVar7;
  puVar8 = &UNK_009b7c60;
  _swift_allocObject(&UNK_009b7c60,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_007e46e0;
  *(undefined **)(puVar8 + 0x30) = puVar6;
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  func_0x00089a2c(param_1,lVar12,puVar10);
  lVar2 = lRam0000000000af3938;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(lVar13);
  _swift_retain(puVar7);
  _swift_retain(puVar6);
  if (lVar2 != -1) {
    _swift_once(0xaf3938,FUN_001cc624);
  }
  uVar3 = uRam0000000000af3940;
  pcStack_88 = (code *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd00000000000004f;
  uStack_78 = 0x80000000008b9ae0;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  func_0x00089a2c(param_1,lVar12,puVar10);
  uVar9 = 0xaf3988;
  func_0x000115a8(0xaf3988,&UNK_007e4618);
  _swift_task_localValuePush(uVar3,&puStack_98,uVar9);
  FUN_001ce5c4(uVar14,&UNK_007e46e8,puVar8);
  _swift_task_localValuePop();
  _swift_bridgeObjectRelease(lVar13);
  _swift_release(puVar7);
  _swift_release(puVar8);
  _swift_release(puVar6);
  FUN_00089cec(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_00ac3720;
  _objc_allocWithZone();
  uStack_78 = 0x1d2678;
  puStack_98 = PTR___NSConcreteStackBlock_00999f30;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_0001d1e4;
  puStack_80 = &UNK_009b7c78;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  __Block_copy(ppuVar11);
  uVar4 = uStack_70;
  _swift_retain(uVar14);
  _swift_release(uVar4);
  func_0x00784f00();
  __Block_release(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    _swift_release(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1d0988);
  (*pcVar5)();
}



/* Entry: 001d15e8; end: 001d162b;  */

void FUN_001d15e8(void)

{
  _objc_opt_self(&PTR_PTR_00acb030);
  return;
}



/* Entry: 001d162c; end: 001d1643;  */

void FUN_001d162c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x001d163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 001d1644; end: 001d16d3;  */

void FUN_001d1644(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  pcVar10 = section_00000108.sectname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x10);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar10;
  *(long *)pcVar10 = unaff_x22;
  pcVar10[8] = -8;
  pcVar10[9] = '%';
  pcVar10[10] = '\x1d';
  pcVar10[0xb] = '\0';
  pcVar10[0xc] = '\0';
  pcVar10[0xd] = '\0';
  pcVar10[0xe] = '\0';
  pcVar10[0xf] = '\0';
  *(undefined8 *)(pcVar10 + 0x98) = uVar2;
  *(undefined8 *)(pcVar10 + 0xa0) = uVar4;
  pcVar10[0x101] = uVar5;
  *(undefined8 *)(pcVar10 + 0x88) = uVar1;
  *(undefined8 *)(pcVar10 + 0x90) = uVar3;
  pcVar10[0x100] = uVar6;
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  *(long *)(pcVar10 + 0xa8) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pcVar10 + 0xb0) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xb8) = uVar8;
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  *(long *)(pcVar10 + 0xc0) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pcVar10 + 200) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xd0) = uVar8;
  lVar7 = 0xaf3990;
  func_0x000115a8(0xaf3990,&UNK_007e4648);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xd8) = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xe0) = uVar8;
  lVar7 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  *(long *)(pcVar10 + 0xe8) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pcVar10 + 0xf0) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xf8) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cffc0,0,0);
  return;
}



/* Entry: 001d16d4; end: 001d1767;  */

void FUN_001d16d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  dword *pdVar8;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  pdVar8 = &section_00000068.reloff;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar8;
  *(long *)pdVar8 = unaff_x22;
  *(undefined8 *)(pdVar8 + 2) = 0x1d25ec;
  *(undefined8 *)(pdVar8 + 0x1c) = uVar3;
  *(undefined8 *)(pdVar8 + 0x1e) = uVar6;
  *(undefined8 *)(pdVar8 + 0x18) = uVar2;
  *(undefined8 *)(pdVar8 + 0x1a) = uVar5;
  *(undefined1 *)(pdVar8 + 0x26) = uVar7;
  *(undefined8 *)(pdVar8 + 0x14) = uVar1;
  *(undefined8 *)(pdVar8 + 0x16) = uVar4;
  *(undefined8 *)(pdVar8 + 0x12) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cedd8,0,0);
  return;
}



/* Entry: 001d1768; end: 001d17f7;  */

void FUN_001d1768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar9 = section_00000068.segname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar9;
  *(long *)pcVar9 = unaff_x22;
  *(qword *)(pcVar9 + 8) = 0x1d25f0;
  *(undefined8 *)(pcVar9 + 0x40) = uVar2;
  *(undefined8 *)(pcVar9 + 0x48) = uVar4;
  pcVar9[0x71] = uVar5;
  pcVar9[0x70] = uVar6;
  *(undefined8 *)(pcVar9 + 0x30) = uVar1;
  *(undefined8 *)(pcVar9 + 0x38) = uVar3;
  *(undefined8 *)(pcVar9 + 0x28) = param_1;
  lVar7 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar9 + 0x50) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf098,0,0);
  return;
}



/* Entry: 001d17f8; end: 001d1817;  */

void FUN_001d17f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 001d1818; end: 001d189b;  */

void FUN_001d1818(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  segment_command *psVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  psVar6 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar6;
  psVar6->cmd = (int)unaff_x22;
  psVar6->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar6->segname[0] = -0xc;
  psVar6->segname[1] = '%';
  psVar6->segname[2] = '\x1d';
  psVar6->segname[3] = '\0';
  psVar6->segname[4] = '\0';
  psVar6->segname[5] = '\0';
  psVar6->segname[6] = '\0';
  psVar6->segname[7] = '\0';
  iVar1 = *piVar2;
  puVar5 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  *(undefined8 **)(psVar6->segname + 8) = puVar5;
  *puVar5 = psVar6;
  puVar5[1] = 0x1d25e8;
                    /* WARNING: Could not recover jumptable at 0x001ce76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(puVar5,param_1);
  return;
}



/* Entry: 001d189c; end: 001d190b;  */

void FUN_001d189c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar5->segname[0] = -0x24;
  psVar5->segname[1] = '%';
  psVar5->segname[2] = '\x1d';
  psVar5->segname[3] = '\0';
  psVar5->segname[4] = '\0';
  psVar5->segname[5] = '\0';
  psVar5->segname[6] = '\0';
  psVar5->segname[7] = '\0';
  iVar1 = *piVar2;
  puVar4 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = FUN_001d0620;
                    /* WARNING: Could not recover jumptable at 0x001d061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(puVar4,param_1);
  return;
}



/* Entry: 001d190c; end: 001d197b;  */

void FUN_001d190c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar5->segname = FUN_001d197c;
  iVar1 = *piVar2;
  puVar4 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = FUN_001d0620;
                    /* WARNING: Could not recover jumptable at 0x001d061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(puVar4,param_1);
  return;
}



/* Entry: 001d197c; end: 001d19b7;  */

void FUN_001d197c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d19b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d19b8; end: 001d1a47;  */

undefined8 FUN_001d19b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xaf3990;
  func_0x000115a8(0xaf3990,&UNK_007e4648);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 001d1a48; end: 001d1a5b;  */

void FUN_001d1a48(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d1a5c; end: 001d1a9f;  */

void FUN_001d1a5c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 001d1aa0; end: 001d1acf;  */

void FUN_001d1aa0(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined1 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d1ad0; end: 001d1b5f;  */

void FUN_001d1ad0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  pcVar10 = section_00000108.sectname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x10);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar10;
  *(long *)pcVar10 = unaff_x22;
  *(code **)(pcVar10 + 8) = FUN_001d1b60;
  *(undefined8 *)(pcVar10 + 0x98) = uVar2;
  *(undefined8 *)(pcVar10 + 0xa0) = uVar4;
  pcVar10[0x101] = uVar5;
  *(undefined8 *)(pcVar10 + 0x88) = uVar1;
  *(undefined8 *)(pcVar10 + 0x90) = uVar3;
  pcVar10[0x100] = uVar6;
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  *(long *)(pcVar10 + 0xa8) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pcVar10 + 0xb0) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xb8) = uVar8;
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  *(long *)(pcVar10 + 0xc0) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pcVar10 + 200) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xd0) = uVar8;
  lVar7 = 0xaf3990;
  func_0x000115a8(0xaf3990,&UNK_007e4648);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xd8) = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xe0) = uVar8;
  lVar7 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  *(long *)(pcVar10 + 0xe8) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pcVar10 + 0xf0) = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0xf8) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cfa80,0,0);
  return;
}



/* Entry: 001d1b60; end: 001d1b9b;  */

void FUN_001d1b60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d1b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d1b9c; end: 001d1c2f;  */

void FUN_001d1b9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  dword *pdVar8;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  pdVar8 = &section_00000068.reloff;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar8;
  *(long *)pdVar8 = unaff_x22;
  *(undefined8 *)(pdVar8 + 2) = 0x1d25fc;
  *(undefined8 *)(pdVar8 + 0x1c) = uVar3;
  *(undefined8 *)(pdVar8 + 0x1e) = uVar6;
  *(undefined8 *)(pdVar8 + 0x18) = uVar2;
  *(undefined8 *)(pdVar8 + 0x1a) = uVar5;
  *(undefined1 *)(pdVar8 + 0x26) = uVar7;
  *(undefined8 *)(pdVar8 + 0x14) = uVar1;
  *(undefined8 *)(pdVar8 + 0x16) = uVar4;
  *(undefined8 *)(pdVar8 + 0x12) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cedd8,0,0);
  return;
}



/* Entry: 001d1c30; end: 001d1cbf;  */

void FUN_001d1c30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar9 = section_00000068.segname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar9;
  *(long *)pcVar9 = unaff_x22;
  *(qword *)(pcVar9 + 8) = 0x1d2600;
  *(undefined8 *)(pcVar9 + 0x40) = uVar2;
  *(undefined8 *)(pcVar9 + 0x48) = uVar4;
  pcVar9[0x71] = uVar5;
  pcVar9[0x70] = uVar6;
  *(undefined8 *)(pcVar9 + 0x30) = uVar1;
  *(undefined8 *)(pcVar9 + 0x38) = uVar3;
  *(undefined8 *)(pcVar9 + 0x28) = param_1;
  lVar7 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar9 + 0x50) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf098,0,0);
  return;
}



/* Entry: 001d1cc0; end: 001d1ce3;  */

void FUN_001d1cc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x007788d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_0099bf48)();
  return;
}



/* Entry: 001d1ce4; end: 001d1d0f;  */

void FUN_001d1ce4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d1d10; end: 001d1d93;  */

void FUN_001d1d10(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  segment_command *psVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  psVar6 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar6;
  psVar6->cmd = (int)unaff_x22;
  psVar6->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar6->segname[0] = '\x04';
  psVar6->segname[1] = '&';
  psVar6->segname[2] = '\x1d';
  psVar6->segname[3] = '\0';
  psVar6->segname[4] = '\0';
  psVar6->segname[5] = '\0';
  psVar6->segname[6] = '\0';
  psVar6->segname[7] = '\0';
  iVar1 = *piVar2;
  puVar5 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  *(undefined8 **)(psVar6->segname + 8) = puVar5;
  *puVar5 = psVar6;
  puVar5[1] = 0x1d25e8;
                    /* WARNING: Could not recover jumptable at 0x001ce76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(puVar5,param_1);
  return;
}



/* Entry: 001d1d94; end: 001d1e03;  */

void FUN_001d1d94(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar5->segname[0] = -0x20;
  psVar5->segname[1] = '%';
  psVar5->segname[2] = '\x1d';
  psVar5->segname[3] = '\0';
  psVar5->segname[4] = '\0';
  psVar5->segname[5] = '\0';
  psVar5->segname[6] = '\0';
  psVar5->segname[7] = '\0';
  iVar1 = *piVar2;
  puVar4 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = FUN_001d0620;
                    /* WARNING: Could not recover jumptable at 0x001d061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(puVar4,param_1);
  return;
}



/* Entry: 001d1e04; end: 001d1e73;  */

void FUN_001d1e04(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar5->segname[0] = -0x1c;
  psVar5->segname[1] = '%';
  psVar5->segname[2] = '\x1d';
  psVar5->segname[3] = '\0';
  psVar5->segname[4] = '\0';
  psVar5->segname[5] = '\0';
  psVar5->segname[6] = '\0';
  psVar5->segname[7] = '\0';
  iVar1 = *piVar2;
  puVar4 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = FUN_001d0620;
                    /* WARNING: Could not recover jumptable at 0x001d061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(puVar4,param_1);
  return;
}



/* Entry: 001d1e74; end: 001d1e7f;  */

void FUN_001d1e74(void)

{
  long unaff_x20;
  
  FUN_001d036c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
               *(undefined8 *)(unaff_x20 + 0x40),FUN_001d1eac);
  return;
}



/* Entry: 001d1e80; end: 001d1eab;  */

void FUN_001d1e80(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_001d036c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
               *(undefined8 *)(unaff_x20 + 0x40),param_1);
  return;
}



/* Entry: 001d1eac; end: 001d1ed3;  */

void FUN_001d1eac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 001d1ed4; end: 001d1f53;  */

void FUN_001d1ed4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar6 = section_00000068.sectname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar6;
  *(long *)pcVar6 = unaff_x22;
  pcVar6[8] = '\b';
  pcVar6[9] = '&';
  pcVar6[10] = '\x1d';
  pcVar6[0xb] = '\0';
  pcVar6[0xc] = '\0';
  pcVar6[0xd] = '\0';
  pcVar6[0xe] = '\0';
  pcVar6[0xf] = '\0';
  *(undefined8 *)(pcVar6 + 0x50) = uVar2;
  *(undefined8 *)(pcVar6 + 0x58) = uVar4;
  pcVar6[0x60] = uVar5;
  *(undefined8 *)(pcVar6 + 0x40) = uVar1;
  *(undefined8 *)(pcVar6 + 0x48) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf768,0,0);
  return;
}



/* Entry: 001d1f54; end: 001d1fe7;  */

void FUN_001d1f54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  dword *pdVar8;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  pdVar8 = &section_00000068.reloff;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar8;
  *(long *)pdVar8 = unaff_x22;
  *(undefined8 *)(pdVar8 + 2) = 0x1d260c;
  *(undefined8 *)(pdVar8 + 0x1c) = uVar3;
  *(undefined8 *)(pdVar8 + 0x1e) = uVar6;
  *(undefined8 *)(pdVar8 + 0x18) = uVar2;
  *(undefined8 *)(pdVar8 + 0x1a) = uVar5;
  *(undefined1 *)(pdVar8 + 0x26) = uVar7;
  *(undefined8 *)(pdVar8 + 0x14) = uVar1;
  *(undefined8 *)(pdVar8 + 0x16) = uVar4;
  *(undefined8 *)(pdVar8 + 0x12) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cedd8,0,0);
  return;
}



/* Entry: 001d1fe8; end: 001d1fef;  */

void FUN_001d1fe8(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d1ff0; end: 001d207f;  */

void FUN_001d1ff0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar9 = section_00000068.segname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar9;
  *(long *)pcVar9 = unaff_x22;
  *(qword *)(pcVar9 + 8) = 0x1d2610;
  *(undefined8 *)(pcVar9 + 0x40) = uVar2;
  *(undefined8 *)(pcVar9 + 0x48) = uVar4;
  pcVar9[0x71] = uVar5;
  pcVar9[0x70] = uVar6;
  *(undefined8 *)(pcVar9 + 0x30) = uVar1;
  *(undefined8 *)(pcVar9 + 0x38) = uVar3;
  *(undefined8 *)(pcVar9 + 0x28) = param_1;
  lVar7 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar9 + 0x50) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf098,0,0);
  return;
}



/* Entry: 001d2080; end: 001d2083;  */

void FUN_001d2080(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d2084; end: 001d2103;  */

void FUN_001d2084(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar6 = section_00000068.sectname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar6;
  *(long *)pcVar6 = unaff_x22;
  pcVar6[8] = '\x14';
  pcVar6[9] = '&';
  pcVar6[10] = '\x1d';
  pcVar6[0xb] = '\0';
  pcVar6[0xc] = '\0';
  pcVar6[0xd] = '\0';
  pcVar6[0xe] = '\0';
  pcVar6[0xf] = '\0';
  *(undefined8 *)(pcVar6 + 0x50) = uVar2;
  *(undefined8 *)(pcVar6 + 0x58) = uVar4;
  pcVar6[0x60] = uVar5;
  *(undefined8 *)(pcVar6 + 0x40) = uVar1;
  *(undefined8 *)(pcVar6 + 0x48) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf5f0,0,0);
  return;
}



/* Entry: 001d2104; end: 001d2107;  */

void FUN_001d2104(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d2108; end: 001d219b;  */

void FUN_001d2108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  dword *pdVar8;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  pdVar8 = &section_00000068.reloff;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar8;
  *(long *)pdVar8 = unaff_x22;
  *(undefined8 *)(pdVar8 + 2) = 0x1d2618;
  *(undefined8 *)(pdVar8 + 0x1c) = uVar3;
  *(undefined8 *)(pdVar8 + 0x1e) = uVar6;
  *(undefined8 *)(pdVar8 + 0x18) = uVar2;
  *(undefined8 *)(pdVar8 + 0x1a) = uVar5;
  *(undefined1 *)(pdVar8 + 0x26) = uVar7;
  *(undefined8 *)(pdVar8 + 0x14) = uVar1;
  *(undefined8 *)(pdVar8 + 0x16) = uVar4;
  *(undefined8 *)(pdVar8 + 0x12) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cedd8,0,0);
  return;
}



/* Entry: 001d219c; end: 001d222b;  */

void FUN_001d219c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar9 = section_00000068.segname + 8;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar9;
  *(long *)pcVar9 = unaff_x22;
  *(qword *)(pcVar9 + 8) = 0x1d261c;
  *(undefined8 *)(pcVar9 + 0x40) = uVar2;
  *(undefined8 *)(pcVar9 + 0x48) = uVar4;
  pcVar9[0x71] = uVar5;
  pcVar9[0x70] = uVar6;
  *(undefined8 *)(pcVar9 + 0x30) = uVar1;
  *(undefined8 *)(pcVar9 + 0x38) = uVar3;
  *(undefined8 *)(pcVar9 + 0x28) = param_1;
  lVar7 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar9 + 0x50) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf098,0,0);
  return;
}



/* Entry: 001d222c; end: 001d2247;  */

void FUN_001d222c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_001cf884(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 001d2248; end: 001d22bb;  */

void FUN_001d2248(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar7 = section_00000068.sectname + 8;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar7;
  *(long *)pcVar7 = unaff_x22;
  pcVar7[8] = ' ';
  pcVar7[9] = '&';
  pcVar7[10] = '\x1d';
  pcVar7[0xb] = '\0';
  pcVar7[0xc] = '\0';
  pcVar7[0xd] = '\0';
  pcVar7[0xe] = '\0';
  pcVar7[0xf] = '\0';
  *(undefined8 *)(pcVar7 + 0x50) = uVar5;
  *(undefined8 *)(pcVar7 + 0x58) = uVar2;
  pcVar7[0x68] = uVar3;
  *(undefined8 *)(pcVar7 + 0x40) = uVar6;
  *(undefined8 *)(pcVar7 + 0x48) = uVar1;
  uVar5 = 0;
  __sScMMa();
  puVar4 = PTR___sScMMa_0099be80;
  uVar6 = uVar5;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar7 + 0x60) = uVar6;
  uVar6 = 0xae77c8;
  FUN_001d24e8(0xae77c8,puVar4,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cf368,uVar5,uVar6);
  return;
}



/* Entry: 001d22bc; end: 001d22df;  */

void FUN_001d22bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d22e0; end: 001d234f;  */

void FUN_001d22e0(undefined8 param_1)

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
  builtin_strncpy(psVar3->segname,"$&\x1d",4);
  psVar3->segname[4] = '\0';
  psVar3->segname[5] = '\0';
  psVar3->segname[6] = '\0';
  psVar3->segname[7] = '\0';
  FUN_0003eb58(psVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 001d2350; end: 001d2387;  */

void FUN_001d2350(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d2388; end: 001d241b;  */

void FUN_001d2388(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  dword *pdVar8;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  pdVar8 = &section_00000068.reloff;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar8;
  *(long *)pdVar8 = unaff_x22;
  *(undefined8 *)(pdVar8 + 2) = 0x1d2628;
  *(undefined8 *)(pdVar8 + 0x1c) = uVar3;
  *(undefined8 *)(pdVar8 + 0x1e) = uVar6;
  *(undefined8 *)(pdVar8 + 0x18) = uVar2;
  *(undefined8 *)(pdVar8 + 0x1a) = uVar5;
  *(undefined1 *)(pdVar8 + 0x26) = uVar7;
  *(undefined8 *)(pdVar8 + 0x14) = uVar1;
  *(undefined8 *)(pdVar8 + 0x16) = uVar4;
  *(undefined8 *)(pdVar8 + 0x12) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cedd8,0,0);
  return;
}



/* Entry: 001d241c; end: 001d2457;  */

void FUN_001d241c(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}


