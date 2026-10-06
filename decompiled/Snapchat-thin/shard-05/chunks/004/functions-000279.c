/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103db2a50; end: 103db2b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103db2a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_103db3184();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_11300a2d8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_11300a2e0) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103db2b68);
  (*pcVar2)();
}



/* Entry: 103db2b68; end: 103db2bc7; -[_TtC32PostRegistrationScopeGraphBridge47PostRegistrationScopeGraphBridgeSaberEntryPoint init] */

void FUN_103db2b68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationScopeGraphBridge.PostRegistrationScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103db2b94);
  (*pcVar1)();
}



/* Entry: 103db2bc8; end: 103db2bff; -[_TtC32PostRegistrationScopeGraphBridge47PostRegistrationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103db2be4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db2be8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db2bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300a2d8));
  return;
}



/* Entry: 103db2c00; end: 103db2c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db2c00(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11300a2e0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11300a2d8));
  return;
}



/* Entry: 103db2c28; end: 103db2c47;  */

void FUN_103db2c28(void)

{
  func_0x000107c61168(&PTR_PTR_11294a910);
  return;
}



/* Entry: 103db2c48; end: 103db2ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103db2c48(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11300a478);
  *(undefined8 *)(unaff_x20 + _DAT_11300a310) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11300a318) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103db2ce4; end: 103db2d43; -[_TtC32PostRegistrationScopeGraphBridge57SCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint init] */

void FUN_103db2ce4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationScopeGraphBridge.SCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103db2d10);
  (*pcVar1)();
}



/* Entry: 103db2d44; end: 103db2dd7; -[_TtC32PostRegistrationScopeGraphBridge57SCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db2d44(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11300a310));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300a318));
  return;
}



/* Entry: 103db2dd8; end: 103db2ddf;  */

undefined8 FUN_103db2dd8(void)

{
  return 0;
}



/* Entry: 103db2de0; end: 103db2dff;  */

void FUN_103db2de0(void)

{
  func_0x000107c61168(&PTR_PTR_11294a9d8);
  return;
}



/* Entry: 103db2e00; end: 103db2e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103db2e00(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11300a468);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103db2e64; end: 103db2e6b;  */

void FUN_103db2e64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103db2e6c; end: 103db2f0b;  */

void FUN_103db2e6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103db2f0c; end: 103db2f2b;  */

void FUN_103db2f0c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103db2f2c; end: 103db2fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103db2f2c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11300a418) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_11300a420);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103db2fb4);
  (*pcVar2)();
}



/* Entry: 103db2fb4; end: 103db309b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103db2fb4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11300a418);
  *(undefined **)(unaff_x20 + _DAT_11300a418) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11300a420);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_11300a420))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110710430;
  func_0x000107c613fc(&UNK_110710430,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103db30a0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103db309c; end: 103db30a7;  */

void FUN_103db309c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103db30a8; end: 103db3107; -[_TtC32PostRegistrationScopeGraphBridge47SCPostRegistrationScopedServicesSaberEntryPoint init] */

void FUN_103db30a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationScopeGraphBridge.SCPostRegistrationScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103db30d4);
  (*pcVar1)();
}



/* Entry: 103db3108; end: 103db313f; -[_TtC32PostRegistrationScopeGraphBridge47SCPostRegistrationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3108(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_11300a420));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300a418));
  return;
}



/* Entry: 103db3140; end: 103db3143;  */

void FUN_103db3140(void)

{
  return;
}



/* Entry: 103db3144; end: 103db3163;  */

void FUN_103db3144(void)

{
  FUN_103db2fb4();
  return;
}



/* Entry: 103db3164; end: 103db3183;  */

void FUN_103db3164(void)

{
  func_0x000107c61168(&PTR_PTR_11294aaa0);
  return;
}



/* Entry: 103db3184; end: 103db3253;  */

undefined8 FUN_103db3184(void)

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
  
  func_0x000107c61428(0x11300a450,&uStack_40,0x20,0);
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
    FUN_103db3254();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103db3254; end: 103db3273;  */

void FUN_103db3254(void)

{
  func_0x000107c61168(&PTR_PTR_11294ab68);
  return;
}



/* Entry: 103db3274; end: 103db33d3;  */

void FUN_103db3274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x11300a458,&UNK_10dc92dc8);
  puVar1 = &UNK_110710478;
  func_0x000107c613fc(&UNK_110710478,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103db33d4,puVar1);
  return;
}



