/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001ca104; end: 001ca133;  */

void FUN_001ca104(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_001c8c20(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 001ca134; end: 001ca15f;  */

void FUN_001ca134(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_0099b720);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  uStack_60 = uVar3;
  uStack_58 = param_1;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  FUN_001d496c(&lStack_48,0x1ca11c,auStack_70,uVar3);
  if (lStack_48 != 0) {
    (**(code **)(lVar4 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar1);
    FUN_00087fac(auStack_80 + -extraout_x8,lStack_48,lVar1);
  }
  return;
}



/* Entry: 001ca160; end: 001ca21f;  */

void FUN_001ca160(void)

{
  undefined8 uVar1;
  segment_command *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x78);
  psVar2 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x80) = psVar2;
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar4,&UNK_0084673c,&UNK_00846744);
  psVar2->cmd = (int)unaff_x22;
  psVar2->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar2->segname = FUN_001ca220;
                    /* WARNING: Could not recover jumptable at 0x001ca21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001ca3f0(*(undefined8 *)(unaff_x22 + 0x38),&UNK_007e43a0,unaff_x22 + 0x10,FUN_001ca6f4,
               unaff_x22 + 0x40,0,0,uVar3);
  return;
}



/* Entry: 001ca220; end: 001ca25b;  */

void FUN_001ca220(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x001ca258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001ca25c; end: 001ca343;  */

void FUN_001ca25c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_0084673c,&UNK_00846744);
  uVar3 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar4 = 0;
  __ss6ResultOMa(0,uVar2,uVar3,PTR___ss5ErrorWS_0099b720);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar5;
  piVar7 = *(int **)(param_3 + 0x10);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_001ca344;
                    /* WARNING: Could not recover jumptable at 0x001ca340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(plVar6,uVar5,param_2,param_3);
  return;
}



/* Entry: 001ca344; end: 001ca38b;  */

void FUN_001ca344(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001ca38c,0,0);
  return;
}



/* Entry: 001ca38c; end: 001ca3ef;  */

/* WARNING: Removing unreachable block (ram,0x001ca3c0) */

void FUN_001ca38c(void)

{
  long unaff_x22;
  
  FUN_00057a00(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),unaff_x22 + 0x10)
  ;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x001ca3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001ca3f0; end: 001ca527;  */

void FUN_001ca3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  dword *pdVar3;
  long unaff_x22;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_0099c010
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x1ca564;
                    /* WARNING: Could not recover jumptable at 0x00778fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_0099c008
    )(plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  pdVar3 = &segment_command_00000020.nsects;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(code **)(pdVar3 + 2) = FUN_001ca528;
                    /* WARNING: Could not recover jumptable at 0x001ca524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001ca71c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 001ca528; end: 001ca59f;  */

void FUN_001ca528(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001ca560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001ca5a0; end: 001ca60f;  */

void FUN_001ca5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  qword *pqVar7;
  int *piVar8;
  qword unaff_x22;
  
  pqVar7 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar7;
  *pqVar7 = unaff_x22;
  pqVar7[1] = (qword)FUN_001ca610;
  pqVar7[3] = param_1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_4,param_3,&UNK_0084673c,&UNK_00846744);
  uVar3 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar4 = 0;
  __ss6ResultOMa(0,uVar2,uVar3,PTR___ss5ErrorWS_0099b720);
  pqVar7[4] = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar7[5] = uVar5;
  piVar8 = *(int **)(param_4 + 0x10);
  iVar1 = *piVar8;
  puVar6 = (undefined8 *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  pqVar7[6] = (qword)puVar6;
  *puVar6 = pqVar7;
  puVar6[1] = FUN_001ca344;
                    /* WARNING: Could not recover jumptable at 0x001ca340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(puVar6,uVar5,param_3,param_4);
  return;
}



/* Entry: 001ca610; end: 001ca64b;  */

void FUN_001ca610(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001ca648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001ca64c; end: 001ca6b7;  */

void FUN_001ca64c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  qword *pqVar8;
  segment_command *psVar9;
  int *piVar10;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  psVar9 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar9;
  psVar9->cmd = (int)unaff_x22;
  psVar9->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar9->segname = FUN_001ca6b8;
  pqVar8 = &segment_command_00000020.vmsize;
  _swift_task_alloc(0x40,uVar11);
  *(qword **)(psVar9->segname + 8) = pqVar8;
  *pqVar8 = (qword)psVar9;
  pqVar8[1] = (qword)FUN_001ca610;
  pqVar8[3] = param_1;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar3,uVar2,&UNK_0084673c,&UNK_00846744);
  uVar11 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar5 = 0;
  __ss6ResultOMa(0,uVar4,uVar11,PTR___ss5ErrorWS_0099b720);
  pqVar8[4] = lVar5;
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar8[5] = uVar6;
  piVar10 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar10;
  puVar7 = (undefined8 *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  pqVar8[6] = (qword)puVar7;
  *puVar7 = pqVar8;
  puVar7[1] = FUN_001ca344;
                    /* WARNING: Could not recover jumptable at 0x001ca340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(puVar7,uVar6,uVar2,lVar3);
  return;
}



/* Entry: 001ca6b8; end: 001ca6f3;  */

void FUN_001ca6b8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001ca6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001ca6f4; end: 001ca71b;  */

void FUN_001ca6f4(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x18))(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 001ca71c; end: 001ca78b;  */

void FUN_001ca71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  if (param_6 == 0) {
    param_6 = 0;
    param_7 = 0;
  }
  else {
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
  }
  *(long *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001ca78c,param_6);
  return;
}



/* Entry: 001ca78c; end: 001ca7f7;  */

void FUN_001ca78c(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  piVar4 = *(int **)(unaff_x22 + 0x18);
  _swift_task_addCancellationHandler(uVar2,*(undefined8 *)(unaff_x22 + 0x30));
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_001ca7f8;
                    /* WARNING: Could not recover jumptable at 0x001ca7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar3,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Entry: 001ca7f8; end: 001ca84f;  */

void FUN_001ca7f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x1ca884;
  }
  else {
    pcVar1 = FUN_001ca850;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)
            (pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 001ca850; end: 001ca8b7;  */

void FUN_001ca850(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x001ca880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001ca8b8; end: 001ca8e7;  */

void FUN_001ca8b8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 001ca8e8; end: 001ca8f7;  */

void FUN_001ca8e8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_0099b720);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  uStack_60 = uVar3;
  uStack_58 = param_1;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  FUN_001d496c(&lStack_48,0x1ca11c,auStack_70,uVar3);
  if (lStack_48 != 0) {
    (**(code **)(lVar4 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar1);
    FUN_00087fac(auStack_80 + -extraout_x8,lStack_48,lVar1);
  }
  return;
}



/* Entry: 001ca8f8; end: 001ca947;  */

void FUN_001ca8f8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_001c8698();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 001ca948; end: 001ca967;  */

void FUN_001ca948(void)

{
  FUN_001ca8f8();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 001ca968; end: 001ca977;  */

void FUN_001ca968(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *unaff_x20;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_0099b720);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar2 = 0xff;
  uStack_40 = uVar3;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  FUN_001d496c(&lStack_38,0x1c8f54,auStack_50,uVar3);
  if (lStack_38 != 0) {
    uVar3 = 0;
    __sScEMa();
    uVar2 = uVar3;
    func_0x001c8f6c();
    _swift_allocError(uVar3,uVar2,0,0);
    __sS2cEycfC(uVar2);
    *puVar4 = uVar3;
    _swift_storeEnumTagMultiPayload(puVar4,lVar1,1);
    FUN_00087fac(puVar4,lStack_38,lVar1);
  }
  return;
}



/* Entry: 001ca978; end: 001ca9b7;  */

void FUN_001ca978(void)

{
  FUN_001ca8e8();
  return;
}



/* Entry: 001ca9b8; end: 001ca9bb;  */

void FUN_001ca9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 001ca9bc; end: 001ca9ff;  */

void FUN_001ca9bc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_0099ae88 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 001caa00; end: 001caa0b;  */

void FUN_001caa00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_0084675c);
  return;
}



