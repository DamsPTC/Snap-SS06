/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e931f4; end: 102e93227;  */

void FUN_102e931f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e93228; end: 102e9327f; -[SCMemoriesPreviewSaveDismissServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e93228(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f248b8);
  func_0x000107c61610(param_1 + _DAT_112f248c0);
  func_0x000107c61610(param_1 + _DAT_112f248c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f248d0));
  return;
}



/* Entry: 102e93280; end: 102e932e3;  */

void FUN_102e93280(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa490);
  return;
}



/* Entry: 102e932e4; end: 102e932ff;  */

void FUN_102e932e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e93300,0,0);
  return;
}



/* Entry: 102e93300; end: 102e93377;  */

/* WARNING: Removing unreachable block (ram,0x000102e93324) */

void FUN_102e93300(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e93378;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 102e93378; end: 102e933bf;  */

void FUN_102e93378(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e933c0,0,0);
  return;
}



/* Entry: 102e933c0; end: 102e9344b;  */

void FUN_102e933c0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x38) + 0x10);
  uVar1 = 0;
  func_0x000102e935d8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102e9344c;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102e9344c; end: 102e934a3;  */

void FUN_102e9344c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102e934a4;
  }
  else {
    pcVar1 = FUN_102e9358c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102e934a4; end: 102e9358b;  */

void FUN_102e934a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar2 = PTR_PTR_1126af4d0;
  func_0x000107c61168();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c430f4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102e93538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar2);
    return;
  }
  func_0x000102e9361c();
  func_0x000107c613f8(&UNK_1105e13f8,uVar3,0,0);
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102e93588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e9358c; end: 102e9365b;  */

void FUN_102e9358c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102e935d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e9365c; end: 102e9374b;  */

uint FUN_102e9365c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102e9374c; end: 102e9378b;  */

void FUN_102e9374c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f249a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5f518;
  func_0x000107c61520(&UNK_10db5f518,&UNK_1105e13f8);
  puRam0000000112f249a8 = puVar1;
  return;
}



/* Entry: 102e9378c; end: 102e93793;  */

undefined8 FUN_102e9378c(void)

{
  return 1;
}



/* Entry: 102e93794; end: 102e93833;  */

