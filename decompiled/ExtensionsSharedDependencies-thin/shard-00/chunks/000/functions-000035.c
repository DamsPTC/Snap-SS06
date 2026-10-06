/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000a3380; end: 000a33d3;  */

void FUN_000a3380(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  dword *pdVar5;
  qword *pqVar6;
  undefined8 uVar7;
  qword unaff_x22;
  
  pqVar6 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar6;
  *pqVar6 = unaff_x22;
  pqVar6[1] = (qword)FUN_000a33d4;
  pqVar6[3] = param_1;
  uVar7 = *(undefined8 *)(*param_2 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar7,uVar2,PTR___ss5ErrorWS_0099b720);
  pqVar6[4] = lVar3;
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar6[5] = uVar4;
  pdVar5 = &segment_command_00000020.nsects;
  _swift_task_alloc();
  pqVar6[6] = (qword)pdVar5;
  *(qword **)pdVar5 = pqVar6;
  *(code **)(pdVar5 + 2) = FUN_000a32d4;
  *(ulong *)(pdVar5 + 4) = uVar4;
  *(long **)(pdVar5 + 6) = param_2;
  uVar7 = *(undefined8 *)(*param_2 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar7,uVar2,PTR___ss5ErrorWS_0099b720);
  *(long *)(pdVar5 + 8) = lVar3;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  *(long *)(pdVar5 + 10) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(pdVar5 + 0xc) = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar5 + 0xe) = uVar4;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pdVar5 + 0x10) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar5 + 0x12) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000a2fa8,0,0);
  return;
}



/* Entry: 000a33d4; end: 000a340f;  */

void FUN_000a33d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000a340c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 000a3410; end: 000a3473;  */

void FUN_000a3410(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  qword *pqVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  qword unaff_x22;
  
  pqVar2 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar2;
  *pqVar2 = unaff_x22;
  pqVar2[1] = (qword)FUN_000a3474;
  pqVar2[2] = (qword)param_2;
  lVar5 = *(long *)(*param_2 + 0x50);
  pqVar2[3] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  pqVar2[4] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3,param_4);
  pqVar2[5] = uVar3;
  iVar1 = *param_3;
  puVar4 = (undefined8 *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  pqVar2[6] = (qword)puVar4;
  *puVar4 = pqVar2;
  puVar4[1] = FUN_000a354c;
                    /* WARNING: Could not recover jumptable at 0x000a3548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(puVar4,uVar3);
  return;
}



/* Entry: 000a3474; end: 000a34af;  */

void FUN_000a3474(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000a34ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 000a34b0; end: 000a354b;  */

void FUN_000a34b0(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0x10) = unaff_x20;
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  *(long *)(unaff_x22 + 0x18) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  iVar1 = *param_1;
  plVar3 = (long *)(ulong)(uint)param_1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_000a354c;
                    /* WARNING: Could not recover jumptable at 0x000a3548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))(plVar3,uVar2);
  return;
}



/* Entry: 000a354c; end: 000a35a7;  */

void FUN_000a354c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_000a35a8;
  }
  else {
    pcVar1 = FUN_000a3600;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 000a35a8; end: 000a35ff;  */

void FUN_000a35a8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_000a4c4c(uVar2);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000a35fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000a3600; end: 000a3647;  */

void FUN_000a3600(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000a4c6c(uVar1);
  _swift_errorRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000a3644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000a3648; end: 000a36ab;  */

void FUN_000a3648(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  qword *pqVar4;
  long lVar5;
  qword unaff_x22;
  
  pqVar4 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar4;
  *pqVar4 = unaff_x22;
  pqVar4[1] = 0xa36c4;
  pqVar4[2] = (qword)param_2;
  lVar5 = *(long *)(*param_2 + 0x50);
  pqVar4[3] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  pqVar4[4] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2,param_4);
  pqVar4[5] = uVar2;
  iVar1 = *param_3;
  puVar3 = (undefined8 *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  pqVar4[6] = (qword)puVar3;
  *puVar3 = pqVar4;
  puVar3[1] = FUN_000a354c;
                    /* WARNING: Could not recover jumptable at 0x000a3548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(puVar3,uVar2);
  return;
}



/* Entry: 000a36ac; end: 000a36c7;  */

void FUN_000a36ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000a36c8; end: 000a3707;  */

void FUN_000a36c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aec918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d5f60;
  _swift_getWitnessTable(&UNK_007d5f60,&UNK_009a8e88);
  puRam0000000000aec918 = puVar1;
  return;
}



/* Entry: 000a3708; end: 000a3797;  */

void FUN_000a3708(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar1,PTR___ss5ErrorWS_0099b720);
  __sSqMa(0,uVar2);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(param_1,FUN_000a44b8);
  return;
}



/* Entry: 000a3798; end: 000a3a07;  */

void FUN_000a3798(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined1 auStack_78 [24];
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0xae60d0;
  uStack_d0 = param_3;
  uStack_c4 = param_2;
  uStack_b8 = param_4;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0xff;
  uStack_c0 = uVar5;
  __ss6ResultOMa(0xff,uVar5,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_d0 - extraout_x8;
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_00;
  __s11SwiftSCLock4LockC4lockyyF();
  lVar8 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar8,auStack_78,0,0);
  (**(code **)(lVar6 + 0x10))(lVar10,(long)unaff_x20 + lVar8,lVar3);
  lVar8 = lVar10;
  (**(code **)(lVar9 + 0x30))(lVar10,1,lVar2);
  uVar1 = uStack_b8;
  if ((int)lVar8 == 1) {
    pcVar7 = *(code **)(lVar6 + 8);
    _swift_retain(uStack_b8);
    _swift_unknownObjectRetain(param_1);
    (*pcVar7)(lVar10,lVar3);
    uStack_98 = uStack_d0;
    uStack_90 = uVar1;
    bStack_80 = (byte)uStack_c4 & 1;
    uStack_88 = param_1;
    _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70),auStack_b0,0x21,0);
    uVar5 = 0xff;
    FUN_000a44d0(0xff,uStack_c0);
    uVar4 = 0;
    __sSaMa(0,uVar5);
    _swift_retain(uVar1);
    _swift_unknownObjectRetain(param_1);
    __sSa6appendyyxnF(&uStack_98,uVar4);
    _swift_endAccess(auStack_b0);
    func_0x001d46c8();
    _swift_unknownObjectRelease(param_1);
    _swift_release(uVar1);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar11,lVar10,lVar2);
    _swift_unknownObjectRetain(param_1);
    uVar1 = uStack_b8;
    _swift_retain(uStack_b8);
    func_0x001d46c8();
    FUN_000a3b34(lVar11,uStack_d0,uVar1,param_1,uStack_c4 & 1,uStack_c0);
    _swift_unknownObjectRelease(param_1);
    _swift_release(uVar1);
    (**(code **)(lVar9 + 8))(lVar11,lVar2);
  }
  return;
}



/* Entry: 000a3a08; end: 000a3a2b;  */

void FUN_000a3a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000a3a2c; end: 000a3a67;  */

undefined8 FUN_000a3a2c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_000a3a68(param_1);
  return unaff_x20;
}



/* Entry: 000a3a68; end: 000a3b33;  */

void FUN_000a3a68(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *unaff_x20;
  lVar1 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  unaff_x20[3] = lVar1;
  lVar5 = *(long *)(*unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(lVar4 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_0099b720);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))((long)unaff_x20 + lVar5,1,1,lVar1);
  lVar1 = *(long *)(*unaff_x20 + 0x70);
  uVar2 = 0;
  FUN_000a44d0(0,uVar3);
  __sS2ayxGycfC();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + 2) = param_1;
  return;
}



/* Entry: 000a3b34; end: 000a418f;  */

