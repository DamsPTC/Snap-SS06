/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10488b7ac; end: 10488b84f;  */

void FUN_10488b7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1107ac678;
  uStack_50 = param_2;
  uStack_48 = param_3;
  __Block_copy(&puStack_70);
  uVar1 = uStack_48;
  _swift_retain(param_3);
  _swift_release(uVar1);
  func_0x00010bcbe628(param_4,param_1,ppuVar2);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 10488b850; end: 10488b85f;  */

void FUN_10488b850(long param_1,long param_2)

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



/* Entry: 10488b860; end: 10488b933;  */

void FUN_10488b860(void)

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



/* Entry: 10488b934; end: 10488b953;  */

void FUN_10488b934(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10488b954; end: 10488b96f; -[SCSnapTaskPriority description] */

void FUN_10488b954(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10488b970; end: 10488b99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10488b970(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_113096e78);
  _objc_release();
  return uVar1;
}



/* Entry: 10488b99c; end: 10488b9e3; -[SCSnapTaskPriority init] */

void FUN_10488b99c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapConcurrency/SnapTaskPriorityWrapper.swift",0x2d,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10488b9e4);
  (*pcVar1)();
}



/* Entry: 10488b9e4; end: 10488b9e7; -[SCSnapTaskPriority copyWithZone:] */

void FUN_10488b9e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10488b9e8; end: 10488ba23; -[SCSnapTaskPriority matchLow:medium:high:userInitiated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10488b9e8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_113096e78);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010488ba20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 10488ba24; end: 10488ba57;  */

void FUN_10488ba24(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10488ba58; end: 10488bbbf;  */

int FUN_10488ba58(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10488bad4;
        goto LAB_10488bab8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10488bab8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10488bad4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10488bbc0; end: 10488bbff;  */

void FUN_10488bbc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113096ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3cd28;
  _swift_getWitnessTable(&UNK_10dd3cd28,&UNK_1107ac7a0);
  puRam0000000113096ea8 = puVar1;
  return;
}



/* Entry: 10488bc00; end: 10488bc0f;  */

ulong FUN_10488bc00(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 10488bc10; end: 10488bc97;  */

void FUN_10488bc10(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10488bd74(0,param_1);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x00010006c1b8(0,lVar1);
  _swift_storeEnumTagMultiPayload(&stack0xffffffffffffffd0 + -extraout_x8,lVar1,2);
  func_0x0001000bf530(&stack0xffffffffffffffd0 + -extraout_x8);
  return;
}



/* Entry: 10488bc98; end: 10488bd73;  */

undefined1 * FUN_10488bc98(code *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10488bd74(0,param_3);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x00010006c1b8(0,lVar1);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,2);
  func_0x0001000bf530(puVar2);
  func_0x000100935558(0,param_3);
  puVar3 = puVar2;
  FUN_10488e5a4(puVar2);
  _swift_retain(puVar2);
  (*param_1)(puVar3);
  _swift_release(puVar3);
  return puVar2;
}



/* Entry: 10488bd74; end: 10488bd7f;  */

void FUN_10488bd74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821f18);
  return;
}



/* Entry: 10488bd80; end: 10488bdd3;  */

void FUN_10488bd80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10488bc10();
  func_0x000100935558(0,param_1);
  FUN_10488e5a4(uVar1);
  _swift_retain(uVar1);
  return;
}



/* Entry: 10488bdd4; end: 10488bdef;  */

void FUN_10488bdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488bdf0,0,0);
  return;
}



/* Entry: 10488bdf0; end: 10488be9b;  */

void FUN_10488bdf0(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  pcVar1 = FUN_10488bf3c;
  FUN_10488bc98(FUN_10488bf3c,unaff_x22 + 0x10,uVar6);
  *(code **)(unaff_x22 + 0x58) = pcVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = pcVar1;
  plVar2 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  lVar3 = 0;
  FUN_10488bf7c(0,uVar6);
  puVar4 = &DAT_10dd3cdf8;
  _swift_getWitnessTable(&DAT_10dd3cdf8,lVar3);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10488be9c;
  lVar5 = *(long *)(unaff_x22 + 0x38);
  plVar2[0xe] = (long)puVar4;
  plVar2[0xf] = unaff_x22 + 0x30;
  plVar2[0xd] = lVar3;
  plVar2[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488e060,0,0);
  return;
}



/* Entry: 10488be9c; end: 10488bf07;  */

void FUN_10488be9c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10488bf08,0,0);
    return;
  }
  _swift_release(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010488bf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10488bf08; end: 10488bf3b;  */

void FUN_10488bf08(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010488bf38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488bf3c; end: 10488bf7b;  */

void FUN_10488bf3c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  _swift_retain();
  (*pcVar1)(FUN_10488e034,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10488bf7c; end: 10488bf87;  */

void FUN_10488bf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821ee8);
  return;
}



/* Entry: 10488bf88; end: 10488bfe7;  */

void FUN_10488bf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(long *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar2 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488bfe8,0,0);
  return;
}



/* Entry: 10488bfe8; end: 10488c11f;  */

