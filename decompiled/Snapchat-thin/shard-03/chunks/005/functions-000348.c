/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10299abdc; end: 10299abe3;  */

void FUN_10299abdc(undefined8 *param_1)

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
  puVar1 = &UNK_110578370;
  func_0x000107c613fc(&UNK_110578370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102998dac;
  func_0x00010058fa64(FUN_102998dac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10299abe4; end: 10299ad3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10299abe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10299b078();
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
    *(long *)(unaff_x20 + _DAT_112ed2500) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ed2508) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10299ad40);
  (*pcVar2)();
}



/* Entry: 10299ad40; end: 10299ad9f; -[_TtC28FamilyCenterScopeGraphBridge43FamilyCenterScopeGraphBridgeSaberEntryPoint init] */

void FUN_10299ad40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterScopeGraphBridge.FamilyCenterScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299ad6c);
  (*pcVar1)();
}



/* Entry: 10299ada0; end: 10299add7; -[_TtC28FamilyCenterScopeGraphBridge43FamilyCenterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010299adbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299adc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ada0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2500));
  return;
}



/* Entry: 10299add8; end: 10299adff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299add8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed2508),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed2500));
  return;
}



/* Entry: 10299ae00; end: 10299ae1f;  */

void FUN_10299ae00(void)

{
  func_0x000107c61168(&PTR_PTR_112876b48);
  return;
}



/* Entry: 10299ae20; end: 10299aea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10299ae20(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2538) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed2540);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10299aea8);
  (*pcVar2)();
}



/* Entry: 10299aea8; end: 10299af8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10299aea8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed2538);
  *(undefined **)(unaff_x20 + _DAT_112ed2538) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed2540);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed2540))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110578638;
  func_0x000107c613fc(&UNK_110578638,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10299af94,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10299af90; end: 10299af9b;  */

void FUN_10299af90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10299af9c; end: 10299affb; -[_TtC28FamilyCenterScopeGraphBridge41FamilyCenterScopedServicesSaberEntryPoint init] */

void FUN_10299af9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterScopeGraphBridge.FamilyCenterScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299afc8);
  (*pcVar1)();
}



/* Entry: 10299affc; end: 10299b033; -[_TtC28FamilyCenterScopeGraphBridge41FamilyCenterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299affc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed2540));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2538));
  return;
}



/* Entry: 10299b034; end: 10299b037;  */

void FUN_10299b034(void)

{
  return;
}



/* Entry: 10299b038; end: 10299b057;  */

void FUN_10299b038(void)

{
  FUN_10299aea8();
  return;
}



/* Entry: 10299b058; end: 10299b077;  */

void FUN_10299b058(void)

{
  func_0x000107c61168(&PTR_PTR_112876c10);
  return;
}



/* Entry: 10299b078; end: 10299b147;  */

undefined8 FUN_10299b078(void)

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
  
  func_0x000107c61428(0x112ed2570,&uStack_40,0x20,0);
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
    FUN_10299b148();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10299b148; end: 10299b167;  */

void FUN_10299b148(void)

{
  func_0x000107c61168(&PTR_PTR_112876cd8);
  return;
}



/* Entry: 10299b168; end: 10299b2a3;  */

void FUN_10299b168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed2578,&UNK_10dafa0b8);
  puVar1 = &UNK_110578680;
  func_0x000107c613fc(&UNK_110578680,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10299b2a4,puVar1);
  return;
}



/* Entry: 10299b2a4; end: 10299b2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b2a4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_10299b148();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ed2580) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ed2588) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ed2590) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10299b2b0; end: 10299b323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2580) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2588) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2590) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10299b324; end: 10299b383; -[_TtC28FamilyCenterScopeGraphBridge36FamilyCenterScopeGraphBridgeServices init] */

void FUN_10299b324(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterScopeGraphBridge.FamilyCenterScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299b350);
  (*pcVar1)();
}



/* Entry: 10299b384; end: 10299b40b; -[_TtC28FamilyCenterScopeGraphBridge36FamilyCenterScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010299b3a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299b3a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed2580));
  return;
}



/* Entry: 10299b40c; end: 10299b417;  */

void FUN_10299b40c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10299b824,param_1);
  return;
}



/* Entry: 10299b418; end: 10299b457;  */

void FUN_10299b418(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10299b830,0);
  return;
}



/* Entry: 10299b458; end: 10299b463;  */

void FUN_10299b458(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10299b828,param_1);
  return;
}



/* Entry: 10299b464; end: 10299b4ef;  */

void FUN_10299b464(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10299b834,0);
  return;
}



/* Entry: 10299b4f0; end: 10299b4fb;  */

void FUN_10299b4f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10299b554,param_1);
  return;
}