void FUN_102e93794(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e93834; end: 102e93843;  */

void FUN_102e93834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e93844; end: 102e93a6b;  */

long FUN_102e93844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1105e1478;
  func_0x000107c613fc(&UNK_1105e1478,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112f249b0,&UNK_10db5f580);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  pcVar2 = FUN_102e93b60;
  func_0x0001000bdd8c(FUN_102e93b60,puVar1);
  uVar3 = 0;
  func_0x000100326c20(0);
  func_0x000107c610f8();
  func_0x000102ed3558(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 102e93a6c; end: 102e93b5f;  */

/* WARNING: Possible PIC construction at 0x000102e93b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e93b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e93a6c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = &UNK_1105e14c8;
  func_0x000107c613fc(&UNK_1105e14c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112f24a88,&UNK_10db5f5c8);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  uVar2 = 0x102e93cec;
  func_0x0001000bdd8c(0x102e93cec,puVar1);
  uVar6 = *(undefined8 *)(param_3 + _DAT_112ff4ca0);
  uVar5 = *(undefined8 *)(param_4 + _DAT_11303ea70);
  lVar3 = 0;
  func_0x000102e93d2c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x18) = uVar6;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1105e14f8;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar6);
  return;
}



/* Entry: 102e93b60; end: 102e93b6b;  */

/* WARNING: Possible PIC construction at 0x000102e93b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e93b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e93b60(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  puVar1 = &UNK_1105e14c8;
  func_0x000107c613fc(&UNK_1105e14c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x0001000285a8(0x112f24a88,&UNK_10db5f5c8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  uVar2 = 0x102e93cec;
  func_0x0001000bdd8c(0x102e93cec,puVar1);
  uVar6 = *(undefined8 *)(lVar3 + _DAT_112ff4ca0);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_11303ea70);
  lVar4 = 0;
  func_0x000102e93d2c();
  lVar3 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_1105e14f8;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar6);
  return;
}



/* Entry: 102e93b6c; end: 102e93bfb;  */

void FUN_102e93b6c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  lVar2 = 0;
  func_0x000102e932c4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105e1358;
  *param_1 = lVar3;
  return;
}



/* Entry: 102e93bfc; end: 102e93c2f;  */

void FUN_102e93bfc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e93c30; end: 102e93c3f;  */

void FUN_102e93c30(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e93c40; end: 102e93cdf;  */

void FUN_102e93c40(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e93ce0; end: 102e93cf7;  */

void FUN_102e93ce0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102e93cf8; end: 102e93d4b;  */

void FUN_102e93cf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e93d4c; end: 102e93d6b;  */

void FUN_102e93d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e93d6c,0,0);
  return;
}



/* Entry: 102e93d6c; end: 102e93e53;  */

void FUN_102e93d6c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xa8) == '\x01') {
    plVar5 = *(long **)(*(long *)(unaff_x22 + 0x70) + 0x18);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x102e93e0c;
    plVar1[5] = unaff_x22 + 0x10;
    plVar1[6] = (long)plVar5;
    lVar6 = *(long *)(*plVar5 + 0x50);
    plVar1[7] = lVar6;
    lVar2 = 0;
    __sSqMa(0,lVar6);
    plVar1[8] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    plVar1[9] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar3;
    lVar2 = *(long *)(lVar6 + -8);
    plVar1[0xb] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar3;
    pcVar4 = (code *)&UNK_104875f90;
  }
  else {
    plVar1 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102e94094;
    lVar6 = *(long *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    plVar1[10] = *(long *)(unaff_x22 + 0x60);
    plVar1[0xb] = lVar6;
    plVar1[9] = lVar2;
    pcVar4 = FUN_102e942b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 102e93e54; end: 102e93ee7;  */

void FUN_102e93e54(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar1 + 8))(0x7ff0000000000000,uVar2,lVar1);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102e93ee8;
                    /* WARNING: Could not recover jumptable at 0x000102e93ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 102e93ee8; end: 102e93f3b;  */

void FUN_102e93ee8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  *(long **)(lVar1 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0xa9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e93f3c,0,0);
  return;
}



/* Entry: 102e93f3c; end: 102e9402f;  */

void FUN_102e93f3c(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xa9) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x40);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x50,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102e93ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c5fd64();
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102e94030;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 102e94030; end: 102e94093;  */

void FUN_102e94030(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x98) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_102e94094;
  lVar4 = *(long *)(lVar2 + 0x70);
  lVar3 = *(long *)(lVar2 + 0x58);
  plVar1[10] = *(long *)(lVar2 + 0x60);
  plVar1[0xb] = lVar4;
  plVar1[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e942b0,0,0);
  return;
}



/* Entry: 102e94094; end: 102e940ff;  */

void FUN_102e94094(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xa0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102e940dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))(0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e94100,0,0);
  return;
}



/* Entry: 102e94100; end: 102e94293;  */

void FUN_102e94100(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  if (lVar4 == 0) {
    uVar7 = 0;
    goto LAB_102e94270;
  }
  lVar1 = lVar4;
  func_0x000107c4050c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    uVar3 = 0xf000000000000000;
    uVar6 = param_2;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5ee30();
    uVar6 = param_2;
    func_0x000107c61170(lVar1);
    uVar3 = param_2;
  }
  lVar1 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c4050c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (uVar3 >> 0x3c < 0xf) {
      lVar5 = 0;
      uVar6 = 0xf000000000000000;
LAB_102e94244:
      func_0x000107c61170(lVar4);
      goto LAB_102e9424c;
    }
    func_0x000107c61170(lVar4);