void FUN_10488bfe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  pcVar2 = *(code **)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = uVar1;
  FUN_10488bd80();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  puVar5 = &UNK_1107ac818;
  _swift_allocObject(&UNK_1107ac818,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  _swift_retain(param_2);
  (*pcVar2)(uVar7,FUN_10488c238,puVar5);
  _swift_release(puVar5);
  _swift_release(param_2);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  plVar6 = (long *)0x20;
  _swift_retain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10488c120;
                    /* WARNING: Could not recover jumptable at 0x00010488c11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x48),&UNK_10dd3cde0,unaff_x22 + 0x50,FUN_10488c404,
             unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 10488c120; end: 10488c183;  */

void FUN_10488c120(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0xb8));
    pcVar1 = FUN_10488c184;
  }
  else {
    pcVar1 = FUN_10488c1dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10488c184; end: 10488c1db;  */

void FUN_10488c184(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010488c1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488c1dc; end: 10488c237;  */

void FUN_10488c1dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  _swift_release_n(*(undefined8 *)(unaff_x22 + 0xb8),2);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010488c234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488c238; end: 10488c257;  */

void FUN_10488c238(void)

{
  FUN_10488e5d4();
  return;
}



/* Entry: 10488c258; end: 10488c2e7;  */

void FUN_10488c258(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  uVar3 = 0;
  FUN_10488bf7c(0,param_3);
  puVar4 = &DAT_10dd3cdf8;
  _swift_getWitnessTable(&DAT_10dd3cdf8,uVar3);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10488c2e8;
  plVar2[3] = param_1;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,puVar4,uVar3,&UNK_10e821f58,&UNK_10e821f60);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar5,uVar6,PTR___ss5ErrorWS_11034ee10);
  plVar2[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[5] = uVar8;
  piVar10 = *(int **)(puVar4 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar2[6] = (long)plVar9;
  *plVar9 = (long)plVar2;
  plVar9[1] = (long)FUN_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,uVar3,puVar4);
  return;
}



/* Entry: 10488c2e8; end: 10488c343;  */

void FUN_10488c2e8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10488c344;
  }
  else {
    pcVar1 = (code *)0x10488c350;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10488c344; end: 10488c35b;  */

void FUN_10488c344(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010488c34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488c35c; end: 10488c3c7;  */

void FUN_10488c35c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10488c3c8;
  plVar5[2] = lVar10;
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  plVar5[3] = (long)plVar2;
  uVar3 = 0;
  FUN_10488bf7c(0,uVar7);
  puVar4 = &DAT_10dd3cdf8;
  _swift_getWitnessTable(&DAT_10dd3cdf8,uVar3);
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_10488c2e8;
  plVar2[3] = param_1;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,puVar4,uVar3,&UNK_10e821f58,&UNK_10e821f60);
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar10 = 0;
  __ss6ResultOMa(0,uVar6,uVar7,PTR___ss5ErrorWS_11034ee10);
  plVar2[4] = lVar10;
  uVar8 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[5] = uVar8;
  piVar9 = *(int **)(puVar4 + 0x10);
  iVar1 = *piVar9;
  plVar5 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  plVar2[6] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)FUN_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(plVar5,uVar8,uVar3,puVar4);
  return;
}



/* Entry: 10488c3c8; end: 10488c403;  */

void FUN_10488c3c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488c400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488c404; end: 10488c42b;  */

void FUN_10488c404(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))
            (*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10488c42c; end: 10488c493;  */

void FUN_10488c42c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  lVar2 = *(long *)(param_2 + 0x10);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10488c494;
  plVar1[7] = lVar3;
  plVar1[8] = lVar2;
  plVar1[6] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488c4ec,0,0);
  return;
}



/* Entry: 10488c494; end: 10488c4cf;  */

void FUN_10488c494(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488c4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488c4d0; end: 10488c4eb;  */

void FUN_10488c4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488c4ec,0,0);
  return;
}



/* Entry: 10488c4ec; end: 10488c597;  */

void FUN_10488c4ec(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x38);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  uVar4 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0;
  __ss6ResultOMa(0,uVar1,uVar4,PTR___ss5ErrorWS_11034ee10);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10488c598;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[2] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)FUN_104894f24;
                    /* WARNING: Could not recover jumptable at 0x000104894f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_104167d8c)(plVar5,uVar4,0,0,FUN_10488cb64,unaff_x22 + 0x10,uVar3);
  return;
}



/* Entry: 10488c598; end: 10488c5d3;  */

void FUN_10488c598(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010488c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488c5d4; end: 10488c5e3;  */

void FUN_10488c5d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(*unaff_x20,0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar2 = 0xff;
  uStack_40 = uVar3;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  func_0x000100075034(&lStack_38,FUN_10488cea0,auStack_50,uVar3);
  if (lStack_38 != 0) {
    uVar3 = 0;
    __sScEMa();
    uVar2 = uVar3;
    func_0x000100f5abbc();
    _swift_allocError(uVar3,uVar2,0,0);
    __sS2cEycfC(uVar2);
    *puVar4 = uVar3;
    _swift_storeEnumTagMultiPayload(puVar4,lVar1,1);
    func_0x000103969044(puVar4,lStack_38,lVar1);
  }
  return;
}



/* Entry: 10488c5e4; end: 10488c70f;  */

void FUN_10488c5e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,param_2,uVar2,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar2 = 0xff;
  uStack_40 = param_2;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  func_0x000100075034(&lStack_38,FUN_10488cea0,auStack_50,uVar3);
  if (lStack_38 != 0) {
    uVar3 = 0;
    __sScEMa();
    uVar2 = uVar3;
    func_0x000100f5abbc();
    _swift_allocError(uVar3,uVar2,0,0);
    __sS2cEycfC(uVar2);
    *puVar4 = uVar3;
    _swift_storeEnumTagMultiPayload(puVar4,lVar1,1);
    func_0x000103969044(puVar4,lStack_38,lVar1);
  }
  return;
}



/* Entry: 10488c710; end: 10488c817;  */

void FUN_10488c710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,param_3,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  uStack_60 = param_3;
  uStack_58 = param_1;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  func_0x000100075034(&lStack_48,0x10488e01c,auStack_70,uVar3);
  if (lStack_48 != 0) {
    (**(code **)(lVar4 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar1);
    func_0x000103969044(auStack_80 + -extraout_x8,lStack_48,lVar1);
  }
  return;
}



/* Entry: 10488c818; end: 10488c977;  */

void FUN_10488c818(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_10488bd74(0,param_4);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffb0 + -extraout_x8);
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar2);
  puVar3 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      uVar4 = *puVar5;
      _swift_storeEnumTagMultiPayload(param_2,lVar2,4);
      goto LAB_10488c954;
    }
    if (iVar1 == 1) {
      (**(code **)(lVar6 + 8))(puVar5,lVar2);
    }
    else {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      uVar4 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      lVar6 = 0;
      __ss6ResultOMa(0,param_4,uVar4,PTR___ss5ErrorWS_11034ee10);
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_2,param_3,lVar6);
      _swift_storeEnumTagMultiPayload(param_2,lVar2,1);
    }
  }
  uVar4 = 0;
LAB_10488c954:
  *param_1 = uVar4;
  return;
}



/* Entry: 10488c978; end: 10488cb63;  */

