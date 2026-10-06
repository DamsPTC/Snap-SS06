/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032b5710; end: 1032b5737; -[SCSCInSettingReportScopedServicesSaberEntryPoint begin] */

void FUN_1032b5710(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032b5638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032b5738; end: 1032b58af;  */

/* WARNING: Possible PIC construction at 0x0001032b57a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b5838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b57a4) */
/* WARNING: Removing unreachable block (ram,0x0001032b583c) */
/* WARNING: Removing unreachable block (ram,0x0001032b5854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5738(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f52c80);
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



/* Entry: 1032b58b0; end: 1032b58b7;  */

void FUN_1032b58b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032b58b8; end: 1032b58eb; -[SCSCInSettingReportScopedServicesSaberEntryPoint end] */

void FUN_1032b58b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032b5738();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032b58ec; end: 1032b5a0b;  */

void FUN_1032b58ec(long param_1,long param_2,long param_3)

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
                        "InSettingReportScopeGraphBridge/SCSCInSettingReportScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b5a0c);
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



/* Entry: 1032b5a0c; end: 1032b5ab7; -[SCSCInSettingReportScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032b5a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032b58ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032b5ab8; end: 1032b5b17; -[SCSCInSettingReportScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5ab8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52c78,0);
  *(undefined8 *)(param_1 + _DAT_112f52c80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b5b18; end: 1032b5b4b;  */

void FUN_1032b5b18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b5b4c; end: 1032b5b83; -[SCSCInSettingReportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5b4c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52c80));
  return;
}



/* Entry: 1032b5b84; end: 1032b5ba3;  */

void FUN_1032b5b84(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9a80);
  return;
}



/* Entry: 1032b5ba4; end: 1032b5bb7;  */

bool FUN_1032b5ba4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1032b5bb8; end: 1032b5c63;  */

void FUN_1032b5bb8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1032b5c64; end: 1032b5c8b;  */

void FUN_1032b5c64(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1032b5c8c; end: 1032b5d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f52cb0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f52cb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f52cc0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b5d10; end: 1032b5d83; -[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult initWithValue:outcome:] */

undefined8 FUN_1032b5d10(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c49474(param_1);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1032b5d84; end: 1032b5db7; +[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult successWithValue:] */

void FUN_1032b5d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c49474(param_1,param_2,param_3,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b5db8; end: 1032b5e5b; +[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult successWithValue:ageMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c47580();
  lVar3 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f52cb0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f52cb8) = 0;
  *(undefined **)(lVar3 + _DAT_112f52cc0) = puVar2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b5e5c; end: 1032b5e83; +[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult ttlExpired] */

void FUN_1032b5e5c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c49474(param_1,param_2,0,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b5e84; end: 1032b5ee3; -[_TtC22SCBlizzardGeoSignalAPI29SCBlizzardGeoSignalReadResult init] */

void FUN_1032b5e84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBlizzardGeoSignalAPI.SCBlizzardGeoSignalReadResult",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b5eb0);
  (*pcVar1)();
}



/* Entry: 1032b5ee4; end: 1032b5ee7;  */

void FUN_1032b5ee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f52cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba9860;
  func_0x000107c61520(&UNK_10dba9860,&UNK_1106356f8);
  puRam0000000112f52cc8 = puVar1;
  return;
}



/* Entry: 1032b5ee8; end: 1032b5f27;  */

void FUN_1032b5ee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f52cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba9860;
  func_0x000107c61520(&UNK_10dba9860,&UNK_1106356f8);
  puRam0000000112f52cc8 = puVar1;
  return;
}



/* Entry: 1032b5f28; end: 1032b5f37;  */

undefined1  [16] FUN_1032b5f28(void)

{
  return ZEXT816(0x1106356f8);
}



/* Entry: 1032b5f38; end: 1032b5f57;  */

void FUN_1032b5f38(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9b40);
  return;
}



/* Entry: 1032b5f58; end: 1032b5f67; -[_TtC31SCBlizzardEventObserverServices31SCBlizzardEventObserverServices observerRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f52cf8));
  return;
}



/* Entry: 1032b5f68; end: 1032b5fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b5f68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f52cf8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b6000; end: 1032b6057; -[_TtC31SCBlizzardEventObserverServices31SCBlizzardEventObserverServices initWithObserverRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b6000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f52cf8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1032b6058; end: 1032b608b;  */

void FUN_1032b6058(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b608c; end: 1032b609b; -[_TtC31SCBlizzardEventObserverServices31SCBlizzardEventObserverServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b608c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52cf8));
  return;
}



/* Entry: 1032b609c; end: 1032b60eb;  */

void FUN_1032b609c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f52d28 != 0) {
    return;
  }
  puVar1 = &UNK_110635828;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f52d28 = param_1;
  return;
}



/* Entry: 1032b60ec; end: 1032b6367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032b60ec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  uStack_88 = param_1;
  func_0x000107c614f0();
  lVar3 = 0;
  lStack_a0 = lVar2;
  func_0x000107c5ffd8();
  lStack_98 = *(long *)(lVar3 + -8);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  lStack_a8 = _DAT_112f52d30;
  uVar5 = 0;
  func_0x000100923884(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_b0 = uVar5;
  func_0x000107c5f81c(lVar4);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4ac68;
  func_0x0001009238c4(0x112d4ac68,puVar1,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar7 = 0x112d4ac78;
  func_0x000100923904(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar10,&puStack_68,uVar6,uVar7,lVar3,uVar5);
  (**(code **)(lStack_98 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_90);
  uVar5 = 0xd000000000000023;
  func_0x000107c5ffec(0xd000000000000023,0x800000010f1384a0,lVar4,lVar10,lVar9,0);
  *(undefined8 *)(lVar2 + lStack_a8) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_112f52d38) = uStack_88;
  *(undefined8 *)(lVar2 + _DAT_112f52d40) = 0;
  *(undefined1 *)(lVar2 + _DAT_112f52d48) = 0;
  *(undefined1 *)(lVar2 + _DAT_112f52d50) = 0;
  lStack_70 = lStack_a0;
  puVar8 = auStack_78;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  lVar2 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,lVar2,0x28,7);
  return puVar8;
}



/* Entry: 1032b6368; end: 1032b6397; -[_TtC19ValdiBlizzardLogger19ValdiBlizzardLogger initWithSystemLogger:] */