LAB_102e941c8:
    uVar7 = 1;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
    if (uVar3 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_102e94244;
      func_0x000100de78a0(lVar2,uVar3);
      func_0x000100de78a0(lVar5,uVar6);
      lVar1 = lVar2;
      func_0x000100e25fcc(lVar2,uVar3,lVar5,uVar6);
      uVar7 = (uint)lVar1;
      func_0x0001000b44c0(lVar5,uVar6);
      func_0x0001000b44c0(lVar2,uVar3);
      func_0x000107c61170(lVar4);
      func_0x0001000b44c0(lVar5,uVar6);
    }
    else {
      func_0x000107c61170(lVar4);
      if (0xe < uVar6 >> 0x3c) goto LAB_102e941c8;
LAB_102e9424c:
      func_0x0001000b44c0(lVar2,uVar3);
      uVar7 = 0;
      lVar2 = lVar5;
      uVar3 = uVar6;
    }
  }
  func_0x0001000b44c0(lVar2,uVar3);
LAB_102e94270:
                    /* WARNING: Could not recover jumptable at 0x000102e94290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7 & 1);
  return;
}



/* Entry: 102e94294; end: 102e942af;  */

void FUN_102e94294(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e942b0,0,0);
  return;
}



/* Entry: 102e942b0; end: 102e943ab;  */

void FUN_102e942b0(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x58) + 0x10);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e94308;
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



/* Entry: 102e943ac; end: 102e94417;  */

void FUN_102e943ac(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    pcVar1 = FUN_102e94418;
  }
  else {
    pcVar1 = FUN_102e944e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102e94418; end: 102e944e3;  */

void FUN_102e94418(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  lVar2 = lVar4;
  func_0x000107c5b1b0();
  func_0x000107c61180();
  func_0x000107c615e8(lVar4);
  if (lVar2 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x58);
    lVar4 = lVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
    *(long *)(unaff_x22 + 0x80) = lVar4;
    *(undefined8 *)(unaff_x22 + 0x88) = param_2;
    func_0x0001000834e4(unaff_x22 + 0x10);
    plVar5 = *(long **)(lVar6 + 0x20);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x102e94518;
    plVar1[5] = unaff_x22 + 0x38;
    plVar1[6] = (long)plVar5;
    lVar4 = *(long *)(*plVar5 + 0x50);
    plVar1[7] = lVar4;
    lVar2 = 0;
    __sSqMa(0,lVar4);
    plVar1[8] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    plVar1[9] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar3;
    lVar2 = *(long *)(lVar4 + -8);
    plVar1[0xb] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102e944e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102e944e4; end: 102e9455f;  */

void FUN_102e944e4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102e94514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e94560; end: 102e9467f;  */

void FUN_102e94560(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar7 = *(long *)(unaff_x22 + 0x40);
  uVar1 = uVar6;
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar7 + 8))(uVar2,uVar5,1,uVar1,lVar7);
  func_0x000107c615e8(uVar6);
  if (((uint)uVar5 & 0xff) == 1) {
    *(char *)(unaff_x22 + 0x98) = (char)uVar2;
    puVar3 = (undefined1 *)0x2;
    func_0x000100029b9c(2,0x12,0,0);
    puVar4 = puVar3;
    if ((int)puVar3 != 0) {
      func_0x000101d58f10();
      puVar4 = (undefined1 *)(unaff_x22 + 0x98);
      func_0x000107c61658(puVar4,&UNK_11072c980,puVar3);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000101d58f10();
    func_0x000107c613f8(&UNK_11072c980,puVar4,0,0);
    *puVar4 = (char)uVar2;
    func_0x00010006c090(uVar5,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102e94650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000102e9467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102e94680; end: 102e946f7;  */

void FUN_102e94680(long param_1,long param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e946f8;
  *(undefined1 *)(plVar1 + 0x15) = param_4;
  plVar1[0xd] = param_3;
  plVar1[0xe] = lVar2;
  plVar1[0xb] = param_1;
  plVar1[0xc] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e93d6c,0,0);
  return;
}



/* Entry: 102e946f8; end: 102e94747;  */

void FUN_102e946f8(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102e94744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102e94748; end: 102e94787;  */

void FUN_102e94748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e94788,0,0);
  return;
}



/* Entry: 102e94788; end: 102e94797;  */

void FUN_102e94788(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102e94794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102e94798; end: 102e94b1f;  */

void FUN_102e94798(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010033ed24();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112f24b48,&UNK_10db5f658);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x0001003b3b80();
  puVar4 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x18) = puVar4;
  puVar4 = PTR_PTR_1126ac730;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar4;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar4);
  uVar6 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f087670);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f087e70);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 102e94b20; end: 102e94b2f;  */