void FUN_000a3b34(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,ulong param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0;
  __ss6ResultOMa(0,param_6,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar10 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)(lVar8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  if (param_4 == 0) {
    (*param_2)(param_1);
  }
  else if ((param_5 & 1) == 0) {
    lVar4 = param_4;
    _swift_getObjectType();
    lStack_98 = lVar4;
    (**(code **)(lVar10 + 0x10))(puVar7,param_1,lVar2);
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
    puVar5 = &UNK_009a8fe0;
    _swift_allocObject(&UNK_009a8fe0,uVar9 + lVar8,uVar6 | 7);
    *(undefined8 *)(puVar5 + 0x10) = param_6;
    *(code **)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = param_3;
    (**(code **)(lVar10 + 0x20))(puVar5 + uVar9,puVar7,lVar2);
    _swift_unknownObjectRetain(param_4);
    _swift_retain(param_3);
    func_0x000a4d64(0xa4aa0,puVar5,lStack_98);
    _swift_release(puVar5);
    _swift_unknownObjectRelease(param_4);
  }
  else {
    (**(code **)(lVar10 + 0x10))(puVar7,param_1,lVar2);
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
    puVar5 = &UNK_009a9008;
    _swift_allocObject(&UNK_009a9008,uVar9 + lVar8,uVar6 | 7);
    *(undefined8 *)(puVar5 + 0x10) = param_6;
    *(code **)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = param_3;
    (**(code **)(lVar10 + 0x20))(puVar5 + uVar9,puVar7,lVar2);
    uStack_70 = 0xa4bec;
    puStack_90 = PTR___NSConcreteStackBlock_00999f30;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_0001d1e4;
    puStack_78 = &UNK_009a9020;
    ppuVar3 = &puStack_90;
    puStack_68 = puVar5;
    __Block_copy(ppuVar3);
    puVar5 = puStack_68;
    _swift_unknownObjectRetain(param_4);
    _swift_retain(param_3);
    _swift_release(puVar5);
    FUN_00620e88(param_4,ppuVar3);
    _swift_unknownObjectRelease(param_4);
    __Block_release(ppuVar3);
  }
  return;
}



/* Entry: 000a4190; end: 000a4277;  */

void FUN_000a4190(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0;
  __ss6ResultOMa(0,lVar3,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  __s11SwiftSCLock4LockC4lockyyF();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar4,param_1,lVar3);
  _swift_storeEnumTagMultiPayload(puVar4,lVar2,0);
  func_0x000a3f0c(puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return;
}



/* Entry: 000a4278; end: 000a434b;  */

void FUN_000a4278(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar3,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  __s11SwiftSCLock4LockC4lockyyF();
  *puVar4 = param_1;
  _swift_storeEnumTagMultiPayload(puVar4,lVar2,1);
  _swift_errorRetain(param_1);
  func_0x000a3f0c(puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return;
}



/* Entry: 000a434c; end: 000a43e3;  */

void FUN_000a434c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar3 = *unaff_x20;
  _swift_release(unaff_x20[3]);
  lVar5 = *(long *)(*unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar4,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar3 = 0;
  __sSqMa(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 8))((long)unaff_x20 + lVar5,lVar3);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  return;
}



/* Entry: 000a43e4; end: 000a4407;  */

void FUN_000a43e4(void)

{
  FUN_000a434c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a4408; end: 000a44b7;  */

void FUN_000a4408(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_2;
  lVar5 = *(long *)(lVar3 + 0x68);
  _swift_beginAccess((long)param_2 + lVar5,auStack_58,0,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar4,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar3 = 0;
  __sSqMa(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,(long)param_2 + lVar5,lVar3);
  return;
}



/* Entry: 000a44b8; end: 000a44cf;  */

void FUN_000a44b8(void)

{
  FUN_000a4408();
  return;
}



/* Entry: 000a44d0; end: 000a4593;  */

void FUN_000a44d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842df8);
  return;
}



/* Entry: 000a4594; end: 000a46f7;  */

undefined8 * FUN_000a4594(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 000a46f8; end: 000a47f7;  */

int FUN_000a46f8(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffc;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (4 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -3;
  }
  return iVar1;
}



/* Entry: 000a47f8; end: 000a48bb;  */

void FUN_000a47f8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
  puStack_40 = &UNK_007d6010;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar4,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar3 = 0x13f;
  __sSqMa();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar3 + -8) + 0x40;
    puStack_28 = PTR___sBbWV_0099ae78 + 0x40;
    _swift_initClassMetadata2(param_1,0,4,&puStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 000a48bc; end: 000a48c3;  */

void FUN_000a48bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 000a48c4; end: 000a495b;  */

long FUN_000a48c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000a495c; end: 000a49c3;  */

undefined8 * FUN_000a495c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 000a49c4; end: 000a4a0f;  */

undefined8 * FUN_000a49c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_unknownObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 000a4a10; end: 000a4aa3;  */

int FUN_000a4a10(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000a4aa4; end: 000a4b5b;  */

void FUN_000a4aa4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0;
  __ss6ResultOMa(0,lVar4,uVar1,PTR___ss5ErrorWS_0099b720);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar5 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = unaff_x20 + uVar5;
  _swift_getEnumCaseMultiPayload(lVar3,lVar2);
  if ((int)lVar3 == 1) {
    _swift_errorRelease(*(undefined8 *)(unaff_x20 + uVar5));
  }
  else {
    (**(code **)(*(long *)(lVar4 + -8) + 8))(unaff_x20 + uVar5,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000a4b5c; end: 000a4bc3;  */

void FUN_000a4b5c(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar4,uVar1,PTR___ss5ErrorWS_0099b720);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),
             unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 000a4bc4; end: 000a4bef;  */

void FUN_000a4bc4(long param_1,long param_2)

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



/* Entry: 000a4bf0; end: 000a4c4b;  */

long * FUN_000a4bf0(long param_1)

{
  long *unaff_x20;
  
  _swift_allocObject();
  func_0x000a456c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  FUN_000a3a2c();
  unaff_x20[2] = param_1;
  return unaff_x20;
}



/* Entry: 000a4c4c; end: 000a4ccb;  */

void FUN_000a4c4c(void)

{
  FUN_000a4190();
  return;
}



/* Entry: 000a4ccc; end: 000a4ceb;  */

void FUN_000a4ccc(void)

{
  func_0x000a4c8c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a4cec; end: 000a4cef;  */

void FUN_000a4cec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000a4cf0; end: 000a4d33;  */

void FUN_000a4cf0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_0099ae88 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 000a4d34; end: 000a4d77;  */

void FUN_000a4d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00842e28);
  return;
}



/* Entry: 000a4d78; end: 000a4e0b;  */

void FUN_000a4d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_00999f30;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_0001d1e4;
  uStack_58 = param_4;
  uStack_50 = param_1;
  uStack_48 = param_2;
  __Block_copy(&puStack_70);
  uVar1 = uStack_48;
  _swift_retain(param_2);
  _swift_release(uVar1);
  (*param_5)();
  __Block_release(ppuVar2);
  return;
}



/* Entry: 000a4e0c; end: 000a4eab;  */

void FUN_000a4e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_00999f30;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_0001d1e4;
  puStack_58 = &UNK_009a91c0;
  uStack_50 = param_2;
  uStack_48 = param_3;
  __Block_copy(&puStack_70);
  uVar1 = uStack_48;
  _swift_retain(param_3);
  _swift_release(uVar1);
  func_0x00620f08(param_1);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 000a4eac; end: 000a4ec7;  */

void FUN_000a4eac(void)

{
  func_0x00620f10();
                    /* WARNING: Could not recover jumptable at 0x0077aa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_0099adc0)();
  return;
}



/* Entry: 000a4ec8; end: 000a4eef;  */

void FUN_000a4ec8(long param_1,long param_2)

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



/* Entry: 000a4ef0; end: 000a4f2f;  */

void FUN_000a4ef0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aecaa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6080;
  _swift_getWitnessTable(&UNK_007d6080,&UNK_009a9278);
  puRam0000000000aecaa0 = puVar1;
  return;
}



/* Entry: 000a4f30; end: 000a4fdb;  */

void FUN_000a4f30(void)

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



/* Entry: 000a4fdc; end: 000a5013;  */

void FUN_000a4fdc(ulong *param_1,ulong *param_2)

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



/* Entry: 000a5014; end: 000a5023; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService criticalSectionRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00aecaa8));
  return;
}



/* Entry: 000a5024; end: 000a506f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5024(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00aecaa8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000a5070; end: 000a508f;  */

void FUN_000a5070(void)

{
  _objc_opt_self(&PTR_PTR_00aca448);
  return;
}



/* Entry: 000a5090; end: 000a50e7; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService initWithCriticalSectionRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_00aecaa8) = param_3;
  lVar2 = param_1;
  FUN_000a5070();
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 000a50e8; end: 000a5143; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService init] */

void FUN_000a50e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCriticalSectionRegistryService.SCCriticalSectionRegistryService",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa5114);
  (*pcVar1)();
}



/* Entry: 000a5144; end: 000a5153; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00aecaa8));
  return;
}



/* Entry: 000a5154; end: 000a5173; -[_TtC21SCAttributionServices21SCAttributionServices currentPageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5154(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_00aecad8));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000a5174; end: 000a51bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5174(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00aecad8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000a51c0; end: 000a51df;  */

void FUN_000a51c0(void)

{
  _objc_opt_self(&PTR_PTR_00aca508);
  return;
}



/* Entry: 000a51e0; end: 000a5237; -[_TtC21SCAttributionServices21SCAttributionServices initWithCurrentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a51e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_00aecad8) = param_3;
  lVar2 = param_1;
  FUN_000a51c0();
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 000a5238; end: 000a5293; -[_TtC21SCAttributionServices21SCAttributionServices init] */

void FUN_000a5238(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAttributionServices.SCAttributionServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa5264);
  (*pcVar1)();
}



/* Entry: 000a5294; end: 000a52ab; -[_TtC21SCAttributionServices21SCAttributionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(param_1 + _DAT_00aecad8));
  return;
}



/* Entry: 000a52ac; end: 000a62db;  */

uint FUN_000a52ac(undefined8 param_1,undefined8 param_2)

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
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar7 = (long)&dStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = lVar7 - extraout_x12;
  uStack_c8 = uVar16;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = uVar16 - extraout_x12_00;
  lVar7 = 0xae6178;
  auStack_128[1] = lVar15;
  func_0x000115a8(0xae6178,&UNK_007d6270);
  auStack_110[2] = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  uVar16 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_118 = uVar16;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = uVar16 - extraout_x12_01;
  auStack_110[1] = uVar16;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = uVar16 - extraout_x12_02;
  adStack_140[0] = (double)lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = lVar7 - extraout_x12_03;
  lVar7 = 0xae60c8;
  auStack_110[0] = uVar16;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = uVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  adStack_140[1] = (double)lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar7 - extraout_x12_04;
  lStack_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = lVar7 - extraout_x12_05;
  uStack_d8 = uVar16;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = uVar16 - extraout_x12_06;
  auStack_128[0] = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar7 - extraout_x12_07;
  lStack_f0 = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = lVar7 - extraout_x12_08;
  uStack_e8 = uVar16;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = uVar16 - extraout_x12_09;
  uStack_148 = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = lVar7 - extraout_x12_10;
  uStack_c0 = uVar16;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = uVar16 - extraout_x12_11;
  uStack_b8 = uVar16;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar17 = uVar16 - extraout_x12_12;
  adStack_140[2] = (double)lVar17;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar17 = lVar17 - extraout_x12_13;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = 0;
  auStack_110[3] = lVar17 - extraout_x12_14;
  FUN_000a6dd8();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  piVar26 = (int *)((lVar17 - extraout_x12_14) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  piVar23 = (int *)((long)piVar26 - extraout_x12_15);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar25 = (undefined4 *)((long)piVar23 - extraout_x12_16);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  piVar28 = (int *)((long)puVar25 - extraout_x12_17);
  lVar7 = 0xaecbd0;
  func_0x000115a8(0xaecbd0,&UNK_007d6250);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)piVar28 - extraout_x8_03;
  piVar1 = (int *)(lVar20 + *(int *)(lVar7 + 0x30));
  FUN_000a753c(param_1,lVar20);
  FUN_000a753c(param_2,piVar1);
  lStack_a0 = lVar20;
  _swift_getEnumCaseMultiPayload(lVar20,lVar15);
  lVar7 = lStack_a0;
  iVar6 = (int)lVar20;
  if (1 < iVar6) {
    if (iVar6 == 2) {
      FUN_000a753c(lStack_a0,piVar23);
      uVar21 = *(undefined8 *)(piVar23 + 2);
      dVar29 = *(double *)(piVar23 + 4);
      lVar20 = 0xaecb18;
      func_0x000115a8(0xaecb18,&UNK_007d61f0);
      iVar6 = *(int *)(lVar20 + 0x50);
      lVar20 = (long)piVar23 + (long)iVar6;
      piVar26 = piVar1;
      _swift_getEnumCaseMultiPayload(piVar1,lVar15);
      uVar16 = uStack_e8;
      if ((int)piVar26 != 2) goto LAB_000a5c00;
      iVar5 = *piVar23;
      iVar2 = *piVar1;
      uVar18 = *(undefined8 *)(piVar1 + 2);
      dVar30 = *(double *)(piVar1 + 4);
      FUN_00037d20(lVar20,uStack_e8);
      lVar15 = lStack_f0;
      FUN_00037d20((long)piVar1 + (long)iVar6,lStack_f0);
      uVar27 = auStack_110[1];
      if (((iVar5 == iVar2) && ((int)uVar21 == (int)uVar18)) && (dVar29 == dVar30)) {
        lVar20 = (long)*(int *)(auStack_110[2] + 0x30);
        FUN_000138a4(uVar16,auStack_110[1]);
        FUN_000138a4(lVar15,uVar27 + lVar20);
        lVar8 = lStack_a8;
        lVar17 = lStack_b0;
        pcVar24 = *(code **)(lStack_a8 + 0x30);
        uVar9 = uVar27;
        (*pcVar24)(uVar27,1,lStack_b0);
        if ((int)uVar9 != 1) {
          lVar10 = -0x18;
          goto LAB_000a5e7c;
        }
LAB_000a5b44:
        func_0x000a7580(lVar15,0xae60c8,&UNK_007cccd0);
        func_0x000a7580(uVar16,0xae60c8,&UNK_007cccd0);
        lVar20 = uVar27 + lVar20;
        (*pcVar24)(lVar20,1,lVar17);
        if ((int)lVar20 == 1) {
          func_0x000a7580(uVar27,0xae60c8,&UNK_007cccd0);
          goto LAB_000a5fa4;
        }
        goto LAB_000a5ee4;
      }
LAB_000a5ba8:
      uVar27 = uVar16;
      uVar21 = 0xae60c8;
      puVar13 = &UNK_007cccd0;
      func_0x000a7580(lVar15,0xae60c8,&UNK_007cccd0);
    }
    else {
      FUN_000a753c(lStack_a0,piVar26);
      uVar21 = *(undefined8 *)(piVar26 + 2);
      dVar30 = *(double *)(piVar26 + 4);
      dVar29 = *(double *)(piVar26 + 6);
      lVar20 = 0xaecb20;
      func_0x000115a8(0xaecb20,&UNK_007d61f8);
      iVar6 = *(int *)(lVar20 + 0x60);
      lVar20 = (long)piVar26 + (long)iVar6;
      piVar23 = piVar1;
      _swift_getEnumCaseMultiPayload(piVar1,lVar15);
      uVar16 = uStack_d8;
      if ((int)piVar23 != 3) goto LAB_000a5c00;
      iVar5 = *piVar26;
      iVar2 = *piVar1;
      uVar18 = *(undefined8 *)(piVar1 + 2);
      dVar31 = *(double *)(piVar1 + 4);
      dVar32 = *(double *)(piVar1 + 6);
      FUN_00037d20(lVar20,uStack_d8);
      lVar15 = lStack_e0;
      FUN_00037d20((long)piVar1 + (long)iVar6,lStack_e0);
      uVar27 = uStack_118;
      if ((((iVar5 != iVar2) || ((int)uVar21 != (int)uVar18)) || (dVar30 != dVar31)) ||
         (dVar29 != dVar32)) goto LAB_000a5ba8;
      lVar20 = (long)*(int *)(auStack_110[2] + 0x30);
      FUN_000138a4(uVar16,uStack_118);
      FUN_000138a4(lVar15,uVar27 + lVar20);
      lVar8 = lStack_a8;
      lVar17 = lStack_b0;
      pcVar24 = *(code **)(lStack_a8 + 0x30);
      uVar9 = uVar27;
      (*pcVar24)(uVar27,1,lStack_b0);
      if ((int)uVar9 == 1) goto LAB_000a5b44;
      lVar10 = -0x28;
LAB_000a5e7c:
      uVar21 = *(undefined8 *)((long)auStack_110 + lVar10);
      FUN_000138a4(uVar27,uVar21);
      lVar10 = uVar27 + lVar20;
      (*pcVar24)(lVar10,1,lVar17);
      uVar9 = auStack_128[1];
      if ((int)lVar10 != 1) {
        uVar11 = auStack_128[1];
        (**(code **)(lVar8 + 0x20))(auStack_128[1],uVar27 + lVar20,lVar17);
        FUN_0006079c();
        uVar18 = uVar21;
        __sSQ2eeoiySbx_xtFZTj(uVar21,uVar9,lVar17,uVar11);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uVar18);
        pcVar24 = *(code **)(lVar8 + 8);
        (*pcVar24)(uVar9,lVar17);
        func_0x000a7580(lVar15,0xae60c8,&UNK_007cccd0);
        func_0x000a7580(uVar16,0xae60c8,&UNK_007cccd0);
        (*pcVar24)(uVar21,lVar17);
        func_0x000a7580(uVar27,0xae60c8,&UNK_007cccd0);
        if ((uStack_b8 & 1) != 0) {
LAB_000a5fa4:
          FUN_000a6d9c(lVar7);
          return 1;
        }
        goto LAB_000a5bd8;
      }
      func_0x000a7580(lVar15,0xae60c8,&UNK_007cccd0);
      func_0x000a7580(uVar16,0xae60c8,&UNK_007cccd0);
      (**(code **)(lVar8 + 8))(uVar21,lVar17);
LAB_000a5ee4:
      uVar21 = 0xae6178;
      puVar13 = &UNK_007d6270;
    }
    func_0x000a7580(uVar27,uVar21,puVar13);
LAB_000a5bd8:
    FUN_000a6d9c(lVar7);
    return 0;
  }
  if (iVar6 == 0) {
    FUN_000a753c(lStack_a0,piVar28);
    uVar21 = *(undefined8 *)(piVar28 + 2);
    dVar29 = *(double *)(piVar28 + 4);
    lVar8 = 0xaecb08;
    func_0x000115a8(0xaecb08,&UNK_007d6260);
    iVar6 = *(int *)(lVar8 + 0x50);
    lVar20 = (long)piVar28 + (long)iVar6;
    iVar5 = *(int *)(lVar8 + 0x60);
    bVar4 = *(byte *)((long)piVar28 + (long)iVar5);
    piVar23 = piVar1;
    _swift_getEnumCaseMultiPayload(piVar1,lVar15);
    uVar16 = auStack_110[3];
    if ((int)piVar23 != 0) {
LAB_000a5c00:
      func_0x000a7580(lVar20,0xae60c8,&UNK_007cccd0);
      func_0x000a7580(lVar7,0xaecbd0,&UNK_007d6250);
      return 0;
    }
    uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)bVar4);
    iVar2 = *piVar28;
    iVar3 = *piVar1;
    uVar18 = *(undefined8 *)(piVar1 + 2);
    dVar30 = *(double *)(piVar1 + 4);
    bVar4 = *(byte *)((long)piVar1 + (long)iVar5);
    FUN_00037d20(lVar20,auStack_110[3]);
    FUN_00037d20((long)piVar1 + (long)iVar6,lVar17);
    lVar8 = lStack_a0;
    uVar27 = auStack_110[0];
    if (iVar2 != iVar3) {
      func_0x000a7580(lVar17,0xae60c8,&UNK_007cccd0);
LAB_000a5ce8:
      func_0x000a7580(uVar16,0xae60c8,&UNK_007cccd0);
      FUN_000a6d9c(lStack_a0);
      return 0;
    }
    if (((int)uVar21 == (int)uVar18) && (dVar29 == dVar30)) {
      lVar7 = (long)*(int *)(auStack_110[2] + 0x30);
      FUN_000138a4(uVar16,auStack_110[0]);
      FUN_000138a4(lVar17,uVar27 + lVar7);
      lVar20 = lStack_a8;
      lVar15 = lStack_b0;
      pcVar24 = *(code **)(lStack_a8 + 0x30);
      uVar9 = uVar27;
      (*pcVar24)(uVar27,1,lStack_b0);
      dVar29 = adStack_140[2];
      if ((int)uVar9 == 1) {
        func_0x000a7580(lVar17,0xae60c8,&UNK_007cccd0);
        func_0x000a7580(uVar16,0xae60c8,&UNK_007cccd0);
        lVar7 = uVar27 + lVar7;
        (*pcVar24)(lVar7,1,lVar15);
        if ((int)lVar7 != 1) goto LAB_000a5e5c;
        func_0x000a7580(uVar27,0xae60c8,&UNK_007cccd0);
      }
      else {
        FUN_000138a4(uVar27,adStack_140[2]);
        lVar10 = uVar27 + lVar7;
        (*pcVar24)(lVar10,1,lVar15);
        uVar16 = auStack_128[1];
        if ((int)lVar10 == 1) {
          func_0x000a7580(lVar17,0xae60c8,&UNK_007cccd0);
          func_0x000a7580(auStack_110[3],0xae60c8,&UNK_007cccd0);
          (**(code **)(lVar20 + 8))(dVar29,lVar15);
LAB_000a5e5c:
          uVar21 = 0xae6178;
          puVar13 = &UNK_007d6270;
          uVar16 = uVar27;
          goto LAB_000a5d24;
        }
        uVar9 = auStack_128[1];
        (**(code **)(lVar20 + 0x20))(auStack_128[1],uVar27 + lVar7,lVar15);
        FUN_0006079c();
        dVar30 = dVar29;
        __sSQ2eeoiySbx_xtFZTj(dVar29,uVar16,lVar15,uVar9);
        uStack_c0 = CONCAT44(uStack_c0._4_4_,SUB84(dVar30,0));
        pcVar24 = *(code **)(lVar20 + 8);
        (*pcVar24)(uVar16,lVar15);
        func_0x000a7580(lVar17,0xae60c8,&UNK_007cccd0);
        func_0x000a7580(auStack_110[3],0xae60c8,&UNK_007cccd0);
        (*pcVar24)(dVar29,lVar15);
        func_0x000a7580(uVar27,0xae60c8,&UNK_007cccd0);
        if ((uStack_c0 & 1) == 0) goto LAB_000a5d28;
      }
      uVar14 = (uint)uStack_b8 ^ bVar4;
LAB_000a606c:
      FUN_000a6d9c(lVar8);
      return uVar14 ^ 1;
    }
    uVar21 = 0xae60c8;
    puVar13 = &UNK_007cccd0;
    func_0x000a7580(lVar17,0xae60c8,&UNK_007cccd0);