void FUN_1032b6368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  FUN_1032b60ec(param_3);
  return;
}



/* Entry: 1032b6398; end: 1032b6993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b6398(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + _DAT_112f52d50) == '\x01') {
    uStack_a8 = *(undefined8 *)(unaff_x20 + _DAT_112f52d30);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f52d38);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f52d40);
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f52d48);
    puVar5 = &UNK_110635848;
    lStack_a0 = lVar11;
    func_0x000107c613fc(&UNK_110635848,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = uVar12;
    *(undefined8 *)(puVar5 + 0x20) = uVar13;
    puVar5[0x28] = uVar1;
    *(long *)(puVar5 + 0x30) = lVar2;
    pcStack_70 = FUN_1032b6994;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_110635860;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c615f0(uVar13);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(uVar12);
    func_0x000107c5f808(lVar9);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar12 = 0x112d4af88;
    func_0x0001009238c4(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar13 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = 0x112d4af98;
    func_0x000100923904(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(puVar8,&puStack_98,uVar13,uVar7,lVar3,uVar12);
    func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    (**(code **)(lStack_a0 + 8))(puVar8,lVar3);
    (**(code **)(lVar10 + 8))(lVar9,lVar4);
    func_0x000107c61574(puStack_68);
  }
  else {
    func_0x0001032b662c(param_1,*(undefined8 *)(unaff_x20 + _DAT_112f52d38),
                        *(undefined8 *)(unaff_x20 + _DAT_112f52d40),
                        *(undefined1 *)(unaff_x20 + _DAT_112f52d48));
  }
  return;
}



/* Entry: 1032b6994; end: 1032b69bf;  */

void FUN_1032b6994(void)

{
  long unaff_x20;
  
  func_0x0001032b662c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1032b69c0; end: 1032b69db;  */

void FUN_1032b69c0(long param_1,long param_2)

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



/* Entry: 1032b69dc; end: 1032b6a2b; -[_TtC19ValdiBlizzardLogger19ValdiBlizzardLogger logBlizzardEventWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001032b6a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b6a18) */

void FUN_1032b69dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1032b6398(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1032b6a2c; end: 1032b6f7b;  */

undefined * FUN_1032b6a2c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *apuStack_178 [5];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x0001032b8618(param_1,&lStack_c0,0x112d387f8,&UNK_10d902650);
  if (lStack_a8 == 0) {
    func_0x0001032b85d8(&lStack_c0,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar3 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    puVar9 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_110;
    func_0x000107c6147c(plVar4,&lStack_c0,PTR___sypN_11034f1a8 + 8,uVar3,6);
    lVar1 = lStack_110;
    if (((ulong)plVar4 & 1) != 0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa3f0();
      uVar11 = 1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
      uVar17 = 0xffffffffffffffff;
      if ((*(byte *)(lVar1 + 0x20) & 0x3f) < 6) {
        uVar17 = ~(-1L << (uVar11 & 0x3f));
      }
      uVar17 = uVar17 & *(ulong *)(lVar1 + 0x40);
      uVar11 = uVar11 + 0x3f >> 6;
      lVar15 = 0;
      do {
        if (uVar17 == 0) {
          uVar17 = uVar11;
          if ((long)uVar11 <= lVar15 + 1) {
            uVar17 = lVar15 + 1;
          }
          lVar12 = uVar17 - 1;
          lVar14 = lVar15;
          do {
            lVar15 = lVar14 + 1;
            if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b6f64);
              (*pcVar2)();
            }
            if ((long)uVar11 <= lVar15) {
              uVar17 = 0;
              uStack_d0 = 0;
              uStack_e8 = 0;
              uStack_f0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_108 = 0;
              lStack_110 = 0;
              lStack_f8 = 0;
              uStack_100 = 0;
              goto LAB_1032b6be8;
            }
            uVar17 = ((ulong *)(lVar1 + 0x40))[lVar15];
            lVar14 = lVar14 + 1;
          } while (uVar17 == 0);
        }
        uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 - 1 & uVar17;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar15 << 6;
        func_0x0001007bbd18(*(long *)(lVar1 + 0x30) + uVar16 * 0x28,&lStack_110);
        func_0x0001000bb420(*(long *)(lVar1 + 0x38) + uVar16 * 0x20,&uStack_e8);
        lVar12 = lVar15;
LAB_1032b6be8:
        uStack_98 = uStack_e8;
        uStack_a0 = uStack_f0;
        uStack_88 = uStack_d8;
        uStack_90 = uStack_e0;
        uStack_80 = uStack_d0;
        uStack_b8 = uStack_108;
        lStack_c0 = lStack_110;
        lStack_a8 = lStack_f8;
        uStack_b0 = uStack_100;
        if (lStack_f8 == 0) {
          func_0x000107c61574(lVar1);
          return puVar5;
        }
        func_0x000100102924(&uStack_98,auStack_130);
        func_0x0001032b7970(auStack_150,auStack_130);
        func_0x0001000bb420(auStack_150,apuStack_178);
        ppuVar7 = &puStack_198;
        func_0x000107c6147c(ppuVar7,apuStack_178,puVar9 + 8,uVar3,6);
        puVar8 = puStack_198;
        lVar15 = lVar12;
        if ((int)ppuVar7 == 0) {
          func_0x0001007bbd18(&lStack_110,apuStack_178);
          func_0x0001000bb420(auStack_150,&puStack_198);
          uStack_1d8 = uStack_190;
          puStack_1e0 = puStack_198;
          lStack_1c8 = lStack_180;
          uStack_1d0 = uStack_188;
          if (lStack_180 == 0) {
            uVar16 = 0;
            func_0x0001032b85d8(&puStack_1e0,0x112d387f8,&UNK_10d902650);
            func_0x000107c61434(puVar5);
            ppuVar7 = apuStack_178;
            func_0x000100df95d0(ppuVar7);
            func_0x000107c6142c(puVar5);
            if ((uVar16 & 1) == 0) {
              func_0x0001007bbff0(apuStack_178);
              func_0x000100183ab8(auStack_150);
              func_0x000100183ab8(auStack_130);
              func_0x0001007bbff0(&lStack_110);
              uStack_1b8 = 0;
              uStack_1c0 = 0;
              uStack_1a8 = 0;
              uStack_1b0 = 0;
            }
            else {
              puVar8 = puVar5;
              func_0x000107c61558();
              puStack_1e0 = puVar5;
              if ((int)puVar8 == 0) {
                func_0x000101228228();
              }
              puVar5 = puStack_1e0;
              func_0x0001007bbff0(*(long *)(puStack_1e0 + 0x30) + (long)ppuVar7 * 0x28);
              func_0x000100102924(*(long *)(puVar5 + 0x38) + (long)ppuVar7 * 0x20,&uStack_1c0);
              func_0x00010192cbc4(ppuVar7,puVar5);
              func_0x0001007bbff0(apuStack_178);
              func_0x000100183ab8(auStack_150);
              func_0x000100183ab8(auStack_130);
              func_0x0001007bbff0(&lStack_110);
            }
            func_0x0001032b85d8(&uStack_1c0,0x112d387f8,&UNK_10d902650);
          }
          else {
            uVar16 = 0;
            func_0x000100102924(&puStack_1e0);
            puVar8 = puVar5;
            func_0x000107c61558();
            uVar10 = (uint)puVar8;
            ppuVar7 = apuStack_178;
            puStack_1e0 = puVar5;
            func_0x000100df95d0();
            uVar13 = (ulong)~(uint)uVar16 & 1;
            lVar14 = *(long *)(puVar5 + 0x10) + uVar13;
            if (SCARRY8(*(long *)(puVar5 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b6f68);
              (*pcVar2)();
            }
            if (*(long *)(puVar5 + 0x18) < lVar14) {
              func_0x0001012283cc(lVar14);
              ppuVar7 = apuStack_178;
              func_0x000100df95d0();
              if (((uint)uVar16 & 1) != (uVar10 & 1)) {
                func_0x000107c60624(PTR___ss11AnyHashableVN_11034e448);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b6f7c);
                (*pcVar2)();
              }
            }
            else if (((ulong)puVar8 & 1) == 0) {
              func_0x000101228228();
            }
            puVar5 = puStack_1e0;
            if ((uVar16 & 1) == 0) {
              *(ulong *)(puStack_1e0 + ((ulong)ppuVar7 >> 6) * 8 + 0x40) =
                   *(ulong *)(puStack_1e0 + ((ulong)ppuVar7 >> 6) * 8 + 0x40) |
                   1L << ((ulong)ppuVar7 & 0x3f);
              func_0x0001007bbd18(apuStack_178,*(long *)(puStack_1e0 + 0x30) + (long)ppuVar7 * 0x28)
              ;
              func_0x000100102924(&uStack_1c0,*(long *)(puVar5 + 0x38) + (long)ppuVar7 * 0x20);
              func_0x0001007bbff0(apuStack_178);
              func_0x000100183ab8(auStack_150);
              func_0x000100183ab8(auStack_130);
              func_0x0001007bbff0(&lStack_110);
              if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b6f6c);
                (*pcVar2)();
              }
              *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
            }
            else {
              lVar14 = *(long *)(puStack_1e0 + 0x38) + (long)ppuVar7 * 0x20;
              func_0x000100183ab8(lVar14);
              func_0x000100102924(&uStack_1c0,lVar14);
              func_0x0001007bbff0(apuStack_178);
              func_0x000100183ab8(auStack_150);
              func_0x000100183ab8(auStack_130);
              func_0x0001007bbff0(&lStack_110);
            }
          }
        }
        else {
          puVar6 = puVar5;
          func_0x000107c61558(puVar5);
          apuStack_178[0] = puVar5;
          FUN_1032b8250(puVar8,&UNK_1012281f8,0,puVar6,apuStack_178);
          func_0x000107c6142c(puVar8);
          func_0x000100183ab8(auStack_150);
          func_0x000100183ab8(auStack_130);
          func_0x0001007bbff0(&lStack_110);
          puVar5 = apuStack_178[0];
        }
      } while( true );
    }
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  return puVar9;
}