/* Entry: 103db33d4; end: 103db33df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db33d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_103db3254();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_11300a460) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_11300a468) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_11300a470) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_11300a478) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 103db33e0; end: 103db346b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db33e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11300a460) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11300a468) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11300a470) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11300a478) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103db346c; end: 103db34cb; -[_TtC32PostRegistrationScopeGraphBridge40PostRegistrationScopeGraphBridgeServices init] */

void FUN_103db346c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationScopeGraphBridge.PostRegistrationScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103db3498);
  (*pcVar1)();
}



/* Entry: 103db34cc; end: 103db3563; -[_TtC32PostRegistrationScopeGraphBridge40PostRegistrationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103db34e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db3508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db34ec) */
/* WARNING: Removing unreachable block (ram,0x000103db350c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db34cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11300a478));
  return;
}



/* Entry: 103db3564; end: 103db3593;  */

void FUN_103db3564(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 103db3594; end: 103db35d3;  */

void FUN_103db3594(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_103db35d4,0);
  return;
}



/* Entry: 103db35d4; end: 103db35e7;  */

void FUN_103db35d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 103db35e8; end: 103db3623;  */

void FUN_103db35e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 103db3624; end: 103db363f;  */

void FUN_103db3624(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103db3690,param_1);
  return;
}



/* Entry: 103db3640; end: 103db368f;  */

void FUN_103db3640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 103db3690; end: 103db36c3;  */

void FUN_103db3690(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103db36c4; end: 103db36cb;  */

undefined8 FUN_103db36c4(void)

{
  return 0x1b;
}



/* Entry: 103db36cc; end: 103db3843;  */

void FUN_103db36cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1107104a0;
  func_0x000107c613fc(&UNK_1107104a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103db3844,puVar1);
  return;
}



/* Entry: 103db3844; end: 103db384b;  */

void FUN_103db3844(undefined8 *param_1)

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
  func_0x000107c61428(0x11300a450,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11300a450,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1107105b8;
  func_0x000107c613fc(&UNK_1107105b8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103db3938;
  func_0x00010058fa64(0x103db3938,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103db384c; end: 103db38a7;  */

void FUN_103db384c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11300a450,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x11300a450,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103db38a8; end: 103db3943;  */

undefined ** FUN_103db38a8(void)

{
  return &PTR_DAT_113066e50;
}



/* Entry: 103db3944; end: 103db398b; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3944(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a4d0;
  func_0x000107c61428(param_1 + _DAT_11300a4d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db398c; end: 103db39e3; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db398c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a4d0;
  func_0x000107c61428(param_1 + _DAT_11300a4d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db39e4; end: 103db3a2b; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint sCBitmojiCameraPermissionRequestScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db39e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a4d8;
  func_0x000107c61428(param_1 + _DAT_11300a4d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103db3a2c; end: 103db3a37; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint setSCBitmojiCameraPermissionRequestScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a4d8;
  func_0x000107c61428(param_1 + _DAT_11300a4d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103db3a38; end: 103db3a7f; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint sCComposerPostRegisterationScopeImageLoadersRegistryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3a38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a4e0;
  func_0x000107c61428(param_1 + _DAT_11300a4e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103db3a80; end: 103db3a8b; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint setSCComposerPostRegisterationScopeImageLoadersRegistryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a4e0;
  func_0x000107c61428(param_1 + _DAT_11300a4e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103db3a8c; end: 103db3ad3; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint postRegistrationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3a8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a4e8;
  func_0x000107c61428(param_1 + _DAT_11300a4e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103db3ad4; end: 103db3adf; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint setPostRegistrationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a4e8;
  func_0x000107c61428(param_1 + _DAT_11300a4e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103db3ae0; end: 103db3b3f;  */

void FUN_103db3ae0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 103db3b40; end: 103db3d77;  */

/* WARNING: Possible PIC construction at 0x000103db3cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db3cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db3cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db3ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db3d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db3d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db3cec) */
/* WARNING: Removing unreachable block (ram,0x000103db3cdc) */
/* WARNING: Removing unreachable block (ram,0x000103db3cc0) */
/* WARNING: Removing unreachable block (ram,0x000103db3cb0) */
/* WARNING: Removing unreachable block (ram,0x000103db3d50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db3b40(void)

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
  func_0x000107c50a98();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50c14();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c4eba0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_103db2c28();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_103db3184();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103db3d78);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_11300a2d8) = lVar5;
        *(long *)(lVar4 + _DAT_11300a2e0) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103db3d78; end: 103db3d9f; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103db3d78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103db3b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103db3da0; end: 103db3de3; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint end] */

void FUN_103db3da0(undefined8 param_1)

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



/* Entry: 103db3de4; end: 103db4053;  */

void FUN_103db3de4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e479d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f1b8630,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffc0) && (param_3 == -0x7ffffffef0e479a0)) ||
           (func_0x000107c605b8(0xd000000000000040,0x800000010f1b8660,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c581bc();
        }
        else {
          uVar2 = 0xd00000000000002f;
          if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e47950)) &&
             (func_0x000107c605b8(0xd00000000000002f,0x800000010f1b86b0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PostRegistrationScopeGraphBridge/SCPostRegistrationScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x58,2,0x3f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103db4054);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5760c();
        }
        goto LAB_103db3e70;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58040();
  }