/* Entry: 001caa0c; end: 001caa5b;  */

void __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
               (void)

{
  FUN_001cbe34();
  return;
}



/* Entry: 001caa5c; end: 001caa77;  */

void FUN_001caa5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001caa78,0,0);
  return;
}



/* Entry: 001caa78; end: 001cab37;  */

void FUN_001caa78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar5,PTR___sSciTL_0099bfb8,PTR___s7ElementSciTl_0099bdd0)
  ;
  uVar3 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar2);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar4 = (long *)(ulong)*(uint *)(
                                   PTR___sScisE6reduce4into_qd__qd__n_yqd__z_7ElementQztYaKXEtYaKlFTu_0099bfc8
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  uVar5 = 0;
  __sSaMa(0,uVar2);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_001cab38;
                    /* WARNING: Could not recover jumptable at 0x00778950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScisE6reduce4into_qd__qd__n_yqd__z_7ElementQztYaKXEtYaKlF_0099bfc0)
            (unaff_x22 + 0x30,(undefined8 *)(unaff_x22 + 0x38),&UNK_007e4448,unaff_x22 + 0x10,
             *(undefined8 *)(unaff_x22 + 0x40),uVar5,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 001cab38; end: 001cab93;  */

void FUN_001cab38(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001cab94;
  }
  else {
    pcVar1 = (code *)0x1caba4;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001cab94; end: 001cabaf;  */

void FUN_001cab94(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x001caba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 001cabb0; end: 001cac27;  */

void FUN_001cabb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSciTL_0099bfb8,PTR___s7ElementSciTl_0099bdd0);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cac28,0,0);
  return;
}



/* Entry: 001cac28; end: 001cac97;  */

void FUN_001cac28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0x18),uVar2);
  uVar3 = 0;
  __sSaMa(0,uVar2);
  __sSa6appendyyxnF(uVar1,uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001cac94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cac98; end: 001cacff;  */

void FUN_001cac98(qword param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  qword *pqVar5;
  long unaff_x20;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pqVar5 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar5;
  *pqVar5 = unaff_x22;
  pqVar5[1] = (qword)FUN_001cad00;
  pqVar5[2] = param_1;
  pqVar5[3] = param_2;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,PTR___sSciTL_0099bfb8,PTR___s7ElementSciTl_0099bdd0)
  ;
  pqVar5[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  pqVar5[5] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar5[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cac28,0,0);
  return;
}



/* Entry: 001cad00; end: 001cada3;  */

void FUN_001cad00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001cad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001cada4; end: 001cae87;  */

/* WARNING: Removing unreachable block (ram,0x001d2930) */

void FUN_001cada4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dword *pdVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___sSiN_0099b2c0,uVar8,0,0);
  uVar2 = 0;
  __sSaMa(0,uVar8);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
  pdVar3 = &section_000000b8.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0xd0) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(code **)(pdVar3 + 2) = FUN_001cae88;
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  *(undefined8 *)(pdVar3 + 0x24) = uVar9;
  *(undefined8 *)(pdVar3 + 0x26) = uVar8;
  *(undefined8 *)(pdVar3 + 0x20) = uVar2;
  *(long *)(pdVar3 + 0x22) = lVar6;
  *(long *)(pdVar3 + 0x1c) = unaff_x22 + 0x10;
  *(undefined8 *)(pdVar3 + 0x1e) = uVar1;
  *(undefined8 *)(pdVar3 + 0x18) = 0;
  *(undefined **)(pdVar3 + 0x1a) = &UNK_007e4458;
  *(long *)(pdVar3 + 0x14) = unaff_x22 + 0x68;
  *(undefined8 *)(pdVar3 + 0x16) = 0;
  lVar7 = *(long *)(lVar6 + -8);
  *(long *)(pdVar3 + 0x28) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4,uVar1,uVar2);
  *(ulong *)(pdVar3 + 0x2a) = uVar4;
  lVar7 = 0;
  __ss6ResultOMa(0,uVar2,lVar6,uVar9);
  *(long *)(pdVar3 + 0x2c) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pdVar3 + 0x2e) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar3 + 0x30) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar3 + 0x32) = uVar4;
  *(undefined8 *)(pdVar3 + 0x34) = 0;
  *(undefined8 *)(pdVar3 + 0x36) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d297c,0);
  return;
}



/* Entry: 001cae88; end: 001caf67;  */

void FUN_001cae88(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd0));
  if (unaff_x20 == 0) {
    uVar1 = 0x1caee0;
  }
  else {
    uVar1 = 0x1caf1c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(uVar1,0,0);
  return;
}



/* Entry: 001caf68; end: 001cb187;  */

void FUN_001caf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_11;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_12;
  *(long *)(unaff_x22 + 0x98) = param_9;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_10;
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(long *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  lVar5 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  lVar5 = *(long *)(param_9 + -8);
  *(long *)(unaff_x22 + 200) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_10,param_7,PTR___sSTTL_0099b0d0,PTR___s7ElementSTTl_0099ae60);
  *(long *)(unaff_x22 + 0xd8) = lVar5;
  lVar6 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar6;
  lVar6 = *(long *)(lVar6 + 0x40);
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  uVar2 = lVar6 + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  puVar1 = PTR___sSiN_0099b2c0;
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,PTR___sSiN_0099b2c0,param_8,0,0);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar4;
  lVar6 = 0;
  __sSqMa(0,uVar4);
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  lVar6 = 0;
  __sSqMa(0,param_8);
  *(long *)(unaff_x22 + 0x110) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar2;
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar1,lVar5,"offset element ",0);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar4;
  lVar5 = 0;
  __sSqMa(0,uVar4);
  *(long *)(unaff_x22 + 0x130) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar2;
  lVar5 = 0;
  __ss18EnumeratedSequenceVMa(0,param_7,param_10);
  *(long *)(unaff_x22 + 0x150) = lVar5;
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  lVar5 = 0;
  __ss18EnumeratedSequenceV8IteratorVMa(0,param_7,param_10);
  *(long *)(unaff_x22 + 0x160) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x168) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cb188,0,0);
  return;
}



