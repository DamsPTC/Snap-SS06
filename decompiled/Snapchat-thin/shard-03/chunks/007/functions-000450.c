/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b61a54; end: 102b61ca7;  */

long FUN_102b61a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ac040;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x5373656863756f74;
  func_0x000107c5fadc(0x5373656863756f74,0xec00000065706f63);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0f4bd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 102b61ca8; end: 102b61ce3;  */

void FUN_102b61ca8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b61ce4; end: 102b61ceb;  */

undefined8 FUN_102b61ce4(void)

{
  return 0x1b;
}



/* Entry: 102b61cec; end: 102b61d6f;  */

void FUN_102b61cec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b61e30,param_2,FUN_102b61e34,param_2,FUN_102b61e5c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b61d70; end: 102b61dbf;  */

undefined8 FUN_102b61d70(void)

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



/* Entry: 102b61dc0; end: 102b61def;  */

void FUN_102b61dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105a3338;
  return;
}



/* Entry: 102b61df0; end: 102b61e0f;  */

void FUN_102b61df0(void)

{
  func_0x000107c61168(&PTR_PTR_112ef7b48);
  return;
}



/* Entry: 102b61e10; end: 102b61e33;  */

undefined1  [16] FUN_102b61e10(void)

{
  return ZEXT816(0x1105a3378);
}



/* Entry: 102b61e34; end: 102b61e5b;  */