LAB_103db3e70:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103db4054; end: 103db40ff; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103db4054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103db3de4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103db4100; end: 103db4183; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4100(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11300a4d0,0);
  *(undefined8 *)(param_1 + _DAT_11300a4d8) = 0;
  *(undefined8 *)(param_1 + _DAT_11300a4e0) = 0;
  *(undefined8 *)(param_1 + _DAT_11300a4e8) = 0;
  *(undefined8 *)(param_1 + _DAT_11300a4f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103db4184; end: 103db41b7;  */

void FUN_103db4184(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103db41b8; end: 103db421f; -[SCPostRegistrationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103db41e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db4204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db41e8) */
/* WARNING: Removing unreachable block (ram,0x000103db4208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db41b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_11300a4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300a4d8));
  return;
}



/* Entry: 103db4220; end: 103db423f;  */

void FUN_103db4220(void)

{
  func_0x000107c61168(&PTR_PTR_11294ac40);
  return;
}



/* Entry: 103db4240; end: 103db424b; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4240(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a520;
  func_0x000107c61428(param_1 + _DAT_11300a520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db424c; end: 103db4257; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db424c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a520;
  func_0x000107c61428(param_1 + _DAT_11300a520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db4258; end: 103db4263; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint postRegistrationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4258(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a528;
  func_0x000107c61428(param_1 + _DAT_11300a528,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db4264; end: 103db42a7;  */

void FUN_103db4264(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103db42a8; end: 103db42b3; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint setPostRegistrationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db42a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a528;
  func_0x000107c61428(param_1 + _DAT_11300a528,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db42b4; end: 103db4307;  */

void FUN_103db42b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db4308; end: 103db434f; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint sCPostRegAddFriendsImpressionLoggerServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4308(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a530;
  func_0x000107c61428(param_1 + _DAT_11300a530,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103db4350; end: 103db43b3; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint setSCPostRegAddFriendsImpressionLoggerServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a530;
  func_0x000107c61428(param_1 + _DAT_11300a530,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103db43b4; end: 103db4537;  */

/* WARNING: Possible PIC construction at 0x000103db44b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db44c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db44e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db44b8) */
/* WARNING: Removing unreachable block (ram,0x000103db44c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db43b4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4eb9c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5118c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_103db2de0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11300a478);
        *(undefined8 *)(lVar2 + _DAT_11300a310) = uVar6;
        *(long *)(lVar2 + _DAT_11300a318) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11300a318);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103db4538; end: 103db455f; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint begin] */

void FUN_103db4538(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103db43b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103db4560; end: 103db45a3; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint end] */

void FUN_103db4560(undefined8 param_1)

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



/* Entry: 103db45a4; end: 103db47a7;  */

void FUN_103db45a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e478c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1b8740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000031;
        if (((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e47890)) &&
           (func_0x000107c605b8(0xd000000000000031,0x800000010f1b8770,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PostRegistrationScopeGraphBridge/SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint.swift"
                              ,0x62,2,0x3b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103db47a8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58734();
        goto LAB_103db4630;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57608();
  }
LAB_103db4630:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103db47a8; end: 103db4853; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint setValue:forIvarName:] */

void FUN_103db47a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103db45a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103db4854; end: 103db48d3; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4854(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11300a520,0);
  func_0x000107c61614(param_1 + _DAT_11300a528,0);
  *(undefined8 *)(param_1 + _DAT_11300a530) = 0;
  *(undefined8 *)(param_1 + _DAT_11300a538) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103db48d4; end: 103db4907;  */

void FUN_103db48d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103db4908; end: 103db495f; -[SCSCPostRegAddFriendsImpressionLoggerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103db4944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db4948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4908(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_11300a520);
  func_0x000107c61610(param_1 + _DAT_11300a528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300a530));
  return;
}



/* Entry: 103db4960; end: 103db497f;  */

void FUN_103db4960(void)

{
  func_0x000107c61168(&PTR_PTR_11294ad18);
  return;
}



/* Entry: 103db4980; end: 103db498b; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4980(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a568;
  func_0x000107c61428(param_1 + _DAT_11300a568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db498c; end: 103db4997; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db498c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a568;
  func_0x000107c61428(param_1 + _DAT_11300a568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db4998; end: 103db49a3; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider postRegistrationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4998(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a570;
  func_0x000107c61428(param_1 + _DAT_11300a570,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db49a4; end: 103db49e7;  */

void FUN_103db49a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103db49e8; end: 103db49f3; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider setPostRegistrationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db49e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a570;
  func_0x000107c61428(param_1 + _DAT_11300a570,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db49f4; end: 103db4a47;  */

void FUN_103db49f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db4a48; end: 103db4c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103db4a48(void)

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
    func_0x000107c4eb9c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103db2e90();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11300a468);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11300a578);
      *(long *)(unaff_x20 + _DAT_11300a578) = lVar4;
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
                      "PostRegistrationScopeGraphBridge/SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider.swift"
                      ,0x6a,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103db4b74);
  (*pcVar1)();
}



/* Entry: 103db4c5c; end: 103db4c8f; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider provide] */

void FUN_103db4c5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103db4a48();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103db4c90; end: 103db4cc3; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider __safeProvide] */

void FUN_103db4c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103db4b74();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103db4cc4; end: 103db4d07; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider end] */

void FUN_103db4cc4(undefined8 param_1)

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



/* Entry: 103db4d08; end: 103db4e9f;  */

void FUN_103db4d08(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e478c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1b8740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PostRegistrationScopeGraphBridge/SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider.swift"
                            ,0x6a,2,0x3d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103db4ea0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57608();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103db4ea0; end: 103db4f4b; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103db4ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103db4d08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103db4f4c; end: 103db4fbf; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4f4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11300a568,0);
  func_0x000107c61614(param_1 + _DAT_11300a570,0);
  *(undefined8 *)(param_1 + _DAT_11300a578) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103db4fc0; end: 103db4ff3;  */

void FUN_103db4fc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103db4ff4; end: 103db503b; -[SCSCBitmojiCameraPermissionRequestScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db4ff4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_11300a568);
  func_0x000107c61610(param_1 + _DAT_11300a570);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11300a578));
  return;
}