LAB_000a5d24:
    func_0x000a7580(uVar16,uVar21,puVar13);
LAB_000a5d28:
    FUN_000a6d9c(lVar8);
    return 0;
  }
  FUN_000a753c(lStack_a0,puVar25);
  lStack_e0 = *(long *)(puVar25 + 4);
  uStack_d8 = *(ulong *)(puVar25 + 2);
  dVar32 = *(double *)(puVar25 + 6);
  dVar30 = *(double *)(puVar25 + 8);
  uVar27 = *(ulong *)(puVar25 + 10);
  lVar7 = 0xaecb10;
  func_0x000115a8(0xaecb10,&UNK_007d61e8);
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
    goto LAB_000a5c00;
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
  FUN_00037d20(lVar20,uStack_b8);
  lVar20 = lStack_a8;
  lVar15 = lStack_b0;
  uVar9 = uStack_c8;
  pcVar24 = *(code **)(lStack_a8 + 0x20);
  (*pcVar24)(uStack_c8,(long)puVar25 + lVar17,lStack_b0);
  uVar11 = uStack_c0;
  FUN_00037d20((long)piVar1 + (long)iVar6,uStack_c0);
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
    func_0x000a7580(uVar11,0xae60c8,&UNK_007cccd0);
    (*pcVar24)(uVar9,lVar15);
    goto LAB_000a5ce8;
  }
  if ((int)uStack_d8 == (int)auStack_110[3]) {
    if ((int)lStack_e0 == (int)auStack_110[1]) {
      if ((dVar32 == dVar34) && (dVar30 == dVar33)) {
        if (uStack_e8 != 0) {
          uVar16 = uStack_e8;
          if (uVar19 == 0) goto LAB_000a6108;
          FUN_000aa78c(uStack_e8,uVar19);
          uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)uVar16);
          _swift_bridgeObjectRelease(uVar27);
          _swift_bridgeObjectRelease(uVar19);
          if ((uStack_d8 & 1) != 0) goto LAB_000a607c;
          goto LAB_000a610c;
        }
        uVar16 = uVar19;
        if (uVar19 != 0) goto LAB_000a6108;
LAB_000a607c:
        dVar30 = adStack_140[0];
        iVar6 = *(int *)(auStack_110[2] + 0x30);
        FUN_000138a4(uVar12,adStack_140[0]);
        uStack_d8 = (long)iVar6;
        FUN_000138a4(uVar11,(long)dVar30 + (long)iVar6);
        pcVar22 = *(code **)(lVar20 + 0x30);
        dVar32 = dVar30;
        (*pcVar22)(dVar30,1,lVar15);
        uVar16 = uStack_148;
        if (SUB84(dVar32,0) == 1) {
          lVar20 = (long)dVar30 + uStack_d8;
          (*pcVar22)(lVar20,1,lVar15);
          lVar17 = lStack_a8;
          if ((int)lVar20 == 1) {
            func_0x000a7580(dVar30,0xae60c8,&UNK_007cccd0);
LAB_000a624c:
            if (dVar29 == dVar31) {
              uVar16 = uVar9;
              __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar9,lVar7);
              pcVar24 = *(code **)(lVar17 + 8);
              (*pcVar24)(lVar7,lVar15);
              func_0x000a7580(uVar11,0xae60c8,&UNK_007cccd0);
              (*pcVar24)(uVar9,lVar15);
              func_0x000a7580(uVar12,0xae60c8,&UNK_007cccd0);
              if ((uVar16 & 1) == 0) goto LAB_000a6158;
              uVar14 = (uint)auStack_110[0] ^ (uint)uStack_118;
              goto LAB_000a606c;
            }
          }
          else {
LAB_000a61a8:
            func_0x000a7580(dVar30,0xae6178,&UNK_007d6270);
          }
          pcVar24 = *(code **)(lVar17 + 8);
        }
        else {
          FUN_000138a4(dVar30,uStack_148);
          lVar20 = (long)dVar30 + uStack_d8;
          (*pcVar22)(lVar20,1,lVar15);
          lVar17 = lStack_a8;
          uVar27 = auStack_128[1];
          if ((int)lVar20 == 1) {
            (**(code **)(lStack_a8 + 8))(uVar16,lVar15);
            goto LAB_000a61a8;
          }
          uVar11 = auStack_128[1];
          (*pcVar24)(auStack_128[1],(long)dVar30 + uStack_d8,lVar15);
          FUN_0006079c();
          uVar19 = uVar16;
          __sSQ2eeoiySbx_xtFZTj(uVar16,uVar27,lVar15,uVar11);
          lVar17 = lStack_a8;
          uVar11 = uStack_c0;
          uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)uVar19);
          pcVar24 = *(code **)(lStack_a8 + 8);
          (*pcVar24)(uVar27,lVar15);
          (*pcVar24)(uVar16,lVar15);
          func_0x000a7580(dVar30,0xae60c8,&UNK_007cccd0);
          if ((uStack_d8 & 1) != 0) goto LAB_000a624c;
        }
      }
      else {
        _swift_bridgeObjectRelease(uVar19);
        uVar16 = uStack_e8;
LAB_000a6108:
        _swift_bridgeObjectRelease(uVar16);
LAB_000a610c:
        pcVar24 = *(code **)(lVar20 + 8);
      }
      (*pcVar24)(lVar7,lVar15);
      func_0x000a7580(uVar11,0xae60c8,&UNK_007cccd0);
    }
    else {
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(uStack_e8);
      pcVar24 = *(code **)(lVar20 + 8);
      (*pcVar24)(lVar7,lVar15);
      func_0x000a7580(uVar11,0xae60c8,&UNK_007cccd0);
    }
    (*pcVar24)(uVar9,lVar15);
  }
  else {
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uStack_e8);
    pcVar24 = *(code **)(lVar20 + 8);
    (*pcVar24)(lVar7,lVar15);
    func_0x000a7580(uVar11,0xae60c8,&UNK_007cccd0);
    (*pcVar24)(uVar9,lVar15);
    uVar12 = uStack_b8;
  }
  func_0x000a7580(uVar12,0xae60c8,&UNK_007cccd0);