/* Entry: 10299b4fc; end: 10299b553;  */

void FUN_10299b4fc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10299b554; end: 10299b587;  */

void FUN_10299b554(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10299b588; end: 10299b58f;  */

undefined8 FUN_10299b588(void)

{
  return 0x1b;
}



/* Entry: 10299b590; end: 10299b707;  */

void FUN_10299b590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105786a8;
  func_0x000107c613fc(&UNK_1105786a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10299b708,puVar1);
  return;
}



/* Entry: 10299b708; end: 10299b70f;  */

void FUN_10299b708(undefined8 *param_1)

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
  func_0x000107c61428(0x112ed2570,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed2570,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110578800;
  func_0x000107c613fc(&UNK_110578800,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10299b81c;
  func_0x00010058fa64(0x10299b81c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10299b710; end: 10299b76b;  */

void FUN_10299b710(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed2570,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed2570,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10299b76c; end: 10299b837;  */

undefined ** FUN_10299b76c(void)

{
  return &PTR_DAT_112ed2978;
}



/* Entry: 10299b838; end: 10299b87f; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b838(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed25e8;
  func_0x000107c61428(param_1 + _DAT_112ed25e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10299b880; end: 10299b8d7; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed25e8;
  func_0x000107c61428(param_1 + _DAT_112ed25e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10299b8d8; end: 10299b91f; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint sCFullMapScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b8d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed25f0;
  func_0x000107c61428(param_1 + _DAT_112ed25f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10299b920; end: 10299b92b; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint setSCFullMapScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed25f0;
  func_0x000107c61428(param_1 + _DAT_112ed25f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10299b92c; end: 10299b973; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint sCSafetyReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b92c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed25f8;
  func_0x000107c61428(param_1 + _DAT_112ed25f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10299b974; end: 10299b97f; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint setSCSafetyReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b974(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed25f8;
  func_0x000107c61428(param_1 + _DAT_112ed25f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10299b980; end: 10299b9c7; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b980(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2600;
  func_0x000107c61428(param_1 + _DAT_112ed2600,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10299b9c8; end: 10299b9d3; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2600;
  func_0x000107c61428(param_1 + _DAT_112ed2600,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10299b9d4; end: 10299ba1b; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint familyCenterScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299b9d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2608;
  func_0x000107c61428(param_1 + _DAT_112ed2608,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10299ba1c; end: 10299ba27; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint setFamilyCenterScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ba1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2608;
  func_0x000107c61428(param_1 + _DAT_112ed2608,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10299ba28; end: 10299ba87;  */

void FUN_10299ba28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10299ba88; end: 10299bd4b;  */

/* WARNING: Possible PIC construction at 0x00010299bc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299bc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299bc84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299bc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299bca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299bd10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299bd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299bd00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299bd24) */
/* WARNING: Removing unreachable block (ram,0x00010299bd14) */
/* WARNING: Removing unreachable block (ram,0x00010299bca8) */
/* WARNING: Removing unreachable block (ram,0x00010299bc98) */
/* WARNING: Removing unreachable block (ram,0x00010299bc88) */
/* WARNING: Removing unreachable block (ram,0x00010299bc64) */
/* WARNING: Removing unreachable block (ram,0x00010299bc54) */
/* WARNING: Removing unreachable block (ram,0x00010299bd04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ba88(void)

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
  func_0x000107c50db4();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51240();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c5e1d0();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c42db0();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_10299ae00();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_10299b078();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10299bd4c);
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
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112ed2500) = lVar5;
          *(long *)(lVar4 + _DAT_112ed2508) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10299bd4c; end: 10299bd73; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10299bd4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10299ba88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10299bd74; end: 10299bdb7; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint end] */

void FUN_10299bd74(undefined8 param_1)

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



/* Entry: 10299bdb8; end: 10299c093;  */

void FUN_10299bdb8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0fa2350)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010f05dcb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef0fa21e0)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010f05de20,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c587e8();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed990)) ||
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a68c();
          }
          else {
            uVar2 = 0xd00000000000002b;
            if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f2d430)) &&
               (func_0x000107c605b8(0xd00000000000002b,0x800000010f0d2bd0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "FamilyCenterScopeGraphBridge/SCFamilyCenterScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x50,2,0x3d,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10299c094);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c548a0();
          }
        }
        goto LAB_10299be44;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5835c();
  }
LAB_10299be44:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10299c094; end: 10299c13f; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10299c094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10299bdb8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10299c140; end: 10299c1cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c140(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ed25e8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed25f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed25f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2608) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2610) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10299c1d0; end: 10299c1ef; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint init] */

void FUN_10299c1d0(void)

{
  FUN_10299c140();
  return;
}



