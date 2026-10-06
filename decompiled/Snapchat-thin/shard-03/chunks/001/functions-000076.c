/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102488088; end: 10248808f;  */

void FUN_102488088(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11050fc40;
  func_0x000107c613fc(&UNK_11050fc40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102488180;
  func_0x0001000823a8(FUN_102488180,puVar3);
  func_0x000100082720("SCSendToSpotlightEducationScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102488090; end: 102488103;  */

void FUN_102488090(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_10248814c;
  func_0x0001000823a8(FUN_10248814c,param_3);
  func_0x000100082720("SendToSpotlightEducationEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102488104; end: 10248810b;  */

void FUN_102488104(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_10248814c;
  func_0x0001000823a8();
  func_0x000100082720("SendToSpotlightEducationEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10248810c; end: 10248814b;  */

void FUN_10248810c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10248890c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SendToSpotlightEducationScopeGraphBridgeScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10248814c; end: 102488153;  */

void FUN_10248814c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102487d60);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102488154; end: 10248817f;  */

void FUN_102488154(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102488180; end: 102488187;  */

void FUN_102488180(undefined8 *param_1)

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
  puVar1 = &UNK_11050fa48;
  func_0x000107c613fc(&UNK_11050fa48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024873b8;
  func_0x00010058fa64(FUN_1024873b8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102488188; end: 102488263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102488188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10248859c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e9d6e8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9d6f0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102488264);
  (*pcVar1)();
}



/* Entry: 102488264; end: 1024882c3; -[_TtC40SendToSpotlightEducationScopeGraphBridge55SendToSpotlightEducationScopeGraphBridgeSaberEntryPoint init] */

void FUN_102488264(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToSpotlightEducationScopeGraphBridge.SendToSpotlightEducationScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102488290);
  (*pcVar1)();
}



/* Entry: 1024882c4; end: 1024882fb; -[_TtC40SendToSpotlightEducationScopeGraphBridge55SendToSpotlightEducationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024882e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024882e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024882c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d6e8));
  return;
}



/* Entry: 1024882fc; end: 102488323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024882fc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9d6f0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9d6e8));
  return;
}



/* Entry: 102488324; end: 102488343;  */

void FUN_102488324(void)

{
  func_0x000107c61168(&PTR_PTR_112844ca0);
  return;
}



/* Entry: 102488344; end: 1024883cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102488344(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9d720) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9d728);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024883cc);
  (*pcVar2)();
}



/* Entry: 1024883cc; end: 1024884b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024883cc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9d720);
  *(undefined **)(unaff_x20 + _DAT_112e9d720) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9d728);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9d728))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11050fd08;
  func_0x000107c613fc(&UNK_11050fd08,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1024884b8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1024884b4; end: 1024884bf;  */

void FUN_1024884b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024884c0; end: 10248851f; -[_TtC40SendToSpotlightEducationScopeGraphBridge55SCSendToSpotlightEducationScopedServicesSaberEntryPoint init] */

void FUN_1024884c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToSpotlightEducationScopeGraphBridge.SCSendToSpotlightEducationScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024884ec);
  (*pcVar1)();
}



/* Entry: 102488520; end: 102488557; -[_TtC40SendToSpotlightEducationScopeGraphBridge55SCSendToSpotlightEducationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488520(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9d728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d720));
  return;
}



/* Entry: 102488558; end: 10248855b;  */

void FUN_102488558(void)

{
  return;
}



/* Entry: 10248855c; end: 10248857b;  */

void FUN_10248855c(void)

{
  FUN_1024883cc();
  return;
}



/* Entry: 10248857c; end: 10248859b;  */

void FUN_10248857c(void)

{
  func_0x000107c61168(&PTR_PTR_112844d68);
  return;
}



/* Entry: 10248859c; end: 10248866b;  */

undefined8 FUN_10248859c(void)

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
  
  func_0x000107c61428(0x112e9d758,&uStack_40,0x20,0);
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
    FUN_10248866c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10248866c; end: 10248868b;  */

void FUN_10248866c(void)

{
  func_0x000107c61168(&PTR_PTR_112844e30);
  return;
}



/* Entry: 10248868c; end: 1024886a7;  */

void FUN_10248868c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9d760,&UNK_10daac9d8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102488714,param_1);
  return;
}



/* Entry: 1024886a8; end: 102488713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024886a8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10248866c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e9d768) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102488714; end: 10248871b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488714(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10248866c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e9d768) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10248871c; end: 102488767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248871c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9d768) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102488768; end: 1024887c7; -[_TtC40SendToSpotlightEducationScopeGraphBridge48SendToSpotlightEducationScopeGraphBridgeServices init] */

void FUN_102488768(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToSpotlightEducationScopeGraphBridge.SendToSpotlightEducationScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102488794);
  (*pcVar1)();
}



/* Entry: 1024887c8; end: 1024887d7; -[_TtC40SendToSpotlightEducationScopeGraphBridge48SendToSpotlightEducationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024887c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9d768));
  return;
}



/* Entry: 1024887d8; end: 102488863;  */

void FUN_1024887d8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102488818,0);
  return;
}