LAB_000a6158:
  FUN_000a6d9c(lVar8);
  return 0;
}



/* Entry: 000a62dc; end: 000a6677;  */

long * FUN_000a62dc(long *param_1,long *param_2,long param_3)

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
        lVar5 = 0xaecb08;
        func_0x000115a8(0xaecb08,&UNK_007d6260);
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
          lVar6 = 0xae60c8;
          func_0x000115a8(0xae60c8,&UNK_007cccd0);
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
        lVar5 = 0xaecb10;
        func_0x000115a8(0xaecb10,&UNK_007d61e8);
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
          lVar6 = 0xae60c8;
          func_0x000115a8(0xae60c8,&UNK_007cccd0);
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
      lVar5 = 0xaecb18;
      func_0x000115a8(0xaecb18,&UNK_007d61f0);
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
        lVar5 = 0xae60c8;
        func_0x000115a8(0xae60c8,&UNK_007cccd0);
        _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
                *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      uVar7 = 2;
    }
    else {
      param_1[3] = param_2[3];
      lVar5 = 0xaecb20;
      func_0x000115a8(0xaecb20,&UNK_007d61f8);
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
        lVar5 = 0xae60c8;
        func_0x000115a8(0xae60c8,&UNK_007cccd0);
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



/* Entry: 000a6678; end: 000a67db;  */

void FUN_000a6678(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)lVar5;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
      lVar5 = 0xaecb10;
      func_0x000115a8(0xaecb10,&UNK_007d61e8);
      iVar1 = *(int *)(lVar5 + 0x80);
      lVar2 = 0;
      __s10Foundation4DateVMa();
      lVar6 = *(long *)(lVar2 + -8);
      lVar3 = param_1 + iVar1;
      (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
      if ((int)lVar3 == 0) {
        (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,lVar2);
      }
      lVar5 = (long)*(int *)(lVar5 + 0xa0);
      goto LAB_000a67c4;
    }
    lVar5 = 0xaecb08;
    puVar4 = &UNK_007d6260;
LAB_000a6770:
    func_0x000115a8(lVar5,puVar4);
    iVar1 = *(int *)(lVar5 + 0x50);
  }
  else {
    if (iVar1 == 2) {
      lVar5 = 0xaecb18;
      puVar4 = &UNK_007d61f0;
      goto LAB_000a6770;
    }
    if (iVar1 != 3) {
      return;
    }
    lVar5 = 0xaecb20;
    func_0x000115a8(0xaecb20,&UNK_007d61f8);
    iVar1 = *(int *)(lVar5 + 0x60);
  }
  lVar5 = (long)iVar1;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
