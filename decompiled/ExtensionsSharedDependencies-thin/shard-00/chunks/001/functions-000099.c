/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001d2458; end: 001d24e7;  */

void FUN_001d2458(undefined8 param_1)

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
  *(qword *)(pcVar9 + 8) = 0x1d262c;
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



/* Entry: 001d24e8; end: 001d2527;  */

void FUN_001d24e8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 001d2528; end: 001d254f;  */

void FUN_001d2528(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined1 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d2550; end: 001d2693;  */

void FUN_001d2550(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  __ss11_StringGutsV4growyySiF(0x45);
  FUN_001dca4c(uVar2,uVar3,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0xd000000000000043,0x80000000008b9b30);
  uVar2 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x0076f2ac(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00787330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_invalidate_00abc9d0);
  return;
}



/* Entry: 001d2694; end: 001d2723;  */

void FUN_001d2694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = &UNK_009b7d00;
  _swift_allocObject(&UNK_009b7d00,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  uVar2 = 0xff;
  __ss6ResultOMa(0xff);
  lVar3 = 0;
  __sScGMa(0,uVar2);
  lVar4 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  FUN_001cdfd4(param_1,puVar7);
  lVar4 = 0;
  __sScPMa();
  lVar11 = *(long *)(lVar4 + -8);
  puVar5 = puVar7;
  (**(code **)(lVar11 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 == 1) {
    FUN_001cdb1c(puVar7);
    puVar9 = &UNK_00003100;
    lVar4 = *(long *)(puVar1 + 0x10);
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar11 + 8))(puVar7,lVar4);
    puVar9 = (undefined *)((ulong)puVar5 & 0xff | 0x3100);
    lVar4 = *(long *)(puVar1 + 0x10);
  }
  if (lVar4 == 0) {
    lVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(puVar1 + 0x18);
    lVar11 = lVar4;
    _swift_getObjectType();
    _swift_unknownObjectRetain(lVar4);
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar4);
  }
  uVar8 = *unaff_x20;
  puVar6 = &UNK_009b7d28;
  _swift_allocObject(&UNK_009b7d28,0x28,7);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined **)(puVar6 + 0x18) = &UNK_007e47e8;
  *(undefined **)(puVar6 + 0x20) = puVar1;
  puStack_90 = (undefined8 *)0x0;
  if (lVar10 != 0 || lVar11 != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = &uStack_80;
    lStack_70 = lVar11;
    lStack_68 = lVar10;
  }
  uStack_98 = 1;
  uStack_88 = uVar8;
  _swift_task_create(puVar9,&uStack_98,uVar2,&UNK_007e4800,puVar6);
  _swift_release();
  return;
}



/* Entry: 001d2724; end: 001d2727;  */

void FUN_001d2724(void)

{
  return;
}



/* Entry: 001d2728; end: 001d27db;  */

void FUN_001d2728(qword param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  segment_command *psVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  lVar7 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar7;
  lVar6 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar6;
  uVar1 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  pcVar2 = section_00000068.segname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x30) = pcVar2;
  lVar6 = 0;
  func_0x001d3ae4(0,*(undefined8 *)(param_2 + 0x10),lVar7,*(undefined8 *)(param_2 + 0x20));
  *(long *)pcVar2 = unaff_x22;
  *(code **)(pcVar2 + 8) = FUN_001d27dc;
  *(undefined8 *)(pcVar2 + 0x20) = 0;
  *(ulong *)(pcVar2 + 0x28) = uVar1;
  *(qword *)(pcVar2 + 0x10) = param_1;
  *(undefined8 *)(pcVar2 + 0x18) = 0;
  lVar8 = *(long *)(lVar6 + 0x18);
  *(long *)(pcVar2 + 0x30) = lVar8;
  lVar7 = *(long *)(lVar8 + -8);
  *(long *)(pcVar2 + 0x38) = lVar7;
  uVar1 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0x40) = uVar1;
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(pcVar2 + 0x48) = uVar5;
  uVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar5,lVar8,*(undefined8 *)(lVar6 + 0x20));
  *(undefined8 *)(pcVar2 + 0x50) = uVar3;
  lVar6 = 0;
  __sSqMa(0,uVar3);
  *(long *)(pcVar2 + 0x58) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(pcVar2 + 0x60) = lVar6;
  uVar1 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0x68) = uVar1;
  psVar4 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(pcVar2 + 0x70) = psVar4;
  uVar5 = 0;
  __sScGMa(0,uVar3);
  *(char **)psVar4 = pcVar2;
  *(code **)psVar4->segname = FUN_001d357c;
                    /* WARNING: Could not recover jumptable at 0x001d3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d36e0(uVar1,0,0,uVar5);
  return;
}



/* Entry: 001d27dc; end: 001d2843;  */

void FUN_001d27dc(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d2844,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x001d2840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 001d2844; end: 001d288b;  */

void FUN_001d2844(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar1,*(undefined8 *)(unaff_x22 + 0x18));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001d2888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d288c; end: 001d297b;  */

void FUN_001d288c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x98) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(long *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(long *)(unaff_x22 + 0x58) = in_x4;
  lVar3 = *(long *)(in_stack_00000010 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  lVar3 = 0;
  __ss6ResultOMa(0,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar1;
  if (in_x4 == 0) {
    in_x4 = 0;
    in_x5 = 0;
  }
  else {
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
  }
  *(long *)(unaff_x22 + 0xd0) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xd8) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d297c,in_x4);
  return;
}



