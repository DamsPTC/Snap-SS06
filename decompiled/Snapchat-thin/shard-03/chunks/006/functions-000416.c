/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ad16d0; end: 102ad1753;  */

void FUN_102ad16d0(void)

{
  FUN_102ad1754();
  return;
}



/* Entry: 102ad1754; end: 102ad17d7;  */

void FUN_102ad1754(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102ad17d8; end: 102ad1803;  */

void FUN_102ad17d8(void)

{
  FUN_102ad1754();
  return;
}



/* Entry: 102ad1804; end: 102ad1823;  */

void FUN_102ad1804(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102ad1078);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102ad1824; end: 102ad184f;  */

void FUN_102ad1824(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ad1850; end: 102ad1877;  */

void FUN_102ad1850(undefined8 *param_1)

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
  puVar1 = &UNK_110595c88;
  func_0x000107c613fc(&UNK_110595c88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102ac75b0;
  func_0x00010058fa64(FUN_102ac75b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ad1878; end: 102ad1a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102ad1878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_102ad2818();
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
    *(long *)(unaff_x20 + _DAT_112eeb390) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112eeb398) = param_8;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ad1a90);
  (*pcVar2)();
}



/* Entry: 102ad1a90; end: 102ad1aef; -[_TtC23CaptureScopeGraphBridge38CaptureScopeGraphBridgeSaberEntryPoint init] */

void FUN_102ad1a90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.CaptureScopeGraphBridgeSaberEntryPoint",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad1abc);
  (*pcVar1)();
}



/* Entry: 102ad1af0; end: 102ad1b27; -[_TtC23CaptureScopeGraphBridge38CaptureScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad1b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad1b10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad1af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb390));
  return;
}



/* Entry: 102ad1b28; end: 102ad1b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad1b28(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112eeb398),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112eeb390));
  return;
}



/* Entry: 102ad1b50; end: 102ad1b6f;  */

void FUN_102ad1b50(void)

{
  func_0x000107c61168(&PTR_PTR_112885b98);
  return;
}



/* Entry: 102ad1b70; end: 102ad1c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ad1b70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eeb568);
  *(undefined8 *)(unaff_x20 + _DAT_112eeb3c8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb3d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102ad1c0c; end: 102ad1c6b; -[_TtC23CaptureScopeGraphBridge43SCCaptureCameraEmptyServicesSaberEntryPoint init] */

void FUN_102ad1c0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.SCCaptureCameraEmptyServicesSaberEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad1c38);
  (*pcVar1)();
}



/* Entry: 102ad1c6c; end: 102ad1cff; -[_TtC23CaptureScopeGraphBridge43SCCaptureCameraEmptyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad1c6c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eeb3c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb3d0));
  return;
}



/* Entry: 102ad1d00; end: 102ad1d07;  */

undefined8 FUN_102ad1d00(void)

{
  return 0;
}



/* Entry: 102ad1d08; end: 102ad1d27;  */

void FUN_102ad1d08(void)

{
  func_0x000107c61168(&PTR_PTR_112885c60);
  return;
}



/* Entry: 102ad1d28; end: 102ad1dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ad1d28(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eeb570);
  *(undefined8 *)(unaff_x20 + _DAT_112eeb400) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb408) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102ad1dc4; end: 102ad1e23; -[_TtC23CaptureScopeGraphBridge60SCCaptureScopedLensCarouselManagementServicesSaberEntryPoint init] */

void FUN_102ad1dc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.SCCaptureScopedLensCarouselManagementServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad1df0);
  (*pcVar1)();
}



/* Entry: 102ad1e24; end: 102ad1eb7; -[_TtC23CaptureScopeGraphBridge60SCCaptureScopedLensCarouselManagementServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad1e24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eeb400));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb408));
  return;
}



/* Entry: 102ad1eb8; end: 102ad1ebf;  */

undefined8 FUN_102ad1eb8(void)

{
  return 0;
}



/* Entry: 102ad1ec0; end: 102ad1edf;  */

void FUN_102ad1ec0(void)

{
  func_0x000107c61168(&PTR_PTR_112885d28);
  return;
}



/* Entry: 102ad1ee0; end: 102ad1f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ad1ee0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eeb578);
  *(undefined8 *)(unaff_x20 + _DAT_112eeb438) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb440) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102ad1f7c; end: 102ad1fdb; -[_TtC23CaptureScopeGraphBridge55SCCaptureScopedLensCarouselScopeServicesSaberEntryPoint init] */

