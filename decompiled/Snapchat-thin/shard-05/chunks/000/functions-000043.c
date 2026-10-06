/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a7ed38; end: 103a7ed43; -[SCSCTemplateServicesSaberServiceProvider musicActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7ed38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdb868;
  func_0x000107c61428(param_1 + _DAT_112fdb868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a7ed44; end: 103a7ed87;  */

void FUN_103a7ed44(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a7ed88; end: 103a7ed93; -[SCSCTemplateServicesSaberServiceProvider setMusicActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7ed88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdb868;
  func_0x000107c61428(param_1 + _DAT_112fdb868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a7ed94; end: 103a7ede7;  */

void FUN_103a7ed94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a7ede8; end: 103a7effb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a7ede8(void)

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
    func_0x000107c4d1e8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a7a440();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdb048);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdb870);
      *(long *)(unaff_x20 + _DAT_112fdb870) = lVar4;
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
                      "MusicActiveUserSessionScopeGraphBridge/SCSCTemplateServicesSaberServiceProvider.swift"
                      ,0x55,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7ef14);
  (*pcVar1)();
}



/* Entry: 103a7effc; end: 103a7f02f; -[SCSCTemplateServicesSaberServiceProvider provide] */

void FUN_103a7effc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a7ede8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a7f030; end: 103a7f063; -[SCSCTemplateServicesSaberServiceProvider __safeProvide] */

void FUN_103a7f030(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a7ef14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a7f064; end: 103a7f0a7; -[SCSCTemplateServicesSaberServiceProvider end] */

void FUN_103a7f064(undefined8 param_1)

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



/* Entry: 103a7f0a8; end: 103a7f23f;  */

void FUN_103a7f0a8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e6db40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f1924c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MusicActiveUserSessionScopeGraphBridge/SCSCTemplateServicesSaberServiceProvider.swift"
                            ,0x55,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7f240);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5680c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a7f240; end: 103a7f2eb; -[SCSCTemplateServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a7f240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a7f0a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a7f2ec; end: 103a7f35f; -[SCSCTemplateServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f2ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdb860,0);
  func_0x000107c61614(param_1 + _DAT_112fdb868,0);
  *(undefined8 *)(param_1 + _DAT_112fdb870) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a7f360; end: 103a7f393;  */

void FUN_103a7f360(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a7f394; end: 103a7f3db; -[SCSCTemplateServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f394(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdb860);
  func_0x000107c61610(param_1 + _DAT_112fdb868);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdb870));
  return;
}



/* Entry: 103a7f3dc; end: 103a7f3fb;  */

void FUN_103a7f3dc(void)

{
  func_0x000107c61168(&PTR_PTR_112fdb8b8);
  return;
}



/* Entry: 103a7f3fc; end: 103a7f423;  */

undefined * FUN_103a7f3fc(void)

{
  return &UNK_1106c58f8;
}



/* Entry: 103a7f424; end: 103a7f433; -[_TtC23MemoriesHeaderBannerAPI28MemoriesHeaderBannerServices bannerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fdb928));
  return;
}



/* Entry: 103a7f434; end: 103a7f53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a7f434(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdb920) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fdb928) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103a7f53c; end: 103a7f59b; -[_TtC23MemoriesHeaderBannerAPI28MemoriesHeaderBannerServices init] */

void FUN_103a7f53c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesHeaderBannerAPI.MemoriesHeaderBannerServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7f568);
  (*pcVar1)();
}



/* Entry: 103a7f59c; end: 103a7f5d3; -[_TtC23MemoriesHeaderBannerAPI28MemoriesHeaderBannerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f59c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fdb920));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdb928));
  return;
}



/* Entry: 103a7f5d4; end: 103a7f63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f5d4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010028ce5c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fdb960) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103a7f640; end: 103a7f647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f640(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010028ce5c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fdb960) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103a7f648; end: 103a7f6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f648(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdb960) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a7f6cc; end: 103a7f713; -[_TtC30MemoriesQuickCutPreferencesAPI35MemoriesQuickCutPreferencesServices preferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f6cc(undefined8 param_1)

{
  undefined8 auStack_30 [2];
  
  func_0x000107c61174();
  func_0x000100083b20(auStack_30);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(auStack_30[0]);
  return;
}



/* Entry: 103a7f714; end: 103a7f773; -[_TtC30MemoriesQuickCutPreferencesAPI35MemoriesQuickCutPreferencesServices init] */