/* Entry: 001d297c; end: 001d2a3b;  */

void FUN_001d297c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  segment_command *psVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = 0;
  __ss6ResultOMa(0,uVar5,uVar1,uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x68);
  psVar4 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0xe0) = psVar4;
  psVar4->cmd = (int)unaff_x22;
  psVar4->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar4->segname = FUN_001d2a3c;
                    /* WARNING: Could not recover jumptable at 0x001d2a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d2eb8(*(undefined8 *)(unaff_x22 + 200),uVar3,*(undefined8 *)(unaff_x22 + 0xb0),
               *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),&UNK_007e47c0,
               unaff_x22 + 0x10,uVar3,*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 001d2a3c; end: 001d2a7f;  */

void FUN_001d2a3c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)
            (FUN_001d2a80,*(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0xd8));
  return;
}



/* Entry: 001d2a80; end: 001d2bcf;  */

void FUN_001d2a80(void)

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
    FUN_00058224(uVar9,uVar3,uVar6);
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
                    /* WARNING: Could not recover jumptable at 0x001d2bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 001d2bd0; end: 001d2c3b;  */

void FUN_001d2bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d2c3c,0,0);
  return;
}



/* Entry: 001d2c3c; end: 001d2cb7;  */

void FUN_001d2c3c(void)

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
  plVar3[1] = (long)FUN_001d2cb8;
                    /* WARNING: Could not recover jumptable at 0x001d2cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar3,*(undefined8 *)(unaff_x22 + 0x20),(undefined8 *)(unaff_x22 + 0x10),
             *(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 001d2cb8; end: 001d2d6b;  */

