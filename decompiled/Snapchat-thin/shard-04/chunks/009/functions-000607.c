/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039d6000; end: 1039d602f;  */

undefined8 FUN_1039d6000(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  func_0x00010488b298();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1039d6030; end: 1039d60b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039d6030(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa2650();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fc7278) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fc7280) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d60b8);
  (*pcVar1)();
}



/* Entry: 1039d60b8; end: 1039d6117; -[_TtC37LensActiveUserSessionScopeGraphBridge52LensActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039d60b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensActiveUserSessionScopeGraphBridge.LensActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d60e4);
  (*pcVar1)();
}



/* Entry: 1039d6118; end: 1039d614f; -[_TtC37LensActiveUserSessionScopeGraphBridge52LensActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039d6134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039d6138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d6118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc7278));
  return;
}



/* Entry: 1039d6150; end: 1039d6177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d6150(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fc7280),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fc7278));
  return;
}



/* Entry: 1039d6178; end: 1039d6213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039d6178(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fc7ec0);
  *(undefined8 *)(unaff_x20 + _DAT_112fc72b0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc72b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039d6214; end: 1039d6273; -[_TtC37LensActiveUserSessionScopeGraphBridge63SCSRLensEffectPluginCameraLifecycleProxyServicesSaberEntryPoint init] */

void FUN_1039d6214(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensActiveUserSessionScopeGraphBridge.SCSRLensEffectPluginCameraLifecycleProxyServicesSaberEntryPoint"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d6240);
  (*pcVar1)();
}



/* Entry: 1039d6274; end: 1039d6307; -[_TtC37LensActiveUserSessionScopeGraphBridge63SCSRLensEffectPluginCameraLifecycleProxyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d6274(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fc72b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc72b8));
  return;
}



/* Entry: 1039d6308; end: 1039d630f;  */

undefined8 FUN_1039d6308(void)

{
  return 0;
}



/* Entry: 1039d6310; end: 1039d6373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6310(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e58);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6374; end: 1039d637b;  */

