/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a08994; end: 102a08bfb;  */

void FUN_102a08994(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11059b4a8;
  ppuVar4 = &PTR_DAT_112eef9b8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110586738;
  func_0x000107c613fc(&UNK_110586738,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112edb6e0;
  func_0x0001000285a8(0x112edb6e0,&UNK_10db097b8);
  func_0x0001000a6ee8(&UNK_110586948,"CaptureServiceScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_102a08bfc,puVar2,uVar3,&UNK_110586948,&PTR_DAT_112edb770);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110586668,"SCCaptureServiceEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_102a08c3c,param_4,uVar3,&UNK_110586668,&PTR_DAT_112edb518);
  func_0x000107c61574(param_4);
  puVar2 = &UNK_110586760;
  func_0x000107c613fc(&UNK_110586760,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110586460,"SCCaptureServiceScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_102a08d10,puVar2,uVar3,&UNK_110586460,&PTR_DAT_112edb488);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105866e8,
                      "SCLensSnapCaptureLoggingWorkflowEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_102a08d9c,param_6,uVar3,&UNK_1105866e8,&PTR_DAT_112edb608);
  func_0x000107c61574(param_6);
  uVar3 = 0x112edb6e8;
  func_0x0001000285a8(0x112edb6e8,&UNK_10db097c0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCCaptureServiceScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102a08bfc; end: 102a08c3b;  */

void FUN_102a08bfc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102a093a0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CaptureServiceScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a08c3c; end: 102a08c67;  */

void FUN_102a08c3c(void)

{
  FUN_102a08d18();
  return;
}



/* Entry: 102a08c68; end: 102a08d0f;  */

void FUN_102a08c68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110586788;
  func_0x000107c613fc(&UNK_110586788,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102a08dfc;
  func_0x0001000823a8(FUN_102a08dfc,puVar1);
  func_0x000100082720("SCCaptureServiceScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102a08d10; end: 102a08d17;  */

void FUN_102a08d10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110586788;
  func_0x000107c613fc(&UNK_110586788,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102a08dfc;
  func_0x0001000823a8(FUN_102a08dfc,puVar3);
  func_0x000100082720("SCCaptureServiceScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102a08d18; end: 102a08d9b;  */

void FUN_102a08d18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102a08d9c; end: 102a08dc7;  */

void FUN_102a08d9c(void)

{
  FUN_102a08d18();
  return;
}



/* Entry: 102a08dc8; end: 102a08dcf;  */

void FUN_102a08dc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102a08960);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102a08dd0; end: 102a08dfb;  */

void FUN_102a08dd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a08dfc; end: 102a08e0b;  */

void FUN_102a08dfc(undefined8 *param_1)

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
  puVar1 = &UNK_1105864e8;
  func_0x000107c613fc(&UNK_1105864e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102a07808;
  func_0x00010058fa64(FUN_102a07808,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102a08e0c; end: 102a08e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a08e0c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102a091cc();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112edb6f0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112edb6f8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a08e94);
  (*pcVar1)();
}



/* Entry: 102a08e94; end: 102a08ef3; -[_TtC30CaptureServiceScopeGraphBridge45CaptureServiceScopeGraphBridgeSaberEntryPoint init] */

void FUN_102a08e94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureServiceScopeGraphBridge.CaptureServiceScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a08ec0);
  (*pcVar1)();
}



/* Entry: 102a08ef4; end: 102a08f2b; -[_TtC30CaptureServiceScopeGraphBridge45CaptureServiceScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a08f10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a08f14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a08ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb6f0));
  return;
}



/* Entry: 102a08f2c; end: 102a08f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a08f2c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112edb6f8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112edb6f0));
  return;
}



/* Entry: 102a08f54; end: 102a08f73;  */

void FUN_102a08f54(void)

{
  func_0x000107c61168(&PTR_PTR_11287cd98);
  return;
}



/* Entry: 102a08f74; end: 102a08ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a08f74(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112edb728) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112edb730);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a08ffc);
  (*pcVar2)();
}



/* Entry: 102a08ffc; end: 102a090e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102a08ffc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112edb728);
  *(undefined **)(unaff_x20 + _DAT_112edb728) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112edb730);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112edb730))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105868a8;
  func_0x000107c613fc(&UNK_1105868a8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102a090e8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102a090e4; end: 102a090ef;  */

void FUN_102a090e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102a090f0; end: 102a0914f; -[_TtC30CaptureServiceScopeGraphBridge45SCCaptureServiceScopedServicesSaberEntryPoint init] */

void FUN_102a090f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureServiceScopeGraphBridge.SCCaptureServiceScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0911c);
  (*pcVar1)();
}



/* Entry: 102a09150; end: 102a09187; -[_TtC30CaptureServiceScopeGraphBridge45SCCaptureServiceScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09150(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112edb730));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb728));
  return;
}



/* Entry: 102a09188; end: 102a0918b;  */

void FUN_102a09188(void)

{
  return;
}



/* Entry: 102a0918c; end: 102a091ab;  */

void FUN_102a0918c(void)

{
  FUN_102a08ffc();
  return;
}



/* Entry: 102a091ac; end: 102a091cb;  */

void FUN_102a091ac(void)

{
  func_0x000107c61168(&PTR_PTR_11287ce60);
  return;
}



/* Entry: 102a091cc; end: 102a0929b;  */

undefined8 FUN_102a091cc(void)

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
  
  func_0x000107c61428(0x112edb760,&uStack_40,0x20,0);
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
    FUN_102a0929c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102a0929c; end: 102a092bb;  */

void FUN_102a0929c(void)

{
  func_0x000107c61168(&PTR_PTR_11287cf28);
  return;
}



/* Entry: 102a092bc; end: 102a09327;  */

void FUN_102a092bc(void)

{
  func_0x0001000285a8(0x112edb768,&UNK_10db09878);
  func_0x0001000823a8(0x102a092fc,0);
  return;
}



/* Entry: 102a09328; end: 102a09363; -[_TtC30CaptureServiceScopeGraphBridge38CaptureServiceScopeGraphBridgeServices init] */

void FUN_102a09328(undefined8 param_1)

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



/* Entry: 102a09364; end: 102a09397;  */

void FUN_102a09364(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a09398; end: 102a0939f;  */

undefined8 FUN_102a09398(void)

{
  return 0x1b;
}



/* Entry: 102a093a0; end: 102a09517;  */

void FUN_102a093a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105868f0;
  func_0x000107c613fc(&UNK_1105868f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102a09518,puVar1);
  return;
}



/* Entry: 102a09518; end: 102a0951f;  */

void FUN_102a09518(undefined8 *param_1)

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
  func_0x000107c61428(0x112edb760,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112edb760,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110586988;
  func_0x000107c613fc(&UNK_110586988,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102a095cc;
  func_0x00010058fa64(0x102a095cc,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102a09520; end: 102a0957b;  */

void FUN_102a09520(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112edb760,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112edb760,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102a0957c; end: 102a095d3;  */

undefined ** FUN_102a0957c(void)

{
  return &PTR_DAT_112eef9b8;
}



/* Entry: 102a095d4; end: 102a0961b; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a095d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edb7c0;
  func_0x000107c61428(param_1 + _DAT_112edb7c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a0961c; end: 102a09673; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0961c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edb7c0;
  func_0x000107c61428(param_1 + _DAT_112edb7c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a09674; end: 102a096bb; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint captureServiceScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09674(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edb7c8;
  func_0x000107c61428(param_1 + _DAT_112edb7c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102a096bc; end: 102a0971f; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint setCaptureServiceScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a096bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edb7c8;
  func_0x000107c61428(param_1 + _DAT_112edb7c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102a09720; end: 102a09853;  */

/* WARNING: Possible PIC construction at 0x000102a097d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a097f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a09810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a097dc) */
/* WARNING: Removing unreachable block (ram,0x000102a097f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09720(void)

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
  func_0x000107c3f5e4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102a08f54();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102a091cc();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a09854);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112edb6f0) = lVar5;
    *(long *)(lVar4 + _DAT_112edb6f8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102a09854; end: 102a0987b; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102a09854(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a09720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a0987c; end: 102a098bf; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint end] */

void FUN_102a0987c(undefined8 param_1)

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



/* Entry: 102a098c0; end: 102a09a57;  */

void FUN_102a098c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f20820)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f0df7e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CaptureServiceScopeGraphBridge/SCCaptureServiceScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a09a58);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c531f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102a09a58; end: 102a09b03; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102a09a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102a098c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102a09b04; end: 102a09b6f; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09b04(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112edb7c0,0);
  *(undefined8 *)(param_1 + _DAT_112edb7c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112edb7d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a09b70; end: 102a09ba3;  */

void FUN_102a09b70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a09ba4; end: 102a09beb; -[SCCaptureServiceScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a09bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a09bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09ba4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112edb7c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb7c8));
  return;
}



/* Entry: 102a09bec; end: 102a09c0b;  */

void FUN_102a09bec(void)

{
  func_0x000107c61168(&PTR_PTR_11287cfd8);
  return;
}



/* Entry: 102a09c0c; end: 102a09c53; -[SCSCCaptureServiceScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09c0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edb800;
  func_0x000107c61428(param_1 + _DAT_112edb800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a09c54; end: 102a09cab; -[SCSCCaptureServiceScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edb800;
  func_0x000107c61428(param_1 + _DAT_112edb800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a09cac; end: 102a09d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09cac(undefined8 param_1,long param_2)

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
    FUN_102a091ac();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112edb728) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a09d84);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112edb730);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112edb808);
    *(long **)(unaff_x20 + _DAT_112edb808) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102a09d84; end: 102a09dab; -[SCSCCaptureServiceScopedServicesSaberEntryPoint begin] */

void FUN_102a09d84(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a09cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a09dac; end: 102a09f23;  */

/* WARNING: Possible PIC construction at 0x000102a09e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a09eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a09e18) */
/* WARNING: Removing unreachable block (ram,0x000102a09eb0) */
/* WARNING: Removing unreachable block (ram,0x000102a09ec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a09dac(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112edb808);
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



/* Entry: 102a09f24; end: 102a09f2b;  */

void FUN_102a09f24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102a09f2c; end: 102a09f5f; -[SCSCCaptureServiceScopedServicesSaberEntryPoint end] */

void FUN_102a09f2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a09dac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102a09f60; end: 102a0a07f;  */

void FUN_102a09f60(long param_1,long param_2,long param_3)

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
                        "CaptureServiceScopeGraphBridge/SCSCCaptureServiceScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0a080);
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



/* Entry: 102a0a080; end: 102a0a12b; -[SCSCCaptureServiceScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102a0a080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102a09f60(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102a0a12c; end: 102a0a18b; -[SCSCCaptureServiceScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0a12c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112edb800,0);
  *(undefined8 *)(param_1 + _DAT_112edb808) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a0a18c; end: 102a0a1bf;  */

void FUN_102a0a18c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a0a1c0; end: 102a0a1f7; -[SCSCCaptureServiceScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0a1c0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112edb800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb808));
  return;
}



/* Entry: 102a0a1f8; end: 102a0a217;  */

void FUN_102a0a1f8(void)

{
  func_0x000107c61168(&PTR_PTR_11287d0a0);
  return;
}



/* Entry: 102a0a218; end: 102a0a727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102a0a218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  func_0x000100b4ce40();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_15;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_16;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_17;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_18;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112edb838) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112edb840) = param_19;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a0a728);
  (*pcVar2)();
}



/* Entry: 102a0a728; end: 102a0a787; -[_TtC24CameraUIScopeGraphBridge39CameraUIScopeGraphBridgeSaberEntryPoint init] */

void FUN_102a0a728(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.CameraUIScopeGraphBridgeSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0a754);
  (*pcVar1)();
}



/* Entry: 102a0a788; end: 102a0a7bf; -[_TtC24CameraUIScopeGraphBridge39CameraUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a0a7a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a0a7a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0a788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb838));
  return;
}



/* Entry: 102a0a7c0; end: 102a0a7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0a7c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112edb840),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112edb838));
  return;
}



/* Entry: 102a0a7e8; end: 102a0a883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0a7e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edec68);
  *(undefined8 *)(unaff_x20 + _DAT_112edb870) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edb878) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0a884; end: 102a0a8e3; -[_TtC24CameraUIScopeGraphBridge40LensCarouselResetServicesSaberEntryPoint init] */

void FUN_102a0a884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.LensCarouselResetServicesSaberEntryPoint",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0a8b0);
  (*pcVar1)();
}



/* Entry: 102a0a8e4; end: 102a0a977; -[_TtC24CameraUIScopeGraphBridge40LensCarouselResetServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0a8e4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb870));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb878));
  return;
}



/* Entry: 102a0a978; end: 102a0a97f;  */

undefined8 FUN_102a0a978(void)

{
  return 0;
}



/* Entry: 102a0a980; end: 102a0aa1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0a980(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edec80);
  *(undefined8 *)(unaff_x20 + _DAT_112edb8a8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edb8b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0aa1c; end: 102a0aa7b; -[_TtC24CameraUIScopeGraphBridge47MiniCameraTrayNavigationServicesSaberEntryPoint init] */

void FUN_102a0aa1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.MiniCameraTrayNavigationServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0aa48);
  (*pcVar1)();
}



