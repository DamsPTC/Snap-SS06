/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102aeab08; end: 102aeab3b; -[SCSCLensInfoCardsOnCameraScopedLensCarouselManagementServicesSaberServiceProvider provide] */

void FUN_102aeab08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102aea8f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102aeab3c; end: 102aeab6f; -[SCSCLensInfoCardsOnCameraScopedLensCarouselManagementServicesSaberServiceProvider __safeProvide] */

void FUN_102aeab3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102aeaa20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102aeab70; end: 102aeabb3; -[SCSCLensInfoCardsOnCameraScopedLensCarouselManagementServicesSaberServiceProvider end] */

void FUN_102aeab70(undefined8 param_1)

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



/* Entry: 102aeabb4; end: 102aead4b;  */

void FUN_102aeabb4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f15cc0)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f0ea340,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensInfoCardsOnCameraScopeGraphBridge/SCSCLensInfoCardsOnCameraScopedLensCarouselManagementServicesSaberServiceProvider.swift"
                            ,0x7d,2,0x53,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102aead4c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55d98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102aead4c; end: 102aeadf7; -[SCSCLensInfoCardsOnCameraScopedLensCarouselManagementServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102aead4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102aeabb4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102aeadf8; end: 102aeae6b; -[SCSCLensInfoCardsOnCameraScopedLensCarouselManagementServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeadf8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eecba0,0);
  func_0x000107c61614(param_1 + _DAT_112eecba8,0);
  *(undefined8 *)(param_1 + _DAT_112eecbb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aeae6c; end: 102aeae9f;  */

void FUN_102aeae6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102aeaea0; end: 102aeaee7; -[SCSCLensInfoCardsOnCameraScopedLensCarouselManagementServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeaea0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eecba0);
  func_0x000107c61610(param_1 + _DAT_112eecba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eecbb0));
  return;
}



/* Entry: 102aeaee8; end: 102aeaf07;  */

void FUN_102aeaee8(void)

{
  func_0x000107c61168(&PTR_PTR_112eecbf8);
  return;
}



/* Entry: 102aeaf08; end: 102aeaf4f; -[SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeaf08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eecc60;
  func_0x000107c61428(param_1 + _DAT_112eecc60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102aeaf50; end: 102aeafa7; -[SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeaf50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eecc60;
  func_0x000107c61428(param_1 + _DAT_112eecc60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102aeafa8; end: 102aeb07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeafa8(undefined8 param_1,long param_2)

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
    FUN_102ae9d2c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eecac0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102aeb080);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eecac8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eecc68);
    *(long **)(unaff_x20 + _DAT_112eecc68) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102aeb080; end: 102aeb0a7; -[SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint begin] */

void FUN_102aeb080(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102aeafa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102aeb0a8; end: 102aeb21f;  */

/* WARNING: Possible PIC construction at 0x000102aeb110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aeb1a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aeb114) */
/* WARNING: Removing unreachable block (ram,0x000102aeb1ac) */
/* WARNING: Removing unreachable block (ram,0x000102aeb1c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeb0a8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eecc68);
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



/* Entry: 102aeb220; end: 102aeb227;  */

void FUN_102aeb220(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102aeb228; end: 102aeb25b; -[SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint end] */

void FUN_102aeb228(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102aeb0a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102aeb25c; end: 102aeb37b;  */

void FUN_102aeb25c(long param_1,long param_2,long param_3)

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
                        "LensInfoCardsOnCameraScopeGraphBridge/SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x49,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeb37c);
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



/* Entry: 102aeb37c; end: 102aeb427; -[SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102aeb37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102aeb25c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102aeb428; end: 102aeb487; -[SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeb428(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eecc60,0);
  *(undefined8 *)(param_1 + _DAT_112eecc68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aeb488; end: 102aeb4bb;  */

void FUN_102aeb488(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102aeb4bc; end: 102aeb4f3; -[SCSCLensInfoCardsOnCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeb4bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eecc60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eecc68));
  return;
}



/* Entry: 102aeb4f4; end: 102aeb513;  */

void FUN_102aeb4f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128871f0);
  return;
}