/* Entry: 001cb188; end: 001cb477;  */

void FUN_001cb188(void)

{
  long lVar1;
  undefined *puVar2;
  qword *pqVar3;
  qword qVar4;
  char *pcVar5;
  segment_command *psVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *pcVar15;
  qword unaff_x22;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar10 = *(long *)(unaff_x22 + 0x138);
  lVar7 = *(long *)(unaff_x22 + 0x128);
  lVar18 = *(long *)(unaff_x22 + 0xe0);
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF
            (*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0xa0));
  __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(uVar13,uVar21);
  lVar16 = 0;
  while( true ) {
    uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
    __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF
              (uVar21,*(undefined8 *)(unaff_x22 + 0x160));
    (**(code **)(lVar10 + 0x20))(uVar17,uVar21,uVar12);
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(uVar17,1,uVar13);
    if ((int)uVar17 == 1) {
      lVar7 = *(long *)(unaff_x22 + 0x118);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar10 = *(long *)(unaff_x22 + 0xb8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
      puVar22 = *(undefined8 **)(unaff_x22 + 0x60);
      (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))
                (*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x160));
      pcVar15 = *(code **)(lVar10 + 0x38);
      *(code **)(unaff_x22 + 0x178) = pcVar15;
      (*pcVar15)(uVar13,1,1,uVar21);
      uVar21 = uVar13;
      FUN_001cbb0c(uVar13,lVar16,uVar8);
      (**(code **)(lVar7 + 8))(uVar13,uVar8);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar21;
      uVar13 = *puVar22;
      FUN_001d2724(uVar13,uVar12,uVar17,uVar11);
      *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x180) = uVar21;
      uVar21 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
      pqVar3 = &segment_command_00000020.vmsize;
      _swift_task_alloc();
      *(qword **)(unaff_x22 + 0x188) = pqVar3;
      lVar16 = 0;
      func_0x001d4134(0,uVar21,uVar17,uVar13);
      *pqVar3 = unaff_x22;
      pqVar3[1] = (qword)FUN_001cb478;
      qVar4 = *(qword *)(unaff_x22 + 0x108);
      pqVar3[2] = *(qword *)(unaff_x22 + 0xd0);
      lVar10 = *(long *)(lVar16 + 0x18);
      pqVar3[3] = lVar10;
      lVar7 = *(long *)(lVar10 + -8);
      pqVar3[4] = lVar7;
      uVar9 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      pqVar3[5] = uVar9;
      pcVar5 = section_00000068.segname + 8;
      _swift_task_alloc();
      pqVar3[6] = (qword)pcVar5;
      lVar7 = 0;
      func_0x001d3ae4(0,*(undefined8 *)(lVar16 + 0x10),lVar10,*(undefined8 *)(lVar16 + 0x20));
      *(qword **)pcVar5 = pqVar3;
      *(code **)(pcVar5 + 8) = FUN_001d27dc;
      *(undefined8 *)(pcVar5 + 0x20) = 0;
      *(ulong *)(pcVar5 + 0x28) = uVar9;
      *(qword *)(pcVar5 + 0x10) = qVar4;
      *(undefined8 *)(pcVar5 + 0x18) = 0;
      lVar10 = *(long *)(lVar7 + 0x18);
      *(long *)(pcVar5 + 0x30) = lVar10;
      lVar16 = *(long *)(lVar10 + -8);
      *(long *)(pcVar5 + 0x38) = lVar16;
      uVar9 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 0x40) = uVar9;
      uVar13 = *(undefined8 *)(lVar7 + 0x10);
      *(undefined8 *)(pcVar5 + 0x48) = uVar13;
      uVar21 = 0xff;
      __ss6ResultOMa(0xff,uVar13,lVar10,*(undefined8 *)(lVar7 + 0x20));
      *(undefined8 *)(pcVar5 + 0x50) = uVar21;
      lVar16 = 0;
      __sSqMa(0,uVar21);
      *(long *)(pcVar5 + 0x58) = lVar16;
      lVar16 = *(long *)(lVar16 + -8);
      *(long *)(pcVar5 + 0x60) = lVar16;
      uVar9 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 0x68) = uVar9;
      psVar6 = &segment_command_00000020;
      _swift_task_alloc();
      *(segment_command **)(pcVar5 + 0x70) = psVar6;
      uVar13 = 0;
      __sScGMa(0,uVar21);
      *(char **)psVar6 = pcVar5;
      *(code **)psVar6->segname = FUN_001d357c;
                    /* WARNING: Could not recover jumptable at 0x001d3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_001d36e0(uVar9,0,0,uVar13);
      return;
    }
    uVar21 = **(undefined8 **)(unaff_x22 + 0x148);
    pcVar15 = *(code **)(lVar18 + 0x20);
    (*pcVar15)(*(undefined8 *)(unaff_x22 + 0xf8),
               (long)*(undefined8 **)(unaff_x22 + 0x148) + (long)*(int *)(lVar7 + 0x30),
               *(undefined8 *)(unaff_x22 + 0xd8));
    if (SCARRY8(lVar16,1)) break;
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar1 = *(long *)(unaff_x22 + 0xe8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x78);
    (**(code **)(lVar18 + 0x10))(uVar12,uVar13,uVar19);
    uVar9 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar14 = uVar9 + 0x60 & (uVar9 ^ 0xffffffffffffffff);
    puVar2 = &UNK_009b73f0;
    _swift_allocObject(&UNK_009b73f0,uVar14 + lVar1,uVar9 | 7);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x28) = uVar28;
    *(undefined8 *)(puVar2 + 0x20) = uVar27;
    *(undefined8 *)(puVar2 + 0x38) = uVar25;
    *(undefined8 *)(puVar2 + 0x30) = uVar23;
    *(undefined8 *)(puVar2 + 0x40) = uVar20;
    *(undefined8 *)(puVar2 + 0x48) = uVar21;
    *(undefined8 *)(puVar2 + 0x58) = uVar26;
    *(undefined8 *)(puVar2 + 0x50) = uVar24;
    (*pcVar15)(puVar2 + uVar14,uVar12,uVar19);
    uVar21 = 0;
    func_0x001d3ae4(0,uVar17,uVar23,uVar20);
    _swift_retain(uVar11);
    FUN_001d2694(uVar8,&UNK_007e4468,puVar2,uVar21);
    (**(code **)(lVar18 + 8))(uVar13,uVar19);
    lVar16 = lVar16 + 1;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1cb478);
  (*pcVar15)();
}



/* Entry: 001cb478; end: 001cb4cf;  */