/* Entry: 1032b6f7c; end: 1032b71b7;  */

undefined * FUN_1032b6f7c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  puVar3 = &UNK_110635910;
  puStack_48 = puVar2;
  func_0x000107c613fc(&UNK_110635910,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined ***)(puVar3 + 0x18) = &puStack_48;
  puVar2 = &UNK_110635938;
  func_0x000107c613fc(&UNK_110635938,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1032b85d0;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uStack_58 = 0x1032b8678;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_10168c430;
  puStack_60 = &UNK_110635950;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_50;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c429c4(param_1);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar2;
  func_0x000107c61544(puVar2,"",0x52,0x9d,0x26,1);
  func_0x000107c61574(puVar2);
  puVar2 = puStack_48;
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000107c61574(puVar3);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b70b4);
  (*pcVar1)();
}



/* Entry: 1032b71b8; end: 1032b747f;  */

undefined8 FUN_1032b71b8(void)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  long extraout_x8;
  undefined8 unaff_x20;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  char cStack_c0;
  undefined7 uStack_bf;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  long lStack_80;
  
  lVar5 = 0;
  func_0x000107c5ed50();
  lStack_100 = *(long *)(lVar5 + -8);
  lStack_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar5 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(lVar5);
  func_0x000107c5ed4c(auStack_98);
  puVar2 = PTR___sypN_11034f1a8;
  do {
    if (lStack_80 == 0) {
      (**(code **)(lStack_100 + 8))(lVar5,lStack_f8);
      return 0;
    }
    func_0x000100102924(auStack_98,auStack_b8);
    func_0x0001000bb420(auStack_b8,&puStack_f0);
    uVar6 = 0;
    func_0x000100923884(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    pcVar7 = &cStack_c0;
    func_0x000107c6147c(pcVar7,&puStack_f0,puVar2 + 8,uVar6,6);
    if ((int)pcVar7 == 0) {
      func_0x0001000bb420(auStack_b8,&puStack_f0);
      uVar6 = 0;
      func_0x000100923884(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      pcVar7 = &cStack_c0;
      func_0x000107c6147c(pcVar7,&puStack_f0,puVar2 + 8,uVar6,6);
      if (((ulong)pcVar7 & 1) == 0) {
        func_0x000100183ab8(auStack_b8);
      }
      else {
        uVar1 = CONCAT71(uStack_bf,cStack_c0);
        uVar12 = uVar1;
        FUN_1032b71b8();
        func_0x000107c61170(uVar1);
        func_0x000100183ab8(auStack_b8);
        if ((uVar12 & 1) != 0) goto LAB_1032b742c;
      }
    }
    else {
      uVar6 = CONCAT71(uStack_bf,cStack_c0);
      cStack_c0 = '\0';
      puVar8 = &UNK_110635988;
      func_0x000107c613fc(&UNK_110635988,0x20,7);
      *(char **)(puVar8 + 0x10) = &cStack_c0;
      *(undefined8 *)(puVar8 + 0x18) = unaff_x20;
      puVar9 = &UNK_1106359b0;
      func_0x000107c613fc(&UNK_1106359b0,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = 0x1032b867c;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      uStack_d0 = 0x1032b8680;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0x42000000;
      puStack_e0 = &UNK_10168c430;
      puStack_d8 = &UNK_1106359c8;
      ppuVar10 = &puStack_f0;
      puStack_c8 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar11 = puStack_c8;
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar11);
      func_0x000107c429c4(uVar6);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(uVar6);
      func_0x000100183ab8(auStack_b8);
      puVar11 = puVar9;
      func_0x000107c61544(puVar9,"",0x52,0x83,0x26,1);
      func_0x000107c61574(puVar9);
      cVar3 = cStack_c0;
      if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1032b7480);
        (*pcVar4)();
      }
      func_0x000107c61574(puVar8);
      if (cVar3 == '\x01') {
LAB_1032b742c:
        (**(code **)(lStack_100 + 8))(lVar5,lStack_f8);
        return 1;
      }
    }
    func_0x000107c5ed4c(auStack_98);
  } while( true );
}



