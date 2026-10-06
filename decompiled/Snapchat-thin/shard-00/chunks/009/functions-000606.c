/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b9c2b4; end: 100b9c2bf; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8860;
  func_0x000107c61428(param_1 + _DAT_112ef8860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9c2c0; end: 100b9c313;  */

void FUN_100b9c2c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9c314; end: 100b9c31f; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8868;
  func_0x000107c61428(param_1 + _DAT_112ef8868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9c320; end: 100b9c383; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint setSCViewfinderDataPipelineServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8870;
  func_0x000107c61428(param_1 + _DAT_112ef8870,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b9c384; end: 100b9c3ab; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint begin] */

void FUN_100b9c384(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b9c3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b9c3ac; end: 100b9c52f;  */

/* WARNING: Possible PIC construction at 0x000100b9c4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9c4d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9c4b0) */
/* WARNING: Removing unreachable block (ram,0x000100b9c4c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c3ac(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51574();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b9c5d4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef86b0);
        *(undefined8 *)(lVar2 + _DAT_112ef7f90) = uVar6;
        *(long *)(lVar2 + _DAT_112ef7f98) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef7f98);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b9c530; end: 100b9c53b; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c530(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8860;
  func_0x000107c61428(param_1 + _DAT_112ef8860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9c53c; end: 100b9c57f;  */

void FUN_100b9c53c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9c580; end: 100b9c58b; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c580(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8868;
  func_0x000107c61428(param_1 + _DAT_112ef8868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9c58c; end: 100b9c5d3; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint sCViewfinderDataPipelineServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c58c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8870;
  func_0x000107c61428(param_1 + _DAT_112ef8870,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b9c5d4; end: 100b9c5f3;  */

void FUN_100b9c5d4(void)

{
  func_0x000107c61168(&PTR_PTR_11288eaf8);
  return;
}



/* Entry: 100b9c5f4; end: 100b9c673; -[SCSCViewfinderDataSourceServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c5f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef88a8,0);
  func_0x000107c61614(param_1 + _DAT_112ef88b0,0);
  *(undefined8 *)(param_1 + _DAT_112ef88b8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef88c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9c674; end: 100b9c693;  */

void FUN_100b9c674(void)

{
  func_0x000107c61168(&PTR_PTR_112de6a58);
  return;
}



/* Entry: 100b9c694; end: 100b9c73f; -[SCSCViewfinderDataSourceServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b9c694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9c740(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9c740; end: 100b9c943;  */

void FUN_100b9c740(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000025;
        if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f0a780)) &&
           (func_0x000107c605b8(0xd000000000000025,0x800000010f0f5880,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ViewfinderScopeGraphBridge/SCSCViewfinderDataSourceServicesSaberEntryPoint.swift"
                              ,0x50,2,0x40,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9c944);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58b20();
        goto LAB_100b9c7cc;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
LAB_100b9c7cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b9c944; end: 100b9c94f; -[SCSCViewfinderDataSourceServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef88a8;
  func_0x000107c61428(param_1 + _DAT_112ef88a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9c950; end: 100b9c9a3;  */

void FUN_100b9c950(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9c9a4; end: 100b9c9af; -[SCSCViewfinderDataSourceServicesSaberEntryPoint setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef88b0;
  func_0x000107c61428(param_1 + _DAT_112ef88b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9c9b0; end: 100b9ca13; -[SCSCViewfinderDataSourceServicesSaberEntryPoint setSCViewfinderDataSourceServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9c9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef88b8;
  func_0x000107c61428(param_1 + _DAT_112ef88b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b9ca14; end: 100b9ca3b; -[SCSCViewfinderDataSourceServicesSaberEntryPoint begin] */

void FUN_100b9ca14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b9ca3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b9ca3c; end: 100b9cbbf;  */

/* WARNING: Possible PIC construction at 0x000100b9cb3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9cb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9cb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9cb40) */
/* WARNING: Removing unreachable block (ram,0x000100b9cb50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ca3c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51578();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b9cc64();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef86b8);
        *(undefined8 *)(lVar2 + _DAT_112ef7fc8) = uVar6;
        *(long *)(lVar2 + _DAT_112ef7fd0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef7fd0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b9cbc0; end: 100b9cbcb; -[SCSCViewfinderDataSourceServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9cbc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef88a8;
  func_0x000107c61428(param_1 + _DAT_112ef88a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9cbcc; end: 100b9cc0f;  */

void FUN_100b9cbcc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9cc10; end: 100b9cc1b; -[SCSCViewfinderDataSourceServicesSaberEntryPoint viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9cc10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef88b0;
  func_0x000107c61428(param_1 + _DAT_112ef88b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9cc1c; end: 100b9cc63; -[SCSCViewfinderDataSourceServicesSaberEntryPoint sCViewfinderDataSourceServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9cc1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef88b8;
  func_0x000107c61428(param_1 + _DAT_112ef88b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b9cc64; end: 100b9cc83;  */

void FUN_100b9cc64(void)

{
  func_0x000107c61168(&PTR_PTR_11288ebc0);
  return;
}



/* Entry: 100b9cc84; end: 100b9cc8b;  */

void FUN_100b9cc84(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b9cc8c; end: 100b9ccdf;  */

void FUN_100b9cc8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b9cce0; end: 100b9cd5f; -[SCSCViewfinderUIServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9cce0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef88f0,0);
  func_0x000107c61614(param_1 + _DAT_112ef88f8,0);
  *(undefined8 *)(param_1 + _DAT_112ef8900) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef8908) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9cd60; end: 100b9ce0b; -[SCSCViewfinderUIServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b9cd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9ce0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9ce0c; end: 100b9d00f;  */

void FUN_100b9ce0c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0f0a9b0)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a5b0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0f0a6f0)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010f0f5910,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ViewfinderScopeGraphBridge/SCSCViewfinderUIServicesSaberEntryPoint.swift"
                              ,0x48,2,0x40,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9d010);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58b28();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b9d010; end: 100b9d01b; -[SCSCViewfinderUIServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9d010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef88f0;
  func_0x000107c61428(param_1 + _DAT_112ef88f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9d01c; end: 100b9d06f;  */

void FUN_100b9d01c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9d070; end: 100b9d07b; -[SCSCViewfinderUIServicesSaberEntryPoint setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9d070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef88f8;
  func_0x000107c61428(param_1 + _DAT_112ef88f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9d07c; end: 100b9d0df; -[SCSCViewfinderUIServicesSaberEntryPoint setSCViewfinderUIServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9d07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8900;
  func_0x000107c61428(param_1 + _DAT_112ef8900,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b9d0e0; end: 100b9d107; -[SCSCViewfinderUIServicesSaberEntryPoint begin] */

void FUN_100b9d0e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b9d108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b9d108; end: 100b9d28b;  */

/* WARNING: Possible PIC construction at 0x000100b9d208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9d218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9d234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9d20c) */
/* WARNING: Removing unreachable block (ram,0x000100b9d21c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9d108(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51580();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b9d330();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef86c0);
        *(undefined8 *)(lVar2 + _DAT_112ef8000) = uVar6;
        *(long *)(lVar2 + _DAT_112ef8008) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef8008);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b9d28c; end: 100b9d297; -[SCSCViewfinderUIServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9d28c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef88f0;
  func_0x000107c61428(param_1 + _DAT_112ef88f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9d298; end: 100b9d2db;  */

void FUN_100b9d298(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9d2dc; end: 100b9d2e7; -[SCSCViewfinderUIServicesSaberEntryPoint viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9d2dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef88f8;
  func_0x000107c61428(param_1 + _DAT_112ef88f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9d2e8; end: 100b9d32f; -[SCSCViewfinderUIServicesSaberEntryPoint sCViewfinderUIServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9d2e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8900;
  func_0x000107c61428(param_1 + _DAT_112ef8900,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b9d330; end: 100b9d34f;  */

void FUN_100b9d330(void)

{
  func_0x000107c61168(&PTR_PTR_11288ec88);
  return;
}



/* Entry: 100b9d350; end: 100b9d547; +[MemoriesDb schema] */

undefined * FUN_100b9d350(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b84f8;
  func_0x000107c610f4(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b8500;
  func_0x000107c610f4();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200();
  func_0x000107c61180();
  func_0x000107c46aa4();
  puVar5 = PTR_PTR_1126b8500;
  func_0x000107c610f4();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c46aa4();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c494b0(puVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  puVar8 = puVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd8();
  lVar9 = *(long *)(puVar8 + 0x18);
  *(long *)(param_2 + 0x18) = lVar9;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(puVar8 + 0x20);
  (*(code *)**(undefined8 **)(lVar9 + -8))(param_2,puVar8);
  return param_2;
}



/* Entry: 100b9d548; end: 100b9d58b;  */

long FUN_100b9d548(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100b9d58c; end: 100b9d593;  */

void FUN_100b9d58c(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    pcVar3 = *(char **)(lVar1 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    pcVar2 = pcVar3;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar3);
    pcVar3 = pcVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
      func_0x000107c51f40();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar3);
      goto LAB_100b9d660;
    }
  }
  pcVar2 = "provide()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_100b9d660:
  *param_1 = pcVar2;
  return;
}



/* Entry: 100b9d594; end: 100b9d677;  */

void FUN_100b9d594(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    pcVar2 = *(char **)(param_2 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    pcVar1 = pcVar2;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    pcVar2 = pcVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    if (pcVar2 != (char *)0x0) {
      pcVar1 = pcVar2;
      func_0x000107c51f40();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar2);
      goto LAB_100b9d660;
    }
  }
  pcVar1 = "provide()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_100b9d660:
  *param_1 = pcVar1;
  return;
}



/* Entry: 100b9d678; end: 100b9d6bb;  */

void FUN_100b9d678(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9d6bc; end: 100b9d757; -[SCSqliteUpgradeStep initWithFromVersion:toVersion:sql:] */

undefined1 *
FUN_100b9d6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706660;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100b9d758; end: 100b9d79b;  */

long FUN_100b9d758(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100b9d79c; end: 100b9d8c7;  */

void FUN_100b9d79c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  if (lVar5 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x18) + 0x20;
    do {
      FUN_100b9d758(lVar4,auStack_78);
      FUN_100b9d8c8(auStack_78,auStack_a0);
      lVar2 = lStack_80;
      uVar3 = uStack_88;
      FUN_1000a8868(auStack_a0,uStack_88);
      FUN_100b7bf50();
      pcVar6 = *(code **)(lVar2 + 8);
      func_0x000107c6157c();
      (*pcVar6)(&stack0xffffffffffffff38,uVar3,lVar2);
      FUN_100b9df8c(&stack0xffffffffffffff38);
      FUN_100b9df8c(auStack_a0);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0xb8);
    lVar4 = *(long *)(unaff_x20 + 0x20) + 0x20;
    do {
      FUN_100b9d758(lVar4,auStack_78);
      FUN_100b9d8c8(auStack_78,auStack_a0);
      lVar2 = lStack_80;
      uVar1 = uStack_88;
      FUN_1000a8868(auStack_a0,uStack_88);
      (**(code **)(lVar2 + 8))(uVar3,uVar1,lVar2);
      FUN_100b9df8c(auStack_a0);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 100b9d8c8; end: 100b9d8df;  */

undefined8 * FUN_100b9d8c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100b9d8e0; end: 100b9da5b;  */

/* WARNING: Possible PIC construction at 0x000100b9d9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9d9a8) */

void FUN_100b9d8e0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  plVar2 = *(long **)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1000a8868(param_1,plVar2);
  (**(code **)(lVar1 + 0x20))(plVar2,lVar1);
  puVar3 = &UNK_110426d88;
  func_0x000107c613fc(&UNK_110426d88,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1019d0e48;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(&UNK_1019d0e48);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c614f0(puVar4);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),puVar3,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar4);
  return;
}



/* Entry: 100b9da5c; end: 100b9da7f;  */

void FUN_100b9da5c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9da80; end: 100b9da9f;  */

void FUN_100b9da80(void)

{
  FUN_100b9d8e0();
  return;
}



/* Entry: 100b9daa0; end: 100b9daab;  */

void FUN_100b9daa0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0xb0));
  return;
}



/* Entry: 100b9daac; end: 100b9dab3; -[SCSqliteUpgradeStep fromVersion] */

undefined8 FUN_100b9daac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b9dab4; end: 100b9dabb; -[SCSqliteUpgradeStep toVersion] */

undefined8 FUN_100b9dab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100b9dabc; end: 100b9dacf; -[SCSqliteUpgradeStep sql] */

undefined8 FUN_100b9dabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100b9dad0; end: 100b9db6b;  */

long FUN_100b9dad0(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000100b9dac4();
  FUN_100b9db6c();
  FUN_100b9dbdc(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x58,unaff_x19 + 2);
  FUN_100b9dce8(lStack_48);
  lStack_48 = lStack_48 + 0x58;
  FUN_100b9dd30();
  FUN_100b9dd3c();
  lVar1 = unaff_x19[1];
  FUN_100b9dee4(auStack_58);
  return lVar1;
}



/* Entry: 100b9db6c; end: 100b9dbcb;  */

long * FUN_100b9db6c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x2e8ba2e8ba2e8ba < param_2) {
    func_0x000105275030();
    param_1[3] = 0;
    param_1[4] = param_4;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    plVar2 = (long *)0x2e8ba2e8ba2e8ba;
  }
  return plVar2;
}



/* Entry: 100b9dbcc; end: 100b9dbdb;  */

void FUN_100b9dbcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}



/* Entry: 100b9dbdc; end: 100b9dc1f;  */

void FUN_100b9dbdc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_100b9dbcc();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_100b9dc50();
  }
  lVar1 = param_4 + unaff_x20 * 0x58;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x58;
  return;
}



/* Entry: 100b9dc20; end: 100b9dc4f;  */

void FUN_100b9dc20(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  FUN_100b9dc20();
  return;
}



/* Entry: 100b9dc50; end: 100b9dc6f;  */

void FUN_100b9dc50(void)

{
  FUN_100b9dc20();
  return;
}



/* Entry: 100b9dc70; end: 100b9dc77;  */

void FUN_100b9dc70(void)

{
  return;
}



/* Entry: 100b9dc78; end: 100b9dcbb;  */

void FUN_100b9dc78(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_1 = *param_2;
    (**(code **)(param_2[1] + 0x10))(param_1 + 1);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



/* Entry: 100b9dcbc; end: 100b9dce7;  */

undefined1 * FUN_100b9dcbc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_100b9dc78();
  return param_1;
}



/* Entry: 100b9dce8; end: 100b9dd2f;  */

undefined8 * FUN_100b9dce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  FUN_100b9dcbc(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 100b9dd30; end: 100b9dd3b;  */

void FUN_100b9dd30(void)

{
  return;
}



/* Entry: 100b9dd3c; end: 100b9dd7f;  */

void FUN_100b9dd3c(long *param_1,long param_2)

{
  func_0x00010054d294();
  FUN_100b9dda8(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x58) * 0x58);
  func_0x000100b9de8c();
  return;
}



/* Entry: 100b9dd80; end: 100b9dda7;  */

void FUN_100b9dd80(void)

{
  return;
}



/* Entry: 100b9dda8; end: 100b9de1b;  */

void FUN_100b9dda8(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  FUN_100b9dd80();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x58) {
    FUN_100b9dce8(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x58;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_100b9de1c();
  FUN_100b9de4c(auStack_60);
  return;
}



/* Entry: 100b9de1c; end: 100b9de4b;  */

void FUN_100b9de1c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x00010054b180();
  }
  return;
}



/* Entry: 100b9de4c; end: 100b9de7b;  */

long FUN_100b9de4c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010527503c(param_1);
  }
  return param_1;
}



/* Entry: 100b9de7c; end: 100b9dee3;  */

void FUN_100b9de7c(void)

{
  return;
}



/* Entry: 100b9dee4; end: 100b9df43;  */

long * FUN_100b9dee4(long *param_1)

{
  func_0x000100b9dedc();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100b9df44; end: 100b9df57;  */

void FUN_100b9df44(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0xa0));
  return;
}



/* Entry: 100b9df58; end: 100b9df8b;  */

void FUN_100b9df58(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054d294();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x00010054b180();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 100b9df8c; end: 100b9dfab;  */

void FUN_100b9df8c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100b9dfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100b9dfac; end: 100b9e127;  */

/* WARNING: Possible PIC construction at 0x000100b9e070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9e074) */

void FUN_100b9dfac(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  plVar2 = *(long **)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1000a8868(param_1,plVar2);
  (**(code **)(lVar1 + 0x20))(plVar2,lVar1);
  puVar3 = &UNK_110426dc8;
  func_0x000107c613fc(&UNK_110426dc8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1019d1604;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))(&UNK_1019d1604);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c614f0(puVar4);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x28),puVar3,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar4);
  return;
}



/* Entry: 100b9e128; end: 100b9e14b;  */

void FUN_100b9e128(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9e14c; end: 100b9e16b;  */

void FUN_100b9e14c(void)

{
  FUN_100b9dfac();
  return;
}



/* Entry: 100b9e16c; end: 100b9e177; -[SCSqliteUpgradeStep .cxx_destruct] */

void FUN_100b9e16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100b9e178; end: 100b9e3d7;  */

void FUN_100b9e178(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  uVar2 = param_1;
  func_0x000107c4b1b8();
  func_0x000107c61180();
  puVar7 = &UNK_110426a78;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110426a78,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_1019d08cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1019d09f8;
  puStack_78 = &UNK_110426a90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  uVar2 = param_1;
  func_0x000107c4afcc(param_1);
  func_0x000107c61180();
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110426a78,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puStack_70 = &UNK_1019d08dc;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1019d09f4;
  puStack_78 = &UNK_110426ab8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c4adf0(param_1);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110426a78,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puStack_70 = &UNK_1019d08e4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1019d09fc;
  puStack_78 = &UNK_110426ae0;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar2 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_1);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b9e3d8; end: 100b9e3fb;  */

void FUN_100b9e3d8(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9e3fc; end: 100b9e41b;  */

void FUN_100b9e3fc(void)

{
  FUN_100b9e178();
  return;
}



/* Entry: 100b9e41c; end: 100b9e453; -[_TtC34AdaptiveLensFetchingImplementation24LensFetchResultProcessor lensIconDownloadObservable] */

void FUN_100b9e41c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1004575f0();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b9e454; end: 100b9e467;  */

void FUN_100b9e454(long param_1,long param_2)

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



/* Entry: 100b9e468; end: 100b9e49f; -[_TtC34AdaptiveLensFetchingImplementation24LensFetchResultProcessor lensContentDownloadObservable] */

void FUN_100b9e468(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1004575f0();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b9e4a0; end: 100b9e4a3;  */

void FUN_100b9e4a0(long param_1,long param_2)

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



/* Entry: 100b9e4a4; end: 100b9e4db; -[_TtC34AdaptiveLensFetchingImplementation24LensFetchResultProcessor lensAssetDownloadObservable] */

void FUN_100b9e4a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1004575f0();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b9e4dc; end: 100b9e4df;  */

void FUN_100b9e4dc(long param_1,long param_2)

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



/* Entry: 100b9e4e0; end: 100b9e553; -[SCSCLensProcessingSharedServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9e4e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113028f28,0);
  func_0x000107c61614(param_1 + _DAT_113028f30,0);
  *(undefined8 *)(param_1 + _DAT_113028f38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9e554; end: 100b9e5ff; -[SCSCLensProcessingSharedServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b9e554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9eba0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9e600; end: 100b9e7df;  */

/* WARNING: Possible PIC construction at 0x000100b9e690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9e6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9e760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9e6fc) */
/* WARNING: Removing unreachable block (ram,0x000100b9e694) */
/* WARNING: Removing unreachable block (ram,0x000100b9e764) */

void FUN_100b9e600(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110425b78;
  func_0x000107c613fc(&UNK_110425b78,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  puVar2 = &UNK_1019c2a1c;
  puVar3 = puVar1;
  FUN_1000b6504(&UNK_1019c2a1c);
  func_0x000107c61574(puVar1);
  puVar1 = puVar2;
  func_0x000107c614f0(puVar2);
  (**(code **)(puVar3 + 0x10))(*(undefined8 *)(param_2 + 0x30),puVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 100b9e7e0; end: 100b9e823;  */

void FUN_100b9e7e0(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9e824; end: 100b9e85b;  */

void FUN_100b9e824(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100b9e85c; end: 100b9e873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100b9e85c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c5ce38();
  func_0x000107c61180();
  func_0x000107c5d2c4();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c4b130();
  func_0x000107c61180();
  func_0x000107c4b144();
  func_0x000107c61180();
  func_0x000107c4b2ec();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4b020();
  func_0x000107c61180();
  lVar10 = 0;
  FUN_100b9eda4();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(undefined1 *)(lVar11 + _DAT_112de8468) = 0;
  lVar14 = _DAT_112de8470;
  *(undefined8 *)(lVar11 + _DAT_112de8470) = 0;
  lVar1 = _DAT_112de8478;
  *(undefined8 *)(lVar11 + _DAT_112de8478) = 1;
  lVar12 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(*(undefined8 *)(lVar11 + lVar14));
    func_0x0001019e8588(*(undefined8 *)(lVar11 + lVar1));
    func_0x000107c61464(lVar11,lVar10,0x70,7);
    plVar15 = (long *)0x0;
  }
  else {
    *(undefined8 *)(lVar11 + _DAT_112de8418) = uVar2;
    *(undefined8 *)(lVar11 + _DAT_112de8420) = uVar3;
    *(undefined8 *)(lVar11 + _DAT_112de8428) = uVar4;
    *(undefined8 *)(lVar11 + _DAT_112de8430) = uVar5;
    *(undefined8 *)(lVar11 + _DAT_112de8438) = uVar6;
    *(undefined **)(lVar11 + _DAT_112de8440) = puVar8;
    *(undefined8 *)(lVar11 + _DAT_112de8458) = uVar9;
    puVar13 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(uVar9);
    func_0x000107c453e4();
    *(undefined **)(lVar11 + _DAT_112de8448) = puVar13;
    puVar13 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar11 + _DAT_112de8450) = puVar13;
    lVar14 = lVar12;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    *(long *)(lVar11 + _DAT_112de8460) = lVar14;
    plVar15 = &lStack_70;
    lStack_70 = lVar11;
    lStack_68 = lVar10;
    func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar9);
  }
  return plVar15;
}



/* Entry: 100b9e874; end: 100b9eb97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100b9e874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c5ce38();
  func_0x000107c61180();
  func_0x000107c5d2c4();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c4b130();
  func_0x000107c61180();
  func_0x000107c4b144();
  func_0x000107c61180();
  func_0x000107c4b2ec();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4b020();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_100b9eda4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112de8468) = 0;
  lVar8 = _DAT_112de8470;
  *(undefined8 *)(lVar5 + _DAT_112de8470) = 0;
  lVar1 = _DAT_112de8478;
  *(undefined8 *)(lVar5 + _DAT_112de8478) = 1;
  lVar6 = param_5;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_6);
    func_0x000107c615e8(*(undefined8 *)(lVar5 + lVar8));
    func_0x0001019e8588(*(undefined8 *)(lVar5 + lVar1));
    func_0x000107c61464(lVar5,lVar4,0x70,7);
    plVar9 = (long *)0x0;
  }
  else {
    *(undefined8 *)(lVar5 + _DAT_112de8418) = param_1;
    *(undefined8 *)(lVar5 + _DAT_112de8420) = param_2;
    *(undefined8 *)(lVar5 + _DAT_112de8428) = param_3;
    *(undefined8 *)(lVar5 + _DAT_112de8430) = uVar2;
    *(undefined8 *)(lVar5 + _DAT_112de8438) = param_4;
    *(undefined **)(lVar5 + _DAT_112de8440) = puVar3;
    *(undefined8 *)(lVar5 + _DAT_112de8458) = param_6;
    puVar7 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(param_4);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(param_6);
    func_0x000107c453e4();
    *(undefined **)(lVar5 + _DAT_112de8448) = puVar7;
    puVar7 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar5 + _DAT_112de8450) = puVar7;
    lVar8 = lVar6;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    *(long *)(lVar5 + _DAT_112de8460) = lVar8;
    plVar9 = &lStack_70;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_6);
  }
  return plVar9;
}



/* Entry: 100b9eb98; end: 100b9eb9f; -[SCUnlockablesNetworkServices unlockableNetworkManagerProvider] */

undefined8 FUN_100b9eb98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