void FUN_10488c978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = 0x112d393f0;
  uStack_90 = param_2;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  __ss6ResultOMa(0,param_3,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_00;
  uStack_98 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_1;
  func_0x000100075034(lVar9,FUN_10488e004,auStack_80,lVar3);
  (**(code **)(lVar5 + 0x10))(lVar10,lVar9,lVar3);
  lVar4 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar4 == 1) {
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)(lVar9,lVar3);
    (*pcVar6)(lVar10,lVar3);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar8,lVar10,lVar2);
    (**(code **)(lVar11 + 0x10))(puVar7,lVar8,lVar2);
    func_0x000103969044(puVar7,uStack_98,lVar2);
    (**(code **)(lVar11 + 8))(lVar8,lVar2);
    (**(code **)(lVar5 + 8))(lVar9,lVar3);
  }
  return;
}



/* Entry: 10488cb64; end: 10488cb6b;  */

void FUN_10488cb64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar1,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar8 - extraout_x12;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_00;
  uStack_98 = param_1;
  uStack_70 = uVar1;
  uStack_68 = param_1;
  func_0x000100075034(lVar10,FUN_10488e004,auStack_80,lVar4);
  (**(code **)(lVar6 + 0x10))(lVar11,lVar10,lVar4);
  lVar5 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar3);
  if ((int)lVar5 == 1) {
    pcVar7 = *(code **)(lVar6 + 8);
    (*pcVar7)(lVar10,lVar4);
    (*pcVar7)(lVar11,lVar4);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar9,lVar11,lVar3);
    (**(code **)(lVar12 + 0x10))(puVar8,lVar9,lVar3);
    func_0x000103969044(puVar8,uStack_98,lVar3);
    (**(code **)(lVar12 + 8))(lVar9,lVar3);
    (**(code **)(lVar6 + 8))(lVar10,lVar4);
  }
  return;
}



/* Entry: 10488cb6c; end: 10488cd97;  */

void FUN_10488cb6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = 0;
  FUN_10488bd74(0,param_4);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(lVar9 + 0x10))(puVar7,param_2,lVar2);
  puVar3 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_10488cc0c;
    (**(code **)(lVar9 + 8))(param_2,lVar2);
    uVar5 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    lVar9 = 0;
    __ss6ResultOMa(0,param_4,uVar5,PTR___ss5ErrorWS_11034ee10);
    lVar8 = *(long *)(lVar9 + -8);
    (**(code **)(lVar8 + 0x20))(param_1,puVar7,lVar9);
    _swift_storeEnumTagMultiPayload(param_2,lVar2,4);
    pcVar6 = *(code **)(lVar8 + 0x38);
  }
  else {
    if (iVar1 == 2) {
      (**(code **)(lVar9 + 8))(param_2,lVar2);
      *param_2 = param_3;
      _swift_storeEnumTagMultiPayload(param_2,lVar2,0);
      uVar5 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      lVar9 = 0;
      __ss6ResultOMa(0,param_4,uVar5,PTR___ss5ErrorWS_11034ee10);
      pcVar6 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
      uVar5 = 1;
      goto LAB_10488cd74;
    }
LAB_10488cc0c:
    uVar4 = 0;
    __sScEMa();
    uVar5 = uVar4;
    func_0x000100f5abbc();
    _swift_allocError(uVar4,uVar5,0,0);
    __sS2cEycfC(uVar5);
    *param_1 = uVar4;
    uVar5 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    lVar9 = 0;
    __ss6ResultOMa(0,param_4,uVar5,PTR___ss5ErrorWS_11034ee10);
    _swift_storeEnumTagMultiPayload(param_1,lVar9,1);
    pcVar6 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  }
  uVar5 = 0;
LAB_10488cd74:
  (*pcVar6)(param_1,uVar5,1,lVar9);
  return;
}



/* Entry: 10488cd98; end: 10488ce9f;  */

void FUN_10488cd98(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_10488bd74();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar6 + 0x10))(puVar4,param_2,lVar2);
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      uVar5 = *puVar4;
      _swift_storeEnumTagMultiPayload(param_2,lVar2,3);
      goto LAB_10488ce80;
    }
    if (iVar1 == 1) {
      (**(code **)(lVar6 + 8))(puVar4,lVar2);
    }
    else {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      _swift_storeEnumTagMultiPayload(param_2,lVar2,3);
    }
  }
  uVar5 = 0;
LAB_10488ce80:
  *param_1 = uVar5;
  return;
}



/* Entry: 10488cea0; end: 10488ceb7;  */

void FUN_10488cea0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10488cd98(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10488ceb8; end: 10488cf4f;  */

void FUN_10488ceb8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dd3ce50;
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0x13f;
  __ss6ResultOMa(0x13f,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  if (uVar3 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&puStack_30);
  }
  return;
}



/* Entry: 10488cf50; end: 10488d13b;  */

long * FUN_10488cf50(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar4 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  lVar1 = 8;
  if (8 < uVar3 + 1) {
    lVar1 = uVar3 + 1;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 || 0x18 < lVar1 + 1U) {
    uVar6 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain(lVar4);
    return (long *)(lVar4 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)lVar1;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10488d040;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar6 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10488d040:
  if (uVar6 != 1) {
    if (uVar6 == 0) {
      *param_1 = *(long *)param_2;
      *(undefined1 *)((long)param_1 + lVar1) = 0;
      return param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1 + 1U);
    return param_1;
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)uVar3;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10488d0e4;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar6 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10488d0e4:
  if (uVar6 != 1) {
    (**(code **)(lVar4 + 0x10))();
  }
  else {
    lVar4 = *(long *)param_2;
    _swift_errorRetain(lVar4);
    *param_1 = lVar4;
  }
  *(bool *)((long)param_1 + uVar3) = uVar6 == 1;
  *(undefined1 *)((long)param_1 + lVar1) = 1;
  return param_1;
}



/* Entry: 10488d13c; end: 10488d26b;  */

void FUN_10488d13c(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar1 = 8;
  if (8 < uVar4 + 1) {
    lVar1 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = (uint)lVar1;
    uVar6 = 4;
    if (uVar5 < 4) {
      uVar6 = uVar5;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return;
      }
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
  if (uVar6 != 1) {
    return;
  }
  bVar2 = *(byte *)((long)param_1 + uVar4);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)uVar4;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10488d254;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar6 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10488d254:
  if (uVar6 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010488d268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)param_1);
  return;
}



/* Entry: 10488d26c; end: 10488d40f;  */