/* Entry: 1032b7480; end: 1032b761f;  */

/* WARNING: Removing unreachable block (ram,0x0001032b760c) */

void FUN_1032b7480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [32];
  
  FUN_1032b7620(auStack_50,param_2);
  func_0x0001000bb420(auStack_50,&uStack_80);
  uVar3 = 0x112da99a0;
  func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
  puVar1 = PTR___sypN_11034f1a8;
  puVar2 = &uStack_d0;
  func_0x000107c6147c(puVar2,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x0001000bb420(param_1,auStack_a0);
    puVar2 = &uStack_d0;
    func_0x000107c6147c(puVar2,auStack_a0,puVar1 + 8,PTR___ss11AnyHashableVN_11034e448,6);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000100183ab8(auStack_50);
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      FUN_1032b85d8(&uStack_d0,0x112d603a8,&UNK_10d926900);
    }
    else {
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      uStack_60 = uStack_b0;
      func_0x0001007bbd18(&uStack_80,&uStack_d0);
      func_0x0001000bb420(auStack_50,auStack_a0);
      func_0x000101fd80b4(auStack_a0,&uStack_d0);
      func_0x0001007bbff0(&uStack_80);
      func_0x000100183ab8(auStack_50);
    }
  }
  else {
    uVar3 = *param_5;
    func_0x000107c61558(uVar3);
    uStack_80 = *param_5;
    *param_5 = 0x8000000000000000;
    FUN_1032b8250(uStack_d0,&UNK_1012281f8,0,uVar3,&uStack_80);
    func_0x000107c6142c(uStack_d0);
    func_0x000100183ab8(auStack_50);
    uVar3 = *param_5;
    *param_5 = uStack_80;
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1032b7620; end: 1032b7b6b;  */

void FUN_1032b7620(ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  long lStack_b0;
  ulong auStack_a8 [3];
  long lStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x0001000bb420(param_2,auStack_80);
  uVar3 = 0;
  func_0x000100923884(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar7 = PTR___sypN_11034f1a8;
  puVar4 = auStack_a8;
  func_0x000107c6147c(puVar4,auStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if ((int)puVar4 == 0) {
    func_0x0001000bb420(param_2,auStack_80);
    uVar3 = 0;
    func_0x000100923884(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar4 = auStack_a8;
    func_0x000107c6147c(puVar4,auStack_80,puVar7 + 8,uVar3,6);
    if ((int)puVar4 == 0) {
      func_0x0001000bb420(param_2,param_1);
    }
    else {
      uVar6 = auStack_a8[0];
      func_0x000107c40808();
      puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100c077e4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      puVar7 = puStack_88;
      func_0x000107c600f4(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b796c);
        (*pcVar1)();
      }
      uStack_b8 = auStack_a8[0];
      lStack_b0 = lVar8;
      if (uVar6 != 0) {
        uVar3 = 0x112d38ec0;
        func_0x0001009238c4(0x112d38ec0,PTR___s10Foundation25NSFastEnumerationIteratorVMa_110350880,
                            PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890);
        do {
          func_0x000107c601c0(auStack_a8,lVar2,uVar3);
          if (lStack_90 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b7970);
            (*pcVar1)();
          }
          FUN_1032b7620(auStack_80,auStack_a8);
          func_0x000100183ab8(auStack_a8);
          uVar5 = *(ulong *)(puVar7 + 0x10);
          puStack_88 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
            func_0x000100c077e4(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
          }
          puVar7 = puStack_88;
          *(ulong *)(puStack_88 + 0x10) = uVar5 + 1;
          func_0x000100102924(auStack_80,puStack_88 + uVar5 * 0x20 + 0x20);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar3 = 0x112d38ec0;
      func_0x0001009238c4(0x112d38ec0,PTR___s10Foundation25NSFastEnumerationIteratorVMa_110350880,
                          PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890);
      while (func_0x000107c601c0(auStack_a8,lVar2,uVar3), lStack_90 != 0) {
        func_0x000100102924(auStack_a8,auStack_80);
        FUN_1032b7620(auStack_a8,auStack_80);
        func_0x000100183ab8(auStack_80);
        uVar6 = *(ulong *)(puVar7 + 0x10);
        puStack_88 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
          func_0x000100c077e4(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
        }
        puVar7 = puStack_88;
        *(ulong *)(puStack_88 + 0x10) = uVar6 + 1;
        func_0x000100102924(auStack_a8,puStack_88 + uVar6 * 0x20 + 0x20);
      }
      (**(code **)(lStack_b0 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      FUN_1032b85d8(auStack_a8,0x112d387f8,&UNK_10d902650);
      uVar6 = 0x112daafe8;
      func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
      param_1[3] = uVar6;
      func_0x000107c61170(uStack_b8);
      *param_1 = (ulong)puVar7;
    }
  }
  else {
    uVar5 = auStack_a8[0];
    FUN_1032b6f7c();
    uVar6 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    param_1[3] = uVar6;
    func_0x000107c61170(auStack_a8[0]);
    *param_1 = uVar5;
  }
  return;
}



/* Entry: 1032b7b6c; end: 1032b7bcb; -[_TtC19ValdiBlizzardLogger19ValdiBlizzardLogger init] */

void FUN_1032b7b6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiBlizzardLogger.ValdiBlizzardLogger",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b7b98);
  (*pcVar1)();
}



/* Entry: 1032b7bcc; end: 1032b7c13; -[_TtC19ValdiBlizzardLogger19ValdiBlizzardLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b7bcc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f52d38));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f52d40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52d30));
  return;
}



/* Entry: 1032b7c14; end: 1032b7c1f; -[_TtC19ValdiBlizzardLogger21ValdiUserTrackedEvent getEventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b7c14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f52d80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f52d80))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1032b7c20; end: 1032b7c2f; -[_TtC19ValdiBlizzardLogger21ValdiUserTrackedEvent getEventQoS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032b7c20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f52d88);
}



/* Entry: 1032b7c30; end: 1032b7c43; -[_TtC19ValdiBlizzardLogger21ValdiUserTrackedEvent asDictionary] */

void FUN_1032b7c30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_112f52d90;
  func_0x000107c61174();
  FUN_1032b7d54(&DAT_112f52d90,FUN_1032b7cd0);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1032b7c44; end: 1032b7c67; -[_TtC19ValdiBlizzardLogger21ValdiUserTrackedEvent copyWithZone:] */

undefined1 * FUN_1032b7c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x000107c61174();
  FUN_1032b7eb0(auStack_60,param_3,FUN_1032b7cd0,&DAT_112f52d80,&DAT_112f52d88,&DAT_112f52d90);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_60,uStack_48);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_60);
  return puVar1;
}



/* Entry: 1032b7c68; end: 1032b7c8b; -[_TtC19ValdiBlizzardLogger21ValdiUserTrackedEvent initWithDrainNestedObjects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b7c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f52d80);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)(param_1 + _DAT_112f52d88) = 1;
  lVar2 = _DAT_112f52d90;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  *(undefined **)(param_1 + lVar2) = puVar3;
  FUN_1032b7cd0();
  lStack_40 = param_1;
  puStack_38 = puVar3;
  func_0x000107c61154(&lStack_40,PTR_s_initWithDrainNestedObjects__1125e1308,param_3);
  return;
}



/* Entry: 1032b7c8c; end: 1032b7cbb; -[_TtC19ValdiBlizzardLogger21ValdiUserTrackedEvent init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b7c8c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f52d80);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)(param_1 + _DAT_112f52d88) = 1;
  lVar2 = _DAT_112f52d90;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  *(undefined **)(param_1 + lVar2) = puVar3;
  FUN_1032b7cd0();
  lStack_40 = param_1;
  puStack_38 = puVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b7cbc; end: 1032b7ccf; -[_TtC19ValdiBlizzardLogger21ValdiUserTrackedEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b8218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b821c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b7cbc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112f52d80 + 8),param_2,&DAT_112f52d80,&DAT_112f52d90);
  return;
}



/* Entry: 1032b7cd0; end: 1032b7cef;  */

void FUN_1032b7cd0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9db0);
  return;
}