LAB_000a67c4:
                    /* WARNING: Could not recover jumptable at 0x000a67d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + lVar5,lVar2);
  return;
}



/* Entry: 000a67dc; end: 000a6d9b;  */

undefined8 * FUN_000a67dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[2] = param_2[2];
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar4 = 0xaecb08;
      func_0x000115a8(0xaecb08,&UNK_007d6260);
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
        lVar5 = 0xae60c8;
        func_0x000115a8(0xae60c8,&UNK_007cccd0);
        _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
                *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      iVar1 = *(int *)(lVar4 + 0x60);
    }
    else {
      uVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar9;
      param_1[5] = param_2[5];
      _swift_bridgeObjectRetain();
      lVar4 = 0xaecb10;
      func_0x000115a8(0xaecb10,&UNK_007d61e8);
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
        lVar5 = 0xae60c8;
        func_0x000115a8(0xae60c8,&UNK_007cccd0);
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
      lVar4 = 0xaecb18;
      func_0x000115a8(0xaecb18,&UNK_007d61f0);
      iVar1 = *(int *)(lVar4 + 0x50);
    }
    else {
      param_1[3] = param_2[3];
      lVar4 = 0xaecb20;
      func_0x000115a8(0xaecb20,&UNK_007d61f8);
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
      lVar4 = 0xae60c8;
      func_0x000115a8(0xae60c8,&UNK_007cccd0);
      _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Entry: 000a6d9c; end: 000a6dd7;  */

undefined8 FUN_000a6d9c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_000a6dd8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 000a6dd8; end: 000a6e0f;  */

void FUN_000a6dd8(undefined8 param_1)

{
  if (lRam0000000000aecb98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_00842f24);
  return;
}



/* Entry: 000a6e10; end: 000a73b7;  */

undefined8 * FUN_000a6e10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[2] = param_2[2];
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar4 = 0xaecb08;
      func_0x000115a8(0xaecb08,&UNK_007d6260);
      lVar6 = (long)*(int *)(lVar4 + 0x50);
      lVar3 = 0;
      __s10Foundation4DateVMa();
      lVar7 = *(long *)(lVar3 + -8);
      lVar5 = (long)param_2 + lVar6;
      (**(code **)(lVar7 + 0x30))(lVar5,1,lVar3);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
        (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
      }
      else {
        lVar5 = 0xae60c8;
        func_0x000115a8(0xae60c8,&UNK_007cccd0);
        _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
                *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      iVar1 = *(int *)(lVar4 + 0x60);
    }
    else {
      uVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar9;
      param_1[5] = param_2[5];
      lVar4 = 0xaecb10;
      func_0x000115a8(0xaecb10,&UNK_007d61e8);
      lVar6 = (long)*(int *)(lVar4 + 0x80);
      lVar3 = 0;
      __s10Foundation4DateVMa();
      lVar7 = *(long *)(lVar3 + -8);
      lVar5 = (long)param_2 + lVar6;
      (**(code **)(lVar7 + 0x30))(lVar5,1,lVar3);
      if ((int)lVar5 == 0) {
        pcVar8 = *(code **)(lVar7 + 0x20);
        (*pcVar8)((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
        (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
      }
      else {
        lVar5 = 0xae60c8;
        func_0x000115a8(0xae60c8,&UNK_007cccd0);
        _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
                *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
        pcVar8 = *(code **)(lVar7 + 0x20);
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
      lVar4 = 0xaecb18;
      func_0x000115a8(0xaecb18,&UNK_007d61f0);
      iVar1 = *(int *)(lVar4 + 0x50);
    }
    else {
      param_1[3] = param_2[3];
      lVar4 = 0xaecb20;
      func_0x000115a8(0xaecb20,&UNK_007d61f8);
      iVar1 = *(int *)(lVar4 + 0x60);
    }
    lVar3 = (long)iVar1;
    lVar5 = 0;
    __s10Foundation4DateVMa();
    lVar6 = *(long *)(lVar5 + -8);
    lVar4 = (long)param_2 + lVar3;
    (**(code **)(lVar6 + 0x30))(lVar4,1,lVar5);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar5);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar3,0,1,lVar5);
    }
    else {
      lVar4 = 0xae60c8;
      func_0x000115a8(0xae60c8,&UNK_007cccd0);
      _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Entry: 000a73b8; end: 000a73e7;  */

void FUN_000a73b8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000a73c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 000a73e8; end: 000a753b;  */

void FUN_000a73e8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  puVar2 = PTR___sBi64_WV_0099ae80;
  puVar1 = PTR___sBi64_WV_0099ae80 + 0x40;
  lVar3 = 0x13f;
  puStack_100 = puVar1;
  puStack_f8 = puVar1;
  puStack_f0 = puVar1;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lVar3 = *(long *)(lVar3 + -8) + 0x40;
    puStack_e0 = &UNK_007d6218;
    uVar5 = 0;
    puStack_e8 = (undefined *)lVar3;
    _swift_getTupleTypeLayout(auStack_90,0,5,&puStack_100);
    puStack_d8 = &UNK_007d6230;
    lVar4 = 0x13f;
    puStack_100 = puVar1;
    puStack_f8 = puVar1;
    puStack_f0 = puVar1;
    puStack_e8 = puVar1;
    puStack_e0 = puVar1;
    lStack_d0 = lVar3;
    puStack_c8 = puVar1;
    puStack_70 = auStack_90;
    __s10Foundation4DateVMa();
    if (uVar5 < 0x40) {
      lStack_c0 = *(long *)(lVar4 + -8) + 0x40;
      puStack_b8 = &UNK_007d6218;
      _swift_getTupleTypeLayout(auStack_b0,0,10,&puStack_100);
      puVar2 = puVar2 + 0x40;
      puStack_100 = puVar2;
      puStack_f8 = puVar2;
      puStack_f0 = puVar2;
      puStack_e8 = (undefined *)lVar3;
      puStack_68 = auStack_b0;
      _swift_getTupleTypeLayout(auStack_120,0,4,&puStack_100);
      puStack_100 = puVar2;
      puStack_f8 = puVar2;
      puStack_f0 = puVar2;
      puStack_e8 = puVar2;
      puStack_e0 = (undefined *)lVar3;
      puStack_60 = auStack_120;
      _swift_getTupleTypeLayout(auStack_140,0,5,&puStack_100);
      puStack_58 = auStack_140;
      _swift_initEnumMetadataMultiPayload(param_1,0x100,4,&puStack_70);
    }
  }
  return;
}



/* Entry: 000a753c; end: 000a7693;  */

undefined8 FUN_000a753c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_000a6dd8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 000a7694; end: 000a76b3;  */

void FUN_000a7694(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 000a76b4; end: 000a772b; -[SCCurrentPageEvent description] */

void FUN_000a76b4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_000a6dd8();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_000a772c(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_000a6d9c(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000a772c; end: 000a789b;  */

void FUN_000a772c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  
  lVar2 = 0xaecca0;
  func_0x000115a8(0xaecca0,&UNK_007d6268);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  FUN_000a6dd8();
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x38))(lVar5,1,1,lVar2);
  lStack_c0 = lVar5;
  lStack_a0 = lVar5;
  lStack_80 = lVar5;
  lStack_60 = lVar5;
  FUN_000a9814(FUN_000aa3c8,auStack_70,FUN_000aa51c,auStack_90,FUN_000aa5e8,auStack_b0,FUN_000aa6b8,
               auStack_d0);
  func_0x000aa704(lVar5,puVar4,0xaecca0,&UNK_007d6268);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 != 1) {
    _objc_release(param_2);
    func_0x000aa6c0(puVar4,param_1);
    func_0x000aa74c(lVar5,0xaecca0,&UNK_007d6268);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa789c);
  (*pcVar1)();
}



