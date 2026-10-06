/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fc6044; end: 101fc6097;  */

void FUN_101fc6044(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc6098; end: 101fc62ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101fc6098(void)

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
      func_0x000101fc1fa4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e4bf50);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e4c2b0);
      *(long *)(unaff_x20 + _DAT_112e4c2b0) = lVar4;
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
                      "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider.swift"
                      ,0x69,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc61c4);
  (*pcVar1)();
}



/* Entry: 101fc62ac; end: 101fc62df; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider provide] */

void FUN_101fc62ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fc6098();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc62e0; end: 101fc6313; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider __safeProvide] */

void FUN_101fc62e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101fc61c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc6314; end: 101fc6357; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider end] */

void FUN_101fc6314(undefined8 param_1)

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



/* Entry: 101fc6358; end: 101fc64ef;  */

void FUN_101fc6358(long param_1,long param_2,long param_3)

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
                            "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider.swift"
                            ,0x69,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc64f0);
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



/* Entry: 101fc64f0; end: 101fc659b; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101fc64f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc6358(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc659c; end: 101fc660f; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc659c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c2a0,0);
  func_0x000107c61614(param_1 + _DAT_112e4c2a8,0);
  *(undefined8 *)(param_1 + _DAT_112e4c2b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc6610; end: 101fc6643;  */

void FUN_101fc6610(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc6644; end: 101fc668b; -[SCSCCaaSCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6644(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c2a0);
  func_0x000107c61610(param_1 + _DAT_112e4c2a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4c2b0));
  return;
}



/* Entry: 101fc668c; end: 101fc66ab;  */

void FUN_101fc668c(void)

{
  func_0x000107c61168(&PTR_PTR_112e4c2f8);
  return;
}



/* Entry: 101fc66ac; end: 101fc66f3; -[SCSCCaaSCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc66ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c360;
  func_0x000107c61428(param_1 + _DAT_112e4c360,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc66f4; end: 101fc674b; -[SCSCCaaSCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc66f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c360;
  func_0x000107c61428(param_1 + _DAT_112e4c360,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc674c; end: 101fc6823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc674c(undefined8 param_1,long param_2)

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
    FUN_101fc2278();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4bed0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fc6824);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4bed8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4c368);
    *(long **)(unaff_x20 + _DAT_112e4c368) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101fc6824; end: 101fc684b; -[SCSCCaaSCameraScopedServicesSaberEntryPoint begin] */

void FUN_101fc6824(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc674c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc684c; end: 101fc69c3;  */

/* WARNING: Possible PIC construction at 0x000101fc68b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc694c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc68b8) */
/* WARNING: Removing unreachable block (ram,0x000101fc6950) */
/* WARNING: Removing unreachable block (ram,0x000101fc6968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc684c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4c368);
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



/* Entry: 101fc69c4; end: 101fc69cb;  */

void FUN_101fc69c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fc69cc; end: 101fc69ff; -[SCSCCaaSCameraScopedServicesSaberEntryPoint end] */

void FUN_101fc69cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fc684c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc6a00; end: 101fc6b1f;  */

void FUN_101fc6a00(long param_1,long param_2,long param_3)

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
                        "CaaSCameraScopeGraphBridge/SCSCCaaSCameraScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x34,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc6b20);
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



/* Entry: 101fc6b20; end: 101fc6bcb; -[SCSCCaaSCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc6a00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc6bcc; end: 101fc6c2b; -[SCSCCaaSCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6bcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c360,0);
  *(undefined8 *)(param_1 + _DAT_112e4c368) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc6c2c; end: 101fc6c5f;  */

void FUN_101fc6c2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc6c60; end: 101fc6c97; -[SCSCCaaSCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6c60(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c368));
  return;
}



/* Entry: 101fc6c98; end: 101fc6cb7;  */

void FUN_101fc6c98(void)

{
  func_0x000107c61168(&PTR_PTR_1128129b0);
  return;
}



/* Entry: 101fc6cb8; end: 101fc6d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6cb8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fc70ac();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4c3a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101fc6d24; end: 101fc6d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6d24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4c3a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc6d90; end: 101fc6def; -[_TtC44AddToStoryCameraScopedFactoryServiceProvider32SCAddToStoryCameraScopedServices init] */