/* Entry: 102488864; end: 10248887f;  */

void FUN_102488864(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024888d0,param_1);
  return;
}



/* Entry: 102488880; end: 1024888cf;  */

void FUN_102488880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1024888d0; end: 102488903;  */

void FUN_1024888d0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102488904; end: 10248890b;  */

undefined8 FUN_102488904(void)

{
  return 0x1b;
}



/* Entry: 10248890c; end: 102488a83;  */

void FUN_10248890c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050fd50;
  func_0x000107c613fc(&UNK_11050fd50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102488a84,puVar1);
  return;
}



/* Entry: 102488a84; end: 102488a8b;  */

void FUN_102488a84(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9d758,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9d758,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11050fe28;
  func_0x000107c613fc(&UNK_11050fe28,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102488b58;
  func_0x00010058fa64(0x102488b58,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102488a8c; end: 102488ae7;  */

void FUN_102488a8c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9d758,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9d758,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102488ae8; end: 102488b5f;  */

undefined ** FUN_102488ae8(void)

{
  return &PTR_DAT_112e9db18;
}



/* Entry: 102488b60; end: 102488ba7; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488b60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d7c0;
  func_0x000107c61428(param_1 + _DAT_112e9d7c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102488ba8; end: 102488bff; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d7c0;
  func_0x000107c61428(param_1 + _DAT_112e9d7c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102488c00; end: 102488c47; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488c00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d7c8;
  func_0x000107c61428(param_1 + _DAT_112e9d7c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102488c48; end: 102488c53; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d7c8;
  func_0x000107c61428(param_1 + _DAT_112e9d7c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102488c54; end: 102488c9b; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint sendToSpotlightEducationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488c54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d7d0;
  func_0x000107c61428(param_1 + _DAT_112e9d7d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102488c9c; end: 102488ca7; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint setSendToSpotlightEducationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d7d0;
  func_0x000107c61428(param_1 + _DAT_112e9d7d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102488ca8; end: 102488d07;  */

void FUN_102488ca8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102488d08; end: 102488ec3;  */

/* WARNING: Possible PIC construction at 0x000102488e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102488e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102488e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102488e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102488e58) */
/* WARNING: Removing unreachable block (ram,0x000102488e48) */
/* WARNING: Removing unreachable block (ram,0x000102488e24) */
/* WARNING: Removing unreachable block (ram,0x000102488e9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102488d08(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c51ec8();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102488324();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10248859c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102488ec4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e9d6e8) = lVar5;
      *(long *)(lVar3 + _DAT_112e9d6f0) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102488ec4; end: 102488eeb; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102488ec4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102488d08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102488eec; end: 102488f2f; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint end] */

void FUN_102488eec(undefined8 param_1)

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



/* Entry: 102488f30; end: 102489133;  */

void FUN_102488f30(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000037;
        if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef0f5e790)) &&
           (func_0x000107c605b8(0xd000000000000037,0x800000010f0a1870,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SendToSpotlightEducationScopeGraphBridge/SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x68,2,0x37,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102489134);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58f24();
        goto LAB_102488fbc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
LAB_102488fbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102489134; end: 1024891df; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102489134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102488f30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024891e0; end: 102489257; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024891e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9d7c0,0);
  *(undefined8 *)(param_1 + _DAT_112e9d7c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9d7d0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9d7d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102489258; end: 10248928b;  */

void FUN_102489258(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10248928c; end: 1024892e3; -[SCSendToSpotlightEducationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024892b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024892bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248928c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9d7c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d7c8));
  return;
}



/* Entry: 1024892e4; end: 102489303;  */

void FUN_1024892e4(void)

{
  func_0x000107c61168(&PTR_PTR_112844ef0);
  return;
}



/* Entry: 102489304; end: 10248934b; -[SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102489304(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d808;
  func_0x000107c61428(param_1 + _DAT_112e9d808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10248934c; end: 1024893a3; -[SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248934c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d808;
  func_0x000107c61428(param_1 + _DAT_112e9d808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024893a4; end: 10248947b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024893a4(undefined8 param_1,long param_2)

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
    FUN_10248857c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9d720) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10248947c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9d728);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9d810);
    *(long **)(unaff_x20 + _DAT_112e9d810) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10248947c; end: 1024894a3; -[SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint begin] */

void FUN_10248947c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024893a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024894a4; end: 10248961b;  */

/* WARNING: Possible PIC construction at 0x00010248950c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024895a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102489510) */
/* WARNING: Removing unreachable block (ram,0x0001024895a8) */
/* WARNING: Removing unreachable block (ram,0x0001024895c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024894a4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9d810);
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



/* Entry: 10248961c; end: 102489623;  */

void FUN_10248961c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102489624; end: 102489657; -[SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint end] */

void FUN_102489624(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024894a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102489658; end: 102489777;  */

void FUN_102489658(long param_1,long param_2,long param_3)

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
                        "SendToSpotlightEducationScopeGraphBridge/SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102489778);
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



/* Entry: 102489778; end: 102489823; -[SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102489778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102489658(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102489824; end: 102489883; -[SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102489824(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9d808,0);
  *(undefined8 *)(param_1 + _DAT_112e9d810) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102489884; end: 1024898b7;  */

void FUN_102489884(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024898b8; end: 1024898ef; -[SCSCSendToSpotlightEducationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024898b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9d808);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d810));
  return;
}



/* Entry: 1024898f0; end: 10248990f;  */

void FUN_1024898f0(void)

{
  func_0x000107c61168(&PTR_PTR_112844fc0);
  return;
}



/* Entry: 102489910; end: 102489967;  */

void FUN_102489910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  return;
}