/* Entry: 102aeb514; end: 102aeb7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeb514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eecc98);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c5fadc(param_1,param_2);
  uVar1 = uStack_48;
  func_0x000107c4b290(uStack_48);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(param_1);
  puVar2 = &UNK_110597f70;
  func_0x000107c613fc(&UNK_110597f70,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uStack_58 = 0x102aeb920;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1010186a8;
  puStack_60 = &UNK_110597f88;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_50;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar2);
  pcVar4 = "presentPaywall(forLensId:onDismiss:)";
  func_0x0001000c10c0("presentPaywall(forLensId:onDismiss:)");
  func_0x000107c61180();
  func_0x000107c5dc64(uVar1);
  func_0x000107c615e8(pcVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102aeb7b4; end: 102aeb853; -[_TtC37SCCameraSelfieSettingsAutoPaywallImpl47CameraSelfieSettingsAutoPaywallPresenterAdapter presentPaywallForLensId:onDismiss:] */

void FUN_102aeb7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110597f48;
  func_0x000107c613fc(&UNK_110597f48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_102aeb514(param_3,param_2,FUN_102aeb90c,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102aeb854; end: 102aeb8b3; -[_TtC37SCCameraSelfieSettingsAutoPaywallImpl47CameraSelfieSettingsAutoPaywallPresenterAdapter init] */

void FUN_102aeb854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraSelfieSettingsAutoPaywallImpl.CameraSelfieSettingsAutoPaywallPresenterAdapter"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeb880);
  (*pcVar1)();
}



/* Entry: 102aeb8b4; end: 102aeb8eb; -[_TtC37SCCameraSelfieSettingsAutoPaywallImpl47CameraSelfieSettingsAutoPaywallPresenterAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102aeb8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aeb8d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeb8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eecc98));
  return;
}



/* Entry: 102aeb8ec; end: 102aeb90b;  */

void FUN_102aeb8ec(void)

{
  func_0x000107c61168(&PTR_PTR_1128872b0);
  return;
}



/* Entry: 102aeb90c; end: 102aeb94f;  */

void FUN_102aeb90c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102aeb91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102aeb950; end: 102aebb07;  */

void FUN_102aeb950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102aebb08; end: 102aebb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aebb08(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113070f60);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113036458);
  lVar2 = 0;
  FUN_102aeb8ec();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112eecc98) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112eecca0) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102aebb10; end: 102aebb2b;  */

/* WARNING: Possible PIC construction at 0x000102aebb1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aebb20) */

void FUN_102aebb10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102aebb2c; end: 102aebb77;  */

void FUN_102aebb2c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102aebb78; end: 102aebbf3;  */

void FUN_102aebb78(undefined8 param_1)

{
  if (lRam0000000112eecd00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e713c58);
  return;
}



/* Entry: 102aebbf4; end: 102aebcab;  */

void FUN_102aebbf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_110598010;
  func_0x000107c613fc(&UNK_110598010,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x0001000285a8(0x112eeccd0,&UNK_10db1ad80);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  pcVar3 = FUN_102aebcac;
  func_0x0001000bdd8c(FUN_102aebcac,puVar2);
  uVar4 = 0;
  func_0x0001005c73ac(0);
  func_0x000107c610f8();
  func_0x000102aebd44(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 102aebcac; end: 102aebcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aebcac(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113070f60);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113036458);
  lVar2 = 0;
  FUN_102aeb8ec();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112eecc98) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112eecca0) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102aebcb0; end: 102aebcbf; -[_TtC41SCCameraSelfieSettingsAutoPaywallServices41SCCameraSelfieSettingsAutoPaywallServices paywallPresenterObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aebcb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eecdb8));
  return;
}



/* Entry: 102aebcc0; end: 102aebdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102aebcc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eecdb0) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112eecdb8) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 102aebdc8; end: 102aebe27; -[_TtC41SCCameraSelfieSettingsAutoPaywallServices41SCCameraSelfieSettingsAutoPaywallServices init] */

void FUN_102aebdc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraSelfieSettingsAutoPaywallServices.SCCameraSelfieSettingsAutoPaywallServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aebdf4);
  (*pcVar1)();
}



/* Entry: 102aebe28; end: 102aebe5f; -[_TtC41SCCameraSelfieSettingsAutoPaywallServices41SCCameraSelfieSettingsAutoPaywallServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aebe28(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eecdb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eecdb8));
  return;
}



/* Entry: 102aebe60; end: 102aebe77;  */

void FUN_102aebe60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102aebe78,0,0);
  return;
}



/* Entry: 102aebe78; end: 102aebea7;  */

void FUN_102aebe78(void)

