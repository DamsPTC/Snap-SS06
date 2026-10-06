/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ad52d8; end: 101ad52ff; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101ad52d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ad51a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad5300; end: 101ad5343; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint end] */

void FUN_101ad5300(undefined8 param_1)

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



/* Entry: 101ad5344; end: 101ad54db;  */

void FUN_101ad5344(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc0) || (param_3 != -0x7ffffffef1007ec0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000040,0x800000010eff8140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StartupCompleteCameraLoggingQueueScopeGraphBridge/SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x7a,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad54dc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59808();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ad54dc; end: 101ad5587; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101ad54dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ad5344(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ad5588; end: 101ad55f3; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5588(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfa108,0);
  *(undefined8 *)(param_1 + _DAT_112dfa110) = 0;
  *(undefined8 *)(param_1 + _DAT_112dfa118) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad55f4; end: 101ad5627;  */

void FUN_101ad55f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad5628; end: 101ad566f; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ad5654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad5658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5628(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfa108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa110));
  return;
}



/* Entry: 101ad5670; end: 101ad568f;  */

void FUN_101ad5670(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4eb8);
  return;
}



/* Entry: 101ad5690; end: 101ad56d7; -[SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5690(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfa148;
  func_0x000107c61428(param_1 + _DAT_112dfa148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ad56d8; end: 101ad572f; -[SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad56d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfa148;
  func_0x000107c61428(param_1 + _DAT_112dfa148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ad5730; end: 101ad5807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5730(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_101ad4c30();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112dfa070) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad5808);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112dfa078);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dfa150);
    *(long **)(unaff_x20 + _DAT_112dfa150) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101ad5808; end: 101ad582f; -[SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint begin] */

void FUN_101ad5808(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ad5730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad5830; end: 101ad59a7;  */

/* WARNING: Possible PIC construction at 0x000101ad5898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad5930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad589c) */
/* WARNING: Removing unreachable block (ram,0x000101ad5934) */
/* WARNING: Removing unreachable block (ram,0x000101ad594c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5830(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112dfa150);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101ad59a8; end: 101ad59af;  */

void FUN_101ad59a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ad59b0; end: 101ad59e3; -[SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint end] */

void FUN_101ad59b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ad5830();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ad59e4; end: 101ad5b03;  */

void FUN_101ad59e4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "StartupCompleteCameraLoggingQueueScopeGraphBridge/SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint.swift"
                        ,0x7a,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad5b04);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ad5b04; end: 101ad5baf; -[SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101ad5b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ad59e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ad5bb0; end: 101ad5c0f; -[SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5bb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfa148,0);
  *(undefined8 *)(param_1 + _DAT_112dfa150) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad5c10; end: 101ad5c43;  */

void FUN_101ad5c10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad5c44; end: 101ad5c7b; -[SCSCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5c44(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfa148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa150));
  return;
}



/* Entry: 101ad5c7c; end: 101ad5c9b;  */

void FUN_101ad5c7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4f80);
  return;
}



/* Entry: 101ad5c9c; end: 101ad5cd3;  */

void FUN_101ad5c9c(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ad5dec();
  func_0x000107c613fc();
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_110440c28;
  return;
}



/* Entry: 101ad5cd4; end: 101ad5cf7;  */

void FUN_101ad5cd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101ad5cf8; end: 101ad5ddb;  */

/* WARNING: Possible PIC construction at 0x000101ad5d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad5dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad5d60) */
/* WARNING: Removing unreachable block (ram,0x000101ad5dc0) */

void FUN_101ad5cf8(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b3130;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3d754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad5ddc);
  (*pcVar1)();
}



/* Entry: 101ad5ddc; end: 101ad5deb;  */

undefined1  [16] FUN_101ad5ddc(void)

{
  return ZEXT816(0x110440c48);
}



/* Entry: 101ad5dec; end: 101ad5e0b;  */

void FUN_101ad5dec(void)

{
  func_0x000107c61168(&PTR_PTR_112dfa1c8);
  return;
}



/* Entry: 101ad5e0c; end: 101ad5e1b;  */

undefined1  [16] FUN_101ad5e0c(void)

{
  return ZEXT816(0x110440d40);
}



/* Entry: 101ad5e1c; end: 101ad5e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5e1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dfa228) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dfa230) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad5e80; end: 101ad5ebb; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader supportedURLSchemes] */

void FUN_101ad5e80(void)

{
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ad5ebc; end: 101ad63bb;  */

void FUN_101ad5ebc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x000107c5ed90();
  lVar7 = param_2;
  func_0x000108543f0c();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar6 = lVar7;
  func_0x000107c5f9e8(lVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(lVar7);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar7 = 0x54747865746e6f63;
    uVar11 = 0xeb00000000657079;
    func_0x000100029284();
    if ((uVar11 & 1) != 0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x38) + lVar7 * 0x10);
      lVar7 = *plVar1;
      lVar12 = plVar1[1];
      func_0x000107c61434(lVar12);
      func_0x000107c6142c(lVar6);
      if (lVar7 != 0x74616863 || lVar12 != -0x1c00000000000000) {
        uVar11 = 0x74616863;
        func_0x000107c605b8(0x74616863,0xe400000000000000,lVar7,lVar12,0);
        if ((uVar11 & 1) == 0) {
          if (lVar7 == -0x2fffffffffffffee && lVar12 == -0x7ffffffef1007d70) {
            func_0x000107c6142c(lVar12);
          }
          else {
            uVar11 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010eff8290,lVar7,lVar12,0);
            func_0x000107c6142c(lVar12);
            if ((uVar11 & 1) == 0) goto LAB_101ad5fd4;
          }
          uVar13 = 0x25;
          goto LAB_101ad5fd8;
        }
      }
      func_0x000107c6142c(lVar12);
      uVar13 = 3;
      goto LAB_101ad5fd8;
    }
    func_0x000107c6142c(lVar6);
  }
LAB_101ad5fd4:
  uVar13 = 5;