/* Entry: 102489968; end: 10248997f;  */

void FUN_102489968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  return;
}



/* Entry: 102489980; end: 102489c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102489980(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3e980();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar9 == 0) {
    lVar9 = 0;
    uVar15 = 0;
  }
  else {
    lVar8 = lVar9;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar8 == 0) {
      lVar9 = 0;
      uVar15 = 0;
    }
    else {
      uStack_80 = 0;
      lStack_78 = 0;
      func_0x000107c5fae8(lVar8,&uStack_80);
      func_0x000107c61170(lVar8);
      lVar9 = lStack_78;
      uVar15 = 0;
      if (lStack_78 != 0) {
        uVar15 = uStack_80;
      }
    }
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar14 = *(undefined8 *)(lVar8 + _DAT_112e9da68);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(lVar8 + _DAT_112e9da60);
  uVar2 = *(undefined8 *)(lVar8 + _DAT_112e9da70);
  uVar4 = ((undefined8 *)(lVar8 + _DAT_112e9da70))[1];
  uVar3 = *(undefined8 *)(lVar8 + _DAT_112e9da78);
  uVar5 = ((undefined8 *)(lVar8 + _DAT_112e9da78))[1];
  lVar11 = 0;
  FUN_10248abb8();
  lVar8 = lVar11;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112e9d9e8) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e9d9f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e9d9f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e9da00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + _DAT_112e9da08) = 0;
  *(undefined8 *)(lVar8 + _DAT_112e9da10) = uVar10;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e9da20);
  *puVar1 = uVar15;
  puVar1[1] = lVar9;
  *(undefined8 *)(lVar8 + _DAT_112e9da28) = uVar7;
  *(undefined8 *)(lVar8 + _DAT_112e9da18) = uVar16;
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar8;
  lStack_68 = lVar11;
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  func_0x000107c61434(lVar9);
  func_0x000107c615f0(uVar14);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c61174(uVar10);
  func_0x000107c615f0(uVar7);
  plVar12 = &lStack_70;
  func_0x000107c61154(plVar12,puVar6,0,0);
  FUN_102489dcc(uVar14,uVar13,uVar2,uVar4,uVar3,uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(plVar12);
  func_0x000107c6142c(lVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar14);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 102489c2c; end: 102489c6f;  */