void FUN_10488d26c(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar1 = 8;
  if (8 < uVar4 + 1) {
    lVar1 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)lVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10488d314;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10488d314:
  if (uVar5 != 1) {
    if (uVar5 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar4;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10488d3b8;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10488d3b8:
  if (uVar5 != 1) {
    (**(code **)(lVar3 + 0x10))();
  }
  else {
    uVar7 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar7);
    *param_1 = uVar7;
  }
  *(bool *)((long)param_1 + uVar4) = uVar5 == 1;
  *(undefined1 *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 10488d410; end: 10488d717;  */

void FUN_10488d410(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  if (param_1 == param_2) {
    return;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar10 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  lVar1 = 8;
  if (8 < uVar3 + 1) {
    lVar1 = uVar3 + 1;
  }
  uVar8 = (uint)lVar1;
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar4 = (uint)bVar2;
  uVar9 = (uint)uVar3;
  if (bVar2 < 2) {
LAB_10488d4c8:
    if (uVar4 == 1) {
      bVar2 = *(byte *)((long)param_1 + uVar3);
      uVar4 = (uint)bVar2;
      if (1 < bVar2) {
        uVar5 = 4;
        if (uVar9 < 4) {
          uVar5 = uVar9;
        }
        if ((int)uVar5 < 2) {
          if (uVar5 == 0) goto LAB_10488d544;
          uVar5 = (uint)(byte)*param_1;
        }
        else if (uVar5 == 2) {
          uVar5 = (uint)(ushort)*param_1;
        }
        else if (uVar5 == 3) {
          uVar5 = (uint)(uint3)*param_1;
        }
        else {
          uVar5 = *param_1;
        }
        uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
        if (3 < uVar9) {
          uVar4 = uVar5;
        }
        uVar4 = uVar4 + 2;
      }
LAB_10488d544:
      if (uVar4 == 1) {
        _swift_errorRelease(*(undefined8 *)param_1);
      }
      else {
        (**(code **)(lVar10 + 8))(param_1,lVar6);
      }
    }
  }
  else {
    uVar4 = 4;
    if (uVar8 < 4) {
      uVar4 = uVar8;
    }
    if (1 < (int)uVar4) {
      if (uVar4 == 2) {
        uVar5 = (uint)(ushort)*param_1;
      }
      else if (uVar4 == 3) {
        uVar5 = (uint)(uint3)*param_1;
      }
      else {
        uVar5 = *param_1;
      }
LAB_10488d4b0:
      uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
      if (3 < uVar8) {
        uVar4 = uVar5;
      }
      uVar4 = uVar4 + 2;
      goto LAB_10488d4c8;
    }
    if (uVar4 != 0) {
      uVar5 = (uint)(byte)*param_1;
      goto LAB_10488d4b0;
    }
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10488d5ec;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10488d5ec:
  if (uVar4 != 1) {
    if (uVar4 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_10488d690:
    if (uVar4 == 1) {
LAB_10488d698:
      uVar7 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar7);
      *(undefined8 *)param_1 = uVar7;
      bVar2 = 1;
      goto LAB_10488d6f4;
    }
  }
  else {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10488d690;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    if (3 < uVar9) {
      uVar4 = uVar4 + 2;
      goto LAB_10488d690;
    }
    if ((uVar4 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3)) == 0xffffffff) goto LAB_10488d698;
  }
  (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar6);
  bVar2 = 0;
LAB_10488d6f4:
  *(byte *)((long)param_1 + uVar3) = bVar2;
  *(byte *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 10488d718; end: 10488d8ab;  */

void FUN_10488d718(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar1 = 8;
  if (8 < uVar4 + 1) {
    lVar1 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)lVar1;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10488d7c0;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10488d7c0:
  if (uVar5 != 1) {
    if (uVar5 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10488d864;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10488d864:
  if (uVar5 != 1) {
    (**(code **)(lVar3 + 0x20))();
  }
  else {
    *param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar4) = uVar5 == 1;
  *(undefined1 *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 10488d8ac; end: 10488db87;  */

void FUN_10488d8ac(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return;
  }
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  lVar1 = 8;
  if (8 < uVar3 + 1) {
    lVar1 = uVar3 + 1;
  }
  uVar6 = (uint)lVar1;
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar4 = (uint)bVar2;
  uVar8 = (uint)uVar3;
  if (bVar2 < 2) {
LAB_10488d964:
    if (uVar4 == 1) {
      bVar2 = *(byte *)((long)param_1 + uVar3);
      uVar4 = (uint)bVar2;
      if (1 < bVar2) {
        uVar5 = 4;
        if (uVar8 < 4) {
          uVar5 = uVar8;
        }
        if ((int)uVar5 < 2) {
          if (uVar5 == 0) goto LAB_10488d9e0;
          uVar5 = (uint)(byte)*param_1;
        }
        else if (uVar5 == 2) {
          uVar5 = (uint)(ushort)*param_1;
        }
        else if (uVar5 == 3) {
          uVar5 = (uint)(uint3)*param_1;
        }
        else {
          uVar5 = *param_1;
        }
        uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
        if (3 < uVar8) {
          uVar4 = uVar5;
        }
        uVar4 = uVar4 + 2;
      }
LAB_10488d9e0:
      if (uVar4 == 1) {
        _swift_errorRelease(*(undefined8 *)param_1);
      }
      else {
        (**(code **)(lVar9 + 8))(param_1,lVar7);
      }
    }
  }
  else {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if (1 < (int)uVar4) {
      if (uVar4 == 2) {
        uVar5 = (uint)(ushort)*param_1;
      }
      else if (uVar4 == 3) {
        uVar5 = (uint)(uint3)*param_1;
      }
      else {
        uVar5 = *param_1;
      }
LAB_10488d94c:
      uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar6 << 3 & 0x1f);
      if (3 < uVar6) {
        uVar4 = uVar5;
      }
      uVar4 = uVar4 + 2;
      goto LAB_10488d964;
    }
    if (uVar4 != 0) {
      uVar5 = (uint)(byte)*param_1;
      goto LAB_10488d94c;
    }
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10488da88;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar6 << 3 & 0x1f);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10488da88:
  if (uVar4 != 1) {
    if (uVar4 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10488db34;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar4 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar6;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10488db34:
  if (uVar4 != 1) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar7);
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  *(byte *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 10488db88; end: 10488dcbf;  */

int FUN_10488db88(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar3 = 8;
  if (8 < uVar6 + 1) {
    lVar3 = uVar6 + 1;
  }
  uVar1 = 0xfd;
  if ((uint)lVar3 < 4) {
    uVar1 = 0xfd - (2U >> (ulong)(((uint)lVar3 & 3) << 3));
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_10488dc58;
  uVar6 = lVar3 + 1;
  uVar7 = (uint)uVar6;
  uVar4 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - uVar1 >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10488dc58;
      goto LAB_10488dbe4;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_10488dbe4:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar4 = 4;
      if (uVar7 < 4) {
        uVar4 = uVar7;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar6 | uVar2) + 1;
  }
LAB_10488dc58:
  iVar5 = 0x100 - (uint)*(byte *)((long)param_1 + lVar3);
  if (uVar1 <= (*(byte *)((long)param_1 + lVar3) ^ 0xff)) {
    iVar5 = 0;
  }
  return iVar5;
}



/* Entry: 10488dcc0; end: 10488de8b;  */

void FUN_10488dcc0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined2 uVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  lVar4 = 8;
  if (8 < uVar7 + 1) {
    lVar4 = uVar7 + 1;
  }
  bVar8 = 2;
  uVar3 = 0xfd;
  if ((uint)lVar4 < 4) {
    uVar3 = 0xfd - (2U >> (ulong)(((uint)lVar4 & 3) << 3));
  }
  lVar2 = lVar4 + 1;
  uVar9 = (uint)lVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar9 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
    bVar6 = 1;
    if (uVar9 < 4) {
      bVar6 = bVar8;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + lVar4) = -(char)param_2;
    }
  }
  return;
}



/* Entry: 10488de8c; end: 10488df2f;  */

uint FUN_10488de8c(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar1 = 8;
  if (8 < uVar5 + 1) {
    lVar1 = uVar5 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar3 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = (uint)lVar1;
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar3;
      }
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
  return uVar3;
}



/* Entry: 10488df30; end: 10488e003;  */

void FUN_10488df30(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar2 = 8;
  if (8 < uVar4 + 1) {
    lVar2 = uVar4 + 1;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + lVar2) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar5 = (uint)lVar2;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + lVar2) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x02';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar3 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
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
      *(undefined1 *)((long)param_1 + lVar2) = 2;
      _bzero(param_1,lVar2);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 10488e004; end: 10488e033;  */

void FUN_10488e004(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10488cb6c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10488e034; end: 10488e05f;  */

void FUN_10488e034(undefined8 param_1)

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
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  uStack_60 = uVar3;
  uStack_58 = param_1;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  func_0x000100075034(&lStack_48,0x10488e01c,auStack_70,uVar3);
  if (lStack_48 != 0) {
    (**(code **)(lVar4 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar1);
    func_0x000103969044(auStack_80 + -extraout_x8,lStack_48,lVar1);
  }
  return;
}



/* Entry: 10488e060; end: 10488e11f;  */

void FUN_10488e060(void)

{
  undefined8 uVar1;
  long *plVar2;
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
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar4,&UNK_10e821f58,&UNK_10e821f60);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10488e120;
                    /* WARNING: Could not recover jumptable at 0x00010488e11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10396896c)
            (*(undefined8 *)(unaff_x22 + 0x38),&UNK_10dd3ce90,unaff_x22 + 0x10,FUN_10488e4bc,
             unaff_x22 + 0x40,0,0,uVar3);
  return;
}



/* Entry: 10488e120; end: 10488e15b;  */

void FUN_10488e120(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010488e158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488e15c; end: 10488e243;  */

void FUN_10488e15c(undefined8 param_1,undefined8 param_2,long param_3)

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
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e821f58,&UNK_10e821f60);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0;
  __ss6ResultOMa(0,uVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
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
  plVar6[1] = (long)FUN_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(plVar6,uVar5,param_2,param_3);
  return;
}



/* Entry: 10488e244; end: 10488e28b;  */

void FUN_10488e244(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488e28c,0,0);
  return;
}



/* Entry: 10488e28c; end: 10488e2ef;  */

/* WARNING: Removing unreachable block (ram,0x00010488e2c0) */

void FUN_10488e28c(void)

{
  long unaff_x22;
  
  func_0x0001031acf04(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                      unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010488e2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488e2f0; end: 10488e367;  */

void FUN_10488e2f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488e328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488e368; end: 10488e3d7;  */

void FUN_10488e368(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  
  plVar7 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10488e3d8;
  plVar7[3] = param_1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_4,param_3,&UNK_10e821f58,&UNK_10e821f60);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar4 = 0;
  __ss6ResultOMa(0,uVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
  plVar7[4] = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[5] = uVar5;
  piVar8 = *(int **)(param_4 + 0x10);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  plVar7[6] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar6,uVar5,param_3,param_4);
  return;
}



/* Entry: 10488e3d8; end: 10488e413;  */

void FUN_10488e3d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488e414; end: 10488e47f;  */

void FUN_10488e414(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar8 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10488e480;
  plVar7 = (long *)0x40;
  _swift_task_alloc(0x40,uVar10);
  plVar8[2] = (long)plVar7;
  *plVar7 = (long)plVar8;
  plVar7[1] = (long)FUN_10488e3d8;
  plVar7[3] = param_1;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar3,uVar2,&UNK_10e821f58,&UNK_10e821f60);
  uVar10 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar5 = 0;
  __ss6ResultOMa(0,uVar4,uVar10,PTR___ss5ErrorWS_11034ee10);
  plVar7[4] = lVar5;
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[5] = uVar6;
  piVar9 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  plVar7[6] = (long)plVar8;
  *plVar8 = (long)plVar7;
  plVar8[1] = (long)FUN_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(plVar8,uVar6,uVar2,lVar3);
  return;
}



/* Entry: 10488e480; end: 10488e4bb;  */

void FUN_10488e480(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488e4bc; end: 10488e4e3;  */

void FUN_10488e4bc(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x18))(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10488e4e4; end: 10488e53b;  */

void FUN_10488e4e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x10488e570;
  }
  else {
    pcVar1 = FUN_10488e53c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 10488e53c; end: 10488e5a3;  */

void FUN_10488e53c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010488e56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488e5a4; end: 10488e5d3;  */

void FUN_10488e5a4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10488e5d4; end: 10488e5e3;  */

void FUN_10488e5d4(undefined8 param_1)

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
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  uStack_60 = uVar3;
  uStack_58 = param_1;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  func_0x000100075034(&lStack_48,0x10488e01c,auStack_70,uVar3);
  if (lStack_48 != 0) {
    (**(code **)(lVar4 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar1);
    func_0x000103969044(auStack_80 + -extraout_x8,lStack_48,lVar1);
  }
  return;
}



/* Entry: 10488e5e4; end: 10488e633;  */

void FUN_10488e5e4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_10488c5e4();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10488e634; end: 10488e653;  */

void FUN_10488e634(void)

{
  FUN_10488e5e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10488e654; end: 10488e663;  */

void FUN_10488e654(void)

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
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar2 = 0xff;
  uStack_40 = uVar3;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  func_0x000100075034(&lStack_38,FUN_10488cea0,auStack_50,uVar3);
  if (lStack_38 != 0) {
    uVar3 = 0;
    __sScEMa();
    uVar2 = uVar3;
    func_0x000100f5abbc();
    _swift_allocError(uVar3,uVar2,0,0);
    __sS2cEycfC(uVar2);
    *puVar4 = uVar3;
    _swift_storeEnumTagMultiPayload(puVar4,lVar1,1);
    func_0x000103969044(puVar4,lStack_38,lVar1);
  }
  return;
}



/* Entry: 10488e664; end: 10488e6a3;  */

void FUN_10488e664(void)

{
  FUN_10488e5d4();
  return;
}



/* Entry: 10488e6a4; end: 10488e6f3;  */

void FUN_10488e6a4(void)

{
  FUN_10488f9fc();
  return;
}



/* Entry: 10488e6f4; end: 10488e70f;  */

void FUN_10488e6f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488e710,0,0);
  return;
}



/* Entry: 10488e710; end: 10488e7cf;  */

void FUN_10488e710(void)

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
  _swift_getAssociatedTypeWitness
            (0,uVar1,uVar5,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  uVar3 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar2);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar4 = (long *)(ulong)*(uint *)(
                                   PTR___sScisE6reduce4into_qd__qd__n_yqd__z_7ElementQztYaKXEtYaKlFTu_11034fec0
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  uVar5 = 0;
  __sSaMa(0,uVar2);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10488e7d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScisE6reduce4into_qd__qd__n_yqd__z_7ElementQztYaKXEtYaKlF_11034feb8)
            (unaff_x22 + 0x30,(undefined8 *)(unaff_x22 + 0x38),&UNK_10dd3cf38,unaff_x22 + 0x10,
             *(undefined8 *)(unaff_x22 + 0x40),uVar5,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 10488e7d0; end: 10488e82b;  */

void FUN_10488e7d0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10488e82c;
  }
  else {
    pcVar1 = (code *)0x10488e83c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10488e82c; end: 10488e847;  */

void FUN_10488e82c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010488e838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 10488e848; end: 10488e8bf;  */

void FUN_10488e848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488e8c0,0,0);
  return;
}



/* Entry: 10488e8c0; end: 10488e92f;  */

void FUN_10488e8c0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010488e92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488e930; end: 10488e997;  */

void FUN_10488e930(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10488e998;
  plVar5[2] = param_1;
  plVar5[3] = param_2;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,PTR___sSciTL_11034fea8,PTR___s7ElementSciTl_11034fb58);
  plVar5[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[5] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488e8c0,0,0);
  return;
}



/* Entry: 10488e998; end: 10488ea3b;  */

void FUN_10488e998(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010488e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10488ea3c; end: 10488eb1f;  */

/* WARNING: Removing unreachable block (ram,0x0001048936ac) */

void FUN_10488ea3c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___sSiN_11034deb0,uVar9,0,0);
  lVar2 = 0;
  __sSaMa(0,uVar9);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
  plVar3 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10488eb20;
  lVar7 = *(long *)(unaff_x22 + 200);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  plVar3[0x12] = lVar8;
  plVar3[0x13] = lVar7;
  plVar3[0x10] = lVar2;
  plVar3[0x11] = lVar6;
  plVar3[0xe] = unaff_x22 + 0x10;
  plVar3[0xf] = lVar1;
  plVar3[0xc] = 0;
  plVar3[0xd] = (long)&UNK_10dd3cf50;
  plVar3[10] = unaff_x22 + 0x68;
  plVar3[0xb] = 0;
  lVar7 = *(long *)(lVar6 + -8);
  plVar3[0x14] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4,lVar1,lVar2);
  plVar3[0x15] = uVar4;
  lVar1 = 0;
  __ss6ResultOMa(0,lVar2,lVar6,lVar8);
  plVar3[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x17] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x18] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x19] = uVar4;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1048936f8,0);
  return;
}