/* Entry: 000a789c; end: 000a78e3; -[SCCurrentPageEvent init] */

void FUN_000a789c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAttributionServices/SCCurrentPageEventWrapper.swift",0x35,2,0xad,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa78e4);
  (*pcVar1)();
}



/* Entry: 000a78e4; end: 000a7917; -[SCCurrentPageEvent hash] */

undefined8 FUN_000a78e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000a7918();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000a7918; end: 000a92e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7918(void)

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
  
  lVar6 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar5 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar10 - extraout_x12_02;
  __ss6HasherVABycfC(auStack_a8);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_00aecbd8));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecbe0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecbe0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecbe8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecbe8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_00aecbf0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_00aecbf0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x000aa704(unaff_x20 + _DAT_00aecbf8,lVar11,0xae60c8,&UNK_007cccd0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar3 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar12 = lVar11;
  (*pcVar14)(lVar11,1,lVar3);
  if ((int)lVar12 == 1) {
    func_0x000aa74c(lVar11,0xae60c8,&UNK_007cccd0);
    lVar11 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar11,lVar3);
    lVar11 = lVar12;
    func_0x007843a0(lVar12);
    _objc_release(lVar12);
  }
  __ss6HasherV8_combineyySuF(lVar11);
  bVar2 = *(byte *)(unaff_x20 + _DAT_00aecc00);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc08) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc08);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc10) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc10);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc18) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc18);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_00aecc20))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_00aecc20);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_00aecc28))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_00aecc28);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_00aecc30);
  if (lVar11 == 0) {
    lVar12 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar11,PTR___sSSN_0099b040);
    lVar12 = lVar11;
    func_0x007843a0();
    _objc_release(lVar11);
  }
  __ss6HasherV8_combineyySuF(lVar12);
  func_0x000aa704(unaff_x20 + _DAT_00aecc38,lVar10,0xae60c8,&UNK_007cccd0);
  lVar11 = lVar10;
  (*pcVar14)(lVar10,1,lVar3);
  if ((int)lVar11 == 1) {
    func_0x000aa74c(lVar10,0xae60c8,&UNK_007cccd0);
    lVar10 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar10,lVar3);
    lVar10 = lVar11;
    func_0x007843a0(lVar11);
    _objc_release(lVar11);
  }
  __ss6HasherV8_combineyySuF(lVar10);
  if ((char)((ulong *)(unaff_x20 + _DAT_00aecc40))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_00aecc40);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x000aa704(unaff_x20 + _DAT_00aecc48,lVar9,0xae60c8,&UNK_007cccd0);
  lVar10 = lVar9;
  (*pcVar14)(lVar9,1,lVar3);
  if ((int)lVar10 == 1) {
    func_0x000aa74c(lVar9,0xae60c8,&UNK_007cccd0);
    lVar9 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar9,lVar3);
    lVar9 = lVar10;
    func_0x007843a0(lVar10);
    _objc_release(lVar10);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  bVar2 = *(byte *)(unaff_x20 + _DAT_00aecc50);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar2 = bVar2 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc58) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc58);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc60) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc60);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_00aecc68))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_00aecc68);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x000aa704(unaff_x20 + _DAT_00aecc70,lVar6,0xae60c8,&UNK_007cccd0);
  lVar9 = lVar6;
  (*pcVar14)(lVar6,1,lVar3);
  if ((int)lVar9 == 1) {
    func_0x000aa74c(lVar6,0xae60c8,&UNK_007cccd0);
    lVar6 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(lVar6,lVar3);
    lVar6 = lVar9;
    func_0x007843a0(lVar9);
    _objc_release(lVar9);
  }
  __ss6HasherV8_combineyySuF(lVar6);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc78) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc78);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc80) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc80);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_00aecc88))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_00aecc88);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_00aecc90))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_00aecc90);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  func_0x000aa704(unaff_x20 + _DAT_00aecc98,puVar5,0xae60c8,&UNK_007cccd0);
  puVar4 = puVar5;
  (*pcVar14)(puVar5,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x000aa74c(puVar5,0xae60c8,&UNK_007cccd0);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar13 + 8))(puVar5,lVar3);
    puVar5 = puVar4;
    func_0x007843a0(puVar4);
    _objc_release(puVar4);
  }
  __ss6HasherV8_combineyySuF(puVar5);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 000a92e4; end: 000a9373; -[SCCurrentPageEvent isEqual:] */