LAB_101ad5fd8:
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar7 = 0x6e776f446c6c7566;
    uVar11 = 0;
    func_0x000100029284();
    if ((uVar11 & 1) == 0) {
      uVar15 = 0;
      uVar14 = 0;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar7 * 0x10);
      uVar15 = *puVar2;
      uVar14 = puVar2[1];
      func_0x000107c61434(uVar14);
    }
    func_0x000107c6142c(lVar6);
  }
  FUN_101ad71e8(uVar15,uVar14);
  func_0x000107c6142c();
  uVar5 = (uint)uVar14;
  func_0x000107c5ed5c();
  if (*(long *)(lVar6 + 0x10) == 0) {
    bVar4 = 0;
    lVar7 = 0;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar7 = 0x6666;
    uVar11 = 0;
    func_0x000100029284();
    if ((uVar11 & 1) == 0) {
      bVar4 = 0;
      lVar7 = 0;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar7 * 0x10);
      bVar4 = (byte)*puVar2;
      lVar7 = puVar2[1];
      func_0x000107c61434(lVar7);
    }
    func_0x000107c6142c(lVar6);
  }
  lVar12 = lVar7;
  FUN_101ad71e8();
  func_0x000107c6142c(lVar7);
  if (*(long *)(lVar6 + 0x10) == 0) {
    func_0x000107c6142c(lVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar7 = 0x6567616d496666;
    uVar11 = 0;
    func_0x000100029284();
    if ((uVar11 & 1) == 0) {
      lVar12 = 2;
      func_0x000107c61430(lVar6);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar7 * 0x10);
      uVar14 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61430(lVar6,2);
      puVar8 = PTR_PTR_1126b2c80;
      func_0x000107c61168();
      func_0x000107c5fadc(uVar14,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5d81c();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      puVar9 = (undefined *)0x0;
      lVar12 = 1;
      func_0x000101ad6dd4(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar11 = *(ulong *)(puVar9 + 0x10);
      lVar7 = uVar11 + 1;
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        lVar12 = lVar7;
        func_0x000101ad6dd4(puVar10,lVar7,1,puVar9);
      }
      *(long *)(puVar10 + 0x10) = lVar7;
      *(undefined **)(puVar10 + uVar11 * 0x38 + 0x20) = puVar8;
      *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x30) = 2;
      *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x28) = 0;
      *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x40) = 0;
      *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x38) = 0;
      *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x50) = 0;
      *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x48) = 0;
    }
  }
  puVar8 = PTR_PTR_1126b2c80;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x000107c5ed70();
  lVar7 = lVar12;
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar12);
  func_0x000107c5d81c();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar9 = puVar10;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    lVar7 = *(long *)(puVar10 + 0x10) + 1;
    puVar9 = (undefined *)0x0;
    func_0x000101ad6dd4(0,lVar7,1,puVar10);
    puVar10 = puVar9;
  }
  uVar11 = *(ulong *)(puVar10 + 0x10);
  lVar6 = uVar11 + 1;
  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
    lVar7 = lVar6;
    func_0x000101ad6dd4(puVar9,lVar6,1,puVar10);
    puVar10 = puVar9;
  }
  uVar14 = 4;
  if (((uVar5 | (uint)uVar15) & 1) == 0) {
    uVar14 = 6;
  }
  *(long *)(puVar10 + 0x10) = lVar6;
  *(undefined **)(puVar10 + uVar11 * 0x38 + 0x20) = puVar8;
  *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x30) = 3;
  *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x28) = 1;
  *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x40) = 0;
  *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x38) = 0;
  *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x50) = 0;
  *(undefined8 *)(puVar10 + uVar11 * 0x38 + 0x48) = 0;
  func_0x000107c5ed70();
  param_1[3] = &UNK_1106d4aa0;
  puVar8 = &UNK_110440e08;
  func_0x000107c613fc(&UNK_110440e08,0x42,7);
  *param_1 = puVar8;
  *(undefined **)(puVar8 + 0x10) = puVar9;
  *(long *)(puVar8 + 0x18) = lVar7;
  *(undefined **)(puVar8 + 0x20) = puVar10;
  *(undefined8 *)(puVar8 + 0x28) = uVar14;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  *(undefined8 *)(puVar8 + 0x38) = uVar13;
  puVar8[0x40] = bVar4 & 1;
  puVar8[0x41] = 0;
  return;
}



/* Entry: 101ad63bc; end: 101ad655b; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader requestPayloadWithURL:error:] */

void FUN_101ad63bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_101ad5ebc(auStack_60,puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  puVar2 = auStack_60;
  func_0x0001006732c8(puVar2,uStack_48);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ad655c; end: 101ad67d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101ad655c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_80 [32];
  
  lVar3 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_d0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ec24();
  lStack_c8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000bb420(param_1,auStack_80);
  puVar4 = &uStack_b8;
  func_0x000107c6147c(puVar4,auStack_80,PTR___sypN_11034f1a8 + 8,&UNK_1106d4aa0,6);
  lStack_c0 = lVar3;
  if ((int)puVar4 == 0) {
    uVar13 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c6142c(uStack_a8);
    lVar3 = lStack_b0;
    uVar13 = uStack_b8;
  }
  uVar5 = uVar13;
  FUN_101ad6ef8(uVar13,lVar3);
  uVar6 = uVar13;
  FUN_101ad74c4(uVar13,lVar3,*(undefined8 *)(unaff_x20 + _DAT_112dfa230));
  if (uVar6 != 0) {
    uVar7 = 0;
    func_0x000101ad8fcc(0);
    uVar10 = uVar6;
    func_0x000107c61480(uVar6,uVar7);
    if (uVar10 != 0) goto LAB_101ad6730;
    func_0x000107c615e8(uVar6);
  }
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112dfa228);
  func_0x0001000bb420(param_1,&uStack_b8);
  func_0x000101ad8fcc(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_101ad7afc();
  if ((uVar5 & 1) != 0) {
    if (lVar3 == 0) {
      return uVar10;
    }
    func_0x000107c5ec14(puVar11,uVar13,lVar3);
    lVar2 = lStack_c0;
    lVar1 = lStack_c8;
    puVar8 = puVar11;
    (**(code **)(lStack_c8 + 0x30))(puVar11,1,lStack_c0);
    if ((int)puVar8 == 1) {
      func_0x000107c6142c(lVar3);
      func_0x000100f14918(puVar11);
      return uVar10;
    }
    (**(code **)(lVar1 + 0x20))(lVar12,puVar11,lVar2);
    lVar9 = 0;
    func_0x000107c5ec08(0);
    func_0x000107c5ec18();
    func_0x000107c6142c(lVar3);
    (**(code **)(lVar1 + 8))(lVar12,lVar2);
    if (lVar9 == 0) {
      return uVar10;
    }
    lVar3 = lVar9;
    if (uVar10 != 0) {
      uVar13 = uVar10;
      func_0x000107c61174(uVar10);
      FUN_101ad92b4();
      func_0x000107c61170(uVar13);
    }
  }
LAB_101ad6730:
  func_0x000107c6142c(lVar3);
  return uVar10;
}



/* Entry: 101ad67d4; end: 101ad68df; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader loadVideoWithRequestPayload:parameters:completion:] */

void FUN_101ad67d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [32];
  
  puVar2 = auStack_50;
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = &UNK_110440e30;
  func_0x000107c613fc(&UNK_110440e30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  FUN_101ad7630(auStack_50,FUN_101ad79b4,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ad68e0; end: 101ad693f; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader init] */

void FUN_101ad68e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerVideoLoader.SingleSnapPlayerVideoLoader",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad690c);
  (*pcVar1)();
}