/* Entry: 1032b7cf0; end: 1032b7cfb; -[_TtC19ValdiBlizzardLogger24ValdiUserNotTrackedEvent getEventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b7cf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f52dc0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f52dc0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1032b7cfc; end: 1032b7d43;  */

void FUN_1032b7cfc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1032b7d44; end: 1032b7d53; -[_TtC19ValdiBlizzardLogger24ValdiUserNotTrackedEvent getEventQoS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032b7d44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f52dc8);
}



/* Entry: 1032b7d54; end: 1032b7e1f;  */

undefined8 FUN_1032b7d54(long *param_1,code *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + *param_1);
  (*param_2)();
  puVar1 = PTR_s_asDictionary_1125a0338;
  func_0x000107c61434(uVar6);
  puVar3 = &stack0xffffffffffffffc0;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar3);
    uVar5 = uVar6;
    func_0x000107c61558(uVar6);
    uStack_48 = uVar6;
    FUN_1032b8250(puVar4,&UNK_1012281f8,0,uVar5,&uStack_48);
    func_0x000107c6142c(puVar4);
    return uStack_48;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b7e20);
  (*pcVar2)();
}



/* Entry: 1032b7e20; end: 1032b7e33; -[_TtC19ValdiBlizzardLogger24ValdiUserNotTrackedEvent asDictionary] */

void FUN_1032b7e20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_112f52dd0;
  func_0x000107c61174();
  FUN_1032b7d54(&DAT_112f52dd0,FUN_1032b8230);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1032b7e34; end: 1032b7eaf;  */