void FUN_001d2cb8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x1d2d10;
  }
  else {
    pcVar1 = FUN_001d2d6c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001d2d6c; end: 001d2eb7;  */

void FUN_001d2d6c(void)

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
  uVar5 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  _swift_dynamicCast(uVar9,(long *)(unaff_x22 + 0x18),uVar5,uVar7,7);
  uVar5 = 0;
  __ss6ResultOMa(0,uVar2,uVar7,uVar1);
  _swift_storeEnumTagMultiPayload(uVar9,uVar5,1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x001d2eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d2eb8; end: 001d2fff;  */

void FUN_001d2eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long unaff_x22;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_0099bfd8
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x1d4160;
                    /* WARNING: Could not recover jumptable at 0x00778d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_0099bfd0
    )(plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  pcVar3 = section_00000158.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar3;
  *(long *)pcVar3 = unaff_x22;
  pcVar3[8] = 'X';
  pcVar3[9] = 'A';
  pcVar3[10] = '\x1d';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
                    /* WARNING: Could not recover jumptable at 0x001d2ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d3b94(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 001d3000; end: 001d3087;  */

void FUN_001d3000(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  qword *pqVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  qword unaff_x22;
  
  pqVar2 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar2;
  *pqVar2 = unaff_x22;
  pqVar2[1] = (qword)FUN_001d3088;
  pqVar2[4] = param_7;
  pqVar2[5] = param_8;
  pqVar2[2] = param_1;
  pqVar2[3] = param_6;
  lVar6 = *(long *)(param_7 + -8);
  pqVar2[6] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3,param_4,param_5);
  pqVar2[7] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[8] = uVar4;
  iVar1 = *param_4;
  puVar5 = (undefined8 *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  pqVar2[9] = (qword)puVar5;
  *puVar5 = pqVar2;
  puVar5[1] = FUN_001d3170;
                    /* WARNING: Could not recover jumptable at 0x001d316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(puVar5,param_1,uVar3);
  return;
}



/* Entry: 001d3088; end: 001d30c3;  */

void FUN_001d3088(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d30c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d30c4; end: 001d316f;  */

void FUN_001d30c4(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

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
  plVar4[1] = (long)FUN_001d3170;
                    /* WARNING: Could not recover jumptable at 0x001d316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar4,param_1,uVar2);
  return;
}



/* Entry: 001d3170; end: 001d31c7;  */

void FUN_001d3170(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001d31c8;
  }
  else {
    pcVar1 = FUN_001d322c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001d31c8; end: 001d322b;  */

void FUN_001d31c8(void)

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
                    /* WARNING: Could not recover jumptable at 0x001d3228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d322c; end: 001d32bf;  */

void FUN_001d322c(void)

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
                    /* WARNING: Could not recover jumptable at 0x001d32bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d32c0; end: 001d3467;  */

void FUN_001d32c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
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
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_a0 + -extraout_x8;
  FUN_001cdfd4(param_1,puVar5);
  lVar1 = 0;
  __sScPMa();
  lVar9 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar9 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_001cdb1c(puVar5);
    puVar7 = &UNK_00003100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar9 + 8))(puVar5,lVar1);
    puVar7 = (undefined *)((ulong)puVar2 & 0xff | 0x3100);
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
  puVar3 = &UNK_009b7d28;
  _swift_allocObject(&UNK_009b7d28,0x28,7);
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
  _swift_task_create(puVar7,&uStack_98,uVar4,&UNK_007e4800,puVar3);
  _swift_release();
  return;
}



/* Entry: 001d3468; end: 001d357b;  */

void FUN_001d3468(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  segment_command *psVar3;
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
  psVar3 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x70) = psVar3;
  uVar4 = 0;
  __sScGMa(0,uVar2);
  psVar3->cmd = (int)unaff_x22;
  psVar3->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar3->segname = FUN_001d357c;
                    /* WARNING: Could not recover jumptable at 0x001d3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d36e0(uVar1,param_2,param_3,uVar4);
  return;
}



/* Entry: 001d357c; end: 001d35ef;  */

void FUN_001d357c(void)

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
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d35f0,uVar2,uVar1);
  return;
}



/* Entry: 001d35f0; end: 001d36df;  */

/* WARNING: Removing unreachable block (ram,0x001d3660) */

void FUN_001d35f0(void)

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
    FUN_00057a00(*(undefined8 *)(unaff_x22 + 0x10),lVar3,*(undefined8 *)(unaff_x22 + 0x40));
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
                    /* WARNING: Could not recover jumptable at 0x001d36dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d36e0; end: 001d37d3;  */

void FUN_001d36e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  dword *pdVar3;
  long unaff_x22;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScG4next9isolationxSgScA_pSgYi_tYaFTu_0099be28 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_001d37d4;
                    /* WARNING: Could not recover jumptable at 0x00778788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG4next9isolationxSgScA_pSgYi_tYaF_0099be20)
              (plVar2,param_1,param_2,param_3,param_4);
    return;
  }
  pdVar3 = &segment_command_00000020.nsects;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(undefined8 *)(pdVar3 + 2) = 0x1d415c;
                    /* WARNING: Could not recover jumptable at 0x001d37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d3d78(pdVar3,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 001d37d4; end: 001d380f;  */

void FUN_001d37d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x001d380c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d3810; end: 001d38ab;  */

void FUN_001d3810(qword param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  segment_command *psVar4;
  ulong uVar5;
  qword qVar6;
  qword *pqVar7;
  undefined8 uVar8;
  long lVar9;
  qword unaff_x22;
  long lVar10;
  long lVar11;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  lVar9 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar9;
  uVar1 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar5 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar5;
  qVar6 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(qword *)(unaff_x22 + 0x30) = qVar6;
  pqVar7 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x38) = pqVar7;
  *pqVar7 = unaff_x22;
  pqVar7[1] = (qword)FUN_001d38ac;
  pqVar7[2] = qVar6;
  lVar10 = *(long *)(param_2 + 0x18);
  pqVar7[3] = lVar10;
  lVar9 = *(long *)(lVar10 + -8);
  pqVar7[4] = lVar9;
  uVar1 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar7[5] = uVar1;
  pcVar2 = section_00000068.segname + 8;
  _swift_task_alloc();
  pqVar7[6] = (qword)pcVar2;
  lVar9 = 0;
  func_0x001d3ae4(0,*(undefined8 *)(param_2 + 0x10),lVar10,*(undefined8 *)(param_2 + 0x20));
  *(qword **)pcVar2 = pqVar7;
  *(code **)(pcVar2 + 8) = FUN_001d27dc;
  *(undefined8 *)(pcVar2 + 0x20) = 0;
  *(ulong *)(pcVar2 + 0x28) = uVar1;
  *(qword *)(pcVar2 + 0x10) = param_1;
  *(undefined8 *)(pcVar2 + 0x18) = 0;
  lVar11 = *(long *)(lVar9 + 0x18);
  *(long *)(pcVar2 + 0x30) = lVar11;
  lVar10 = *(long *)(lVar11 + -8);
  *(long *)(pcVar2 + 0x38) = lVar10;
  uVar1 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0x40) = uVar1;
  uVar8 = *(undefined8 *)(lVar9 + 0x10);
  *(undefined8 *)(pcVar2 + 0x48) = uVar8;
  uVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar8,lVar11,*(undefined8 *)(lVar9 + 0x20));
  *(undefined8 *)(pcVar2 + 0x50) = uVar3;
  lVar9 = 0;
  __sSqMa(0,uVar3);
  *(long *)(pcVar2 + 0x58) = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(pcVar2 + 0x60) = lVar9;
  uVar1 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0x68) = uVar1;
  psVar4 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(pcVar2 + 0x70) = psVar4;
  uVar8 = 0;
  __sScGMa(0,uVar3);
  *(char **)psVar4 = pcVar2;
  *(code **)psVar4->segname = FUN_001d357c;
                    /* WARNING: Could not recover jumptable at 0x001d3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d36e0(uVar1,0,0,uVar8);
  return;
}



/* Entry: 001d38ac; end: 001d39a3;  */

void FUN_001d38ac(void)

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
                    /* WARNING: Could not recover jumptable at 0x001d39a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 001d39a4; end: 001d3a5f;  */

void FUN_001d39a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_0099be70
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001d3a60;
                    /* WARNING: Could not recover jumptable at 0x007787d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_0099be68)
            (plVar2,param_1,param_2,param_3,param_5,param_6,uVar1);
  return;
}



/* Entry: 001d3a60; end: 001d3acf;  */