void FUN_102489c2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102489c70; end: 102489c8f;  */

void FUN_102489c70(void)

{
  FUN_102489980();
  return;
}



/* Entry: 102489c90; end: 102489c97;  */

undefined8 FUN_102489c90(void)

{
  return 0;
}



/* Entry: 102489c98; end: 102489cb7;  */

void FUN_102489c98(void)

{
  func_0x000107c61168(&PTR_PTR_112e9d880);
  return;
}



/* Entry: 102489cb8; end: 102489d1b;  */

void FUN_102489cb8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102489d1c; end: 102489d4f; -[_TtC24SendToSpotlightEducation42SendToSpotlightEducationTrayViewController initWithCoder:] */

undefined8 FUN_102489d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10248ac88();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 102489d50; end: 102489dcb; -[_TtC24SendToSpotlightEducation42SendToSpotlightEducationTrayViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102489d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_10248abb8();
  puVar1 = PTR_s_viewWillDisappear__112685438;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e9d9e8);
  *(undefined8 *)(param_1 + _DAT_112e9d9e8) = 0;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102489dcc; end: 10248a01b;  */

/* WARNING: Possible PIC construction at 0x000102489ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102489f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102489f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102489fc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102489f74) */
/* WARNING: Removing unreachable block (ram,0x000102489efc) */
/* WARNING: Removing unreachable block (ram,0x000102489f58) */
/* WARNING: Removing unreachable block (ram,0x000102489f88) */
/* WARNING: Removing unreachable block (ram,0x000102489f90) */
/* WARNING: Removing unreachable block (ram,0x000102489fc8) */
/* WARNING: Removing unreachable block (ram,0x000102489fd4) */
/* WARNING: Removing unreachable block (ram,0x000102489fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102489dcc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_68;
  
  if (*(long *)(unaff_x20 + _DAT_112e9d9e8) != 0) {
    return;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9d9f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  if (param_2 < 2) {
    if (param_2 == 0) {
      return;
    }
    if (param_2 != 1) {
LAB_102489ff8:
      lStack_68 = param_2;
      func_0x000107c60614(&UNK_110510050,&lStack_68,&UNK_110510050,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10248a01c);
      (*pcVar2)();
    }
  }
  else if ((param_2 != 3) && (param_2 != 2)) goto LAB_102489ff8;
  puVar3 = PTR_PTR_1126aa8e0;
  func_0x000107c610f8(PTR_PTR_1126aa8e0);
  func_0x000107c46730();
  if (((undefined8 *)(unaff_x20 + _DAT_112e9da20))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9da20);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c52ae0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10248a01c; end: 10248a793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248a01c(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_100 [7];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar14 = (long)(auStack_c0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12_00;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9da10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar7 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar7 != 0) {
      puVar3 = PTR_PTR_1126aa8d0;
      puStack_b0 = auStack_c0 + -extraout_x8;
      lStack_a8 = lVar7;
      func_0x000107c610f8(PTR_PTR_1126aa8d0);
      func_0x000107c453e4();
      puVar4 = &UNK_11050ff28;
      func_0x000107c613fc(&UNK_11050ff28,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_11050ff50;
      func_0x000107c613fc(&UNK_11050ff50,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_1;
      pcStack_80 = FUN_10248add0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11050ff68;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar4 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61574(puVar4);
      func_0x000107c56cb4(puVar3);
      func_0x000107c60bd0(ppuVar6);
      puVar4 = &UNK_11050ff28;
      func_0x000107c613fc(&UNK_11050ff28,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_80 = (code *)0x10248adf4;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11050ff90;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar4;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_78);
      func_0x000107c56d50(puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c52d78(puVar3);
      lVar2 = *(long *)(unaff_x20 + _DAT_112e9da18);
      if (lVar2 != 0) {
        puVar4 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c61174(lVar2);
        func_0x000107c4807c(puVar4);
        lVar7 = 0;
        uStack_b8 = param_1;
        func_0x000107c5ede0();
        pcVar10 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
        (*pcVar10)(lVar15,1,1,lVar7);
        (*pcVar10)(lVar14,1,1,lVar7);
        lVar7 = 0;
        func_0x0001046305a8();
        puVar1 = puStack_b0;
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puStack_b0,1,1,lVar7);
        *(undefined1 *)(lVar12 + -8) = 0;
        *(undefined8 *)(lVar12 + -0x10) = 0;
        *(undefined8 *)(lVar12 + -0x18) = 0;
        *(undefined8 *)(lVar12 + -0x20) = 0;
        *(undefined8 *)(lVar12 + -0x28) = 0;
        *(undefined8 *)(lVar12 + -0x30) = 0;
        *(undefined8 *)(lVar12 + -0x38) = 0;
        *(undefined1 **)(lVar12 + -0x40) = puVar1;
        func_0x000104638e24(lVar12,8,lVar15,0,lVar14,0,0,0,0);
        func_0x000103bda44c(0);
        func_0x000100e39298(lVar12,lVar13);
        func_0x000104652fec(0);
        func_0x000107c610f8();
        func_0x000107c61174(lVar2);
        func_0x000104651d90(lVar13);
        puVar5 = puVar4;
        func_0x000107c61174(puVar4);
        lVar14 = lVar2;
        func_0x000103bda4f0(lVar2,lVar13,puVar4,0);
        func_0x000107c5a6a4(puVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar14);
        func_0x000100e392dc(lVar12);
      }
      puVar4 = PTR_PTR_1126aa8d8;
      func_0x000107c610f8();
      lVar2 = lStack_a8;
      func_0x000107c49520();
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e9da08);
      *(undefined **)(unaff_x20 + _DAT_112e9da08) = puVar4;
      func_0x000107c61174();
      func_0x000107c61170(uVar11);
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar3);
      }
      else {
        func_0x000107c61174();
        func_0x000107c5a050();
        lVar13 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10248a784);
          (*pcVar10)();
        }
        func_0x000107c3d89c();
        func_0x000107c61170();
        func_0x0001008478a8();
        func_0x000107c613fc();
        *(undefined8 *)(lVar13 + 0x18) = 9;
        *(undefined8 *)(lVar13 + 0x10) = 4;
        puVar5 = puVar4;
        func_0x000107c4acb0();
        func_0x000107c61180();
        lVar12 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10248a788);
          (*pcVar10)();
        }
        lVar14 = lVar12;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(lVar12);
        puVar8 = puVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar14);
        *(undefined **)(lVar13 + 0x20) = puVar8;
        puVar5 = puVar4;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar12 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10248a78c);
          (*pcVar10)();
        }
        lVar14 = lVar12;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(lVar12);
        puVar8 = puVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar14);
        *(undefined **)(lVar13 + 0x28) = puVar8;
        puVar5 = puVar4;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        lVar12 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10248a790);
          (*pcVar10)();
        }
        lVar14 = lVar12;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar12);
        puVar8 = puVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar14);
        *(undefined **)(lVar13 + 0x30) = puVar8;
        puVar5 = puVar4;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10248a794);
          (*pcVar10)();
        }
        puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar12 = unaff_x20;
        func_0x000107c3ec1c(unaff_x20);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        puVar9 = puVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar12);
        *(undefined **)(lVar13 + 0x38) = puVar9;
        uVar11 = 0;
        func_0x000100847984(0);
        lVar12 = lVar13;
        func_0x000107c5fc48(lVar13,uVar11);
        func_0x000107c61574(lVar13);
        func_0x000107c3d048(puVar8);
        func_0x000107c61170(lVar12);
        func_0x000107c610f8(PTR_PTR_1126b0a08);
        func_0x000107c48e84();
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar3);
      }
    }
  }
  return;
}



/* Entry: 10248a794; end: 10248a967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248a794(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + _DAT_112e9d9e8);
    if (lVar3 != 0) {
      func_0x000107c61174(lVar3);
      func_0x000107c42018();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112e9d9f8);
    uVar2 = ((undefined8 *)(param_1 + _DAT_112e9d9f8))[1];
    func_0x000100cf3e64(pcVar1,uVar2);
    func_0x000107c61170(param_1);
    if (pcVar1 != (code *)0x0) {
      func_0x000107c42430(param_2);
      (*pcVar1)((int)param_2 == 0);
      func_0x000100cf3e04(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 10248a968; end: 10248aab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10248a968(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  
  lVar4 = _DAT_112e9da08;
  pdVar1 = (double *)(unaff_x20 + _DAT_112e9d9f0);
  if (*(char *)(pdVar1 + 1) == '\x01') {
    lVar3 = *(long *)(unaff_x20 + _DAT_112e9da08);
    dVar6 = -1.0;
    if (lVar3 != 0) {
      func_0x000107c5dbc0(0xbff0000000000000);
      func_0x000107c61180();
      dVar6 = -1.0;
      if (lVar3 != 0) {
        func_0x000107c5e07c(0xbff0000000000000);
        lVar4 = *(long *)(unaff_x20 + lVar4);
        if (lVar4 == 0) {
          dVar6 = -1.0;
        }
        else {
          func_0x000107c61174();
          lVar5 = unaff_x20;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10248aab8);
            (*pcVar2)();
          }
          func_0x000107c3ec60();
          func_0x000107c61170(lVar5);
          func_0x000107c609cc(dVar6,param_2,param_3,param_4);
          dVar6 = 1.79769313486232e+308;
          func_0x000107c5b098(lVar4);
          func_0x000107c61170(lVar4);
        }
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10248aab4);
          (*pcVar2)();
        }
        func_0x000107c515a0();
        func_0x000107c61170(unaff_x20);
        func_0x000107c615e8(lVar3);
        dVar6 = dVar6 + param_3 + 23.0;
        *pdVar1 = dVar6;
        *(undefined1 *)(pdVar1 + 1) = 0;
      }
    }
  }
  else {
    dVar6 = *pdVar1;
  }
  return dVar6;
}



/* Entry: 10248aab8; end: 10248ab13; -[_TtC24SendToSpotlightEducation42SendToSpotlightEducationTrayViewController initWithNibName:bundle:] */