uint FUN_000a92e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000a8170(&uStack_40);
  _objc_release(param_1);
  func_0x000aa74c(&uStack_40,0xae65a0,&UNK_007ce270);
  return uVar1 & 1;
}



/* Entry: 000a9374; end: 000a9377; -[SCCurrentPageEvent copyWithZone:] */

void FUN_000a9374(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 000a9378; end: 000a947b; +[SCCurrentPageEvent startPageViewWithNewPageName:prevPageName:startTimestamp:startDate:newPageIsForeground:] */

void FUN_000a9378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
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
  FUN_000aa820(param_1,param_4,param_5,puVar2,param_7);
  func_0x000aa74c(puVar2,0xae60c8,&UNK_007cccd0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_4);
  return;
}



/* Entry: 000a947c; end: 000a9623; +[SCCurrentPageEvent endPageViewWithNextPageName:finishedPageName:prevPageName:startTimestamp:endTimestamp:featureStack:startDate:elapsedTimeInSec:endDate:finishedPageIsForeground:] */

void FUN_000a947c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10,undefined8 param_11,byte param_12)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_90 [12];
  uint uStack_84;
  
  uStack_84 = (uint)param_12;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - extraout_x8_00;
  if (param_9 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_9,PTR___sSSN_0099b040);
  }
  if (param_10 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_10);
  }
  (**(code **)(lVar2 + 0x38))(lVar4,param_10 == 0,1,lVar1);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_11);
  FUN_000aabf4(param_1,param_2,param_3,param_6,param_7,param_8,param_9,lVar4,puVar3,uStack_84);
  _swift_bridgeObjectRelease(param_9);
  (**(code **)(lVar2 + 8))(puVar3,lVar1);
  func_0x000aa74c(lVar4,0xae60c8,&UNK_007cccd0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_6);
  return;
}



/* Entry: 000a9624; end: 000a9717; +[SCCurrentPageEvent startTransitionFromPageName:toPageName:startTimestamp:startDate:] */

void FUN_000a9624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
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
  FUN_000ab008(param_1,param_4,param_5,puVar2);
  func_0x000aa74c(puVar2,0xae60c8,&UNK_007cccd0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_4);
  return;
}



/* Entry: 000a9718; end: 000a9813; +[SCCurrentPageEvent endTransitionFromPageName:toPageName:startTimestamp:endTimestamp:startDate:] */

void FUN_000a9718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
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
  func_0x000ab3d4(param_1,param_2,param_5,param_6,puVar2);
  func_0x000aa74c(puVar2,0xae60c8,&UNK_007cccd0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_5);
  return;
}



/* Entry: 000a9814; end: 000a9caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a9814(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_90;
  code *pcStack_88;
  
  lVar5 = 0xae60c8;
  uStack_90 = param_4;
  pcStack_88 = param_3;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar8 - extraout_x12_00;
  bVar1 = *(byte *)(unaff_x20 + _DAT_00aecbd8);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecbe0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c68);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecbe8) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c78);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecbf0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c88);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_00aecbe0);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecbe8);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_00aecbf0);
      func_0x000aa704(unaff_x20 + _DAT_00aecbf8,lVar5,0xae60c8,&UNK_007cccd0);
      if (*(byte *)(unaff_x20 + _DAT_00aecc00) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c98);
        (*pcVar2)();
      }
      (*param_1)(uVar11,uVar4,uVar7,lVar5,*(byte *)(unaff_x20 + _DAT_00aecc00) & 1);
      func_0x000aa74c(lVar5,0xae60c8,&UNK_007cccd0);
    }
    else {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc08) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c70);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc10) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c80);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc18) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c90);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc20) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c9c);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc28) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9ca4);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_00aecc08);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_00aecc10);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_00aecc18);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_00aecc20);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_00aecc28);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_00aecc30);
      func_0x000aa704(unaff_x20 + _DAT_00aecc38,lVar8,0xae60c8,&UNK_007cccd0);
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc40) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9ca8);
        (*pcVar2)();
      }
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_00aecc40);
      func_0x000aa704(unaff_x20 + _DAT_00aecc48,lVar6,0xae60c8,&UNK_007cccd0);
      lVar3 = 0;
      __s10Foundation4DateVMa();
      lVar10 = *(long *)(lVar3 + -8);
      lVar5 = lVar6;
      (**(code **)(lVar10 + 0x30))(lVar6,1,lVar3);
      if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9cac);
        (*pcVar2)();
      }
      if (*(byte *)(unaff_x20 + _DAT_00aecc50) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xa9cb0);
        (*pcVar2)();
      }
      (*pcStack_88)(uVar12,uVar13,uVar14,uVar4,uVar7,uVar11,uVar9,lVar8,lVar6,
                    *(byte *)(unaff_x20 + _DAT_00aecc50) & 1);
      func_0x000aa74c(lVar8,0xae60c8,&UNK_007cccd0);
      (**(code **)(lVar10 + 8))(lVar6,lVar3);
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc58) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c6c);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc60) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c7c);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc68) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c8c);
      (*pcVar2)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_00aecc68),*(undefined8 *)(unaff_x20 + _DAT_00aecc58)
               ,*(undefined8 *)(unaff_x20 + _DAT_00aecc60),unaff_x20 + _DAT_00aecc70);
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc78) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c74);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc80) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c84);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc88) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xa9c94);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aecc90) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xa9ca0);
      (*pcVar2)();
    }
    (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_00aecc88),*(undefined8 *)(unaff_x20 + _DAT_00aecc90)
               ,*(undefined8 *)(unaff_x20 + _DAT_00aecc78),
               *(undefined8 *)(unaff_x20 + _DAT_00aecc80),unaff_x20 + _DAT_00aecc98);
  }
  return;
}



/* Entry: 000a9cb0; end: 000a9d23; -[SCCurrentPageEvent matchStartPageView:endPageView:startTransition:endTransition:] */

void FUN_000a9cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_000a9814(FUN_000aba48,auStack_40,0xaba50,auStack_60,0xaba58,auStack_80,0xaba60,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 000a9d24; end: 000a9e3f;  */

void FUN_000a9d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,long param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  func_0x000aa704(param_4,puVar3,0xae60c8,&UNK_007cccd0);
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
  (**(code **)(param_6 + 0x10))(param_1,param_6,param_2,param_3,puVar4,param_5 & 1);
  _objc_release(puVar4);
  return;
}



/* Entry: 000a9e40; end: 000a9fcf;  */