void FUN_001cb478(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x188));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001cb4d0;
  }
  else {
    pcVar1 = FUN_001cb774;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001cb4d0; end: 001cb773;  */

void FUN_001cb4d0(void)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  qword *pqVar6;
  long lVar7;
  qword qVar8;
  ulong uVar9;
  char *pcVar10;
  segment_command *psVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  qword unaff_x22;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 *puVar27;
  
  lVar7 = *(long *)(unaff_x22 + 0x100);
  plVar1 = *(long **)(unaff_x22 + 0x108);
  plVar3 = plVar1;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(plVar1,1,lVar7);
  if ((int)plVar3 == 1) {
    uVar24 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar27 = *(undefined8 **)(unaff_x22 + 0x58);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = 0;
    __sSaMa(0,*(undefined8 *)(unaff_x22 + 0x110));
    puVar5 = PTR___sSayxGSTsMc_0099b1f0;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar4);
    pcVar26 = FUN_001cbc14;
    __sSTsE10compactMapySayqd__Gqd__Sg7ElementQzKXEKlF
              (FUN_001cbc14,unaff_x22 + 0x10,uVar4,uVar19,puVar5);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x48));
    *puVar27 = pcVar26;
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(plVar1);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x001cb624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  pcVar26 = *(code **)(unaff_x22 + 0x178);
  lVar14 = *(long *)(unaff_x22 + 0x118);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar22 = *(long *)(unaff_x22 + 0xb8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar20 = *plVar1;
  (**(code **)(lVar22 + 0x20))(uVar18,(long)plVar1 + (long)*(int *)(lVar7 + 0x30),uVar21);
  (**(code **)(lVar22 + 0x10))(uVar16,uVar18,uVar21);
  (*pcVar26)(uVar16,0,1,uVar21);
  __sSaMa(0,uVar25);
  __sSa21_makeMutableAndUniqueyyF();
  lVar17 = *(long *)(unaff_x22 + 0x48);
  FUN_001cbac8(lVar20,lVar17,uVar25);
  lVar7 = lVar17;
  __ss12_ArrayBufferV7_natives011_ContiguousaB0VyxGvg(lVar17,uVar25);
  bVar2 = *(byte *)(lVar14 + 0x50);
  _swift_release();
  (**(code **)(lVar14 + 0x28))
            (lVar7 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
             *(long *)(lVar14 + 0x48) * lVar20,uVar16,uVar25);
  (**(code **)(lVar22 + 8))(uVar18,uVar21);
  *(long *)(unaff_x22 + 0x180) = lVar17;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  pqVar6 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x188) = pqVar6;
  lVar7 = 0;
  func_0x001d4134(0,uVar18,uVar21,uVar16);
  *pqVar6 = unaff_x22;
  pqVar6[1] = (qword)FUN_001cb478;
  qVar8 = *(qword *)(unaff_x22 + 0x108);
  pqVar6[2] = *(qword *)(unaff_x22 + 0xd0);
  lVar22 = *(long *)(lVar7 + 0x18);
  pqVar6[3] = lVar22;
  lVar14 = *(long *)(lVar22 + -8);
  pqVar6[4] = lVar14;
  uVar9 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar6[5] = uVar9;
  pcVar10 = section_00000068.segname + 8;
  _swift_task_alloc();
  pqVar6[6] = (qword)pcVar10;
  lVar14 = 0;
  func_0x001d3ae4(0,*(undefined8 *)(lVar7 + 0x10),lVar22,*(undefined8 *)(lVar7 + 0x20));
  *(qword **)pcVar10 = pqVar6;
  *(code **)(pcVar10 + 8) = FUN_001d27dc;
  *(undefined8 *)(pcVar10 + 0x20) = 0;
  *(ulong *)(pcVar10 + 0x28) = uVar9;
  *(qword *)(pcVar10 + 0x10) = qVar8;
  *(undefined8 *)(pcVar10 + 0x18) = 0;
  lVar22 = *(long *)(lVar14 + 0x18);
  *(long *)(pcVar10 + 0x30) = lVar22;
  lVar7 = *(long *)(lVar22 + -8);
  *(long *)(pcVar10 + 0x38) = lVar7;
  uVar9 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0x40) = uVar9;
  uVar18 = *(undefined8 *)(lVar14 + 0x10);
  *(undefined8 *)(pcVar10 + 0x48) = uVar18;
  uVar16 = 0xff;
  __ss6ResultOMa(0xff,uVar18,lVar22,*(undefined8 *)(lVar14 + 0x20));
  *(undefined8 *)(pcVar10 + 0x50) = uVar16;
  lVar7 = 0;
  __sSqMa(0,uVar16);
  *(long *)(pcVar10 + 0x58) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(pcVar10 + 0x60) = lVar7;
  uVar9 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar10 + 0x68) = uVar9;
  psVar11 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(pcVar10 + 0x70) = psVar11;
  uVar18 = 0;
  __sScGMa(0,uVar16);
  *(char **)psVar11 = pcVar10;
  *(code **)psVar11->segname = FUN_001d357c;
                    /* WARNING: Could not recover jumptable at 0x001d3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d36e0(uVar9,0,0,uVar18);
  return;
}



/* Entry: 001cb774; end: 001cb85b;  */