{
  long unaff_x22;
  
  FUN_102aebf74(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102aebea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102aebea8; end: 102aebf73; -[_TtC55SCMediaRecipientDeviceCapabilitiesWarmupServiceProvider41MediaRecipientCapabilitiesWarmupPerformer performWarmupIfNecessaryForReplyConfigurationAsync:] */

/* WARNING: Possible PIC construction at 0x000102aebf58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aebf5c) */

void FUN_102aebea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1105986d0;
  func_0x000107c613fc(&UNK_1105986d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar2 = 0x27;
  func_0x0001009548b0(0x27,0,0x40,4,0,0,&UNK_10db1ae90,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102aebf74; end: 102aeca9b;  */

void FUN_102aebf74(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined **ppuVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined8 unaff_x20;
  undefined *puVar38;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  alStack_80[0] = 0;
  puVar2 = &UNK_110598130;
  func_0x000107c613fc(&UNK_110598130,0x18,7);
  *(long **)(puVar2 + 0x10) = alStack_80;
  puVar3 = &UNK_110598158;
  func_0x000107c613fc(&UNK_110598158,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_102aeccbc;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar38 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x102aecce8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019dec28;
  puStack_98 = &UNK_110598170;
  ppuVar4 = &puStack_b0;
  puStack_88 = puVar3;
  func_0x000107c60bc4();
  puVar5 = puStack_88;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_1105981a8;
  func_0x000107c613fc(&UNK_1105981a8,0x18,7);
  *(long **)(puVar5 + 0x10) = alStack_80;
  puVar6 = &UNK_1105981d0;
  func_0x000107c613fc(&UNK_1105981d0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x102aecf24;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_90 = (code *)0x102aecf00;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04bc;
  puStack_98 = &UNK_1105981e8;
  ppuVar7 = &puStack_b0;
  puStack_88 = puVar6;
  func_0x000107c60bc4();
  puVar8 = puStack_88;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_110598220;
  func_0x000107c613fc(&UNK_110598220,0x18,7);
  *(long **)(puVar8 + 0x10) = alStack_80;
  puVar9 = &UNK_110598248;
  func_0x000107c613fc(&UNK_110598248,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x102aecf3c;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_90 = (code *)0x102aecf18;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04c0;
  puStack_98 = &UNK_110598260;
  ppuVar10 = &puStack_b0;
  puStack_88 = puVar9;
  func_0x000107c60bc4();
  puVar11 = puStack_88;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_110598298;
  func_0x000107c613fc(&UNK_110598298,0x18,7);
  *(long **)(puVar11 + 0x10) = alStack_80;
  puVar12 = &UNK_1105982c0;
  func_0x000107c613fc(&UNK_1105982c0,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = 0x102aecf28;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  pcStack_90 = (code *)0x102aecf04;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04c4;
  puStack_98 = &UNK_1105982d8;
  ppuVar13 = &puStack_b0;
  puStack_88 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  puVar14 = puStack_88;
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_110598310;
  func_0x000107c613fc(&UNK_110598310,0x18,7);
  *(long **)(puVar14 + 0x10) = alStack_80;
  puVar15 = &UNK_110598338;
  func_0x000107c613fc(&UNK_110598338,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = 0x102aecf2c;
  *(undefined **)(puVar15 + 0x18) = puVar14;
  pcStack_90 = (code *)0x102aecf08;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04c8;
  puStack_98 = &UNK_110598350;
  ppuVar16 = &puStack_b0;
  puStack_88 = puVar15;
  func_0x000107c60bc4();
  puVar17 = puStack_88;
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar17);
  puVar17 = &UNK_110598388;
  func_0x000107c613fc(&UNK_110598388,0x18,7);
  *(long **)(puVar17 + 0x10) = alStack_80;
  puVar18 = &UNK_1105983b0;
  func_0x000107c613fc(&UNK_1105983b0,0x20,7);
  *(code **)(puVar18 + 0x10) = FUN_102aecd24;
  *(undefined **)(puVar18 + 0x18) = puVar17;
  pcStack_90 = (code *)0x102aecd50;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019dec60;
  puStack_98 = &UNK_1105983c8;
  ppuVar19 = &puStack_b0;
  puStack_88 = puVar18;
  func_0x000107c60bc4();
  puVar20 = puStack_88;
  func_0x000107c6157c(puVar18);
  func_0x000107c61574(puVar20);
  puVar20 = &UNK_110598400;
  func_0x000107c613fc(&UNK_110598400,0x18,7);
  *(long **)(puVar20 + 0x10) = alStack_80;
  puVar21 = &UNK_110598428;
  func_0x000107c613fc(&UNK_110598428,0x20,7);
  *(undefined8 *)(puVar21 + 0x10) = 0x102aecf30;
  *(undefined **)(puVar21 + 0x18) = puVar20;
  pcStack_90 = (code *)0x102aecf0c;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04cc;
  puStack_98 = &UNK_110598440;
  ppuVar22 = &puStack_b0;
  puStack_88 = puVar21;
  func_0x000107c60bc4();
  puVar23 = puStack_88;
  func_0x000107c6157c(puVar21);
  func_0x000107c61574(puVar23);
  puVar23 = &UNK_110598478;
  func_0x000107c613fc(&UNK_110598478,0x18,7);
  *(long **)(puVar23 + 0x10) = alStack_80;
  puVar24 = &UNK_1105984a0;
  func_0x000107c613fc(&UNK_1105984a0,0x20,7);
  *(undefined8 *)(puVar24 + 0x10) = 0x102aecf34;
  *(undefined **)(puVar24 + 0x18) = puVar23;
  pcStack_90 = (code *)0x102aecf10;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04d0;
  puStack_98 = &UNK_1105984b8;
  ppuVar25 = &puStack_b0;
  puStack_88 = puVar24;
  func_0x000107c60bc4();
  puVar26 = puStack_88;
  func_0x000107c6157c(puVar24);
  func_0x000107c61574(puVar26);
  puVar26 = &UNK_1105984f0;
  func_0x000107c613fc(&UNK_1105984f0,0x18,7);
  *(long **)(puVar26 + 0x10) = alStack_80;
  puVar27 = &UNK_110598518;
  func_0x000107c613fc(&UNK_110598518,0x20,7);
  *(undefined8 *)(puVar27 + 0x10) = 0x102aecf38;
  *(undefined **)(puVar27 + 0x18) = puVar26;
  pcStack_90 = (code *)0x102aecf14;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04d4;
  puStack_98 = &UNK_110598530;
  ppuVar28 = &puStack_b0;
  puStack_88 = puVar27;
  func_0x000107c60bc4();
  puVar29 = puStack_88;
  func_0x000107c6157c(puVar27);
  func_0x000107c61574(puVar29);
  puVar29 = &UNK_110598568;
  func_0x000107c613fc(&UNK_110598568,0x18,7);
  *(long **)(puVar29 + 0x10) = alStack_80;
  puVar30 = &UNK_110598590;
  func_0x000107c613fc(&UNK_110598590,0x20,7);
  *(undefined8 *)(puVar30 + 0x10) = 0x102aecd70;
  *(undefined **)(puVar30 + 0x18) = puVar29;
  pcStack_90 = (code *)0x102aecf20;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04d8;
  puStack_98 = &UNK_1105985a8;
  ppuVar31 = &puStack_b0;
  puStack_88 = puVar30;
  func_0x000107c60bc4();
  puVar32 = puStack_88;
  func_0x000107c6157c(puVar30);
  func_0x000107c61574(puVar32);
  puVar32 = &UNK_1105985e0;
  func_0x000107c613fc(&UNK_1105985e0,0x18,7);
  *(long **)(puVar32 + 0x10) = alStack_80;
  puVar33 = &UNK_110598608;
  func_0x000107c613fc(&UNK_110598608,0x20,7);
  *(undefined8 *)(puVar33 + 0x10) = 0x102aecf40;
  *(undefined **)(puVar33 + 0x18) = puVar32;
  pcStack_90 = (code *)0x102aecf1c;
  puStack_b0 = puVar38;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019e04dc;
  puStack_98 = &UNK_110598620;
  ppuVar34 = &puStack_b0;
  puStack_88 = puVar33;
  func_0x000107c60bc4();
  puVar38 = puStack_88;
  func_0x000107c6157c(puVar33);
  func_0x000107c61574(puVar38);
  func_0x000107c4c590(param_1);
  func_0x000107c60bd0(ppuVar34);
  func_0x000107c60bd0(ppuVar31);
  func_0x000107c60bd0(ppuVar28);
  func_0x000107c60bd0(ppuVar25);
  func_0x000107c60bd0(ppuVar22);
  func_0x000107c60bd0(ppuVar19);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  if (alStack_80[0] != 0) {
    lVar35 = alStack_80[0];
    func_0x000107c501d8();
    func_0x000107c61180();
    if (lVar35 != 0) {
      if (alStack_80[0] == 0) {
        pcVar1 = (code *)0x0;
        puVar38 = (undefined *)0x0;
      }
      else {
        lVar36 = alStack_80[0];
        func_0x000107c4e004();
        func_0x000107c61180();
        if (lVar36 == 0) {
          pcVar1 = (code *)0x0;
          puVar38 = (undefined *)0x0;
        }
        else {
          puVar38 = &UNK_110598658;
          func_0x000107c613fc(&UNK_110598658,0x20,7);
          *(undefined8 *)(puVar38 + 0x10) = unaff_x20;
          *(long *)(puVar38 + 0x18) = lVar36;
          puVar37 = &UNK_110598680;
          func_0x000107c613fc(&UNK_110598680,0x20,7);
          pcVar1 = FUN_102aecd9c;
          *(code **)(puVar37 + 0x10) = FUN_102aecd9c;
          *(undefined **)(puVar37 + 0x18) = puVar38;
          pcStack_90 = FUN_102aecda4;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_100de6bdc;
          puStack_98 = &UNK_110598698;
          ppuVar4 = &puStack_b0;
          puStack_88 = puVar37;
          func_0x000107c60bc4(ppuVar4);
          puVar37 = puStack_88;
          func_0x000107c61174(unaff_x20);
          func_0x000107c61174(lVar36);
          func_0x000107c61574(puVar37);
          func_0x000107c4c79c(lVar35);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61170(lVar35);
        }
      }
      func_0x000107c61170();
      goto LAB_102aec7a0;
    }
  }
  pcVar1 = (code *)0x0;
  puVar38 = (undefined *)0x0;
LAB_102aec7a0:
  lVar35 = alStack_80[0];
  func_0x000107c61574(puVar2);
  func_0x000107c61170(lVar35);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x85,0x18,0xd,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca74);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x85,0x1b,0x28,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca78);
    (*pcVar1)();
  }
  puVar2 = puVar9;
  func_0x000107c61544(puVar9,"",0x85,0x1e,0x2d,1);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca7c);
    (*pcVar1)();
  }
  puVar2 = puVar12;
  func_0x000107c61544(puVar12,"",0x85,0x21,0x25,1);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(puVar12);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca80);
    (*pcVar1)();
  }
  puVar2 = puVar15;
  func_0x000107c61544(puVar15,"",0x85,0x24,0x27,1);
  func_0x000107c61574(puVar17);
  func_0x000107c61574(puVar15);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca84);
    (*pcVar1)();
  }
  puVar2 = puVar18;
  func_0x000107c61544(puVar18,"",0x85,0x27,0x25,1);
  func_0x000107c61574(puVar20);
  func_0x000107c61574(puVar18);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca88);
    (*pcVar1)();
  }
  puVar2 = puVar21;
  func_0x000107c61544(puVar21,"",0x85,0x2a,0x26,1);
  func_0x000107c61574(puVar23);
  func_0x000107c61574(puVar21);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca8c);
    (*pcVar1)();
  }
  puVar2 = puVar24;
  func_0x000107c61544(puVar24,"",0x85,0x2d,0x27,1);
  func_0x000107c61574(puVar26);
  func_0x000107c61574(puVar24);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar27;
    func_0x000107c61544(puVar27,"",0x85,0x30,0x2e,1);
    func_0x000107c61574(puVar29);
    func_0x000107c61574(puVar27);
    if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca94);
      (*pcVar1)();
    }
    puVar2 = puVar30;
    func_0x000107c61544(puVar30,"",0x85,0x33,0x2d,1);
    func_0x000107c61574(puVar32);
    func_0x000107c61574(puVar30);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar33;
      func_0x000107c61544(puVar33,"",0x85,0x36,0x35,1);
      func_0x000107c61574(puVar33);
      func_0x0001010398f0(pcVar1,puVar38);
      if (((ulong)puVar2 & 1) == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca9c);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca98);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeca90);
  (*pcVar1)();
}



