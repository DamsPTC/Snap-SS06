/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f649ec; end: 101f64a33; -[SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint sCSpectaclesWiFiSettingsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f649ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45838;
  func_0x000107c61428(param_1 + _DAT_112e45838,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f64a34; end: 101f64a97; -[SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint setSCSpectaclesWiFiSettingsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f64a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45838;
  func_0x000107c61428(param_1 + _DAT_112e45838,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f64a98; end: 101f64c1b;  */

/* WARNING: Possible PIC construction at 0x000101f64b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f64ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f64bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f64b9c) */
/* WARNING: Removing unreachable block (ram,0x000101f64bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f64a98(void)

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
    func_0x000107c5b6f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c513e4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101f5ba6c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e452c8);
        *(undefined8 *)(lVar2 + _DAT_112e451c0) = uVar6;
        *(long *)(lVar2 + _DAT_112e451c8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e451c8);
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



/* Entry: 101f64c1c; end: 101f64c43; -[SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint begin] */

void FUN_101f64c1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f64a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f64c44; end: 101f64c87; -[SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint end] */

void FUN_101f64c44(undefined8 param_1)

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



/* Entry: 101f64c88; end: 101f64e8b;  */

void FUN_101f64c88(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0fdfaa0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f020560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0fdf070)) {
          uVar2 = 0xd000000000000027;
          func_0x000107c605b8(0xd000000000000027,0x800000010f020f90,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesDeviceFeatureScopeGraphBridge/SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint.swift"
                                ,0x5f,2,0x58,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101f64e8c);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5898c();
        goto LAB_101f64d14;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595d8();
  }
LAB_101f64d14:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f64e8c; end: 101f64f37; -[SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f64e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f64c88(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f64f38; end: 101f64fb7; -[SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f64f38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45828,0);
  func_0x000107c61614(param_1 + _DAT_112e45830,0);
  *(undefined8 *)(param_1 + _DAT_112e45838) = 0;
  *(undefined8 *)(param_1 + _DAT_112e45840) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f64fb8; end: 101f64feb;  */

void FUN_101f64fb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f64fec; end: 101f65043; -[SCSCSpectaclesWiFiSettingsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f65028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6502c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f64fec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45828);
  func_0x000107c61610(param_1 + _DAT_112e45830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45838));
  return;
}



/* Entry: 101f65044; end: 101f65063;  */

void FUN_101f65044(void)

{
  func_0x000107c61168(&PTR_PTR_11280cc70);
  return;
}



/* Entry: 101f65064; end: 101f650ab; -[SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f65064(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45870;
  func_0x000107c61428(param_1 + _DAT_112e45870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f650ac; end: 101f65103; -[SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f650ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45870;
  func_0x000107c61428(param_1 + _DAT_112e45870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f65104; end: 101f651db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f65104(undefined8 param_1,long param_2)

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
    FUN_101f5bcc4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e451f8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f651dc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e45200);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e45878);
    *(long **)(unaff_x20 + _DAT_112e45878) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f651dc; end: 101f65203; -[SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint begin] */

void FUN_101f651dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f65104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f65204; end: 101f6537b;  */

/* WARNING: Possible PIC construction at 0x000101f6526c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f65304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f65270) */
/* WARNING: Removing unreachable block (ram,0x000101f65308) */
/* WARNING: Removing unreachable block (ram,0x000101f65320) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f65204(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e45878);
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



/* Entry: 101f6537c; end: 101f65383;  */

void FUN_101f6537c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f65384; end: 101f653b7; -[SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint end] */

void FUN_101f65384(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f65204();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f653b8; end: 101f654d7;  */

void FUN_101f653b8(long param_1,long param_2,long param_3)

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
                        "SpectaclesDeviceFeatureScopeGraphBridge/SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint.swift"
                        ,0x66,2,0x50,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f654d8);
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



/* Entry: 101f654d8; end: 101f65583; -[SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f654d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f653b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f65584; end: 101f655e3; -[SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f65584(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45870,0);
  *(undefined8 *)(param_1 + _DAT_112e45878) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f655e4; end: 101f65617;  */

void FUN_101f655e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f65618; end: 101f6564f; -[SCSCSpectaclesDeviceFeatureScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f65618(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45878));
  return;
}



/* Entry: 101f65650; end: 101f6566f;  */

void FUN_101f65650(void)

{
  func_0x000107c61168(&PTR_PTR_11280cd40);
  return;
}



/* Entry: 101f65670; end: 101f656db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f65670(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f65a64();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e458b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f656dc; end: 101f65747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f656dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e458b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f65748; end: 101f657a7; -[_TtC52SpectaclesDeviceSettingsScopedFactoryServiceProvider40SCSpectaclesDeviceSettingsScopedServices init] */

void FUN_101f65748(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceSettingsScopedFactoryServiceProvider.SCSpectaclesDeviceSettingsScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f65774);
  (*pcVar1)();
}



/* Entry: 101f657a8; end: 101f657b7; -[_TtC52SpectaclesDeviceSettingsScopedFactoryServiceProvider40SCSpectaclesDeviceSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f657a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e458b0));
  return;
}



/* Entry: 101f657b8; end: 101f65823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f657b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a86a8;
  func_0x000107c613fc(&UNK_1104a86a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f65afc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f65824; end: 101f658bf;  */

void FUN_101f65824(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a85b8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a85b8;
  return;
}



/* Entry: 101f658c0; end: 101f658f7;  */

void FUN_101f658c0(long *param_1)

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



/* Entry: 101f658f8; end: 101f658ff;  */

undefined8 FUN_101f658f8(void)

{
  return 0x1b;
}



/* Entry: 101f65900; end: 101f65a33;  */

void FUN_101f65900(undefined8 *param_1)

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
  puVar1 = &UNK_1104a86d0;
  func_0x000107c613fc(&UNK_1104a86d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f65ad4;
  func_0x00010058fa64(FUN_101f65ad4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f65a34; end: 101f65a63;  */

undefined ** FUN_101f65a34(void)

{
  return &PTR_DAT_113066f28;
}



/* Entry: 101f65a64; end: 101f65a83;  */

void FUN_101f65a64(void)

{
  func_0x000107c61168(&PTR_PTR_11280ce00);
  return;
}



/* Entry: 101f65a84; end: 101f65ad3;  */

undefined1  [16] FUN_101f65a84(void)

{
  return ZEXT816(0x1104a8608);
}



/* Entry: 101f65ad4; end: 101f65afb;  */

void FUN_101f65ad4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f65afc; end: 101f65aff;  */

void FUN_101f65afc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f65b00; end: 101f65c47;  */

/* WARNING: Possible PIC construction at 0x000101f65bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f65be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f65bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f65c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f65c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f65c0c) */
/* WARNING: Removing unreachable block (ram,0x000101f65bfc) */
/* WARNING: Removing unreachable block (ram,0x000101f65bec) */
/* WARNING: Removing unreachable block (ram,0x000101f65bdc) */
/* WARNING: Removing unreachable block (ram,0x000101f65c1c) */

void FUN_101f65b00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104a8758;
  func_0x000107c613fc(&UNK_1104a8758,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  uVar2 = 0x112e45920;
  func_0x0001000285a8(0x112e45920,&UNK_10da39608);
  func_0x000107c613fc();
  uVar3 = 0x101f664dc;
  func_0x0001000841fc(0x101f664dc,puVar1,uVar2);
  func_0x000100084214(&UNK_10da395d0,0x36,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f65c48; end: 101f65c83;  */

void FUN_101f65c48(void)

{
  long unaff_x20;
  
  FUN_101f65b00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101f65c84; end: 101f65c93;  */

undefined1  [16] FUN_101f65c84(void)

{
  return ZEXT816(0x1104a8738);
}



/* Entry: 101f65c94; end: 101f66467;  */

void FUN_101f65c94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 auStack_70 [2];
  
  uVar26 = *param_2;
  func_0x0001000285a8(0x112e45928,&UNK_10da39610);
  puVar1 = auStack_70;
  auStack_70[0] = uVar26;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101f684c8();
  pcVar3 = "SCSpectaclesFlightImuCalibrationScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeExposerSubjectServiceProvider",0x42,2);
  FUN_101f68514();
  pcVar4 = "SCSpectaclesFlightSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesFlightSettingsScopeExposerSubjectServiceProvider",0x3c,2);
  func_0x000101f68594();
  pcVar5 = "SCSpectaclesHomeWifiScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesHomeWifiScopeExposerSubjectServiceProvider",0x36,2);
  FUN_101f685e0();
  pcVar6 = "SCSpectaclesKioskModePageScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesKioskModePageScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_101f6862c();
  pcVar7 = "SCSpectaclesOTAUpdatePageScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_101f68678();
  func_0x000100082720("SCSpectaclesReportIssueScopeExposerSubjectServiceProvider",0x39,2);
  FUN_101f6b8a4(param_3,param_4,param_5,param_6);
  pcVar8 = "SCSpectaclesFlightImuCalibrationScopedFactoryServiceProvider";
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopedFactoryServiceProvider",0x3c,2);
  FUN_101f6e20c();
  func_0x000100082720("SCSpectaclesFlightSettingsScopedFactoryServiceProvider",0x36,2);
  FUN_101f75b48(param_7,param_8,param_4,param_5);
  func_0x000100082720("SCSpectaclesHomeWifiScopedFactoryServiceProvider",0x30,2);
  uVar9 = param_9;
  FUN_101f78494(param_9,param_10,param_11);
  func_0x000100082720("SCSpectaclesKioskModePageScopedFactoryServiceProvider",0x35,2);
  puVar10 = puVar2;
  FUN_101f68508();
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeExposerObservableServiceProvider",0x45,2
                     );
  pcVar11 = pcVar3;
  FUN_101f68554();
  func_0x000100082720("SCSpectaclesFlightSettingsScopeExposerObservableServiceProvider",0x3f,2);
  pcVar12 = pcVar4;
  FUN_101f685d4();
  func_0x000100082720("SCSpectaclesHomeWifiScopeExposerObservableServiceProvider",0x39,2);
  pcVar13 = pcVar5;
  FUN_101f68620();
  func_0x000100082720("SCSpectaclesKioskModePageScopeExposerObservableServiceProvider",0x3e,2);
  pcVar14 = pcVar6;
  FUN_101f6866c();
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeExposerObservableServiceProvider",0x3e,2);
  pcVar15 = pcVar7;
  FUN_101f68704();
  func_0x000100082720("SCSpectaclesReportIssueScopeExposerObservableServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar16 = FUN_101f658c0;
  func_0x0001000823a8(FUN_101f658c0,0);
  func_0x000100082720("SCSpectaclesDeviceSettingsScopedServicesCleanupRelayServiceProvider",0x43,2);
  uVar17 = param_3;
  func_0x000104457c64();
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeServicesServiceProvider",0x3c,2);
  pcVar18 = pcVar8;
  func_0x000104458104();
  func_0x000100082720("SCSpectaclesFlightSettingsScopeServicesServiceProvider",0x36,2);
  uVar19 = param_7;
  func_0x00010445a32c();
  func_0x000100082720("SCSpectaclesHomeWifiScopeServicesServiceProvider",0x30,2);
  uVar20 = uVar9;
  func_0x0001044587bc();
  func_0x000100082720("SCSpectaclesKioskModePageScopeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e45930,&UNK_10da39620);
  puVar24 = &UNK_1104a8780;
  func_0x000107c613fc(&UNK_1104a8780,0x98,7);
  *(undefined8 **)(puVar24 + 0x10) = puVar1;
  *(undefined8 *)(puVar24 + 0x18) = param_12;
  *(undefined8 *)(puVar24 + 0x20) = param_5;
  *(undefined8 *)(puVar24 + 0x28) = param_8;
  *(undefined8 *)(puVar24 + 0x30) = param_10;
  *(undefined8 *)(puVar24 + 0x38) = param_9;
  *(undefined8 *)(puVar24 + 0x40) = uVar17;
  *(char **)(puVar24 + 0x48) = pcVar18;
  *(undefined8 *)(puVar24 + 0x50) = uVar19;
  *(undefined8 *)(puVar24 + 0x58) = uVar20;
  *(undefined8 *)(puVar24 + 0x60) = param_13;
  *(char **)(puVar24 + 0x68) = pcVar15;
  *(char **)(puVar24 + 0x70) = pcVar14;
  *(char **)(puVar24 + 0x78) = pcVar13;
  *(char **)(puVar24 + 0x80) = pcVar12;
  *(char **)(puVar24 + 0x88) = pcVar11;
  *(undefined8 **)(puVar24 + 0x90) = puVar10;
  func_0x000107c6157c();
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(puVar10);
  uVar26 = 0x101f66518;
  func_0x0001000823a8(0x101f66518,puVar24);
  func_0x000100082720("SpectaclesDeviceSettingsComposerEntryPointWrapperServiceProvider",0x40,2);
  puVar21 = puVar2;
  FUN_101f68054(puVar2,uVar17,pcVar3,pcVar18,pcVar4,uVar19,pcVar5,pcVar6,pcVar7);
  func_0x000100082720("SpectaclesDeviceSettingsScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e45938,&UNK_10da39628);
  puVar24 = &UNK_1104a87a8;
  func_0x000107c613fc(&UNK_1104a87a8,0x30,7);
  *(undefined8 **)(puVar24 + 0x10) = puVar1;
  *(code **)(puVar24 + 0x18) = pcVar16;
  *(undefined8 *)(puVar24 + 0x20) = uVar26;
  *(undefined8 **)(puVar24 + 0x28) = puVar21;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(puVar21);
  pcVar22 = FUN_101f6655c;
  func_0x0001000823a8(FUN_101f6655c,puVar24);
  func_0x000100082720("SCSpectaclesDeviceSettingsScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112e458b8,&UNK_10da39350);
  func_0x000107c6157c(pcVar22);
  uVar23 = 0x101f66568;
  func_0x0001000823a8(0x101f66568,pcVar22);
  func_0x000100082720("SCSpectaclesDeviceSettingsScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e458a8,&UNK_10da39340);
  func_0x000107c6157c(uVar23);
  uVar25 = 0x101f66570;
  func_0x0001000823a8(0x101f66570,uVar23);
  func_0x000100082720("SCSpectaclesDeviceSettingsScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar24 = &UNK_1104a87d0;
  func_0x000107c613fc(&UNK_1104a87d0,0x20,7);
  *(undefined8 *)(puVar24 + 0x10) = uVar25;
  *(code **)(puVar24 + 0x18) = pcVar16;
  func_0x000107c6157c(pcVar16);
  uVar25 = 0x101f66578;
  func_0x0001000823a8(0x101f66578,puVar24);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(param_3);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(param_7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(puVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(uVar23);
  func_0x000100082720("SCSpectaclesDeviceSettingsScopeEntryPointProvider",0x31,2);
  *param_1 = uVar25;
  return;
}



/* Entry: 101f66468; end: 101f6655b;  */

void FUN_101f66468(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f6655c; end: 101f6657f;  */

void FUN_101f6655c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f672fc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesDeviceSettingsScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f66580; end: 101f670af;  */

void FUN_101f66580(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  FUN_101f67228();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x48) = uStack_78;
  *(undefined8 *)(param_2 + 0x50) = uStack_80;
  *(undefined8 *)(param_2 + 0x58) = uStack_88;
  *(undefined8 *)(param_2 + 0x60) = uStack_90;
  *(undefined8 *)(param_2 + 0x68) = uStack_98;
  *(undefined8 *)(param_2 + 0x70) = uStack_a0;
  *(undefined8 *)(param_2 + 0x78) = uStack_a8;
  *(undefined8 *)(param_2 + 0x80) = uStack_b0;
  *(undefined8 *)(param_2 + 0x88) = uStack_b8;
  *(undefined8 *)(param_2 + 0x90) = uStack_c0;
  func_0x0001000285a8(0x112e43488,&UNK_10da35850);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar12;
  func_0x0001000285a8(0x112e45940,&UNK_10da39630);
  func_0x000107c610f8();
  uVar11 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar13;
  func_0x0001000285a8(0x112e45948,&UNK_10da39638);
  func_0x000107c610f8();
  uVar11 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x28) = puVar14;
  func_0x0001000285a8(0x112e45950,&UNK_10da39640);
  func_0x000107c610f8();
  uVar11 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x30) = puVar15;
  func_0x0001000285a8(0x112e45958,&UNK_10da39648);
  func_0x000107c610f8();
  uVar11 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x38) = puVar16;
  func_0x0001000285a8(0x112e45960,&UNK_10da39650);
  func_0x000107c610f8();
  uVar11 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x40) = puVar17;
  FUN_101f86988();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = uVar18;
  func_0x000101f847d8(uVar18,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,puVar12,
                      puVar13,puVar14,puVar15,puVar16,puVar17);
  *(undefined8 *)(param_2 + 0x10) = uVar11;
  func_0x000107c6157c();
  FUN_101f848dc();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_e8);
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(uVar11);
  *param_1 = param_2;
  return;
}



/* Entry: 101f670b0; end: 101f6716b;  */

void FUN_101f670b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 101f6716c; end: 101f67173;  */

undefined8 FUN_101f6716c(void)

{
  return 0x1b;
}



/* Entry: 101f67174; end: 101f671f7;  */

void FUN_101f67174(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f67268,param_2,FUN_101f6726c,param_2,0x101f67294,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f671f8; end: 101f67227;  */

undefined ** FUN_101f671f8(void)

{
  return &PTR_DAT_113066f28;
}



/* Entry: 101f67228; end: 101f67247;  */

void FUN_101f67228(void)

{
  func_0x000107c61168(&PTR_PTR_112e459d0);
  return;
}



/* Entry: 101f67248; end: 101f6726b;  */

undefined1  [16] FUN_101f67248(void)

{
  return ZEXT816(0x1104a8828);
}



/* Entry: 101f6726c; end: 101f672bf;  */

void FUN_101f6726c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f672c0; end: 101f672fb;  */

void FUN_101f672c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f672fc();
  func_0x0001000a7f38("SCSpectaclesDeviceSettingsScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f672fc; end: 101f6758f;  */

void FUN_101f672fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dbb8;
  ppuVar4 = &PTR_DAT_113066f28;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104a8878;
  func_0x000107c613fc(&UNK_1104a8878,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e45ab0;
  func_0x0001000285a8(0x112e45ab0,&UNK_10da39838);
  func_0x0001000a6ee8(&UNK_1104a8648,
                      "SCSpectaclesDeviceSettingsScopedServicesScopeInitializationPluginKey",0x44,2,
                      FUN_101f67590,puVar2,uVar3,&UNK_1104a8648,&PTR_DAT_112e458c0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104a8828,
                      "SpectaclesDeviceSettingsComposerEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_101f6760c,param_3,uVar3,&UNK_1104a8828,&PTR_DAT_112e45968);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104a88a0;
  func_0x000107c613fc(&UNK_1104a88a0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104a8c78,
                      "SpectaclesDeviceSettingsScopeGraphBridgeScopeInitializationPluginKey",0x44,2,
                      FUN_101f67614,puVar2,uVar3,&UNK_1104a8c78,&PTR_DAT_112e45df8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e45ab8;
  func_0x0001000285a8(0x112e45ab8,&UNK_10da39840);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101f67590; end: 101f67597;  */

void FUN_101f67590(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104a88c8;
  func_0x000107c613fc(&UNK_1104a88c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f67688;
  func_0x0001000823a8(FUN_101f67688,puVar3);
  func_0x000100082720("SCSpectaclesDeviceSettingsScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f67598; end: 101f6760b;  */

void FUN_101f67598(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_101f67654;
  func_0x0001000823a8(FUN_101f67654,param_3);
  func_0x000100082720("SpectaclesDeviceSettingsComposerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101f6760c; end: 101f67613;  */

void FUN_101f6760c(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_101f67654;
  func_0x0001000823a8();
  func_0x000100082720("SpectaclesDeviceSettingsComposerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101f67614; end: 101f67653;  */

void FUN_101f67614(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f68770(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesDeviceSettingsScopeGraphBridgeScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f67654; end: 101f6765b;  */

void FUN_101f67654(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f67268);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f6765c; end: 101f67687;  */

void FUN_101f6765c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f67688; end: 101f6768f;  */

void FUN_101f67688(undefined8 *param_1)

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
  puVar1 = &UNK_1104a86d0;
  func_0x000107c613fc(&UNK_1104a86d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f65ad4;
  func_0x00010058fa64(FUN_101f65ad4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f67690; end: 101f678a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101f67690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_101f67f64();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_7;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e45ac0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e45ac8) = param_8;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f678a8);
  (*pcVar2)();
}



/* Entry: 101f678a8; end: 101f67907; -[_TtC40SpectaclesDeviceSettingsScopeGraphBridge55SpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f678a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceSettingsScopeGraphBridge.SpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f678d4);
  (*pcVar1)();
}



/* Entry: 101f67908; end: 101f6793f; -[_TtC40SpectaclesDeviceSettingsScopeGraphBridge55SpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f67924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f67928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f67908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45ac0));
  return;
}



/* Entry: 101f67940; end: 101f67967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f67940(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e45ac8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e45ac0));
  return;
}



/* Entry: 101f67968; end: 101f67987;  */

void FUN_101f67968(void)

{
  func_0x000107c61168(&PTR_PTR_11280cec0);
  return;
}



/* Entry: 101f67988; end: 101f679eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101f67988(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e45db8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101f679ec; end: 101f679f3;  */

void FUN_101f679ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f679f4; end: 101f67a93;  */

void FUN_101f679f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f67a94; end: 101f67ab3;  */

void FUN_101f67a94(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101f67ab4; end: 101f67b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101f67ab4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e45dc8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101f67b18; end: 101f67b1f;  */

void FUN_101f67b18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f67b20; end: 101f67bbf;  */

void FUN_101f67b20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f67bc0; end: 101f67bdf;  */

void FUN_101f67bc0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101f67be0; end: 101f67c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101f67be0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e45dd8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101f67c44; end: 101f67c4b;  */

void FUN_101f67c44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f67c4c; end: 101f67ceb;  */

void FUN_101f67c4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f67cec; end: 101f67d0b;  */

void FUN_101f67cec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101f67d0c; end: 101f67d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f67d0c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e45d68) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e45d70);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f67d94);
  (*pcVar2)();
}



/* Entry: 101f67d94; end: 101f67e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f67d94(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e45d68);
  *(undefined **)(unaff_x20 + _DAT_112e45d68) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e45d70);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e45d70))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104a8a30;
  func_0x000107c613fc(&UNK_1104a8a30,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f67e80,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f67e7c; end: 101f67e87;  */

void FUN_101f67e7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f67e88; end: 101f67ee7; -[_TtC40SpectaclesDeviceSettingsScopeGraphBridge55SCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint init] */

void FUN_101f67e88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceSettingsScopeGraphBridge.SCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f67eb4);
  (*pcVar1)();
}



/* Entry: 101f67ee8; end: 101f67f1f; -[_TtC40SpectaclesDeviceSettingsScopeGraphBridge55SCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f67ee8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e45d70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45d68));
  return;
}



/* Entry: 101f67f20; end: 101f67f23;  */

void FUN_101f67f20(void)

{
  return;
}



/* Entry: 101f67f24; end: 101f67f43;  */

void FUN_101f67f24(void)

{
  FUN_101f67d94();
  return;
}



/* Entry: 101f67f44; end: 101f67f63;  */

void FUN_101f67f44(void)

{
  func_0x000107c61168(&PTR_PTR_11280cf88);
  return;
}



/* Entry: 101f67f64; end: 101f68033;  */

undefined8 FUN_101f67f64(void)

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
  
  func_0x000107c61428(0x112e45da0,&uStack_40,0x20,0);
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
    FUN_101f68034();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f68034; end: 101f68053;  */

void FUN_101f68034(void)

{
  func_0x000107c61168(&PTR_PTR_11280d050);
  return;
}



/* Entry: 101f68054; end: 101f6829f;  */

void FUN_101f68054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e45da8,&UNK_10da39a18);
  puVar1 = &UNK_1104a8a78;
  func_0x000107c613fc(&UNK_1104a8a78,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_101f682a0,puVar1);
  return;
}



/* Entry: 101f682a0; end: 101f682d3;  */

void FUN_101f682a0(void)

{
  long unaff_x20;
  
  func_0x000101f68158(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101f682d4; end: 101f683bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f682d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e45db0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e45db8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e45dc0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e45dc8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e45dd0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e45dd8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e45de0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e45de8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e45df0) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f683c0; end: 101f6841f; -[_TtC40SpectaclesDeviceSettingsScopeGraphBridge48SpectaclesDeviceSettingsScopeGraphBridgeServices init] */

void FUN_101f683c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceSettingsScopeGraphBridge.SpectaclesDeviceSettingsScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f683ec);
  (*pcVar1)();
}



/* Entry: 101f68420; end: 101f68507; -[_TtC40SpectaclesDeviceSettingsScopeGraphBridge48SpectaclesDeviceSettingsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f6843c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6845c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6847c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6849c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f68480) */
/* WARNING: Removing unreachable block (ram,0x000101f68460) */
/* WARNING: Removing unreachable block (ram,0x000101f68440) */
/* WARNING: Removing unreachable block (ram,0x000101f684a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e45db8));
  return;
}



/* Entry: 101f68508; end: 101f68513;  */

void FUN_101f68508(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101f68a64,param_1);
  return;
}



/* Entry: 101f68514; end: 101f68553;  */

void FUN_101f68514(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f68a7c,0);
  return;
}



/* Entry: 101f68554; end: 101f6855f;  */

void FUN_101f68554(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f68560,param_1);
  return;
}



/* Entry: 101f68560; end: 101f685d3;  */

void FUN_101f68560(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101f685d4; end: 101f685df;  */

void FUN_101f685d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101f68a68,param_1);
  return;
}



/* Entry: 101f685e0; end: 101f6861f;  */

void FUN_101f685e0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f68a84,0);
  return;
}



/* Entry: 101f68620; end: 101f6862b;  */

void FUN_101f68620(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101f68a6c,param_1);
  return;
}