void FUN_001cb774(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar3 = *(long *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x180));
  (**(code **)(lVar3 + 0x20))(uVar13,uVar6,uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x001cb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cb85c; end: 001cb917;  */

void FUN_001cb85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  dword *pdVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
  pdVar9 = &section_00000158.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar9;
  *(long *)pdVar9 = unaff_x22;
  *(code **)(pdVar9 + 2) = FUN_001cbe30;
  *(undefined8 *)(pdVar9 + 0x2a) = uVar8;
  *(undefined8 *)(pdVar9 + 0x2c) = param_3;
  *(long *)(pdVar9 + 0x26) = lVar11;
  *(undefined8 *)(pdVar9 + 0x28) = uVar14;
  *(undefined8 *)(pdVar9 + 0x22) = uVar1;
  *(long *)(pdVar9 + 0x24) = lVar12;
  *(undefined8 *)(pdVar9 + 0x1e) = uVar4;
  *(undefined8 *)(pdVar9 + 0x20) = uVar13;
  *(undefined8 *)(pdVar9 + 0x1a) = uVar3;
  *(undefined8 *)(pdVar9 + 0x1c) = uVar2;
  *(undefined8 *)(pdVar9 + 0x16) = param_1;
  *(undefined8 *)(pdVar9 + 0x18) = param_2;
  lVar10 = *(long *)(lVar12 + -8);
  *(long *)(pdVar9 + 0x2e) = lVar10;
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x30) = uVar6;
  lVar10 = *(long *)(lVar11 + -8);
  *(long *)(pdVar9 + 0x32) = lVar10;
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x34) = uVar6;
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar14,uVar1,PTR___sSTTL_0099b0d0,PTR___s7ElementSTTl_0099ae60);
  *(long *)(pdVar9 + 0x36) = lVar10;
  lVar11 = *(long *)(lVar10 + -8);
  *(long *)(pdVar9 + 0x38) = lVar11;
  lVar11 = *(long *)(lVar11 + 0x40);
  *(long *)(pdVar9 + 0x3a) = lVar11;
  uVar6 = lVar11 + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x3c) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x3e) = uVar6;
  puVar5 = PTR___sSiN_0099b2c0;
  uVar8 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,PTR___sSiN_0099b2c0,lVar12,0,0);
  *(undefined8 *)(pdVar9 + 0x40) = uVar8;
  lVar11 = 0;
  __sSqMa(0,uVar8);
  uVar6 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x42) = uVar6;
  lVar11 = 0;
  __sSqMa(0,lVar12);
  *(long *)(pdVar9 + 0x44) = lVar11;
  lVar12 = *(long *)(lVar11 + -8);
  *(long *)(pdVar9 + 0x46) = lVar12;
  uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x48) = uVar6;
  uVar8 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar5,lVar10,"offset element ",0);
  *(undefined8 *)(pdVar9 + 0x4a) = uVar8;
  lVar12 = 0;
  __sSqMa(0,uVar8);
  *(long *)(pdVar9 + 0x4c) = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  *(long *)(pdVar9 + 0x4e) = lVar12;
  uVar6 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x50) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x52) = uVar6;
  lVar12 = 0;
  __ss18EnumeratedSequenceVMa(0,uVar1,uVar14);
  *(long *)(pdVar9 + 0x54) = lVar12;
  uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x56) = uVar6;
  lVar12 = 0;
  __ss18EnumeratedSequenceV8IteratorVMa(0,uVar1,uVar14);
  *(long *)(pdVar9 + 0x58) = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  *(long *)(pdVar9 + 0x5a) = lVar12;
  uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar9 + 0x5c) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cb188,0,0);
  return;
}



/* Entry: 001cb918; end: 001cb97f;  */

void FUN_001cb918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,long param_10)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  undefined8 in_stack_00000020;
  
  *(long *)(unaff_x22 + 0x40) = param_10;
  *(undefined8 *)(unaff_x22 + 0x48) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_9;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  lVar2 = *(long *)(param_10 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cb980,0,0);
  return;
}



/* Entry: 001cb980; end: 001cba17;  */

void FUN_001cb980(void)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  piVar3 = *(int **)(unaff_x22 + 0x20);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x10);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___sSiN_0099b2c0,*(undefined8 *)(unaff_x22 + 0x38),0,0);
  iVar4 = *(int *)(lVar5 + 0x30);
  *puVar7 = uVar2;
  iVar1 = *piVar3;
  plVar6 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_001cba18;
                    /* WARNING: Could not recover jumptable at 0x001cba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar6,(long)puVar7 + (long)iVar4,*(undefined8 *)(unaff_x22 + 0x30),
             *(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 001cba18; end: 001cba7f;  */

void FUN_001cba18(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cba80,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x001cba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 001cba80; end: 001cbac7;  */

void FUN_001cba80(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x48),uVar1,*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001cbac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cbac8; end: 001cbb0b;  */

void FUN_001cbac8(ulong param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  __ss12_ArrayBufferV7_natives011_ContiguousaB0VyxGvg(param_2,param_3);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1cbb08);
    (*pcVar1)();
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  _swift_release();
  if (param_1 < uVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1cbb0c);
  (*pcVar1)();
}



/* Entry: 001cbb0c; end: 001cbc13;  */

long FUN_001cbb0c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar1 = param_2;
  lVar3 = param_3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(lVar1,lVar3);
  if (-1 < param_2) {
    if (param_2 != 0) {
      pcVar5 = *(code **)(lVar4 + 0x10);
      (*pcVar5)(puVar2,param_1,param_3);
      pcVar6 = *(code **)(lVar4 + 0x20);
      (*pcVar6)(lVar3,puVar2,param_3);
      param_2 = param_2 + -1;
      if (param_2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x48);
        do {
          lVar3 = lVar3 + lVar4;
          (*pcVar5)(puVar2,param_1,param_3);
          (*pcVar6)(lVar3,puVar2,param_3);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
    __sSaMa(0,param_3);
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1cbc14);
  (*pcVar5)();
}



/* Entry: 001cbc14; end: 001cbc67;  */

void FUN_001cbc14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  __sSqMa(0,*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return;
}



/* Entry: 001cbc68; end: 001cbcf3;  */

void FUN_001cbc68(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x20),
             PTR___sSTTL_0099b0d0,PTR___s7ElementSTTl_0099ae60);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x60 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001cbcf4; end: 001cbdf3;  */

void FUN_001cbcf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  qword qVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  qword qVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x20),
             PTR___sSTTL_0099b0d0,PTR___s7ElementSTTl_0099ae60);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  qVar2 = *(qword *)(unaff_x20 + 0x48);
  qVar5 = *(qword *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar7 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar7;
  *(long *)pcVar7 = unaff_x22;
  *(code **)(pcVar7 + 8) = FUN_001cbdf4;
  *(long *)(pcVar7 + 0x40) = lVar8;
  *(undefined8 *)(pcVar7 + 0x48) = param_2;
  *(ulong *)(pcVar7 + 0x30) = unaff_x20 + (uVar9 + 0x60 & (uVar9 ^ 0xffffffffffffffff));
  *(undefined8 *)(pcVar7 + 0x38) = uVar3;
  *(qword *)(pcVar7 + 0x20) = qVar5;
  *(undefined8 *)(pcVar7 + 0x28) = uVar10;
  *(undefined8 *)(pcVar7 + 0x10) = param_1;
  *(qword *)(pcVar7 + 0x18) = qVar2;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(pcVar7 + 0x50) = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9,uVar1,uVar4);
  *(ulong *)(pcVar7 + 0x58) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cb980,0,0);
  return;
}



/* Entry: 001cbdf4; end: 001cbe2f;  */

void FUN_001cbdf4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001cbe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001cbe30; end: 001cbe33;  */