void FUN_103a7f714(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutPreferencesAPI.MemoriesQuickCutPreferencesServices",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7f740);
  (*pcVar1)();
}



/* Entry: 103a7f774; end: 103a7f783;  */

undefined1  [16] FUN_103a7f774(void)

{
  return ZEXT816(0x1106c59c8);
}



/* Entry: 103a7f784; end: 103a7f793; -[_TtC30MemoriesQuickCutPreferencesAPI35MemoriesQuickCutPreferencesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdb960));
  return;
}



/* Entry: 103a7f794; end: 103a7f7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f794(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100286408();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fdb998) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103a7f800; end: 103a7f807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f800(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100286408();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fdb998) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103a7f808; end: 103a7f88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f808(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdb998) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a7f88c; end: 103a7f8d3; -[_TtC22ExternalMusicTweaksAPI27ExternalMusicTweaksServices tweaksProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f88c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103a7f8d4; end: 103a7f933; -[_TtC22ExternalMusicTweaksAPI27ExternalMusicTweaksServices init] */

void FUN_103a7f8d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicTweaksAPI.ExternalMusicTweaksServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7f900);
  (*pcVar1)();
}



/* Entry: 103a7f934; end: 103a7f943;  */

undefined1  [16] FUN_103a7f934(void)

{
  return ZEXT816(0x1106c5a68);
}



/* Entry: 103a7f944; end: 103a7f967; -[_TtC22ExternalMusicTweaksAPI27ExternalMusicTweaksServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7f944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdb998));
  return;
}



/* Entry: 103a7f968; end: 103a7fa43;  */

void FUN_103a7f968(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a7fa44; end: 103a7fa67;  */

void FUN_103a7fa44(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103a7fa68; end: 103a7faa7;  */

void FUN_103a7fa68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45680;
  func_0x000107c61520(&UNK_10dc45680,&UNK_1106c5a88);
  puRam0000000112fdb9c8 = puVar1;
  return;
}



/* Entry: 103a7faa8; end: 103a7facf;  */

undefined1  [16] FUN_103a7faa8(void)

{
  return ZEXT816(0x1106c5a88);
}



/* Entry: 103a7fad0; end: 103a7fb0f;  */

void FUN_103a7fad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45750;
  func_0x000107c61520(&UNK_10dc45750,&UNK_1106c5b00);
  puRam0000000112fdb9d0 = puVar1;
  return;
}



/* Entry: 103a7fb10; end: 103a7fbbb;  */

void FUN_103a7fb10(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a7fbbc; end: 103a7fbf3;  */

void FUN_103a7fbbc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103a7fbf4; end: 103a7fca7;  */

void FUN_103a7fbf4(undefined4 *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  FUN_103a7fdf8();
  *param_1 = (int)uVar1;
  *(char *)(param_1 + 1) = (char)(uVar1 >> 0x20);
  return;
}



/* Entry: 103a7fca8; end: 103a7fcc3;  */

void FUN_103a7fca8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103a7fcc4; end: 103a7fdf7;  */

undefined1  [16] FUN_103a7fcc4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *unaff_x20;
  undefined1 auVar4 [16];
  int iStack_14;
  
  iStack_14 = *unaff_x20;
  if (iStack_14 < 2) {
    if (iStack_14 == 0) {
      uVar3 = 0xe400000000000000;
      uVar2 = 0x656e6f6e;
    }
    else {
      if (iStack_14 != 1) {
LAB_103a7fd68:
        func_0x000107c60614(param_1,&iStack_14,param_1,PTR___ss5Int32VN_11034ee20);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7fd84);
        (*pcVar1)();
      }
      uVar3 = 0xec00000064657a69;
      uVar2 = 0x726f687475616e75;
    }
  }
  else if (iStack_14 == 2) {
    uVar3 = 0xec00000065706f63;
    uVar2 = 0x53676e697373696d;
  }
  else {
    if (iStack_14 != 3) goto LAB_103a7fd68;
    uVar3 = 0xe800000000000000;
    uVar2 = 0x64656b6e696c6e75;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 103a7fdf8; end: 103a7fe0f;  */

ulong FUN_103a7fdf8(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if (3 < param_1) {
    uVar1 = 0x100000000;
  }
  return uVar1;
}



/* Entry: 103a7fe10; end: 103a7fe4f;  */

void FUN_103a7fe10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45810;
  func_0x000107c61520(&UNK_10dc45810,&UNK_1106c5b78);
  puRam0000000112fdb9d8 = puVar1;
  return;
}



