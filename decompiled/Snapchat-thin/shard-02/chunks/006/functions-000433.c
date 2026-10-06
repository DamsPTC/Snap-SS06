/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fc358c; end: 101fc35df;  */

void FUN_101fc358c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc35e0; end: 101fc3627; -[SCCaaSCameraCameraUIServiceSaberEntryPoint caaSCameraCameraUIServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc35e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c010;
  func_0x000107c61428(param_1 + _DAT_112e4c010,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc3628; end: 101fc368b; -[SCCaaSCameraCameraUIServiceSaberEntryPoint setCaaSCameraCameraUIServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c010;
  func_0x000107c61428(param_1 + _DAT_112e4c010,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc368c; end: 101fc380f;  */

/* WARNING: Possible PIC construction at 0x000101fc378c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc379c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc37b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc3790) */
/* WARNING: Removing unreachable block (ram,0x000101fc37a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc368c(void)

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
    func_0x000107c3eecc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3eec4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101fc1774();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e4bf18);
        *(undefined8 *)(lVar2 + _DAT_112e4bb80) = uVar6;
        *(long *)(lVar2 + _DAT_112e4bb88) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e4bb88);
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



/* Entry: 101fc3810; end: 101fc3837; -[SCCaaSCameraCameraUIServiceSaberEntryPoint begin] */

void FUN_101fc3810(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc368c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc3838; end: 101fc387b; -[SCCaaSCameraCameraUIServiceSaberEntryPoint end] */

void FUN_101fc3838(undefined8 param_1)

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



/* Entry: 101fc387c; end: 101fc3a7f;  */

void FUN_101fc387c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0faf830)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0507d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0faf800)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000020,0x800000010f050800,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "CaaSCameraScopeGraphBridge/SCCaaSCameraCameraUIServiceSaberEntryPoint.swift"
                                ,0x4b,2,0x3c,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc3a80);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52ef0();
        goto LAB_101fc3908;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52ef4();
  }
LAB_101fc3908:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc3a80; end: 101fc3b2b; -[SCCaaSCameraCameraUIServiceSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc3a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc387c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc3b2c; end: 101fc3bab; -[SCCaaSCameraCameraUIServiceSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3b2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c000,0);
  func_0x000107c61614(param_1 + _DAT_112e4c008,0);
  *(undefined8 *)(param_1 + _DAT_112e4c010) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4c018) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc3bac; end: 101fc3bdf;  */

void FUN_101fc3bac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc3be0; end: 101fc3c37; -[SCCaaSCameraCameraUIServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc3c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc3c20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3be0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c000);
  func_0x000107c61610(param_1 + _DAT_112e4c008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c010));
  return;
}



/* Entry: 101fc3c38; end: 101fc3c57;  */

void FUN_101fc3c38(void)

{
  func_0x000107c61168(&PTR_PTR_112812598);
  return;
}



/* Entry: 101fc3c58; end: 101fc3c63; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3c58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c048;
  func_0x000107c61428(param_1 + _DAT_112e4c048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc3c64; end: 101fc3c6f; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c048;
  func_0x000107c61428(param_1 + _DAT_112e4c048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc3c70; end: 101fc3c7b; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint caaSCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3c70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c050;
  func_0x000107c61428(param_1 + _DAT_112e4c050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc3c7c; end: 101fc3cbf;  */