void FUN_10248aab8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToSpotlightEducation.SendToSpotlightEducationTrayViewController",0x43,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248aae4);
  (*pcVar1)();
}



/* Entry: 10248ab14; end: 10248abb7; -[_TtC24SendToSpotlightEducation42SendToSpotlightEducationTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248ab14(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9d9e8));
  func_0x000100cf3e04(*(undefined8 *)(param_1 + _DAT_112e9d9f8),
                      ((undefined8 *)(param_1 + _DAT_112e9d9f8))[1]);
  func_0x000100cf3e04(*(undefined8 *)(param_1 + _DAT_112e9da00),
                      ((undefined8 *)(param_1 + _DAT_112e9da00))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9da08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9da10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9da18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e9da20 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e9da28));
  return;
}



/* Entry: 10248abb8; end: 10248abd7;  */

void FUN_10248abb8(void)

{
  func_0x000107c61168(&PTR_PTR_112845080);
  return;
}



/* Entry: 10248abd8; end: 10248ac2b; -[_TtC24SendToSpotlightEducation42SendToSpotlightEducationTrayViewController tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x00010248ac14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248ac18) */

void FUN_10248abd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10248ad30(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10248ac2c; end: 10248ac87; -[_TtC24SendToSpotlightEducation42SendToSpotlightEducationTrayViewController tray:heightForPosition:] */

undefined8
FUN_10248ac2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  if (param_5 == 0x10) {
    return 0;
  }
  if (param_5 == 8) {
    func_0x000107c61174();
    FUN_10248a968();
    func_0x000107c61170(param_2);
    return param_1;
  }
  return 0xbff0000000000000;
}