/* Entry: 103a7fe50; end: 103a7fe53;  */

void FUN_103a7fe50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc458b0;
  func_0x000107c61520(&UNK_10dc458b0,&UNK_1106c5b98);
  puRam0000000112fdb9e0 = puVar1;
  return;
}



/* Entry: 103a7fe54; end: 103a7fe93;  */

void FUN_103a7fe54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc458b0;
  func_0x000107c61520(&UNK_10dc458b0,&UNK_1106c5b98);
  puRam0000000112fdb9e0 = puVar1;
  return;
}



/* Entry: 103a7fe94; end: 103a7fedb;  */

undefined1  [16] FUN_103a7fe94(void)

{
  return ZEXT816(0x1106c5b78);
}



/* Entry: 103a7fedc; end: 103a7ffc7;  */

uint FUN_103a7fedc(uint *param_1,int param_2)

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



/* Entry: 103a7ffc8; end: 103a802cb;  */

void FUN_103a7ffc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xed0000756e654d6c;
  uVar2 = 0x696174654470616d;
  if (bVar4 != 3) {
    uVar1 = 0xee006c61646f4d6c;
    uVar2 = 0x6c6573705570616d;
  }
  uVar3 = 0xea00000000007475;
  uVar5 = 0x6f6c6c614370616d;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar5 = uVar2;
  }
  uVar1 = 0x73676e6974746573;
  if (bVar4 != 0) {
    uVar1 = 0x6761506369706f74;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000065;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a802cc; end: 103a8038b;  */

void FUN_103a802cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xed0000756e654d6c;
  uVar2 = 0x696174654470616d;
  if (bVar4 != 3) {
    uVar1 = 0xee006c61646f4d6c;
    uVar2 = 0x6c6573705570616d;
  }
  uVar3 = 0xea00000000007475;
  uVar5 = 0x6f6c6c614370616d;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar5 = uVar2;
  }
  uVar1 = 0x73676e6974746573;
  if (bVar4 != 0) {
    uVar1 = 0x6761506369706f74;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000065;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103a8038c; end: 103a8040f;  */

void FUN_103a8038c(void)

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



/* Entry: 103a80410; end: 103a80413;  */

void FUN_103a80410(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45a30;
  func_0x000107c61520(&UNK_10dc45a30,&UNK_1106c5db0);
  puRam0000000112fdb9e8 = puVar1;
  return;
}



/* Entry: 103a80414; end: 103a80453;  */

void FUN_103a80414(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45a30;
  func_0x000107c61520(&UNK_10dc45a30,&UNK_1106c5db0);
  puRam0000000112fdb9e8 = puVar1;
  return;
}



/* Entry: 103a80454; end: 103a80457;  */

void FUN_103a80454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45a98;
  func_0x000107c61520(&UNK_10dc45a98,&UNK_1106c5e40);
  puRam0000000112fdb9f0 = puVar1;
  return;
}



/* Entry: 103a80458; end: 103a80497;  */

void FUN_103a80458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45a98;
  func_0x000107c61520(&UNK_10dc45a98,&UNK_1106c5e40);
  puRam0000000112fdb9f0 = puVar1;
  return;
}



/* Entry: 103a80498; end: 103a8049b;  */

void FUN_103a80498(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45b38;
  func_0x000107c61520(&UNK_10dc45b38,&UNK_1106c5ed0);
  puRam0000000112fdb9f8 = puVar1;
  return;
}



/* Entry: 103a8049c; end: 103a804db;  */

void FUN_103a8049c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdb9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45b38;
  func_0x000107c61520(&UNK_10dc45b38,&UNK_1106c5ed0);
  puRam0000000112fdb9f8 = puVar1;
  return;
}



/* Entry: 103a804dc; end: 103a804df;  */

void FUN_103a804dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45ba0;
  func_0x000107c61520(&UNK_10dc45ba0,&UNK_1106c5f60);
  puRam0000000112fdba00 = puVar1;
  return;
}



/* Entry: 103a804e0; end: 103a8051f;  */

void FUN_103a804e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45ba0;
  func_0x000107c61520(&UNK_10dc45ba0,&UNK_1106c5f60);
  puRam0000000112fdba00 = puVar1;
  return;
}



