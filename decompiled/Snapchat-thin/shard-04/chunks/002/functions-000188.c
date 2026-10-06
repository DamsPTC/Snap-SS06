/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032b24f0; end: 1032b2553; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint setImageToVideoWriterScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b24f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52958;
  func_0x000107c61428(param_1 + _DAT_112f52958,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032b2554; end: 1032b2687;  */

/* WARNING: Possible PIC construction at 0x0001032b260c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b2628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b2644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b2610) */
/* WARNING: Removing unreachable block (ram,0x0001032b262c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2554(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c45118();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032b1d88();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032b2000();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b2688);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f52880) = lVar5;
    *(long *)(lVar4 + _DAT_112f52888) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032b2688; end: 1032b26af; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032b2688(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032b2554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032b26b0; end: 1032b26f3; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032b26b0(undefined8 param_1)

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



/* Entry: 1032b26f4; end: 1032b288b;  */

void FUN_1032b26f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0ec8270)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f137d90,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ImageToVideoWriterScopeGraphBridge/SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b288c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c552cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032b288c; end: 1032b2937; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032b288c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032b26f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032b2938; end: 1032b29a3; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2938(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52950,0);
  *(undefined8 *)(param_1 + _DAT_112f52958) = 0;
  *(undefined8 *)(param_1 + _DAT_112f52960) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b29a4; end: 1032b29d7;  */

void FUN_1032b29a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b29d8; end: 1032b2a1f; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b2a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b2a08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b29d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52958));
  return;
}



/* Entry: 1032b2a20; end: 1032b2a3f;  */

void FUN_1032b2a20(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9530);
  return;
}



/* Entry: 1032b2a40; end: 1032b2a87; -[SCSCImageToVideoWriterScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2a40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52990;
  func_0x000107c61428(param_1 + _DAT_112f52990,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b2a88; end: 1032b2adf; -[SCSCImageToVideoWriterScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52990;
  func_0x000107c61428(param_1 + _DAT_112f52990,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b2ae0; end: 1032b2bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2ae0(undefined8 param_1,long param_2)

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
    FUN_1032b1fe0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f528b8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b2bb8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f528c0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f52998);
    *(long **)(unaff_x20 + _DAT_112f52998) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032b2bb8; end: 1032b2bdf; -[SCSCImageToVideoWriterScopedServicesSaberEntryPoint begin] */

void FUN_1032b2bb8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032b2ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032b2be0; end: 1032b2d57;  */

/* WARNING: Possible PIC construction at 0x0001032b2c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b2ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b2c4c) */
/* WARNING: Removing unreachable block (ram,0x0001032b2ce4) */
/* WARNING: Removing unreachable block (ram,0x0001032b2cfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2be0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f52998);
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



/* Entry: 1032b2d58; end: 1032b2d5f;  */

void FUN_1032b2d58(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032b2d60; end: 1032b2d93; -[SCSCImageToVideoWriterScopedServicesSaberEntryPoint end] */

void FUN_1032b2d60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032b2be0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032b2d94; end: 1032b2eb3;  */

void FUN_1032b2d94(long param_1,long param_2,long param_3)

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
                        "ImageToVideoWriterScopeGraphBridge/SCSCImageToVideoWriterScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b2eb4);
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



/* Entry: 1032b2eb4; end: 1032b2f5f; -[SCSCImageToVideoWriterScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032b2eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032b2d94(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032b2f60; end: 1032b2fbf; -[SCSCImageToVideoWriterScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2f60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52990,0);
  *(undefined8 *)(param_1 + _DAT_112f52998) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b2fc0; end: 1032b2ff3;  */

void FUN_1032b2fc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b2ff4; end: 1032b302b; -[SCSCImageToVideoWriterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2ff4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52990);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52998));
  return;
}



/* Entry: 1032b302c; end: 1032b304b;  */

void FUN_1032b302c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c95f8);
  return;
}



/* Entry: 1032b304c; end: 1032b30b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b304c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032b3440();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f529d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032b30b8; end: 1032b3123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b30b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f529d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b3124; end: 1032b3183; -[_TtC43InSettingReportScopedFactoryServiceProvider31SCInSettingReportScopedServices init] */