/* Entry: 10248ac88; end: 10248ad2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248ac88(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e9d9e8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9d9f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9d9f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9da00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9da08) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SendToSpotlightEducation/SendToSpotlightEducationTrayViewController.swift",
                      0x49,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10248ad30);
  (*pcVar2)();
}



/* Entry: 10248ad30; end: 10248adcf;  */

/* WARNING: Possible PIC construction at 0x00010248ad84: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248ad30(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  
  if (param_1 != 2) {
    return;
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112e9da00);
  pcVar5 = (code *)*plVar1;
  if (pcVar5 == (code *)0x0) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e9d9f8);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    func_0x000100cf3e04(uVar3,uVar4);
    pcVar5 = (code *)*plVar1;
    lVar6 = plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
  }
  else {
    lVar6 = plVar1[1];
    func_0x000107c6157c(lVar6);
    (*pcVar5)();
  }
  if (pcVar5 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar6);
    return;
  }
  return;
}



/* Entry: 10248add0; end: 10248ae17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248add0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar5 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + _DAT_112e9d9e8);
    if (lVar5 != 0) {
      func_0x000107c61174(lVar5);
      func_0x000107c42018();
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    pcVar1 = *(code **)(lVar3 + _DAT_112e9d9f8);
    uVar2 = ((undefined8 *)(lVar3 + _DAT_112e9d9f8))[1];
    func_0x000100cf3e64(pcVar1,uVar2);
    func_0x000107c61170(lVar3);
    if (pcVar1 != (code *)0x0) {
      func_0x000107c42430(uVar4);
      (*pcVar1)((int)uVar4 == 0);
      func_0x000100cf3e04(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 10248ae18; end: 10248aeef;  */