/* Entry: 103a80520; end: 103a80523;  */

void FUN_103a80520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45c08;
  func_0x000107c61520(&UNK_10dc45c08,&UNK_1106c5ff0);
  puRam0000000112fdba08 = puVar1;
  return;
}



/* Entry: 103a80524; end: 103a80563;  */

void FUN_103a80524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45c08;
  func_0x000107c61520(&UNK_10dc45c08,&UNK_1106c5ff0);
  puRam0000000112fdba08 = puVar1;
  return;
}



/* Entry: 103a80564; end: 103a80567;  */

void FUN_103a80564(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45c70;
  func_0x000107c61520(&UNK_10dc45c70,&UNK_1106c6080);
  puRam0000000112fdba10 = puVar1;
  return;
}



/* Entry: 103a80568; end: 103a805a7;  */

void FUN_103a80568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45c70;
  func_0x000107c61520(&UNK_10dc45c70,&UNK_1106c6080);
  puRam0000000112fdba10 = puVar1;
  return;
}



/* Entry: 103a805a8; end: 103a805ab;  */

void FUN_103a805a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45cd8;
  func_0x000107c61520(&UNK_10dc45cd8,&UNK_1106c6110);
  puRam0000000112fdba18 = puVar1;
  return;
}



/* Entry: 103a805ac; end: 103a805eb;  */

void FUN_103a805ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45cd8;
  func_0x000107c61520(&UNK_10dc45cd8,&UNK_1106c6110);
  puRam0000000112fdba18 = puVar1;
  return;
}



/* Entry: 103a805ec; end: 103a805ef;  */

void FUN_103a805ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45d40;
  func_0x000107c61520(&UNK_10dc45d40,&UNK_1106c61a0);
  puRam0000000112fdba20 = puVar1;
  return;
}



/* Entry: 103a805f0; end: 103a8062f;  */

void FUN_103a805f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45d40;
  func_0x000107c61520(&UNK_10dc45d40,&UNK_1106c61a0);
  puRam0000000112fdba20 = puVar1;
  return;
}



/* Entry: 103a80630; end: 103a80633;  */

void FUN_103a80630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45da8;
  func_0x000107c61520(&UNK_10dc45da8,&UNK_1106c6230);
  puRam0000000112fdba28 = puVar1;
  return;
}



/* Entry: 103a80634; end: 103a80673;  */

void FUN_103a80634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45da8;
  func_0x000107c61520(&UNK_10dc45da8,&UNK_1106c6230);
  puRam0000000112fdba28 = puVar1;
  return;
}



/* Entry: 103a80674; end: 103a80677;  */

void FUN_103a80674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45e10;
  func_0x000107c61520(&UNK_10dc45e10,&UNK_1106c62c0);
  puRam0000000112fdba30 = puVar1;
  return;
}



/* Entry: 103a80678; end: 103a806b7;  */

void FUN_103a80678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45e10;
  func_0x000107c61520(&UNK_10dc45e10,&UNK_1106c62c0);
  puRam0000000112fdba30 = puVar1;
  return;
}



/* Entry: 103a806b8; end: 103a80edb;  */

int FUN_103a806b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a80734;
        goto LAB_103a80718;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a80718:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_103a80734:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a80edc; end: 103a8115f;  */