void FUN_1032b7e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_1032b7d54(param_3,param_4);
  func_0x000107c61170(param_1);
  uVar1 = param_3;
  func_0x000107c5f9dc(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032b7eb0; end: 1032b7fa7;  */

void FUN_1032b7eb0(long *param_1,long param_2,code *param_3,long *param_4,long *param_5,
                  long *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_88;
  undefined1 auStack_70 [32];
  
  lVar3 = param_2;
  (*param_3)();
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar4,PTR_s_copyWithZone__1125b2238,param_2);
  func_0x000107c60234(auStack_70);
  func_0x000107c615e8(puVar4);
  func_0x000107c6147c(&lStack_88,auStack_70,PTR___sypN_11034f1a8 + 8,lVar3,7);
  puVar1 = (undefined8 *)(unaff_x20 + *param_4);
  uVar6 = puVar1[1];
  puVar2 = (undefined8 *)(lStack_88 + *param_4);
  uVar7 = puVar2[1];
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  func_0x000107c61434();
  func_0x000107c6142c(uVar7);
  *(undefined8 *)(lStack_88 + *param_5) = *(undefined8 *)(unaff_x20 + *param_5);
  lVar5 = *param_6;
  uVar6 = *(undefined8 *)(lStack_88 + lVar5);
  *(undefined8 *)(lStack_88 + lVar5) = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[3] = lVar3;
  *param_1 = lStack_88;
  return;
}



/* Entry: 1032b7fa8; end: 1032b7fcb; -[_TtC19ValdiBlizzardLogger24ValdiUserNotTrackedEvent copyWithZone:] */

undefined1 * FUN_1032b7fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x000107c61174();
  FUN_1032b7eb0(auStack_60,param_3,FUN_1032b8230,&DAT_112f52dc0,&DAT_112f52dc8,&DAT_112f52dd0);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_60,uStack_48);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_60);
  return puVar1;
}



/* Entry: 1032b7fcc; end: 1032b8067;  */

undefined1 *
FUN_1032b7fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x000107c61174();
  FUN_1032b7eb0(auStack_60,param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_60,uStack_48);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_60);
  return puVar1;
}



/* Entry: 1032b8068; end: 1032b808b; -[_TtC19ValdiBlizzardLogger24ValdiUserNotTrackedEvent initWithDrainNestedObjects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b8068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f52dc0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)(param_1 + _DAT_112f52dc8) = 1;
  lVar2 = _DAT_112f52dd0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  *(undefined **)(param_1 + lVar2) = puVar3;
  FUN_1032b8230();
  lStack_40 = param_1;
  puStack_38 = puVar3;
  func_0x000107c61154(&lStack_40,PTR_s_initWithDrainNestedObjects__1125e1308,param_3);
  return;
}



/* Entry: 1032b808c; end: 1032b810b;  */

void FUN_1032b808c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5,
                  long *param_6,code *param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = *param_4;
  *(undefined8 *)(param_1 + lVar2) = 0;
  ((undefined8 *)(param_1 + lVar2))[1] = 0xe000000000000000;
  *(undefined8 *)(param_1 + *param_5) = 1;
  lVar2 = *param_6;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  *(undefined **)(param_1 + lVar2) = puVar1;
  (*param_7)();
  lStack_40 = param_1;
  puStack_38 = puVar1;
  func_0x000107c61154(&lStack_40,PTR_s_initWithDrainNestedObjects__1125e1308,param_3);
  return;
}



/* Entry: 1032b810c; end: 1032b812f; -[_TtC19ValdiBlizzardLogger24ValdiUserNotTrackedEvent init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b810c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f52dc0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)(param_1 + _DAT_112f52dc8) = 1;
  lVar2 = _DAT_112f52dd0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  *(undefined **)(param_1 + lVar2) = puVar3;
  FUN_1032b8230();
  lStack_40 = param_1;
  puStack_38 = puVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b8130; end: 1032b81a7;  */

void FUN_1032b8130(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                  code *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = *param_3;
  *(undefined8 *)(param_1 + lVar2) = 0;
  ((undefined8 *)(param_1 + lVar2))[1] = 0xe000000000000000;
  *(undefined8 *)(param_1 + *param_4) = 1;
  lVar2 = *param_5;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  *(undefined **)(param_1 + lVar2) = puVar1;
  (*param_6)();
  lStack_40 = param_1;
  puStack_38 = puVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b81a8; end: 1032b81b3;  */

void FUN_1032b81a8(void)

{
  FUN_1032b8230();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b81b4; end: 1032b81e3;  */

void FUN_1032b81b4(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b81e4; end: 1032b81f7; -[_TtC19ValdiBlizzardLogger24ValdiUserNotTrackedEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b8218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b821c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b81e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112f52dc0 + 8),param_2,&DAT_112f52dc0,&DAT_112f52dd0);
  return;
}



/* Entry: 1032b81f8; end: 1032b822f;  */

/* WARNING: Possible PIC construction at 0x0001032b8218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b821c) */

void FUN_1032b81f8(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + *param_3 + 8));
  return;
}



/* Entry: 1032b8230; end: 1032b824f;  */

void FUN_1032b8230(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9ec0);
  return;
}



/* Entry: 1032b8250; end: 1032b85a7;  */

void FUN_1032b8250(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar6 = uVar6 + 0x3f >> 6;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar4 = 0;
  do {
    if (uVar10 == 0) {
      uVar10 = uVar6;
      if ((long)uVar6 <= lVar4 + 1) {
        uVar10 = lVar4 + 1;
      }
      lVar3 = uVar10 - 1;
      lVar9 = lVar4;
      do {
        lVar4 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8590);
          (*pcVar1)();
        }
        if ((long)uVar6 <= lVar4) {
          uVar10 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          lStack_e8 = 0;
          uStack_f0 = 0;
          goto LAB_1032b838c;
        }
        uVar10 = ((ulong *)(param_1 + 0x40))[lVar4];
        lVar9 = lVar9 + 1;
      } while (uVar10 == 0);
    }
    uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
    func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar8 * 0x28,&uStack_100);
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar8 * 0x20,&uStack_d8);
    lVar3 = lVar4;