/* Entry: 103db503c; end: 103db505b;  */

void FUN_103db503c(void)

{
  func_0x000107c61168(&PTR_PTR_11300a5c0);
  return;
}



/* Entry: 103db505c; end: 103db50a3; -[SCSCPostRegistrationScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db505c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300a628;
  func_0x000107c61428(param_1 + _DAT_11300a628,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103db50a4; end: 103db50fb; -[SCSCPostRegistrationScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db50a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300a628;
  func_0x000107c61428(param_1 + _DAT_11300a628,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103db50fc; end: 103db51d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db50fc(undefined8 param_1,long param_2)

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
    FUN_103db3164();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_11300a418) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103db51d4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_11300a420);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11300a630);
    *(long **)(unaff_x20 + _DAT_11300a630) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103db51d4; end: 103db51fb; -[SCSCPostRegistrationScopedServicesSaberEntryPoint begin] */

void FUN_103db51d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103db50fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103db51fc; end: 103db5373;  */

/* WARNING: Possible PIC construction at 0x000103db5264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db52fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103db5268) */
/* WARNING: Removing unreachable block (ram,0x000103db5300) */
/* WARNING: Removing unreachable block (ram,0x000103db5318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db51fc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_11300a630);
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



/* Entry: 103db5374; end: 103db537b;  */

void FUN_103db5374(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103db537c; end: 103db53af; -[SCSCPostRegistrationScopedServicesSaberEntryPoint end] */

void FUN_103db537c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103db51fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103db53b0; end: 103db54cf;  */

void FUN_103db53b0(long param_1,long param_2,long param_3)

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
                        "PostRegistrationScopeGraphBridge/SCSCPostRegistrationScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x33,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103db54d0);
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