void FUN_001d3a60(void)

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
                    /* WARNING: Could not recover jumptable at 0x001d3acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 001d3ad0; end: 001d3aef;  */

void FUN_001d3ad0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 001d3af0; end: 001d3b53;  */

void FUN_001d3af0(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001d3b54;
                    /* WARNING: Could not recover jumptable at 0x001d3b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 001d3b54; end: 001d3b93;  */

void FUN_001d3b54(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d3b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d3b94; end: 001d3c03;  */

void FUN_001d3b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
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
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d3c04,param_4);
  return;
}



/* Entry: 001d3c04; end: 001d3c8b;  */

void FUN_001d3c04(void)

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
  plVar3[1] = (long)FUN_001d3c8c;
                    /* WARNING: Could not recover jumptable at 0x001d3c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar3,*(undefined8 *)(unaff_x22 + 0x118),unaff_x22 + 0x110);
  return;
}



/* Entry: 001d3c8c; end: 001d3d03;  */

void FUN_001d3c8c(void)

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
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_0099be18 + 4);
  _swift_task_alloc();
  *(long **)(lVar2 + 0x150) = plVar1;
  __sScGMa(0,uVar3);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_001d3d04;
                    /* WARNING: Could not recover jumptable at 0x0077877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_0099be10)();
  return;
}



/* Entry: 001d3d04; end: 001d3d77;  */

void FUN_001d3d04(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)
            (0x1d3d48,*(undefined8 *)(lVar1 + 0x138),*(undefined8 *)(lVar1 + 0x140));
  return;
}



/* Entry: 001d3d78; end: 001d3ddf;  */

void FUN_001d3d78(undefined8 param_1,long param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d3de0,param_2);
  return;
}



/* Entry: 001d3de0; end: 001d3e33;  */

void FUN_001d3de0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0077b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_0099c0a8)
            (*(undefined8 *)(unaff_x22 + 0x38),**(undefined8 **)(unaff_x22 + 0x40),0x1d3df8,
             unaff_x22 + 0x10);
  return;
}



/* Entry: 001d3e34; end: 001d3ec7;  */

void FUN_001d3e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  qword *pqVar8;
  long lVar9;
  long unaff_x20;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  pqVar8 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar8;
  *pqVar8 = unaff_x22;
  pqVar8[1] = (qword)FUN_001d3ec8;
  pqVar8[10] = lVar9;
  pqVar8[0xb] = uVar4;
  pqVar8[8] = uVar1;
  pqVar8[9] = uVar3;
  pqVar8[6] = uVar2;
  pqVar8[7] = uVar5;
  pqVar8[4] = param_1;
  pqVar8[5] = param_2;
  lVar9 = *(long *)(lVar9 + -8);
  pqVar8[0xc] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar8[0xd] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar8[0xe] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d2c3c,0,0);
  return;
}



/* Entry: 001d3ec8; end: 001d3f2f;  */

void FUN_001d3ec8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d3f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d3f30; end: 001d3fc3;  */

void FUN_001d3f30(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  qword *pqVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  segment_command *psVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar12 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  piVar6 = *(int **)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  psVar11 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar11;
  psVar11->cmd = (int)unaff_x22;
  psVar11->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar11->segname[0] = 'd';
  psVar11->segname[1] = 'A';
  psVar11->segname[2] = '\x1d';
  psVar11->segname[3] = '\0';
  psVar11->segname[4] = '\0';
  psVar11->segname[5] = '\0';
  psVar11->segname[6] = '\0';
  psVar11->segname[7] = '\0';
  pqVar7 = &segment_command_00000020.filesize;
  _swift_task_alloc(0x50,uVar3,uVar5);
  *(qword **)(psVar11->segname + 8) = pqVar7;
  *pqVar7 = (qword)psVar11;
  pqVar7[1] = (qword)FUN_001d3088;
  pqVar7[4] = lVar12;
  pqVar7[5] = uVar4;
  pqVar7[2] = param_1;
  pqVar7[3] = uVar2;
  lVar12 = *(long *)(lVar12 + -8);
  pqVar7[6] = lVar12;
  uVar9 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8,piVar6,uVar13);
  pqVar7[7] = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar7[8] = uVar9;
  iVar1 = *piVar6;
  puVar10 = (undefined8 *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  pqVar7[9] = (qword)puVar10;
  *puVar10 = pqVar7;
  puVar10[1] = FUN_001d3170;
                    /* WARNING: Could not recover jumptable at 0x001d316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(puVar10,param_1,uVar8);
  return;
}



/* Entry: 001d3fc4; end: 001d3fe7;  */

void FUN_001d3fc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001d3fe8; end: 001d4067;  */

void FUN_001d3fe8(undefined8 param_1)

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
  *(code **)psVar5->segname = FUN_001d4068;
  iVar1 = *piVar3;
  puVar4 = (undefined8 *)(ulong)(uint)piVar3[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar3),uVar6,uVar2);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = FUN_001d3b54;
                    /* WARNING: Could not recover jumptable at 0x001d3b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(puVar4,param_1);
  return;
}



/* Entry: 001d4068; end: 001d40a3;  */