/* Entry: 101ad6940; end: 101ad6977; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ad695c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad6960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad6940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa228));
  return;
}



/* Entry: 101ad6978; end: 101ad699b; -[_TtCFC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader9loadVideoFT18withRequestPayloadP_10parametersVSo29SCValdiAssetRequestParameters10completionFTGSqPSo18SCValdiVideoPlayer__GSqPs5Error___T__PSo17SCValdiCancelable_L_15VideoCancelable cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad6978(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112dfa260) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112dfa268,0);
  return;
}



/* Entry: 101ad699c; end: 101ad69fb; -[_TtCFC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader9loadVideoFT18withRequestPayloadP_10parametersVSo29SCValdiAssetRequestParameters10completionFTGSqPSo18SCValdiVideoPlayer__GSqPs5Error___T__PSo17SCValdiCancelable_L_15VideoCancelable init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad699c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112dfa260) = 0;
  func_0x000107c61614(param_1 + _DAT_112dfa268,0);
  uVar1 = 0;
  FUN_101ad7994();
  lStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad69fc; end: 101ad6a2f;  */

void FUN_101ad69fc(void)

{
  FUN_101ad7994();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad6a30; end: 101ad6a47; -[_TtCFC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoLoader9loadVideoFT18withRequestPayloadP_10parametersVSo29SCValdiAssetRequestParameters10completionFTGSqPSo18SCValdiVideoPlayer__GSqPs5Error___T__PSo17SCValdiCancelable_L_15VideoCancelable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad6a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112dfa268);
  return;
}



/* Entry: 101ad6a48; end: 101ad6bbb;  */

void FUN_101ad6a48(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 101ad6bbc; end: 101ad6be3;  */

void FUN_101ad6bbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 101ad6be4; end: 101ad6c67;  */

void FUN_101ad6be4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112dfa318;
  FUN_101ad7abc(0x112dfa318,FUN_101ad79e8,&UNK_10d9cc154);
  uVar2 = 0x112dfa320;
  FUN_101ad7abc(0x112dfa320,FUN_101ad79e8,&UNK_10d9cc0fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 101ad6c68; end: 101ad6cdf;  */

undefined8 FUN_101ad6c68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 101ad6ce0; end: 101ad6ef7;  */

undefined1 * FUN_101ad6ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 101ad6ef8; end: 101ad71e7;  */

undefined8 FUN_101ad6ef8(undefined8 param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ebbc();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  uVar10 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = uVar10 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ec24();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    func_0x000107c5ec14(lVar13,param_1);
    lVar5 = lVar13;
    (**(code **)(lVar14 + 0x30))(lVar13,1,lVar4);
    if ((int)lVar5 == 1) {
      func_0x000100f14918(lVar13);
    }
    else {
      lVar5 = lVar11;
      (**(code **)(lVar14 + 0x20))(lVar11,lVar13,lVar4);
      func_0x000107c5ebc4();
      if (lVar5 != 0) {
        uVar15 = *(ulong *)(lVar5 + 0x10);
        if (uVar15 == 0) {
          uVar9 = 0;
        }
        else {
          uVar12 = 0;
          bVar1 = *(byte *)(lVar16 + 0x50);
          lStack_70 = lVar11;
          lStack_68 = lVar4;
          do {
            if (*(ulong *)(lVar5 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad71e8);
              (*pcVar2)();
            }
            uVar7 = lVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar16 + 0x48) * uVar12;
            uVar6 = uVar10;
            (**(code **)(lVar16 + 0x10))(uVar10,uVar7,lVar3);
            func_0x000107c5ebb4();
            uVar8 = uVar7;
            if ((uVar6 == 0x616c506573756572) && (uVar7 == 0xeb00000000726579)) {
              func_0x000107c6142c();
LAB_101ad7108:
              func_0x000107c5ebb8();
              if (uVar8 == 0) goto LAB_101ad7050;
              if ((uVar7 == 0x31) && (uVar8 == 0xe100000000000000)) {
                func_0x000107c6142c(0xe100000000000000);
                (**(code **)(lVar16 + 8))(uVar10,lVar3);
LAB_101ad71bc:
                uVar9 = 1;
                lVar4 = lStack_68;
                lVar11 = lStack_70;
                goto LAB_101ad71c4;
              }
              func_0x000107c605b8();
              func_0x000107c6142c(uVar8);
              (**(code **)(lVar16 + 8))(uVar10,lVar3);
              if ((uVar7 & 1) != 0) goto LAB_101ad71bc;
            }
            else {
              func_0x000107c605b8();
              func_0x000107c6142c();
              if ((uVar6 & 1) != 0) goto LAB_101ad7108;
LAB_101ad7050:
              (**(code **)(lVar16 + 8))(uVar10,lVar3);
            }
            uVar12 = uVar12 + 1;
          } while (uVar15 != uVar12);
          uVar9 = 0;
          lVar4 = lStack_68;
          lVar11 = lStack_70;
        }
LAB_101ad71c4:
        func_0x000107c6142c(lVar5);
        (**(code **)(lVar14 + 8))(lVar11,lVar4);
        return uVar9;
      }
      (**(code **)(lVar14 + 8))(lVar11,lVar4);
    }
  }
  return 0;
}



/* Entry: 101ad71e8; end: 101ad74c3;  */