void FUN_001cbe30(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001cbe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001cbe34; end: 001cbe6f;  */

void FUN_001cbe34(void)

{
  FUN_001cbe70();
  return;
}



/* Entry: 001cbe70; end: 001cc057;  */

undefined8
FUN_001cbe70(undefined8 param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
            undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  lVar3 = param_8;
  if (param_8 == 0) {
    param_7 = param_1;
    lVar3 = param_2;
    FUN_001dca4c(param_1,param_2,param_3);
  }
  uVar2 = param_1;
  lVar4 = param_2;
  FUN_001cc0bc(param_1,param_2,param_3,param_7,lVar3,param_9,param_10,param_11,param_5);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRelease(lVar3);
  uVar1 = param_1;
  lVar3 = param_2;
  FUN_001cc170(param_1,param_2,param_3,param_4,uVar2,lVar4,param_11);
  if (lRam0000000000af3938 != -1) {
    _swift_once(0xaf3938,FUN_001cc624);
  }
  uStack_88 = param_3 & 0xff | (param_4 & 0xff) << 8;
  uStack_c0 = param_11;
  uStack_b8 = (undefined1)param_4;
  uStack_b0 = uVar1;
  lStack_a8 = lVar3;
  uStack_98 = param_1;
  lStack_90 = param_2;
  uStack_80 = param_5;
  uStack_78 = param_6;
  func_0x00089a2c(param_1,param_2,param_3);
  uVar2 = 0;
  __sScTMa(0,param_11,PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
  _swift_bridgeObjectRetain(param_6);
  __ss9TaskLocalC9withValue_9operation4file4lineqd__x_qd__yKXESSSutKlF
            (auStack_70,&uStack_98,param_12,auStack_d0,0xd00000000000001e,0x80000000008b9a70,
             param_13,uVar2);
  _swift_release(lVar3);
  _swift_release(lVar4);
  FUN_00089cec(param_1,param_2,param_3);
  _swift_bridgeObjectRelease(param_6);
  return auStack_70[0];
}



/* Entry: 001cc058; end: 001cc0bb;  */

void FUN_001cc058(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1ce2ec;
                    /* WARNING: Could not recover jumptable at 0x001cc0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 001cc0bc; end: 001cc16f;  */

undefined1  [16]
FUN_001cc0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_009b74e8;
  _swift_allocObject(&UNK_009b74e8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  func_0x00089a2c(param_1,param_2,param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(param_7);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &UNK_007e44c0;
  return auVar2;
}



/* Entry: 001cc170; end: 001cc20f;  */

undefined1  [16]
FUN_001cc170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_009b74c0;
  _swift_allocObject(&UNK_009b74c0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  puVar1[0x29] = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x00089a2c(param_1,param_2,param_3);
  _swift_retain(param_6);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &UNK_007e44a8;
  return auVar2;
}



/* Entry: 001cc210; end: 001cc38f;  */

void FUN_001cc210(undefined8 *param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,code *param_8)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  if (param_2 < 2) {
    if (param_2 == 0) {
      __sScP3lowScPvgZ(puVar3);
    }
    else {
      __sScP8rawValueScPs5UInt8V_tcfC(puVar3,0x15);
    }
  }
  else if (param_2 == 2) {
    __sScP4highScPvgZ(puVar3);
  }
  else {
    if (param_2 != 3) {
      lVar1 = 0;
      __sScPMa();
      uVar2 = 1;
      goto LAB_001cc310;
    }
    __sScP13userInitiatedScPvgZ(puVar3);
  }
  lVar1 = 0;
  __sScPMa();
  uVar2 = 0;
LAB_001cc310:
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,uVar2,1);
  _swift_allocObject(param_6,0x38,7);
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined8 *)(param_6 + 0x18) = 0;
  *(undefined8 *)(param_6 + 0x20) = param_5;
  *(undefined8 *)(param_6 + 0x28) = param_3;
  *(undefined8 *)(param_6 + 0x30) = param_4;
  _swift_retain(param_4);
  uVar2 = 0;
  (*param_8)(0,0,puVar3,param_7,param_6,param_5);
  *param_1 = uVar2;
  return;
}



/* Entry: 001cc390; end: 001cc3f3;  */

void FUN_001cc390(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1ce304;
                    /* WARNING: Could not recover jumptable at 0x001cc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 001cc3f4; end: 001cc623;  */

ulong FUN_001cc3f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = auStack_a0 + lVar1;
  uStack_70 = param_4;
  uStack_68 = param_5;
  FUN_001cdfd4(param_3,puVar7);
  lVar2 = 0;
  __sScPMa();
  lVar10 = *(long *)(lVar2 + -8);
  puVar3 = puVar7;
  (**(code **)(lVar10 + 0x30))(puVar7,1,lVar2);
  uVar9 = param_5;
  _swift_retain(param_5);
  if ((int)puVar3 == 1) {
    FUN_001cdb1c(puVar7);
    uVar9 = 0x1c00;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar10 + 8))(puVar7,lVar2);
    uVar9 = uVar9 & 0xff | 0x1c00;
  }
  lVar2 = *(long *)(param_5 + 0x10);
  lVar10 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar2);
  _swift_release(param_5);
  if (lVar2 == 0) {
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = lVar2;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar2);
  }
  if (param_2 == 0) {
    FUN_001cdb1c(param_3);
    puVar4 = &UNK_009b7538;
    _swift_allocObject(&UNK_009b7538,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(ulong *)(puVar4 + 0x20) = param_5;
    if (lVar10 == 0 && lVar8 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puVar6 = &uStack_90;
      lStack_80 = lVar8;
      lStack_78 = lVar10;
    }
    _swift_task_create(uVar9,puVar6,param_6,&UNK_007e4508,puVar4);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)((long)auStack_b0 + lVar1) = &UNK_009b7560;
    *(undefined **)((long)auStack_b0 + lVar1 + 8) = &UNK_007e4510;
    FUN_001cdcac(&uStack_98,param_1 + 0x20,uVar5,uVar9,lVar8,lVar10,&uStack_70,param_6);
    _swift_release(param_1);
    FUN_001cdb1c(param_3);
    _swift_release(param_5);
    uVar9 = uStack_98;
  }
  return uVar9;
}



/* Entry: 001cc624; end: 001cc683;  */

void FUN_001cc624(void)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = &uStack_50;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x000115a8(0xaf3950,&UNK_007e44d0);
  _swift_allocObject();
  __ss9TaskLocalC12wrappedValueAByxGx_tcfc();
  puRam0000000000af3940 = (undefined1 *)puVar1;
  return;
}



/* Entry: 001cc684; end: 001cc6af;  */

void FUN_001cc684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
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
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cc6b0,0,0);
  return;
}