void FUN_10248ae18(void)

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



/* Entry: 10248aef0; end: 10248aefb;  */

void FUN_10248aef0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10248aefc; end: 10248af3b;  */

void FUN_10248aefc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e9da58;
  func_0x0001000285a8(0x112e9da58,&UNK_10daacd40);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10248af3c; end: 10248af9b; -[SCSendToSpotlightEducationScope init] */

void FUN_10248af3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToSpotlightEducationScope.SCSendToSpotlightEducationScope",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10248af68);
  (*pcVar1)();
}



/* Entry: 10248af9c; end: 10248afeb; -[SCSendToSpotlightEducationScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010248afcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248afd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248af9c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9da68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9da70 + 8));
  return;
}



/* Entry: 10248afec; end: 10248afff;  */

undefined1  [16] FUN_10248afec(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10248b000; end: 10248b03f;  */

void FUN_10248b000(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9da80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daacd48;
  func_0x000107c61520(&UNK_10daacd48,&UNK_110510050);
  puRam0000000112e9da80 = puVar1;
  return;
}



/* Entry: 10248b040; end: 10248b043;  */

void FUN_10248b040(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e9da88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e9da90;
  func_0x00010002969c(0x112e9da90,&UNK_10daacde8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e9da88 = puVar2;
  return;
}



/* Entry: 10248b044; end: 10248b093;  */

void FUN_10248b044(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e9da88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e9da90;
  func_0x00010002969c(0x112e9da90,&UNK_10daacde8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e9da88 = puVar2;
  return;
}



/* Entry: 10248b094; end: 10248b0a3;  */

undefined1  [16] FUN_10248b094(void)

{
  return ZEXT816(0x110510050);
}



/* Entry: 10248b0a4; end: 10248b10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b0a4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342eb0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9db10) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10248b110; end: 10248b117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248b110(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342eb0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9db10) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}