bool FUN_101ad71e8(byte *param_1,byte *param_2)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte **ppbVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbStack_40;
  ulong uStack_38;
  
  if (param_2 == (byte *)0x0) {
    return false;
  }
  pbVar3 = (byte *)((ulong)param_1 & 0xffffffffffff);
  pbVar4 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar7 = pbVar3;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar7 = pbVar4;
  }
  if (pbVar7 == (byte *)0x0) {
    return false;
  }
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        param_1 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = pbVar3;
      }
      if (*param_1 == 0x2b) {
        pbVar4 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad74c0);
          (*pcVar2)();
        }
        if (pbVar4 == (byte *)0x0) {
          return false;
        }
        pbVar7 = (byte *)0x0;
        do {
          param_1 = param_1 + 1;
          if (9 < *param_1 - 0x30) {
            return false;
          }
          lVar6 = (long)pbVar7 * 10;
          if (SUB168(SEXT816((long)pbVar7) * SEXT816(10),8) != lVar6 >> 0x3f) {
            return false;
          }
          uVar1 = (ulong)(byte)(*param_1 - 0x30);
          pbVar7 = (byte *)(lVar6 + uVar1);
          if (SCARRY8(lVar6,uVar1)) {
            return false;
          }
          pbVar4 = pbVar4 + -1;
        } while (pbVar4 != (byte *)0x0);
      }
      else if (*param_1 == 0x2d) {
        pbVar4 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad74b8);
          (*pcVar2)();
        }
        if (pbVar4 == (byte *)0x0) {
          return false;
        }
        pbVar7 = (byte *)0x0;
        do {
          param_1 = param_1 + 1;
          if (9 < *param_1 - 0x30) {
            return false;
          }
          lVar6 = (long)pbVar7 * 10;
          if (SUB168(SEXT816((long)pbVar7) * SEXT816(10),8) != lVar6 >> 0x3f) {
            return false;
          }
          uVar1 = (ulong)(byte)(*param_1 - 0x30);
          pbVar7 = (byte *)(lVar6 - uVar1);
          if (SBORROW8(lVar6,uVar1)) {
            return false;
          }
          pbVar4 = pbVar4 + -1;
        } while (pbVar4 != (byte *)0x0);
      }
      else {
        if (param_2 == (byte *)0x0) {
          return false;
        }
        pbVar7 = (byte *)0x0;
        pbVar4 = param_1;
        while (pbVar4 != (byte *)0x0) {
          if (9 < *param_1 - 0x30) {
            return false;
          }
          lVar6 = (long)pbVar7 * 10;
          if (SUB168(SEXT816((long)pbVar7) * SEXT816(10),8) != lVar6 >> 0x3f) {
            return false;
          }
          uVar1 = (ulong)(byte)(*param_1 - 0x30);
          pbVar7 = (byte *)(lVar6 + uVar1);
          if (SCARRY8(lVar6,uVar1)) {
            return false;
          }
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          pbVar4 = param_2;
        }
      }
      goto LAB_101ad745c;
    }
    pbStack_40 = param_1;
    uStack_38 = (ulong)param_2 & 0xffffffffffffff;
    uVar8 = (uint)param_1 & 0xff;
    if (uVar8 == 0x2b) {
      if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad74c4);
        (*pcVar2)();
      }
      pbVar4 = pbVar4 + -1;
      if (pbVar4 == (byte *)0x0) goto LAB_101ad7440;
      pbVar7 = (byte *)0x0;
      pbVar3 = (byte *)((ulong)&pbStack_40 | 1);
      do {
        if (((9 < *pbVar3 - 0x30) ||
            (lVar6 = (long)pbVar7 * 10,
            SUB168(SEXT816((long)pbVar7) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar3 - 0x30), pbVar7 = (byte *)(lVar6 + uVar1),
           SCARRY8(lVar6,uVar1))) goto LAB_101ad7440;
        uVar8 = 0;
        pbVar4 = pbVar4 + -1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar4 != (byte *)0x0);
    }
    else if (uVar8 == 0x2d) {
      if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad74bc);
        (*pcVar2)();
      }
      pbVar4 = pbVar4 + -1;
      if (pbVar4 == (byte *)0x0) {
LAB_101ad7440:
        uVar8 = 1;
        pbVar7 = (byte *)0x0;
      }
      else {
        pbVar7 = (byte *)0x0;
        pbVar3 = (byte *)((ulong)&pbStack_40 | 1);
        do {
          if (((9 < *pbVar3 - 0x30) ||
              (lVar6 = (long)pbVar7 * 10,
              SUB168(SEXT816((long)pbVar7) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar3 - 0x30), pbVar7 = (byte *)(lVar6 - uVar1),
             SBORROW8(lVar6,uVar1))) goto LAB_101ad7440;
          uVar8 = 0;
          pbVar4 = pbVar4 + -1;
          pbVar3 = pbVar3 + 1;
        } while (pbVar4 != (byte *)0x0);
      }
    }
    else {
      if (pbVar4 == (byte *)0x0) goto LAB_101ad7440;
      pbVar7 = (byte *)0x0;
      ppbVar5 = &pbStack_40;
      do {
        if (((9 < *(byte *)ppbVar5 - 0x30) ||
            (lVar6 = (long)pbVar7 * 10,
            SUB168(SEXT816((long)pbVar7) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*(byte *)ppbVar5 - 0x30), pbVar7 = (byte *)(lVar6 + uVar1),
           SCARRY8(lVar6,uVar1))) goto LAB_101ad7440;
        uVar8 = 0;
        pbVar4 = pbVar4 + -1;
        ppbVar5 = (byte **)((long)ppbVar5 + 1);
      } while (pbVar4 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(param_2);
    pbVar7 = param_2;
    func_0x000100edba6c(param_1,param_2,10);
    uVar8 = (uint)pbVar7;
    func_0x000107c6142c(param_2);
    pbVar7 = param_1;
  }
  if ((uVar8 & 0xff) == 1) {
    return false;
  }
LAB_101ad745c:
  return 0 < (long)pbVar7;
}



/* Entry: 101ad74c4; end: 101ad762f;  */

long FUN_101ad74c4(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ec24();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  FUN_101ad6ef8(param_1,param_2);
  if (((uVar2 & 1) != 0) && (param_2 != 0)) {
    func_0x000107c5ec14(puVar6,param_1,param_2);
    puVar3 = puVar6;
    (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
    if ((int)puVar3 == 1) {
      func_0x000100f14918(puVar6);
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar1);
      lVar4 = 0;
      lVar5 = 0;
      func_0x000107c5ec08();
      func_0x000107c5ec18();
      (**(code **)(lVar8 + 8))(lVar7,lVar1);
      if (lVar5 != 0) {
        FUN_101ad91d8(lVar4,lVar5);
        func_0x000107c6142c(lVar5);
        if (lVar4 != 0) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}



/* Entry: 101ad7630; end: 101ad7993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ad7630(undefined8 param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_80 [32];
  undefined *puVar5;
  
  lVar2 = 0;
  pcStack_c0 = param_2;
  func_0x000107c5f7fc();
  lStack_c8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar10 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_101ad7994();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000bb420(param_1,auStack_80);
  ppuVar4 = &puStack_b8;
  func_0x000107c6147c(ppuVar4,auStack_80,PTR___sypN_11034f1a8 + 8,&UNK_1106d4aa0,6);
  if ((int)ppuVar4 == 0) {
    puVar13 = (undefined *)0x0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c6142c(puStack_a8);
    puVar13 = puStack_b8;
  }
  puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar5;
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    func_0x000107c6142c(uStack_b0);
  }
  else {
    FUN_101ad74c4(puVar13,uStack_b0,*(undefined8 *)(unaff_x20 + _DAT_112dfa230));
    func_0x000107c6142c(uStack_b0);
    if (puVar13 != (undefined *)0x0) {
      uVar6 = 0;
      func_0x000101ad8fcc(0);
      puVar5 = puVar13;
      func_0x000107c61480(puVar13,uVar6);
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c61604(lVar3 + _DAT_112dfa268,puVar5);
        func_0x000107c615f0(puVar13);
        (*pcStack_c0)(puVar5,0);
        func_0x000107c615ec(puVar13,2);
        return lVar3;
      }
      func_0x000107c615e8(puVar13);
    }
  }
  uVar7 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar13 = &UNK_110440e58;
  func_0x000107c613fc(&UNK_110440e58,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  func_0x0001000bb420(param_1,auStack_80);
  puVar5 = &UNK_110440e80;
  func_0x000107c613fc(&UNK_110440e80,0x50,7);
  *(undefined **)(puVar5 + 0x10) = puVar13;
  *(long *)(puVar5 + 0x18) = lVar3;
  func_0x000100102924(auStack_80,puVar5 + 0x20);
  *(code **)(puVar5 + 0x40) = pcStack_c0;
  *(undefined8 *)(puVar5 + 0x48) = param_3;
  uStack_98 = 0x101ad79bc;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_110440e98;
  ppuVar4 = &puStack_b8;
  puStack_90 = puVar5;
  func_0x000107c60bc4(ppuVar4);
  puVar13 = puStack_90;
  func_0x000107c61174(lVar3);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar13);
  func_0x000107c5f808(lVar12);
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_101ad7abc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = uVar8;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar10,&puStack_b8,uVar8,uVar9,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar12,lVar10,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar7);
  (**(code **)(lStack_c8 + 8))(lVar10,lVar2);
  (**(code **)(lVar11 + 8))(lVar12,lStack_d0);
  return lVar3;
}



/* Entry: 101ad7994; end: 101ad79b3;  */

void FUN_101ad7994(void)

{
  func_0x000107c61168(&PTR_PTR_1127f5108);
  return;
}



/* Entry: 101ad79b4; end: 101ad79e7;  */

void FUN_101ad79b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ad79e8; end: 101ad7abb;  */

void FUN_101ad79e8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112dfa2f8 != 0) {
    return;
  }
  puVar1 = &UNK_110440ed0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112dfa2f8 = param_1;
  return;
}



/* Entry: 101ad7abc; end: 101ad7afb;  */

void FUN_101ad7abc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101ad7afc; end: 101ad8103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ad7afc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined2 uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  code *pcVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined1 auStack_148 [32];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined5 uStack_85;
  undefined2 uStack_80;
  undefined5 uStack_7e;
  undefined4 uStack_79;
  byte bStack_75;
  byte bStack_74;
  undefined2 uStack_73;
  undefined1 uStack_71;
  
  lVar6 = _DAT_112dfa330;
  *(undefined8 *)(unaff_x20 + _DAT_112dfa330) = 0;
  lVar7 = _DAT_112dfa338;
  *(undefined8 *)(unaff_x20 + _DAT_112dfa338) = 0;
  lVar8 = _DAT_112dfa340;
  *(undefined8 *)(unaff_x20 + _DAT_112dfa340) = 0;
  lVar9 = _DAT_112dfa348;
  *(undefined8 *)(unaff_x20 + _DAT_112dfa348) = 0;
  lVar10 = _DAT_112dfa350;
  *(undefined8 *)(unaff_x20 + _DAT_112dfa350) = 0;
  lVar11 = _DAT_112dfa358;
  func_0x0001000285a8(0x112dfa3c8,&UNK_10d9cc220);
  func_0x000107c613fc();
  uVar15 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar11) = uVar15;
  lVar12 = _DAT_112dfa360;
  func_0x0001000285a8(0x112dfa3d0,&UNK_10d9cc228);
  func_0x000107c613fc();
  uVar15 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar12) = uVar15;
  lVar13 = _DAT_112dfa368;
  lVar24 = 0x112d53b48;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar15 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar13) = uVar15;
  lVar14 = _DAT_112dfa370;
  func_0x000107c613fc(lVar24,*(undefined4 *)(lVar24 + 0x30),*(undefined2 *)(lVar24 + 0x34));
  uVar15 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar14) = uVar15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dfa378);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112dfa380);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112dfa388);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112dfa390);
  *puVar4 = 0;
  puVar4[1] = 0;
  func_0x0001000bb420(param_2,&uStack_f0);
  puVar16 = &uStack_b0;
  func_0x000107c6147c(puVar16,&uStack_f0,PTR___sypN_11034f1a8 + 8,&UNK_1106d4aa0,6);
  if ((int)puVar16 == 0) {
    uVar22 = 0;
    lVar24 = 0;
    uVar18 = 0;
    uVar25 = 0;
    uVar19 = 0;
    uVar15 = 0;
    uVar20 = 0;
  }
  else {
    uVar15 = CONCAT53(uStack_85,CONCAT12(uStack_86,uStack_88));
    func_0x000107c61434(lStack_a8);
    uVar19 = uStack_90;
    uVar22 = uStack_b0;
    lVar24 = lStack_a8;
    uVar18 = uStack_a0;
    uVar25 = uStack_98;
    uVar20 = uStack_80;
  }
  uVar17 = uVar22;
  FUN_101ad6ef8(uVar22,lVar24);
  func_0x000107c6142c(lVar24);
  bStack_75 = (byte)uVar17 & 1;
  uStack_b0 = 0x7265736f706d6f43;
  lStack_a8 = 0xe800000000000000;
  uStack_98 = 1;
  uStack_a0 = 1;
  uStack_90 = 0xd4;
  uStack_88 = 0x101;
  uStack_86 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_79 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  bStack_74 = bStack_75;
  if (lVar24 == 0) {
    uVar19 = 0;
  }
  else {
    FUN_101ad91a0(uVar22,lVar24,uVar18,uVar25,uVar19,uVar15,uVar20);
  }
  lVar24 = param_1 + _DAT_112fec990;
  uVar15 = *(undefined8 *)(lVar24 + 0x18);
  lVar5 = *(long *)(lVar24 + 0x20);
  func_0x0001000a8868(lVar24,uVar15);
  uVar18 = 1;
  (**(code **)(lVar5 + 8))(1,uVar19,0,uVar15,lVar5);
  func_0x0001000d224c(&uStack_f0);
  if (lStack_d8 == 0) {
    FUN_101ad9180(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61574(uVar18);
    FUN_101ad90b8(&uStack_b0);
    func_0x000101ad90ec(&uStack_f0);
    func_0x000107c615e8(*(undefined8 *)(unaff_x20 + lVar6));
    func_0x000107c615e8(*(undefined8 *)(unaff_x20 + lVar7));
    func_0x000107c615e8(*(undefined8 *)(unaff_x20 + lVar8));
    func_0x000107c615e8(*(undefined8 *)(unaff_x20 + lVar9));
    func_0x000107c615e8(*(undefined8 *)(unaff_x20 + lVar10));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar11));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar12));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar13));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar14));
    func_0x000107c615e8(*puVar1);
    func_0x000107c615e8(*puVar2);
    func_0x000107c615e8(*puVar3);
    func_0x000107c615e8(*puVar4);
    func_0x000101ad8fcc();
    func_0x000107c61464();
    puVar21 = (undefined1 *)0x0;
  }
  else {
    FUN_101ad9134(&uStack_f0,auStack_118);
    func_0x0001000a8868(auStack_118,uStack_100);
    puVar16 = &uStack_b0;
    uVar15 = uStack_100;
    (**(code **)(lStack_f8 + 8))(puVar16,uStack_100,lStack_f8);
    FUN_101ad90b8();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dfa328);
    *puVar1 = puVar16;
    puVar1[1] = uVar15;
    func_0x000101ad8fcc();
    puVar21 = &stack0xfffffffffffffed8;
    func_0x000107c61154(puVar21,PTR_s_init_1125d9248);
    puVar1 = (undefined8 *)(puVar21 + _DAT_112dfa328);
    uVar15 = *puVar1;
    lVar24 = puVar1[1];
    uVar19 = uVar15;
    func_0x000107c614f0(uVar15);
    pcVar23 = *(code **)(lVar24 + 0x40);
    func_0x000107c61174(puVar21);
    func_0x000107c615f0(uVar15);
    (*pcVar23)(puVar21,&PTR_DAT_110440f98,uVar19,lVar24);
    func_0x000107c615e8(uVar15);
    uVar15 = *puVar1;
    lVar24 = puVar1[1];
    uVar19 = uVar15;
    func_0x000107c614f0(uVar15);
    lVar24 = *(long *)(lVar24 + 0x10);
    pcVar23 = *(code **)(lVar24 + 0x18);
    func_0x000107c615f0(uVar15);
    (*pcVar23)(0,1,uVar19,lVar24);
    func_0x000107c615e8(uVar15);
    if ((uVar17 & 1) != 0) {
      uVar15 = *puVar1;
      lVar24 = puVar1[1];
      uVar19 = uVar15;
      func_0x000107c614f0(uVar15);
      lVar24 = *(long *)(lVar24 + 0x10);
      pcVar23 = *(code **)(lVar24 + 0x90);
      func_0x000107c615f0(uVar15);
      (*pcVar23)(1,uVar19,lVar24);
      func_0x000107c615e8(uVar15);
    }
    uVar15 = *puVar1;
    lVar24 = puVar1[1];
    uVar19 = uVar15;
    func_0x000107c614f0(uVar15);
    func_0x0001000bb420(param_2,auStack_148);
    func_0x000107c615f0(uVar15);
    func_0x000107c6147c(&uStack_180,auStack_148,PTR___sypN_11034f1a8 + 8,&UNK_1106d4aa0,7);
    uStack_e8 = uStack_178;
    uStack_f0 = uStack_180;
    lStack_d8 = uStack_168;
    uStack_e0 = uStack_170;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_c0 = uStack_150;
    (**(code **)(lVar24 + 0x28))(&uStack_f0,uVar19,lVar24);
    func_0x000107c61574(uVar18);
    FUN_101ad914c(&uStack_f0);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar21);
    func_0x000107c615e8(uVar15);
    FUN_101ad9180(param_2);
    FUN_101ad9180(auStack_118);
  }
  return puVar21;
}