/* Entry: 10299c1f0; end: 10299c223;  */

void FUN_10299c1f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10299c224; end: 10299c29b; -[SCFamilyCenterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010299c250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299c270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299c254) */
/* WARNING: Removing unreachable block (ram,0x00010299c274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c224(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed25e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed25f0));
  return;
}



/* Entry: 10299c29c; end: 10299c2bb;  */

void FUN_10299c29c(void)

{
  func_0x000107c61168(&PTR_PTR_112876da8);
  return;
}



/* Entry: 10299c2bc; end: 10299c303; -[SCFamilyCenterScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c2bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2640;
  func_0x000107c61428(param_1 + _DAT_112ed2640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10299c304; end: 10299c35b; -[SCFamilyCenterScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2640;
  func_0x000107c61428(param_1 + _DAT_112ed2640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10299c35c; end: 10299c433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c35c(undefined8 param_1,long param_2)

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
    FUN_10299b058();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed2538) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10299c434);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed2540);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed2648);
    *(long **)(unaff_x20 + _DAT_112ed2648) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10299c434; end: 10299c45b; -[SCFamilyCenterScopedServicesSaberEntryPoint begin] */

void FUN_10299c434(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10299c35c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10299c45c; end: 10299c5d3;  */

/* WARNING: Possible PIC construction at 0x00010299c4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299c55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010299c560) */
/* WARNING: Removing unreachable block (ram,0x00010299c578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c45c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed2648);
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



/* Entry: 10299c5d4; end: 10299c5db;  */

void FUN_10299c5d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10299c5dc; end: 10299c60f; -[SCFamilyCenterScopedServicesSaberEntryPoint end] */

void FUN_10299c5dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10299c45c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10299c610; end: 10299c72f;  */

void FUN_10299c610(long param_1,long param_2,long param_3)

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
                        "FamilyCenterScopeGraphBridge/SCFamilyCenterScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10299c730);
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



/* Entry: 10299c730; end: 10299c7db; -[SCFamilyCenterScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10299c730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10299c610(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10299c7dc; end: 10299c83b; -[SCFamilyCenterScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c7dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed2640,0);
  *(undefined8 *)(param_1 + _DAT_112ed2648) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10299c83c; end: 10299c86f;  */

void FUN_10299c83c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10299c870; end: 10299c8a7; -[SCFamilyCenterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c870(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed2640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2648));
  return;
}



/* Entry: 10299c8a8; end: 10299c8c7;  */

void FUN_10299c8a8(void)

{
  func_0x000107c61168(&PTR_PTR_112876e88);
  return;
}



/* Entry: 10299c8c8; end: 10299c91f; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController initWithCoder:] */

void FUN_10299c8c8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FamilyCenterImplementation/FamilyCenterNavigationController.swift",0x41,2,
                      0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299c920);
  (*pcVar1)();
}



/* Entry: 10299c920; end: 10299c943; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController defaultProjectNameV2] */

void FUN_10299c920(void)

{
  func_0x000107c5fadc(0x797465666153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10299c944; end: 10299c977; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController defaultSubProjectName] */

void FUN_10299c944(void)

{
  func_0x000107c5fadc(0x4320796c696d6146,0xed00007265746e65);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10299c978; end: 10299c97f; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController presentationMode] */

undefined8 FUN_10299c978(void)

{
  return 3;
}



/* Entry: 10299c980; end: 10299c983; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController interactiveDismissalWillBegin:] */

void FUN_10299c980(void)

{
  return;
}



/* Entry: 10299c984; end: 10299c987; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController interactionControllerPercentageDidChange:] */

void FUN_10299c984(void)

{
  return;
}



/* Entry: 10299c988; end: 10299ca17; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController interactiveDismissalDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299c988(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2948;
  lVar2 = *(long *)(param_1 + _DAT_112ed2678);
  func_0x000107c61428(lVar2 + _DAT_112ed2948,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c42044(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10299ca18; end: 10299ca43; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController initWithNavigationBarClass:toolbarClass:] */

void FUN_10299ca18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterImplementation.FamilyCenterNavigationController",0x3b,
                      "init(navigationBarClass:toolbarClass:)",0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299ca44);
  (*pcVar1)();
}



/* Entry: 10299ca44; end: 10299ca6f; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController initWithRootViewController:] */

void FUN_10299ca44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterImplementation.FamilyCenterNavigationController",0x3b,
                      "init(rootViewController:)",0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299ca70);
  (*pcVar1)();
}



/* Entry: 10299ca70; end: 10299cacf; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController initWithNibName:bundle:] */

void FUN_10299ca70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterImplementation.FamilyCenterNavigationController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299ca9c);
  (*pcVar1)();
}