/* Entry: 102a0aa7c; end: 102a0ab0f; -[_TtC24CameraUIScopeGraphBridge47MiniCameraTrayNavigationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0aa7c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb8a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb8b0));
  return;
}



/* Entry: 102a0ab10; end: 102a0ab17;  */

undefined8 FUN_102a0ab10(void)

{
  return 0;
}



/* Entry: 102a0ab18; end: 102a0abb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0ab18(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edeca0);
  *(undefined8 *)(unaff_x20 + _DAT_112edb8e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edb8e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0abb4; end: 102a0ac13; -[_TtC24CameraUIScopeGraphBridge49ProductSelectionDependencyProviderSaberEntryPoint init] */

void FUN_102a0abb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.ProductSelectionDependencyProviderSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0abe0);
  (*pcVar1)();
}



/* Entry: 102a0ac14; end: 102a0aca7; -[_TtC24CameraUIScopeGraphBridge49ProductSelectionDependencyProviderSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0ac14(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb8e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb8e8));
  return;
}



/* Entry: 102a0aca8; end: 102a0acaf;  */

undefined8 FUN_102a0aca8(void)

{
  return 0;
}



/* Entry: 102a0acb0; end: 102a0ad4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0acb0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edecc8);
  *(undefined8 *)(unaff_x20 + _DAT_112edb918) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edb920) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0ad4c; end: 102a0adab; -[_TtC24CameraUIScopeGraphBridge53SCCameraDeviceSettingsResolverServicesSaberEntryPoint init] */