void FUN_1032b3124(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InSettingReportScopedFactoryServiceProvider.SCInSettingReportScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b3150);
  (*pcVar1)();
}



/* Entry: 1032b3184; end: 1032b3193; -[_TtC43InSettingReportScopedFactoryServiceProvider31SCInSettingReportScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b3184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f529d0));
  return;
}



/* Entry: 1032b3194; end: 1032b31ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b3194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110635230;
  func_0x000107c613fc(&UNK_110635230,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032b34d8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032b3200; end: 1032b329b;  */

void FUN_1032b3200(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110635140;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110635140;
  return;
}



/* Entry: 1032b329c; end: 1032b32d3;  */

void FUN_1032b329c(long *param_1)

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



/* Entry: 1032b32d4; end: 1032b32db;  */

undefined8 FUN_1032b32d4(void)

{
  return 0x1b;
}



/* Entry: 1032b32dc; end: 1032b340f;  */

void FUN_1032b32dc(undefined8 *param_1)

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
  puVar1 = &UNK_110635258;
  func_0x000107c613fc(&UNK_110635258,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032b34b0;
  func_0x00010058fa64(FUN_1032b34b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032b3410; end: 1032b343f;  */

undefined ** FUN_1032b3410(void)

{
  return &PTR_DAT_113066bb0;
}



/* Entry: 1032b3440; end: 1032b345f;  */

void FUN_1032b3440(void)

{
  func_0x000107c61168(&PTR_PTR_1128c96b8);
  return;
}



/* Entry: 1032b3460; end: 1032b34af;  */

undefined1  [16] FUN_1032b3460(void)

{
  return ZEXT816(0x110635190);
}



/* Entry: 1032b34b0; end: 1032b34d7;  */

void FUN_1032b34b0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032b34d8; end: 1032b34db;  */

void FUN_1032b34d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032b34dc; end: 1032b35cb;  */

/* WARNING: Possible PIC construction at 0x0001032b358c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b359c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b35ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b35a0) */
/* WARNING: Removing unreachable block (ram,0x0001032b3590) */
/* WARNING: Removing unreachable block (ram,0x0001032b35b0) */

void FUN_1032b34dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1106352e0;
  func_0x000107c613fc(&UNK_1106352e0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112f52a40;
  func_0x0001000285a8(0x112f52a40,&UNK_10dba9460);
  func_0x000107c613fc();
  pcVar3 = FUN_1032b3980;
  func_0x0001000841fc(FUN_1032b3980,puVar1,uVar2);
  func_0x000100084214(&UNK_10dba9430,0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1032b35cc; end: 1032b35eb;  */

/* WARNING: Possible PIC construction at 0x0001032b358c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b359c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b35ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b35a0) */
/* WARNING: Removing unreachable block (ram,0x0001032b3590) */
/* WARNING: Removing unreachable block (ram,0x0001032b35b0) */

void FUN_1032b35cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1106352e0;
  func_0x000107c613fc(&UNK_1106352e0,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112f52a40;
  func_0x0001000285a8(0x112f52a40,&UNK_10dba9460);
  func_0x000107c613fc();
  pcVar8 = FUN_1032b3980;
  func_0x0001000841fc(FUN_1032b3980,puVar6,uVar7);
  func_0x000100084214(&UNK_10dba9430,0x2d,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1032b35ec; end: 1032b3933;  */

void FUN_1032b35ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f52a48,&UNK_10dba9468);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1032b4c48();
  func_0x000100082720("InSettingReportScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f52a50,&UNK_10dba9470);
  puVar3 = &UNK_110635308;
  func_0x000107c613fc(&UNK_110635308,0x48,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar8 = 0x1032b3990;
  func_0x0001000823a8(0x1032b3990,puVar3);
  func_0x000100082720("SCInSettingReportUIEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032b329c;
  func_0x0001000823a8(FUN_1032b329c,0);
  func_0x000100082720("SCInSettingReportScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f52a58,&UNK_10dba9480);
  puVar3 = &UNK_110635330;
  func_0x000107c613fc(&UNK_110635330,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar8);
  uVar5 = 0x1032b39a4;
  func_0x0001000823a8(0x1032b39a4,puVar3);
  func_0x000100082720("SCInSettingReportScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f529d8,&UNK_10dba9220);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1032b39b0;
  func_0x0001000823a8(0x1032b39b0,uVar5);
  func_0x000100082720("SCInSettingReportScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f529c8,&UNK_10dba9210);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032b39b8;
  func_0x0001000823a8(0x1032b39b8,uVar6);
  func_0x000100082720("SCInSettingReportScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110635358;
  func_0x000107c613fc(&UNK_110635358,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1032b39c0;
  func_0x0001000823a8(0x1032b39c0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCInSettingReportScopeEntryPointProvider",0x28,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1032b3934; end: 1032b397f;  */

void FUN_1032b3934(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032b3980; end: 1032b39c7;  */

void FUN_1032b3980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f52a48,&UNK_10dba9468);
  puVar3 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_1032b4c48();
  func_0x000100082720("InSettingReportScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f52a50,&UNK_10dba9470);
  puVar5 = &UNK_110635308;
  func_0x000107c613fc(&UNK_110635308,0x48,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  uVar6 = 0x1032b3990;
  func_0x0001000823a8(0x1032b3990,puVar5);
  func_0x000100082720("SCInSettingReportUIEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_1032b329c;
  func_0x0001000823a8(FUN_1032b329c,0);
  func_0x000100082720("SCInSettingReportScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f52a58,&UNK_10dba9480);
  puVar5 = &UNK_110635330;
  func_0x000107c613fc(&UNK_110635330,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = pcVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar6);
  uVar8 = 0x1032b39a4;
  func_0x0001000823a8(0x1032b39a4,puVar5);
  func_0x000100082720("SCInSettingReportScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f529d8,&UNK_10dba9220);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1032b39b0;
  func_0x0001000823a8(0x1032b39b0,uVar8);
  func_0x000100082720("SCInSettingReportScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f529c8,&UNK_10dba9210);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1032b39b8;
  func_0x0001000823a8(0x1032b39b8,uVar9);
  func_0x000100082720("SCInSettingReportScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110635358;
  func_0x000107c613fc(&UNK_110635358,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar10 = 0x1032b39c0;
  func_0x0001000823a8(0x1032b39c0,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCInSettingReportScopeEntryPointProvider",0x28,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1032b39c8; end: 1032b41db;  */

void FUN_1032b39c8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1032b4354();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126acfd0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f138090);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar9 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f1380b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = param_2;
  return;
}



/* Entry: 1032b41dc; end: 1032b4247;  */

void FUN_1032b41dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1032b4248; end: 1032b424f;  */

undefined8 FUN_1032b4248(void)

{
  return 0x1b;
}



/* Entry: 1032b4250; end: 1032b42d3;  */

void FUN_1032b4250(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032b4394,param_2,FUN_1032b4398,param_2,FUN_1032b43c0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032b42d4; end: 1032b4323;  */

undefined8 FUN_1032b42d4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1032b4324; end: 1032b4353;  */

void FUN_1032b4324(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110635370;
  return;
}



/* Entry: 1032b4354; end: 1032b4373;  */

void FUN_1032b4354(void)

{
  func_0x000107c61168(&PTR_PTR_112f52ac8);
  return;
}



/* Entry: 1032b4374; end: 1032b4397;  */

undefined1  [16] FUN_1032b4374(void)

{
  return ZEXT816(0x1106353b0);
}



/* Entry: 1032b4398; end: 1032b43bf;  */

void FUN_1032b4398(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032b43c0; end: 1032b43c7;  */

undefined8 FUN_1032b43c0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1032b43c8; end: 1032b4403;  */

void FUN_1032b43c8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032b4404();
  func_0x0001000a7f38("SCInSettingReportScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1032b4404; end: 1032b45ef;  */

void FUN_1032b4404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d5f0;
  ppuVar4 = &PTR_DAT_113066bb0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110635400;
  func_0x000107c613fc(&UNK_110635400,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f52b58;
  func_0x0001000285a8(0x112f52b58,&UNK_10dba95e8);
  func_0x0001000a6ee8(&UNK_110635610,"InSettingReportScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_1032b45f0,puVar2,uVar3,&UNK_110635610,&PTR_DAT_112f52be8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110635428;
  func_0x000107c613fc(&UNK_110635428,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106351d0,"SCInSettingReportScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_1032b46d8,puVar2,uVar3,&UNK_1106351d0,&PTR_DAT_112f529e0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106353b0,
                      "SCInSettingReportUIEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_1032b4754,param_4,uVar3,&UNK_1106353b0,&PTR_DAT_112f52a60);
  func_0x000107c61574(param_4);
  uVar3 = 0x112f52b60;
  func_0x0001000285a8(0x112f52b60,&UNK_10dba95f0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032b45f0; end: 1032b462f;  */

void FUN_1032b45f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032b4d2c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("InSettingReportScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032b4630; end: 1032b46d7;  */

void FUN_1032b4630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110635450;
  func_0x000107c613fc(&UNK_110635450,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032b4790;
  func_0x0001000823a8(FUN_1032b4790,puVar1);
  func_0x000100082720("SCInSettingReportScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032b46d8; end: 1032b46df;  */

void FUN_1032b46d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110635450;
  func_0x000107c613fc(&UNK_110635450,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032b4790;
  func_0x0001000823a8(FUN_1032b4790,puVar3);
  func_0x000100082720("SCInSettingReportScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032b46e0; end: 1032b4753;  */

void FUN_1032b46e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1032b475c;
  func_0x0001000823a8(0x1032b475c,param_3);
  func_0x000100082720("SCInSettingReportUIEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1032b4754; end: 1032b4763;  */

void FUN_1032b4754(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1032b475c;
  func_0x0001000823a8();
  func_0x000100082720("SCInSettingReportUIEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1032b4764; end: 1032b478f;  */

void FUN_1032b4764(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032b4790; end: 1032b4797;  */

void FUN_1032b4790(undefined8 *param_1)

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
  puVar1 = &UNK_110635258;
  func_0x000107c613fc(&UNK_110635258,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032b34b0;
  func_0x00010058fa64(FUN_1032b34b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032b4798; end: 1032b481f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032b4798(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032b4b58();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f52b68) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f52b70) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b4820);
  (*pcVar1)();
}



/* Entry: 1032b4820; end: 1032b487f; -[_TtC31InSettingReportScopeGraphBridge46InSettingReportScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032b4820(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InSettingReportScopeGraphBridge.InSettingReportScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b484c);
  (*pcVar1)();
}



/* Entry: 1032b4880; end: 1032b48b7; -[_TtC31InSettingReportScopeGraphBridge46InSettingReportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b489c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b48a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b4880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52b68));
  return;
}



/* Entry: 1032b48b8; end: 1032b48df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b48b8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f52b70),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f52b68));
  return;
}



/* Entry: 1032b48e0; end: 1032b48ff;  */

void FUN_1032b48e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9778);
  return;
}



/* Entry: 1032b4900; end: 1032b4987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032b4900(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f52ba0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f52ba8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b4988);
  (*pcVar2)();
}



/* Entry: 1032b4988; end: 1032b4a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032b4988(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f52ba0);
  *(undefined **)(unaff_x20 + _DAT_112f52ba0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f52ba8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f52ba8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110635570;
  func_0x000107c613fc(&UNK_110635570,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032b4a74,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032b4a70; end: 1032b4a7b;  */

void FUN_1032b4a70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032b4a7c; end: 1032b4adb; -[_TtC31InSettingReportScopeGraphBridge46SCInSettingReportScopedServicesSaberEntryPoint init] */

void FUN_1032b4a7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InSettingReportScopeGraphBridge.SCInSettingReportScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b4aa8);
  (*pcVar1)();
}



/* Entry: 1032b4adc; end: 1032b4b13; -[_TtC31InSettingReportScopeGraphBridge46SCInSettingReportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b4adc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f52ba8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52ba0));
  return;
}



/* Entry: 1032b4b14; end: 1032b4b17;  */

void FUN_1032b4b14(void)

{
  return;
}



/* Entry: 1032b4b18; end: 1032b4b37;  */

void FUN_1032b4b18(void)

{
  FUN_1032b4988();
  return;
}



/* Entry: 1032b4b38; end: 1032b4b57;  */

void FUN_1032b4b38(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9840);
  return;
}



/* Entry: 1032b4b58; end: 1032b4c27;  */

undefined8 FUN_1032b4b58(void)

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
  
  func_0x000107c61428(0x112f52bd8,&uStack_40,0x20,0);
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
    FUN_1032b4c28();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032b4c28; end: 1032b4c47;  */

void FUN_1032b4c28(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9908);
  return;
}



/* Entry: 1032b4c48; end: 1032b4cb3;  */

void FUN_1032b4c48(void)

{
  func_0x0001000285a8(0x112f52be0,&UNK_10dba96a8);
  func_0x0001000823a8(0x1032b4c88,0);
  return;
}



/* Entry: 1032b4cb4; end: 1032b4cef; -[_TtC31InSettingReportScopeGraphBridge39InSettingReportScopeGraphBridgeServices init] */

void FUN_1032b4cb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b4cf0; end: 1032b4d23;  */

void FUN_1032b4cf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b4d24; end: 1032b4d2b;  */

undefined8 FUN_1032b4d24(void)

{
  return 0x1b;
}



/* Entry: 1032b4d2c; end: 1032b4ea3;  */

void FUN_1032b4d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106355b8;
  func_0x000107c613fc(&UNK_1106355b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032b4ea4,puVar1);
  return;
}



/* Entry: 1032b4ea4; end: 1032b4eab;  */

void FUN_1032b4ea4(undefined8 *param_1)

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
  func_0x000107c61428(0x112f52bd8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f52bd8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110635650;
  func_0x000107c613fc(&UNK_110635650,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032b4f58;
  func_0x00010058fa64(0x1032b4f58,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032b4eac; end: 1032b4f07;  */

void FUN_1032b4eac(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f52bd8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f52bd8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032b4f08; end: 1032b4f5f;  */

undefined ** FUN_1032b4f08(void)

{
  return &PTR_DAT_113066bb0;
}



/* Entry: 1032b4f60; end: 1032b4fa7; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b4f60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52c38;
  func_0x000107c61428(param_1 + _DAT_112f52c38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b4fa8; end: 1032b4fff; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b4fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52c38;
  func_0x000107c61428(param_1 + _DAT_112f52c38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b5000; end: 1032b5047; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint inSettingReportScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5000(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52c40;
  func_0x000107c61428(param_1 + _DAT_112f52c40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032b5048; end: 1032b50ab; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint setInSettingReportScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5048(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52c40;
  func_0x000107c61428(param_1 + _DAT_112f52c40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032b50ac; end: 1032b51df;  */

/* WARNING: Possible PIC construction at 0x0001032b5164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b5180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b519c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b5168) */
/* WARNING: Removing unreachable block (ram,0x0001032b5184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b50ac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c452c0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032b48e0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032b4b58();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b51e0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f52b68) = lVar5;
    *(long *)(lVar4 + _DAT_112f52b70) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032b51e0; end: 1032b5207; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032b51e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032b50ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032b5208; end: 1032b524b; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032b5208(undefined8 param_1)

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



/* Entry: 1032b524c; end: 1032b53e3;  */

void FUN_1032b524c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0ec7cd0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f138330,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "InSettingReportScopeGraphBridge/SCInSettingReportScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b53e4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55344();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032b53e4; end: 1032b548f; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032b53e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032b524c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032b5490; end: 1032b54fb; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5490(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52c38,0);
  *(undefined8 *)(param_1 + _DAT_112f52c40) = 0;
  *(undefined8 *)(param_1 + _DAT_112f52c48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b54fc; end: 1032b552f;  */

void FUN_1032b54fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b5530; end: 1032b5577; -[SCInSettingReportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b555c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b5560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5530(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52c38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52c40));
  return;
}



/* Entry: 1032b5578; end: 1032b5597;  */

void FUN_1032b5578(void)

{
  func_0x000107c61168(&PTR_PTR_1128c99b8);
  return;
}



/* Entry: 1032b5598; end: 1032b55df; -[SCSCInSettingReportScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5598(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52c78;
  func_0x000107c61428(param_1 + _DAT_112f52c78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b55e0; end: 1032b5637; -[SCSCInSettingReportScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b55e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52c78;
  func_0x000107c61428(param_1 + _DAT_112f52c78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b5638; end: 1032b570f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5638(undefined8 param_1,long param_2)

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
    FUN_1032b4b38();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f52ba0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b5710);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f52ba8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f52c80);
    *(long **)(unaff_x20 + _DAT_112f52c80) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}