void FUN_102ad1f7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.SCCaptureScopedLensCarouselScopeServicesSaberEntryPoint"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad1fa8);
  (*pcVar1)();
}



/* Entry: 102ad1fdc; end: 102ad206f; -[_TtC23CaptureScopeGraphBridge55SCCaptureScopedLensCarouselScopeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad1fdc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eeb438));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb440));
  return;
}



/* Entry: 102ad2070; end: 102ad2077;  */

undefined8 FUN_102ad2070(void)

{
  return 0;
}



/* Entry: 102ad2078; end: 102ad2097;  */

void FUN_102ad2078(void)

{
  func_0x000107c61168(&PTR_PTR_112885df0);
  return;
}



/* Entry: 102ad2098; end: 102ad2133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ad2098(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eeb588);
  *(undefined8 *)(unaff_x20 + _DAT_112eeb470) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb478) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102ad2134; end: 102ad2193; -[_TtC23CaptureScopeGraphBridge46SCCaptureWorkflowResultServicesSaberEntryPoint init] */

void FUN_102ad2134(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.SCCaptureWorkflowResultServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad2160);
  (*pcVar1)();
}



/* Entry: 102ad2194; end: 102ad2227; -[_TtC23CaptureScopeGraphBridge46SCCaptureWorkflowResultServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad2194(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eeb470));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb478));
  return;
}



/* Entry: 102ad2228; end: 102ad222f;  */

undefined8 FUN_102ad2228(void)

{
  return 0;
}



/* Entry: 102ad2230; end: 102ad224f;  */

void FUN_102ad2230(void)

{
  func_0x000107c61168(&PTR_PTR_112885eb8);
  return;
}



/* Entry: 102ad2250; end: 102ad22eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ad2250(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eeb598);
  *(undefined8 *)(unaff_x20 + _DAT_112eeb4a8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb4b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102ad22ec; end: 102ad234b; -[_TtC23CaptureScopeGraphBridge42SCLensCameraFeatureServicesSaberEntryPoint init] */

void FUN_102ad22ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.SCLensCameraFeatureServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad2318);
  (*pcVar1)();
}



/* Entry: 102ad234c; end: 102ad23df; -[_TtC23CaptureScopeGraphBridge42SCLensCameraFeatureServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad234c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eeb4a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb4b0));
  return;
}



/* Entry: 102ad23e0; end: 102ad23e7;  */

undefined8 FUN_102ad23e0(void)

{
  return 0;
}



/* Entry: 102ad23e8; end: 102ad2407;  */

void FUN_102ad23e8(void)

{
  func_0x000107c61168(&PTR_PTR_112885f80);
  return;
}



/* Entry: 102ad2408; end: 102ad24a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ad2408(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eeb5a8);
  *(undefined8 *)(unaff_x20 + _DAT_112eeb4e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb4e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102ad24a4; end: 102ad2503; -[_TtC23CaptureScopeGraphBridge49SCLensInfoCardPresentationServicesSaberEntryPoint init] */

void FUN_102ad24a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.SCLensInfoCardPresentationServicesSaberEntryPoint",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad24d0);
  (*pcVar1)();
}



/* Entry: 102ad2504; end: 102ad2597; -[_TtC23CaptureScopeGraphBridge49SCLensInfoCardPresentationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad2504(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eeb4e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb4e8));
  return;
}



/* Entry: 102ad2598; end: 102ad259f;  */

undefined8 FUN_102ad2598(void)

{
  return 0;
}



/* Entry: 102ad25a0; end: 102ad25bf;  */

void FUN_102ad25a0(void)

{
  func_0x000107c61168(&PTR_PTR_112886048);
  return;
}



/* Entry: 102ad25c0; end: 102ad2647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ad25c0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eeb518) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eeb520);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ad2648);
  (*pcVar2)();
}



/* Entry: 102ad2648; end: 102ad272f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ad2648(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eeb518);
  *(undefined **)(unaff_x20 + _DAT_112eeb518) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eeb520);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eeb520))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105965b8;
  func_0x000107c613fc(&UNK_1105965b8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102ad2734,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102ad2730; end: 102ad273b;  */

void FUN_102ad2730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ad273c; end: 102ad279b; -[_TtC23CaptureScopeGraphBridge38SCCaptureScopedServicesSaberEntryPoint init] */

void FUN_102ad273c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.SCCaptureScopedServicesSaberEntryPoint",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad2768);
  (*pcVar1)();
}