/* Entry: 10488eb20; end: 10488ebff;  */

void FUN_10488eb20(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd0));
  if (unaff_x20 == 0) {
    uVar1 = 0x10488eb78;
  }
  else {
    uVar1 = 0x10488ebb4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 10488ec00; end: 10488ee1f;  */

void FUN_10488ec00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
            (0,param_10,param_7,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
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
  puVar1 = PTR___sSiN_11034deb0;
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,PTR___sSiN_11034deb0,param_8,0,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488ee20,0,0);
  return;
}



/* Entry: 10488ee20; end: 10488f10f;  */

void FUN_10488ee20(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar8 = *(long *)(unaff_x22 + 0x138);
  lVar5 = *(long *)(unaff_x22 + 0x128);
  lVar16 = *(long *)(unaff_x22 + 0xe0);
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF
            (*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0xa0));
  __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(uVar11,uVar19);
  lVar14 = 0;
  while( true ) {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
    __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF
              (uVar19,*(undefined8 *)(unaff_x22 + 0x160));
    (**(code **)(lVar8 + 0x20))(uVar15,uVar19,uVar10);
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(uVar15,1,uVar11);
    if ((int)uVar15 == 1) {
      lVar5 = *(long *)(unaff_x22 + 0x118);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar8 = *(long *)(unaff_x22 + 0xb8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x98);
      puVar20 = *(undefined8 **)(unaff_x22 + 0x60);
      (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))
                (*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x160));
      pcVar13 = *(code **)(lVar8 + 0x38);
      *(code **)(unaff_x22 + 0x178) = pcVar13;
      (*pcVar13)(uVar11,1,1,uVar19);
      uVar19 = uVar11;
      FUN_10488f760(uVar11,lVar14,uVar6);
      (**(code **)(lVar5 + 8))(uVar11,uVar6);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar19;
      uVar11 = *puVar20;
      FUN_1048934a0(uVar11,uVar10,uVar15,uVar9);
      *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
      uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x98);
      plVar3 = (long *)0x40;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x188) = plVar3;
      lVar14 = 0;
      func_0x000104894e50(0,uVar19,uVar15,uVar11);
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10488f110;
      lVar5 = *(long *)(unaff_x22 + 0x108);
      plVar3[2] = *(long *)(unaff_x22 + 0xd0);
      lVar16 = *(long *)(lVar14 + 0x18);
      plVar3[3] = lVar16;
      lVar8 = *(long *)(lVar16 + -8);
      plVar3[4] = lVar8;
      uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar3[5] = uVar7;
      plVar4 = (long *)0x80;
      _swift_task_alloc();
      plVar3[6] = (long)plVar4;
      lVar8 = 0;
      func_0x000104894860(0,*(undefined8 *)(lVar14 + 0x10),lVar16,*(undefined8 *)(lVar14 + 0x20));
      *plVar4 = (long)plVar3;
      plVar4[1] = (long)FUN_104893558;
      plVar4[4] = 0;
      plVar4[5] = uVar7;
      plVar4[2] = lVar5;
      plVar4[3] = 0;
      lVar16 = *(long *)(lVar8 + 0x18);
      plVar4[6] = lVar16;
      lVar14 = *(long *)(lVar16 + -8);
      plVar4[7] = lVar14;
      uVar7 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar4[8] = uVar7;
      lVar5 = *(long *)(lVar8 + 0x10);
      plVar4[9] = lVar5;
      lVar14 = 0xff;
      __ss6ResultOMa(0xff,lVar5,lVar16,*(undefined8 *)(lVar8 + 0x20));
      plVar4[10] = lVar14;
      lVar5 = 0;
      __sSqMa(0,lVar14);
      plVar4[0xb] = lVar5;
      lVar5 = *(long *)(lVar5 + -8);
      plVar4[0xc] = lVar5;
      uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar4[0xd] = uVar7;
      puVar20 = (undefined8 *)0x20;
      _swift_task_alloc();
      plVar4[0xe] = (long)puVar20;
      uVar19 = 0;
      __sScGMa(0,lVar14);
      *puVar20 = plVar4;
      puVar20[1] = FUN_1048942f8;
                    /* WARNING: Could not recover jumptable at 0x0001048942f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_10489445c(uVar7,0,0,uVar19);
      return;
    }
    uVar19 = **(undefined8 **)(unaff_x22 + 0x148);
    pcVar13 = *(code **)(lVar16 + 0x20);
    (*pcVar13)(*(undefined8 *)(unaff_x22 + 0xf8),
               (long)*(undefined8 **)(unaff_x22 + 0x148) + (long)*(int *)(lVar5 + 0x30),
               *(undefined8 *)(unaff_x22 + 0xd8));
    if (SCARRY8(lVar14,1)) break;
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar1 = *(long *)(unaff_x22 + 0xe8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
    (**(code **)(lVar16 + 0x10))(uVar10,uVar11,uVar17);
    uVar7 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar12 = uVar7 + 0x60 & (uVar7 ^ 0xffffffffffffffff);
    puVar2 = &UNK_1107ac9a8;
    _swift_allocObject(&UNK_1107ac9a8,uVar12 + lVar1,uVar7 | 7);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x28) = uVar26;
    *(undefined8 *)(puVar2 + 0x20) = uVar25;
    *(undefined8 *)(puVar2 + 0x38) = uVar23;
    *(undefined8 *)(puVar2 + 0x30) = uVar21;
    *(undefined8 *)(puVar2 + 0x40) = uVar18;
    *(undefined8 *)(puVar2 + 0x48) = uVar19;
    *(undefined8 *)(puVar2 + 0x58) = uVar24;
    *(undefined8 *)(puVar2 + 0x50) = uVar22;
    (*pcVar13)(puVar2 + uVar12,uVar10,uVar17);
    uVar19 = 0;
    func_0x000104894860(0,uVar15,uVar21,uVar18);
    _swift_retain(uVar9);
    FUN_104893410(uVar6,&UNK_10dd3cf60,puVar2,uVar19);
    (**(code **)(lVar16 + 8))(uVar11,uVar17);
    lVar14 = lVar14 + 1;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10488f110);
  (*pcVar13)();
}



/* Entry: 10488f110; end: 10488f167;  */