/* Entry: 101ad8104; end: 101ad810f; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer size] */

undefined1  [16] FUN_101ad8104(void)

{
  return ZEXT816(0);
}



/* Entry: 101ad8110; end: 101ad819b; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8110(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dfa328);
  lVar3 = ((undefined8 *)(param_2 + _DAT_112dfa328))[1];
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  lVar3 = *(long *)(lVar3 + 0x10);
  pcVar4 = *(code **)(lVar3 + 0xa8);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(uVar1);
  (*pcVar4)(param_1,uVar2,lVar3);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ad819c; end: 101ad821f; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer getView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad819c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dfa328);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112dfa328))[1];
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  pcVar4 = *(code **)(lVar2 + 0x18);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar1);
  (*pcVar4)(uVar3,lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ad8220; end: 101ad82ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8220(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dfa328);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dfa328))[1];
  uVar4 = uVar1;
  func_0x000107c614f0(uVar1);
  if (0x7f7fffff < (uint)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ad82e8);
    (*pcVar3)();
  }
  if (-9.223373e+18 < param_1) {
    if (param_1 < 9.223372e+18) {
      func_0x000107c615f0(uVar1);
      func_0x000107c60a40(&uStack_58,(long)param_1,1000);
      (**(code **)(*(long *)(lVar2 + 0x10) + 0x60))(uStack_58,uStack_50,uStack_48,0,0,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ad82f0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ad82ec);
  (*pcVar3)();
}



/* Entry: 101ad82f0; end: 101ad8327; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setSeekToTime:] */