void FUN_102e94b20(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010033ed24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112f24b48,&UNK_10db5f658);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x0001003b3b80();
  puVar5 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x18) = puVar5;
  puVar5 = PTR_PTR_1126ac730;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar5);
  uVar7 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f087670);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar9 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f087e70);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(lVar1 + 0x38) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 102e94b30; end: 102e94e5b;  */

long FUN_102e94b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112f24b48,&UNK_10db5f658);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar3 = param_5;
  func_0x000107c6157c(param_5);
  func_0x0001003b3b80();
  puVar1 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126ac730;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar3 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f087670);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f087e70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  return unaff_x20;
}



/* Entry: 102e94e5c; end: 102e94ea7;  */

void FUN_102e94e5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e94ea8; end: 102e94efb;  */

void FUN_102e94ea8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e94efc; end: 102e94f03;  */

void FUN_102e94efc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e94f04; end: 102e94f53;  */

undefined8 FUN_102e94f04(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e94f54; end: 102e94f97;  */

undefined1  [16] FUN_102e94f54(void)

{
  return ZEXT816(0x1105e1600);
}



/* Entry: 102e94f98; end: 102e94fbf;  */

void FUN_102e94f98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e94fc0; end: 102e94fc7;  */

undefined8 FUN_102e94fc0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e94fc8; end: 102e953cf;  */

void FUN_102e94fc8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100375658();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_70;
  func_0x0001000285a8(0x112f20858,&UNK_10db59558);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar7 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x0001003b3b80();
  puVar2 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar2;
  func_0x0001000285a8(0x112f24c50,&UNK_10db5f840);
  func_0x000107c610f8();
  uVar7 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x20) = puVar3;
  func_0x0001000285a8(0x112f24c58,&UNK_10db5f848);
  func_0x000107c610f8();
  uVar7 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126ac738;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  uVar7 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f03ed30);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0522b0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f112b20);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f112b40);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar2 = puVar5;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uStack_78);
  func_0x000107c61574(uStack_80);
  func_0x000107c61574(uStack_88);
  *(undefined **)(param_2 + 0x38) = puVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 102e953d0; end: 102e953df;  */

void FUN_102e953d0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100375658();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x30) = uStack_70;
  func_0x0001000285a8(0x112f20858,&UNK_10db59558);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar8 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x0001003b3b80();
  puVar3 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x18) = puVar3;
  func_0x0001000285a8(0x112f24c50,&UNK_10db5f840);
  func_0x000107c610f8();
  uVar8 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x20) = puVar4;
  func_0x0001000285a8(0x112f24c58,&UNK_10db5f848);
  func_0x000107c610f8();
  uVar8 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x28) = puVar5;
  puVar6 = PTR_PTR_1126ac738;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f03ed30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0522b0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f112b20);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f112b40);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar3 = puVar6;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_78);
  func_0x000107c61574(uStack_80);
  func_0x000107c61574(uStack_88);
  *(undefined **)(lVar1 + 0x38) = puVar3;
  *param_1 = lVar1;
  return;
}



/* Entry: 102e953e0; end: 102e9578f;  */

long FUN_102e953e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  func_0x0001000285a8(0x112f20858,&UNK_10db59558);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar5 = param_3;
  func_0x000107c6157c(param_3);
  func_0x0001003b3b80();
  puVar1 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112f24c50,&UNK_10db5f840);
  func_0x000107c610f8();
  uVar5 = param_4;
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x0001000285a8(0x112f24c58,&UNK_10db5f848);
  func_0x000107c610f8();
  uVar5 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  puVar4 = PTR_PTR_1126ac738;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar5 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f03ed30);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0522b0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f112b20);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar5 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f112b40);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  puVar1 = puVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  return unaff_x20;
}



