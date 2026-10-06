/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c425bc; end: 102c4261b;  */

void FUN_102c425bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102c4261c; end: 102c428df;  */

/* WARNING: Possible PIC construction at 0x000102c427e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c427f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c42818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c42828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c42838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c428a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c428b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c42894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c428b8) */
/* WARNING: Removing unreachable block (ram,0x000102c428a8) */
/* WARNING: Removing unreachable block (ram,0x000102c4283c) */
/* WARNING: Removing unreachable block (ram,0x000102c4282c) */
/* WARNING: Removing unreachable block (ram,0x000102c4281c) */
/* WARNING: Removing unreachable block (ram,0x000102c427f8) */
/* WARNING: Removing unreachable block (ram,0x000102c427e8) */
/* WARNING: Removing unreachable block (ram,0x000102c42898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c4261c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3d228();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c509f4();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c50bc4();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c3d3b8();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_102c41608();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_102c41b64();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102c428e0);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112f02ff0) = lVar5;
          *(long *)(lVar4 + _DAT_112f02ff8) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102c428e0; end: 102c42907; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102c428e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c4261c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c42908; end: 102c4294b; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint end] */

void FUN_102c42908(undefined8 param_1)

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



/* Entry: 102c4294c; end: 102c42c27;  */

void FUN_102c4294c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0fa3950)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f05c6b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0efe420)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001c,0x800000010f101be0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0f89fc0)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010f076040,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5816c();
            }
            else {
              uVar2 = 0xd000000000000029;
              if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0efe400)) &&
                 (func_0x000107c605b8(0xd000000000000029,0x800000010f101c00,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "AdPlaybackScopeGraphBridge/SCAdPlaybackScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x4c,2,0x41,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102c42c28);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c52368();
            }
            goto LAB_102c429d8;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57f9c();
        goto LAB_102c429d8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52264();
  }
LAB_102c429d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c42c28; end: 102c42cd3; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102c42c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c4294c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c42cd4; end: 102c42d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42cd4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f031f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f031f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f03200) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f03208) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f03210) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f03218) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c42d64; end: 102c42d83; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_102c42d64(void)

{
  FUN_102c42cd4();
  return;
}



/* Entry: 102c42d84; end: 102c42db7;  */

void FUN_102c42d84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c42db8; end: 102c42e2f; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c42de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c42e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c42de8) */
/* WARNING: Removing unreachable block (ram,0x000102c42e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42db8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f031f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f031f8));
  return;
}



/* Entry: 102c42e30; end: 102c42e4f;  */

void FUN_102c42e30(void)

{
  func_0x000107c61168(&PTR_PTR_1128995b0);
  return;
}



/* Entry: 102c42e50; end: 102c42e5b; -[SCAdPageRegistryServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42e50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03248;
  func_0x000107c61428(param_1 + _DAT_112f03248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c42e5c; end: 102c42e67; -[SCAdPageRegistryServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03248;
  func_0x000107c61428(param_1 + _DAT_112f03248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c42e68; end: 102c42e73; -[SCAdPageRegistryServicesSaberEntryPoint adPlaybackScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42e68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03250;
  func_0x000107c61428(param_1 + _DAT_112f03250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c42e74; end: 102c42eb7;  */