void FUN_1039d6374(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d637c; end: 1039d641b;  */

void FUN_1039d637c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d641c; end: 1039d643b;  */

void FUN_1039d641c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d643c; end: 1039d649f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d643c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d64a0; end: 1039d64a7;  */

void FUN_1039d64a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d64a8; end: 1039d6547;  */

void FUN_1039d64a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d6548; end: 1039d6567;  */

void FUN_1039d6548(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6568; end: 1039d65cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6568(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d65cc; end: 1039d65d3;  */

void FUN_1039d65cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d65d4; end: 1039d6673;  */

void FUN_1039d65d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d6674; end: 1039d6693;  */

void FUN_1039d6674(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6694; end: 1039d66f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6694(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d66f8; end: 1039d66ff;  */

void FUN_1039d66f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6700; end: 1039d679f;  */

void FUN_1039d6700(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d67a0; end: 1039d67bf;  */

void FUN_1039d67a0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d67c0; end: 1039d6823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d67c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6824; end: 1039d682b;  */

void FUN_1039d6824(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d682c; end: 1039d68cb;  */

void FUN_1039d682c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d68cc; end: 1039d68eb;  */

void FUN_1039d68cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d68ec; end: 1039d694f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d68ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e80);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6950; end: 1039d6957;  */

void FUN_1039d6950(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6958; end: 1039d69f7;  */

void FUN_1039d6958(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d69f8; end: 1039d6a17;  */

void FUN_1039d69f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6a18; end: 1039d6a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6a18(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6a7c; end: 1039d6a83;  */

void FUN_1039d6a7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6a84; end: 1039d6b23;  */

void FUN_1039d6a84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d6b24; end: 1039d6b43;  */

void FUN_1039d6b24(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6b44; end: 1039d6ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6b44(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e90);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6ba8; end: 1039d6baf;  */

void FUN_1039d6ba8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6bb0; end: 1039d6c4f;  */

void FUN_1039d6bb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d6c50; end: 1039d6c6f;  */

void FUN_1039d6c50(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6c70; end: 1039d6cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6c70(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7e98);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6cd4; end: 1039d6cdb;  */

void FUN_1039d6cd4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6cdc; end: 1039d6cff;  */

void FUN_1039d6cdc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d6d00; end: 1039d6d1f;  */

void FUN_1039d6d00(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6d20; end: 1039d6d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6d20(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7ea0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6d84; end: 1039d6d8b;  */

void FUN_1039d6d84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6d8c; end: 1039d6e2b;  */

void FUN_1039d6d8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d6e2c; end: 1039d6e4b;  */

void FUN_1039d6e2c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6e4c; end: 1039d6eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6e4c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7ea8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6eb0; end: 1039d6eb7;  */

void FUN_1039d6eb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6eb8; end: 1039d6f57;  */

void FUN_1039d6eb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d6f58; end: 1039d6f77;  */

void FUN_1039d6f58(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d6f78; end: 1039d6fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d6f78(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7eb0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d6fdc; end: 1039d6fe3;  */

void FUN_1039d6fdc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d6fe4; end: 1039d7083;  */

void FUN_1039d6fe4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d7084; end: 1039d70a3;  */

void FUN_1039d7084(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d70a4; end: 1039d7107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d70a4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7eb8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d7108; end: 1039d710f;  */

void FUN_1039d7108(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d7110; end: 1039d71af;  */

void FUN_1039d7110(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d71b0; end: 1039d71cf;  */

void FUN_1039d71b0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d71d0; end: 1039d7233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039d71d0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc7ec8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039d7234; end: 1039d723b;  */

void FUN_1039d7234(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039d723c; end: 1039d72db;  */

void FUN_1039d723c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039d72dc; end: 1039d72fb;  */

void FUN_1039d72dc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039d72fc; end: 1039d7463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d72fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e68) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e70) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e78) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e80) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e88) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e90) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7e98) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7ea0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7ea8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7eb0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7eb8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7ec0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112fc7ec8) = param_15;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039d7464; end: 1039d74c3; -[_TtC37LensActiveUserSessionScopeGraphBridge45LensActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039d7464(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensActiveUserSessionScopeGraphBridge.LensActiveUserSessionScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d7490);
  (*pcVar1)();
}



/* Entry: 1039d74c4; end: 1039d7627; -[_TtC37LensActiveUserSessionScopeGraphBridge45LensActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039d74e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039d7500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039d7520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039d7540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039d7560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039d7580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039d75a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039d7584) */
/* WARNING: Removing unreachable block (ram,0x0001039d7564) */
/* WARNING: Removing unreachable block (ram,0x0001039d7544) */
/* WARNING: Removing unreachable block (ram,0x0001039d7524) */
/* WARNING: Removing unreachable block (ram,0x0001039d7504) */
/* WARNING: Removing unreachable block (ram,0x0001039d74e4) */
/* WARNING: Removing unreachable block (ram,0x0001039d75a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d74c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc7ec0));
  return;
}



/* Entry: 1039d7628; end: 1039d765f;  */

undefined1  [16] FUN_1039d7628(void)

{
  return ZEXT816(0x1106ba040);
}



/* Entry: 1039d7660; end: 1039d76a3; -[SCLensActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039d7660(undefined8 param_1)

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



/* Entry: 1039d76a4; end: 1039d76d7;  */

void FUN_1039d76a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039d76d8; end: 1039d771f; -[SCLensActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039d7704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039d7708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d76d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc7f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc7f28));
  return;
}



/* Entry: 1039d7720; end: 1039d773f;  */

void FUN_1039d7720(void)

{
  func_0x000107c61168(&PTR_PTR_112912800);
  return;
}



/* Entry: 1039d7740; end: 1039d7783; -[SCSCSRLensEffectPluginCameraLifecycleProxyServicesSaberEntryPoint end] */

void FUN_1039d7740(undefined8 param_1)

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



/* Entry: 1039d7784; end: 1039d77b7;  */

void FUN_1039d7784(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039d77b8; end: 1039d780f; -[SCSCSRLensEffectPluginCameraLifecycleProxyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039d77f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039d77f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d77b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc7f60);
  func_0x000107c61610(param_1 + _DAT_112fc7f68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc7f70));
  return;
}



/* Entry: 1039d7810; end: 1039d782f;  */

void FUN_1039d7810(void)

{
  func_0x000107c61168(&PTR_PTR_1129128c8);
  return;
}



/* Entry: 1039d7830; end: 1039d783b; -[SCExternalMusicFetchServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7830(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc7fa8;
  func_0x000107c61428(param_1 + _DAT_112fc7fa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d783c; end: 1039d7847; -[SCExternalMusicFetchServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d783c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc7fa8;
  func_0x000107c61428(param_1 + _DAT_112fc7fa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d7848; end: 1039d7853; -[SCExternalMusicFetchServicesSaberServiceProvider lensActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc7fb0;
  func_0x000107c61428(param_1 + _DAT_112fc7fb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d7854; end: 1039d7897;  */

void FUN_1039d7854(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039d7898; end: 1039d78a3; -[SCExternalMusicFetchServicesSaberServiceProvider setLensActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc7fb0;
  func_0x000107c61428(param_1 + _DAT_112fc7fb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d78a4; end: 1039d78f7;  */

void FUN_1039d78a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d78f8; end: 1039d7b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039d78f8(void)

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
    func_0x000107c4addc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039d63a0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc7e58);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc7fb8);
      *(long *)(unaff_x20 + _DAT_112fc7fb8) = lVar4;
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
                      "LensActiveUserSessionScopeGraphBridge/SCExternalMusicFetchServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d7a24);
  (*pcVar1)();
}



/* Entry: 1039d7b0c; end: 1039d7b3f; -[SCExternalMusicFetchServicesSaberServiceProvider provide] */

void FUN_1039d7b0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039d78f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039d7b40; end: 1039d7b73; -[SCExternalMusicFetchServicesSaberServiceProvider __safeProvide] */

void FUN_1039d7b40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039d7a24();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039d7b74; end: 1039d7bb7; -[SCExternalMusicFetchServicesSaberServiceProvider end] */

void FUN_1039d7b74(undefined8 param_1)

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



/* Entry: 1039d7bb8; end: 1039d7d4f;  */

void FUN_1039d7bb8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e78950)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1876b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensActiveUserSessionScopeGraphBridge/SCExternalMusicFetchServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d7d50);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55bd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039d7d50; end: 1039d7dfb; -[SCExternalMusicFetchServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039d7d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039d7bb8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039d7dfc; end: 1039d7e6f; -[SCExternalMusicFetchServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7dfc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc7fa8,0);
  func_0x000107c61614(param_1 + _DAT_112fc7fb0,0);
  *(undefined8 *)(param_1 + _DAT_112fc7fb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039d7e70; end: 1039d7ea3;  */

void FUN_1039d7e70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039d7ea4; end: 1039d7eeb; -[SCExternalMusicFetchServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7ea4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc7fa8);
  func_0x000107c61610(param_1 + _DAT_112fc7fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc7fb8));
  return;
}



/* Entry: 1039d7eec; end: 1039d7f0b;  */

void FUN_1039d7eec(void)

{
  func_0x000107c61168(&PTR_PTR_112fc8000);
  return;
}



/* Entry: 1039d7f0c; end: 1039d7f17; -[SCGamesRPCServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7f0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc8068;
  func_0x000107c61428(param_1 + _DAT_112fc8068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d7f18; end: 1039d7f23; -[SCGamesRPCServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc8068;
  func_0x000107c61428(param_1 + _DAT_112fc8068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d7f24; end: 1039d7f2f; -[SCGamesRPCServicesSaberServiceProvider lensActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7f24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc8070;
  func_0x000107c61428(param_1 + _DAT_112fc8070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039d7f30; end: 1039d7f73;  */

void FUN_1039d7f30(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039d7f74; end: 1039d7f7f; -[SCGamesRPCServicesSaberServiceProvider setLensActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039d7f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc8070;
  func_0x000107c61428(param_1 + _DAT_112fc8070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d7f80; end: 1039d7fd3;  */

void FUN_1039d7f80(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039d7fd4; end: 1039d81e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039d7fd4(void)

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
    func_0x000107c4addc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039d64cc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc7e60);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc8078);
      *(long *)(unaff_x20 + _DAT_112fc8078) = lVar4;
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
                      "LensActiveUserSessionScopeGraphBridge/SCGamesRPCServicesSaberServiceProvider.swift"
                      ,0x52,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039d8100);
  (*pcVar1)();
}