/* Entry: 102aeca9c; end: 102aecc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aeca9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  func_0x000107c50210();
  func_0x000107c61180();
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
    puVar2 = PTR_PTR_1126ae780;
    func_0x000107c610f8(PTR_PTR_1126ae780);
    func_0x000107c61434(param_2);
    func_0x000107c453e4(puVar2);
    puVar3 = PTR_PTR_1126dbb50;
    func_0x000107c610f8(PTR_PTR_1126dbb50);
    func_0x000107c453e4();
    lVar4 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    *(long *)(lVar4 + 0x20) = lVar1;
    *(undefined8 *)(lVar4 + 0x28) = param_2;
    uVar5 = 0;
    FUN_102aecdc4(0);
    func_0x000107c600f0(lVar4,uVar5);
    func_0x000107c5a348(puVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c57bf4(puVar2);
    uVar5 = *(undefined8 *)(param_3 + _DAT_112eecde8);
    ppuVar6 = &PTR____CFConstantStringClassReference_110f6d5f8;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f6d5f8);
    func_0x000107c61174(puVar2);
    func_0x000107c4c270(uVar5);
    func_0x000107c61180();
    func_0x000107c6142c(param_2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
    return;
  }
  return;
}



/* Entry: 102aecc30; end: 102aecc8b; -[_TtC55SCMediaRecipientDeviceCapabilitiesWarmupServiceProvider41MediaRecipientCapabilitiesWarmupPerformer init] */