void FUN_102c42e74(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c42eb8; end: 102c42ec3; -[SCAdPageRegistryServicesSaberEntryPoint setAdPlaybackScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03250;
  func_0x000107c61428(param_1 + _DAT_112f03250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c42ec4; end: 102c42f17;  */

void FUN_102c42ec4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c42f18; end: 102c42f5f; -[SCAdPageRegistryServicesSaberEntryPoint adPageRegistryServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42f18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03258;
  func_0x000107c61428(param_1 + _DAT_112f03258,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c42f60; end: 102c42fc3; -[SCAdPageRegistryServicesSaberEntryPoint setAdPageRegistryServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03258;
  func_0x000107c61428(param_1 + _DAT_112f03258,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c42fc4; end: 102c43147;  */

/* WARNING: Possible PIC construction at 0x000102c430c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c430d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c430f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c430c8) */
/* WARNING: Removing unreachable block (ram,0x000102c430d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42fc4(void)

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
    func_0x000107c3d3b4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3d39c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102c417c0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f03180);
        *(undefined8 *)(lVar2 + _DAT_112f03028) = uVar6;
        *(long *)(lVar2 + _DAT_112f03030) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f03030);
        func_0x000100083b20(&lStack_78);
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



/* Entry: 102c43148; end: 102c4316f; -[SCAdPageRegistryServicesSaberEntryPoint begin] */

void FUN_102c43148(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c42fc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c43170; end: 102c431b3; -[SCAdPageRegistryServicesSaberEntryPoint end] */

void FUN_102c43170(undefined8 param_1)

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



/* Entry: 102c431b4; end: 102c433b7;  */

void FUN_102c431b4(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0efe380)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f101c80,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52364();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0efe350)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010f101cb0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AdPlaybackScopeGraphBridge/SCAdPageRegistryServicesSaberEntryPoint.swift"
                              ,0x48,2,0x39,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c433b8);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52354();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c433b8; end: 102c43463; -[SCAdPageRegistryServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102c433b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c431b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c43464; end: 102c434e3; -[SCAdPageRegistryServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43464(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f03248,0);
  func_0x000107c61614(param_1 + _DAT_112f03250,0);
  *(undefined8 *)(param_1 + _DAT_112f03258) = 0;
  *(undefined8 *)(param_1 + _DAT_112f03260) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c434e4; end: 102c43517;  */

void FUN_102c434e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c43518; end: 102c4356f; -[SCAdPageRegistryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c43554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c43558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43518(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f03248);
  func_0x000107c61610(param_1 + _DAT_112f03250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f03258));
  return;
}



/* Entry: 102c43570; end: 102c4358f;  */

void FUN_102c43570(void)

{
  func_0x000107c61168(&PTR_PTR_112899690);
  return;
}



/* Entry: 102c43590; end: 102c4359b; -[SCArExperienceAdPlaybackServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43590(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03290;
  func_0x000107c61428(param_1 + _DAT_112f03290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c4359c; end: 102c435a7; -[SCArExperienceAdPlaybackServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c4359c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03290;
  func_0x000107c61428(param_1 + _DAT_112f03290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c435a8; end: 102c435b3; -[SCArExperienceAdPlaybackServicesSaberServiceProvider adPlaybackScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c435a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03298;
  func_0x000107c61428(param_1 + _DAT_112f03298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c435b4; end: 102c435f7;  */

void FUN_102c435b4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c435f8; end: 102c43603; -[SCArExperienceAdPlaybackServicesSaberServiceProvider setAdPlaybackScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c435f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03298;
  func_0x000107c61428(param_1 + _DAT_112f03298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c43604; end: 102c43657;  */

void FUN_102c43604(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c43658; end: 102c4386b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c43658(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d3b4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102c41870();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f03188);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f032a0);
      *(long *)(unaff_x20 + _DAT_112f032a0) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AdPlaybackScopeGraphBridge/SCArExperienceAdPlaybackServicesSaberServiceProvider.swift"
                      ,0x55,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c43784);
  (*pcVar1)();
}



/* Entry: 102c4386c; end: 102c4389f; -[SCArExperienceAdPlaybackServicesSaberServiceProvider provide] */

void FUN_102c4386c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c43658();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c438a0; end: 102c438d3; -[SCArExperienceAdPlaybackServicesSaberServiceProvider __safeProvide] */

void FUN_102c438a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c43784();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c438d4; end: 102c43917; -[SCArExperienceAdPlaybackServicesSaberServiceProvider end] */

void FUN_102c438d4(undefined8 param_1)

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



/* Entry: 102c43918; end: 102c43aaf;  */

void FUN_102c43918(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0efe380)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f101c80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdPlaybackScopeGraphBridge/SCArExperienceAdPlaybackServicesSaberServiceProvider.swift"
                            ,0x55,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c43ab0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52364();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c43ab0; end: 102c43b5b; -[SCArExperienceAdPlaybackServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102c43ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c43918(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c43b5c; end: 102c43bcf; -[SCArExperienceAdPlaybackServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43b5c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f03290,0);
  func_0x000107c61614(param_1 + _DAT_112f03298,0);
  *(undefined8 *)(param_1 + _DAT_112f032a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c43bd0; end: 102c43c03;  */

void FUN_102c43bd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c43c04; end: 102c43c4b; -[SCArExperienceAdPlaybackServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43c04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f03290);
  func_0x000107c61610(param_1 + _DAT_112f03298);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f032a0));
  return;
}



/* Entry: 102c43c4c; end: 102c43c6b;  */

void FUN_102c43c4c(void)

{
  func_0x000107c61168(&PTR_PTR_112f032e8);
  return;
}



/* Entry: 102c43c6c; end: 102c43cb3; -[SCSCAdPlaybackScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43c6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03350;
  func_0x000107c61428(param_1 + _DAT_112f03350,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c43cb4; end: 102c43d0b; -[SCSCAdPlaybackScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03350;
  func_0x000107c61428(param_1 + _DAT_112f03350,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c43d0c; end: 102c43de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43d0c(undefined8 param_1,long param_2)

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
    FUN_102c41b44();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f03130) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c43de4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f03138);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f03358);
    *(long **)(unaff_x20 + _DAT_112f03358) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102c43de4; end: 102c43e0b; -[SCSCAdPlaybackScopedServicesSaberEntryPoint begin] */

void FUN_102c43de4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c43d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c43e0c; end: 102c43f83;  */

/* WARNING: Possible PIC construction at 0x000102c43e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c43f0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c43e78) */
/* WARNING: Removing unreachable block (ram,0x000102c43f10) */
/* WARNING: Removing unreachable block (ram,0x000102c43f28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c43e0c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f03358);
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



/* Entry: 102c43f84; end: 102c43f8b;  */

void FUN_102c43f84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c43f8c; end: 102c43fbf; -[SCSCAdPlaybackScopedServicesSaberEntryPoint end] */

void FUN_102c43f8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c43e0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c43fc0; end: 102c440df;  */

void FUN_102c43fc0(long param_1,long param_2,long param_3)

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
                        "AdPlaybackScopeGraphBridge/SCSCAdPlaybackScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x31,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c440e0);
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



/* Entry: 102c440e0; end: 102c4418b; -[SCSCAdPlaybackScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102c440e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c43fc0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c4418c; end: 102c441eb; -[SCSCAdPlaybackScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c4418c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f03350,0);
  *(undefined8 *)(param_1 + _DAT_112f03358) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c441ec; end: 102c4421f;  */

void FUN_102c441ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c44220; end: 102c44257; -[SCSCAdPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c44220(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f03350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f03358));
  return;
}



/* Entry: 102c44258; end: 102c44277;  */

void FUN_102c44258(void)

{
  func_0x000107c61168(&PTR_PTR_1128997a8);
  return;
}



/* Entry: 102c44278; end: 102c44377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c44278(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c3d368(lVar2,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar2);
    if (param_1 != 0) {
      lVar1 = *(long *)(param_1 + _DAT_113068f48);
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      lVar4 = *(long *)(lVar1 + _DAT_11308f208);
      lVar2 = lVar4;
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      if (lVar4 != 0) {
        lVar4 = *(long *)(lVar2 + _DAT_113091068);
        lVar1 = lVar4;
        func_0x000107c61174();
        func_0x000107c61170(lVar2);
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(lVar1 + _DAT_113090608);
          func_0x000107c61174(uVar3);
          func_0x000107c61170(lVar1);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



/* Entry: 102c44378; end: 102c44383; -[_TtC36SCAdDpaLensInteractionImplementation34ArExperienceAdPlaybackDataProvider arExperienceFor:] */

void FUN_102c44378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_102c44278(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102c44384; end: 102c4455f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c44384(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_80 [16];
  long *plStack_70;
  long lStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 != 0) {
    func_0x0001041f3970();
    if (param_1 != 0) {
      lVar3 = *(long *)(param_1 + _DAT_113068f48);
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      if ((*(long *)(lVar3 + _DAT_11308f208) != 0) &&
         (uVar6 = *(ulong *)(*(long *)(lVar3 + _DAT_11308f208) + _DAT_113091078), uVar6 != 0)) {
        lStack_68 = 0;
        uVar9 = uVar6 & 0xffffffffffffff8;
        if (uVar6 >> 0x3e == 0) {
          uVar7 = *(ulong *)(uVar9 + 0x10);
        }
        else {
          uVar7 = uVar6;
          if (-1 < (long)uVar6) {
            uVar7 = uVar9;
          }
          func_0x000107c60480();
        }
        func_0x000107c61434(uVar6);
        uVar8 = 0;
        do {
          if (uVar7 == uVar8) {
            lVar5 = 0;
            break;
          }
          if ((uVar6 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102c4454c);
              (*pcVar1)();
            }
            uVar2 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
            func_0x000107c61174(uVar2);
          }
          else {
            uVar2 = uVar8;
            func_0x00010244195c(uVar8,uVar6);
          }
          if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c44548);
            (*pcVar1)();
          }
          plStack_70 = &lStack_68;
          func_0x0001048100a4(FUN_102c44560,0,FUN_102c44754,auStack_80);
          func_0x000107c61170(uVar2);
          uVar8 = uVar8 + 1;
          lVar5 = lStack_68;
        } while (lStack_68 == 0);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c6142c(uVar6);
        return lVar5;
      }
      func_0x000107c61170(lVar4);
      lVar4 = lVar3;
    }
    func_0x000107c61170(lVar4);
  }
  return 0;
}



/* Entry: 102c44560; end: 102c44563;  */

void FUN_102c44560(void)

{
  return;
}



/* Entry: 102c44564; end: 102c4456f; -[_TtC36SCAdDpaLensInteractionImplementation34ArExperienceAdPlaybackDataProvider arStickerFor:] */

void FUN_102c44564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_102c44384(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102c44570; end: 102c445d3;  */

void FUN_102c44570(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102c445d4; end: 102c4461f; -[_TtC36SCAdDpaLensInteractionImplementation34ArExperienceAdPlaybackDataProvider playbackMetadataFor:] */

void FUN_102c445d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c3d368();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x0001041f3970();
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102c44620; end: 102c4463f; -[_TtC36SCAdDpaLensInteractionImplementation34ArExperienceAdPlaybackDataProvider composerCtaContainerViewModelFor:] */

void FUN_102c44620(long param_1)

{
  func_0x000107c3ff94(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c44640; end: 102c44707; -[_TtC36SCAdDpaLensInteractionImplementation34ArExperienceAdPlaybackDataProvider shouldHandleAttachmentInteractionFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102c44640(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  func_0x000107c5faec();
  func_0x000107c6157c(param_1);
  FUN_102c44278(param_3,param_2);
  cVar1 = cRam0000000112f035c8;
  if (param_3 == 0) {
    func_0x000107c61574(param_1);
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    func_0x000107c61574(param_1);
    func_0x000107c6142c(param_2);
    if (cVar1 == '\0') {
      func_0x000107c61170(param_3);
      uVar2 = 0;
    }
    else if (cVar1 == '\x01') {
      func_0x000107c61170(param_3);
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined1 *)(param_3 + _DAT_1130907f0);
      func_0x000107c61170(param_3);
    }
  }
  return uVar2;
}



/* Entry: 102c44708; end: 102c44753;  */

void FUN_102c44708(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c44754; end: 102c447af;  */

void FUN_102c44754(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c447b0; end: 102c447bb;  */

void FUN_102c447b0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102c447bc; end: 102c448df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102c447bc(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068fd0);
  puVar1 = &UNK_1105b7370;
  func_0x000107c613fc(&UNK_1105b7370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112f03458,&UNK_10db373d0);
  func_0x000107c613fc();
  func_0x000107c615f4(uVar4,2);
  pcVar2 = FUN_102c448e0;
  func_0x0001000bdd8c(FUN_102c448e0,puVar1);
  uVar3 = 0;
  FUN_102c9660c(0);
  func_0x000107c610f8();
  func_0x000102c96550(pcVar2,uVar3);
  func_0x000107c615e8(uVar4);
  return pcVar2;
}



/* Entry: 102c448e0; end: 102c448ef;  */

void FUN_102c448e0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000102c44734();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x000102c44a6c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar3);
  return;
}



/* Entry: 102c448f0; end: 102c4498f;  */

void FUN_102c448f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c44990; end: 102c44a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c44990(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113068fd0);
  puVar1 = &UNK_1105b7398;
  func_0x000107c613fc(&UNK_1105b7398,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112f03458,&UNK_10db373d0);
  func_0x000107c613fc();
  func_0x000107c615f4(uVar4,2);
  pcVar2 = FUN_102c44a58;
  func_0x0001000bdd8c(FUN_102c44a58,puVar1);
  uVar3 = 0;
  FUN_102c9660c(0);
  func_0x000107c610f8();
  func_0x000102c96550(pcVar2,uVar3);
  func_0x000107c615e8(uVar4);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102c44a58; end: 102c44a5b;  */

void FUN_102c44a58(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000102c44734();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x000102c44a6c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar3);
  return;
}



/* Entry: 102c44a5c; end: 102c44a8b;  */

void FUN_102c44a5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c44a8c; end: 102c45007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c44a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = *(long *)(param_5 + _DAT_11306ce28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
  }
  else {
    uVar4 = *(undefined8 *)(param_9 + _DAT_112f089c0);
    puVar2 = &UNK_1105b73d8;
    func_0x000107c613fc(&UNK_1105b73d8,0x38,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = uVar4;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    *(undefined8 *)(puVar2 + 0x28) = param_12;
    *(long *)(puVar2 + 0x30) = lVar1;
    func_0x0001000285a8(0x112f03608,&UNK_10db37440);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar4);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    pcVar3 = FUN_102c45008;
    func_0x0001000bdd8c(FUN_102c45008,puVar2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    *(code **)(unaff_x20 + 0x10) = pcVar3;
  }
  return unaff_x20;
}



/* Entry: 102c45008; end: 102c4500b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45008(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar10 = lVar9 + _DAT_113068e98;
  uVar5 = *(undefined8 *)(lVar10 + 0x18);
  lVar13 = *(long *)(lVar10 + 0x20);
  func_0x0001000a8868(lVar10,uVar5);
  (**(code **)(lVar13 + 8))(uVar5,lVar13);
  uVar21 = *(undefined8 *)(lVar9 + _DAT_113068e90);
  uVar18 = *(undefined8 *)(lVar9 + _DAT_113068ea8);
  uVar2 = *(undefined8 *)(lVar9 + _DAT_113068e80);
  uVar3 = ((undefined8 *)(lVar9 + _DAT_113068e80))[1];
  uVar19 = *(undefined8 *)(lVar9 + _DAT_113068ea0);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  uVar20 = *(undefined8 *)(lVar11 + _DAT_113091b70);
  func_0x000107c61434(uVar3);
  uVar6 = uVar20;
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  func_0x000107c5e370();
  func_0x000107c61180();
  uVar6 = uVar20;
  func_0x0001000b637c();
  func_0x000107c61170(uVar20);
  lVar8 = 0;
  FUN_102c45b80();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar10 = _DAT_112f03790;
  uVar20 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar9 + lVar10) = uVar20;
  *(undefined1 *)(lVar9 + _DAT_112f037b0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112f03758) = uVar5;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f03760);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f03778) = uVar21;
  *(undefined8 *)(lVar9 + _DAT_112f03770) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f03780) = uVar18;
  *(undefined8 *)(lVar9 + _DAT_112f03768) = uVar19;
  *(undefined8 *)(lVar9 + _DAT_112f03798) = uVar7;
  *(undefined8 *)(lVar9 + _DAT_112f037a0) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f037a8) = uVar17;
  func_0x000107c615f0(uVar19);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0(uVar17);
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(uVar21);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(uVar18);
  func_0x0001000d224c(&lStack_70);
  lVar10 = lStack_70;
  func_0x000107c614f0();
  lVar16 = lStack_68;
  (**(code **)(lStack_68 + 0x10))();
  func_0x000107c615e8(lStack_70);
  lVar11 = lVar10;
  func_0x000107c614f0();
  (**(code **)(lVar16 + 0x10))();
  func_0x000107c5d18c();
  func_0x000107c61180();
  lVar12 = 0;
  func_0x000102c47210();
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x10) = uVar21;
  *(undefined1 *)(lVar12 + 0x18) = 1;
  lVar13 = lVar11;
  func_0x000107c614f0();
  lVar14 = lVar12;
  (**(code **)(lVar16 + 8))(lVar12,lVar13,lVar16);
  func_0x000107c615e8(lVar10);
  func_0x000107c615e8(lVar11);
  func_0x000107c61574(lVar12);
  plVar15 = (long *)(lVar9 + _DAT_112f03788);
  *plVar15 = lVar14;
  plVar15[1] = lVar13;
  plVar15 = &lStack_80;
  lStack_80 = lVar9;
  lStack_78 = lVar8;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar6);
  *param_1 = (long)plVar15;
  return;
}



/* Entry: 102c4500c; end: 102c4504f;  */

void FUN_102c4500c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c45050; end: 102c4505f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45050(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar10 = lVar9 + _DAT_113068e98;
  uVar5 = *(undefined8 *)(lVar10 + 0x18);
  lVar13 = *(long *)(lVar10 + 0x20);
  func_0x0001000a8868(lVar10,uVar5);
  (**(code **)(lVar13 + 8))(uVar5,lVar13);
  uVar21 = *(undefined8 *)(lVar9 + _DAT_113068e90);
  uVar18 = *(undefined8 *)(lVar9 + _DAT_113068ea8);
  uVar2 = *(undefined8 *)(lVar9 + _DAT_113068e80);
  uVar3 = ((undefined8 *)(lVar9 + _DAT_113068e80))[1];
  uVar19 = *(undefined8 *)(lVar9 + _DAT_113068ea0);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  uVar20 = *(undefined8 *)(lVar11 + _DAT_113091b70);
  func_0x000107c61434(uVar3);
  uVar6 = uVar20;
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  func_0x000107c5e370();
  func_0x000107c61180();
  uVar6 = uVar20;
  func_0x0001000b637c();
  func_0x000107c61170(uVar20);
  lVar8 = 0;
  FUN_102c45b80();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar10 = _DAT_112f03790;
  uVar20 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar9 + lVar10) = uVar20;
  *(undefined1 *)(lVar9 + _DAT_112f037b0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112f03758) = uVar5;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f03760);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f03778) = uVar21;
  *(undefined8 *)(lVar9 + _DAT_112f03770) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f03780) = uVar18;
  *(undefined8 *)(lVar9 + _DAT_112f03768) = uVar19;
  *(undefined8 *)(lVar9 + _DAT_112f03798) = uVar7;
  *(undefined8 *)(lVar9 + _DAT_112f037a0) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f037a8) = uVar17;
  func_0x000107c615f0(uVar19);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0(uVar17);
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(uVar21);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(uVar18);
  func_0x0001000d224c(&lStack_70);
  lVar10 = lStack_70;
  func_0x000107c614f0();
  lVar16 = lStack_68;
  (**(code **)(lStack_68 + 0x10))();
  func_0x000107c615e8(lStack_70);
  lVar11 = lVar10;
  func_0x000107c614f0();
  (**(code **)(lVar16 + 0x10))();
  func_0x000107c5d18c();
  func_0x000107c61180();
  lVar12 = 0;
  func_0x000102c47210();
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x10) = uVar21;
  *(undefined1 *)(lVar12 + 0x18) = 1;
  lVar13 = lVar11;
  func_0x000107c614f0();
  lVar14 = lVar12;
  (**(code **)(lVar16 + 8))(lVar12,lVar13,lVar16);
  func_0x000107c615e8(lVar10);
  func_0x000107c615e8(lVar11);
  func_0x000107c61574(lVar12);
  plVar15 = (long *)(lVar9 + _DAT_112f03788);
  *plVar15 = lVar14;
  plVar15[1] = lVar13;
  plVar15 = &lStack_80;
  lStack_80 = lVar9;
  lStack_78 = lVar8;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar6);
  *param_1 = (long)plVar15;
  return;
}



