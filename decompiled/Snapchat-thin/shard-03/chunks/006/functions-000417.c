/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ad436c; end: 102ad4377; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad436c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb680;
  func_0x000107c61428(param_1 + _DAT_112eeb680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad4378; end: 102ad4383; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb680;
  func_0x000107c61428(param_1 + _DAT_112eeb680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad4384; end: 102ad438f; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint captureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4384(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb688;
  func_0x000107c61428(param_1 + _DAT_112eeb688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad4390; end: 102ad43d3;  */

void FUN_102ad4390(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ad43d4; end: 102ad43df; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint setCaptureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad43d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb688;
  func_0x000107c61428(param_1 + _DAT_112eeb688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad43e0; end: 102ad4433;  */

void FUN_102ad43e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad4434; end: 102ad447b; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint sCCaptureCameraEmptyServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4434(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb690;
  func_0x000107c61428(param_1 + _DAT_112eeb690,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad447c; end: 102ad44df; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint setSCCaptureCameraEmptyServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad447c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb690;
  func_0x000107c61428(param_1 + _DAT_112eeb690,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad44e0; end: 102ad4663;  */

/* WARNING: Possible PIC construction at 0x000102ad45e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad45f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad460c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad45e4) */
/* WARNING: Removing unreachable block (ram,0x000102ad45f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad44e0(void)

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
    func_0x000107c3f5d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b54();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102ad1d08();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eeb568);
        *(undefined8 *)(lVar2 + _DAT_112eeb3c8) = uVar6;
        *(long *)(lVar2 + _DAT_112eeb3d0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eeb3d0);
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



/* Entry: 102ad4664; end: 102ad468b; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint begin] */

void FUN_102ad4664(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad44e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad468c; end: 102ad46cf; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint end] */

void FUN_102ad468c(undefined8 param_1)

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



/* Entry: 102ad46d0; end: 102ad48d3;  */

void FUN_102ad46d0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f16da0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0e9260,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000023;
        if (((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0f16d80)) &&
           (func_0x000107c605b8(0xd000000000000023,0x800000010f0e9280,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaptureScopeGraphBridge/SCSCCaptureCameraEmptyServicesSaberEntryPoint.swift"
                              ,0x4b,2,0x7e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad48d4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c580fc();
        goto LAB_102ad475c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c531e4();
  }
LAB_102ad475c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad48d4; end: 102ad497f; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad48d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad46d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad4980; end: 102ad49ff; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4980(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eeb680,0);
  func_0x000107c61614(param_1 + _DAT_112eeb688,0);
  *(undefined8 *)(param_1 + _DAT_112eeb690) = 0;
  *(undefined8 *)(param_1 + _DAT_112eeb698) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad4a00; end: 102ad4a33;  */

void FUN_102ad4a00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad4a34; end: 102ad4a8b; -[SCSCCaptureCameraEmptyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad4a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad4a74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4a34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb680);
  func_0x000107c61610(param_1 + _DAT_112eeb688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb690));
  return;
}



/* Entry: 102ad4a8c; end: 102ad4aab;  */

void FUN_102ad4a8c(void)

{
  func_0x000107c61168(&PTR_PTR_1128863e8);
  return;
}



/* Entry: 102ad4aac; end: 102ad4ab7; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4aac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb6c8;
  func_0x000107c61428(param_1 + _DAT_112eeb6c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad4ab8; end: 102ad4ac3; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb6c8;
  func_0x000107c61428(param_1 + _DAT_112eeb6c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad4ac4; end: 102ad4acf; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint captureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4ac4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb6d0;
  func_0x000107c61428(param_1 + _DAT_112eeb6d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad4ad0; end: 102ad4b13;  */

void FUN_102ad4ad0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ad4b14; end: 102ad4b1f; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint setCaptureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb6d0;
  func_0x000107c61428(param_1 + _DAT_112eeb6d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad4b20; end: 102ad4b73;  */

void FUN_102ad4b20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad4b74; end: 102ad4bbb; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint sCCaptureScopedLensCarouselManagementServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4b74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb6d8;
  func_0x000107c61428(param_1 + _DAT_112eeb6d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad4bbc; end: 102ad4c1f; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint setSCCaptureScopedLensCarouselManagementServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb6d8;
  func_0x000107c61428(param_1 + _DAT_112eeb6d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad4c20; end: 102ad4da3;  */

/* WARNING: Possible PIC construction at 0x000102ad4d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad4d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad4d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad4d24) */
/* WARNING: Removing unreachable block (ram,0x000102ad4d34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad4c20(void)

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
    func_0x000107c3f5d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b58();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102ad1ec0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eeb570);
        *(undefined8 *)(lVar2 + _DAT_112eeb400) = uVar6;
        *(long *)(lVar2 + _DAT_112eeb408) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eeb408);
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



/* Entry: 102ad4da4; end: 102ad4dcb; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint begin] */

void FUN_102ad4da4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad4c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad4dcc; end: 102ad4e0f; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint end] */

void FUN_102ad4dcc(undefined8 param_1)

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



/* Entry: 102ad4e10; end: 102ad5013;  */

void FUN_102ad4e10(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f16da0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0e9260,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f16d00)) &&
           (func_0x000107c605b8(0xd000000000000034,0x800000010f0e9300,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaptureScopeGraphBridge/SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint.swift"
                              ,0x5c,2,0x7e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad5014);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58100();
        goto LAB_102ad4e9c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c531e4();
  }
LAB_102ad4e9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad5014; end: 102ad50bf; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad5014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad4e10(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad50c0; end: 102ad513f; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad50c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eeb6c8,0);
  func_0x000107c61614(param_1 + _DAT_112eeb6d0,0);
  *(undefined8 *)(param_1 + _DAT_112eeb6d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112eeb6e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad5140; end: 102ad5173;  */

void FUN_102ad5140(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad5174; end: 102ad51cb; -[SCSCCaptureScopedLensCarouselManagementServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad51b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad51b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5174(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb6c8);
  func_0x000107c61610(param_1 + _DAT_112eeb6d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb6d8));
  return;
}



/* Entry: 102ad51cc; end: 102ad51eb;  */

void FUN_102ad51cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128864b8);
  return;
}



/* Entry: 102ad51ec; end: 102ad51f7; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad51ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb710;
  func_0x000107c61428(param_1 + _DAT_112eeb710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad51f8; end: 102ad5203; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad51f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb710;
  func_0x000107c61428(param_1 + _DAT_112eeb710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad5204; end: 102ad520f; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint captureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5204(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb718;
  func_0x000107c61428(param_1 + _DAT_112eeb718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad5210; end: 102ad5253;  */

void FUN_102ad5210(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ad5254; end: 102ad525f; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint setCaptureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb718;
  func_0x000107c61428(param_1 + _DAT_112eeb718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad5260; end: 102ad52b3;  */

void FUN_102ad5260(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad52b4; end: 102ad52fb; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint sCCaptureScopedLensCarouselScopeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad52b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb720;
  func_0x000107c61428(param_1 + _DAT_112eeb720,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad52fc; end: 102ad535f; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint setSCCaptureScopedLensCarouselScopeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad52fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb720;
  func_0x000107c61428(param_1 + _DAT_112eeb720,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad5360; end: 102ad54e3;  */

/* WARNING: Possible PIC construction at 0x000102ad5460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad5470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad548c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad5464) */
/* WARNING: Removing unreachable block (ram,0x000102ad5474) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5360(void)

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
    func_0x000107c3f5d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b5c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102ad2078();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eeb578);
        *(undefined8 *)(lVar2 + _DAT_112eeb438) = uVar6;
        *(long *)(lVar2 + _DAT_112eeb440) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eeb440);
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



/* Entry: 102ad54e4; end: 102ad550b; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint begin] */

void FUN_102ad54e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad5360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad550c; end: 102ad554f; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint end] */

void FUN_102ad550c(undefined8 param_1)

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



/* Entry: 102ad5550; end: 102ad5753;  */

void FUN_102ad5550(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f16da0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0e9260,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f16c60)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f0e93a0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaptureScopeGraphBridge/SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint.swift"
                              ,0x57,2,0x7e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad5754);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58104();
        goto LAB_102ad55dc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c531e4();
  }
LAB_102ad55dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad5754; end: 102ad57ff; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad5754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad5550(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad5800; end: 102ad587f; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5800(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eeb710,0);
  func_0x000107c61614(param_1 + _DAT_112eeb718,0);
  *(undefined8 *)(param_1 + _DAT_112eeb720) = 0;
  *(undefined8 *)(param_1 + _DAT_112eeb728) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad5880; end: 102ad58b3;  */

void FUN_102ad5880(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad58b4; end: 102ad590b; -[SCSCCaptureScopedLensCarouselScopeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad58f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad58f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad58b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb710);
  func_0x000107c61610(param_1 + _DAT_112eeb718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb720));
  return;
}



/* Entry: 102ad590c; end: 102ad592b;  */

void FUN_102ad590c(void)

{
  func_0x000107c61168(&PTR_PTR_112886588);
  return;
}



/* Entry: 102ad592c; end: 102ad5937; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad592c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb758;
  func_0x000107c61428(param_1 + _DAT_112eeb758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad5938; end: 102ad5943; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb758;
  func_0x000107c61428(param_1 + _DAT_112eeb758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad5944; end: 102ad594f; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint captureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5944(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb760;
  func_0x000107c61428(param_1 + _DAT_112eeb760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad5950; end: 102ad5993;  */

void FUN_102ad5950(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ad5994; end: 102ad599f; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint setCaptureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb760;
  func_0x000107c61428(param_1 + _DAT_112eeb760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad59a0; end: 102ad59f3;  */

void FUN_102ad59a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad59f4; end: 102ad5a3b; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint sCCaptureWorkflowResultServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad59f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb768;
  func_0x000107c61428(param_1 + _DAT_112eeb768,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad5a3c; end: 102ad5a9f; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint setSCCaptureWorkflowResultServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb768;
  func_0x000107c61428(param_1 + _DAT_112eeb768,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad5aa0; end: 102ad5c23;  */

/* WARNING: Possible PIC construction at 0x000102ad5ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad5bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad5bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad5ba4) */
/* WARNING: Removing unreachable block (ram,0x000102ad5bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5aa0(void)

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
    func_0x000107c3f5d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b64();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102ad2230();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eeb588);
        *(undefined8 *)(lVar2 + _DAT_112eeb470) = uVar6;
        *(long *)(lVar2 + _DAT_112eeb478) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eeb478);
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



/* Entry: 102ad5c24; end: 102ad5c4b; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint begin] */

void FUN_102ad5c24(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad5aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad5c4c; end: 102ad5c8f; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint end] */

void FUN_102ad5c4c(undefined8 param_1)

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



/* Entry: 102ad5c90; end: 102ad5e93;  */

void FUN_102ad5c90(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f16da0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0e9260,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0f16bd0)) &&
           (func_0x000107c605b8(0xd000000000000026,0x800000010f0e9430,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaptureScopeGraphBridge/SCSCCaptureWorkflowResultServicesSaberEntryPoint.swift"
                              ,0x4e,2,0x7e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad5e94);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5810c();
        goto LAB_102ad5d1c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c531e4();
  }
LAB_102ad5d1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad5e94; end: 102ad5f3f; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad5e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad5c90(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad5f40; end: 102ad5fbf; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5f40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eeb758,0);
  func_0x000107c61614(param_1 + _DAT_112eeb760,0);
  *(undefined8 *)(param_1 + _DAT_112eeb768) = 0;
  *(undefined8 *)(param_1 + _DAT_112eeb770) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad5fc0; end: 102ad5ff3;  */

void FUN_102ad5fc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad5ff4; end: 102ad604b; -[SCSCCaptureWorkflowResultServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad6030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad6034) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad5ff4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb758);
  func_0x000107c61610(param_1 + _DAT_112eeb760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb768));
  return;
}



/* Entry: 102ad604c; end: 102ad606b;  */

void FUN_102ad604c(void)

{
  func_0x000107c61168(&PTR_PTR_112886658);
  return;
}



/* Entry: 102ad606c; end: 102ad6077; -[SCSCLensCameraFeatureServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad606c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb7a0;
  func_0x000107c61428(param_1 + _DAT_112eeb7a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad6078; end: 102ad6083; -[SCSCLensCameraFeatureServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb7a0;
  func_0x000107c61428(param_1 + _DAT_112eeb7a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad6084; end: 102ad608f; -[SCSCLensCameraFeatureServicesSaberEntryPoint captureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6084(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb7a8;
  func_0x000107c61428(param_1 + _DAT_112eeb7a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad6090; end: 102ad60d3;  */

void FUN_102ad6090(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ad60d4; end: 102ad60df; -[SCSCLensCameraFeatureServicesSaberEntryPoint setCaptureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad60d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb7a8;
  func_0x000107c61428(param_1 + _DAT_112eeb7a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad60e0; end: 102ad6133;  */

void FUN_102ad60e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad6134; end: 102ad617b; -[SCSCLensCameraFeatureServicesSaberEntryPoint sCLensCameraFeatureServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb7b0;
  func_0x000107c61428(param_1 + _DAT_112eeb7b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad617c; end: 102ad61df; -[SCSCLensCameraFeatureServicesSaberEntryPoint setSCLensCameraFeatureServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad617c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb7b0;
  func_0x000107c61428(param_1 + _DAT_112eeb7b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad61e0; end: 102ad6363;  */

/* WARNING: Possible PIC construction at 0x000102ad62e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad62f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad630c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad62e4) */
/* WARNING: Removing unreachable block (ram,0x000102ad62f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad61e0(void)

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
    func_0x000107c3f5d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e84();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102ad23e8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eeb598);
        *(undefined8 *)(lVar2 + _DAT_112eeb4a8) = uVar6;
        *(long *)(lVar2 + _DAT_112eeb4b0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eeb4b0);
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



/* Entry: 102ad6364; end: 102ad638b; -[SCSCLensCameraFeatureServicesSaberEntryPoint begin] */

void FUN_102ad6364(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad61e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad638c; end: 102ad63cf; -[SCSCLensCameraFeatureServicesSaberEntryPoint end] */

void FUN_102ad638c(undefined8 param_1)

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



/* Entry: 102ad63d0; end: 102ad65d3;  */

void FUN_102ad63d0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f16da0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0e9260,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f16b50)) &&
           (func_0x000107c605b8(0xd000000000000022,0x800000010f0e94b0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaptureScopeGraphBridge/SCSCLensCameraFeatureServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x7e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad65d4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5842c();
        goto LAB_102ad645c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c531e4();
  }
LAB_102ad645c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad65d4; end: 102ad667f; -[SCSCLensCameraFeatureServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad65d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad63d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad6680; end: 102ad66ff; -[SCSCLensCameraFeatureServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6680(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eeb7a0,0);
  func_0x000107c61614(param_1 + _DAT_112eeb7a8,0);
  *(undefined8 *)(param_1 + _DAT_112eeb7b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112eeb7b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad6700; end: 102ad6733;  */

void FUN_102ad6700(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad6734; end: 102ad678b; -[SCSCLensCameraFeatureServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad6770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad6774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6734(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb7a0);
  func_0x000107c61610(param_1 + _DAT_112eeb7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb7b0));
  return;
}



/* Entry: 102ad678c; end: 102ad67ab;  */

void FUN_102ad678c(void)

{
  func_0x000107c61168(&PTR_PTR_112886728);
  return;
}



/* Entry: 102ad67ac; end: 102ad67b7; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad67ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb7e8;
  func_0x000107c61428(param_1 + _DAT_112eeb7e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad67b8; end: 102ad67c3; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad67b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb7e8;
  func_0x000107c61428(param_1 + _DAT_112eeb7e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad67c4; end: 102ad67cf; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint captureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad67c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb7f0;
  func_0x000107c61428(param_1 + _DAT_112eeb7f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad67d0; end: 102ad6813;  */

void FUN_102ad67d0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ad6814; end: 102ad681f; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint setCaptureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb7f0;
  func_0x000107c61428(param_1 + _DAT_112eeb7f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad6820; end: 102ad6873;  */

void FUN_102ad6820(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad6874; end: 102ad68bb; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint sCLensInfoCardPresentationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6874(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb7f8;
  func_0x000107c61428(param_1 + _DAT_112eeb7f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad68bc; end: 102ad691f; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint setSCLensInfoCardPresentationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad68bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb7f8;
  func_0x000107c61428(param_1 + _DAT_112eeb7f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad6920; end: 102ad6aa3;  */

/* WARNING: Possible PIC construction at 0x000102ad6a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad6a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad6a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad6a24) */
/* WARNING: Removing unreachable block (ram,0x000102ad6a34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6920(void)

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
    func_0x000107c3f5d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50ee0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102ad25a0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eeb5a8);
        *(undefined8 *)(lVar2 + _DAT_112eeb4e0) = uVar6;
        *(long *)(lVar2 + _DAT_112eeb4e8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eeb4e8);
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



/* Entry: 102ad6aa4; end: 102ad6acb; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint begin] */

void FUN_102ad6aa4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad6920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad6acc; end: 102ad6b0f; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint end] */

void FUN_102ad6acc(undefined8 param_1)

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



/* Entry: 102ad6b10; end: 102ad6d13;  */

void FUN_102ad6b10(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f16da0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0e9260,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000029;
        if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0f16ad0)) &&
           (func_0x000107c605b8(0xd000000000000029,0x800000010f0e9530,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CaptureScopeGraphBridge/SCSCLensInfoCardPresentationServicesSaberEntryPoint.swift"
                              ,0x51,2,0x7e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad6d14);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58488();
        goto LAB_102ad6b9c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c531e4();
  }
LAB_102ad6b9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad6d14; end: 102ad6dbf; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad6d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad6b10(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad6dc0; end: 102ad6e3f; -[SCSCLensInfoCardPresentationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad6dc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eeb7e8,0);
  func_0x000107c61614(param_1 + _DAT_112eeb7f0,0);
  *(undefined8 *)(param_1 + _DAT_112eeb7f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112eeb800) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad6e40; end: 102ad6e73;  */

void FUN_102ad6e40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