void FUN_102b61e34(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b61e5c; end: 102b61e63;  */

undefined8 FUN_102b61e5c(void)

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



/* Entry: 102b61e64; end: 102b61e9f;  */

void FUN_102b61e64(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b61ea0();
  func_0x0001000a7f38("SCLensProcessingTouchesScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102b61ea0; end: 102b6208b;  */

void FUN_102b61ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11071b4f0;
  ppuVar4 = &PTR_DAT_11302a520;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a33c8;
  func_0x000107c613fc(&UNK_1105a33c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ef7bc0;
  func_0x0001000285a8(0x112ef7bc0,&UNK_10db272d0);
  func_0x0001000a6ee8(&UNK_1105a35d8,
                      "LensProcessingTouchesScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_102b6208c,puVar2,uVar3,&UNK_1105a35d8,&PTR_DAT_112ef7c50);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a3378,
                      "SCLensProcessingTouchesEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_102b62140,param_3,uVar3,&UNK_1105a3378,&PTR_DAT_112ef7ae0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105a33f0;
  func_0x000107c613fc(&UNK_1105a33f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a3198,
                      "SCLensProcessingTouchesScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_102b621f0,puVar2,uVar3,&UNK_1105a3198,&PTR_DAT_112ef7a58);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ef7bc8;
  func_0x0001000285a8(0x112ef7bc8,&UNK_10db272d8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102b6208c; end: 102b620cb;  */

void FUN_102b6208c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b627c8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensProcessingTouchesScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b620cc; end: 102b6213f;  */

void FUN_102b620cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102b6222c;
  func_0x0001000823a8(0x102b6222c,param_3);
  func_0x000100082720("SCLensProcessingTouchesEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b62140; end: 102b62147;  */

void FUN_102b62140(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102b6222c;
  func_0x0001000823a8();
  func_0x000100082720("SCLensProcessingTouchesEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b62148; end: 102b621ef;  */

void FUN_102b62148(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a3418;
  func_0x000107c613fc(&UNK_1105a3418,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102b62224;
  func_0x0001000823a8(FUN_102b62224,puVar1);
  func_0x000100082720("SCLensProcessingTouchesScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102b621f0; end: 102b621f7;  */

void FUN_102b621f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a3418;
  func_0x000107c613fc(&UNK_1105a3418,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102b62224;
  func_0x0001000823a8(FUN_102b62224,puVar3);
  func_0x000100082720("SCLensProcessingTouchesScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102b621f8; end: 102b62223;  */

void FUN_102b621f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b62224; end: 102b62233;  */

void FUN_102b62224(undefined8 *param_1)

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
  puVar1 = &UNK_1105a3220;
  func_0x000107c613fc(&UNK_1105a3220,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b613dc;
  func_0x00010058fa64(FUN_102b613dc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b62234; end: 102b622bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b62234(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102b625f4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ef7bd0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ef7bd8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b622bc);
  (*pcVar1)();
}



/* Entry: 102b622bc; end: 102b6231b; -[_TtC37LensProcessingTouchesScopeGraphBridge52LensProcessingTouchesScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b622bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensProcessingTouchesScopeGraphBridge.LensProcessingTouchesScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b622e8);
  (*pcVar1)();
}



/* Entry: 102b6231c; end: 102b62353; -[_TtC37LensProcessingTouchesScopeGraphBridge52LensProcessingTouchesScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b62338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b6233c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6231c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7bd0));
  return;
}



/* Entry: 102b62354; end: 102b6237b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62354(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ef7bd8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ef7bd0));
  return;
}



/* Entry: 102b6237c; end: 102b6239b;  */

void FUN_102b6237c(void)

{
  func_0x000107c61168(&PTR_PTR_11288e410);
  return;
}



/* Entry: 102b6239c; end: 102b62423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b6239c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef7c08) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ef7c10);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b62424);
  (*pcVar2)();
}



/* Entry: 102b62424; end: 102b6250b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b62424(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef7c08);
  *(undefined **)(unaff_x20 + _DAT_112ef7c08) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef7c10);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ef7c10))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a3538;
  func_0x000107c613fc(&UNK_1105a3538,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b62510,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b6250c; end: 102b62517;  */

void FUN_102b6250c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b62518; end: 102b62577; -[_TtC37LensProcessingTouchesScopeGraphBridge52SCLensProcessingTouchesScopedServicesSaberEntryPoint init] */

void FUN_102b62518(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensProcessingTouchesScopeGraphBridge.SCLensProcessingTouchesScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b62544);
  (*pcVar1)();
}



/* Entry: 102b62578; end: 102b625af; -[_TtC37LensProcessingTouchesScopeGraphBridge52SCLensProcessingTouchesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62578(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef7c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7c08));
  return;
}



/* Entry: 102b625b0; end: 102b625b3;  */

void FUN_102b625b0(void)

{
  return;
}



/* Entry: 102b625b4; end: 102b625d3;  */

void FUN_102b625b4(void)

{
  FUN_102b62424();
  return;
}



/* Entry: 102b625d4; end: 102b625f3;  */

void FUN_102b625d4(void)

{
  func_0x000107c61168(&PTR_PTR_11288e4d8);
  return;
}



/* Entry: 102b625f4; end: 102b626c3;  */

undefined8 FUN_102b625f4(void)

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
  
  func_0x000107c61428(0x112ef7c40,&uStack_40,0x20,0);
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
    FUN_102b626c4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102b626c4; end: 102b626e3;  */

void FUN_102b626c4(void)

{
  func_0x000107c61168(&PTR_PTR_11288e5a0);
  return;
}



/* Entry: 102b626e4; end: 102b6274f;  */

void FUN_102b626e4(void)

{
  func_0x0001000285a8(0x112ef7c48,&UNK_10db273a8);
  func_0x0001000823a8(0x102b62724,0);
  return;
}



/* Entry: 102b62750; end: 102b6278b; -[_TtC37LensProcessingTouchesScopeGraphBridge45LensProcessingTouchesScopeGraphBridgeServices init] */

void FUN_102b62750(undefined8 param_1)

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



/* Entry: 102b6278c; end: 102b627bf;  */

void FUN_102b6278c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b627c0; end: 102b627c7;  */

undefined8 FUN_102b627c0(void)

{
  return 0x1b;
}



/* Entry: 102b627c8; end: 102b6293f;  */

void FUN_102b627c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a3580;
  func_0x000107c613fc(&UNK_1105a3580,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b62940,puVar1);
  return;
}



/* Entry: 102b62940; end: 102b62947;  */

void FUN_102b62940(undefined8 *param_1)

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
  func_0x000107c61428(0x112ef7c40,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef7c40,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a3618;
  func_0x000107c613fc(&UNK_1105a3618,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b629f4;
  func_0x00010058fa64(0x102b629f4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b62948; end: 102b629a3;  */

void FUN_102b62948(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ef7c40,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ef7c40,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102b629a4; end: 102b629fb;  */

undefined ** FUN_102b629a4(void)

{
  return &PTR_DAT_11302a520;
}



/* Entry: 102b629fc; end: 102b62a43; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b629fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef7ca0;
  func_0x000107c61428(param_1 + _DAT_112ef7ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b62a44; end: 102b62a9b; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef7ca0;
  func_0x000107c61428(param_1 + _DAT_112ef7ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b62a9c; end: 102b62ae3; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint lensProcessingTouchesScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62a9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef7ca8;
  func_0x000107c61428(param_1 + _DAT_112ef7ca8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b62ae4; end: 102b62b47; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint setLensProcessingTouchesScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef7ca8;
  func_0x000107c61428(param_1 + _DAT_112ef7ca8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b62b48; end: 102b62c7b;  */

/* WARNING: Possible PIC construction at 0x000102b62c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b62c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b62c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b62c04) */
/* WARNING: Removing unreachable block (ram,0x000102b62c20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62b48(void)

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
  func_0x000107c4b37c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102b6237c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102b625f4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b62c7c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ef7bd0) = lVar5;
    *(long *)(lVar4 + _DAT_112ef7bd8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102b62c7c; end: 102b62ca3; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102b62c7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b62b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b62ca4; end: 102b62ce7; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint end] */

void FUN_102b62ca4(undefined8 param_1)

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



/* Entry: 102b62ce8; end: 102b62e7f;  */

void FUN_102b62ce8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f0b170)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000034,0x800000010f0f4e90,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensProcessingTouchesScopeGraphBridge/SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x62,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b62e80);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55e30();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b62e80; end: 102b62f2b; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102b62e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b62ce8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b62f2c; end: 102b62f97; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62f2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef7ca0,0);
  *(undefined8 *)(param_1 + _DAT_112ef7ca8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef7cb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b62f98; end: 102b62fcb;  */

void FUN_102b62f98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b62fcc; end: 102b63013; -[SCLensProcessingTouchesScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b62ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b62ffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b62fcc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef7ca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7ca8));
  return;
}



/* Entry: 102b63014; end: 102b63033;  */

void FUN_102b63014(void)

{
  func_0x000107c61168(&PTR_PTR_11288e650);
  return;
}



/* Entry: 102b63034; end: 102b6307b; -[SCSCLensProcessingTouchesScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b63034(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef7ce0;
  func_0x000107c61428(param_1 + _DAT_112ef7ce0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6307c; end: 102b630d3; -[SCSCLensProcessingTouchesScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6307c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef7ce0;
  func_0x000107c61428(param_1 + _DAT_112ef7ce0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b630d4; end: 102b631ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b630d4(undefined8 param_1,long param_2)

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
    FUN_102b625d4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ef7c08) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b631ac);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ef7c10);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef7ce8);
    *(long **)(unaff_x20 + _DAT_112ef7ce8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102b631ac; end: 102b631d3; -[SCSCLensProcessingTouchesScopedServicesSaberEntryPoint begin] */

void FUN_102b631ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b630d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b631d4; end: 102b6334b;  */

/* WARNING: Possible PIC construction at 0x000102b6323c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b632d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b63240) */
/* WARNING: Removing unreachable block (ram,0x000102b632d8) */
/* WARNING: Removing unreachable block (ram,0x000102b632f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b631d4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef7ce8);
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



/* Entry: 102b6334c; end: 102b63353;  */

void FUN_102b6334c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b63354; end: 102b63387; -[SCSCLensProcessingTouchesScopedServicesSaberEntryPoint end] */

void FUN_102b63354(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b631d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b63388; end: 102b634a7;  */

void FUN_102b63388(long param_1,long param_2,long param_3)

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
                        "LensProcessingTouchesScopeGraphBridge/SCSCLensProcessingTouchesScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b634a8);
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



/* Entry: 102b634a8; end: 102b63553; -[SCSCLensProcessingTouchesScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102b634a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b63388(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b63554; end: 102b635b3; -[SCSCLensProcessingTouchesScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b63554(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef7ce0,0);
  *(undefined8 *)(param_1 + _DAT_112ef7ce8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b635b4; end: 102b635e7;  */

void FUN_102b635b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b635e8; end: 102b6361f; -[SCSCLensProcessingTouchesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b635e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef7ce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7ce8));
  return;
}



/* Entry: 102b63620; end: 102b6363f;  */

void FUN_102b63620(void)

{
  func_0x000107c61168(&PTR_PTR_11288e718);
  return;
}



/* Entry: 102b63640; end: 102b636c3;  */

undefined8
FUN_102b63640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006c5918(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return unaff_x20;
}



/* Entry: 102b636c4; end: 102b6373f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b636c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113036168);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102b63740; end: 102b63747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b63740(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113036168);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102b63748; end: 102b637b7;  */

undefined1  [16] FUN_102b63748(void)

{
  long lVar1;
  long unaff_x20;
  ulong uStack_28;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000104875e28(&uStack_28);
    if (1 < uStack_28) {
      func_0x000107c4139c(uStack_28);
      func_0x000102b63b38(uStack_28);
    }
    func_0x000100c82230();
    func_0x000107c61574(lVar1);
  }
  return ZEXT816(0);
}



/* Entry: 102b637b8; end: 102b637cb;  */

void FUN_102b637b8(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 102b637cc; end: 102b6384b;  */

void FUN_102b637cc(undefined1 *param_1)

{
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 2;
  puStack_90 = param_1;
  puStack_70 = param_1;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008546f4(FUN_102b6384c,0,0x102b63b74,auStack_40,0x102b63b90,auStack_60,0x102b63b84,
                      auStack_80,0x102b63b94,auStack_a0);
  return;
}



/* Entry: 102b6384c; end: 102b63867;  */

void FUN_102b6384c(void)

{
  return;
}



/* Entry: 102b63868; end: 102b638a7;  */

void FUN_102b63868(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b638a8; end: 102b63b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b638a8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113091b70);
  uVar1 = uVar11;
  func_0x000107c5e370(uVar11);
  func_0x000107c61180();
  uVar6 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  puVar10 = PTR___sSbN_11034dd40;
  pcVar2 = FUN_102b637b8;
  func_0x0001000bfde0(FUN_102b637b8,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar6);
  func_0x000107c41b80(uVar11);
  func_0x000107c61180();
  uVar6 = uVar11;
  func_0x0001000b637c();
  func_0x000107c61170(uVar11);
  uVar1 = 0x102b637c4;
  func_0x0001000bfde0(0x102b637c4,0,puVar10);
  func_0x000107c61574(uVar6);
  lVar3 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  FUN_102b4cefc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(code **)(lVar3 + 0x20) = pcVar2;
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar1);
  lVar4 = lVar3;
  func_0x0001000c19f0(lVar3);
  func_0x000107c61574(lVar3);
  uStack_51 = 1;
  puVar5 = &uStack_51;
  func_0x0001006c71a4(puVar5);
  func_0x000107c61574(lVar4);
  func_0x0001000285a8(0x112d3b3f8,&UNK_10d904aa0);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113074ea8);
  func_0x0001000b637c(uVar6);
  pcVar7 = FUN_102b637cc;
  func_0x0001000d5158(FUN_102b637cc,0,puVar10);
  func_0x000107c61574(uVar6);
  uStack_52 = 1;
  puVar8 = &uStack_52;
  func_0x0001006c71a4(puVar8);
  func_0x000107c61574(pcVar7);
  puVar9 = puVar5;
  func_0x0001006c733c(puVar5);
  uVar6 = 0x102b63850;
  func_0x0001000bfde0(0x102b63850,0,puVar10);
  func_0x000107c61574(puVar9);
  puVar10 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar6);
  func_0x00010487bcec(0x3fb999999999999a,param_3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar10);
  return param_3;
}



/* Entry: 102b63b30; end: 102b63b97;  */

void FUN_102b63b30(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (cVar1 == '\0') {
      func_0x000104875e28(&lStack_50);
      if ((lStack_50 != 1) && (lStack_50 != 0)) {
        func_0x000107c4139c(lStack_50);
        func_0x000107c61574(lVar2);
        func_0x000102b63b38(lStack_50);
        return;
      }
    }
    else {
      func_0x0001000d224c();
      if (lStack_50 != 0) {
        lVar3 = lStack_50;
        func_0x000107c3d080(lStack_50);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_50);
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102b63b98; end: 102b63c63;  */

void FUN_102b63b98(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (cVar1 == '\0') {
      func_0x000104875e28(&lStack_50);
      if ((lStack_50 != 1) && (lStack_50 != 0)) {
        func_0x000107c4139c(lStack_50);
        func_0x000107c61574(param_2);
        func_0x000102b63b38(lStack_50);
        return;
      }
    }
    else {
      func_0x0001000d224c();
      if (lStack_50 != 0) {
        lVar2 = lStack_50;
        func_0x000107c3d080(lStack_50);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_50);
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102b63c64; end: 102b63cb7;  */

void FUN_102b63c64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b63cb8; end: 102b63ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b63cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000100b94bd4();
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
    *(long *)(unaff_x20 + _DAT_112ef7eb0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ef7eb8) = param_8;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b63ed0);
  (*pcVar2)();
}



/* Entry: 102b63ed0; end: 102b63f2f; -[_TtC26ViewfinderScopeGraphBridge41ViewfinderScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b63ed0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.ViewfinderScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b63efc);
  (*pcVar1)();
}



/* Entry: 102b63f30; end: 102b63f67; -[_TtC26ViewfinderScopeGraphBridge41ViewfinderScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b63f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b63f50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b63f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7eb0));
  return;
}



/* Entry: 102b63f68; end: 102b63f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b63f68(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ef7eb8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ef7eb0));
  return;
}



/* Entry: 102b63f90; end: 102b6402b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b63f90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef8630);
  *(undefined8 *)(unaff_x20 + _DAT_112ef7ee8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef7ef0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b6402c; end: 102b6408b; -[_TtC26ViewfinderScopeGraphBridge42LensProcessingUsageServicesSaberEntryPoint init] */

void FUN_102b6402c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.LensProcessingUsageServicesSaberEntryPoint",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b64058);
  (*pcVar1)();
}



/* Entry: 102b6408c; end: 102b6411f; -[_TtC26ViewfinderScopeGraphBridge42LensProcessingUsageServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6408c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef7ee8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7ef0));
  return;
}



/* Entry: 102b64120; end: 102b64127;  */

undefined8 FUN_102b64120(void)

{
  return 0;
}



/* Entry: 102b64128; end: 102b641c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b64128(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef8648);
  *(undefined8 *)(unaff_x20 + _DAT_112ef7f20) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef7f28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b641c4; end: 102b64223; -[_TtC26ViewfinderScopeGraphBridge51SCCameraCaptureLensProvidingServicesSaberEntryPoint init] */

void FUN_102b641c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.SCCameraCaptureLensProvidingServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b641f0);
  (*pcVar1)();
}



/* Entry: 102b64224; end: 102b642b7; -[_TtC26ViewfinderScopeGraphBridge51SCCameraCaptureLensProvidingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b64224(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef7f20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7f28));
  return;
}



/* Entry: 102b642b8; end: 102b642bf;  */

undefined8 FUN_102b642b8(void)

{
  return 0;
}



/* Entry: 102b642c0; end: 102b6435b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b642c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef8678);
  *(undefined8 *)(unaff_x20 + _DAT_112ef7f58) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef7f60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b6435c; end: 102b643bb; -[_TtC26ViewfinderScopeGraphBridge47SCLensProcessingLensModeServicesSaberEntryPoint init] */

void FUN_102b6435c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.SCLensProcessingLensModeServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b64388);
  (*pcVar1)();
}



/* Entry: 102b643bc; end: 102b6444f; -[_TtC26ViewfinderScopeGraphBridge47SCLensProcessingLensModeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b643bc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef7f58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7f60));
  return;
}



/* Entry: 102b64450; end: 102b64457;  */

undefined8 FUN_102b64450(void)

{
  return 0;
}



/* Entry: 102b64458; end: 102b644f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b64458(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef86b0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef7f90) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef7f98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b644f4; end: 102b64553; -[_TtC26ViewfinderScopeGraphBridge47SCViewfinderDataPipelineServicesSaberEntryPoint init] */

void FUN_102b644f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ViewfinderScopeGraphBridge.SCViewfinderDataPipelineServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b64520);
  (*pcVar1)();
}



/* Entry: 102b64554; end: 102b645e7; -[_TtC26ViewfinderScopeGraphBridge47SCViewfinderDataPipelineServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b64554(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef7f90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef7f98));
  return;
}



/* Entry: 102b645e8; end: 102b645ef;  */

undefined8 FUN_102b645e8(void)

{
  return 0;
}