void FUN_102aecc30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMediaRecipientDeviceCapabilitiesWarmupServiceProvider.MediaRecipientCapabilitiesWarmupPerformer"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aecc5c);
  (*pcVar1)();
}



/* Entry: 102aecc8c; end: 102aecc9b; -[_TtC55SCMediaRecipientDeviceCapabilitiesWarmupServiceProvider41MediaRecipientCapabilitiesWarmupPerformer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aecc8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eecde8));
  return;
}



/* Entry: 102aecc9c; end: 102aeccbb;  */

void FUN_102aecc9c(void)

{
  func_0x000107c61168(&PTR_PTR_112887440);
  return;
}



/* Entry: 102aeccbc; end: 102aecd07;  */

void FUN_102aeccbc(undefined8 param_1)

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



/* Entry: 102aecd08; end: 102aecd23;  */

void FUN_102aecd08(long param_1,long param_2)

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



/* Entry: 102aecd24; end: 102aecd9b;  */

void FUN_102aecd24(undefined8 param_1)

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



/* Entry: 102aecd9c; end: 102aecda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aecd9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c50210();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar4 = PTR_PTR_1126ae780;
    func_0x000107c610f8(PTR_PTR_1126ae780);
    func_0x000107c61434(param_2);
    func_0x000107c453e4(puVar4);
    puVar5 = PTR_PTR_1126dbb50;
    func_0x000107c610f8(PTR_PTR_1126dbb50);
    func_0x000107c453e4();
    lVar2 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
    *(long *)(lVar2 + 0x20) = lVar3;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    uVar6 = 0;
    FUN_102aecdc4(0);
    func_0x000107c600f0(lVar2,uVar6);
    func_0x000107c5a348(puVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c57bf4(puVar4);
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112eecde8);
    ppuVar7 = &PTR____CFConstantStringClassReference_110f6d5f8;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f6d5f8);
    func_0x000107c61174(puVar4);
    func_0x000107c4c270(uVar6);
    func_0x000107c61180();
    func_0x000107c6142c(param_2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  return;
}



/* Entry: 102aecda4; end: 102aecdc3;  */