void FUN_001d4068(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d40a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d40a4; end: 001d4167;  */

void FUN_001d40a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 001d4168; end: 001d4207;  */

void FUN_001d4168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  long unaff_x22;
  
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  *(code **)(pcVar1 + 8) = FUN_001d4208;
                    /* WARNING: Could not recover jumptable at 0x001d4204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d4244(pcVar1,param_1,param_2,param_3,param_6,param_7,param_8);
  return;
}



/* Entry: 001d4208; end: 001d4243;  */

void FUN_001d4208(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d4240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d4244; end: 001d42ab;  */

void FUN_001d4244(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    __sScA15unownedExecutorScevgTj();
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d42ac,param_2,param_3);
  return;
}



/* Entry: 001d42ac; end: 001d42fb;  */

void FUN_001d42ac(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_001d42fc;
  _swift_continuation_init(unaff_x22 + 0x10,0);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 001d42fc; end: 001d432f;  */

void FUN_001d42fc(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x001d432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Entry: 001d4330; end: 001d43cf;  */

void FUN_001d4330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  long unaff_x22;
  
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  *(code **)(pcVar1 + 8) = FUN_001d43d0;
                    /* WARNING: Could not recover jumptable at 0x001d43cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d440c(pcVar1,param_1,param_2,param_3,param_6,param_7,param_8);
  return;
}



/* Entry: 001d43d0; end: 001d440b;  */

void FUN_001d43d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d4408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d440c; end: 001d4473;  */

void FUN_001d440c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    __sScA15unownedExecutorScevgTj();
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d4474,param_2,param_3);
  return;
}



/* Entry: 001d4474; end: 001d44c3;  */

void FUN_001d4474(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_001d44c4;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 001d44c4; end: 001d450f;  */

void FUN_001d44c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
  }
                    /* WARNING: Could not recover jumptable at 0x001d450c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d4510; end: 001d4693;  */

long FUN_001d4510(void)

{
  dword *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  _swift_allocObject();
  pdVar1 = &MACH_HEADER.cputype;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(dword **)(unaff_x20 + 0x10) = pdVar1;
  if (pdVar1 == (dword *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_00ac2910;
    func_0x00781300(PTR__OBJC_CLASS___NSAssertionHandler_00ac2910);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    func_0x007841e0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  *pdVar1 = 0;
  return unaff_x20;
}



/* Entry: 001d4694; end: 001d46bf;  */

void FUN_001d4694(void)

{
  long unaff_x20;
  
  _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 001d46c0; end: 001d46d7;  */

void __s11SwiftSCLock4LockC4lockyyF(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077ab88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_lock_0099a490)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 001d46d8; end: 001d4737;  */

void __s11SwiftSCLock4LockC7protectyxxyKXEKlF(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  
  _os_unfair_lock_lock(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(param_1);
  _os_unfair_lock_unlock(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 001d4738; end: 001d4757;  */

void __s11SwiftSCLock4LockCMa(void)

{
  _objc_opt_self(&PTR_PTR_00af3ad8);
  return;
}



/* Entry: 001d4758; end: 001d47d3;  */

void FUN_001d4758(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 001d47d4; end: 001d4817;  */

void FUN_001d47d4(long param_1,long *param_2,long param_3)

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



/* Entry: 001d4818; end: 001d4827;  */

int FUN_001d4818(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[1] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 001d4828; end: 001d4863;  */

undefined8 FUN_001d4828(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_001d4864(param_1);
  return unaff_x20;
}



/* Entry: 001d4864; end: 001d496b;  */

void FUN_001d4864(undefined8 param_1)

{
  long lVar1;
  dword *pdVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  lVar1 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  pdVar2 = &MACH_HEADER.cputype;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(dword **)(lVar1 + 0x10) = pdVar2;
  if (pdVar2 == (dword *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSAssertionHandler_00ac2910;
    func_0x00781300(PTR__OBJC_CLASS___NSAssertionHandler_00ac2910);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    func_0x007841e0(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  *pdVar2 = 0;
  unaff_x20[2] = lVar1;
  (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  return;
}



/* Entry: 001d496c; end: 001d4a03;  */

void FUN_001d496c(undefined8 param_1,code *param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_58 [24];
  
  _os_unfair_lock_lock(*(undefined8 *)(unaff_x20[2] + 0x10));
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,auStack_58,0x21,0);
  (*param_2)(param_1,(long)unaff_x20 + lVar1);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(*(undefined8 *)(unaff_x20[2] + 0x10));
  return;
}



/* Entry: 001d4a04; end: 001d4ac7;  */

void FUN_001d4a04(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

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



/* Entry: 001d4ac8; end: 001d4b17;  */

void FUN_001d4ac8(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _swift_release(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 001d4b18; end: 001d4b1b;  */

void FUN_001d4b18(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 001d4b1c; end: 001d4b9b;  */

void FUN_001d4b1c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&puStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 001d4b9c; end: 001d4ba7;  */

void FUN_001d4b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_0084698c);
  return;
}



/* Entry: 001d4ba8; end: 001d4bc7;  */

void FUN_001d4ba8(void)

{
  _objc_opt_self(&PTR_PTR_00af3cd0);
  return;
}



/* Entry: 001d4bc8; end: 001d4c43;  */

void FUN_001d4bc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_001d69b4();
  _swift_allocObject();
  puVar1 = PTR__OBJC_CLASS___NSLock_00ac28d0;
  _objc_allocWithZone();
  func_0x007849a0();
  *(undefined **)(param_1 + 0x10) = puVar1;
  FUN_001d4ba8();
  puVar2 = puVar1;
  _swift_allocObject();
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined ***)(param_1 + 0x38) = &PTR_DAT_009b8100;
  *(undefined **)(param_1 + 0x18) = puVar2;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  lRam0000000000b65ca0 = param_1;
  return;
}



/* Entry: 001d4c44; end: 001d4cb7;  */

undefined8 FUN_001d4c44(void)

{
  if (lRam0000000000b4e6b0 != -1) {
    _swift_once(0xb4e6b0,FUN_001d4bc8);
  }
  return 0xb65ca0;
}



/* Entry: 001d4cb8; end: 001d4d27;  */

void FUN_001d4cb8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  qword *pqVar1;
  undefined8 *unaff_x20;
  qword unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 **)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  pqVar1 = &section_00000108.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x70) = pqVar1;
  *pqVar1 = unaff_x22;
  pqVar1[1] = (qword)FUN_001d4d28;
  pqVar1[0x1c] = param_2;
  pqVar1[0x1d] = (qword)unaff_x20;
  *(undefined1 *)((long)pqVar1 + 0x129) = param_3;
  pqVar1[0x1b] = param_1;
  pqVar1[0x1e] = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d4ed0,0,0);
  return;
}



/* Entry: 001d4d28; end: 001d4d6f;  */

void FUN_001d4d28(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d4d70,0,0);
  return;
}



/* Entry: 001d4d70; end: 001d4e2f;  */

void FUN_001d4d70(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  func_0x00788640(uVar5);
  _swift_beginAccess(lVar4 + 0x18,unaff_x22 + 0x38,0,0);
  FUN_001d6970(lVar4 + 0x18,unaff_x22 + 0x10);
  func_0x00793000(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  FUN_0001393c(unaff_x22 + 0x10,uVar5);
  piVar3 = *(int **)(lVar4 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_001d4e30;
                    /* WARNING: Could not recover jumptable at 0x001d4e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined1 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x60),uVar5,lVar4);
  return;
}



/* Entry: 001d4e30; end: 001d4ea7;  */

void FUN_001d4e30(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x1d4e78,0,0);
  return;
}



/* Entry: 001d4ea8; end: 001d4ecf;  */

void FUN_001d4ea8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  *(undefined8 **)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x129) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf0) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d4ed0,0,0);
  return;
}



/* Entry: 001d4ed0; end: 001d5213;  */

void FUN_001d4ed0(byte *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  
  FUN_0021bdb0();
  if ((*param_1 & 1) == 0) {
    FUN_0021bb14();
    if (((*param_1 & 1) != 0) || (cRam0000000000b65ca8 == '\x01')) {
      lVar14 = *(long *)(unaff_x22 + 0xe8);
      uVar15 = *(undefined8 *)(lVar14 + 0x10);
      func_0x00788640(uVar15);
      bVar2 = *(byte *)(lVar14 + 0x40);
      func_0x00793000(uVar15);
      if ((bVar2 & 1) == 0) {
        uVar12 = 0xaf3d80;
        func_0x000115a8(0xaf3d80,&UNK_007e49d0);
        _swift_initStaticObject();
        FUN_001d69f4();
        uVar5 = uVar12;
        func_0x001d71c8();
        _swift_bridgeObjectRelease(uVar12);
        if ((uVar5 & 1) == 0) {
          uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
          uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar3 = *(undefined1 *)(unaff_x22 + 0x129);
          lVar14 = 0;
          __s10Foundation4UUIDVMa();
          *(long *)(unaff_x22 + 0xf8) = lVar14;
          lVar14 = *(long *)(lVar14 + -8);
          *(long *)(unaff_x22 + 0x100) = lVar14;
          puVar6 = (undefined8 *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
          _swift_task_alloc();
          *(undefined8 **)(unaff_x22 + 0x108) = puVar6;
          puVar7 = puVar6;
          __s10Foundation4UUIDVACycfC(puVar6);
          func_0x0021be28();
          *(undefined8 **)(unaff_x22 + 0x110) = puVar7;
          _swift_beginAccess();
          uVar8 = *puVar7;
          _objc_retain(uVar8);
          __ss11_StringGutsV4growyySiF(0x1b);
          _swift_bridgeObjectRelease(0xe000000000000000);
          FUN_001dca4c(uVar9,uVar13,uVar3);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar13);
          uVar9 = 0xd000000000000019;
          func_0x0021c244(0xd000000000000019,0x80000000008b9bc0);
          *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
          _swift_bridgeObjectRelease(0x80000000008b9bc0);
          _objc_release(uVar8);
          *(undefined8 *)(unaff_x22 + 0x60) = uVar15;
          *(undefined8 **)(unaff_x22 + 0x68) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
          iVar4 = 2;
          FUN_0040c9a8(2,0x12,0,0);
          if (iVar4 != 0) {
            plVar10 = (long *)(ulong)*(uint *)(
                                              PTR___ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalFTu_0099bfe8
                                              + 4);
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x120) = plVar10;
            *plVar10 = unaff_x22;
            plVar10[1] = (long)FUN_001d5214;
                    /* WARNING: Could not recover jumptable at 0x00778f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalF_0099bfe0
            )(plVar10,unaff_x22 + 0x128,0,0,0xd00000000000001f,0x80000000008b9be0,FUN_001d6ad4,
              unaff_x22 + 0x50,PTR___sSbN_0099b220);
            return;
          }
          uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x128;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(undefined8 *)(unaff_x22 + 0x18) = 0x1d525c;
          lVar14 = unaff_x22 + 0x10;
          _swift_continuation_init(lVar14,0);
          lVar11 = 0xaf3bc8;
          func_0x000115a8(0xaf3bc8,&UNK_007e4920);
          lVar16 = *(long *)(lVar11 + -8);
          uVar12 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc(uVar12);
          __sScC12continuation8functionScCyxq_GSccyxq_G_SStcfC
                    (uVar12,lVar14,0xd00000000000001f,0x80000000008b9be0,PTR___sSbN_0099b220,
                     PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
          FUN_001d5418(uVar12,uVar15,puVar6,uVar9);
          (**(code **)(lVar16 + 8))(uVar12,lVar11);
          _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001d4fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d5214; end: 001d529b;  */

void FUN_001d5214(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d529c,0,0);
  return;
}



/* Entry: 001d529c; end: 001d5417;  */

void FUN_001d529c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  bVar1 = *(byte *)(unaff_x22 + 0x128);
  _swift_beginAccess(puVar6,unaff_x22 + 0x90,0,0);
  uVar3 = *puVar6;
  _objc_retain(uVar3);
  func_0x0021c438(uVar5);
  _objc_release(uVar3);
  if ((bVar1 & 1) == 0) {
    puVar6 = *(undefined8 **)(unaff_x22 + 0x110);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x129);
    _swift_beginAccess(puVar6,unaff_x22 + 0xa8,0,0);
    uVar4 = *puVar6;
    _objc_retain(uVar4);
    __ss11_StringGutsV4growyySiF(0x12);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_001dca4c(uVar5,uVar3,uVar2);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar3);
    uVar5 = 0xd000000000000010;
    func_0x0021c244(0xd000000000000010,0x80000000008b9c00);
    _swift_bridgeObjectRelease(0x80000000008b9c00);
    _objc_release(uVar4);
    _swift_beginAccess(puVar6,unaff_x22 + 0xc0,0,0);
    uVar3 = *puVar6;
    _objc_retain(uVar3);
    func_0x0021c438(uVar5);
    _objc_release(uVar3);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x001d5414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001d5418; end: 001d56c7;  */

void FUN_001d5418(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0xae62f0;
  uStack_88 = param_4;
  uStack_80 = param_3;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xaf3d88;
  func_0x000115a8(0xaf3d88,&UNK_007e49e0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar13 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x00788640(uVar14);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    pcStack_90 = *(code **)(lVar9 + 0x10);
    (*pcStack_90)(lVar11,uStack_80,lVar2);
    lVar3 = 0xaf3bc8;
    func_0x000115a8(0xaf3bc8,&UNK_007e4920);
    lVar7 = *(long *)(lVar3 + -8);
    puStack_98 = auStack_a0 + -extraout_x8;
    (**(code **)(lVar7 + 0x10))(lVar13,param_1,lVar3);
    (**(code **)(lVar7 + 0x38))(lVar13,0,1,lVar3);
    _swift_beginAccess(param_2 + 0x48,auStack_78,0x21,0);
    FUN_001d56c8(lVar13,lVar11);
    _swift_endAccess(auStack_78);
    func_0x00793000(uVar14);
    lVar13 = 0;
    __sScPMa();
    puVar1 = puStack_98;
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(puStack_98,1,1,lVar13);
    puVar4 = &UNK_009b8120;
    _swift_allocObject(&UNK_009b8120,0x18,7);
    _swift_weakInit(puVar4 + 0x10,param_2);
    (*pcStack_90)(lVar11,uStack_80,lVar2);
    uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar8 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
    uVar10 = lVar12 + uVar8 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_009b8148;
    _swift_allocObject(&UNK_009b8148,uVar10 + 8,uVar6 | 7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined **)(puVar5 + 0x20) = puVar4;
    (**(code **)(lVar9 + 0x20))(puVar5 + uVar8,lVar11,lVar2);
    *(undefined8 *)(puVar5 + uVar10) = uStack_88;
    FUN_001ce770(0,0,puVar1,&UNK_007e49f0,puVar5);
    _swift_release();
  }
  else {
    func_0x00793000(uVar14);
    auStack_78[0] = 1;
    uVar14 = 0xaf3bc8;
    func_0x000115a8(0xaf3bc8,&UNK_007e4920);
    __sScC6resume9returningyxn_tF(auStack_78,uVar14);
  }
  return;
}



/* Entry: 001d56c8; end: 001d5887;  */

void FUN_001d56c8(undefined8 param_1,undefined8 param_2)

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
  
  lVar2 = 0xaf3d88;
  func_0x000115a8(0xaf3d88,&UNK_007e49e0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0xaf3bc8;
  func_0x000115a8(0xaf3bc8,&UNK_007e4920);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x001d6cb0(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x001d6c30(lVar5,0xaf3d88,&UNK_007e49e0);
    FUN_001d5dc8(puVar4,param_2);
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    func_0x001d6c30(puVar4,0xaf3d88,&UNK_007e49e0);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5 - extraout_x8_00,lVar5,lVar2);
    uVar3 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uStack_58 = *unaff_x20;
    FUN_001d5f0c(lVar5 - extraout_x8_00,param_2,uVar3);
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 001d5888; end: 001d589f;  */

void FUN_001d5888(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d58a0,0,0);
  return;
}



/* Entry: 001d58a0; end: 001d59b3;  */

void FUN_001d58a0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = uRam0000000000af3bd0;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_0099bf78
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1d58f4;
                    /* WARNING: Could not recover jumptable at 0x00778914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_0099bf70)(uVar1);
  return;
}



/* Entry: 001d59b4; end: 001d5b4f;  */

void FUN_001d59b4(undefined8 param_1)

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
  
  lVar1 = 0xaf3d88;
  func_0x000115a8(0xaf3d88,&UNK_007e49e0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar3 - extraout_x12;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00788640(uVar6);
  _swift_beginAccess(unaff_x20 + 0x48,auStack_68,0x21,0);
  FUN_001d5dc8(lVar4,param_1);
  _swift_endAccess(auStack_68);
  func_0x00793000(uVar6);
  func_0x001d6d00(lVar4,puVar3,0xaf3d88,&UNK_007e49e0);
  lVar1 = 0xaf3bc8;
  func_0x000115a8(0xaf3bc8,&UNK_007e4920);
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x001d6c30(lVar4,0xaf3d88,&UNK_007e49e0);
    func_0x001d6c30(puVar3,0xaf3d88,&UNK_007e49e0);
  }
  else {
    auStack_68[0] = 0;
    __sScC6resume9returningyxn_tF(auStack_68,lVar1);
    func_0x001d6c30(lVar4,0xaf3d88,&UNK_007e49e0);
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
  }
  return;
}



/* Entry: 001d5b50; end: 001d5bc7;  */

void FUN_001d5b50(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  qword *pqVar1;
  qword *pqVar2;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  qword unaff_x22;
  
  puVar3 = (undefined8 *)*unaff_x20;
  pqVar2 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar2;
  *pqVar2 = unaff_x22;
  pqVar2[1] = (qword)FUN_001d5bc8;
  pqVar2[0xc] = param_4;
  pqVar2[0xd] = (qword)puVar3;
  *(undefined1 *)(pqVar2 + 0x10) = param_3;
  pqVar2[10] = param_1;
  pqVar2[0xb] = param_2;
  pqVar1 = &section_00000108.size;
  _swift_task_alloc();
  pqVar2[0xe] = (qword)pqVar1;
  *pqVar1 = (qword)pqVar2;
  pqVar1[1] = (qword)FUN_001d4d28;
  pqVar1[0x1c] = param_2;
  pqVar1[0x1d] = (qword)puVar3;
  *(undefined1 *)((long)pqVar1 + 0x129) = param_3;
  pqVar1[0x1b] = param_1;
  pqVar1[0x1e] = *puVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001d4ed0,0,0);
  return;
}



/* Entry: 001d5bc8; end: 001d5c03;  */

void FUN_001d5bc8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001d5c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001d5c04; end: 001d5c1b;  */

void FUN_001d5c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 001d5c1c; end: 001d5c53; +[SCWorkSchedulerBootstrap configureParkingWithEnabled:failOpenTimeoutMs:] */

void FUN_001d5c1c(undefined8 param_1,undefined8 param_2,undefined1 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  
  uRam0000000000b65ca8 = param_3;
  if (0 < (long)param_4) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_4;
    if (SUB168(auVar1 * ZEXT816(1000000),8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1d5c54);
      (*pcVar2)();
    }
    lRam0000000000af3bd0 = param_4 * 1000000;
  }
  return;
}



/* Entry: 001d5c54; end: 001d5c8f; -[SCWorkSchedulerBootstrap init] */

void FUN_001d5c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 001d5c90; end: 001d5d03;  */

void FUN_001d5c90(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 001d5d04; end: 001d5dc7;  */

void FUN_001d5d04(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  lVar2 = 0xaf3bc8;
  func_0x000115a8(0xaf3bc8,&UNK_007e4920);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_3,lVar2);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1d5dc8);
  (*pcVar1)();
}



/* Entry: 001d5dc8; end: 001d5f0b;  */

void FUN_001d5dc8(undefined8 param_1,long param_2,ulong param_3)

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
  FUN_001b9988(param_2);
  _swift_bridgeObjectRelease(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0xaf3bc8;
    func_0x000115a8(0xaf3bc8,&UNK_007e4920);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x001d60a0();
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar4 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_2,lVar4);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0xaf3bc8;
    func_0x000115a8(0xaf3bc8,&UNK_007e4920);
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    func_0x001d66e4(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001d5ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}


