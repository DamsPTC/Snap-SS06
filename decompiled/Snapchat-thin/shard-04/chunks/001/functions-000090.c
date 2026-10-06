/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031049f8; end: 103104a9f;  */

void FUN_1031049f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060f428;
  func_0x000107c613fc(&UNK_11060f428,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103104c28;
  func_0x0001000823a8(FUN_103104c28,puVar1);
  func_0x000100082720("SCLensTalkCarouselScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103104aa0; end: 103104aa7;  */

void FUN_103104aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11060f428;
  func_0x000107c613fc(&UNK_11060f428,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103104c28;
  func_0x0001000823a8(FUN_103104c28,puVar3);
  func_0x000100082720("SCLensTalkCarouselScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103104aa8; end: 103104b2b;  */

void FUN_103104aa8(void)

{
  FUN_103104b2c();
  return;
}



/* Entry: 103104b2c; end: 103104baf;  */

void FUN_103104b2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 103104bb0; end: 103104bdb;  */

void FUN_103104bb0(void)

{
  FUN_103104b2c();
  return;
}



/* Entry: 103104bdc; end: 103104bfb;  */

void FUN_103104bdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x103103ab0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103104bfc; end: 103104c27;  */

void FUN_103104bfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103104c28; end: 103104ce7;  */

void FUN_103104c28(undefined8 *param_1)

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
  puVar1 = &UNK_11060df50;
  func_0x000107c613fc(&UNK_11060df50,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030f7938;
  func_0x00010058fa64(FUN_1030f7938,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103104ce8; end: 103104e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103104ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_103106e00();
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
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112f3f250) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f3f258) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103104e44);
  (*pcVar2)();
}



/* Entry: 103104e44; end: 103104ea3; -[_TtC32LensTalkCarouselScopeGraphBridge47LensTalkCarouselScopeGraphBridgeSaberEntryPoint init] */

void FUN_103104e44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.LensTalkCarouselScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103104e70);
  (*pcVar1)();
}



/* Entry: 103104ea4; end: 103104edb; -[_TtC32LensTalkCarouselScopeGraphBridge47LensTalkCarouselScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103104ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103104ec4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103104ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3f250));
  return;
}



/* Entry: 103104edc; end: 103104f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103104edc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f3f258),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f3f250));
  return;
}



/* Entry: 103104f04; end: 103104f23;  */

void FUN_103104f04(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7c18);
  return;
}



/* Entry: 103104f24; end: 103104fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103104f24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f401e0);
  *(undefined8 *)(unaff_x20 + _DAT_112f3f288) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3f290) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103104fc0; end: 10310501f; -[_TtC32LensTalkCarouselScopeGraphBridge63SCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint init] */

void FUN_103104fc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.SCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103104fec);
  (*pcVar1)();
}



/* Entry: 103105020; end: 1031050b3; -[_TtC32LensTalkCarouselScopeGraphBridge63SCLensTalkCarouselScopedARBarIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103105020(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f3f288));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3f290));
  return;
}



/* Entry: 1031050b4; end: 1031050bb;  */

undefined8 FUN_1031050b4(void)

{
  return 0;
}



/* Entry: 1031050bc; end: 1031050db;  */

void FUN_1031050bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7ce0);
  return;
}



/* Entry: 1031050dc; end: 103105177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031050dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f401e8);
  *(undefined8 *)(unaff_x20 + _DAT_112f3f2c0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3f2c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103105178; end: 1031051d7; -[_TtC32LensTalkCarouselScopeGraphBridge52SCLensTalkCarouselScopedARBarServicesSaberEntryPoint init] */

void FUN_103105178(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.SCLensTalkCarouselScopedARBarServicesSaberEntryPoint"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031051a4);
  (*pcVar1)();
}



/* Entry: 1031051d8; end: 10310526b; -[_TtC32LensTalkCarouselScopeGraphBridge52SCLensTalkCarouselScopedARBarServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031051d8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f3f2c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3f2c8));
  return;
}



/* Entry: 10310526c; end: 103105273;  */

undefined8 FUN_10310526c(void)

{
  return 0;
}



/* Entry: 103105274; end: 103105293;  */

void FUN_103105274(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7da8);
  return;
}



/* Entry: 103105294; end: 10310532f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103105294(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f401f8);
  *(undefined8 *)(unaff_x20 + _DAT_112f3f2f8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3f300) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103105330; end: 10310538f; -[_TtC32LensTalkCarouselScopeGraphBridge62SCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint init] */

void FUN_103105330(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.SCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10310535c);
  (*pcVar1)();
}



/* Entry: 103105390; end: 103105423; -[_TtC32LensTalkCarouselScopeGraphBridge62SCLensTalkCarouselScopedLensCTAHandlingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103105390(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f3f2f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3f300));
  return;
}



/* Entry: 103105424; end: 10310542b;  */

undefined8 FUN_103105424(void)

{
  return 0;
}



/* Entry: 10310542c; end: 10310544b;  */

void FUN_10310542c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7e70);
  return;
}



/* Entry: 10310544c; end: 1031054e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10310544c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f40238);
  *(undefined8 *)(unaff_x20 + _DAT_112f3f330) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3f338) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1031054e8; end: 103105547; -[_TtC32LensTalkCarouselScopeGraphBridge69SCLensTalkCarouselScopedLensCarouselManagementServicesSaberEntryPoint init] */

void FUN_1031054e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.SCLensTalkCarouselScopedLensCarouselManagementServicesSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103105514);
  (*pcVar1)();
}