void FUN_102aecda4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102aecdc4; end: 102aece07;  */

void FUN_102aecdc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d538a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d538a8 = puVar1;
  return;
}



/* Entry: 102aece08; end: 102aece6b;  */

void FUN_102aece08(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102aece6c;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102aebe78,0,0);
  return;
}



/* Entry: 102aece6c; end: 102aecea7;  */

void FUN_102aece6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102aecea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102aecea8; end: 102aecf43;  */

void FUN_102aecea8(long param_1,long param_2)

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



/* Entry: 102aecf44; end: 102aecf9f;  */

void FUN_102aecf44(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102aecfa0; end: 102aed08f;  */

undefined * FUN_102aecfa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1105986f8;
  func_0x000107c613fc(&UNK_1105986f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  pcStack_40 = FUN_102aed0f8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102aed100;
  puStack_48 = &UNK_110598710;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126abf18;
  func_0x000107c610f8(PTR_PTR_1126abf18);
  func_0x000107c49580();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 102aed090; end: 102aed0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed090(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = 0;
    FUN_102aecc9c();
    lVar3 = lVar2;
    func_0x000107c610f8();
    *(long *)(lVar3 + _DAT_112eecde8) = param_1;
    lStack_30 = lVar3;
    lStack_28 = lVar2;
    func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aed0f8);
  (*pcVar1)();
}



/* Entry: 102aed0f8; end: 102aed0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed0f8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar2 = 0;
    FUN_102aecc9c();
    lVar3 = lVar2;
    func_0x000107c610f8();
    *(long *)(lVar3 + _DAT_112eecde8) = lVar4;
    lStack_30 = lVar3;
    lStack_28 = lVar2;
    func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aed0f8);
  (*pcVar1)();
}



/* Entry: 102aed100; end: 102aed137;  */

void FUN_102aed100(long param_1)

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



/* Entry: 102aed138; end: 102aed15b;  */

void FUN_102aed138(long param_1,long param_2)

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



/* Entry: 102aed15c; end: 102aed1fb;  */

void FUN_102aed15c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102aed1fc; end: 102aed21f;  */

void FUN_102aed1fc(undefined8 *param_1,undefined8 param_2)

{
  FUN_102aecfa0();
  *param_1 = param_2;
  return;
}



/* Entry: 102aed220; end: 102aed42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102aed220(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_60);
  lVar1 = lStack_60;
  lVar2 = lStack_60;
  func_0x000107c614f0(lStack_60);
  (**(code **)(lStack_58 + 8))(param_1,param_2,lVar2,lStack_58);
  func_0x000107c615e8(lVar1);
  func_0x0001000d224c(&lStack_60);
  lVar1 = lStack_60;
  lVar2 = lStack_60;
  func_0x000107c406a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x0001000d224c(&lStack_60);
    lVar1 = lStack_60;
    lVar3 = lStack_60;
    func_0x000107c40688();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      func_0x0001000d224c(&lStack_60);
      uVar4 = *(undefined8 *)(lStack_60 + _DAT_113083f78);
      func_0x000107c61174(uVar4);
      func_0x000107c61170(lStack_60);
      if (param_4 == 0) {
        func_0x000107c61174(uVar4);
        func_0x000107c615f0(param_1);
        func_0x000107c615f0(lVar2);
        func_0x000107c61174(lVar3);
        param_3 = 0;
      }
      else {
        func_0x000107c61174(uVar4);
        func_0x000107c615f0(param_1);
        func_0x000107c615f0(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c5fadc(param_3,param_4);
      }
      puVar5 = PTR_PTR_1126b01f0;
      func_0x000107c610f8(PTR_PTR_1126b01f0);
      func_0x000107c4822c();
      func_0x000107c615ec(param_1,2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c615ec(lVar2,2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_3);
      return puVar5;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c615e8(param_1);
  return (undefined *)0x0;
}



/* Entry: 102aed430; end: 102aed4e7; -[_TtC37CameraSnapReplyFactoryServiceProvider33SnapReplyCameraFeatureFactoryImpl makeSnapReplyFeatureWithQuickStickerImage:quickStickerMetadata:conversationId:] */

void FUN_102aed430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_102aed220(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102aed4e8; end: 102aed547; -[_TtC37CameraSnapReplyFactoryServiceProvider33SnapReplyCameraFeatureFactoryImpl init] */

void FUN_102aed4e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraSnapReplyFactoryServiceProvider.SnapReplyCameraFeatureFactoryImpl",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aed514);
  (*pcVar1)();
}



/* Entry: 102aed548; end: 102aed59f; -[_TtC37CameraSnapReplyFactoryServiceProvider33SnapReplyCameraFeatureFactoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102aed564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aed584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aed568) */
/* WARNING: Removing unreachable block (ram,0x000102aed588) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eecee8));
  return;
}



/* Entry: 102aed5a0; end: 102aed5bf;  */

void FUN_102aed5a0(void)

{
  func_0x000107c61168(&PTR_PTR_112887518);
  return;
}



/* Entry: 102aed5c0; end: 102aed687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed5c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  func_0x0001000cad14();
  uVar1 = param_2;
  func_0x0001000cad14();
  uVar2 = uVar1;
  func_0x0001000cad14();
  uVar3 = uVar2;
  func_0x0001000cad14();
  lVar4 = 0;
  FUN_102aed5a0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112eecee8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112eecef0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112eecef8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112eecf00) = uVar3;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 102aed688; end: 102aed6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed688(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar7 = &lStack_50;
  func_0x0001000cad14(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  uVar2 = uVar1;
  func_0x0001000cad14();
  uVar3 = uVar2;
  func_0x0001000cad14();
  uVar4 = uVar3;
  func_0x0001000cad14();
  lVar5 = 0;
  FUN_102aed5a0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112eecee8) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112eecef0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112eecef8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112eecf00) = uVar4;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 102aed6a4; end: 102aed6c3; -[SCPreviewPageLaunchPayload legacyConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed6a4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eecf38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102aed6c4; end: 102aed6e3; -[SCPreviewPageLaunchPayload snapDocEditor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed6c4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eecf40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102aed6e4; end: 102aed72b; -[SCPreviewPageLaunchPayload workflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed6e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eecf48;
  func_0x000107c61428(param_1 + _DAT_112eecf48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102aed72c; end: 102aed783; -[SCPreviewPageLaunchPayload setWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eecf48;
  func_0x000107c61428(param_1 + _DAT_112eecf48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102aed784; end: 102aed7a3; -[SCPreviewPageLaunchPayload uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed784(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eecf50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102aed7a4; end: 102aed89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102aed7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112eecf48;
  func_0x000107c61614(unaff_x20 + _DAT_112eecf48,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eecf38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eecf40) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112eecf50) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102aed89c; end: 102aed977; -[SCPreviewPageLaunchPayload initWithLegacyConfig:snapDocEditor:workflowDelegate:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed89c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112eecf48;
  func_0x000107c61614(param_1 + _DAT_112eecf48,0);
  *(undefined8 *)(param_1 + _DAT_112eecf38) = param_3;
  *(undefined8 *)(param_1 + _DAT_112eecf40) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  *(undefined8 *)(param_1 + _DAT_112eecf50) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 102aed978; end: 102aed9ab;  */

void FUN_102aed978(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102aed9ac; end: 102aeda03; -[SCPreviewPageLaunchPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102aed9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aed9cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aed9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eecf38));
  return;
}



