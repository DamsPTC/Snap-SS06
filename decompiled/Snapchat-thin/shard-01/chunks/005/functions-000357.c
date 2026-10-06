/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101184d60; end: 101184df3;  */

void FUN_101184d60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d62378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9286a8;
  func_0x000107c61520(&UNK_10d9286a8,&UNK_11038b4c0);
  puRam0000000112d62378 = puVar1;
  return;
}



/* Entry: 101184df4; end: 101184e1b;  */

/* WARNING: Possible PIC construction at 0x000101183a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101183a58) */

void FUN_101184df4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0;
  FUN_101185068(0,0x112d50c78,&PTR_PTR_1126b25c0);
  func_0x000107c5fc48(uVar2,uVar1);
  func_0x000107c43dac(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  func_0x000100759c94(uVar3,0);
  func_0x000100775264(0,1,FUN_101183a94,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 101184e1c; end: 101184e9b;  */

void FUN_101184e1c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5f804();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = 0;
  FUN_101185068(0,0x112d56378,&PTR_PTR_1126ae790);
  lVar1 = unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff));
  func_0x000104188018(lVar1,0xd00000000000001c,0x800000010ef297a0,uVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 101184e9c; end: 101184eef;  */

void FUN_101184e9c(code *param_1,code *param_2,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101184eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101184ef0; end: 101184f0f;  */

void FUN_101184ef0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0;
  FUN_101185068(0,0x112d62390,&PTR_PTR_1126aff40,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c5fc48(uVar3,uVar2);
  func_0x0001000d224c(&uStack_48);
  pcStack_58 = FUN_101185028;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_1011844ec;
  puStack_60 = &UNK_11038add0;
  ppuVar4 = &puStack_78;
  uStack_50 = param_1;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c442d4(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_48);
  return;
}



/* Entry: 101184f10; end: 101184f7b;  */

void FUN_101184f10(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101184f7c;
  plVar2[8] = param_1;
  plVar2[9] = param_3;
  plVar2[10] = *param_2;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[0xb] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x1011845b8;
  plVar1[5] = (long)(plVar2 + 2);
  plVar1[6] = (long)unaff_x20;
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  plVar1[7] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar4;
  lVar3 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101184f7c; end: 101184fb7;  */

void FUN_101184f7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101184fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101184fb8; end: 101184fc3;  */

void FUN_101184fb8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101185014(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101184fc4; end: 101185013;  */

void FUN_101184fc4(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101185014; end: 101185027;  */

void FUN_101185014(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 101185028; end: 10118504b;  */

void FUN_101185028(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 10118504c; end: 101185067;  */

void FUN_10118504c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101185068; end: 1011850a7;  */

void FUN_101185068(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011850a8; end: 1011850c3;  */

void FUN_1011850a8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101184978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1011850c4; end: 101185223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011850c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_2 + _DAT_11305e778);
  func_0x000107c6157c(uVar5);
  uVar4 = 0x112d51718;
  func_0x0001000285a8(0x112d51718,&UNK_10d918540);
  pcVar1 = FUN_101185224;
  func_0x0001000cb480(FUN_101185224,0,uVar4);
  func_0x000107c61574(uVar5);
  puVar2 = &UNK_11038ae10;
  func_0x000107c613fc(&UNK_11038ae10,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = pcVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  func_0x0001000285a8(0x112d62398,&UNK_10d9282f8);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(pcVar1);
  func_0x000107c61174(param_3);
  pcVar3 = FUN_10118533c;
  func_0x0001000bdd8c(FUN_10118533c,puVar2);
  uVar4 = 0;
  FUN_10118b838(0);
  func_0x000107c610f8();
  func_0x00010118b77c(pcVar3,uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61574(pcVar1);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 101185224; end: 101185277;  */

void FUN_101185224(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  uVar3 = 2;
  func_0x000100774b74(2,0xc,0,uVar1,uVar2,param_2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101185278; end: 10118533b;  */

/* WARNING: Possible PIC construction at 0x000101185320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101185324) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185278(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d62478,&UNK_10d928340);
  func_0x000107c4cbc4();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  uVar4 = *(undefined8 *)(param_4 + _DAT_11303eae0);
  lVar2 = 0;
  FUN_101181ec8();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11038ac88;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
  return;
}



/* Entry: 10118533c; end: 101185347;  */

/* WARNING: Possible PIC construction at 0x000101185320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101185324) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118533c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112d62478,&UNK_10d928340);
  func_0x000107c4cbc4();
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_11303eae0);
  lVar3 = 0;
  FUN_101181ec8();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11038ac88;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 101185348; end: 10118537b;  */

void FUN_101185348(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10118537c; end: 101185383;  */

void FUN_10118537c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101185384; end: 101185423;  */

void FUN_101185384(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101185424; end: 10118542f;  */

void FUN_101185424(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101185430; end: 10118543b; -[SCMemoriesMashupSnapDocFactoryServiceProvider memoriesMashupSnapDocFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185430(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62480;
  func_0x000107c61428(param_1 + _DAT_112d62480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118543c; end: 101185447; -[SCMemoriesMashupSnapDocFactoryServiceProvider setMemoriesMashupSnapDocFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118543c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62480;
  func_0x000107c61428(param_1 + _DAT_112d62480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101185448; end: 101185453; -[SCMemoriesMashupSnapDocFactoryServiceProvider asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185448(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62488;
  func_0x000107c61428(param_1 + _DAT_112d62488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101185454; end: 10118545f; -[SCMemoriesMashupSnapDocFactoryServiceProvider setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62488;
  func_0x000107c61428(param_1 + _DAT_112d62488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101185460; end: 10118546b; -[SCMemoriesMashupSnapDocFactoryServiceProvider snapDocMediaClaimingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62490;
  func_0x000107c61428(param_1 + _DAT_112d62490,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10118546c; end: 1011854af;  */

void FUN_10118546c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011854b0; end: 1011854bb; -[SCMemoriesMashupSnapDocFactoryServiceProvider setSnapDocMediaClaimingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011854b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62490;
  func_0x000107c61428(param_1 + _DAT_112d62490,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011854bc; end: 10118550f;  */

void FUN_1011854bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101185510; end: 101185707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185510(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  lVar1 = unaff_x20;
  func_0x000107c4cbc8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e274();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5b1dc();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        func_0x0001011853a8();
        func_0x000107c613fc();
        uVar9 = *(undefined8 *)(lVar2 + _DAT_11305e778);
        func_0x000107c6157c(uVar9);
        uVar8 = 0x112d51718;
        func_0x0001000285a8(0x112d51718,&UNK_10d918540);
        pcVar5 = FUN_101185224;
        func_0x0001000cb480(FUN_101185224,0,uVar8);
        func_0x000107c61574(uVar9);
        puVar6 = &UNK_11038ae50;
        func_0x000107c613fc(&UNK_11038ae50,0x28,7);
        *(long *)(puVar6 + 0x10) = lVar1;
        *(code **)(puVar6 + 0x18) = pcVar5;
        *(long *)(puVar6 + 0x20) = lVar3;
        func_0x0001000285a8(0x112d62398,&UNK_10d9282f8);
        func_0x000107c613fc();
        func_0x000107c61174(lVar1);
        func_0x000107c6157c(pcVar5);
        func_0x000107c61174(lVar3);
        pcVar7 = FUN_101185708;
        func_0x0001000bdd8c(FUN_101185708,puVar6);
        uVar8 = 0;
        FUN_10118b838(0);
        func_0x000107c610f8();
        func_0x00010118b77c(pcVar7,uVar8);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(pcVar5);
        *(code **)(lVar4 + 0x10) = pcVar7;
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d62498);
        *(long *)(unaff_x20 + _DAT_112d62498) = lVar4;
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar8);
        func_0x000107c61174(*(undefined8 *)(lVar4 + 0x10));
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101185708; end: 101185713;  */

/* WARNING: Possible PIC construction at 0x000101185320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101185324) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185708(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112d62478,&UNK_10d928340);
  func_0x000107c4cbc4();
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_11303eae0);
  lVar3 = 0;
  FUN_101181ec8();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11038ac88;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 101185714; end: 10118579f; -[SCMemoriesMashupSnapDocFactoryServiceProvider provide] */

void FUN_101185714(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_101185510();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MemoriesMashupSnapDocFactoryServicesImpl/SCMemoriesMashupSnapDocFactoryServiceProvider.swift"
                      ,0x5c,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011857a0);
  (*pcVar1)();
}



/* Entry: 1011857a0; end: 1011857d3; -[SCMemoriesMashupSnapDocFactoryServiceProvider __safeProvide] */

void FUN_1011857a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101185510();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011857d4; end: 101185817; -[SCMemoriesMashupSnapDocFactoryServiceProvider end] */

void FUN_1011857d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101185818; end: 101185a17;  */

void FUN_101185818(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffdc && param_3 == -0x7ffffffef10e2180) ||
     (func_0x000107c605b8(0xd000000000000024,0x800000010ef1de80,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56570();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10e2150)) &&
           (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1deb0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MemoriesMashupSnapDocFactoryServicesImpl/SCMemoriesMashupSnapDocFactoryServiceProvider.swift"
                              ,0x5c,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101185a18);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5936c();
        goto LAB_1011858a8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52954();
  }
LAB_1011858a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101185a18; end: 101185ac3; -[SCMemoriesMashupSnapDocFactoryServiceProvider setValue:forIvarName:] */

void FUN_101185a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101185818(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101185ac4; end: 101185b4b; -[SCMemoriesMashupSnapDocFactoryServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185ac4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d62480,0);
  func_0x000107c61614(param_1 + _DAT_112d62488,0);
  func_0x000107c61614(param_1 + _DAT_112d62490,0);
  *(undefined8 *)(param_1 + _DAT_112d62498) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101185b4c; end: 101185b7f;  */

void FUN_101185b4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101185b80; end: 101185bd7; -[SCMemoriesMashupSnapDocFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185b80(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d62480);
  func_0x000107c61610(param_1 + _DAT_112d62488);
  func_0x000107c61610(param_1 + _DAT_112d62490);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62498));
  return;
}



/* Entry: 101185bd8; end: 101185bf7;  */

void FUN_101185bd8(void)

{
  func_0x000107c61168(&PTR_PTR_112d624e0);
  return;
}



/* Entry: 101185bf8; end: 101185f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101185bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  lVar1 = _DAT_1130806d0;
  uVar6 = *(ulong *)(param_5 + _DAT_1130806d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar6 != 0) {
    uVar7 = uVar6;
    func_0x000107c4cebc();
    if ((uVar7 & 1) != 0) {
      uVar12 = param_2;
      func_0x000107c42eac();
      func_0x000107c61180();
      uVar8 = param_3;
      func_0x000107c4cba8();
      func_0x000107c61180();
      uVar16 = *(undefined8 *)(param_5 + lVar1);
      uVar15 = *(undefined8 *)(param_7 + _DAT_11303e7b8);
      uVar14 = *(undefined8 *)(param_8 + _DAT_112facd00);
      lVar9 = 0;
      FUN_10118628c();
      lVar10 = lVar9;
      func_0x000107c610f8();
      lVar1 = _DAT_112d625e8;
      *(undefined8 *)(lVar10 + _DAT_112d625e8) = 0;
      lVar2 = _DAT_112d625f0;
      *(undefined8 *)(lVar10 + _DAT_112d625f0) = 0;
      lVar3 = _DAT_112d625f8;
      *(undefined8 *)(lVar10 + _DAT_112d625f8) = 0;
      lVar4 = _DAT_112d62600;
      *(undefined8 *)(lVar10 + _DAT_112d62600) = 0;
      lVar5 = _DAT_112d62610;
      *(undefined8 *)(lVar10 + _DAT_112d62610) = 0;
      *(undefined8 *)(lVar10 + lVar1) = uVar12;
      *(undefined8 *)(lVar10 + lVar2) = uVar8;
      *(undefined8 *)(lVar10 + lVar3) = param_4;
      uVar13 = *(undefined8 *)(lVar10 + lVar4);
      *(undefined8 *)(lVar10 + lVar4) = uVar16;
      func_0x000107c61174();
      func_0x000107c61174(uVar16);
      func_0x000107c61174();
      func_0x000107c61174(uVar16);
      func_0x000107c6157c(uVar15);
      func_0x000107c6157c(uVar14);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(uVar8);
      func_0x000107c61170(uVar13);
      *(undefined8 *)(lVar10 + _DAT_112d62608) = uVar15;
      uVar13 = *(undefined8 *)(lVar10 + lVar5);
      *(undefined8 *)(lVar10 + lVar5) = uVar14;
      func_0x000107c6157c(uVar15);
      func_0x000107c6157c(uVar14);
      func_0x000107c61574(uVar13);
      plVar11 = &lStack_70;
      lStack_70 = lVar10;
      lStack_68 = lVar9;
      func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(param_4);
      func_0x000107c61170(uVar16);
      func_0x000107c61574(uVar15);
      func_0x000107c61574(uVar14);
      uVar12 = *(undefined8 *)(param_1 + _DAT_112d69b40);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(plVar11);
      func_0x000107c4fba8(uVar12);
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(plVar11);
      func_0x000107c61170(plVar11);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      goto LAB_101185ef4;
    }
    func_0x000107c615e8(uVar6);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
LAB_101185ef4:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 101185f24; end: 101185f3f;  */

void FUN_101185f24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101185f40; end: 101185f5f;  */

void FUN_101185f40(void)

{
  func_0x000107c61168(&PTR_PTR_112d62590);
  return;
}



/* Entry: 101185f60; end: 101185f67; -[_TtC48MemoriesSDNNotificationPrefetchHandlerPluginImpl26MemoriesSDNPrefetchHandler metadataType] */

undefined8 FUN_101185f60(void)

{
  return 2;
}



/* Entry: 101185f68; end: 1011860b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101185f68(ulong param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 & 1) != 0) {
      lVar1 = *(long *)(param_2 + _DAT_112d625f0);
      if (lVar1 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          puVar2 = &UNK_11038b0d0;
          func_0x000107c613fc(&UNK_11038b0d0,0x20,7);
          *(code **)(puVar2 + 0x10) = param_3;
          *(undefined8 *)(puVar2 + 0x18) = param_4;
          uStack_68 = 0x101186d9c;
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0x42000000;
          pcStack_78 = FUN_101186130;
          puStack_70 = &UNK_11038b0e8;
          ppuVar3 = &puStack_88;
          puStack_60 = puVar2;
          func_0x000107c60bc4(ppuVar3);
          puVar2 = puStack_60;
          func_0x000107c6157c(param_4);
          func_0x000107c61574(puVar2);
          func_0x000107c4ecec(0x402e000000000000,lVar1);
          func_0x000107c60bd0(ppuVar3);
          func_0x000107c61170(param_2);
          func_0x000107c615e8(lVar1);
          return;
        }
      }
      (*param_3)(1);
      func_0x000107c61170(param_2);
      return;
    }
    func_0x000107c61170();
  }
  (*param_3)(1);
  return;
}



/* Entry: 1011860b4; end: 10118612f; -[_TtC48MemoriesSDNNotificationPrefetchHandlerPluginImpl26MemoriesSDNPrefetchHandler performPrefetchWithFeatureMetadata:completion:] */

/* WARNING: Possible PIC construction at 0x000101186118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118611c) */

void FUN_1011860b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101186548(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101186130; end: 1011861b7;  */

void FUN_101186130(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_4 != 0) {
    uVar3 = 0;
    func_0x000101186d38(0,0x112d61d40,&PTR_PTR_1126bf9a8);
    func_0x000107c5fc54(param_4,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1011861b8; end: 101186213; -[_TtC48MemoriesSDNNotificationPrefetchHandlerPluginImpl26MemoriesSDNPrefetchHandler init] */

void FUN_1011861b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSDNNotificationPrefetchHandlerPluginImpl.MemoriesSDNPrefetchHandler",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011861e4);
  (*pcVar1)();
}



/* Entry: 101186214; end: 10118628b; -[_TtC48MemoriesSDNNotificationPrefetchHandlerPluginImpl26MemoriesSDNPrefetchHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101186270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101186274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186214(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d625e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d625f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d625f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d62600));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62608));
  return;
}



/* Entry: 10118628c; end: 1011862ab;  */

void FUN_10118628c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b34a8);
  return;
}



/* Entry: 1011862ac; end: 101186547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011862ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_3 + _DAT_112d625f8);
  if (lVar1 == 0) {
LAB_1011863a0:
                    /* WARNING: Could not recover jumptable at 0x0001011863c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,1);
    return;
  }
  func_0x000107c3ddb0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) goto LAB_1011863a0;
  lVar1 = lVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x00010006e7f4(&uStack_60);
    puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x000107c61168();
    func_0x000107c3e48c();
    if ((undefined *)0x1 < puVar4 + -3) {
      lVar1 = *(long *)(param_3 + _DAT_112d62610);
      if (lVar1 != 0) {
        func_0x000107c6157c(lVar1);
        func_0x0001000d224c(&uStack_60);
        func_0x000107c61574(lVar1);
        lVar1 = lStack_58;
        uVar7 = uStack_60;
        uVar5 = uStack_60;
        func_0x000107c614f0(uStack_60);
        (**(code **)(lVar1 + 8))
                  (0x7070615f6e69616d,0xe800000000000000,0xd000000000000018,0x800000010ef29950,uVar5
                   ,lVar1);
        func_0x000107c615e8(uVar7);
      }
      pcVar8 = *(code **)(param_4 + 0x10);
      uVar7 = 1;
      goto LAB_10118649c;
    }
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c56bcc(lVar2);
    func_0x000107c61170(param_1);
    lVar1 = *(long *)(param_3 + _DAT_112d62610);
    if (lVar1 != 0) {
      func_0x000107c6157c(lVar1);
      func_0x0001000d224c(&uStack_60);
      func_0x000107c61574(lVar1);
      lVar1 = lStack_58;
      uVar7 = uStack_60;
      uVar5 = uStack_60;
      func_0x000107c614f0(uStack_60);
      pcVar8 = *(code **)(lVar1 + 8);
      uVar3 = 0x7070615f6e69616d;
      uVar6 = 0xe800000000000000;
      goto LAB_10118647c;
    }
  }
  else {
    func_0x000107c60234(&uStack_60);
    func_0x000107c615e8(lVar1);
    func_0x00010006e7f4(&uStack_60);
    lVar1 = *(long *)(param_3 + _DAT_112d62610);
    if (lVar1 != 0) {
      func_0x000107c6157c(lVar1);
      func_0x0001000d224c(&uStack_60);
      func_0x000107c61574(lVar1);
      lVar1 = lStack_58;
      uVar7 = uStack_60;
      uVar5 = uStack_60;
      func_0x000107c614f0(uStack_60);
      pcVar8 = *(code **)(lVar1 + 8);
      uVar3 = 0x65736e;
      uVar6 = 0xe300000000000000;
LAB_10118647c:
      (*pcVar8)(uVar3,uVar6,0x6465726f7473,0xe600000000000000,uVar5,lVar1);
      func_0x000107c615e8(uVar7);
    }
  }
  pcVar8 = *(code **)(param_4 + 0x10);
  uVar7 = 0;
LAB_10118649c:
  (*pcVar8)(param_4,uVar7);
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 101186548; end: 101186cb3;  */

/* WARNING: Possible PIC construction at 0x000101186610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101186c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011867cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101186c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101186930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101186b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101186a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101186ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101186a44) */
/* WARNING: Removing unreachable block (ram,0x000101186b58) */
/* WARNING: Removing unreachable block (ram,0x000101186934) */
/* WARNING: Removing unreachable block (ram,0x000101186c30) */
/* WARNING: Removing unreachable block (ram,0x0001011867d0) */
/* WARNING: Removing unreachable block (ram,0x000101186c94) */
/* WARNING: Removing unreachable block (ram,0x000101186614) */
/* WARNING: Removing unreachable block (ram,0x000101186ca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186548(ulong param_1,long param_2,undefined **param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = &UNK_11038af40;
  uVar7 = 0x18;
  func_0x000107c613fc(&UNK_11038af40,0x18,7);
  *(undefined ***)(puVar1 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4(param_3);
  func_0x000107c4cb08();
  func_0x000107c61180();
  if (param_1 == 0) {
    (*(code *)param_3[2])(param_3,1);
    func_0x000107c61574(puVar1);
    goto code_r0x000107c60bd0;
  }
  uVar10 = param_1;
  func_0x000107c404a8();
  if ((int)uVar10 == 3) {
    func_0x000107c51ccc();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar10 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      func_0x000107c60bc4(param_3);
      FUN_1011862ac(uVar10,uVar7,param_2,param_3);
    }
    goto code_r0x000107c60bd0;
  }
  uVar10 = param_1;
  func_0x000107c4cb90();
  func_0x000107c61180();
  if (uVar10 != 0) {
    uVar9 = uVar10;
    func_0x000107c5ee30();
    uVar8 = uVar7;
    func_0x000107c61170(uVar10);
    uVar10 = param_1;
    func_0x000107c4cb90();
    func_0x000107c61180();
    if (uVar10 == 0) goto code_r0x000107c60bd0;
    uVar2 = uVar10;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar10);
    uVar10 = uVar2;
    func_0x000107c5ee20(uVar2,uVar8);
    func_0x00010006c090(uVar2,uVar8);
    uVar2 = uVar10;
    func_0x00010565af40();
    func_0x000107c61170(uVar10);
    if ((uVar2 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + _DAT_112d62608);
      func_0x000107c6157c(uVar8);
      func_0x0001000d224c(&uStack_98);
      func_0x000107c61574(uVar8);
      func_0x000107c5ee20(uVar9,uVar7);
      func_0x000101186d38(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar5 = &UNK_11038b080;
      func_0x000107c613fc(&UNK_11038b080,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_101186cb4;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      pcStack_70 = (code *)0x101186d10;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = (code *)&UNK_1000f3aa0;
      puStack_78 = &UNK_11038b098;
      param_3 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(param_3);
      puVar5 = puStack_68;
      func_0x000107c6157c(puVar1);
      func_0x000107c61574(puVar5);
      func_0x000107c4e650(uStack_98);
      func_0x000107c61170(param_1);
      func_0x00010006c090(uVar9,uVar7);
      goto code_r0x000107c60bd0;
    }
    func_0x00010006c090(uVar9,uVar7);
  }
  lVar6 = _DAT_112d625f0;
  uVar10 = *(ulong *)(param_2 + _DAT_112d625f0);
  if (uVar10 == 0) {
    (*(code *)param_3[2])(param_3,1);
    func_0x000107c61574(puVar1);
    uVar10 = param_1;
  }
  else {
    uVar9 = *(ulong *)(param_2 + _DAT_112d62600);
    if (uVar9 == 0) {
      func_0x000107c61174(uVar10);
LAB_101186994:
      lVar6 = *(long *)(param_2 + lVar6);
    }
    else {
      uVar2 = uVar10;
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar9 == 0) goto LAB_101186994;
      uVar3 = param_1;
      func_0x000107c4cb60();
      func_0x000107c61180();
      if (uVar3 != 0) {
        uVar10 = uVar9;
        func_0x000107c3f448();
        if ((uVar10 & 1) != 0) {
          uVar10 = uVar2;
          func_0x000107c5c734();
          func_0x000107c61180();
          if (uVar10 == 0) {
            func_0x000107c61170(uVar3);
            (*(code *)param_3[2])(param_3,1);
            func_0x000107c61574(puVar1);
            func_0x000107c61170(param_1);
            func_0x000107c61170(uVar2);
            func_0x000107c615e8(uVar9);
          }
          else {
            puVar5 = &UNK_11038b008;
            func_0x000107c613fc(&UNK_11038b008,0x18,7);
            func_0x000107c61614(puVar5 + 0x10,param_2);
            puVar4 = &UNK_11038b030;
            func_0x000107c613fc(&UNK_11038b030,0x28,7);
            *(undefined **)(puVar4 + 0x10) = puVar5;
            *(code **)(puVar4 + 0x18) = FUN_101186cb4;
            *(undefined **)(puVar4 + 0x20) = puVar1;
            pcStack_70 = (code *)0x101186d04;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            pcStack_80 = (code *)&UNK_100ab47f8;
            puStack_78 = &UNK_11038b048;
            param_3 = &puStack_90;
            puStack_68 = puVar4;
            func_0x000107c60bc4(param_3);
            puVar5 = puStack_68;
            func_0x000107c6157c(puVar1);
            func_0x000107c61574(puVar5);
            func_0x000107c4489c(uVar10);
          }
          goto code_r0x000107c60bd0;
        }
        func_0x000107c61170(uVar3);
        lVar6 = *(long *)(param_2 + lVar6);
        if (lVar6 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            puVar5 = &UNK_11038afb8;
            func_0x000107c613fc(&UNK_11038afb8,0x20,7);
            *(code **)(puVar5 + 0x10) = FUN_101186cb4;
            *(undefined **)(puVar5 + 0x18) = puVar1;
            pcStack_70 = (code *)0x101186d98;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            pcStack_80 = FUN_101186130;
            puStack_78 = &UNK_11038afd0;
            param_3 = &puStack_90;
            puStack_68 = puVar5;
            func_0x000107c60bc4(param_3);
            puVar5 = puStack_68;
            func_0x000107c6157c(puVar1);
            func_0x000107c61574(puVar5);
            func_0x000107c4ecec(0x402e000000000000,lVar6);
            goto code_r0x000107c60bd0;
          }
        }
        (*(code *)param_3[2])(param_3,1);
        uVar10 = *(ulong *)(param_2 + _DAT_112d625f8);
        if (uVar10 == 0) {
LAB_101186c08:
          func_0x000107c61574(puVar1);
        }
        else {
          func_0x000107c3ddb0();
          func_0x000107c61180();
          uVar3 = uVar10;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          if (uVar3 == 0) goto LAB_101186c08;
          func_0x000107c52de0(uVar3);
          uVar7 = *(undefined8 *)(param_2 + _DAT_112d625e8);
          func_0x000107c5c734(uVar7);
          func_0x000107c61180();
          func_0x000107c54d44();
          func_0x000107c61574(puVar1);
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(uVar9);
          uVar9 = uVar3;
        }
        func_0x000107c615e8(uVar9);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(param_1);
        goto code_r0x000107c60bd0;
      }
      func_0x000107c615e8(uVar9);
      lVar6 = *(long *)(param_2 + lVar6);
    }
    if (lVar6 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        puVar5 = &UNK_11038af68;
        func_0x000107c613fc(&UNK_11038af68,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_101186cb4;
        *(undefined **)(puVar5 + 0x18) = puVar1;
        pcStack_70 = FUN_101186cc4;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_101186130;
        puStack_78 = &UNK_11038af80;
        param_3 = &puStack_90;
        puStack_68 = puVar5;
        func_0x000107c60bc4(param_3);
        puVar5 = puStack_68;
        func_0x000107c6157c(puVar1);
        func_0x000107c61574(puVar5);
        func_0x000107c4ecec(0x402e000000000000,lVar6);
        goto code_r0x000107c60bd0;
      }
    }
    (*(code *)param_3[2])(param_3,1);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(uVar10);
code_r0x000107c60bd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_3);
  return;
}



/* Entry: 101186cb4; end: 101186cc3;  */

void FUN_101186cb4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101186cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101186cc4; end: 101186ce7;  */

void FUN_101186cc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 101186ce8; end: 101186d0f;  */

void FUN_101186ce8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101186d10; end: 101186d77;  */

void FUN_101186d10(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(~param_1 & 1);
  return;
}



/* Entry: 101186d78; end: 101186d9f;  */

void FUN_101186d78(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101186da0; end: 101186dab; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186da0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62640;
  func_0x000107c61428(param_1 + _DAT_112d62640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186dac; end: 101186db7; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62640;
  func_0x000107c61428(param_1 + _DAT_112d62640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186db8; end: 101186dc3; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186db8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62648;
  func_0x000107c61428(param_1 + _DAT_112d62648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186dc4; end: 101186dcf; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62648;
  func_0x000107c61428(param_1 + _DAT_112d62648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186dd0; end: 101186ddb; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint memoriesHighlightContentDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186dd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62650;
  func_0x000107c61428(param_1 + _DAT_112d62650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186ddc; end: 101186de7; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setMemoriesHighlightContentDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62650;
  func_0x000107c61428(param_1 + _DAT_112d62650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186de8; end: 101186df3; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint systemScopedExtensionStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186de8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62658;
  func_0x000107c61428(param_1 + _DAT_112d62658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186df4; end: 101186dff; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setSystemScopedExtensionStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62658;
  func_0x000107c61428(param_1 + _DAT_112d62658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186e00; end: 101186e0b; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62660;
  func_0x000107c61428(param_1 + _DAT_112d62660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186e0c; end: 101186e17; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62660;
  func_0x000107c61428(param_1 + _DAT_112d62660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186e18; end: 101186e23; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint userStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62668;
  func_0x000107c61428(param_1 + _DAT_112d62668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186e24; end: 101186e2f; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setUserStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62668;
  func_0x000107c61428(param_1 + _DAT_112d62668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186e30; end: 101186e3b; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint memoriesFriendshipFlashbackDatabaseServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62670;
  func_0x000107c61428(param_1 + _DAT_112d62670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186e3c; end: 101186e47; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setMemoriesFriendshipFlashbackDatabaseServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62670;
  func_0x000107c61428(param_1 + _DAT_112d62670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186e48; end: 101186e53; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint quickCutSelectionConfigLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62678;
  func_0x000107c61428(param_1 + _DAT_112d62678,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186e54; end: 101186e97;  */

void FUN_101186e54(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101186e98; end: 101186ea3; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setQuickCutSelectionConfigLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62678;
  func_0x000107c61428(param_1 + _DAT_112d62678,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186ea4; end: 101186ef7;  */

void FUN_101186ea4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101186ef8; end: 1011873d7;  */

/* WARNING: Possible PIC construction at 0x000101187130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011871a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011871b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118739c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011872d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011872e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011872f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011872b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011872c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101187268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010118727c) */
/* WARNING: Removing unreachable block (ram,0x00010118729c) */
/* WARNING: Removing unreachable block (ram,0x0001011872cc) */
/* WARNING: Removing unreachable block (ram,0x0001011872bc) */
/* WARNING: Removing unreachable block (ram,0x0001011872fc) */
/* WARNING: Removing unreachable block (ram,0x0001011872ec) */
/* WARNING: Removing unreachable block (ram,0x0001011872dc) */
/* WARNING: Removing unreachable block (ram,0x00010118732c) */
/* WARNING: Removing unreachable block (ram,0x00010118731c) */
/* WARNING: Removing unreachable block (ram,0x00010118730c) */
/* WARNING: Removing unreachable block (ram,0x000101187388) */
/* WARNING: Removing unreachable block (ram,0x000101187378) */
/* WARNING: Removing unreachable block (ram,0x000101187368) */
/* WARNING: Removing unreachable block (ram,0x0001011873a0) */
/* WARNING: Removing unreachable block (ram,0x000101187254) */
/* WARNING: Removing unreachable block (ram,0x000101187394) */
/* WARNING: Removing unreachable block (ram,0x000101187244) */
/* WARNING: Removing unreachable block (ram,0x000101187234) */
/* WARNING: Removing unreachable block (ram,0x000101187224) */
/* WARNING: Removing unreachable block (ram,0x000101187214) */
/* WARNING: Removing unreachable block (ram,0x0001011871bc) */
/* WARNING: Removing unreachable block (ram,0x0001011871ac) */
/* WARNING: Removing unreachable block (ram,0x000101187154) */
/* WARNING: Removing unreachable block (ram,0x000101187134) */
/* WARNING: Removing unreachable block (ram,0x00010118726c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101186ef8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  
  lVar11 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c42eb0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4cba4();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c5c640();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar4 = unaff_x20;
          func_0x000107c4cb8c();
          func_0x000107c61180();
          if (lVar4 == 0) {
            func_0x000107c61170(lVar11);
            lVar11 = lVar1;
          }
          else {
            lVar5 = unaff_x20;
            func_0x000107c5daa0();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar11);
              lVar11 = lVar1;
            }
            else {
              lVar5 = unaff_x20;
              func_0x000107c4cb98();
              func_0x000107c61180();
              if (lVar5 != 0) {
                func_0x000107c4f824();
                func_0x000107c61180();
                if (unaff_x20 != 0) {
                  FUN_101185f40();
                  func_0x000107c613fc();
                  uVar6 = *(ulong *)(lVar4 + _DAT_1130806d0);
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  lVar11 = lVar4;
                  if (uVar6 != 0) {
                    uVar7 = uVar6;
                    func_0x000107c4cebc();
                    if ((uVar7 & 1) == 0) {
                      func_0x000107c615e8(uVar6);
                    }
                    else {
                      func_0x000107c42eac();
                      func_0x000107c61180();
                      func_0x000107c4cba8();
                      func_0x000107c61180();
                      uVar9 = *(undefined8 *)(lVar5 + _DAT_11303e7b8);
                      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112facd00);
                      lVar8 = 0;
                      FUN_10118628c();
                      func_0x000107c610f8();
                      lVar11 = _DAT_112d625e8;
                      *(undefined8 *)(lVar8 + _DAT_112d625e8) = 0;
                      lVar4 = _DAT_112d625f0;
                      *(undefined8 *)(lVar8 + _DAT_112d625f0) = 0;
                      lVar5 = _DAT_112d625f8;
                      *(undefined8 *)(lVar8 + _DAT_112d625f8) = 0;
                      *(undefined8 *)(lVar8 + _DAT_112d62600) = 0;
                      *(undefined8 *)(lVar8 + _DAT_112d62610) = 0;
                      *(long *)(lVar8 + lVar11) = lVar1;
                      *(long *)(lVar8 + lVar4) = lVar2;
                      lVar11 = *(long *)(lVar8 + lVar5);
                      *(long *)(lVar8 + lVar5) = lVar3;
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c6157c(uVar9);
                      func_0x000107c6157c(uVar10);
                      func_0x000107c61174();
                      func_0x000107c61174();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar11);
    return;
  }
  return;
}



/* Entry: 1011873d8; end: 1011873ff; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint begin] */

void FUN_1011873d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101186ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101187400; end: 101187443; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint end] */

void FUN_101187400(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101187444; end: 101187857;  */

void FUN_101187444(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_1011874d0;
  }
  if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
    uVar2 = 0xd000000000000017;
    func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef10d6690)) ||
         (func_0x000107c605b8(0xd00000000000002a,0x800000010ef29970,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56560();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10d6660)) ||
           (func_0x000107c605b8(0xd000000000000024,0x800000010ef299a0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59b78();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0)) ||
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56550();
          }
          else {
            if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10edce0)) {
              uVar2 = 0xd000000000000013;
              func_0x000107c605b8(0xd000000000000013,0x800000010ef12320,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd00000000000002b;
                if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef10d6630)) ||
                   (func_0x000107c605b8(0xd00000000000002b,0x800000010ef299d0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c56558();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef10e1fc0)) &&
                     (func_0x000107c605b8(0xd000000000000026,0x800000010ef1e040,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "MemoriesSDNNotificationPrefetchHandlerPluginImpl/SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint.swift"
                                        ,0x73,2,0x47,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101187858);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c57acc();
                }
                goto LAB_1011874d0;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a408();
          }
        }
      }
      goto LAB_1011874d0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5491c();
LAB_1011874d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101187858; end: 101187903; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint setValue:forIvarName:] */

void FUN_101187858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101187444(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101187904; end: 1011879ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101187904(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d62640,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62648,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62650,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62658,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62660,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62668,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62670,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62678,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d62680) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011879f0; end: 101187a0f; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint init] */

void FUN_1011879f0(void)

{
  FUN_101187904();
  return;
}



/* Entry: 101187a10; end: 101187a43;  */

void FUN_101187a10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101187a44; end: 101187aeb; -[SCMemoriesSDNNotificationPrefetchHandlerPluginImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101187a44(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d62640);
  func_0x000107c61610(param_1 + _DAT_112d62648);
  func_0x000107c61610(param_1 + _DAT_112d62650);
  func_0x000107c61610(param_1 + _DAT_112d62658);
  func_0x000107c61610(param_1 + _DAT_112d62660);
  func_0x000107c61610(param_1 + _DAT_112d62668);
  func_0x000107c61610(param_1 + _DAT_112d62670);
  func_0x000107c61610(param_1 + _DAT_112d62678);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d62680));
  return;
}



/* Entry: 101187aec; end: 101187b77;  */

void FUN_101187aec(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3640);
  return;
}



/* Entry: 101187b78; end: 101187b8f;  */

void FUN_101187b78(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101187b90,0,0);
  return;
}



/* Entry: 101187b90; end: 101187de7;  */

/* WARNING: Removing unreachable block (ram,0x000101187cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101187b90(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  uVar5 = ((long *)(lVar3 + _DAT_112fda130))[1];
  if (0xe < uVar5 >> 0x3c) goto LAB_101187c30;
  lVar7 = *(long *)(lVar3 + _DAT_112fda130);
  uVar1 = (uint)(uVar5 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 != 0) {
      if ((long)(int)lVar7 == lVar7 >> 0x20) goto LAB_101187c30;
LAB_101187c8c:
      FUN_100de78a0(lVar7,uVar5);
LAB_101187c98:
      func_0x000107c610f8(PTR_PTR_1126b25c0);
      FUN_100de78a0(lVar7,uVar5);
      lVar3 = lVar7;
      FUN_1010282b0(lVar7,uVar5);
      func_0x0001000b44c0(lVar7,uVar5);
      func_0x0001000b44c0(lVar7,uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101187de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(lVar3,0,0);
      return;
    }
    if ((uVar5 & 0xff000000000000) != 0) goto LAB_101187c98;
  }
  else if (uVar4 == 2) {
    if (*(long *)(lVar7 + 0x10) == *(long *)(lVar7 + 0x18)) goto LAB_101187c30;
    goto LAB_101187c8c;
  }
  func_0x0001000b44c0(lVar7,uVar5);
  lVar3 = *(long *)(unaff_x22 + 0x38);
LAB_101187c30:
  lVar7 = *(long *)(lVar3 + _DAT_112fda128);
  lVar3 = ((long *)(lVar3 + _DAT_112fda128))[1];
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101187de8;
  lVar6 = *(long *)(unaff_x22 + 0x40);
  plVar2[5] = lVar3;
  plVar2[6] = lVar6;
  plVar2[4] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101188094,0,0);
  return;
}



/* Entry: 101187de8; end: 101187eef;  */

void FUN_101187de8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101187e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101187e50,0,0);
  return;
}



/* Entry: 101187ef0; end: 101187f6f;  */

void FUN_101187ef0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x00010118a2d0(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101187f70;
                    /* WARNING: Could not recover jumptable at 0x000101187f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x50),uVar2,lVar3);
  return;
}



/* Entry: 101187f70; end: 101187fef;  */

void FUN_101187f70(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x80) = param_3;
    *(undefined8 *)(lVar2 + 0x70) = param_2;
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    pcVar1 = FUN_101187ff0;
  }
  else {
    pcVar1 = (code *)0x101188038;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101187ff0; end: 101188077;  */

void FUN_101187ff0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x00010118a2f4(unaff_x22 + 0x10);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101188034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x70),
             *(undefined1 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 101188078; end: 101188093;  */

void FUN_101188078(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101188094,0,0);
  return;
}



/* Entry: 101188094; end: 101188133;  */

void FUN_101188094(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x30) + 0x20);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1011880ec;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101188134; end: 10118823b;  */

void FUN_101188134(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x40);
  func_0x0001000285a8(0x112d627d8,&UNK_10d9285c0);
  puVar1 = &UNK_11038b290;
  func_0x000107c613fc(&UNK_11038b290,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(uVar2);
  uVar2 = uVar4;
  func_0x0001048897a0(uVar4,1,0,FUN_10118a4b8,puVar1);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uVar4);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10118823c;
                    /* WARNING: Could not recover jumptable at 0x000101188238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101189cb4();
  return;
}



/* Entry: 10118823c; end: 10118828f;  */

void FUN_10118823c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  *(undefined1 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101188290,0,0);
  return;
}



/* Entry: 101188290; end: 101188347;  */

void FUN_101188290(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  if (*(char *)(unaff_x22 + 0x60) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101188318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101188344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101188348; end: 10118855f;  */

void FUN_101188348(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puStack_58;
  
  func_0x0001000d224c(&puStack_58);
  puVar1 = puStack_58;
  if (puStack_58 == (undefined8 *)0x0) {
    FUN_10118a534();
    puVar6 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,param_1,0,0);
    *param_1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
    return;
  }
  puVar5 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar5[3] = 2;
  puVar5[2] = 1;
  puVar5[4] = param_3;
  puVar5[5] = param_4;
  func_0x000107c61434(param_4);
  puVar3 = puVar5;
  func_0x000107c5fc48(puVar5,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar5);
  puVar5 = puVar1;
  func_0x000107c4310c();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    puVar3 = puVar5;
    func_0x000107c5fc54(puVar5,uVar4);
    func_0x000107c61170(puVar5);
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar5 = *(undefined8 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined8 *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar3) {
        puVar5 = puVar3;
      }
      func_0x000107c60480();
    }
    if (puVar5 != (undefined8 *)0x0) {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101188560);
          (*pcVar2)();
        }
        puVar5 = (undefined8 *)puVar3[4];
        func_0x000107c615f0(puVar5);
      }
      else {
        puVar5 = (undefined8 *)0x0;
        FUN_100fb0ba0(0,puVar3);
      }
      func_0x000107c6142c(puVar3);
      puStack_58 = puVar5;
      func_0x000100b60084(&puStack_58);
      func_0x000107c615e8(puVar5);
      goto LAB_101188524;
    }
    func_0x000107c6142c();
  }
  FUN_10118a278();
  puVar6 = &UNK_11038b6e0;
  func_0x000107c613f8(&UNK_11038b6e0,puVar3,0,0);
  *puVar3 = param_3;
  puVar3[1] = param_4;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 3;
  func_0x000107c61434(param_4);
  func_0x00010488ade0(puVar6);
  func_0x000107c614ac(puVar6);
LAB_101188524:
  func_0x000107c615e8(puVar1);
  return;
}



/* Entry: 101188560; end: 1011886af;  */

void FUN_101188560(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1011885c4;
                    /* WARNING: Could not recover jumptable at 0x0001011885c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101189de4)(plVar1,unaff_x22 + 0x10);
  return;
}



/* Entry: 1011886b0; end: 1011886d3;  */

void FUN_1011886b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xd8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011886d4,0,0);
  return;
}


