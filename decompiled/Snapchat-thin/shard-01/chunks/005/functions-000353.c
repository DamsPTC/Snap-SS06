/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101174f28; end: 101174f6b; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint end] */

void FUN_101174f28(undefined8 param_1)

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



/* Entry: 101174f6c; end: 10117516f;  */

void FUN_101174f6c(long param_1,long param_2,long param_3)

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
  }
  else {
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10d7120)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef28ee0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10e2080)) &&
           (func_0x000107c605b8(0xd000000000000020,0x800000010ef1df80,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MemoriesSnapDocRenderStepDependencyPlugin/SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint.swift"
                              ,0x65,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101175170);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56578();
        goto LAB_101174ff8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c565bc();
  }
LAB_101174ff8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101175170; end: 10117521b; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint setValue:forIvarName:] */

void FUN_101175170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101174f6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10117521c; end: 1011752a3; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117521c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d61968,0);
  func_0x000107c61614(param_1 + _DAT_112d61970,0);
  func_0x000107c61614(param_1 + _DAT_112d61978,0);
  *(undefined8 *)(param_1 + _DAT_112d61980) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011752a4; end: 1011752d7;  */

void FUN_1011752a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011752d8; end: 10117532f; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011752d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d61968);
  func_0x000107c61610(param_1 + _DAT_112d61970);
  func_0x000107c61610(param_1 + _DAT_112d61978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d61980));
  return;
}



/* Entry: 101175330; end: 10117534f;  */

void FUN_101175330(void)

{
  func_0x000107c61168(&PTR_PTR_1127b29d8);
  return;
}



/* Entry: 101175350; end: 101175367;  */

void FUN_101175350(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101175368,0,0);
  return;
}



/* Entry: 101175368; end: 1011753ff;  */

void FUN_101175368(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101175400;
                    /* WARNING: Could not recover jumptable at 0x0001011753fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(FUN_10117576c,0,uVar3,lVar2);
  return;
}



/* Entry: 101175400; end: 101175477;  */

void FUN_101175400(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x60));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x70) = param_1 & 1;
    pcVar2 = FUN_101175478;
  }
  else {
    pcVar2 = FUN_1011755c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101175478; end: 1011755c7;  */

void FUN_101175478(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long unaff_x22;
  long lVar7;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x50);
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
    (**(code **)(lVar3 + 8))(uVar1,lVar3);
    func_0x0001000d224c(unaff_x22 + 0x48);
    plVar5 = *(long **)(unaff_x22 + 0x48);
    plVar2 = plVar5;
    func_0x000100471e0c(plVar5,0);
    func_0x000107c61170(plVar5);
    func_0x000107c61574(uVar1);
    func_0x0001000834e4(unaff_x22 + 0x10);
    lVar4 = *(long *)(lVar7 + 0x28);
    pcVar6 = *(code **)(*plVar2 + 0x60);
    func_0x000107c6157c(lVar4);
    UNRECOVERED_JUMPTABLE = FUN_101175834;
    lVar3 = lVar4;
    (*pcVar6)(FUN_101175834);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(plVar2);
    pcVar6 = UNRECOVERED_JUMPTABLE;
    func_0x000107c614f0(UNRECOVERED_JUMPTABLE);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar7 + 0x30),pcVar6,lVar3);
    func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x0001011757f4();
    func_0x000107c613f8(&UNK_110389ec8,param_1,0,0);
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001011755c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1011755c8; end: 1011755d3;  */