void FUN_103a80edc(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (param_2 != 6) {
    uVar5 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar1 = 0xef6369706f745f74;
  uVar2 = 0x6867696c746f7073;
  if (param_2 != 4) {
    uVar1 = 0xee0073676e697474;
    uVar2 = 0x65735f636973756d;
  }
  if (param_2 < 6) {
    uVar5 = uVar1;
    uVar6 = uVar2;
  }
  uVar1 = 0x656c69666f7270;
  if (param_2 != 2) {
    uVar1 = 0x70616d;
  }
  uVar2 = 0xe700000000000000;
  if (param_2 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (param_2 != 0) {
    uVar3 = 0x68747561;
  }
  uVar4 = 0xe700000000000000;
  if (param_2 != 0) {
    uVar4 = 0xe400000000000000;
  }
  if (param_2 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  if (param_2 < 4) {
    uVar5 = uVar2;
    uVar6 = uVar1;
  }
  func_0x000107c5fb58(param_1,uVar6,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 103a81160; end: 103a8118f;  */

bool FUN_103a81160(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a81190; end: 103a811bb;  */

void FUN_103a81190(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103a812d0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103a811bc; end: 103a812cf;  */

void FUN_103a811bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar6 = *unaff_x20;
  uVar5 = 0x800000010f003040;
  uVar7 = 0xd000000000000011;
  if (bVar6 != 6) {
    uVar5 = 0xec00000064656566;
    uVar7 = 0x5f73646e65697266;
  }
  uVar1 = 0xef6369706f745f74;
  uVar2 = 0x6867696c746f7073;
  if (bVar6 != 4) {
    uVar1 = 0xee0073676e697474;
    uVar2 = 0x65735f636973756d;
  }
  if (bVar6 < 6) {
    uVar5 = uVar1;
    uVar7 = uVar2;
  }
  uVar1 = 0x656c69666f7270;
  if (bVar6 != 2) {
    uVar1 = 0x70616d;
  }
  uVar2 = 0xe700000000000000;
  if (bVar6 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar6 != 0) {
    uVar3 = 0x68747561;
  }
  uVar4 = 0xe700000000000000;
  if (bVar6 != 0) {
    uVar4 = 0xe400000000000000;
  }
  if (bVar6 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  if (bVar6 < 4) {
    uVar5 = uVar2;
    uVar7 = uVar1;
  }
  *param_1 = uVar7;
  param_1[1] = uVar5;
  return;
}



/* Entry: 103a812d0; end: 103a81333;  */

ulong FUN_103a812d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 103a81334; end: 103a81337;  */

void FUN_103a81334(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45fe0;
  func_0x000107c61520(&UNK_10dc45fe0,&UNK_1106c63a8);
  puRam0000000112fdba38 = puVar1;
  return;
}



/* Entry: 103a81338; end: 103a81377;  */

void FUN_103a81338(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdba38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc45fe0;
  func_0x000107c61520(&UNK_10dc45fe0,&UNK_1106c63a8);
  puRam0000000112fdba38 = puVar1;
  return;
}



/* Entry: 103a81378; end: 103a814db;  */

int FUN_103a81378(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a813f4;
        goto LAB_103a813d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a813d8:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_103a813f4:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a814dc; end: 103a81513;  */

void FUN_103a814dc(undefined8 param_1)

{
  if (lRam0000000112fdbb80 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a3bb0);
  return;
}



/* Entry: 103a81514; end: 103a8151b;  */

undefined8 FUN_103a81514(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  puVar14 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = (long)puVar14 - extraout_x8_00;
  lVar16 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = uVar15 - extraout_x8_01;
  uVar12 = *param_1;
  if (((uVar12 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar12 & 1) == 0)) {
    return 0;
  }
  uVar12 = param_1[2];
  if (((uVar12 != param_2[2]) || (param_1[3] != param_2[3])) &&
     (func_0x000107c605b8(), (uVar12 & 1) == 0)) {
    return 0;
  }
  lVar8 = 0;
  FUN_103a814dc();
  iVar6 = *(int *)(lVar8 + 0x1c);
  lVar16 = (long)*(int *)(lVar16 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar6,lVar13);
  func_0x000100029394((long)param_2 + (long)iVar6,lVar13 + lVar16);
  pcVar18 = *(code **)(lVar17 + 0x30);
  lVar9 = lVar13;
  (*pcVar18)(lVar13,1,lVar7);
  if ((int)lVar9 == 1) {
    lVar16 = lVar13 + lVar16;
    (*pcVar18)(lVar16,1,lVar7);
    if ((int)lVar16 != 1) {
LAB_103a816ec:
      func_0x000103a82124(lVar13,0x112d7e680,&UNK_10d95e350);
      return 0;
    }
    func_0x000103a82124(lVar13,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar13,uVar15);
    lVar9 = lVar13 + lVar16;
    (*pcVar18)(lVar9,1,lVar7);
    if ((int)lVar9 == 1) {
      (**(code **)(lVar17 + 8))(uVar15,lVar7);
      goto LAB_103a816ec;
    }
    puVar10 = puVar14;
    (**(code **)(lVar17 + 0x20))(puVar14,lVar13 + lVar16,lVar7);
    func_0x000101553b98();
    uVar12 = uVar15;
    func_0x000107c5fab8(uVar15,puVar14,lVar7,puVar10);
    pcVar18 = *(code **)(lVar17 + 8);
    (*pcVar18)(puVar14,lVar7);
    (*pcVar18)(uVar15,lVar7);
    func_0x000103a82124(lVar13,0x112d36580,&UNK_10d9016d0);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x20));
  uVar12 = *puVar1;
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
  if (((uVar12 == *puVar2) && (puVar1[1] == puVar2[1])) ||
     (func_0x000107c605b8(), (uVar12 & 1) != 0)) {
    puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
    uVar12 = *puVar1;
    puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    if (((uVar12 == *puVar2) && (puVar1[1] == puVar2[1])) ||
       (func_0x000107c605b8(), (uVar12 & 1) != 0)) {
      puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
      uVar12 = puVar1[1];
      puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
      uVar15 = puVar2[1];
      if (uVar12 == 0) {
        if (uVar15 != 0) {
          return 0;
        }
      }
      else {
        if (uVar15 == 0) {
          return 0;
        }
        uVar11 = *puVar1;
        if (((uVar11 != *puVar2) || (uVar12 != uVar15)) &&
           (func_0x000107c605b8(), (uVar11 & 1) == 0)) {
          return 0;
        }
      }
      plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c));
      plVar4 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
      cVar5 = (char)plVar4[1];
      if ((char)plVar3[1] == '\x01') {
        if (cVar5 == '\x01') {
          return 1;
        }
      }
      else if ((cVar5 != '\x01') && (*plVar3 == *plVar4)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103a8151c; end: 103a819fb;  */

undefined8 FUN_103a8151c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  puVar14 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = (long)puVar14 - extraout_x8_00;
  lVar16 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = uVar15 - extraout_x8_01;
  uVar12 = *param_1;
  if (((uVar12 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar12 & 1) == 0)) {
    return 0;
  }
  uVar12 = param_1[2];
  if (((uVar12 != param_2[2]) || (param_1[3] != param_2[3])) &&
     (func_0x000107c605b8(), (uVar12 & 1) == 0)) {
    return 0;
  }
  lVar8 = 0;
  FUN_103a814dc();
  iVar6 = *(int *)(lVar8 + 0x1c);
  lVar16 = (long)*(int *)(lVar16 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar6,lVar13);
  func_0x000100029394((long)param_2 + (long)iVar6,lVar13 + lVar16);
  pcVar18 = *(code **)(lVar17 + 0x30);
  lVar9 = lVar13;
  (*pcVar18)(lVar13,1,lVar7);
  if ((int)lVar9 == 1) {
    lVar16 = lVar13 + lVar16;
    (*pcVar18)(lVar16,1,lVar7);
    if ((int)lVar16 != 1) {
LAB_103a816ec:
      func_0x000103a82124(lVar13,0x112d7e680,&UNK_10d95e350);
      return 0;
    }
    func_0x000103a82124(lVar13,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar13,uVar15);
    lVar9 = lVar13 + lVar16;
    (*pcVar18)(lVar9,1,lVar7);
    if ((int)lVar9 == 1) {
      (**(code **)(lVar17 + 8))(uVar15,lVar7);
      goto LAB_103a816ec;
    }
    puVar10 = puVar14;
    (**(code **)(lVar17 + 0x20))(puVar14,lVar13 + lVar16,lVar7);
    func_0x000101553b98();
    uVar12 = uVar15;
    func_0x000107c5fab8(uVar15,puVar14,lVar7,puVar10);
    pcVar18 = *(code **)(lVar17 + 8);
    (*pcVar18)(puVar14,lVar7);
    (*pcVar18)(uVar15,lVar7);
    func_0x000103a82124(lVar13,0x112d36580,&UNK_10d9016d0);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x20));
  uVar12 = *puVar1;
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
  if (((uVar12 == *puVar2) && (puVar1[1] == puVar2[1])) ||
     (func_0x000107c605b8(), (uVar12 & 1) != 0)) {
    puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
    uVar12 = *puVar1;
    puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    if (((uVar12 == *puVar2) && (puVar1[1] == puVar2[1])) ||
       (func_0x000107c605b8(), (uVar12 & 1) != 0)) {
      puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
      uVar12 = puVar1[1];
      puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
      uVar15 = puVar2[1];
      if (uVar12 == 0) {
        if (uVar15 != 0) {
          return 0;
        }
      }
      else {
        if (uVar15 == 0) {
          return 0;
        }
        uVar11 = *puVar1;
        if (((uVar11 != *puVar2) || (uVar12 != uVar15)) &&
           (func_0x000107c605b8(), (uVar11 & 1) == 0)) {
          return 0;
        }
      }
      plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c));
      plVar4 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
      cVar5 = (char)plVar4[1];
      if ((char)plVar3[1] == '\x01') {
        if (cVar5 == '\x01') {
          return 1;
        }
      }
      else if ((cVar5 != '\x01') && (*plVar3 == *plVar4)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103a819fc; end: 103a81aa3;  */

/* WARNING: Possible PIC construction at 0x000103a81a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a81a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a81a20) */
/* WARNING: Removing unreachable block (ram,0x000103a81a54) */
/* WARNING: Removing unreachable block (ram,0x000103a81a64) */
/* WARNING: Removing unreachable block (ram,0x000103a81a74) */

void FUN_103a819fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103a81aa4; end: 103a81bf3;  */

undefined8 * FUN_103a81aa4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar6 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar6);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar5 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 103a81bf4; end: 103a81ddb;  */

undefined8 * FUN_103a81bf4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[2] = param_2[2];
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_103a81d08;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_103a81d08;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_103a81d08:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar6 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = uVar6;
  return param_1;
}



/* Entry: 103a81ddc; end: 103a81ed7;  */

undefined8 * FUN_103a81ddc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  lVar6 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  *puVar2 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 103a81ed8; end: 103a8206f;  */

undefined8 * FUN_103a81ed8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  uVar3 = param_2[3];
  uVar4 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_103a81fcc;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_103a81fcc;
  }
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                      *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
LAB_103a81fcc:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 103a82070; end: 103a82087;  */

void FUN_103a82070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103a82088; end: 103a82163;  */

void FUN_103a82088(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sytWV_11034f1b8 + 0x40;
  puStack_58 = &UNK_10dc46148;
  puStack_50 = &UNK_10dc46148;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10dc46148;
    puStack_38 = &UNK_10dc46148;
    puStack_30 = &UNK_10dc46160;
    puStack_28 = &UNK_10dc46178;
    func_0x000107c6153c(param_1,0x100,8,&puStack_60,param_1 + 0x10);
  }
  return;
}



/* Entry: 103a82164; end: 103a82cbb;  */

int FUN_103a82164(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a821e0;
        goto LAB_103a821c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a821c4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103a821e0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a82cbc; end: 103a82ccf;  */

bool FUN_103a82cbc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a82cd0; end: 103a82f5b;  */

void FUN_103a82cd0(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar6 = 0x7461686370616e73;
  pcVar4 = "snapchat_maps_promo";
  uVar5 = 0xd000000000000019;
  if (bVar3 != 2) {
    pcVar4 = "deep link URL found";
    uVar5 = 0xd000000000000013;
  }
  uVar1 = 0xed0000657661735f;
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000011;
    uVar1 = 0x800000010f003cf0;
  }
  uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a82f5c; end: 103a82ff3;  */

void FUN_103a82f5c(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar6 = 0x7461686370616e73;
  pcVar4 = "snapchat_maps_promo";
  uVar5 = 0xd000000000000019;
  if (bVar3 != 2) {
    pcVar4 = "deep link URL found";
    uVar5 = 0xd000000000000013;
  }
  uVar1 = 0xed0000657661735f;
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000011;
    uVar1 = 0x800000010f003cf0;
  }
  uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103a82ff4; end: 103a83057;  */

ulong FUN_103a82ff4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 103a83058; end: 103a8305b;  */

void FUN_103a83058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc462a0;
  func_0x000107c61520(&UNK_10dc462a0,&UNK_1106c65c0);
  puRam0000000112fdbc78 = puVar1;
  return;
}



/* Entry: 103a8305c; end: 103a8309b;  */

void FUN_103a8305c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdbc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc462a0;
  func_0x000107c61520(&UNK_10dc462a0,&UNK_1106c65c0);
  puRam0000000112fdbc78 = puVar1;
  return;
}



/* Entry: 103a8309c; end: 103a83213;  */

int FUN_103a8309c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a83118;
        goto LAB_103a830fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a830fc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103a83118:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a83214; end: 103a832bf;  */

void FUN_103a83214(void)

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