void FUN_102a0ad4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.SCCameraDeviceSettingsResolverServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0ad78);
  (*pcVar1)();
}



/* Entry: 102a0adac; end: 102a0ae3f; -[_TtC24CameraUIScopeGraphBridge53SCCameraDeviceSettingsResolverServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0adac(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb918));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb920));
  return;
}



/* Entry: 102a0ae40; end: 102a0ae47;  */

undefined8 FUN_102a0ae40(void)

{
  return 0;
}



/* Entry: 102a0ae48; end: 102a0aee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0ae48(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edece0);
  *(undefined8 *)(unaff_x20 + _DAT_112edb950) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edb958) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0aee4; end: 102a0af43; -[_TtC24CameraUIScopeGraphBridge38SCCameraFeatureServicesSaberEntryPoint init] */

void FUN_102a0aee4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.SCCameraFeatureServicesSaberEntryPoint",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0af10);
  (*pcVar1)();
}



/* Entry: 102a0af44; end: 102a0afd7; -[_TtC24CameraUIScopeGraphBridge38SCCameraFeatureServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0af44(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb950));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb958));
  return;
}



/* Entry: 102a0afd8; end: 102a0afdf;  */

undefined8 FUN_102a0afd8(void)

{
  return 0;
}



/* Entry: 102a0afe0; end: 102a0b07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0afe0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edecf0);
  *(undefined8 *)(unaff_x20 + _DAT_112edb988) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edb990) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0b07c; end: 102a0b0db; -[_TtC24CameraUIScopeGraphBridge40SCCameraNightModeServicesSaberEntryPoint init] */