/* Entry: 102ad279c; end: 102ad27d3; -[_TtC23CaptureScopeGraphBridge38SCCaptureScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad279c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eeb520));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb518));
  return;
}



/* Entry: 102ad27d4; end: 102ad27d7;  */

void FUN_102ad27d4(void)

{
  return;
}



/* Entry: 102ad27d8; end: 102ad27f7;  */

void FUN_102ad27d8(void)

{
  FUN_102ad2648();
  return;
}



/* Entry: 102ad27f8; end: 102ad2817;  */

void FUN_102ad27f8(void)

{
  func_0x000107c61168(&PTR_PTR_112886110);
  return;
}



/* Entry: 102ad2818; end: 102ad28e7;  */

undefined8 FUN_102ad2818(void)

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
  
  func_0x000107c61428(0x112eeb550,&uStack_40,0x20,0);
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
    FUN_102ad28e8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102ad28e8; end: 102ad2907;  */

void FUN_102ad28e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128861d8);
  return;
}



/* Entry: 102ad2908; end: 102ad2bdb;  */

void FUN_102ad2908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eeb558,&UNK_10db192d8);
  puVar1 = &UNK_110596600;
  func_0x000107c613fc(&UNK_110596600,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_102ad2bdc,puVar1);
  return;
}



/* Entry: 102ad2bdc; end: 102ad2c17;  */

void FUN_102ad2bdc(void)

{
  long unaff_x20;
  
  func_0x000102ad2a3c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102ad2c18; end: 102ad2d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad2c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eeb560) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb568) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb570) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb578) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb580) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb588) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb590) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb598) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb5a0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb5a8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb5b0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb5b8) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad2d40; end: 102ad2d9f; -[_TtC23CaptureScopeGraphBridge31CaptureScopeGraphBridgeServices init] */

void FUN_102ad2d40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopeGraphBridge.CaptureScopeGraphBridgeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad2d6c);
  (*pcVar1)();
}



/* Entry: 102ad2da0; end: 102ad2eb7; -[_TtC23CaptureScopeGraphBridge31CaptureScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad2dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad2ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad2dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad2e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad2e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad2e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad2e40) */
/* WARNING: Removing unreachable block (ram,0x000102ad2e20) */
/* WARNING: Removing unreachable block (ram,0x000102ad2e00) */
/* WARNING: Removing unreachable block (ram,0x000102ad2de0) */
/* WARNING: Removing unreachable block (ram,0x000102ad2dc0) */
/* WARNING: Removing unreachable block (ram,0x000102ad2e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad2da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eeb568));
  return;
}



/* Entry: 102ad2eb8; end: 102ad2ed3;  */

void FUN_102ad2eb8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102ad345c,param_1);
  return;
}



/* Entry: 102ad2ed4; end: 102ad2f13;  */

void FUN_102ad2ed4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102ad3474,0);
  return;
}



/* Entry: 102ad2f14; end: 102ad2f2f;  */

void FUN_102ad2f14(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102ad3460,param_1);
  return;
}



/* Entry: 102ad2f30; end: 102ad2f6f;  */

void FUN_102ad2f30(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102ad3478,0);
  return;
}



/* Entry: 102ad2f70; end: 102ad2f8b;  */

void FUN_102ad2f70(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102ad2f8c,param_1);
  return;
}



/* Entry: 102ad2f8c; end: 102ad2fff;  */

void FUN_102ad2f8c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102ad3000; end: 102ad301b;  */

void FUN_102ad3000(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102ad3464,param_1);
  return;
}



/* Entry: 102ad301c; end: 102ad305b;  */

void FUN_102ad301c(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(0x102ad3484,0);
  return;
}



/* Entry: 102ad305c; end: 102ad3077;  */

void FUN_102ad305c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102ad3468,param_1);
  return;
}



/* Entry: 102ad3078; end: 102ad30f3;  */

void FUN_102ad3078(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(0x102ad3480,0);
  return;
}



/* Entry: 102ad30f4; end: 102ad310f;  */

void FUN_102ad30f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102ad346c,param_1);
  return;
}



/* Entry: 102ad3110; end: 102ad315f;  */

void FUN_102ad3110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102ad3160; end: 102ad3167;  */

undefined8 FUN_102ad3160(void)

{
  return 0x1b;
}



/* Entry: 102ad3168; end: 102ad32df;  */

void FUN_102ad3168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110596628;
  func_0x000107c613fc(&UNK_110596628,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102ad32e0,puVar1);
  return;
}



/* Entry: 102ad32e0; end: 102ad32e7;  */