/* Entry: 102aeda04; end: 102aeda23;  */

void FUN_102aeda04(void)

{
  func_0x000107c61168(&PTR_PTR_1128875f0);
  return;
}



/* Entry: 102aeda24; end: 102aeda43;  */

undefined1  [16] FUN_102aeda24(void)

{
  return ZEXT816(0x110598b78);
}



/* Entry: 102aeda44; end: 102aedaeb;  */

long FUN_102aeda44(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = lStack_28;
  func_0x000107c3f124();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c3f2d0(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 102aedaec; end: 102aedafb;  */

long FUN_102aedaec(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = lStack_28;
  func_0x000107c3f124();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c3f2d0(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 102aedafc; end: 102aedb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aedafc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar3 = *(undefined8 *)(lStack_28 + _DAT_113070f60);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lStack_28);
  lVar1 = 0;
  FUN_102aedcd4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eecf80) = uVar3;
  lStack_38 = lVar2;
  lStack_30 = lVar1;
  func_0x000107c61154(&lStack_38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aedb7c; end: 102aedb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aedb7c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar3 = *(undefined8 *)(lStack_28 + _DAT_113070f60);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lStack_28);
  lVar1 = 0;
  FUN_102aedcd4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eecf80) = uVar3;
  lStack_38 = lVar2;
  lStack_30 = lVar1;
  func_0x000107c61154(&lStack_38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aedb84; end: 102aedbbb;  */

void FUN_102aedb84(long param_1)

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



/* Entry: 102aedbbc; end: 102aedbc7;  */

void FUN_102aedbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102aedbc8; end: 102aedc63; -[_TtC40LensOverlayFeatureProviderPluginProvider35SnapPlusLensPaywallPresenterAdapter presentPaywallForLens:at:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aedbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c4efa4(uStack_38,param_2,param_3,param_4);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102aedc64; end: 102aedcc3; -[_TtC40LensOverlayFeatureProviderPluginProvider35SnapPlusLensPaywallPresenterAdapter init] */

void FUN_102aedc64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensOverlayFeatureProviderPluginProvider.SnapPlusLensPaywallPresenterAdapter"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aedc90);
  (*pcVar1)();
}



/* Entry: 102aedcc4; end: 102aedcd3; -[_TtC40LensOverlayFeatureProviderPluginProvider35SnapPlusLensPaywallPresenterAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aedcc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eecf80));
  return;
}



/* Entry: 102aedcd4; end: 102aedcf3;  */

void FUN_102aedcd4(void)

{
  func_0x000107c61168(&PTR_PTR_1128876c8);
  return;
}



/* Entry: 102aedcf4; end: 102aedd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aedcf4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102aee0e8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eecfb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102aedd60; end: 102aeddcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aedd60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eecfb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102aeddcc; end: 102aede2b; -[_TtC38ChatCameraScopedFactoryServiceProvider26SCChatCameraScopedServices init] */

void FUN_102aeddcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopedFactoryServiceProvider.SCChatCameraScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102aeddf8);
  (*pcVar1)();
}



/* Entry: 102aede2c; end: 102aede3b; -[_TtC38ChatCameraScopedFactoryServiceProvider26SCChatCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aede2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eecfb8));
  return;
}



/* Entry: 102aede3c; end: 102aedea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102aede3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110598dc8;
  func_0x000107c613fc(&UNK_110598dc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102aee180,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102aedea8; end: 102aedf43;  */

void FUN_102aedea8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110598cd8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110598cd8;
  return;
}



/* Entry: 102aedf44; end: 102aedf7b;  */

void FUN_102aedf44(long *param_1)

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



/* Entry: 102aedf7c; end: 102aedf83;  */

undefined8 FUN_102aedf7c(void)

{
  return 0x1b;
}