void FUN_102a0b07c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.SCCameraNightModeServicesSaberEntryPoint",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0b0a8);
  (*pcVar1)();
}



/* Entry: 102a0b0dc; end: 102a0b16f; -[_TtC24CameraUIScopeGraphBridge40SCCameraNightModeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0b0dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb988));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb990));
  return;
}



/* Entry: 102a0b170; end: 102a0b177;  */

undefined8 FUN_102a0b170(void)

{
  return 0;
}



/* Entry: 102a0b178; end: 102a0b213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0b178(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ededa8);
  *(undefined8 *)(unaff_x20 + _DAT_112edb9c0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edb9c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0b214; end: 102a0b273; -[_TtC24CameraUIScopeGraphBridge33SCCameraUIServicesSaberEntryPoint init] */

void FUN_102a0b214(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.SCCameraUIServicesSaberEntryPoint",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0b240);
  (*pcVar1)();
}



/* Entry: 102a0b274; end: 102a0b307; -[_TtC24CameraUIScopeGraphBridge33SCCameraUIServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0b274(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb9c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edb9c8));
  return;
}



/* Entry: 102a0b308; end: 102a0b30f;  */

undefined8 FUN_102a0b308(void)

{
  return 0;
}



/* Entry: 102a0b310; end: 102a0b3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0b310(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edede0);
  *(undefined8 *)(unaff_x20 + _DAT_112edb9f8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edba00) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0b3ac; end: 102a0b40b; -[_TtC24CameraUIScopeGraphBridge45SCLegacyCameraTooltipsServicesSaberEntryPoint init] */