/* Entry: 102e95790; end: 102e957db;  */

void FUN_102e95790(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e957dc; end: 102e9582f;  */

void FUN_102e957dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e95830; end: 102e95837;  */

void FUN_102e95830(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e95838; end: 102e95887;  */

undefined8 FUN_102e95838(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e95888; end: 102e958cb;  */

undefined1  [16] FUN_102e95888(void)

{
  return ZEXT816(0x1105e16c8);
}



/* Entry: 102e958cc; end: 102e958f3;  */

void FUN_102e958cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e958f4; end: 102e9593f;  */

undefined8 FUN_102e958f4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e95940; end: 102e959c3;  */

undefined8
FUN_102e95940(long param_1,uint param_2,ulong param_3,long param_4,long param_5,uint param_6,
             ulong param_7,long param_8)

{
  if ((param_1 == param_5) && (((param_2 ^ param_6) & 0x101) == 0)) {
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      if ((param_3 == param_7) && (param_4 == param_8)) {
        return 1;
      }
      func_0x000107c605b8(param_3,param_4,param_7,param_8,0);
      if ((param_3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 102e959c4; end: 102e959ef;  */

long FUN_102e959c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102e959f0; end: 102e959f7;  */

void FUN_102e959f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 102e959f8; end: 102e95ad3;  */

undefined8 * FUN_102e959f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102e95ad4; end: 102e95bd3;  */

int FUN_102e95ad4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102e95bd4; end: 102e95c13;  */

void FUN_102e95bd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f24d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5faa0;
  func_0x000107c61520(&UNK_10db5faa0,&UNK_1105e1890);
  puRam0000000112f24d58 = puVar1;
  return;
}



/* Entry: 102e95c14; end: 102e95cbf;  */

void FUN_102e95c14(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e95cc0; end: 102e95ccf;  */

undefined1  [16] FUN_102e95cc0(void)

{
  return ZEXT816(0x1105e1890);
}



/* Entry: 102e95cd0; end: 102e95d13;  */

uint FUN_102e95cd0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_102e95d14(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102e95d14; end: 102e95eab;  */

uint FUN_102e95d14(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar15 = *param_1;
  uVar8 = *(ushort *)((long)param_1 + 0x16) >> 0xe;
  if (uVar8 == 0) {
    if ((*(byte *)((long)param_2 + 0x17) & 0xc0) == 0) {
      uVar16 = param_1[1];
      uVar11 = param_1[3];
      uVar2 = param_1[4];
      uVar13 = param_1[5];
      bVar5 = *(byte *)((long)param_1 + 0x11);
      uVar9 = param_1[2];
      bVar6 = *(byte *)(param_2 + 2);
      uVar1 = param_2[3];
      uVar3 = param_2[4];
      lVar12 = param_2[5];
      bVar7 = *(byte *)((long)param_2 + 0x11);
      lVar14 = *param_2;
      uVar4 = param_2[1];
      uVar10 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(uVar15,lVar14,uVar10);
      if ((uVar15 & 1) != 0) {
        if (uVar16 != uVar4) {
          return 0;
        }
        if ((((byte)uVar9 ^ bVar6) & 1) != 0) {
          return 0;
        }
        if (((bVar5 ^ bVar7) & 1) != 0) {
          return 0;
        }
        if (uVar2 == 0) {
          if (uVar3 == 0) goto LAB_102e95e9c;
        }
        else if ((uVar3 != 0) &&
                (((uVar11 == uVar1 && (uVar2 == uVar3)) ||
                 (func_0x000107c605b8(uVar11,uVar2,uVar1,uVar3,0), (uVar11 & 1) != 0)))) {
LAB_102e95e9c:
          return (uint)((int)uVar13 == (int)lVar12);
        }
      }
    }
  }
  else if (uVar8 == 1) {
    if ((ulong)param_2[2] >> 0x3e == 1) {
      lVar14 = *param_2;
      uVar10 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(uVar15,lVar14,uVar10);
      return (uint)uVar15 & 1;
    }
  }
  else if (((param_2[2] < -0x4000000000000000) && (param_2[2] == -0x8000000000000000)) &&
          (((param_2[4] == 0 && param_2[5] == 0) && (param_2[3] == 0 && param_2[1] == 0)) &&
           *param_2 == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 102e95eac; end: 102e95ed7;  */

long FUN_102e95eac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102e95ed8; end: 102e95eeb;  */

/* WARNING: Possible PIC construction at 0x00010120dd30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010120dd34) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102e95ed8(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1[2] >> 0x3e);
  if ((uVar1 != 1) && (uVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)
            (*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



/* Entry: 102e95eec; end: 102e95fd3;  */

undefined8 * FUN_102e95eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  func_0x00010120ddbc(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 102e95fd4; end: 102e9601b;  */

undefined8 * FUN_102e95fd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  func_0x00010120dd10(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 102e9601c; end: 102e96147;  */

int FUN_102e9601c(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 2) & 0xffffff80 |
          (uint)*(ulong *)(param_1 + 4) >> 1 & 0x7f;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 102e96148; end: 102e9618f; -[SCAddSoundPillScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e96148(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24d60;
  func_0x000107c61428(param_1 + _DAT_112f24d60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e96190; end: 102e961e7; -[SCAddSoundPillScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e96190(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f24d60;
  func_0x000107c61428(param_1 + _DAT_112f24d60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e961e8; end: 102e96207; -[SCAddSoundPillScope viewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e961e8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f24d68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e96208; end: 102e96217; -[SCAddSoundPillScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e96208(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f24d90);
}



/* Entry: 102e96218; end: 102e9679f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102e96218(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f24d60;
  func_0x000107c61614(unaff_x20 + _DAT_112f24d60,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112f24d68) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f24d70) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f24d78) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f24d80) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f24d88) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f24d90) = param_7;
  puVar2 = auStack_88;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 102e967a0; end: 102e968db;  */

void FUN_102e967a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  uVar6 = *param_2;
  puVar2 = &UNK_1105e19a8;
  func_0x000107c613fc(&UNK_1105e19a8,0x18,7);
  puVar5 = (undefined8 *)(puVar2 + 0x10);
  *puVar5 = 0;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102e968dc;
  puStack_68 = (undefined *)0x0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_100b61264;
  puStack_78 = &UNK_1105e19c0;
  func_0x000107c60bc4(&puStack_90);
  pcStack_70 = (code *)0x102e96c80;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102e9692c;
  puStack_78 = &UNK_1105e19e8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6bc(uVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61428(puVar5,&puStack_90,0,0);
  *param_1 = *puVar5;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102e968dc; end: 102e968df;  */

void FUN_102e968dc(void)

{
  return;
}



/* Entry: 102e968e0; end: 102e9692b;  */

void FUN_102e968e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 102e9692c; end: 102e96977;  */

void FUN_102e9692c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e96978; end: 102e96adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e96978(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x3fffffefe;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    if (*(char *)(lVar2 + _DAT_112f24dc8) == '\0') {
      uVar8 = 0x8000000000000000;
      lVar4 = 0;
      lVar5 = 0;
      lVar6 = 0;
      lVar7 = 0;
      lVar2 = 0;
    }
    else {
      if (*(char *)(lVar2 + _DAT_112f24dc8) == '\x01') {
        lVar4 = *(long *)(lVar2 + _DAT_112f24dd0);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e96ad4);
          (*pcVar1)();
        }
        lVar3 = *(long *)(lVar2 + _DAT_112f24dd8);
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e96adc);
          (*pcVar1)();
        }
        if ((char)((long *)(lVar2 + _DAT_112f24de0))[1] == '\x01') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e96ae0);
          (*pcVar1)();
        }
        lVar7 = *(long *)(lVar2 + _DAT_112f24de0);
        lVar6 = *(long *)(lVar3 + _DAT_112f24e20);
        lVar2 = *(long *)(lVar3 + _DAT_112f24e38);
        lVar5 = ((long *)(lVar3 + _DAT_112f24e38))[1];
        uVar8 = 0x100;
        if (*(char *)(lVar3 + _DAT_112f24e30) == '\0') {
          uVar8 = 0;
        }
        uVar8 = uVar8 | *(byte *)(lVar3 + _DAT_112f24e28);
        func_0x000107c61434(lVar5);
      }
      else {
        lVar4 = *(long *)(lVar2 + _DAT_112f24de8);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e96ad8);
          (*pcVar1)();
        }
        lVar6 = 0;
        lVar2 = 0;
        lVar5 = 0;
        lVar7 = 0;
        uVar8 = 0x4000000000000000;
      }
      func_0x000107c61174(lVar4);
    }
    *param_1 = lVar4;
    param_1[1] = lVar6;
    param_1[2] = uVar8;
    param_1[3] = lVar2;
    param_1[4] = lVar5;
    param_1[5] = lVar7;
  }
  return;
}



/* Entry: 102e96ae0; end: 102e96b77; -[SCAddSoundPillScope initWithDelegate:viewContainer:pillStateObservable:isCollapsedObservable:isHiddenObservable:sourcePageType:] */

void FUN_102e96ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000102e96428(param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 102e96b78; end: 102e96bd7; -[SCAddSoundPillScope init] */

void FUN_102e96b78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAddSoundPillScope.SCAddSoundPillScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e96ba4);
  (*pcVar1)();
}



/* Entry: 102e96bd8; end: 102e96c63; -[SCAddSoundPillScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e96c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e96c18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e96bd8(long param_1)

{
  func_0x000102e96c40(param_1 + _DAT_112f24d60);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f24d68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f24d78));
  return;
}



/* Entry: 102e96c64; end: 102e96ca3;  */

void FUN_102e96c64(long param_1,long param_2)

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



/* Entry: 102e96ca4; end: 102e96d4f;  */

void FUN_102e96ca4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e96d50; end: 102e96d87;  */

void FUN_102e96d50(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102e96d88; end: 102e96dbb; -[SCAddSoundPillState description] */

void FUN_102e96d88(void)

{
  undefined1 auStack_40 [48];
  
  FUN_102e974cc(auStack_40);
  func_0x00010120e754(auStack_40);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e96dbc; end: 102e96e03; -[SCAddSoundPillState init] */

void FUN_102e96dbc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCAddSoundPillScope/AddSoundPillStateWrapper.swift",0x32,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e96e04);
  (*pcVar1)();
}



/* Entry: 102e96e04; end: 102e96e37; -[SCAddSoundPillState hash] */

undefined8 FUN_102e96e04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e96e38();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102e96e38; end: 102e9718f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e96e38(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  func_0x000107c60690(*(undefined1 *)(unaff_x20 + _DAT_112f24dc8));
  lVar1 = *(long *)(unaff_x20 + _DAT_112f24dd0);
  if (lVar1 == 0) {
    func_0x000107c60694();
  }
  else {
    func_0x000107c44c3c();
    func_0x000107c60694(1);
    func_0x000107c60690(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_112f24dd8) == 0) {
    func_0x000107c60694(0);
  }
  else {
    FUN_102e979f4();
    func_0x000107c60694(1);
    func_0x000107c60690(lVar1);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f24de0) + 1) == '\x01') {
    func_0x000107c60694(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f24de0);
    func_0x000107c60694(1);
    func_0x000107c60690(uVar2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112f24de8);
  if (lVar1 == 0) {
    func_0x000107c60694();
  }
  else {
    func_0x000107c44c3c();
    func_0x000107c60694(1);
    func_0x000107c60690(lVar1);
  }
  func_0x000107c606a4();
  return;
}



/* Entry: 102e97190; end: 102e9720f; -[SCAddSoundPillState isEqual:] */

uint FUN_102e97190(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x000102e96f84(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102e97210; end: 102e97213; -[SCAddSoundPillState copyWithZone:] */

void FUN_102e97210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102e97214; end: 102e9729b; +[SCAddSoundPillState empty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e97214(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f24dc8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f24dd0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f24dd8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f24de0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_112f24de8) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