/* Entry: 001cc6b0; end: 001cc833;  */

void FUN_001cc6b0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
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
  uVar5 = uVar7;
  func_0x0002f390();
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
  plVar8[1] = (long)FUN_001cc834;
                    /* WARNING: Could not recover jumptable at 0x001cc830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar8,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 001cc834; end: 001cc87b;  */

void FUN_001cc834(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cc87c,0,0);
  return;
}



/* Entry: 001cc87c; end: 001cc8db;  */

void FUN_001cc87c(void)

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
                    /* WARNING: Could not recover jumptable at 0x001cc8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001cc8dc; end: 001cc907;  */

void FUN_001cc8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined1 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cc908,0,0);
  return;
}



/* Entry: 001cc908; end: 001cca8b;  */

void FUN_001cc908(void)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  piVar2 = *(int **)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xb8);
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
  *(undefined8 **)(unaff_x22 + 0x58) = puVar4;
  _swift_bridgeObjectRetain(uVar7);
  uVar7 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar5 = uVar7;
  func_0x0002f390();
  uVar6 = 0x3a;
  uVar9 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x3a,0xe100000000000000,uVar7,uVar5);
  _swift_release();
  func_0x0021be28();
  *(undefined8 **)(unaff_x22 + 0x98) = puVar4;
  _swift_beginAccess();
  uVar7 = *puVar4;
  _objc_retain(uVar7);
  func_0x0021c244(uVar6,uVar9);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar6;
  _objc_release(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  iVar1 = *piVar2;
  plVar8 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_001cca8c;
                    /* WARNING: Could not recover jumptable at 0x001cca88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar8,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 001cca8c; end: 001ccae7;  */

void FUN_001cca8c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001ccae8;
  }
  else {
    pcVar1 = FUN_001ccb4c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001ccae8; end: 001ccb4b;  */

void FUN_001ccae8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_beginAccess(puVar1,unaff_x22 + 0x40,0,0);
  uVar3 = *puVar1;
  _objc_retain(uVar3);
  func_0x0021c438(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001ccb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001ccb4c; end: 001ccbaf;  */

void FUN_001ccb4c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_beginAccess(puVar1,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar1;
  _objc_retain(uVar3);
  func_0x0021c438(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001ccbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001ccbb0; end: 001ccc23;  */

void FUN_001ccbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
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
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001ccc24,0,0);
  return;
}



/* Entry: 001ccc24; end: 001ccd6b;  */

void FUN_001ccc24(undefined8 *param_1)

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
      goto LAB_001ccd24;
    }
    _swift_retain(param_1);
    __sScP13userInitiatedScPvgZ(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar7,0,1,lVar4);
LAB_001ccd24:
  pqVar5 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x60) = pqVar5;
  *pqVar5 = unaff_x22;
  pqVar5[1] = (qword)FUN_001ccd6c;
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



/* Entry: 001ccd6c; end: 001ccdff;  */

void FUN_001ccd6c(void)

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
  FUN_001cdb1c(uVar4);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(lVar5 + 0x68) = plVar3;
  *plVar3 = lVar7;
  plVar3[1] = (long)FUN_001cce00;
                    /* WARNING: Could not recover jumptable at 0x001ccdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(lVar5 + 0x28));
  return;
}



/* Entry: 001cce00; end: 001ccebb;  */

void FUN_001cce00(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001cce44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 001ccebc; end: 001cd003;  */

void FUN_001ccebc(undefined8 *param_1)

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
      goto LAB_001ccfbc;
    }
    _swift_retain(param_1);
    __sScP13userInitiatedScPvgZ(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar7,0,1,lVar4);
LAB_001ccfbc:
  pqVar5 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x60) = pqVar5;
  *pqVar5 = unaff_x22;
  pqVar5[1] = (qword)FUN_001cd004;
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



/* Entry: 001cd004; end: 001cd097;  */

void FUN_001cd004(void)

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
  FUN_001cdb1c(uVar4);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(lVar5 + 0x68) = plVar3;
  *plVar3 = lVar7;
  plVar3[1] = (long)FUN_001cd098;
                    /* WARNING: Could not recover jumptable at 0x001cd094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(lVar5 + 0x28));
  return;
}



/* Entry: 001cd098; end: 001cd0df;  */

void FUN_001cd098(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001cd0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 001cd0e0; end: 001cd0f3;  */

void FUN_001cd0e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cd0f4,0,0);
  return;
}



/* Entry: 001cd0f4; end: 001cd16b;  */

/* WARNING: Removing unreachable block (ram,0x001cd118) */

void FUN_001cd0f4(void)