/* Entry: 103105548; end: 1031055db; -[_TtC32LensTalkCarouselScopeGraphBridge69SCLensTalkCarouselScopedLensCarouselManagementServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103105548(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f3f330));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3f338));
  return;
}



/* Entry: 1031055dc; end: 1031055e3;  */

undefined8 FUN_1031055dc(void)

{
  return 0;
}



/* Entry: 1031055e4; end: 103105603;  */

void FUN_1031055e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7f38);
  return;
}



/* Entry: 103105604; end: 10310569f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103105604(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f40278);
  *(undefined8 *)(unaff_x20 + _DAT_112f3f368) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3f370) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1031056a0; end: 1031056ff; -[_TtC32LensTalkCarouselScopeGraphBridge71SCLensTalkCarouselScopedMiniCameraTrayNavigationServicesSaberEntryPoint init] */

void FUN_1031056a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTalkCarouselScopeGraphBridge.SCLensTalkCarouselScopedMiniCameraTrayNavigationServicesSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031056cc);
  (*pcVar1)();
}



/* Entry: 103105700; end: 103105793; -[_TtC32LensTalkCarouselScopeGraphBridge71SCLensTalkCarouselScopedMiniCameraTrayNavigationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103105700(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f3f368));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3f370));
  return;
}



/* Entry: 103105794; end: 10310579b;  */

undefined8 FUN_103105794(void)

{
  return 0;
}



/* Entry: 10310579c; end: 1031057bb;  */

void FUN_10310579c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b8000);
  return;
}



/* Entry: 1031057bc; end: 10310581f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031057bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f401c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103105820; end: 103105827;  */

void FUN_103105820(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103105828; end: 1031058c7;  */

void FUN_103105828(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031058c8; end: 1031058e7;  */

void FUN_1031058c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1031058e8; end: 10310594b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031058e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f401d0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10310594c; end: 103105953;  */

void FUN_10310594c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103105954; end: 1031059f3;  */

void FUN_103105954(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031059f4; end: 103105a13;  */

void FUN_1031059f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103105a14; end: 103105a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103105a14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f401f0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103105a78; end: 103105a7f;  */

void FUN_103105a78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103105a80; end: 103105b1f;  */

void FUN_103105a80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103105b20; end: 103105b3f;  */

void FUN_103105b20(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103105b40; end: 103105ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103105b40(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40200);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103105ba4; end: 103105bab;  */

void FUN_103105ba4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103105bac; end: 103105c4b;  */

void FUN_103105bac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103105c4c; end: 103105c6b;  */

void FUN_103105c4c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103105c6c; end: 103105ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103105c6c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40208);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103105cd0; end: 103105cd7;  */

void FUN_103105cd0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103105cd8; end: 103105d77;  */

void FUN_103105cd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103105d78; end: 103105d97;  */

void FUN_103105d78(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103105d98; end: 103105dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103105d98(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40210);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103105dfc; end: 103105e03;  */

void FUN_103105dfc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103105e04; end: 103105ea3;  */

void FUN_103105e04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103105ea4; end: 103105ec3;  */

void FUN_103105ea4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103105ec4; end: 103105f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103105ec4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40218);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103105f28; end: 103105f2f;  */

void FUN_103105f28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103105f30; end: 103105fcf;  */

void FUN_103105f30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103105fd0; end: 103105fef;  */

void FUN_103105fd0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103105ff0; end: 103106053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103105ff0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40220);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103106054; end: 10310605b;  */

void FUN_103106054(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10310605c; end: 1031060fb;  */

void FUN_10310605c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031060fc; end: 10310611b;  */

void FUN_1031060fc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10310611c; end: 10310617f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10310611c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40228);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103106180; end: 103106187;  */

void FUN_103106180(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103106188; end: 103106227;  */

void FUN_103106188(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103106228; end: 103106247;  */

void FUN_103106228(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103106248; end: 1031062ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103106248(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40230);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1031062ac; end: 1031062b3;  */

void FUN_1031062ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1031062b4; end: 103106353;  */

void FUN_1031062b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103106354; end: 103106373;  */

void FUN_103106354(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103106374; end: 1031063d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103106374(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40240);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1031063d8; end: 1031063df;  */

void FUN_1031063d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1031063e0; end: 10310647f;  */

void FUN_1031063e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103106480; end: 10310649f;  */

void FUN_103106480(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1031064a0; end: 103106503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031064a0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40248);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103106504; end: 10310650b;  */

void FUN_103106504(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10310650c; end: 1031065ab;  */

void FUN_10310650c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031065ac; end: 1031065cb;  */

void FUN_1031065ac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1031065cc; end: 10310662f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031065cc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40250);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103106630; end: 103106637;  */

void FUN_103106630(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103106638; end: 1031066d7;  */

void FUN_103106638(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031066d8; end: 1031066f7;  */

void FUN_1031066d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1031066f8; end: 10310675b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031066f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40258);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10310675c; end: 103106763;  */

void FUN_10310675c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103106764; end: 103106803;  */

void FUN_103106764(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103106804; end: 103106823;  */

void FUN_103106804(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103106824; end: 103106887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103106824(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40260);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103106888; end: 10310688f;  */

void FUN_103106888(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103106890; end: 10310692f;  */

void FUN_103106890(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103106930; end: 10310694f;  */

void FUN_103106930(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103106950; end: 1031069b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103106950(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f40268);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1031069b4; end: 1031069bb;  */

void FUN_1031069b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