void FUN_10488f110(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x188));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10488f168;
  }
  else {
    pcVar1 = FUN_10488f40c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10488f168; end: 10488f40b;  */

void FUN_10488f168(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 *puVar23;
  
  lVar5 = *(long *)(unaff_x22 + 0x100);
  plVar4 = *(long **)(unaff_x22 + 0x108);
  plVar8 = plVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(plVar4,1,lVar5);
  if ((int)plVar8 == 1) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar23 = *(undefined8 **)(unaff_x22 + 0x58);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = 0;
    __sSaMa(0,*(undefined8 *)(unaff_x22 + 0x110));
    puVar3 = PTR___sSayxGSTsMc_11034dd08;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar2);
    pcVar22 = FUN_10488f868;
    __sSTsE10compactMapySayqd__Gqd__Sg7ElementQzKXEKlF
              (FUN_10488f868,unaff_x22 + 0x10,uVar2,uVar16,puVar3);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x48));
    *puVar23 = pcVar22;
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(plVar4);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010488f2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  pcVar22 = *(code **)(unaff_x22 + 0x178);
  lVar6 = *(long *)(unaff_x22 + 0x118);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar11 = *(long *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar17 = *plVar4;
  (**(code **)(lVar11 + 0x20))(uVar15,(long)plVar4 + (long)*(int *)(lVar5 + 0x30),uVar18);
  (**(code **)(lVar11 + 0x10))(uVar13,uVar15,uVar18);
  (*pcVar22)(uVar13,0,1,uVar18);
  __sSaMa(0,uVar21);
  __sSa21_makeMutableAndUniqueyyF();
  lVar14 = *(long *)(unaff_x22 + 0x48);
  func_0x0001020fc0b4(lVar17,lVar14,uVar21);
  lVar5 = lVar14;
  __ss12_ArrayBufferV7_natives011_ContiguousaB0VyxGvg(lVar14,uVar21);
  bVar1 = *(byte *)(lVar6 + 0x50);
  _swift_release();
  (**(code **)(lVar6 + 0x28))
            (lVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
             *(long *)(lVar6 + 0x48) * lVar17,uVar13,uVar21);
  (**(code **)(lVar11 + 8))(uVar15,uVar18);
  *(long *)(unaff_x22 + 0x180) = lVar14;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
  plVar4 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x188) = plVar4;
  lVar5 = 0;
  func_0x000104894e50(0,uVar15,uVar18,uVar13);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10488f110;
  lVar6 = *(long *)(unaff_x22 + 0x108);
  plVar4[2] = *(long *)(unaff_x22 + 0xd0);
  lVar14 = *(long *)(lVar5 + 0x18);
  plVar4[3] = lVar14;
  lVar11 = *(long *)(lVar14 + -8);
  plVar4[4] = lVar11;
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[5] = uVar7;
  plVar8 = (long *)0x80;
  _swift_task_alloc();
  plVar4[6] = (long)plVar8;
  lVar11 = 0;
  func_0x000104894860(0,*(undefined8 *)(lVar5 + 0x10),lVar14,*(undefined8 *)(lVar5 + 0x20));
  *plVar8 = (long)plVar4;
  plVar8[1] = (long)FUN_104893558;
  plVar8[4] = 0;
  plVar8[5] = uVar7;
  plVar8[2] = lVar6;
  plVar8[3] = 0;
  lVar14 = *(long *)(lVar11 + 0x18);
  plVar8[6] = lVar14;
  lVar5 = *(long *)(lVar14 + -8);
  plVar8[7] = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[8] = uVar7;
  lVar6 = *(long *)(lVar11 + 0x10);
  plVar8[9] = lVar6;
  lVar5 = 0xff;
  __ss6ResultOMa(0xff,lVar6,lVar14,*(undefined8 *)(lVar11 + 0x20));
  plVar8[10] = lVar5;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  plVar8[0xb] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar8[0xc] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xd] = uVar7;
  puVar23 = (undefined8 *)0x20;
  _swift_task_alloc();
  plVar8[0xe] = (long)puVar23;
  uVar13 = 0;
  __sScGMa(0,lVar5);
  *puVar23 = plVar8;
  puVar23[1] = FUN_1048942f8;
                    /* WARNING: Could not recover jumptable at 0x0001048942f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10489445c(uVar7,0,0,uVar13);
  return;
}



/* Entry: 10488f40c; end: 10488f4f3;  */