void FUN_101fc3c7c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101fc3cc0; end: 101fc3ccb; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint setCaaSCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c050;
  func_0x000107c61428(param_1 + _DAT_112e4c050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc3ccc; end: 101fc3d1f;  */

void FUN_101fc3ccc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc3d20; end: 101fc3d67; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint sCCaaSCameraScopedARBarReplyAdapterServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3d20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c058;
  func_0x000107c61428(param_1 + _DAT_112e4c058,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc3d68; end: 101fc3dcb; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint setSCCaaSCameraScopedARBarReplyAdapterServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c058;
  func_0x000107c61428(param_1 + _DAT_112e4c058,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc3dcc; end: 101fc3f4f;  */

/* WARNING: Possible PIC construction at 0x000101fc3ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc3edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc3ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc3ed0) */
/* WARNING: Removing unreachable block (ram,0x000101fc3ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3dcc(void)

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
    func_0x000107c3eecc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b08();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101fc192c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e4bf28);
        *(undefined8 *)(lVar2 + _DAT_112e4bbb8) = uVar6;
        *(long *)(lVar2 + _DAT_112e4bbc0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e4bbc0);
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



/* Entry: 101fc3f50; end: 101fc3f77; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint begin] */

void FUN_101fc3f50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc3dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc3f78; end: 101fc3fbb; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint end] */

void FUN_101fc3f78(undefined8 param_1)

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



/* Entry: 101fc3fbc; end: 101fc41bf;  */

void FUN_101fc3fbc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0faf830)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0507d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0faf780)) &&
           (func_0x000107c605b8(0xd000000000000032,0x800000010f050880,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint.swift"
                              ,0x5d,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc41c0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c580b0();
        goto LAB_101fc4048;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52ef4();
  }
LAB_101fc4048:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc41c0; end: 101fc426b; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc41c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc3fbc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc426c; end: 101fc42eb; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc426c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c048,0);
  func_0x000107c61614(param_1 + _DAT_112e4c050,0);
  *(undefined8 *)(param_1 + _DAT_112e4c058) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4c060) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc42ec; end: 101fc431f;  */

void FUN_101fc42ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc4320; end: 101fc4377; -[SCSCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc435c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc4360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4320(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c048);
  func_0x000107c61610(param_1 + _DAT_112e4c050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c058));
  return;
}



/* Entry: 101fc4378; end: 101fc4397;  */

void FUN_101fc4378(void)

{
  func_0x000107c61168(&PTR_PTR_112812668);
  return;
}



/* Entry: 101fc4398; end: 101fc43a3; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4398(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c090;
  func_0x000107c61428(param_1 + _DAT_112e4c090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc43a4; end: 101fc43af; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc43a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c090;
  func_0x000107c61428(param_1 + _DAT_112e4c090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc43b0; end: 101fc43bb; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint caaSCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc43b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c098;
  func_0x000107c61428(param_1 + _DAT_112e4c098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc43bc; end: 101fc43ff;  */

void FUN_101fc43bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101fc4400; end: 101fc440b; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint setCaaSCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c098;
  func_0x000107c61428(param_1 + _DAT_112e4c098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc440c; end: 101fc445f;  */

void FUN_101fc440c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc4460; end: 101fc44a7; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint sCCaaSCameraScopedARBarReplyIntegrationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c0a0;
  func_0x000107c61428(param_1 + _DAT_112e4c0a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc44a8; end: 101fc450b; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint setSCCaaSCameraScopedARBarReplyIntegrationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc44a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c0a0;
  func_0x000107c61428(param_1 + _DAT_112e4c0a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc450c; end: 101fc468f;  */

/* WARNING: Possible PIC construction at 0x000101fc460c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc461c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc4638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc4610) */
/* WARNING: Removing unreachable block (ram,0x000101fc4620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc450c(void)

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
    func_0x000107c3eecc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b0c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101fc1ae4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e4bf30);
        *(undefined8 *)(lVar2 + _DAT_112e4bbf0) = uVar6;
        *(long *)(lVar2 + _DAT_112e4bbf8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e4bbf8);
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



/* Entry: 101fc4690; end: 101fc46b7; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint begin] */

void FUN_101fc4690(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc450c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc46b8; end: 101fc46fb; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint end] */

void FUN_101fc46b8(undefined8 param_1)

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



/* Entry: 101fc46fc; end: 101fc48ff;  */

void FUN_101fc46fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0faf830)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0507d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffca) || (param_3 != -0x7ffffffef0faf6e0)) &&
           (func_0x000107c605b8(0xd000000000000036,0x800000010f050920,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint.swift"
                              ,0x61,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc4900);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c580b4();
        goto LAB_101fc4788;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52ef4();
  }
LAB_101fc4788:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc4900; end: 101fc49ab; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc4900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc46fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc49ac; end: 101fc4a2b; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc49ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c090,0);
  func_0x000107c61614(param_1 + _DAT_112e4c098,0);
  *(undefined8 *)(param_1 + _DAT_112e4c0a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4c0a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc4a2c; end: 101fc4a5f;  */

void FUN_101fc4a2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc4a60; end: 101fc4ab7; -[SCSCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc4a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc4aa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4a60(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c090);
  func_0x000107c61610(param_1 + _DAT_112e4c098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c0a0));
  return;
}