void FUN_101ad82f0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_101ad8220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ad8328; end: 101ad839b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8328(float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dfa328);
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112dfa328))[1];
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  if (param_1 <= 0.5) {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  pcVar4 = *(code **)(lVar3 + 0x30);
  func_0x000107c615f0(uVar1);
  (*pcVar4)(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101ad839c; end: 101ad83d3; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setPlaybackRate:] */

void FUN_101ad839c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_101ad8328(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ad83d4; end: 101ad84e7;  */

/* WARNING: Possible PIC construction at 0x000101ad8434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad8454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad8438) */
/* WARNING: Removing unreachable block (ram,0x000101ad8458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad83d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dfa378);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112dfa330);
    *(undefined8 *)(unaff_x20 + _DAT_112dfa330) = param_1;
    func_0x000107c615f0();
  }
  else {
    lVar3 = ((long *)(unaff_x20 + _DAT_112dfa378))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101ad84e8; end: 101ad8573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad84e8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c30ef0();
    func_0x000107c30f04(uVar2);
    if (*(long *)(param_2 + _DAT_112dfa330) != 0) {
      func_0x000107c4e5ec();
    }
    func_0x000107c30ef4(lVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101ad8574; end: 101ad85a3; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setOnVideoLoadedCallback:] */

void FUN_101ad8574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101ad83d4(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad85a4; end: 101ad85af; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setOnBeginPlayingCallback:] */

void FUN_101ad85a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101ad8580)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad85b0; end: 101ad8603;  */

void FUN_101ad85b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad8604; end: 101ad8627;  */

/* WARNING: Possible PIC construction at 0x000101ad879c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad87b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad87a0) */
/* WARNING: Removing unreachable block (ram,0x000101ad87bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8604(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112dfa388);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112dfa340);
    *(undefined8 *)(unaff_x20 + _DAT_112dfa340) = param_1;
    func_0x000107c615f0();
  }
  else {
    lVar3 = ((long *)(unaff_x20 + _DAT_112dfa388))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2,&DAT_112dfa388,&DAT_112dfa340,&DAT_112dfa358,FUN_101ad9038);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101ad8628; end: 101ad86ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8628(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar2 = &uStack_50;
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c30ef0();
    uStack_50 = uVar3;
    func_0x000107c614b0(uVar3);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fb18(&uStack_50,uVar3);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
    func_0x000107c30ef8(lVar1,puVar2);
    func_0x000107c61170(puVar2);
    if (*(long *)(param_2 + _DAT_112dfa340) != 0) {
      func_0x000107c4e5ec();
    }
    func_0x000107c30ef4(lVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101ad8700; end: 101ad872f; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setOnErrorCallback:] */

void FUN_101ad8700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101ad8604(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad8730; end: 101ad8827;  */

/* WARNING: Possible PIC construction at 0x000101ad879c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad87b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad87a0) */
/* WARNING: Removing unreachable block (ram,0x000101ad87bc) */

void FUN_101ad8730(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + *param_2);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + *param_3);
    *(undefined8 *)(unaff_x20 + *param_3) = param_1;
    func_0x000107c615f0();
  }
  else {
    lVar3 = ((long *)(unaff_x20 + *param_2))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101ad8828; end: 101ad88a7;  */

void FUN_101ad8828(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c30ef0();
    if (*(long *)(param_2 + *param_3) != 0) {
      func_0x000107c4e5ec();
    }
    func_0x000107c30ef4(lVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101ad88a8; end: 101ad88b3; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setOnCompletedCallback:] */

void FUN_101ad88a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101ad870c)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad88b4; end: 101ad88e7; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer setOnProgressUpdatedCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad88b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dfa350);
  *(undefined8 *)(param_1 + _DAT_112dfa350) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101ad88e8; end: 101ad8b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad88e8(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_112dfa328))[1];
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dfa328);
  lVar5 = *(long *)(unaff_x20 + _DAT_112dfa378);
  if (lVar5 == 0) {
    func_0x000107c615f0(uVar8);
  }
  else {
    lVar6 = ((long *)(unaff_x20 + _DAT_112dfa378))[1];
    lVar1 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar7 = *(code **)(lVar6 + 8);
    func_0x000107c615f0(uVar8);
    func_0x000107c615f0(lVar5);
    (*pcVar7)(lVar1,lVar6);
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112dfa380);
  if (lVar5 != 0) {
    lVar6 = ((long *)(unaff_x20 + _DAT_112dfa380))[1];
    lVar1 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar7 = *(code **)(lVar6 + 8);
    func_0x000107c615f0(lVar5);
    (*pcVar7)(lVar1,lVar6);
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112dfa388);
  if (lVar5 != 0) {
    lVar6 = ((long *)(unaff_x20 + _DAT_112dfa388))[1];
    lVar1 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar7 = *(code **)(lVar6 + 8);
    func_0x000107c615f0(lVar5);
    (*pcVar7)(lVar1,lVar6);
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112dfa390);
  if (lVar5 != 0) {
    lVar6 = ((long *)(unaff_x20 + _DAT_112dfa390))[1];
    lVar1 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar7 = *(code **)(lVar6 + 8);
    func_0x000107c615f0(lVar5);
    (*pcVar7)(lVar1,lVar6);
    func_0x000107c615e8(lVar5);
  }
  pcVar2 = "deinit";
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar3 = &UNK_110441010;
  func_0x000107c613fc(&UNK_110441010,0x20,7);
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  pcStack_50 = FUN_101ad9068;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110441028;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_48;
  func_0x000107c615f0(uVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uVar8);
  func_0x000107c615e8();
  func_0x000101ad8fcc();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad8b24; end: 101ad8b47; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer dealloc] */