LAB_1032b838c:
    func_0x0001032b8618(&uStack_100,&uStack_148,0x112d55e70,&UNK_10d92d170);
    if (lStack_130 == 0) {
      func_0x0001032b85d8(&uStack_100,0x112d55e70,&UNK_10d92d170);
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
LAB_1032b8558:
      func_0x000107c61574(param_3);
      func_0x000107c61574(param_1);
      return;
    }
    uStack_168 = uStack_120;
    uStack_170 = uStack_128;
    uStack_158 = uStack_110;
    uStack_160 = uStack_118;
    uStack_150 = uStack_108;
    uStack_188 = uStack_140;
    uStack_190 = uStack_148;
    lStack_178 = lStack_130;
    uStack_180 = uStack_138;
    (*param_2)(&uStack_b0,&uStack_190);
    func_0x0001032b85d8(&uStack_190,0x112d69838,&UNK_10d92d0b0);
    func_0x0001032b85d8(&uStack_100,0x112d55e70,&UNK_10d92d170);
    if (lStack_98 == 0) goto LAB_1032b8558;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    lStack_e8 = lStack_98;
    uStack_f0 = uStack_a0;
    uStack_e0 = uStack_90;
    uVar8 = 0;
    func_0x000100102924(&uStack_88);
    lVar9 = *param_5;
    puVar2 = &uStack_100;
    func_0x000100df95d0();
    lVar4 = *(long *)(lVar9 + 0x10);
    uVar7 = (ulong)~(uint)uVar8 & 1;
    if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8594);
      (*pcVar1)();
    }
    if (*(long *)(lVar9 + 0x18) < (long)(lVar4 + uVar7)) {
      param_4 = param_4 & 1;
      func_0x0001012283cc();
      puVar2 = &uStack_100;
      func_0x000100df95d0();
      if (((uint)uVar8 & 1) != (param_4 & 1)) {
        func_0x000107c60624(PTR___ss11AnyHashableVN_11034e448);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b85a8);
        (*pcVar1)();
      }
    }
    else if ((param_4 & 1) == 0) {
      func_0x000101228228();
    }
    lVar4 = *param_5;
    if ((uVar8 & 1) == 0) {
      lVar9 = lVar4 + ((ulong)puVar2 >> 6) * 8;
      *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << ((ulong)puVar2 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x30) + (long)puVar2 * 0x28);
      puVar5[4] = uStack_e0;
      puVar5[1] = uStack_f8;
      *puVar5 = uStack_100;
      puVar5[3] = lStack_e8;
      puVar5[2] = uStack_f0;
      func_0x000100102924(&uStack_148,*(long *)(lVar4 + 0x38) + (long)puVar2 * 0x20);
      if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8598);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    }
    else {
      func_0x0001007bbff0(&uStack_100);
      lVar4 = *(long *)(lVar4 + 0x38) + (long)puVar2 * 0x20;
      func_0x000100183ab8(lVar4);
      func_0x000100102924(&uStack_148,lVar4);
    }
    param_4 = 1;
    lVar4 = lVar3;
  } while( true );
}



/* Entry: 1032b85a8; end: 1032b85af;  */