void FUN_102ad32e0(undefined8 *param_1)

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
  func_0x000107c61428(0x112eeb550,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eeb550,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110596840;
  func_0x000107c613fc(&UNK_110596840,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102ad3454;
  func_0x00010058fa64(0x102ad3454,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ad32e8; end: 102ad3343;  */

void FUN_102ad32e8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eeb550,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112eeb550,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102ad3344; end: 102ad3487;  */

undefined ** FUN_102ad3344(void)

{
  return &PTR_DAT_112f5d088;
}



/* Entry: 102ad3488; end: 102ad34cf; -[SCCaptureScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3488(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb610;
  func_0x000107c61428(param_1 + _DAT_112eeb610,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ad34d0; end: 102ad3527; -[SCCaptureScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad34d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb610;
  func_0x000107c61428(param_1 + _DAT_112eeb610,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ad3528; end: 102ad356f; -[SCCaptureScopeGraphBridgeSaberEntryPoint sCCameraBIPAScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3528(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb618;
  func_0x000107c61428(param_1 + _DAT_112eeb618,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad3570; end: 102ad357b; -[SCCaptureScopeGraphBridgeSaberEntryPoint setSCCameraBIPAScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3570(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb618;
  func_0x000107c61428(param_1 + _DAT_112eeb618,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad357c; end: 102ad35c3; -[SCCaptureScopeGraphBridgeSaberEntryPoint sCCaptureServiceScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad357c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb620;
  func_0x000107c61428(param_1 + _DAT_112eeb620,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad35c4; end: 102ad35cf; -[SCCaptureScopeGraphBridgeSaberEntryPoint setSCCaptureServiceScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad35c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb620;
  func_0x000107c61428(param_1 + _DAT_112eeb620,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad35d0; end: 102ad3617; -[SCCaptureScopeGraphBridgeSaberEntryPoint sCLensCarouselScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad35d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb628;
  func_0x000107c61428(param_1 + _DAT_112eeb628,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad3618; end: 102ad3623; -[SCCaptureScopeGraphBridgeSaberEntryPoint setSCLensCarouselScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3618(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb628;
  func_0x000107c61428(param_1 + _DAT_112eeb628,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad3624; end: 102ad366b; -[SCCaptureScopeGraphBridgeSaberEntryPoint sCLensInfoCardsOnCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3624(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb630;
  func_0x000107c61428(param_1 + _DAT_112eeb630,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad366c; end: 102ad3677; -[SCCaptureScopeGraphBridgeSaberEntryPoint setSCLensInfoCardsOnCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad366c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb630;
  func_0x000107c61428(param_1 + _DAT_112eeb630,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad3678; end: 102ad36bf; -[SCCaptureScopeGraphBridgeSaberEntryPoint sCLensCTAHandlingPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3678(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb638;
  func_0x000107c61428(param_1 + _DAT_112eeb638,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad36c0; end: 102ad36cb; -[SCCaptureScopeGraphBridgeSaberEntryPoint setSCLensCTAHandlingPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad36c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb638;
  func_0x000107c61428(param_1 + _DAT_112eeb638,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad36cc; end: 102ad3713; -[SCCaptureScopeGraphBridgeSaberEntryPoint sCLensOrganicCTAHandlingPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad36cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb640;
  func_0x000107c61428(param_1 + _DAT_112eeb640,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad3714; end: 102ad371f; -[SCCaptureScopeGraphBridgeSaberEntryPoint setSCLensOrganicCTAHandlingPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb640;
  func_0x000107c61428(param_1 + _DAT_112eeb640,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad3720; end: 102ad3767; -[SCCaptureScopeGraphBridgeSaberEntryPoint captureScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3720(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eeb648;
  func_0x000107c61428(param_1 + _DAT_112eeb648,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ad3768; end: 102ad3773; -[SCCaptureScopeGraphBridgeSaberEntryPoint setCaptureScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad3768(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eeb648;
  func_0x000107c61428(param_1 + _DAT_112eeb648,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ad3774; end: 102ad37d3;  */

void FUN_102ad3774(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102ad37d4; end: 102ad3c6b;  */

/* WARNING: Possible PIC construction at 0x000102ad3aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad3b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad3bb4) */
/* WARNING: Removing unreachable block (ram,0x000102ad3ba4) */
/* WARNING: Removing unreachable block (ram,0x000102ad3bd4) */
/* WARNING: Removing unreachable block (ram,0x000102ad3bc4) */
/* WARNING: Removing unreachable block (ram,0x000102ad3c04) */
/* WARNING: Removing unreachable block (ram,0x000102ad3bf4) */
/* WARNING: Removing unreachable block (ram,0x000102ad3c44) */
/* WARNING: Removing unreachable block (ram,0x000102ad3c34) */
/* WARNING: Removing unreachable block (ram,0x000102ad3c24) */
/* WARNING: Removing unreachable block (ram,0x000102ad3b30) */
/* WARNING: Removing unreachable block (ram,0x000102ad3b20) */
/* WARNING: Removing unreachable block (ram,0x000102ad3b10) */
/* WARNING: Removing unreachable block (ram,0x000102ad3b00) */
/* WARNING: Removing unreachable block (ram,0x000102ad3adc) */
/* WARNING: Removing unreachable block (ram,0x000102ad3acc) */
/* WARNING: Removing unreachable block (ram,0x000102ad3abc) */
/* WARNING: Removing unreachable block (ram,0x000102ad3aac) */
/* WARNING: Removing unreachable block (ram,0x000102ad3b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad37d4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50b1c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50b60();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c50ea0();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c50ee4();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c50e80();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c50ef8();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar3);
              lVar3 = lVar4;
            }
            else {
              func_0x000107c3f5d8();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar3);
                lVar3 = lVar4;
              }
              else {
                lVar6 = 0;
                FUN_102ad1b50();
                lVar4 = lVar6;
                func_0x000107c610f8();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar5 = lVar3;
                FUN_102ad2818();
                if (lVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ad3c6c);
                  (*pcVar2)();
                }
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                func_0x000100083b20(&uStack_68);
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uStack_68);
                *(long *)(lVar4 + _DAT_112eeb390) = lVar5;
                *(long *)(lVar4 + _DAT_112eeb398) = unaff_x20;
                lStack_80 = lVar4;
                lStack_78 = lVar6;
                func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102ad3c6c; end: 102ad3c93; -[SCCaptureScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102ad3c6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ad37d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ad3c94; end: 102ad3cd7; -[SCCaptureScopeGraphBridgeSaberEntryPoint end] */

void FUN_102ad3c94(undefined8 param_1)

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



/* Entry: 102ad3cd8; end: 102ad40ef;  */

void FUN_102ad3cd8(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0f8a0b0)) ||
       (func_0x000107c605b8(0xd000000000000018,0x800000010f075f50,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c580c4();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f16ed0)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010f0e9130,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58108();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef0f6dbf0)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010f092410,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58448();
        }
        else {
          if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0f16eb0)) {
            uVar2 = 0xd000000000000023;
            func_0x000107c605b8(0xd000000000000023,0x800000010f0e9150,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0f16e80)) {
                uVar2 = 0xd000000000000023;
                func_0x000107c605b8(0xd000000000000023,0x800000010f0e9180,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef0f16e50)) ||
                     (func_0x000107c605b8(0xd00000000000002a,0x800000010f0e91b0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c584a0();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0f16e20)) &&
                       (func_0x000107c605b8(0xd000000000000026,0x800000010f0e91e0,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "CaptureScopeGraphBridge/SCCaptureScopeGraphBridgeSaberEntryPoint.swift"
                                          ,0x46,2,0x92,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ad40f0);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c531e8();
                  }
                  goto LAB_102ad3d64;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58428();
              goto LAB_102ad3d64;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5848c();
        }
      }
    }
  }
LAB_102ad3d64:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ad40f0; end: 102ad419b; -[SCCaptureScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102ad40f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ad3cd8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ad419c; end: 102ad424f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad419c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112eeb610,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eeb618) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb620) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb628) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb630) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb638) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb640) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb648) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eeb650) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ad4250; end: 102ad426f; -[SCCaptureScopeGraphBridgeSaberEntryPoint init] */

void FUN_102ad4250(void)

{
  FUN_102ad419c();
  return;
}



/* Entry: 102ad4270; end: 102ad42a3;  */

void FUN_102ad4270(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ad42a4; end: 102ad434b; -[SCCaptureScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ad42d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad42f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad4310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ad4330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ad4314) */
/* WARNING: Removing unreachable block (ram,0x000102ad42f4) */
/* WARNING: Removing unreachable block (ram,0x000102ad42d4) */
/* WARNING: Removing unreachable block (ram,0x000102ad4334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ad42a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eeb610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eeb618));
  return;
}



/* Entry: 102ad434c; end: 102ad436b;  */

void FUN_102ad434c(void)

{
  func_0x000107c61168(&PTR_PTR_1128862f0);
  return;
}