/* Entry: 101fc4ab8; end: 101fc4ad7;  */

void FUN_101fc4ab8(void)

{
  func_0x000107c61168(&PTR_PTR_112812738);
  return;
}



/* Entry: 101fc4ad8; end: 101fc4ae3; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4ad8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c0d8;
  func_0x000107c61428(param_1 + _DAT_112e4c0d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc4ae4; end: 101fc4aef; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c0d8;
  func_0x000107c61428(param_1 + _DAT_112e4c0d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc4af0; end: 101fc4afb; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint caaSCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4af0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c0e0;
  func_0x000107c61428(param_1 + _DAT_112e4c0e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc4afc; end: 101fc4b3f;  */

void FUN_101fc4afc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101fc4b40; end: 101fc4b4b; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint setCaaSCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c0e0;
  func_0x000107c61428(param_1 + _DAT_112e4c0e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc4b4c; end: 101fc4b9f;  */

void FUN_101fc4b4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc4ba0; end: 101fc4be7; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint sCCaaSCameraScopedARBarReplyServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4ba0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c0e8;
  func_0x000107c61428(param_1 + _DAT_112e4c0e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc4be8; end: 101fc4c4b; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint setSCCaaSCameraScopedARBarReplyServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c0e8;
  func_0x000107c61428(param_1 + _DAT_112e4c0e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc4c4c; end: 101fc4dcf;  */

/* WARNING: Possible PIC construction at 0x000101fc4d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc4d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc4d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc4d50) */
/* WARNING: Removing unreachable block (ram,0x000101fc4d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc4c4c(void)

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
    func_0x000107c3eecc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b10();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101fc1c9c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e4bf38);
        *(undefined8 *)(lVar2 + _DAT_112e4bc28) = uVar6;
        *(long *)(lVar2 + _DAT_112e4bc30) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e4bc30);
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



/* Entry: 101fc4dd0; end: 101fc4df7; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint begin] */

void FUN_101fc4dd0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc4c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc4df8; end: 101fc4e3b; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint end] */

void FUN_101fc4df8(undefined8 param_1)

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



/* Entry: 101fc4e3c; end: 101fc503f;  */

void FUN_101fc4e3c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0faf830)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0507d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0faf630)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f0509d0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint.swift"
                              ,0x56,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc5040);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c580b8();
        goto LAB_101fc4ec8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52ef4();
  }
LAB_101fc4ec8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc5040; end: 101fc50eb; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc5040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc4e3c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc50ec; end: 101fc516b; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc50ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c0d8,0);
  func_0x000107c61614(param_1 + _DAT_112e4c0e0,0);
  *(undefined8 *)(param_1 + _DAT_112e4c0e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4c0f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc516c; end: 101fc519f;  */

void FUN_101fc516c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc51a0; end: 101fc51f7; -[SCSCCaaSCameraScopedARBarReplyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc51dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc51e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc51a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c0d8);
  func_0x000107c61610(param_1 + _DAT_112e4c0e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c0e8));
  return;
}



/* Entry: 101fc51f8; end: 101fc5217;  */

void FUN_101fc51f8(void)

{
  func_0x000107c61168(&PTR_PTR_112812808);
  return;
}



/* Entry: 101fc5218; end: 101fc5223; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5218(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c120;
  func_0x000107c61428(param_1 + _DAT_112e4c120,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc5224; end: 101fc522f; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c120;
  func_0x000107c61428(param_1 + _DAT_112e4c120,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc5230; end: 101fc523b; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider caaSCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c128;
  func_0x000107c61428(param_1 + _DAT_112e4c128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc523c; end: 101fc527f;  */

void FUN_101fc523c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101fc5280; end: 101fc528b; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider setCaaSCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c128;
  func_0x000107c61428(param_1 + _DAT_112e4c128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc528c; end: 101fc52df;  */

void FUN_101fc528c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc52e0; end: 101fc54f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101fc52e0(void)

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
    func_0x000107c3eecc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101fc1d4c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e4bf40);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e4c130);
      *(long *)(unaff_x20 + _DAT_112e4c130) = lVar4;
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
                      "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider.swift"
                      ,0x6a,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc540c);
  (*pcVar1)();
}



/* Entry: 101fc54f4; end: 101fc5527; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider provide] */