void FUN_1032b85a8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uStack_68;
  undefined1 auStack_60 [32];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x0001000bb420(param_2,auStack_60,param_3,puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar3 = 0;
  func_0x000100923884(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar2 = PTR___sypN_11034f1a8;
  puVar4 = &uStack_68;
  func_0x000107c6147c(puVar4,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if ((int)puVar4 == 0) {
    func_0x0001000bb420(param_2,auStack_60);
    uVar3 = 0;
    func_0x000100923884(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,auStack_60,puVar2 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = uStack_68;
      FUN_1032b71b8();
      if ((uVar5 & 1) != 0) {
        *puVar1 = 1;
        *param_3 = 1;
      }
      func_0x000107c61170(uStack_68);
    }
  }
  else {
    func_0x000107c61170(uStack_68);
    *puVar1 = 1;
    *param_3 = 1;
  }
  return;
}



/* Entry: 1032b85b0; end: 1032b85cf;  */

void FUN_1032b85b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032b85d0; end: 1032b85d7;  */

/* WARNING: Removing unreachable block (ram,0x0001032b760c) */

void FUN_1032b85d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [32];
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  FUN_1032b7620(auStack_50,param_2,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000bb420(auStack_50,&uStack_80);
  uVar4 = 0x112da99a0;
  func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
  puVar2 = PTR___sypN_11034f1a8;
  puVar3 = &uStack_d0;
  func_0x000107c6147c(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x0001000bb420(param_1,auStack_a0);
    puVar3 = &uStack_d0;
    func_0x000107c6147c(puVar3,auStack_a0,puVar2 + 8,PTR___ss11AnyHashableVN_11034e448,6);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000100183ab8(auStack_50);
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      FUN_1032b85d8(&uStack_d0,0x112d603a8,&UNK_10d926900);
    }
    else {
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      uStack_60 = uStack_b0;
      func_0x0001007bbd18(&uStack_80,&uStack_d0);
      func_0x0001000bb420(auStack_50,auStack_a0);
      func_0x000101fd80b4(auStack_a0,&uStack_d0);
      func_0x0001007bbff0(&uStack_80);
      func_0x000100183ab8(auStack_50);
    }
  }
  else {
    uVar4 = *puVar1;
    func_0x000107c61558(uVar4);
    uStack_80 = *puVar1;
    *puVar1 = 0x8000000000000000;
    FUN_1032b8250(uStack_d0,&UNK_1012281f8,0,uVar4,&uStack_80);
    func_0x000107c6142c(uStack_d0);
    func_0x000100183ab8(auStack_50);
    uVar4 = *puVar1;
    *puVar1 = uStack_80;
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1032b85d8; end: 1032b865f;  */

undefined8 FUN_1032b85d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1032b8660; end: 1032b8697;  */

void FUN_1032b8660(long param_1,long param_2)

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



/* Entry: 1032b8698; end: 1032b876f;  */

void FUN_1032b8698(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1032b8770; end: 1032b877b;  */

void FUN_1032b8770(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1032b877c; end: 1032b87c3; -[_TtC18ShakeToReportValdi30ShakePromptValdiViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b877c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52e00;
  func_0x000107c61428(param_1 + _DAT_112f52e00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b87c4; end: 1032b881b; -[_TtC18ShakeToReportValdi30ShakePromptValdiViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b87c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52e00;
  func_0x000107c61428(param_1 + _DAT_112f52e00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b881c; end: 1032b89eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b881c(long param_1,byte param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f52e08;
  *(undefined8 *)(unaff_x20 + _DAT_112f52e08) = 0;
  lVar1 = _DAT_112f52e00;
  func_0x000107c61614(unaff_x20 + _DAT_112f52e00,0);
  if (param_1 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
    FUN_1032b91f4(unaff_x20 + lVar1);
    func_0x000107c61464(unaff_x20);
  }
  else {
    *(long *)(unaff_x20 + _DAT_112f52e10) = param_1;
    *(byte *)(unaff_x20 + _DAT_112f52e18) = param_2 & 1;
    *(byte *)(unaff_x20 + _DAT_112f52e20) = param_3 & 1;
    func_0x000107c61154(auStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  }
  return;
}



/* Entry: 1032b89ec; end: 1032b8a37; -[_TtC18ShakeToReportValdi30ShakePromptValdiViewController initWithRuntime:tweaksEnabled:checkForUpdates:] */

void FUN_1032b89ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x0001032b8904(param_3,param_4,param_5);
  return;
}



/* Entry: 1032b8a38; end: 1032b8aaf; -[_TtC18ShakeToReportValdi30ShakePromptValdiViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b8a38(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f52e08) = 0;
  func_0x000107c61614(param_1 + _DAT_112f52e00,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ShakeToReportValdi/ShakePromptValdiViewController.swift",0x37,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8ab0);
  (*pcVar1)();
}



/* Entry: 1032b8ab0; end: 1032b8ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b8ab0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar2 = PTR_PTR_1126acfd8;
  func_0x000107c610f8(PTR_PTR_1126acfd8);
  func_0x000107c48e9c();
  puVar3 = &UNK_110635aa0;
  func_0x000107c613fc(&UNK_110635aa0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = PTR_PTR_1126acfe0;
  func_0x000107c610f8(PTR_PTR_1126acfe0);
  pcStack_60 = FUN_1032b928c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1032b91a8;
  puStack_68 = &UNK_110635ab8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c(puVar3);
  func_0x000107c47c30(puVar4);
  func_0x000107c60bd0(ppuVar5);
  puVar7 = puStack_58;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar7);
  puVar3 = PTR_PTR_1126acfe8;
  func_0x000107c610f8();
  func_0x000107c49520();
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f52e08);
  *(undefined **)(unaff_x20 + _DAT_112f52e08) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8ee4);
    (*pcVar1)();
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c(lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c5a050(puVar3);
  puVar7 = puVar3;
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  puVar8 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8ee8);
    (*pcVar1)();
  }
  lVar9 = lVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar10 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar9);
  *(undefined **)(puVar7 + 0x20) = puVar10;
  puVar8 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8eec);
    (*pcVar1)();
  }
  lVar9 = lVar6;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar10 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar9);
  *(undefined **)(puVar7 + 0x28) = puVar10;
  puVar8 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar9 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar10 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar9);
    *(undefined **)(puVar7 + 0x30) = puVar10;
    puVar8 = puVar3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = unaff_x20;
      func_0x000107c5ce8c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar11 = puVar8;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar6);
      *(undefined **)(puVar7 + 0x38) = puVar11;
      uVar12 = 0;
      func_0x000100847984(0);
      puVar8 = puVar7;
      func_0x000107c5fc48(puVar7,uVar12);
      func_0x000107c61574(puVar7);
      func_0x000107c3d048(puVar10);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8ef4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8ef0);
  (*pcVar1)();
}



/* Entry: 1032b8ef4; end: 1032b90ff; -[_TtC18ShakeToReportValdi30ShakePromptValdiViewController viewDidLoad] */

void FUN_1032b8ef4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    FUN_1032b8ab0();
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b8fa8);
  (*pcVar1)();
}



/* Entry: 1032b9100; end: 1032b915f; -[_TtC18ShakeToReportValdi30ShakePromptValdiViewController initWithNibName:bundle:] */

void FUN_1032b9100(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportValdi.ShakePromptValdiViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b912c);
  (*pcVar1)();
}



/* Entry: 1032b9160; end: 1032b91a7; -[_TtC18ShakeToReportValdi30ShakePromptValdiViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032b9160(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f52e10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f52e08));
  param_1 = param_1 + _DAT_112f52e00;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032b91a8; end: 1032b91e3;  */

void FUN_1032b91a8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1032b91e4; end: 1032b91f3;  */

undefined1  [16] FUN_1032b91e4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1032b91f4; end: 1032b9217;  */

undefined8 FUN_1032b91f4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032b9218; end: 1032b921b;  */

void FUN_1032b9218(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f52e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba9a00;
  func_0x000107c61520(&UNK_10dba9a00,&UNK_110635a80);
  puRam0000000112f52e28 = puVar1;
  return;
}



/* Entry: 1032b921c; end: 1032b925b;  */

void FUN_1032b921c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f52e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba9a00;
  func_0x000107c61520(&UNK_10dba9a00,&UNK_110635a80);
  puRam0000000112f52e28 = puVar1;
  return;
}



/* Entry: 1032b925c; end: 1032b926b;  */

undefined1  [16] FUN_1032b925c(void)

{
  return ZEXT816(0x110635a80);
}



/* Entry: 1032b926c; end: 1032b928b;  */

void FUN_1032b926c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9fd0);
  return;
}



/* Entry: 1032b928c; end: 1032b92cf;  */

void FUN_1032b928c(undefined4 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110635af0;
  func_0x000107c613fc(&UNK_110635af0,0x1c,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined4 *)(puVar1 + 0x18) = param_1;
  uStack_40 = 0x1032b92b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110635b08;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c();
  func_0x000107c61574(puVar1);
  func_0x000100162d98("ShakePromptValdiViewController.onSelected",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1032b92d0; end: 1032b9313;  */

void FUN_1032b92d0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1032b9314; end: 1032b931b;  */

void FUN_1032b9314(long param_1,long param_2)

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



/* Entry: 1032b931c; end: 1032b9367; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc comment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b931c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f52e60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f52e60))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1032b9368; end: 1032b9377; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b9368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f52e68));
  return;
}



/* Entry: 1032b9378; end: 1032b9387; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc hasScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1032b9378(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f52e70);
}



/* Entry: 1032b9388; end: 1032b9397; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc hasVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1032b9388(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f52e78);
}



/* Entry: 1032b9398; end: 1032b93a7; -[_TtC18ShakeToReportValdi27ShakeToReportSubmitDataObjc topicIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b9398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f52e80));
  return;
}