void FUN_000a9e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                 undefined8 param_9,uint param_10,long param_11)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [12];
  uint uStack_84;
  
  lVar1 = 0xae60c8;
  uStack_84 = param_10;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  if (param_7 != 0) {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_7,PTR___sSSN_0099b040);
  }
  func_0x000aa704(param_8,puVar3,0xae60c8,&UNK_007cccd0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = puVar2;
  puVar6 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar3;
    puVar6 = puVar2;
  }
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(param_11 + 0x10))
            (param_1,param_2,param_3,param_11,param_4,param_5,param_6,param_7,puVar6,puVar4,
             uStack_84 & 1);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  return;
}



/* Entry: 000a9fd0; end: 000aa1ff;  */

void FUN_000a9fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  func_0x000aa704(param_4,puVar3,0xae60c8,&UNK_007cccd0);
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



/* Entry: 000aa200; end: 000aa233;  */

void FUN_000aa200(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000aa234; end: 000aa2ef; -[SCCurrentPageEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aa234(long param_1)

{
  func_0x000aa74c(param_1 + _DAT_00aecbf8,0xae60c8,&UNK_007cccd0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00aecc30));
  func_0x000aa74c(param_1 + _DAT_00aecc38,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(param_1 + _DAT_00aecc48,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(param_1 + _DAT_00aecc70,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(param_1 + _DAT_00aecc98,0xae60c8,&UNK_007cccd0);
  return;
}



/* Entry: 000aa2f0; end: 000aa3c7;  */

void FUN_000aa2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  func_0x000aa74c(param_6,0xaecca0,&UNK_007d6268);
  lVar3 = 0xaecb08;
  func_0x000115a8(0xaecb08,&UNK_007d6260);
  iVar1 = *(int *)(lVar3 + 0x50);
  iVar2 = *(int *)(lVar3 + 0x60);
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = param_1;
  func_0x000aa704(param_4,(long)param_6 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  *(undefined1 *)((long)param_6 + (long)iVar2) = param_5;
  lVar3 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(param_6,lVar3,0);
                    /* WARNING: Could not recover jumptable at 0x000aa3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_6,0,1,lVar3);
  return;
}



/* Entry: 000aa3c8; end: 000aa3cf;  */

void FUN_000aa3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000aa74c(puVar4,0xaecca0,&UNK_007d6268);
  lVar3 = 0xaecb08;
  func_0x000115a8(0xaecb08,&UNK_007d6260);
  iVar1 = *(int *)(lVar3 + 0x50);
  iVar2 = *(int *)(lVar3 + 0x60);
  *puVar4 = param_2;
  puVar4[1] = param_3;
  puVar4[2] = param_1;
  func_0x000aa704(param_4,(long)puVar4 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  *(undefined1 *)((long)puVar4 + (long)iVar2) = param_5;
  lVar3 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(puVar4,lVar3,0);
                    /* WARNING: Could not recover jumptable at 0x000aa3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,0,1,lVar3);
  return;
}



/* Entry: 000aa3d0; end: 000aa51b;  */

void FUN_000aa3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined1 param_10,undefined8 *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  func_0x000aa74c(param_11,0xaecca0,&UNK_007d6268);
  lVar5 = 0xaecb10;
  func_0x000115a8(0xaecb10,&UNK_007d61e8);
  iVar1 = *(int *)(lVar5 + 0x80);
  iVar2 = *(int *)(lVar5 + 0x90);
  iVar3 = *(int *)(lVar5 + 0xa0);
  iVar4 = *(int *)(lVar5 + 0xb0);
  *param_11 = param_4;
  param_11[1] = param_5;
  param_11[2] = param_6;
  param_11[3] = param_1;
  param_11[4] = param_2;
  param_11[5] = param_7;
  func_0x000aa704(param_8,(long)param_11 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  *(undefined8 *)((long)param_11 + (long)iVar2) = param_3;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_11 + (long)iVar3,param_9,lVar5);
  *(undefined1 *)((long)param_11 + (long)iVar4) = param_10;
  lVar5 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(param_11,lVar5,1);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_11,0,1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_7);
  return;
}



/* Entry: 000aa51c; end: 000aa523;  */

void FUN_000aa51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined1 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  
  puVar6 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000aa74c(puVar6,0xaecca0,&UNK_007d6268);
  lVar5 = 0xaecb10;
  func_0x000115a8(0xaecb10,&UNK_007d61e8);
  iVar1 = *(int *)(lVar5 + 0x80);
  iVar2 = *(int *)(lVar5 + 0x90);
  iVar3 = *(int *)(lVar5 + 0xa0);
  iVar4 = *(int *)(lVar5 + 0xb0);
  *puVar6 = param_4;
  puVar6[1] = param_5;
  puVar6[2] = param_6;
  puVar6[3] = param_1;
  puVar6[4] = param_2;
  puVar6[5] = param_7;
  func_0x000aa704(param_8,(long)puVar6 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  *(undefined8 *)((long)puVar6 + (long)iVar2) = param_3;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)puVar6 + (long)iVar3,param_9,lVar5);
  *(undefined1 *)((long)puVar6 + (long)iVar4) = param_10;
  lVar5 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(puVar6,lVar5,1);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar6,0,1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_7);
  return;
}



/* Entry: 000aa524; end: 000aa5e7;  */

void FUN_000aa524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  
  func_0x000aa74c(param_5,0xaecca0,&UNK_007d6268);
  lVar2 = 0xaecb18;
  func_0x000115a8(0xaecb18,&UNK_007d61f0);
  iVar1 = *(int *)(lVar2 + 0x50);
  *param_5 = param_2;
  param_5[1] = param_3;
  param_5[2] = param_1;
  func_0x000aa704(param_4,(long)param_5 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  lVar2 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(param_5,lVar2,2);
                    /* WARNING: Could not recover jumptable at 0x000aa5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_5,0,1,lVar2);
  return;
}



/* Entry: 000aa5e8; end: 000aa5ef;  */

void FUN_000aa5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000aa74c(puVar3,0xaecca0,&UNK_007d6268);
  lVar2 = 0xaecb18;
  func_0x000115a8(0xaecb18,&UNK_007d61f0);
  iVar1 = *(int *)(lVar2 + 0x50);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_1;
  func_0x000aa704(param_4,(long)puVar3 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  lVar2 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(puVar3,lVar2,2);
                    /* WARNING: Could not recover jumptable at 0x000aa5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  return;
}



/* Entry: 000aa5f0; end: 000aa6b7;  */

void FUN_000aa5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  
  func_0x000aa74c(param_6,0xaecca0,&UNK_007d6268);
  lVar2 = 0xaecb20;
  func_0x000115a8(0xaecb20,&UNK_007d61f8);
  iVar1 = *(int *)(lVar2 + 0x60);
  *param_6 = param_3;
  param_6[1] = param_4;
  param_6[2] = param_1;
  param_6[3] = param_2;
  func_0x000aa704(param_5,(long)param_6 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  lVar2 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(param_6,lVar2,3);
                    /* WARNING: Could not recover jumptable at 0x000aa6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_6,0,1,lVar2);
  return;
}



/* Entry: 000aa6b8; end: 000aa6bf;  */

void FUN_000aa6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000aa74c(puVar3,0xaecca0,&UNK_007d6268);
  lVar2 = 0xaecb20;
  func_0x000115a8(0xaecb20,&UNK_007d61f8);
  iVar1 = *(int *)(lVar2 + 0x60);
  *puVar3 = param_3;
  puVar3[1] = param_4;
  puVar3[2] = param_1;
  puVar3[3] = param_2;
  func_0x000aa704(param_5,(long)puVar3 + (long)iVar1,0xae60c8,&UNK_007cccd0);
  lVar2 = 0;
  FUN_000a6dd8();
  _swift_storeEnumTagMultiPayload(puVar3,lVar2,3);
                    /* WARNING: Could not recover jumptable at 0x000aa6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  return;
}



/* Entry: 000aa6c0; end: 000aa78b;  */

undefined8 FUN_000aa6c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_000a6dd8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 000aa78c; end: 000aa80f;  */

undefined8 FUN_000aa78c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 != 0) && (param_1 != param_2)) {
      plVar4 = (long *)(param_2 + 0x28);
      plVar5 = (long *)(param_1 + 0x28);
      do {
        uVar1 = plVar5[-1];
        if ((uVar1 != plVar4[-1] || *plVar5 != *plVar4) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) == 0)) goto LAB_000aa7f4;
        plVar4 = plVar4 + 2;
        plVar5 = plVar5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_000aa7f4:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 000aa810; end: 000aa81f;  */

ulong FUN_000aa810(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}