void FUN_101ad8b24(void)

{
  func_0x000107c61174();
  FUN_101ad88e8();
  return;
}



/* Entry: 101ad8b48; end: 101ad8c3f; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ad8b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad8b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad8ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad8c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad8c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad8c08) */
/* WARNING: Removing unreachable block (ram,0x000101ad8ba8) */
/* WARNING: Removing unreachable block (ram,0x000101ad8b88) */
/* WARNING: Removing unreachable block (ram,0x000101ad8b68) */
/* WARNING: Removing unreachable block (ram,0x000101ad8c28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dfa328));
  return;
}



/* Entry: 101ad8c40; end: 101ad8e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8c40(long *param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long unaff_x20;
  long *plStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  pplVar6 = &plStack_80;
  uVar1 = param_4 & 0xff;
  if (uVar1 < 3) {
    if ((param_4 & 0xff) == 0) {
      plVar7 = param_1;
      func_0x000107c30ef0();
      func_0x000107c30f04(param_1);
      func_0x000107c30f04(param_2,plVar7);
      if (*(long *)(unaff_x20 + _DAT_112dfa350) != 0) {
        func_0x000107c4e5ec();
      }
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))();
        return;
      }
      return;
    }
    if (uVar1 != 1) {
      lVar2 = 0x112dfa3c0;
      func_0x0001000285a8(0x112dfa3c0,&UNK_10d9cc210);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined ***)(lVar2 + 0x20) = &PTR____CFConstantStringClassReference_110dd00b8;
      uVar3 = 0;
      FUN_101ad79e8(0);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110dd00b8);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar3);
      func_0x000107c61574(lVar2);
      puVar5 = &UNK_110440fc0;
      func_0x000107c613fc(&UNK_110440fc0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      uStack_60 = 0x101ad8ff4;
      plStack_80 = (long *)PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_101ad8f30;
      puStack_68 = &UNK_110440fd8;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&plStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c4b798(param_1);
      func_0x000107c60bd0(pplVar6);
      func_0x000107c61170(lVar4);
    }
  }
  else if ((1 << (ulong)(param_4 & 0x1f) & 0x3b8U) == 0) {
    plVar7 = param_1;
    if (uVar1 != 6) {
      if ((param_3 == 0 && param_2 == 0) && param_1 == (long *)0x0) {
        return;
      }
      if ((param_1 != (long *)0x1) || (param_3 != 0 || param_2 != 0)) {
        if ((param_1 == (long *)0x2) && (param_3 == 0 && param_2 == 0)) {
          return;
        }
        if (param_1 != (long *)0x3) {
          return;
        }
        if (param_3 != 0 || param_2 != 0) {
          return;
        }
      }
      plStack_80 = (long *)CONCAT71(plStack_80._1_7_,1);
      plVar7 = plStack_80;
    }
    plStack_80 = plVar7;
    func_0x000100087c34(&plStack_80);
  }
  return;
}



/* Entry: 101ad8e80; end: 101ad8f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8e80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112dfa360);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c42378(auStack_60,param_1);
    func_0x000107c60a3c(auStack_60);
    func_0x000100087c34(auStack_60);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101ad8f30; end: 101ad8f9f;  */