/* Entry: 102c45060; end: 102c450db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c45060(void)

{
  long unaff_x20;
  long lVar1;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x0001000d224c(&lStack_38);
    func_0x000107c61574(lVar1);
    lVar1 = ((undefined8 *)(lStack_38 + _DAT_112f03788))[1];
    func_0x000107c614f0(*(undefined8 *)(lStack_38 + _DAT_112f03788));
    (**(code **)(lVar1 + 0x30))();
    func_0x000107c61170(lStack_38);
  }
  return 0;
}



/* Entry: 102c450dc; end: 102c450ff;  */

void FUN_102c450dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c45100; end: 102c45177;  */

void FUN_102c45100(void)

{
  long *unaff_x20;
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x0001000d224c(&uStack_28);
    func_0x000107c61574(lVar1);
    FUN_102c451dc();
    func_0x000107c61170(uStack_28);
  }
  return;
}



/* Entry: 102c45178; end: 102c45197;  */

void FUN_102c45178(void)

{
  func_0x000107c61168(&PTR_PTR_112f03650);
  return;
}



/* Entry: 102c45198; end: 102c451db;  */

void FUN_102c45198(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c451dc; end: 102c4538b;  */

/* WARNING: Possible PIC construction at 0x000102c45278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c45300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c45304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c451dc(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x20 + _DAT_112f03758);
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(unaff_x20 + _DAT_112f03798);
    puVar1 = &UNK_1105b7458;
    func_0x000107c613fc(&UNK_1105b7458,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcVar2 = FUN_102c45e68;
    puVar4 = puVar1;
    (**(code **)(*plVar5 + 0x60))(FUN_102c45e68);
    func_0x000107c61574(puVar1);
    pcVar3 = pcVar2;
    func_0x000107c614f0(pcVar2);
    (**(code **)(puVar4 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f03790),pcVar3,puVar4);
  }
  else {
    puVar1 = &UNK_1105b7458;
    func_0x000107c613fc(&UNK_1105b7458,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcVar2 = (code *)0x102c45e78;
    puVar4 = puVar1;
    (**(code **)(*plVar5 + 0x60))(0x102c45e78);
    func_0x000107c61574(puVar1);
    pcVar3 = pcVar2;
    func_0x000107c614f0(pcVar2);
    (**(code **)(puVar4 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f03790),pcVar3,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
  return;
}



/* Entry: 102c4538c; end: 102c453e7;  */

void FUN_102c4538c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c453e8(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c453e8; end: 102c4593b;  */

/* WARNING: Possible PIC construction at 0x000102c454a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c45900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c45994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c4589c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c4580c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c455fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c4577c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c45574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c45780) */
/* WARNING: Removing unreachable block (ram,0x000102c45600) */
/* WARNING: Removing unreachable block (ram,0x000102c45604) */
/* WARNING: Removing unreachable block (ram,0x000102c45810) */
/* WARNING: Removing unreachable block (ram,0x000102c458a0) */
/* WARNING: Removing unreachable block (ram,0x000102c45998) */
/* WARNING: Removing unreachable block (ram,0x000102c454a8) */
/* WARNING: Removing unreachable block (ram,0x000102c454ac) */
/* WARNING: Removing unreachable block (ram,0x000102c454e0) */
/* WARNING: Removing unreachable block (ram,0x000102c45880) */
/* WARNING: Removing unreachable block (ram,0x000102c4550c) */
/* WARNING: Removing unreachable block (ram,0x000102c458b0) */
/* WARNING: Removing unreachable block (ram,0x000102c45578) */
/* WARNING: Removing unreachable block (ram,0x000102c455ac) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c453e8(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x22;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c();
  if (lVar3 < 3) {
    if (lVar3 != 1) {
      if (lVar3 == 2) {
        func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f03788));
        lVar3 = *(long *)(param_1 + _DAT_11308c0c0);
        func_0x000107c30adc(lVar3);
        func_0x000107c61180();
        func_0x000107c5faec();
        goto code_r0x000107c61170;
      }
      goto LAB_102c45904;
    }
    plVar1 = (long *)(unaff_x20 + _DAT_112f03788);
    unaff_x20 = *plVar1;
    lVar4 = plVar1[1];
    lVar5 = unaff_x20;
    func_0x000107c614f0();
    lVar3 = lVar5;
    FUN_102c45e80();
    param_2 = *(long *)(param_1 + _DAT_11308c0c0);
    func_0x000107c30b0c();
    (**(code **)(lVar4 + 0x20))(lVar3,param_2,lVar5,lVar4);
    unaff_x22 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto code_r0x000107c61170;
  }
  else {
    if (lVar3 == 0x15) {
      lVar3 = *(long *)(param_1 + _DAT_11308c0d0);
      unaff_x22 = 1;
      if (lVar3 != 0) {
        func_0x000107c61174(lVar3);
        func_0x000107c30c94();
        goto code_r0x000107c61170;
      }
      lVar4 = *(long *)(param_1 + _DAT_11308c0c0);
      func_0x000107c30b0c();
      lVar3 = lVar4;
      FUN_102c45e80();
      if (lVar3 != 0) {
        iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f03780);
        lStack_60 = 0;
        func_0x000107c55a4c();
        lVar5 = lStack_60;
        if (iVar2 == 0) {
          lVar3 = lStack_60;
          func_0x000107c61174(lStack_60);
          func_0x000107c5ed30(lVar5);
        }
        else {
          func_0x000107c61174(lStack_60);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f03788);
          lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f03788))[1];
          func_0x000107c614f0();
          uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112f03760 + 8);
          uStack_78 = uVar6;
          lStack_70 = lVar5;
          (**(code **)(lVar5 + 8))(lVar3,lVar4,0);
        }
        goto code_r0x000107c61170;
      }
    }
    else if (lVar3 == 0x12) {
      lVar4 = *(long *)(param_1 + _DAT_11308c0c0);
      func_0x000107c30b0c();
      param_1 = *(long *)(param_1 + _DAT_11308c0d0);
      lVar3 = lVar4;
      FUN_102c45e80();
      if (lVar3 != 0) {
        iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f03780);
        lStack_60 = 0;
        func_0x000107c55a4c();
        lVar5 = lStack_60;
        if (iVar2 == 0) {
          lVar3 = lStack_60;
          func_0x000107c61174(lStack_60);
          func_0x000107c5ed30(lVar5);
        }
        else {
          func_0x000107c61174(lStack_60);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f03788);
          lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f03788))[1];
          func_0x000107c614f0();
          uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112f03760 + 8);
          uStack_78 = uVar6;
          lStack_70 = lVar5;
          (**(code **)(lVar5 + 8))(lVar3,lVar4,0);
        }
        goto code_r0x000107c61170;
      }
    }
    else if (lVar3 == 3) {
      func_0x0001000d224c(&lStack_60);
      lVar4 = lStack_60;
      lVar3 = *(long *)(unaff_x20 + _DAT_112f03760);
      func_0x000107c5fadc(lVar3,((long *)(unaff_x20 + _DAT_112f03760))[1]);
      func_0x000107c5ac10(lVar4);
      func_0x000107c615e8(lVar4);
      goto code_r0x000107c61170;
    }
LAB_102c45904:
    lVar3 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  func_0x000107c60e78();
  pcStack_88 = FUN_102c4593c;
  lStack_b0 = unaff_x22;
  lStack_a8 = param_1;
  lStack_a0 = unaff_x20;
  lStack_98 = lVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c61428(param_2 + 0x10,auStack_c8,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c615f0(*(undefined8 *)(lVar3 + _DAT_112f03788));
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102c4593c; end: 102c45a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c4593c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f03788);
    lVar2 = ((undefined8 *)(param_2 + _DAT_112f03788))[1];
    func_0x000107c615f0(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c614f0(uVar1);
    (**(code **)(lVar2 + 0x18))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102c45a54; end: 102c45ab3; -[_TtC36SCAdDpaLensInteractionImplementation28DpaLensInteractionV2Workflow init] */

void FUN_102c45a54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdDpaLensInteractionImplementation.DpaLensInteractionV2Workflow",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c45a80);
  (*pcVar1)();
}



/* Entry: 102c45ab4; end: 102c45b7f; -[_TtC36SCAdDpaLensInteractionImplementation28DpaLensInteractionV2Workflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c45af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c45b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c45b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c45b18) */
/* WARNING: Removing unreachable block (ram,0x000102c45af8) */
/* WARNING: Removing unreachable block (ram,0x000102c45b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45ab4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f03758));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f03760 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f03768));
  return;
}



/* Entry: 102c45b80; end: 102c45b9f;  */

void FUN_102c45b80(void)

{
  func_0x000107c61168(&PTR_PTR_112899868);
  return;
}



/* Entry: 102c45ba0; end: 102c45c77;  */

/* WARNING: Possible PIC construction at 0x000102c45c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c45c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f03768);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = lVar3;
  func_0x000107c615f0();
  func_0x000107c5e210();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c41c94(lVar2);
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 102c45c78; end: 102c45d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c45c78(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f03760);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f03760))[1]);
  lVar2 = lStack_48;
  func_0x000107c3ff90();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(uVar1);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c61174(lVar2);
    uVar4 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f09d4a0);
    uVar5 = 0;
    func_0x000107c5fe40(0);
    uVar1 = uVar4;
    func_0x000107c312f4(uVar4,uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c523ec(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar1);
  }
  return lVar2;
}



/* Entry: 102c45d88; end: 102c45d8f;  */

/* WARNING: Possible PIC construction at 0x000102c45c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c45c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f03768);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = lVar3;
  func_0x000107c615f0();
  func_0x000107c5e210();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c41c94(lVar2);
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 102c45d90; end: 102c45e23;  */

/* WARNING: Possible PIC construction at 0x000102c45e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c45e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45d90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f037a8);
  func_0x000107c3d328(uVar1);
  func_0x000107c61180();
  func_0x00010468506c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000104684b9c(param_1,param_2,0);
  func_0x000107c4d664(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c45e24; end: 102c45e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45e24(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f037a8);
  func_0x000107c3d370(uVar1);
  func_0x000107c61180();
  func_0x000107c4d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c45e68; end: 102c45e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45e68(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + _DAT_112f03788);
    lVar2 = ((undefined8 *)(lVar3 + _DAT_112f03788))[1];
    func_0x000107c615f0(uVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c614f0(uVar1);
    (**(code **)(lVar2 + 0x18))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102c45e80; end: 102c45f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c45e80(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f03760);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112f03760))[1]);
  lVar1 = lStack_38;
  func_0x000107c4e938();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_38);
  func_0x000107c61170(uVar2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_113068f40);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 102c45f34; end: 102c45f3f; -[SCDpaLensInteractionEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45f34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f037e0;
  func_0x000107c61428(param_1 + _DAT_112f037e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c45f40; end: 102c45f4b; -[SCDpaLensInteractionEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c45f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f037e0;
  func_0x000107c61428(param_1 + _DAT_112f037e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