void FUN_101fc6d90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToStoryCameraScopedFactoryServiceProvider.SCAddToStoryCameraScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc6dbc);
  (*pcVar1)();
}



/* Entry: 101fc6df0; end: 101fc6dff; -[_TtC44AddToStoryCameraScopedFactoryServiceProvider32SCAddToStoryCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4c3a0));
  return;
}



/* Entry: 101fc6e00; end: 101fc6e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc6e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b3fc8;
  func_0x000107c613fc(&UNK_1104b3fc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101fc7188,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fc6e6c; end: 101fc6f07;  */

void FUN_101fc6e6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b3ed8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b3ed8;
  return;
}



/* Entry: 101fc6f08; end: 101fc6f3f;  */

void FUN_101fc6f08(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101fc6f40; end: 101fc6f47;  */

undefined8 FUN_101fc6f40(void)

{
  return 0x1b;
}



/* Entry: 101fc6f48; end: 101fc707b;  */

void FUN_101fc6f48(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b3ff0;
  func_0x000107c613fc(&UNK_1104b3ff0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fc7160;
  func_0x00010058fa64(FUN_101fc7160,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fc707c; end: 101fc70ab;  */

undefined ** FUN_101fc707c(void)

{
  return &PTR_DAT_112fef700;
}



/* Entry: 101fc70ac; end: 101fc70cb;  */

void FUN_101fc70ac(void)

{
  func_0x000107c61168(&PTR_PTR_112812a70);
  return;
}



/* Entry: 101fc70cc; end: 101fc711b;  */

undefined1  [16] FUN_101fc70cc(void)

{
  return ZEXT816(0x1104b3f28);
}



/* Entry: 101fc711c; end: 101fc715f;  */

void FUN_101fc711c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4c408 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9cf0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e4c408 = puVar1;
  return;
}



/* Entry: 101fc7160; end: 101fc7187;  */

void FUN_101fc7160(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101fc7188; end: 101fc718b;  */

void FUN_101fc7188(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101fc718c; end: 101fc7207;  */

void FUN_101fc718c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e4c418,&UNK_10da45b30);
  func_0x000107c613fc();
  pcVar1 = FUN_101fc75e4;
  func_0x0001000841fc(FUN_101fc75e4,param_2);
  func_0x000100084214(&UNK_10da45b00,0x2e,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fc7208; end: 101fc721f;  */

void FUN_101fc7208(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e4c418,&UNK_10da45b30);
  func_0x000107c613fc();
  pcVar1 = FUN_101fc75e4;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10da45b00,0x2e,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101fc7220; end: 101fc75e3;  */

void FUN_101fc7220(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e4c420,&UNK_10da45b38);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101fc86b8();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  func_0x000101fc8744();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101fc6f08;
  func_0x0001000823a8(FUN_101fc6f08,0);
  func_0x000100082720("SCAddToStoryCameraScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e4c428,&UNK_10da45b50);
  puVar5 = &UNK_1104b4050;
  func_0x000107c613fc(&UNK_1104b4050,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x101fc75ec;
  func_0x0001000823a8(0x101fc75ec,puVar5);
  func_0x000100082720("AddToStoryCameraUIEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e4c430,&UNK_10da45b40);
  func_0x000107c6157c(uVar11);
  uVar6 = 0x101fc75f8;
  func_0x0001000823a8(0x101fc75f8,uVar11);
  func_0x000100082720("SCAddToStoryCameraScopedCameraFeatureServicesServiceProvider",0x3c,2);
  uVar7 = uVar6;
  FUN_101fc850c(uVar6,puVar2);
  func_0x000100082720("AddToStoryCameraScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e4c438,&UNK_10da45b48);
  puVar5 = &UNK_1104b4078;
  func_0x000107c613fc(&UNK_1104b4078,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101fc7600;
  func_0x0001000823a8(0x101fc7600,puVar5);
  func_0x000100082720("SCAddToStoryCameraScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e4c3a8,&UNK_10da458e0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101fc760c;
  func_0x0001000823a8(0x101fc760c,uVar8);
  func_0x000100082720("SCAddToStoryCameraScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e4c398,&UNK_10da458d0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101fc7614;
  func_0x0001000823a8(0x101fc7614,uVar9);
  func_0x000100082720("SCAddToStoryCameraScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104b40a0;
  func_0x000107c613fc(&UNK_1104b40a0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x101fc761c;
  func_0x0001000823a8(0x101fc761c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCAddToStoryCameraScopeEntryPointProvider",0x29,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 101fc75e4; end: 101fc7623;  */

void FUN_101fc75e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e4c420,&UNK_10da45b38);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101fc86b8();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  func_0x000101fc8744();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101fc6f08;
  func_0x0001000823a8(FUN_101fc6f08,0);
  func_0x000100082720("SCAddToStoryCameraScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e4c428,&UNK_10da45b50);
  puVar5 = &UNK_1104b4050;
  func_0x000107c613fc(&UNK_1104b4050,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar11 = 0x101fc75ec;
  func_0x0001000823a8(0x101fc75ec,puVar5);
  func_0x000100082720("AddToStoryCameraUIEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e4c430,&UNK_10da45b40);
  func_0x000107c6157c(uVar11);
  uVar6 = 0x101fc75f8;
  func_0x0001000823a8(0x101fc75f8,uVar11);
  func_0x000100082720("SCAddToStoryCameraScopedCameraFeatureServicesServiceProvider",0x3c,2);
  uVar7 = uVar6;
  FUN_101fc850c(uVar6,puVar2);
  func_0x000100082720("AddToStoryCameraScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e4c438,&UNK_10da45b48);
  puVar5 = &UNK_1104b4078;
  func_0x000107c613fc(&UNK_1104b4078,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101fc7600;
  func_0x0001000823a8(0x101fc7600,puVar5);
  func_0x000100082720("SCAddToStoryCameraScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e4c3a8,&UNK_10da458e0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101fc760c;
  func_0x0001000823a8(0x101fc760c,uVar8);
  func_0x000100082720("SCAddToStoryCameraScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e4c398,&UNK_10da458d0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101fc7614;
  func_0x0001000823a8(0x101fc7614,uVar9);
  func_0x000100082720("SCAddToStoryCameraScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104b40a0;
  func_0x000107c613fc(&UNK_1104b40a0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x101fc761c;
  func_0x0001000823a8(0x101fc761c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCAddToStoryCameraScopeEntryPointProvider",0x29,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 101fc7624; end: 101fc76d3;  */

void FUN_101fc7624(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101fc79d8();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101fc787c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc76d4; end: 101fc7743;  */

undefined8 FUN_101fc76d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101fc787c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 101fc7744; end: 101fc7787;  */

void FUN_101fc7744(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fc7788; end: 101fc77db;  */

void FUN_101fc7788(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc77dc; end: 101fc77e3;  */

undefined8 FUN_101fc77dc(void)

{
  return 0x1b;
}



/* Entry: 101fc77e4; end: 101fc7867;  */

void FUN_101fc77e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fc7a28,param_2,FUN_101fc7a2c,param_2,0x101fc7a54,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fc7868; end: 101fc787b;  */

void FUN_101fc7868(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104b40b8;
  return;
}



/* Entry: 101fc787c; end: 101fc79bb;  */

void FUN_101fc787c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101fca9e4(0);
  func_0x000107c613fc();
  uVar3 = param_1;
  FUN_101fc9fb0(param_1,param_2,puVar2,uVar5);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar3);
  FUN_101fc9fc0();
  func_0x000107c61574(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc79bc);
  (*pcVar1)();
}



/* Entry: 101fc79bc; end: 101fc79d7;  */

undefined ** FUN_101fc79bc(void)

{
  return &PTR_DAT_112fef700;
}



/* Entry: 101fc79d8; end: 101fc79f7;  */

void FUN_101fc79d8(void)

{
  func_0x000107c61168(&PTR_PTR_112e4c4a8);
  return;
}



/* Entry: 101fc79f8; end: 101fc7a2b;  */

undefined1  [16] FUN_101fc79f8(void)

{
  return ZEXT816(0x1104b40f8);
}



/* Entry: 101fc7a2c; end: 101fc7a7f;  */

void FUN_101fc7a2c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fc7a80; end: 101fc7abb;  */

void FUN_101fc7a80(undefined8 *param_1,undefined8 param_2)

{
  FUN_101fc7abc();
  func_0x0001000a7f38("SCAddToStoryCameraScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101fc7abc; end: 101fc7ca7;  */

void FUN_101fc7abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d9070;
  ppuVar4 = &PTR_DAT_112fef700;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b4168;
  func_0x000107c613fc(&UNK_1104b4168,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4c528;
  func_0x0001000285a8(0x112e4c528,&UNK_10da45cd8);
  func_0x0001000a6ee8(&UNK_1104b4400,"AddToStoryCameraScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_101fc7ca8,puVar2,uVar3,&UNK_1104b4400,&PTR_DAT_112e4c600);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b4118,
                      "AddToStoryCameraUIEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_101fc7d5c,param_3,uVar3,&UNK_1104b4118,&PTR_DAT_112e4c440);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104b4190;
  func_0x000107c613fc(&UNK_1104b4190,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b3f68,"SCAddToStoryCameraScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_101fc7e0c,puVar2,uVar3,&UNK_1104b3f68,&PTR_DAT_112e4c3b0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4c530;
  func_0x0001000285a8(0x112e4c530,&UNK_10da45ce0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101fc7ca8; end: 101fc7ce7;  */

void FUN_101fc7ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000101fc87cc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AddToStoryCameraScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc7ce8; end: 101fc7d5b;  */

void FUN_101fc7ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101fc7e48;
  func_0x0001000823a8(0x101fc7e48,param_3);
  func_0x000100082720("AddToStoryCameraUIEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc7d5c; end: 101fc7d63;  */

void FUN_101fc7d5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101fc7e48;
  func_0x0001000823a8();
  func_0x000100082720("AddToStoryCameraUIEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc7d64; end: 101fc7e0b;  */

void FUN_101fc7d64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b41b8;
  func_0x000107c613fc(&UNK_1104b41b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fc7e40;
  func_0x0001000823a8(FUN_101fc7e40,puVar1);
  func_0x000100082720("SCAddToStoryCameraScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fc7e0c; end: 101fc7e13;  */

void FUN_101fc7e0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b41b8;
  func_0x000107c613fc(&UNK_1104b41b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fc7e40;
  func_0x0001000823a8(FUN_101fc7e40,puVar3);
  func_0x000100082720("SCAddToStoryCameraScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fc7e14; end: 101fc7e3f;  */

void FUN_101fc7e14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fc7e40; end: 101fc7e4f;  */

void FUN_101fc7e40(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b3ff0;
  func_0x000107c613fc(&UNK_1104b3ff0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fc7160;
  func_0x00010058fa64(FUN_101fc7160,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fc7e50; end: 101fc7f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc7e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101fc841c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e4c538) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4c540) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc7f2c);
  (*pcVar1)();
}



/* Entry: 101fc7f2c; end: 101fc7f8b; -[_TtC32AddToStoryCameraScopeGraphBridge47AddToStoryCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fc7f2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToStoryCameraScopeGraphBridge.AddToStoryCameraScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc7f58);
  (*pcVar1)();
}



/* Entry: 101fc7f8c; end: 101fc7fc3; -[_TtC32AddToStoryCameraScopeGraphBridge47AddToStoryCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc7fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc7fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc7f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c538));
  return;
}



/* Entry: 101fc7fc4; end: 101fc7feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc7fc4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4c540),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4c538));
  return;
}



/* Entry: 101fc7fec; end: 101fc800b;  */

void FUN_101fc7fec(void)

{
  func_0x000107c61168(&PTR_PTR_112812b30);
  return;
}



/* Entry: 101fc800c; end: 101fc80a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc800c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e4c5f0);
  *(undefined8 *)(unaff_x20 + _DAT_112e4c570) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4c578) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101fc80a8; end: 101fc8107; -[_TtC32AddToStoryCameraScopeGraphBridge60SCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint init] */

void FUN_101fc80a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToStoryCameraScopeGraphBridge.SCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc80d4);
  (*pcVar1)();
}



/* Entry: 101fc8108; end: 101fc819b; -[_TtC32AddToStoryCameraScopeGraphBridge60SCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8108(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e4c570));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c578));
  return;
}



/* Entry: 101fc819c; end: 101fc81a3;  */

undefined8 FUN_101fc819c(void)

{
  return 0;
}



/* Entry: 101fc81a4; end: 101fc81c3;  */

void FUN_101fc81a4(void)

{
  func_0x000107c61168(&PTR_PTR_112812bf8);
  return;
}



/* Entry: 101fc81c4; end: 101fc824b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc81c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4c5a8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4c5b0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fc824c);
  (*pcVar2)();
}



/* Entry: 101fc824c; end: 101fc8333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fc824c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4c5a8);
  *(undefined **)(unaff_x20 + _DAT_112e4c5a8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4c5b0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4c5b0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b42f8;
  func_0x000107c613fc(&UNK_1104b42f8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fc8338,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fc8334; end: 101fc833f;  */

void FUN_101fc8334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fc8340; end: 101fc839f; -[_TtC32AddToStoryCameraScopeGraphBridge47SCAddToStoryCameraScopedServicesSaberEntryPoint init] */

void FUN_101fc8340(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToStoryCameraScopeGraphBridge.SCAddToStoryCameraScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc836c);
  (*pcVar1)();
}



/* Entry: 101fc83a0; end: 101fc83d7; -[_TtC32AddToStoryCameraScopeGraphBridge47SCAddToStoryCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc83a0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4c5b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c5a8));
  return;
}



/* Entry: 101fc83d8; end: 101fc83db;  */

void FUN_101fc83d8(void)

{
  return;
}



/* Entry: 101fc83dc; end: 101fc83fb;  */

void FUN_101fc83dc(void)

{
  FUN_101fc824c();
  return;
}



/* Entry: 101fc83fc; end: 101fc841b;  */

void FUN_101fc83fc(void)

{
  func_0x000107c61168(&PTR_PTR_112812cc0);
  return;
}



/* Entry: 101fc841c; end: 101fc84eb;  */

undefined8 FUN_101fc841c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e4c5e0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101fc84ec();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fc84ec; end: 101fc850b;  */

void FUN_101fc84ec(void)

{
  func_0x000107c61168(&PTR_PTR_112812d88);
  return;
}



/* Entry: 101fc850c; end: 101fc852f;  */

void FUN_101fc850c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b4340;
  func_0x0001000285a8(0x112e4c5e8,&UNK_10da45df8);
  func_0x000107c613fc(&UNK_1104b4340,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fc85b4,puVar1);
  return;
}



/* Entry: 101fc8530; end: 101fc85b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8530(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101fc84ec();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e4c5f0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e4c5f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101fc85b4; end: 101fc85bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc85b4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_101fc84ec();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e4c5f0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e4c5f8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101fc85bc; end: 101fc861f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc85bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4c5f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4c5f8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc8620; end: 101fc867f; -[_TtC32AddToStoryCameraScopeGraphBridge40AddToStoryCameraScopeGraphBridgeServices init] */

void FUN_101fc8620(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToStoryCameraScopeGraphBridge.AddToStoryCameraScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc864c);
  (*pcVar1)();
}



/* Entry: 101fc8680; end: 101fc87c3; -[_TtC32AddToStoryCameraScopeGraphBridge40AddToStoryCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc869c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc86a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4c5f0));
  return;
}



/* Entry: 101fc87c4; end: 101fc87ef;  */

undefined8 FUN_101fc87c4(void)

{
  return 0x1b;
}



/* Entry: 101fc87f0; end: 101fc886f;  */

void FUN_101fc87f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 101fc8870; end: 101fc8967;  */

void FUN_101fc8870(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4c5e0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4c5e0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b4440;
  func_0x000107c613fc(&UNK_1104b4440,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fc8a68;
  func_0x00010058fa64(0x101fc8a68,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fc8968; end: 101fc8993;  */

void FUN_101fc8968(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fc8994; end: 101fc899b;  */

void FUN_101fc8994(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4c5e0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4c5e0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b4440;
  func_0x000107c613fc(&UNK_1104b4440,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fc8a68;
  func_0x00010058fa64(0x101fc8a68,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fc899c; end: 101fc89f7;  */

void FUN_101fc899c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4c5e0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4c5e0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fc89f8; end: 101fc8a6f;  */

undefined ** FUN_101fc89f8(void)

{
  return &PTR_DAT_112fef700;
}



/* Entry: 101fc8a70; end: 101fc8ab7; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8a70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c650;
  func_0x000107c61428(param_1 + _DAT_112e4c650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc8ab8; end: 101fc8b0f; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c650;
  func_0x000107c61428(param_1 + _DAT_112e4c650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc8b10; end: 101fc8b57; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8b10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c658;
  func_0x000107c61428(param_1 + _DAT_112e4c658,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