void FUN_101ad8f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ad8fa0; end: 101ad8feb; -[_TtC27SingleSnapPlayerVideoLoader27SingleSnapPlayerVideoPlayer init] */

void FUN_101ad8fa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerVideoLoader.SingleSnapPlayerVideoPlayer",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad8fcc);
  (*pcVar1)();
}



/* Entry: 101ad8fec; end: 101ad9017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad8fec(long *param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long unaff_x20;
  long *plStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  pplVar6 = &plStack_80;
  uVar1 = param_4 & 0xff;
  if (uVar1 < 3) {
    if ((param_4 & 0xff) == 0) {
      plVar7 = param_1;
      func_0x000107c30ef0();
      func_0x000107c30f04(param_1);
      func_0x000107c30f04(param_2,plVar7);
      if (*(long *)(unaff_x20 + _DAT_112dfa350) != 0) {
        func_0x000107c4e5ec();
      }
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))();
        return;
      }
      return;
    }
    if (uVar1 != 1) {
      lVar2 = 0x112dfa3c0;
      func_0x0001000285a8(0x112dfa3c0,&UNK_10d9cc210);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined ***)(lVar2 + 0x20) = &PTR____CFConstantStringClassReference_110dd00b8;
      uVar3 = 0;
      FUN_101ad79e8(0);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110dd00b8);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar3);
      func_0x000107c61574(lVar2);
      puVar5 = &UNK_110440fc0;
      func_0x000107c613fc(&UNK_110440fc0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      uStack_60 = 0x101ad8ff4;
      plStack_80 = (long *)PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_101ad8f30;
      puStack_68 = &UNK_110440fd8;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&plStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c4b798(param_1);
      func_0x000107c60bd0(pplVar6);
      func_0x000107c61170(lVar4);
    }
  }
  else if ((1 << (ulong)(param_4 & 0x1f) & 0x3b8U) == 0) {
    plVar7 = param_1;
    if (uVar1 != 6) {
      if ((param_3 == 0 && param_2 == 0) && param_1 == (long *)0x0) {
        return;
      }
      if ((param_1 != (long *)0x1) || (param_3 != 0 || param_2 != 0)) {
        if ((param_1 == (long *)0x2) && (param_3 == 0 && param_2 == 0)) {
          return;
        }
        if (param_1 != (long *)0x3) {
          return;
        }
        if (param_3 != 0 || param_2 != 0) {
          return;
        }
      }
      plStack_80 = (long *)CONCAT71(plStack_80._1_7_,1);
      plVar7 = plStack_80;
    }
    plStack_80 = plVar7;
    func_0x000100087c34(&plStack_80);
  }
  return;
}



/* Entry: 101ad9018; end: 101ad9037;  */

void FUN_101ad9018(void)

{
  FUN_101ad8828();
  return;
}



/* Entry: 101ad9038; end: 101ad903f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad9038(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar3 = &uStack_50;
  uVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c30ef0();
    uStack_50 = uVar4;
    func_0x000107c614b0(uVar4);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fb18(&uStack_50,uVar4);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
    func_0x000107c30ef8(lVar2,puVar3);
    func_0x000107c61170(puVar3);
    if (*(long *)(lVar1 + _DAT_112dfa340) != 0) {
      func_0x000107c4e5ec();
    }
    func_0x000107c30ef4(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101ad9040; end: 101ad905f;  */

void FUN_101ad9040(void)

{
  FUN_101ad8828();
  return;
}



/* Entry: 101ad9060; end: 101ad9067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad9060(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c30ef0();
    func_0x000107c30f04(uVar3);
    if (*(long *)(lVar1 + _DAT_112dfa330) != 0) {
      func_0x000107c4e5ec();
    }
    func_0x000107c30ef4(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101ad9068; end: 101ad90b7;  */

void FUN_101ad9068(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x38))();
  (**(code **)(lVar1 + 0x48))(uVar2,lVar1);
  return;
}



/* Entry: 101ad90b8; end: 101ad9133;  */

undefined8 FUN_101ad90b8(undefined8 param_1)

{
  (*(code *)&DAT_103b294e0)();
  return param_1;
}



/* Entry: 101ad9134; end: 101ad914b;  */

undefined8 * FUN_101ad9134(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101ad914c; end: 101ad917f;  */

undefined8 FUN_101ad914c(undefined8 param_1)

{
  (*(code *)&DAT_103b299d8)();
  return param_1;
}



/* Entry: 101ad9180; end: 101ad919f;  */

void FUN_101ad9180(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101ad9194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101ad91a0; end: 101ad91cf;  */

/* WARNING: Possible PIC construction at 0x000101ad91b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad91bc) */

void FUN_101ad91a0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 101ad91d0; end: 101ad91d7;  */

void FUN_101ad91d0(long param_1,long param_2)

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



/* Entry: 101ad91d8; end: 101ad9243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101ad91d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uVar1 = 0x112dc3ff0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000285a8(0x112dc3ff0,&UNK_10d981690);
  func_0x000100075034(&uStack_38,FUN_101ad9244,auStack_60,uVar1);
  return uStack_38;
}



/* Entry: 101ad9244; end: 101ad92b3;  */

void FUN_101ad9244(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  
  if (param_2[1] != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    if ((uVar1 == *(ulong *)(unaff_x20 + 0x10) && param_2[1] == *(ulong *)(unaff_x20 + 0x18)) ||
       (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
      func_0x000107c615f0(uVar2);
      goto LAB_101ad92a0;
    }
  }
  uVar2 = 0;
LAB_101ad92a0:
  *param_1 = uVar2;
  return;
}



/* Entry: 101ad92b4; end: 101ad930f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad92b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_1;
  func_0x000100075034(FUN_101ad9310,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 101ad9310; end: 101ad936f;  */

void FUN_101ad9310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_101ad95e8(*param_1,param_1[1],param_1[2]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  func_0x000107c61434(uVar2);
  func_0x000107c615f0(uVar3);
  return;
}



/* Entry: 101ad9370; end: 101ad93c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad9370(void)

{
  func_0x000100075034(FUN_101ad93c4,0,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 101ad93c4; end: 101ad93fb;  */

void FUN_101ad93c4(undefined8 *param_1)

{
  FUN_101ad95e8(*param_1,param_1[1],param_1[2]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101ad93fc; end: 101ad942f;  */

void FUN_101ad93fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad9430; end: 101ad943f;  */

undefined1  [16] FUN_101ad9430(void)

{
  return ZEXT816(0x1104410e8);
}



/* Entry: 101ad9440; end: 101ad9453; -[_TtC33SponsoredSnapThumbnailPlayerStore33SponsoredSnapThumbnailPlayerStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad9440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfa3f0));
  return;
}