void FUN_1011755c8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001011755d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011755d4; end: 10117576b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011755d4(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *param_1;
  lVar4 = *(long *)(lVar2 + _DAT_11302c5d0);
  if (lVar4 != 0) {
    uVar5 = ((undefined8 *)(lVar2 + _DAT_11302c5d8))[1];
    if (uVar5 >> 0x3c < 0xf) {
      lVar8 = ((undefined8 *)(lVar2 + _DAT_11302c5e0))[1];
      if (lVar8 != 0) {
        uVar6 = ((undefined8 *)(lVar2 + _DAT_11302c5e8))[1];
        if (uVar6 >> 0x3c < 0xf) {
          uVar7 = ((undefined8 *)(lVar2 + _DAT_11302c5f0))[1];
          if (uVar7 >> 0x3c < 0xf) {
            uVar9 = *(undefined8 *)(lVar2 + _DAT_11302c5d8);
            uVar3 = *(undefined8 *)(lVar2 + _DAT_11302c5e0);
            uVar10 = *(undefined8 *)(lVar2 + _DAT_11302c5e8);
            uVar11 = *(undefined8 *)(lVar2 + _DAT_11302c5f0);
            func_0x000107c615f0(lVar4);
            FUN_100de78a0(uVar9,uVar5);
            FUN_100de78a0(uVar10,uVar6);
            FUN_100de78a0(uVar11,uVar7);
            func_0x0001000d224c(auStack_88);
            puVar1 = auStack_88;
            func_0x0001000a8868(puVar1,uStack_70);
            (**(code **)(lStack_68 + 8))
                      (puVar1,uVar9,uVar5,uVar3,lVar8,lVar4,uVar10,uVar6,uVar11,uVar7,uStack_70,
                       lStack_68);
            func_0x000107c615e8(lVar4);
            func_0x0001000b44c0(uVar9,uVar5);
            func_0x0001000b44c0(uVar10,uVar6);
            func_0x0001000b44c0(uVar11,uVar7);
            func_0x0001000834e4(auStack_88);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10117576c; end: 10117578f;  */

void FUN_10117576c(void)

{
  func_0x000107c425c0();
  return;
}



/* Entry: 101175790; end: 101175833;  */

void FUN_101175790(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101175834; end: 10117583b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175834(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *param_1;
  lVar4 = *(long *)(lVar2 + _DAT_11302c5d0);
  if (lVar4 != 0) {
    uVar5 = ((undefined8 *)(lVar2 + _DAT_11302c5d8))[1];
    if (uVar5 >> 0x3c < 0xf) {
      lVar8 = ((undefined8 *)(lVar2 + _DAT_11302c5e0))[1];
      if (lVar8 != 0) {
        uVar6 = ((undefined8 *)(lVar2 + _DAT_11302c5e8))[1];
        if (uVar6 >> 0x3c < 0xf) {
          uVar7 = ((undefined8 *)(lVar2 + _DAT_11302c5f0))[1];
          if (uVar7 >> 0x3c < 0xf) {
            uVar9 = *(undefined8 *)(lVar2 + _DAT_11302c5d8);
            uVar3 = *(undefined8 *)(lVar2 + _DAT_11302c5e0);
            uVar10 = *(undefined8 *)(lVar2 + _DAT_11302c5e8);
            uVar11 = *(undefined8 *)(lVar2 + _DAT_11302c5f0);
            func_0x000107c615f0(lVar4);
            FUN_100de78a0(uVar9,uVar5);
            FUN_100de78a0(uVar10,uVar6);
            FUN_100de78a0(uVar11,uVar7);
            func_0x0001000d224c(auStack_88);
            puVar1 = auStack_88;
            func_0x0001000a8868(puVar1,uStack_70);
            (**(code **)(lStack_68 + 8))
                      (puVar1,uVar9,uVar5,uVar3,lVar8,lVar4,uVar10,uVar6,uVar11,uVar7,uStack_70,
                       lStack_68);
            func_0x000107c615e8(lVar4);
            func_0x0001000b44c0(uVar9,uVar5);
            func_0x0001000b44c0(uVar10,uVar6);
            func_0x0001000b44c0(uVar11,uVar7);
            func_0x0001000834e4(auStack_88);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10117583c; end: 101175a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10117583c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 3;
  func_0x00010043c5c0(3,0xf,0,uStack_70,uStack_68,puVar1);
  uVar5 = *(undefined8 *)(param_2 + _DAT_1130806b8);
  uVar6 = *(undefined8 *)(param_4 + _DAT_11302c590);
  uVar4 = *(undefined8 *)(param_3 + _DAT_112fd9348);
  lVar3 = 0;
  func_0x0001011757d4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  func_0x0001000834e4(auStack_88);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  func_0x000107c61580(lVar3,2);
  uVar2 = 1;
  func_0x000100859150(1,0,0x48,0,0,0,&UNK_10d9279d0,lVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61578(lVar3,2);
  func_0x000107c61574(uVar2);
  return unaff_x20;
}



/* Entry: 101175a0c; end: 101175a5f;  */

void FUN_101175a0c(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101175aec;
  plVar1[10] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101175368,0,0);
  return;
}



/* Entry: 101175a60; end: 101175abf;  */

void FUN_101175a60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101175a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101175ac0; end: 101175acb;  */

void FUN_101175ac0(void)

{
  return;
}



/* Entry: 101175acc; end: 101175aeb;  */

void FUN_101175acc(void)

{
  func_0x000107c61168(&PTR_PTR_112d61ab8);
  return;
}



/* Entry: 101175aec; end: 101175bdf;  */

void FUN_101175aec(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101175a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101175be0; end: 101175c1f;  */

void FUN_101175be0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d61b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d927ac4;
  func_0x000107c61520(&UNK_10d927ac4,&UNK_110389ec8);
  puRam0000000112d61b18 = puVar1;
  return;
}



/* Entry: 101175c20; end: 101175c27;  */

undefined8 FUN_101175c20(void)

{
  return 1;
}



/* Entry: 101175c28; end: 101175cc7;  */

void FUN_101175c28(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101175cc8; end: 101175cd7;  */

void FUN_101175cc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101175cd8; end: 101175ce3; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175cd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61b20;
  func_0x000107c61428(param_1 + _DAT_112d61b20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101175ce4; end: 101175cef; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61b20;
  func_0x000107c61428(param_1 + _DAT_112d61b20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101175cf0; end: 101175cfb; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61b28;
  func_0x000107c61428(param_1 + _DAT_112d61b28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101175cfc; end: 101175d07; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61b28;
  func_0x000107c61428(param_1 + _DAT_112d61b28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101175d08; end: 101175d13; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint memoriesDoubleEncryptionResolutionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175d08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61b30;
  func_0x000107c61428(param_1 + _DAT_112d61b30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101175d14; end: 101175d1f; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint setMemoriesDoubleEncryptionResolutionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61b30;
  func_0x000107c61428(param_1 + _DAT_112d61b30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101175d20; end: 101175d2b; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint memoriesEncryptionPublishingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175d20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61b38;
  func_0x000107c61428(param_1 + _DAT_112d61b38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101175d2c; end: 101175d37; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint setMemoriesEncryptionPublishingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61b38;
  func_0x000107c61428(param_1 + _DAT_112d61b38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101175d38; end: 101175d43; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175d38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61b40;
  func_0x000107c61428(param_1 + _DAT_112d61b40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101175d44; end: 101175d87;  */

void FUN_101175d44(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101175d88; end: 101175d93; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61b40;
  func_0x000107c61428(param_1 + _DAT_112d61b40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101175d94; end: 101175de7;  */

void FUN_101175d94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101175de8; end: 1011760a7;  */

/* WARNING: Possible PIC construction at 0x000101175fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101175fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101175ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101176070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101176080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101176060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101176084) */
/* WARNING: Removing unreachable block (ram,0x000101176074) */
/* WARNING: Removing unreachable block (ram,0x000101175ff4) */
/* WARNING: Removing unreachable block (ram,0x000101175fe4) */
/* WARNING: Removing unreachable block (ram,0x000101175fd4) */
/* WARNING: Removing unreachable block (ram,0x000101176064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101175de8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar7 = unaff_x20;
    func_0x000107c4cb8c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4cb7c();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar7;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4cb84();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar7;
        }
        else {
          func_0x000107c3e274();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            lVar4 = 0;
            FUN_101175acc();
            func_0x000107c613fc();
            func_0x0001000d224c(auStack_88);
            puVar5 = auStack_88;
            FUN_101176480(puVar5,uStack_70);
            uVar6 = 3;
            func_0x00010043c5c0(3,0xf,0,uStack_70,uStack_68,puVar5);
            uVar10 = *(undefined8 *)(lVar7 + _DAT_1130806b8);
            uVar9 = *(undefined8 *)(lVar3 + _DAT_11302c590);
            uVar8 = *(undefined8 *)(lVar2 + _DAT_112fd9348);
            lVar7 = 0;
            func_0x0001011757d4();
            func_0x000107c613fc();
            *(undefined8 *)(lVar7 + 0x10) = uVar6;
            *(undefined8 *)(lVar7 + 0x18) = uVar10;
            *(undefined8 *)(lVar7 + 0x20) = uVar9;
            *(undefined8 *)(lVar7 + 0x28) = uVar8;
            func_0x0001000c6560(0);
            func_0x000107c613fc();
            func_0x000107c6157c(uVar10);
            func_0x000107c6157c(uVar9);
            func_0x000107c6157c();
            func_0x0001000c6580();
            *(undefined8 *)(lVar7 + 0x30) = uVar8;
            FUN_1011766f4(auStack_88);
            *(long *)(lVar4 + 0x10) = lVar7;
            func_0x000107c61580(lVar7,2);
            func_0x000100859150(1,0,0x48,0,0,0,&UNK_10d927b30,lVar7);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011760a8; end: 1011760fb;  */

void FUN_1011760a8(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1011760fc;
  plVar1[10] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101175368,0,0);
  return;
}



/* Entry: 1011760fc; end: 101176137;  */

void FUN_1011760fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101176134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101176138; end: 10117615f; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint begin] */

void FUN_101176138(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101175de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101176160; end: 1011761a3; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint end] */

void FUN_101176160(undefined8 param_1)

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



/* Entry: 1011761a4; end: 10117647f;  */

void FUN_1011761a4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_101176480(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10e20c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef10d6f20)) ||
           (func_0x000107c605b8(0xd00000000000002a,0x800000010ef290e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_101176480(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56548();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10d6ef0)) ||
             (func_0x000107c605b8(0xd000000000000024,0x800000010ef29110,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_101176480(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5654c();
          }
          else {
            if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "MemoriesDoubleEncryptionResolutionInvocation/SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint.swift"
                                    ,0x6b,2,0x38,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101176480);
                (*pcVar1)();
              }
            }
            FUN_101176480(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52954();
          }
        }
        goto LAB_101176230;
      }
    }
    FUN_101176480(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56550();
  }
LAB_101176230:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101176480; end: 1011764a3;  */

long * FUN_101176480(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1011764a4; end: 10117654f; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint setValue:forIvarName:] */

void FUN_1011764a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011761a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1011766f4(auStack_50);
  return;
}



/* Entry: 101176550; end: 101176557; +[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint context] */

undefined8 FUN_101176550(void)

{
  return 4;
}



/* Entry: 101176558; end: 101176607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176558(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d61b20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61b28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61b30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61b38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61b40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d61b48) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101176608; end: 101176627; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint init] */

void FUN_101176608(void)

{
  FUN_101176558();
  return;
}



/* Entry: 101176628; end: 10117665b;  */

void FUN_101176628(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10117665c; end: 1011766d3; -[SCMemoriesDoubleEncryptionResolutionInvocationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117665c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d61b20);
  func_0x000107c61610(param_1 + _DAT_112d61b28);
  func_0x000107c61610(param_1 + _DAT_112d61b30);
  func_0x000107c61610(param_1 + _DAT_112d61b38);
  func_0x000107c61610(param_1 + _DAT_112d61b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d61b48));
  return;
}



/* Entry: 1011766d4; end: 1011766f3;  */

void FUN_1011766d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2aa8);
  return;
}



/* Entry: 1011766f4; end: 101176713;  */

void FUN_1011766f4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101176708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101176714; end: 10117674f;  */

void FUN_101176714(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101176750; end: 10117677b;  */

void FUN_101176750(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10117677c; end: 101176817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117677c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar6 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  lVar2 = 0;
  FUN_101176a00();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d61c20) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c4e9e4(uVar5);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101176818; end: 10117681f;  */

undefined8 FUN_101176818(void)

{
  return 0;
}



/* Entry: 101176820; end: 10117683f;  */

void FUN_101176820(void)

{
  func_0x000107c61168(&PTR_PTR_112d61bb8);
  return;
}



/* Entry: 101176840; end: 10117689f; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor identifier] */

void FUN_101176840(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uVar1 = 0x112d61c50;
  uStack_28 = param_1;
  func_0x0001000285a8(0x112d61c50,&UNK_10d927c18);
  puVar2 = &uStack_28;
  func_0x000107c5fb18(puVar2,uVar1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1011768a0; end: 1011768a7; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor priority] */

undefined8 FUN_1011768a0(void)

{
  return 1000;
}



/* Entry: 1011768a8; end: 10117692f; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_1011768a8(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dba938;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 101176930; end: 10117698b; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor isValidDeepLink:] */

uint FUN_101176930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101176bd0(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10117698c; end: 10117698f; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_10117698c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101176990; end: 1011769ef; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor init] */

void FUN_101176990(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesFaceTaggingDeepLink.MemoriesFaceTaggingDeepLinkProcessor",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011769bc);
  (*pcVar1)();
}



/* Entry: 1011769f0; end: 1011769ff; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011769f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d61c20));
  return;
}



/* Entry: 101176a00; end: 101176a1f;  */

void FUN_101176a00(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2b88);
  return;
}



/* Entry: 101176a20; end: 101176ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010451338c();
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar1 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c4ef8c(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c4bb48(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf94730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_endDeepLinkProcessingScopeWithEr_1125c2b70,0)
  ;
  return;
}



/* Entry: 101176ae8; end: 101176b87; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_101176ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_101176a20(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 101176b88; end: 101176b8f; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_101176b88(void)

{
  return 1;
}



/* Entry: 101176b90; end: 101176bcf; -[_TtC27MemoriesFaceTaggingDeepLink36MemoriesFaceTaggingDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_101176b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_5);
  func_0x000107c4bb48(param_5,param_2,0);
  func_0x000107c42808(param_5,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_5);
  return;
}



/* Entry: 101176bd0; end: 101176c9b;  */

uint FUN_101176bd0(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000107c4e434(param_1,param_2,1);
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ef6f18);
    lVar4 = param_2;
  }
  else {
    ppuVar2 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110ef6f18;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar2 == ppuVar3 && param_2 == lVar4) {
        func_0x000107c6142c(param_2);
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar4,0);
        uVar1 = (uint)ppuVar2;
        func_0x000107c6142c(param_2);
      }
      goto LAB_101176c80;
    }
  }
  uVar1 = 0;
LAB_101176c80:
  func_0x000107c6142c(lVar4);
  return uVar1 & 1;
}



/* Entry: 101176c9c; end: 101176ca7; -[SCMemoriesFaceTaggingDeepLinkEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176c9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61c58;
  func_0x000107c61428(param_1 + _DAT_112d61c58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101176ca8; end: 101176cb3; -[SCMemoriesFaceTaggingDeepLinkEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61c58;
  func_0x000107c61428(param_1 + _DAT_112d61c58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101176cb4; end: 101176cbf; -[SCMemoriesFaceTaggingDeepLinkEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176cb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61c60;
  func_0x000107c61428(param_1 + _DAT_112d61c60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101176cc0; end: 101176d03;  */

void FUN_101176cc0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101176d04; end: 101176d0f; -[SCMemoriesFaceTaggingDeepLinkEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61c60;
  func_0x000107c61428(param_1 + _DAT_112d61c60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101176d10; end: 101176d63;  */

void FUN_101176d10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101176d64; end: 101176e9f;  */

/* WARNING: Possible PIC construction at 0x000101176e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101176e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101176e40) */
/* WARNING: Removing unreachable block (ram,0x000101176e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101176d64(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4d52c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101176820();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x10) = lVar2;
    *(long *)(lVar3 + 0x18) = unaff_x20;
    lVar4 = 0;
    FUN_101176a00();
    lVar3 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar3 + _DAT_112d61c20) = unaff_x20;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar3;
    lStack_48 = lVar4;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61174();
    func_0x000107c61174(lVar2);
    func_0x000107c61154(&lStack_50,puVar1);
    func_0x000107c4e9e4(lVar2);
    func_0x000107c61180();
    func_0x000107c4fba8();
    lVar2 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101176ea0; end: 101176ec7; -[SCMemoriesFaceTaggingDeepLinkEntryPoint begin] */

void FUN_101176ea0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101176d64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101176ec8; end: 101176f0b; -[SCMemoriesFaceTaggingDeepLinkEntryPoint end] */

void FUN_101176ec8(undefined8 param_1)

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



/* Entry: 101176f0c; end: 1011770a3;  */

void FUN_101176f0c(long param_1,long param_2,long param_3)

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
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesFaceTaggingDeepLink/SCMemoriesFaceTaggingDeepLinkEntryPoint.swift"
                            ,0x49,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011770a4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c569f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011770a4; end: 10117714f; -[SCMemoriesFaceTaggingDeepLinkEntryPoint setValue:forIvarName:] */

void FUN_1011770a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101176f0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101177150; end: 1011771c3; -[SCMemoriesFaceTaggingDeepLinkEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101177150(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d61c58,0);
  func_0x000107c61614(param_1 + _DAT_112d61c60,0);
  *(undefined8 *)(param_1 + _DAT_112d61c68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011771c4; end: 1011771f7;  */

void FUN_1011771c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011771f8; end: 10117723f; -[SCMemoriesFaceTaggingDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011771f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d61c58);
  func_0x000107c61610(param_1 + _DAT_112d61c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d61c68));
  return;
}



/* Entry: 101177240; end: 10117725f;  */

void FUN_101177240(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2c48);
  return;
}



/* Entry: 101177260; end: 101177663;  */

/* WARNING: Possible PIC construction at 0x000101177618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010117761c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101177260(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *unaff_x20;
  long lVar8;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar6 = 0xa0;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0x10;
  *(undefined8 *)(lVar2 + 0x10) = 8;
  lVar8 = lVar2;
  func_0x000108dfdcec();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101177644);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c61170();
  *(long *)(lVar2 + 0x20) = lVar3;
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  func_0x000108dfdd04();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101177648);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  uVar6 = uVar7;
  func_0x000107c61170();
  *(long *)(lVar2 + 0x30) = lVar3;
  *(undefined8 *)(lVar2 + 0x38) = uVar7;
  func_0x000108dfdd1c();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10117764c);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c61170();
  *(long *)(lVar2 + 0x40) = lVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar6;
  func_0x000108dfdd34();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101177650);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  uVar6 = uVar7;
  func_0x000107c61170();
  *(long *)(lVar2 + 0x50) = lVar3;
  *(undefined8 *)(lVar2 + 0x58) = uVar7;
  func_0x000108dfdd4c();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101177654);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c61170();
  *(long *)(lVar2 + 0x60) = lVar3;
  *(undefined8 *)(lVar2 + 0x68) = uVar6;
  func_0x000108dfdd64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101177658);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  uVar6 = uVar7;
  func_0x000107c61170();
  *(long *)(lVar2 + 0x70) = lVar3;
  *(undefined8 *)(lVar2 + 0x78) = uVar7;
  func_0x000108dfdd7c();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10117765c);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c61170();
  *(long *)(lVar2 + 0x80) = lVar3;
  *(undefined8 *)(lVar2 + 0x88) = uVar6;
  func_0x000108dfdd94();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101177660);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  lVar8 = *(long *)((long)unaff_x20 + _DAT_112d61c98);
  *(long *)(lVar2 + 0x90) = lVar3;
  *(undefined8 *)(lVar2 + 0x98) = uVar7;
  lVar2 = *(long *)(lVar8 + _DAT_112ff48b8);
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101177664);
    (*pcVar1)();
  }
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000108dfddc4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  lVar3 = 0x65736f6c63;
  func_0x000107c5fadc(0x65736f6c63,0xe500000000000000);
  uVar6 = 0;
  func_0x000107c5fe40();
  lVar2 = lVar3;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar6);
  if (lVar2 != 0) {
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x0001038dabac(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  puVar4 = unaff_x20;
  func_0x0001038dabcc();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x188))
            (*(undefined8 *)(lVar8 + _DAT_112ff48b0));
  uVar6 = *(undefined8 *)((long)unaff_x20 + _DAT_112d61ce0);
  *(ulong **)((long)unaff_x20 + _DAT_112d61ce0) = puVar4;
  func_0x000107c61174(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e2c0(*(undefined8 *)(lVar8 + _DAT_112ff48a8));
  puVar5 = &UNK_11038a2d0;
  func_0x000107c613fc(&UNK_11038a2d0,0x18,7);
  *(ulong **)(puVar5 + 0x10) = unaff_x20;
  func_0x000107c61174(unaff_x20);
  func_0x0001001ca524(0xa3,0,0x48,4,0,0,&UNK_10d927d18,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 101177664; end: 10117767b;  */

void FUN_101177664(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10117767c,0,0);
  return;
}



/* Entry: 10117767c; end: 1011776e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117767c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  FUN_101178788();
  lVar1 = *(long *)(lVar1 + _DAT_112d61cc8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5c814();
    func_0x000107c615e8(lVar1);
  }
  FUN_1011776e4();
  func_0x000101177d58();
                    /* WARNING: Could not recover jumptable at 0x0001011776e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011776e4; end: 101177adf;  */

/* WARNING: Possible PIC construction at 0x00010117774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011777b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011778d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101177914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011779d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101177ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101177838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117793c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101177958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011779a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101177940) */
/* WARNING: Removing unreachable block (ram,0x00010117783c) */
/* WARNING: Removing unreachable block (ram,0x000101177ab4) */
/* WARNING: Removing unreachable block (ram,0x000101177918) */
/* WARNING: Removing unreachable block (ram,0x000101177954) */
/* WARNING: Removing unreachable block (ram,0x00010117791c) */
/* WARNING: Removing unreachable block (ram,0x000101177920) */
/* WARNING: Removing unreachable block (ram,0x000101177928) */
/* WARNING: Removing unreachable block (ram,0x000101177808) */
/* WARNING: Removing unreachable block (ram,0x000101177930) */
/* WARNING: Removing unreachable block (ram,0x0001011779b4) */
/* WARNING: Removing unreachable block (ram,0x0001011778dc) */
/* WARNING: Removing unreachable block (ram,0x0001011777b4) */
/* WARNING: Removing unreachable block (ram,0x0001011779f8) */
/* WARNING: Removing unreachable block (ram,0x000101177a00) */
/* WARNING: Removing unreachable block (ram,0x0001011777bc) */
/* WARNING: Removing unreachable block (ram,0x000101177a10) */
/* WARNING: Removing unreachable block (ram,0x0001011777cc) */
/* WARNING: Removing unreachable block (ram,0x000101177750) */
/* WARNING: Removing unreachable block (ram,0x000101177754) */
/* WARNING: Removing unreachable block (ram,0x00010117796c) */
/* WARNING: Removing unreachable block (ram,0x000101177770) */
/* WARNING: Removing unreachable block (ram,0x00010117795c) */
/* WARNING: Removing unreachable block (ram,0x0001011779a8) */
/* WARNING: Removing unreachable block (ram,0x0001011779d4) */
/* WARNING: Removing unreachable block (ram,0x000101177960) */
/* WARNING: Removing unreachable block (ram,0x000101177840) */
/* WARNING: Removing unreachable block (ram,0x000101177848) */
/* WARNING: Removing unreachable block (ram,0x00010117798c) */
/* WARNING: Removing unreachable block (ram,0x000101177a18) */
/* WARNING: Removing unreachable block (ram,0x000101177abc) */
/* WARNING: Removing unreachable block (ram,0x000101177ac0) */
/* WARNING: Removing unreachable block (ram,0x000101177a24) */
/* WARNING: Removing unreachable block (ram,0x000101177858) */
/* WARNING: Removing unreachable block (ram,0x000101177874) */
/* WARNING: Removing unreachable block (ram,0x0001011779f4) */
/* WARNING: Removing unreachable block (ram,0x000101177884) */
/* WARNING: Removing unreachable block (ram,0x000101177864) */
/* WARNING: Removing unreachable block (ram,0x00010117788c) */
/* WARNING: Removing unreachable block (ram,0x0001011779f0) */
/* WARNING: Removing unreachable block (ram,0x000101177898) */
/* WARNING: Removing unreachable block (ram,0x0001011778b0) */
/* WARNING: Removing unreachable block (ram,0x0001011778e0) */
/* WARNING: Removing unreachable block (ram,0x0001011778e8) */
/* WARNING: Removing unreachable block (ram,0x000101177934) */
/* WARNING: Removing unreachable block (ram,0x0001011779a0) */
/* WARNING: Removing unreachable block (ram,0x000101177938) */
/* WARNING: Removing unreachable block (ram,0x000101177900) */
/* WARNING: Removing unreachable block (ram,0x0001011778c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011776e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d61ca8);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010ef29250);
  func_0x000107c3ebd4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101177ae0; end: 101177af7;  */

void FUN_101177ae0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101177af8,0,0);
  return;
}



/* Entry: 101177af8; end: 101177bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101177af8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x38);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  uVar8 = uVar2;
  FUN_101179ad8(unaff_x22 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar6 + _DAT_112d61c98) + _DAT_112ff48b8);
  func_0x000107c42950();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar7 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
  }
  *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101177bf0;
                    /* WARNING: Could not recover jumptable at 0x000101177bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(lVar7,uVar8,uVar2,lVar3);
  return;
}



/* Entry: 101177bf0; end: 101177c3f;  */

void FUN_101177bf0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101179f8c,0,0);
  return;
}



/* Entry: 101177c40; end: 101177e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101177c40(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  if (uStack_48 != 0) {
    uVar1 = uStack_48;
    func_0x000107c49e3c();
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112d61cb8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        FUN_101179b1c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 3;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined8 *)(lVar3 + 0x20) = param_1;
        uVar4 = 0;
        FUN_101179e90(0,0x112d61d40,&PTR_PTR_1126bf9a8);
        func_0x000107c61174(param_1);
        lVar5 = lVar3;
        func_0x000107c5fc48(lVar3,uVar4);
        func_0x000107c61574(lVar3);
        func_0x000107c518c8(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar5);
      }
    }
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 101177e50; end: 101177fff;  */

void FUN_101177e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  lVar1 = 0;
  func_0x000107c5f7fc();
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = 0;
  func_0x000107c5f824();
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101177ed8,0,0);
  return;
}



/* Entry: 101178000; end: 10117823b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101178000(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  
  uVar7 = *(long *)(unaff_x22 + 0xb8) + 0x10;
  func_0x000107c61618();
  *(ulong *)(unaff_x22 + 0x108) = uVar7;
  if (uVar7 != 0) {
    uVar8 = uVar7;
    func_0x000107c5fd5c();
    if ((uVar8 & 1) == 0) {
      lVar1 = *(long *)(unaff_x22 + 0xe0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar6 = *(long *)(unaff_x22 + 200);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10117823c;
      lVar9 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar9,0);
      puVar10 = &UNK_11038a140;
      func_0x000107c613fc(&UNK_11038a140,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,uVar7);
      puVar11 = &UNK_11038a258;
      func_0x000107c613fc(&UNK_11038a258,0x20,7);
      *(long *)(puVar11 + 0x10) = lVar9;
      *(undefined **)(puVar11 + 0x18) = puVar10;
      *(code **)(unaff_x22 + 0x70) = FUN_101179e88;
      *(undefined **)(unaff_x22 + 0x78) = puVar11;
      puVar12 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11038a270;
      func_0x000107c60bc4();
      func_0x000107c6157c(puVar10);
      func_0x000107c5f808(uVar4);
      *(undefined8 *)(unaff_x22 + 0xa0) = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar15 = 0x112d4af88;
      FUN_101179d78(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      uVar13 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar14 = uVar13;
      func_0x0001001c7f30();
      func_0x000107c60264(uVar2,(undefined8 *)(unaff_x22 + 0xa0),uVar13,uVar14,uVar3,uVar15);
      func_0x000107c5ffe8(0,uVar4,uVar2,puVar12);
      func_0x000107c60bd0(puVar12);
      (**(code **)(lVar6 + 8))(uVar2,uVar3);
      (**(code **)(lVar1 + 8))(uVar4,uVar5);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c61574(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(uVar7);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101178080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10117823c; end: 10117827b;  */

void FUN_10117823c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10117827c,0,0);
  return;
}



/* Entry: 10117827c; end: 101178473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117827c(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x22;
  undefined8 uVar9;
  double dVar10;
  
  dVar10 = *(double *)(unaff_x22 + 0x98);
  uVar1 = *(ulong *)(unaff_x22 + 0x108);
  if ((dVar10 == *(double *)(unaff_x22 + 0xf8)) &&
     (uVar8 = *(ulong *)(uVar1 + _DAT_112d61cf0), uVar8 != 0)) {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0xa8);
    uVar1 = *(ulong *)(unaff_x22 + 0xa8);
    if (uVar1 == 0) {
      func_0x000107c61170(uVar8);
    }
    else {
      uVar2 = uVar1;
      func_0x000107c49e3c();
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(*(long *)(unaff_x22 + 0x108) + _DAT_112d61cb8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x108);
          lVar4 = lVar3;
          FUN_101179b1c();
          func_0x000107c613fc();
          *(undefined8 *)(lVar4 + 0x18) = 3;
          *(undefined8 *)(lVar4 + 0x10) = 1;
          *(ulong *)(lVar4 + 0x20) = uVar8;
          uVar5 = 0;
          FUN_101179e90(0,0x112d61d40,&PTR_PTR_1126bf9a8);
          func_0x000107c61174();
          lVar6 = lVar4;
          func_0x000107c5fc48(lVar4,uVar5);
          func_0x000107c61574(lVar4);
          func_0x000107c518c8(lVar3);
          func_0x000107c615e8(uVar1);
          func_0x000107c61170(lVar6);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar9);
          uVar1 = uVar8;
          goto LAB_1011783e8;
        }
      }
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uVar1);
    }
    uVar1 = *(ulong *)(unaff_x22 + 0x108);
  }
LAB_1011783e8:
  func_0x000107c61170();
  func_0x000107c5fd5c();
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101178424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(double *)(unaff_x22 + 0xf8) = dVar10;
  plVar7 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101177fa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (*(undefined8 *)(unaff_x22 + 0xf0));
  return;
}



/* Entry: 101178474; end: 1011784ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101178474(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d61cf8);
    func_0x000107c61170();
  }
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = uVar1;
  func_0x000107c6144c(param_1);
  return;
}



/* Entry: 1011784f0; end: 10117871b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011784f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(param_3 + _DAT_112d61d00);
  puVar4 = &UNK_11038a140;
  func_0x000107c613fc(&UNK_11038a140,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_3);
  puVar5 = &UNK_11038a168;
  func_0x000107c613fc(&UNK_11038a168,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  pcStack_80 = FUN_101179d4c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000b0c7c;
  puStack_88 = &UNK_11038a180;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar11);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  FUN_101179d78(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = uVar8;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar10,&puStack_a8,uVar8,uVar9,lVar2,uVar7);
  func_0x000107c5ffe8(0,lVar11,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lVar13 + 8))(lVar10,lVar2);
  (**(code **)(lVar12 + 8))(lVar11,lVar3);
  puVar5 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}