/* Entry: 10299cad0; end: 10299cadf; -[_TtC26FamilyCenterImplementation32FamilyCenterNavigationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299cad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2678));
  return;
}



/* Entry: 10299cae0; end: 10299caff;  */

void FUN_10299cae0(void)

{
  func_0x000107c61168(&PTR_PTR_112876f48);
  return;
}



/* Entry: 10299cb00; end: 10299cfb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299cb00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  undefined8 uVar14;
  long unaff_x20;
  code *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long alStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  lStack_b0 = param_1;
  pcStack_a8 = (code *)param_2;
  func_0x000104638d5c();
  alStack_e0[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_e0[3] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined8 *)(lVar2 - extraout_x12);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_e0[1] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar13 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = extraout_x13;
  lStack_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_98 = (undefined8 *)(lVar11 - extraout_x12_01);
  lStack_a0 = param_3;
  if (param_3 == 0) {
    lStack_a0 = *(long *)(unaff_x20 + _DAT_112ed26b0);
    func_0x000107c615f0();
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed26b8);
  uVar14 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c615f0(param_3);
  func_0x000100b64c10(param_4,param_5);
  func_0x00010058d43c(uVar14,uVar4);
  func_0x000107c5edd0(lVar13,lStack_b0,pcStack_a8);
  lVar11 = lVar13;
  (**(code **)(lVar18 + 0x30))(lVar13,1,lVar2);
  puVar1 = puStack_98;
  if ((int)lVar11 == 1) {
    func_0x000107c615e8(lStack_a0);
    func_0x0001000293e4(lVar13);
  }
  else {
    pcStack_a8 = *(code **)(lVar18 + 0x20);
    puVar3 = puStack_98;
    (*pcStack_a8)(puStack_98,lVar13,lVar2);
    func_0x0001046392d4();
    lVar11 = alStack_e0[1];
    uVar14 = *puVar3;
    pcVar15 = *(code **)(lVar18 + 0x10);
    (*pcVar15)(alStack_e0[1],puVar1,lVar2);
    (**(code **)(lVar18 + 0x38))(lVar11,0,1,lVar2);
    func_0x000107c61174(uVar14);
    func_0x000107c61174();
    func_0x000104651350(puVar17);
    func_0x00010137dd74(lVar11,(long)puVar17 + (long)*(int *)(alStack_e0[2] + 0x14));
    lVar13 = alStack_e0[3];
    func_0x000100e39298(puVar17,alStack_e0[3]);
    uVar4 = 0;
    func_0x000104652fec(0);
    func_0x000107c610f8();
    lVar5 = lVar13;
    func_0x000104651d90(lVar13);
    func_0x000107c61170(uVar14);
    func_0x0001000293e4(lVar11);
    func_0x000100e392dc(puVar17);
    func_0x000107c61174(lVar5);
    func_0x000104651350(puVar17);
    *puVar17 = 4;
    func_0x000100e39298(puVar17,lVar13);
    func_0x000107c610f8(uVar4);
    func_0x000104651d90();
    lStack_b0 = lVar13;
    func_0x000107c61170(lVar5);
    func_0x000100e392dc(puVar17);
    puVar6 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar7 = puVar6;
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar8 = &UNK_1105788e8;
    func_0x000107c613fc(&UNK_1105788e8,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar17 = puStack_98;
    lVar11 = lStack_b8;
    (*pcVar15)(lStack_b8,puStack_98,lVar2);
    uVar12 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar16 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
    puVar9 = &UNK_110578910;
    func_0x000107c613fc(&UNK_110578910,uVar16 + lStack_c0,uVar12 | 7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    (*pcStack_a8)(puVar9 + uVar16,lVar11,lVar2);
    pcStack_70 = FUN_10299d374;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100e38b5c;
    puStack_78 = &UNK_110578928;
    ppuVar10 = &puStack_90;
    puStack_68 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_68);
    func_0x000107c5dc64(puVar7);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(puVar7);
    uVar14 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar13 = lStack_a0;
    lVar11 = lStack_b0;
    lVar5 = lStack_b0;
    func_0x000103c5d254(lStack_b0,puVar6,lStack_a0);
    func_0x000107c61170(uVar14);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ed26a8));
    func_0x000107c615e8(lVar13);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar5);
    (**(code **)(lVar18 + 8))(puVar17,lVar2);
  }
  return;
}



/* Entry: 10299cfb4; end: 10299d047;  */

/* WARNING: Possible PIC construction at 0x00010299d034: Changing call to branch */