void FUN_101fc54f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fc52e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc5528; end: 101fc555b; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider __safeProvide] */

void FUN_101fc5528(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101fc540c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc555c; end: 101fc559f; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider end] */

void FUN_101fc555c(undefined8 param_1)

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



/* Entry: 101fc55a0; end: 101fc5737;  */

void FUN_101fc55a0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0faf830)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0507d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider.swift"
                            ,0x6a,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc5738);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52ef4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc5738; end: 101fc57e3; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101fc5738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc55a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc57e4; end: 101fc5857; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc57e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c120,0);
  func_0x000107c61614(param_1 + _DAT_112e4c128,0);
  *(undefined8 *)(param_1 + _DAT_112e4c130) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc5858; end: 101fc588b;  */

void FUN_101fc5858(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc588c; end: 101fc58d3; -[SCSCCaaSCameraScopedLensCarouselDataProvidingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc588c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c120);
  func_0x000107c61610(param_1 + _DAT_112e4c128);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4c130));
  return;
}



/* Entry: 101fc58d4; end: 101fc58f3;  */

void FUN_101fc58d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e4c178);
  return;
}



/* Entry: 101fc58f4; end: 101fc58ff; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc58f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c1e0;
  func_0x000107c61428(param_1 + _DAT_112e4c1e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc5900; end: 101fc590b; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5900(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c1e0;
  func_0x000107c61428(param_1 + _DAT_112e4c1e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc590c; end: 101fc5917; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider caaSCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc590c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c1e8;
  func_0x000107c61428(param_1 + _DAT_112e4c1e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc5918; end: 101fc595b;  */

void FUN_101fc5918(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101fc595c; end: 101fc5967; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider setCaaSCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc595c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c1e8;
  func_0x000107c61428(param_1 + _DAT_112e4c1e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc5968; end: 101fc59bb;  */

void FUN_101fc5968(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc59bc; end: 101fc5bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101fc59bc(void)

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
    func_0x000107c3eecc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101fc1e78();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e4bf48);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e4c1f0);
      *(long *)(unaff_x20 + _DAT_112e4c1f0) = lVar4;
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
                      "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider.swift"
                      ,100,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc5ae8);
  (*pcVar1)();
}



/* Entry: 101fc5bd0; end: 101fc5c03; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider provide] */

void FUN_101fc5bd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fc59bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc5c04; end: 101fc5c37; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider __safeProvide] */

void FUN_101fc5c04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101fc5ae8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc5c38; end: 101fc5c7b; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider end] */

void FUN_101fc5c38(undefined8 param_1)

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



/* Entry: 101fc5c7c; end: 101fc5e13;  */

void FUN_101fc5c7c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0faf830)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0507d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider.swift"
                            ,100,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc5e14);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52ef4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc5e14; end: 101fc5ebf; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101fc5e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc5c7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc5ec0; end: 101fc5f33; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5ec0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c1e0,0);
  func_0x000107c61614(param_1 + _DAT_112e4c1e8,0);
  *(undefined8 *)(param_1 + _DAT_112e4c1f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc5f34; end: 101fc5f67;  */

void FUN_101fc5f34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc5f68; end: 101fc5faf; -[SCSCCaaSCameraScopedLensCarouselFeatureServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5f68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c1e0);
  func_0x000107c61610(param_1 + _DAT_112e4c1e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4c1f0));
  return;
}



/* Entry: 101fc5fb0; end: 101fc5fcf;  */

void FUN_101fc5fb0(void)

{
  func_0x000107c61168(&PTR_PTR_112e4c238);
  return;
}



/* Entry: 101fc5fd0; end: 101fc5fdb; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5fd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c2a0;
  func_0x000107c61428(param_1 + _DAT_112e4c2a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc5fdc; end: 101fc5fe7; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c2a0;
  func_0x000107c61428(param_1 + _DAT_112e4c2a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc5fe8; end: 101fc5ff3; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider caaSCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc5fe8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c2a8;
  func_0x000107c61428(param_1 + _DAT_112e4c2a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc5ff4; end: 101fc6037;  */

void FUN_101fc5ff4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101fc6038; end: 101fc6043; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider setCaaSCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c2a8;
  func_0x000107c61428(param_1 + _DAT_112e4c2a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