void FUN_102a0b3ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.SCLegacyCameraTooltipsServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0b3d8);
  (*pcVar1)();
}



/* Entry: 102a0b40c; end: 102a0b49f; -[_TtC24CameraUIScopeGraphBridge45SCLegacyCameraTooltipsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0b40c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edb9f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edba00));
  return;
}



/* Entry: 102a0b4a0; end: 102a0b4a7;  */

undefined8 FUN_102a0b4a0(void)

{
  return 0;
}



/* Entry: 102a0b4a8; end: 102a0b543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0b4a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edede8);
  *(undefined8 *)(unaff_x20 + _DAT_112edba30) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edba38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102a0b544; end: 102a0b5a3; -[_TtC24CameraUIScopeGraphBridge48SCLegacyLensCarouselResetServicesSaberEntryPoint init] */

void FUN_102a0b544(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraUIScopeGraphBridge.SCLegacyLensCarouselResetServicesSaberEntryPoint",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a0b570);
  (*pcVar1)();
}



/* Entry: 102a0b5a4; end: 102a0b637; -[_TtC24CameraUIScopeGraphBridge48SCLegacyLensCarouselResetServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a0b5a4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112edba30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112edba38));
  return;
}



/* Entry: 102a0b638; end: 102a0b63f;  */

undefined8 FUN_102a0b638(void)

{
  return 0;
}



/* Entry: 102a0b640; end: 102a0b6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a0b640(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112edee00);
  *(undefined8 *)(unaff_x20 + _DAT_112edba68) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112edba70) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}