{
  long *plVar1;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_0099bf98 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_001cd16c;
                    /* WARNING: Could not recover jumptable at 0x0077892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_0099bf90)();
  return;
}



/* Entry: 001cd16c; end: 001cd2bb;  */

void FUN_001cd16c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001cd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001cd2bc; end: 001cd33b;  */

void FUN_001cd2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZTu_0099bf88
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1ce2f0;
                    /* WARNING: Could not recover jumptable at 0x00778920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZ_0099bf80
  )(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 001cd33c; end: 001cd3cb;  */

void FUN_001cd33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  segment_command *psVar1;
  long unaff_x22;
  
  psVar1 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar1;
  psVar1->cmd = (int)unaff_x22;
  psVar1->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar1->segname[0] = -0xc;
  psVar1->segname[1] = -0x1e;
  psVar1->segname[2] = '\x1c';
  psVar1->segname[3] = '\0';
  psVar1->segname[4] = '\0';
  psVar1->segname[5] = '\0';
  psVar1->segname[6] = '\0';
  psVar1->segname[7] = '\0';
                    /* WARNING: Could not recover jumptable at 0x001cd3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001cd3cc(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 001cd3cc; end: 001cd45b;  */

void FUN_001cd3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  long unaff_x22;
  
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  pcVar1[8] = -8;
  pcVar1[9] = -0x1e;
  pcVar1[10] = '\x1c';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
                    /* WARNING: Could not recover jumptable at 0x001cd458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001cdd84(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 001cd45c; end: 001cd7e3;  */

undefined4 FUN_001cd45c(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puStack_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar5 - extraout_x12_00;
  lStack_68 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar5 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar5 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar7 = lVar11 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = uVar7 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar12 - extraout_x12_05;
  __sScTss5NeverORszABRs_rlE15currentPriorityScPvgZ(lVar6);
  pcVar10 = *(code **)(lVar8 + 0x10);
  lVar3 = lVar12;
  (*pcVar10)(lVar12,lVar6,lVar2);
  __sScP10backgroundScPvgZ(uVar7);
  FUN_001cd7e4();
  uVar4 = uVar7;
  __sSQ2eeoiySbx_xtFZTj(uVar7,lVar12,lVar2,lVar3);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(uVar7,lVar2);
  (*pcVar9)(lVar12,lVar2);
  if ((uVar4 & 1) == 0) {
    (*pcVar10)(lVar11,lVar6,lVar2);
    __sScP3lowScPvgZ(uVar7);
    uVar4 = uVar7;
    __sSQ2eeoiySbx_xtFZTj(uVar7,lVar11,lVar2,lVar3);
    (*pcVar9)(uVar7,lVar2);
    (*pcVar9)(lVar11,lVar2);
    if ((uVar4 & 1) == 0) {
      (*pcVar10)(lVar5,lVar6,lVar2);
      __sScP7utilityScPvgZ(uVar7);
      uVar4 = uVar7;
      __sSQ2eeoiySbx_xtFZTj(uVar7,lVar5,lVar2,lVar3);
      (*pcVar9)(uVar7,lVar2);
      (*pcVar9)(lVar5,lVar2);
      lVar5 = lStack_68;
      if ((uVar4 & 1) == 0) {
        (*pcVar10)(lStack_68,lVar6,lVar2);
        __sScP8rawValueScPs5UInt8V_tcfC(uVar7,0x15);
        uVar4 = uVar7;
        __sSQ2eeoiySbx_xtFZTj(uVar7,lVar5,lVar2,lVar3);
        (*pcVar9)(uVar7,lVar2);
        (*pcVar9)(lVar5,lVar2);
        lVar5 = lStack_70;
        if ((uVar4 & 1) != 0) {
          (*pcVar9)(lVar6,lVar2);
          return 1;
        }
        (*pcVar10)(lStack_70,lVar6,lVar2);
        __sScP4highScPvgZ(uVar7);
        uVar4 = uVar7;
        __sSQ2eeoiySbx_xtFZTj(uVar7,lVar5,lVar2,lVar3);
        (*pcVar9)(uVar7,lVar2);
        (*pcVar9)(lVar5,lVar2);
        puVar1 = puStack_78;
        if ((uVar4 & 1) != 0) {
          (*pcVar9)(lVar6,lVar2);
          return 2;
        }
        (*pcVar10)(puStack_78,lVar6,lVar2);
        __sScP13userInitiatedScPvgZ(uVar7);
        uVar4 = uVar7;
        __sSQ2eeoiySbx_xtFZTj(uVar7,puVar1,lVar2,lVar3);
        (*pcVar9)(uVar7,lVar2);
        (*pcVar9)(puVar1,lVar2);
        (*pcVar9)(lVar6,lVar2);
        if ((uVar4 & 1) != 0) {
          return 3;
        }
        return 1;
      }
    }
  }
  (*pcVar9)(lVar6,lVar2);
  return 0;
}



/* Entry: 001cd7e4; end: 001cd827;  */

void FUN_001cd7e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af3948 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __sScPMa(0xff);
  puVar2 = PTR___sScPSQsMc_0099bed0;
  _swift_getWitnessTable(PTR___sScPSQsMc_0099bed0,uVar1);
  puRam0000000000af3948 = puVar2;
  return;
}



/* Entry: 001cd828; end: 001cd883;  */

long FUN_001cd828(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 001cd884; end: 001cd973;  */

undefined8 * FUN_001cd884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00089a2c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 001cd974; end: 001cd9cf;  */

undefined8 * FUN_001cd974(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_00089cec(uVar3,uVar4,uVar2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 001cd9d0; end: 001cda83;  */

int FUN_001cd9d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001cda84; end: 001cdb1b;  */

void FUN_001cda84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  pcVar8 = section_00000068.segname + 8;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x29);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar8;
  *(long *)pcVar8 = unaff_x22;
  *(qword *)(pcVar8 + 8) = 0x1ce308;
  *(undefined8 *)(pcVar8 + 0x40) = uVar1;
  *(undefined8 *)(pcVar8 + 0x48) = uVar3;
  pcVar8[0x71] = uVar4;
  pcVar8[0x70] = uVar5;
  *(undefined8 *)(pcVar8 + 0x30) = uVar2;
  *(undefined8 *)(pcVar8 + 0x38) = uVar9;
  *(undefined8 *)(pcVar8 + 0x28) = param_1;
  lVar6 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar8 + 0x50) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001ccc24,0,0);
  return;
}



/* Entry: 001cdb1c; end: 001cdb63;  */

undefined8 FUN_001cdb1c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 001cdb64; end: 001cdb67;  */

void FUN_001cdb64(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined1 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001cdb68; end: 001cdc0b;  */

void FUN_001cdb68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  dword *pdVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  pdVar7 = &section_00000068.reloff;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x28);
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar7;
  *(long *)pdVar7 = unaff_x22;
  *(code **)(pdVar7 + 2) = FUN_001cdc0c;
  *(undefined8 *)(pdVar7 + 0x1c) = uVar2;
  *(undefined8 *)(pdVar7 + 0x1e) = uVar5;
  *(undefined8 *)(pdVar7 + 0x18) = uVar1;
  *(undefined8 *)(pdVar7 + 0x1a) = uVar4;
  *(undefined1 *)(pdVar7 + 0x26) = uVar6;
  *(undefined8 *)(pdVar7 + 0x14) = uVar3;
  *(undefined8 *)(pdVar7 + 0x16) = uVar8;
  *(undefined8 *)(pdVar7 + 0x12) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cc6b0,0,0);
  return;
}



/* Entry: 001cdc0c; end: 001cdc47;  */

void FUN_001cdc0c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001cdc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001cdc48; end: 001cdcab;  */

void FUN_001cdc48(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1ce30c;
                    /* WARNING: Could not recover jumptable at 0x001cdca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 001cdcac; end: 001cdd83;  */

void FUN_001cdcac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9
                 ,long param_10,undefined8 param_11)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 != 0) {
    _swift_allocObject(param_10,0x28,7);
    *(undefined8 *)(param_10 + 0x10) = param_8;
    uVar2 = param_7[1];
    uVar3 = *param_7;
    *(undefined8 *)(param_10 + 0x20) = param_7[1];
    *(undefined8 *)(param_10 + 0x18) = uVar3;
    _swift_retain(uVar2);
    if (param_6 == 0 && param_5 == 0) {
      puStack_90 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_90 = &uStack_80;
      lStack_70 = param_5;
      lStack_68 = param_6;
    }
    uStack_98 = 7;
    lStack_88 = param_2;
    _swift_task_create(param_4,&uStack_98,param_8,param_11,param_10);
    *param_1 = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1cdd84);
  (*pcVar1)();
}



/* Entry: 001cdd84; end: 001cde0f;  */

void FUN_001cdd84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___ss5ClockTL_0099c038,PTR___s7Instants5ClockPTl_0099bdd8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001cde10,0,0);
  return;
}