void FUN_10299cfb4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    FUN_10299d048();
  }
  else {
    param_3 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10299d048; end: 10299d19f;  */

/* WARNING: Possible PIC construction at 0x00010299d120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299d138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299d17c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299d13c) */
/* WARNING: Removing unreachable block (ram,0x00010299d124) */
/* WARNING: Removing unreachable block (ram,0x00010299d180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299d048(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112ed26a8);
  lVar3 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61170();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed26b8);
  pcVar2 = (code *)*puVar1;
  puVar5 = (undefined *)puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar6 == 0) {
    if (pcVar2 == (code *)0x0) {
      return;
    }
    func_0x000107c6157c(puVar5);
    (*pcVar2)();
    if (pcVar2 == (code *)0x0) {
      return;
    }
  }
  else {
    puVar4 = &UNK_110578960;
    func_0x000107c613fc(&UNK_110578960,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar2;
    *(undefined **)(puVar4 + 0x18) = puVar5;
    uStack_50 = 0x10299d3e0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_110578978;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000100b64c10(pcVar2,puVar5);
    puVar5 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 10299d1a0; end: 10299d1c7; -[_TtC26FamilyCenterImplementation32FamilyCenterSupportPagePresenter webBrowserDidDismiss:] */

void FUN_10299d1a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10299d048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10299d1c8; end: 10299d2a7;  */

void FUN_10299d1c8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "dismissBrowser()";
  func_0x0001000c10c0("dismissBrowser()");
  func_0x000107c61180();
  puVar2 = &UNK_1105789b0;
  func_0x000107c613fc(&UNK_1105789b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_10299d414;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105789c8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10299d2a8; end: 10299d307; -[_TtC26FamilyCenterImplementation32FamilyCenterSupportPagePresenter init] */

void FUN_10299d2a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterImplementation.FamilyCenterSupportPagePresenter",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299d2d4);
  (*pcVar1)();
}



/* Entry: 10299d308; end: 10299d353; -[_TtC26FamilyCenterImplementation32FamilyCenterSupportPagePresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299d308(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed26a8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed26b0));
  if (*(long *)(param_1 + _DAT_112ed26b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ed26b8))[1]);
    return;
  }
  return;
}



/* Entry: 10299d354; end: 10299d373;  */

void FUN_10299d354(void)

{
  func_0x000107c61168(&PTR_PTR_112877008);
  return;
}



/* Entry: 10299d374; end: 10299d3c3;  */

/* WARNING: Possible PIC construction at 0x00010299d034: Changing call to branch */

void FUN_10299d374(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar1 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_10299d048();
  }
  else {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,param_2,lVar2,
                        unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10299d3c4; end: 10299d3e7;  */

void FUN_10299d3c4(long param_1,long param_2)

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



/* Entry: 10299d3e8; end: 10299d413;  */

void FUN_10299d3e8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10299d414; end: 10299d43b;  */

void FUN_10299d414(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 10299d43c; end: 10299d44b;  */

void FUN_10299d43c(long param_1,long param_2)

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



/* Entry: 10299d44c; end: 10299d963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299d44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed26e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed26f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed26f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2700) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2708) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2710) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2718) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2720) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2728) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2730) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2738) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2740) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2748) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2750) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2758) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2760) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2768) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2770) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2778) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2780) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2788) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2790) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2798) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112ed27a0) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112ed27a8) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112ed27b0) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112ed27b8) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112ed27c0) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112ed27c8) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112ed27d0) = param_23;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10299d964; end: 10299e8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299d964(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  undefined **ppuVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long unaff_x20;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  undefined8 uVar41;
  undefined *puStack_148;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uVar36 = *(undefined8 *)(unaff_x20 + _DAT_112ed2718);
  uVar9 = uVar36;
  func_0x000107c3cfe0();
  func_0x000107c61180();
  func_0x000107c4d814();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar21 = &UNK_110578a00;
  puVar11 = puVar21;
  func_0x000107c613fc(&UNK_110578a00,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_10299e9f0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x10299ffb4;
  puStack_90 = &UNK_110578a18;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar13 = puVar21;
  func_0x000107c613fc(&UNK_110578a00,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  pcStack_88 = FUN_10299eb10;
  puStack_a8 = puVar6;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x10299ffb0;
  puStack_90 = &UNK_110578a40;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar13;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar13 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar14 = puVar21;
  func_0x000107c613fc(&UNK_110578a00,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  pcStack_88 = FUN_10299eba4;
  puStack_a8 = puVar6;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x10281fbd4;
  puStack_90 = &UNK_110578a68;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar14 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  func_0x000107c613fc(&UNK_110578a00,0x18,7);
  func_0x000107c61614(puVar21 + 0x10);
  pcStack_88 = FUN_10299ec10;
  puStack_a8 = puVar6;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100262164;
  puStack_90 = &UNK_110578a90;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar21;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar15 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5677c();
  lVar38 = *(long *)(unaff_x20 + _DAT_112ed2708);
  lVar16 = 0;
  FUN_10299cae0();
  lVar18 = lVar16;
  func_0x000107c610f8();
  *(long *)(lVar18 + _DAT_112ed2678) = lVar38;
  puVar21 = PTR_s_initWithRootViewController__1125edab8;
  lStack_b8 = lVar18;
  lStack_b0 = lVar16;
  func_0x000107c61174();
  func_0x000107c61174();
  plVar17 = &lStack_b8;
  func_0x000107c61154(plVar17,puVar21,puVar15);
  func_0x000107c5677c();
  func_0x000107c569d0(plVar17);
  func_0x000107c61170(puVar15);
  uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed26e8);
  *(long **)(unaff_x20 + _DAT_112ed26e8) = plVar17;
  func_0x000107c61174();
  func_0x000107c61170(uVar39);
  lVar18 = *(long *)(unaff_x20 + _DAT_112ed27b0);
  if (lVar18 == 0) {
LAB_10299dcdc:
    lVar18 = 0;
    FUN_10299ecc8();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar18 == 0) goto LAB_10299dcdc;
  }
  puVar19 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed2750);
  puVar21 = &UNK_110578ac8;
  func_0x000107c613fc(&UNK_110578ac8,0x18,7);
  *(undefined8 *)(puVar21 + 0x10) = uVar39;
  pcStack_88 = FUN_10299ed2c;
  puStack_a8 = puVar6;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x10299ffb8;
  puStack_90 = &UNK_110578ae0;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar21;
  func_0x000107c60bc4(ppuVar12);
  puVar21 = puStack_80;
  func_0x000107c61174(uVar39);
  func_0x000107c61574(puVar21);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar20 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed2768);
  puVar21 = &UNK_110578b18;
  func_0x000107c613fc(&UNK_110578b18,0x18,7);
  *(undefined8 *)(puVar21 + 0x10) = uVar39;
  pcStack_88 = FUN_10299ed78;
  puStack_a8 = puVar6;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1012ea220;
  puStack_90 = &UNK_110578b30;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar21;
  func_0x000107c60bc4(ppuVar12);
  puVar21 = puStack_80;
  func_0x000107c61174(uVar39);
  func_0x000107c61574(puVar21);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar21 = *(undefined **)(unaff_x20 + _DAT_112ed2710);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112ed2758) + _DAT_11303f600) == 0) {
    puStack_148 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    pcStack_88 = (code *)0x10299ed80;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar6;
    uStack_a0 = 0x42000000;
    puStack_98 = (undefined *)0x10299ffbc;
    puStack_90 = &UNK_110578b58;
    ppuVar12 = &puStack_a8;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
  }
  else {
    puStack_148 = puVar21;
    func_0x0001003a5b88();
  }
  uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed2720);
  func_0x000107c439dc();
  func_0x000107c61180();
  puVar22 = &UNK_110578b90;
  func_0x000107c613fc(&UNK_110578b90,0x18,7);
  *(undefined8 *)(puVar22 + 0x10) = uVar39;
  uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed2728);
  func_0x000107c5d9b0();
  func_0x000107c61180();
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112ed2730);
  func_0x000107c5da38();
  func_0x000107c61180();
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112ed2770);
  func_0x000107c42d98();
  func_0x000107c61180();
  puVar25 = *(undefined **)(unaff_x20 + _DAT_112ed2738);
  if (puVar25 != (undefined *)0x0) {
    func_0x000107c42eac();
    func_0x000107c61180();
    if (puVar25 != (undefined *)0x0) goto LAB_10299dfd8;
  }
  puVar25 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = FUN_10299edac;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar6;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1017600fc;
  puStack_90 = &UNK_110578ba8;
  ppuVar12 = &puStack_a8;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
LAB_10299dfd8:
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112ed2740);
  func_0x000107c43a58();
  func_0x000107c61180();
  uVar37 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed2788) + _DAT_112fcd138);
  uVar34 = *(undefined8 *)(lVar38 + _DAT_112ed2950);
  puVar1 = (undefined8 *)(lVar38 + _DAT_112ed2958);
  func_0x000107c61428(puVar1,auStack_d0,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  puVar1 = (undefined8 *)(lVar38 + _DAT_112ed2960);
  func_0x000107c61428(puVar1,auStack_e8,0,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  lVar40 = *(long *)(unaff_x20 + _DAT_112ed2760);
  func_0x000107c61434(uVar4);
  func_0x000107c61174();
  func_0x000100de78a0(uVar3,uVar5);
  lVar16 = lVar40;
  func_0x000107c4141c();
  func_0x000107c61180();
  lVar27 = lVar16;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(lVar16);
  lVar16 = *(long *)(unaff_x20 + _DAT_112ed2778);
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar16 != 0) {
    uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112ed2780);
    func_0x000107c407c0();
    func_0x000107c61180();
    uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112ed2798);
    func_0x000107c4ec94();
    func_0x000107c61180();
    uVar41 = *(undefined8 *)(unaff_x20 + _DAT_112ed27a0);
    uVar35 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ed27a8) + _DAT_113097748);
    lVar30 = 0;
    FUN_1029a2738();
    lVar31 = lVar30;
    func_0x000107c610f8();
    func_0x000107c61614(lVar31 + _DAT_112ed2828,0);
    lVar7 = _DAT_112ed28b8;
    func_0x000107c61614(lVar31 + _DAT_112ed28b8,0);
    *(undefined8 *)(lVar31 + _DAT_112ed2910) = 0;
    *(undefined **)(lVar31 + _DAT_112ed2830) = puVar21;
    *(undefined **)(lVar31 + _DAT_112ed2838) = puVar19;
    *(undefined **)(lVar31 + _DAT_112ed2840) = puStack_148;
    puVar1 = (undefined8 *)(lVar31 + _DAT_112ed2848);
    *puVar1 = FUN_10299ed88;
    puVar1[1] = puVar22;
    *(undefined8 *)(lVar31 + _DAT_112ed2850) = uVar39;
    *(undefined8 *)(lVar31 + _DAT_112ed2858) = uVar23;
    *(undefined **)(lVar31 + _DAT_112ed2860) = puVar10;
    *(undefined8 *)(lVar31 + _DAT_112ed2868) = uVar9;
    *(undefined **)(lVar31 + _DAT_112ed2870) = puVar11;
    *(undefined8 *)(lVar31 + _DAT_112ed2878) = uVar36;
    *(undefined8 *)(lVar31 + _DAT_112ed2880) = uVar24;
    *(undefined **)(lVar31 + _DAT_112ed2888) = puVar25;
    *(undefined8 *)(lVar31 + _DAT_112ed2890) = uVar26;
    *(undefined **)(lVar31 + _DAT_112ed2898) = puVar13;
    *(undefined **)(lVar31 + _DAT_112ed28a0) = puVar20;
    *(undefined8 *)(lVar31 + _DAT_112ed28a8) = uVar37;
    *(undefined8 *)(lVar31 + _DAT_112ed28b0) = uVar34;
    func_0x000107c61604(lVar31 + lVar7,unaff_x20);
    puVar1 = (undefined8 *)(lVar31 + _DAT_112ed28c0);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)(lVar31 + _DAT_112ed28c8);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
    *(long *)(lVar31 + _DAT_112ed28d0) = lVar27;
    *(long *)(lVar31 + _DAT_112ed28d8) = lVar16;
    *(undefined8 *)(lVar31 + _DAT_112ed28e0) = uVar28;
    *(undefined8 *)(lVar31 + _DAT_112ed28e8) = uVar29;
    *(undefined8 *)(lVar31 + _DAT_112ed28f0) = uVar41;
    *(undefined8 *)(lVar31 + _DAT_112ed28f8) = uVar35;
    *(undefined **)(lVar31 + _DAT_112ed2900) = puVar14;
    *(long *)(lVar31 + _DAT_112ed2908) = lVar18;
    func_0x000107c615f0();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100de78a0(uVar3,uVar5);
    puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_f8 = lVar31;
    lStack_f0 = lVar30;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(uVar35);
    func_0x000107c61174();
    func_0x000107c615f0(lVar18);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar22);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar28);
    func_0x000107c61174();
    func_0x000107c61174(uVar41);
    func_0x000107c61174();
    plVar32 = &lStack_f8;
    func_0x000107c61154(plVar32,puVar6,0,0);
    func_0x000107c53dec();
    func_0x000107c5677c(plVar32);
    func_0x000107c61170(lVar27);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c615e8(uVar35);
    func_0x0001000b44c0(uVar3,uVar5);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puStack_148);
    func_0x000107c61574(puVar22);
    func_0x000107c61170(uVar39);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(uVar37);
    uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed26f0);
    *(long **)(unaff_x20 + _DAT_112ed26f0) = plVar32;
    func_0x000107c61174(plVar32);
    func_0x000107c61170(uVar39);
    func_0x000107c4141c();
    func_0x000107c61180();
    lVar16 = lVar40;
    func_0x000107c41414();
    func_0x000107c61180();
    func_0x000107c615e8(lVar40);
    lVar27 = lVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    if (lVar27 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar27;
      func_0x000107c409cc();
      func_0x000107c61180();
    }
    uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed2700);
    *(long *)(unaff_x20 + _DAT_112ed2700) = lVar16;
    func_0x000107c615f0(lVar16);
    func_0x000107c615e8(uVar39);
    func_0x000107c61604((long)plVar32 + _DAT_112ed2828,lVar16);
    func_0x000107c4f6f4(plVar17);
    puVar21 = &UNK_110578a00;
    puVar22 = puVar21;
    func_0x000107c613fc(&UNK_110578a00,0x18,7);
    func_0x000107c61614(puVar22 + 0x10,unaff_x20);
    func_0x000107c613fc(&UNK_110578a00,0x18,7);
    func_0x000107c61614(puVar21 + 0x10,unaff_x20);
    puVar25 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_10299ef28;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100e1779c;
    puStack_90 = &UNK_110578bd0;
    ppuVar33 = &puStack_a8;
    puStack_80 = puVar22;
    func_0x000107c60bc4(ppuVar33);
    pcStack_108 = FUN_10299f0dc;
    puStack_128 = puVar6;
    uStack_120 = 0x42000000;
    puStack_118 = &UNK_100e17304;
    puStack_110 = &UNK_110578bf8;
    ppuVar12 = &puStack_128;
    puStack_100 = puVar21;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c6157c(puVar22);
    func_0x000107c6157c(puVar21);
    func_0x000107c47be0();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar33);
    func_0x000107c61574(puStack_100);
    puVar6 = puStack_80;
    func_0x000107c61574(puVar22);
    func_0x000107c61574(puVar21);
    func_0x000107c61574(puVar6);
    uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ed26f8);
    *(undefined **)(unaff_x20 + _DAT_112ed26f8) = puVar25;
    func_0x000107c61174(puVar25);
    func_0x000107c615e8(uVar39);
    func_0x000107c3e2c0(*(undefined8 *)(lVar38 + _DAT_112ed2940));
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(plVar17);
    func_0x000107c615e8(lVar18);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(plVar32);
    func_0x000107c615e8(lVar27);
    func_0x000107c615e8(lVar16);
    func_0x000107c61170(puVar25);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10299e8b8);
  (*pcVar8)();
}



/* Entry: 10299e8b8; end: 10299e9ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299e8b8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar6 = *(long *)(param_1 + _DAT_112ed26e8);
    if (lVar6 == 0) {
      func_0x000107c61170();
    }
    else {
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c61174(lVar6);
      func_0x000107c4807c();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112ed27b8);
      lVar4 = 0;
      FUN_10299d354();
      lVar5 = lVar4;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar5 + _DAT_112ed26b8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar5 + _DAT_112ed26a8) = uVar7;
      *(undefined **)(lVar5 + _DAT_112ed26b0) = puVar3;
      puVar2 = PTR_s_init_1125d9248;
      lStack_68 = lVar5;
      lStack_60 = lVar4;
      func_0x000107c61174(uVar7);
      func_0x000107c61174(puVar3);
      func_0x000107c61154(&lStack_68,puVar2);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10299e9f0; end: 10299ea13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299e9f0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + _DAT_112ed26e8);
    if (lVar7 == 0) {
      func_0x000107c61170();
    }
    else {
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c61174(lVar7);
      func_0x000107c4807c();
      uVar8 = *(undefined8 *)(lVar3 + _DAT_112ed27b8);
      lVar5 = 0;
      FUN_10299d354();
      lVar6 = lVar5;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar6 + _DAT_112ed26b8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + _DAT_112ed26a8) = uVar8;
      *(undefined **)(lVar6 + _DAT_112ed26b0) = puVar4;
      puVar2 = PTR_s_init_1125d9248;
      lStack_68 = lVar6;
      lStack_60 = lVar5;
      func_0x000107c61174(uVar8);
      func_0x000107c61174(puVar4);
      func_0x000107c61154(&lStack_68,puVar2);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 10299ea14; end: 10299eb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ea14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112ed26f8);
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + _DAT_112ed2718);
      func_0x000107c615f0(lVar2);
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar1 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        func_0x000107c615f0(lVar2);
        func_0x000107c4c1e0(lVar1);
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        func_0x000107c615ec(lVar2,2);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10299eb10; end: 10299eb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299eb10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112ed26f8);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar1 + _DAT_112ed2718);
      func_0x000107c615f0(lVar3);
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar2 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar2 != 0) {
        func_0x000107c615f0(lVar3);
        func_0x000107c4c1e0(lVar2);
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c615ec(lVar3,2);
        func_0x000107c61170(lVar1);
        return;
      }
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10299eb18; end: 10299eba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10299eb18(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_112ed2748) + _DAT_113083898);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 10299eba4; end: 10299ebab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10299eba4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + _DAT_112ed2748) + _DAT_113083898);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}