void FUN_10488f40c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010488f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10488f4f4; end: 10488f5af;  */

void FUN_10488f4f4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar13 = *(long *)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  plVar7 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10488f9f8;
  plVar7[0x15] = lVar8;
  plVar7[0x16] = param_3;
  plVar7[0x13] = lVar12;
  plVar7[0x14] = lVar13;
  plVar7[0x11] = lVar10;
  plVar7[0x12] = lVar1;
  plVar7[0xf] = lVar2;
  plVar7[0x10] = lVar11;
  plVar7[0xd] = lVar6;
  plVar7[0xe] = lVar9;
  plVar7[0xb] = param_1;
  plVar7[0xc] = param_2;
  lVar8 = *(long *)(lVar1 + -8);
  plVar7[0x17] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x18] = uVar4;
  lVar8 = *(long *)(lVar12 + -8);
  plVar7[0x19] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x1a] = uVar4;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar13,lVar10,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  plVar7[0x1b] = lVar8;
  lVar9 = *(long *)(lVar8 + -8);
  plVar7[0x1c] = lVar9;
  lVar9 = *(long *)(lVar9 + 0x40);
  plVar7[0x1d] = lVar9;
  uVar4 = lVar9 + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x1e] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x1f] = uVar4;
  puVar3 = PTR___sSiN_11034deb0;
  lVar9 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,PTR___sSiN_11034deb0,lVar1,0,0);
  plVar7[0x20] = lVar9;
  lVar6 = 0;
  __sSqMa(0,lVar9);
  uVar4 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x21] = uVar4;
  lVar9 = 0;
  __sSqMa(0,lVar1);
  plVar7[0x22] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar7[0x23] = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x24] = uVar4;
  lVar9 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar3,lVar8,"offset element ",0);
  plVar7[0x25] = lVar9;
  lVar8 = 0;
  __sSqMa(0,lVar9);
  plVar7[0x26] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar7[0x27] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x28] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x29] = uVar4;
  lVar8 = 0;
  __ss18EnumeratedSequenceVMa(0,lVar10,lVar13);
  plVar7[0x2a] = lVar8;
  uVar4 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x2b] = uVar4;
  lVar8 = 0;
  __ss18EnumeratedSequenceV8IteratorVMa(0,lVar10,lVar13);
  plVar7[0x2c] = lVar8;
  lVar10 = *(long *)(lVar8 + -8);
  plVar7[0x2d] = lVar10;
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x2e] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488ee20,0,0);
  return;
}



/* Entry: 10488f5b0; end: 10488f617;  */

void FUN_10488f5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10488f618,0,0);
  return;
}



/* Entry: 10488f618; end: 10488f6af;  */

void FUN_10488f618(void)

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
  _swift_getTupleTypeMetadata2(0,PTR___sSiN_11034deb0,*(undefined8 *)(unaff_x22 + 0x38),0,0);
  iVar4 = *(int *)(lVar5 + 0x30);
  *puVar7 = uVar2;
  iVar1 = *piVar3;
  plVar6 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10488f6b0;
                    /* WARNING: Could not recover jumptable at 0x00010488f6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar6,(long)puVar7 + (long)iVar4,*(undefined8 *)(unaff_x22 + 0x30),
             *(undefined8 *)(unaff_x22 + 0x58));
  return;
}


