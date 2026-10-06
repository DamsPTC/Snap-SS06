/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10201320c; end: 102013293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10201320c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50078) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e50080);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102013294);
  (*pcVar2)();
}



/* Entry: 102013294; end: 10201337b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102013294(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50078);
  *(undefined **)(unaff_x20 + _DAT_112e50078) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50080);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e50080))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bc938;
  func_0x000107c613fc(&UNK_1104bc938,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102013380,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10201337c; end: 102013387;  */

void FUN_10201337c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102013388; end: 1020133e7; -[_TtC31SharedStoryMenuScopeGraphBridge46SCSharedStoryMenuScopedServicesSaberEntryPoint init] */

void FUN_102013388(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryMenuScopeGraphBridge.SCSharedStoryMenuScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020133b4);
  (*pcVar1)();
}



/* Entry: 1020133e8; end: 10201341f; -[_TtC31SharedStoryMenuScopeGraphBridge46SCSharedStoryMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020133e8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e50080));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50078));
  return;
}



/* Entry: 102013420; end: 102013423;  */

void FUN_102013420(void)

{
  return;
}



/* Entry: 102013424; end: 102013443;  */

void FUN_102013424(void)

{
  FUN_102013294();
  return;
}



/* Entry: 102013444; end: 102013463;  */

void FUN_102013444(void)

{
  func_0x000107c61168(&PTR_PTR_112817218);
  return;
}



/* Entry: 102013464; end: 102013533;  */

undefined8 FUN_102013464(void)

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
  
  func_0x000107c61428(0x112e500b0,&uStack_40,0x20,0);
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
    FUN_102013534();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102013534; end: 102013553;  */

void FUN_102013534(void)

{
  func_0x000107c61168(&PTR_PTR_1128172e0);
  return;
}



/* Entry: 102013554; end: 102013577;  */

void FUN_102013554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bc980;
  func_0x0001000285a8(0x112e500b8,&UNK_10da4dcf8);
  func_0x000107c613fc(&UNK_1104bc980,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1020135fc,puVar1);
  return;
}



/* Entry: 102013578; end: 1020135fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013578(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102013534();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e500c0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e500c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1020135fc; end: 102013603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020135fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_102013534();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e500c0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e500c8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102013604; end: 102013667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013604(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e500c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e500c8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102013668; end: 1020136c7; -[_TtC31SharedStoryMenuScopeGraphBridge39SharedStoryMenuScopeGraphBridgeServices init] */

void FUN_102013668(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryMenuScopeGraphBridge.SharedStoryMenuScopeGraphBridgeServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102013694);
  (*pcVar1)();
}



/* Entry: 1020136c8; end: 10201373f; -[_TtC31SharedStoryMenuScopeGraphBridge39SharedStoryMenuScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020136e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020136e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020136c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e500c0));
  return;
}



/* Entry: 102013740; end: 10201374b;  */

void FUN_102013740(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102013b3c,param_1);
  return;
}



/* Entry: 10201374c; end: 1020137d7;  */

void FUN_10201374c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102013b44,0);
  return;
}



/* Entry: 1020137d8; end: 1020137e3;  */

void FUN_1020137d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10201383c,param_1);
  return;
}



/* Entry: 1020137e4; end: 10201383b;  */

void FUN_1020137e4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10201383c; end: 10201386f;  */

void FUN_10201383c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102013870; end: 10201389b;  */

undefined8 FUN_102013870(void)

{
  return 0x1b;
}



/* Entry: 10201389c; end: 10201391b;  */

void FUN_10201389c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 10201391c; end: 102013a13;  */

void FUN_10201391c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e500b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e500b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bcac0;
  func_0x000107c613fc(&UNK_1104bcac0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102013b34;
  func_0x00010058fa64(0x102013b34,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102013a14; end: 102013a3f;  */

void FUN_102013a14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102013a40; end: 102013a47;  */

void FUN_102013a40(undefined8 *param_1)

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
  func_0x000107c61428(0x112e500b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e500b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bcac0;
  func_0x000107c613fc(&UNK_1104bcac0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102013b34;
  func_0x00010058fa64(0x102013b34,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102013a48; end: 102013aa3;  */

void FUN_102013a48(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e500b0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e500b0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102013aa4; end: 102013b47;  */

undefined ** FUN_102013aa4(void)

{
  return &PTR_DAT_11306f260;
}



/* Entry: 102013b48; end: 102013b8f; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013b48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50120;
  func_0x000107c61428(param_1 + _DAT_112e50120,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102013b90; end: 102013be7; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50120;
  func_0x000107c61428(param_1 + _DAT_112e50120,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102013be8; end: 102013c2f; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint sCCustomStoryMembersScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013be8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50128;
  func_0x000107c61428(param_1 + _DAT_112e50128,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102013c30; end: 102013c3b; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint setSCCustomStoryMembersScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50128;
  func_0x000107c61428(param_1 + _DAT_112e50128,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102013c3c; end: 102013c83; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint sCSaveStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013c3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50130;
  func_0x000107c61428(param_1 + _DAT_112e50130,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102013c84; end: 102013c8f; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint setSCSaveStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50130;
  func_0x000107c61428(param_1 + _DAT_112e50130,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102013c90; end: 102013cd7; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint sharedStoryMenuScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013c90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50138;
  func_0x000107c61428(param_1 + _DAT_112e50138,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102013cd8; end: 102013ce3; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint setSharedStoryMenuScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50138;
  func_0x000107c61428(param_1 + _DAT_112e50138,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102013ce4; end: 102013d43;  */

void FUN_102013ce4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102013d44; end: 102013f7b;  */

/* WARNING: Possible PIC construction at 0x000102013eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102013ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102013edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102013eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102013f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102013f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102013ef0) */
/* WARNING: Removing unreachable block (ram,0x000102013ee0) */
/* WARNING: Removing unreachable block (ram,0x000102013ec4) */
/* WARNING: Removing unreachable block (ram,0x000102013eb4) */
/* WARNING: Removing unreachable block (ram,0x000102013f54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102013d44(void)

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
  func_0x000107c50ce0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51248();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c5aa40();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1020131ec();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102013464();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102013f7c);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e50040) = lVar5;
        *(long *)(lVar4 + _DAT_112e50048) = unaff_x20;
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



/* Entry: 102013f7c; end: 102013fa3; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102013f7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102013d44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102013fa4; end: 102013fe7; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint end] */

void FUN_102013fa4(undefined8 param_1)

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



/* Entry: 102013fe8; end: 102014257;  */

void FUN_102013fe8(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0faa420)) ||
       (func_0x000107c605b8(0xd000000000000020,0x800000010f055be0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58288();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef0faa3c0)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010f055c40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0fa8b00)) &&
             (func_0x000107c605b8(0xd00000000000002e,0x800000010f057500,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SharedStoryMenuScopeGraphBridge/SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x56,2,0x3f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102014258);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59094();
          goto LAB_102014074;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c587f0();
    }
  }
LAB_102014074:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102014258; end: 102014303; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102014258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102013fe8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102014304; end: 102014387; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102014304(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50120,0);
  *(undefined8 *)(param_1 + _DAT_112e50128) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50130) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50138) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50140) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102014388; end: 1020143bb;  */

void FUN_102014388(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020143bc; end: 102014423; -[SCSharedStoryMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020143e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102014408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020143ec) */
/* WARNING: Removing unreachable block (ram,0x00010201440c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020143bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50128));
  return;
}



/* Entry: 102014424; end: 102014443;  */

void FUN_102014424(void)

{
  func_0x000107c61168(&PTR_PTR_1128173a8);
  return;
}



/* Entry: 102014444; end: 10201448b; -[SCSCSharedStoryMenuScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102014444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50170;
  func_0x000107c61428(param_1 + _DAT_112e50170,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10201448c; end: 1020144e3; -[SCSCSharedStoryMenuScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201448c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50170;
  func_0x000107c61428(param_1 + _DAT_112e50170,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020144e4; end: 1020145bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020144e4(undefined8 param_1,long param_2)

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
    FUN_102013444();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e50078) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020145bc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e50080);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e50178);
    *(long **)(unaff_x20 + _DAT_112e50178) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1020145bc; end: 1020145e3; -[SCSCSharedStoryMenuScopedServicesSaberEntryPoint begin] */

void FUN_1020145bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020144e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020145e4; end: 10201475b;  */

/* WARNING: Possible PIC construction at 0x00010201464c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020146e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102014650) */
/* WARNING: Removing unreachable block (ram,0x0001020146e8) */
/* WARNING: Removing unreachable block (ram,0x000102014700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020145e4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e50178);
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



/* Entry: 10201475c; end: 102014763;  */

void FUN_10201475c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102014764; end: 102014797; -[SCSCSharedStoryMenuScopedServicesSaberEntryPoint end] */

void FUN_102014764(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020145e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102014798; end: 1020148b7;  */

void FUN_102014798(long param_1,long param_2,long param_3)

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
                        "SharedStoryMenuScopeGraphBridge/SCSCSharedStoryMenuScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x33,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020148b8);
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



/* Entry: 1020148b8; end: 102014963; -[SCSCSharedStoryMenuScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1020148b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102014798(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102014964; end: 1020149c3; -[SCSCSharedStoryMenuScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102014964(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50170,0);
  *(undefined8 *)(param_1 + _DAT_112e50178) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020149c4; end: 1020149f7;  */

void FUN_1020149c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020149f8; end: 102014a2f; -[SCSCSharedStoryMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020149f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50178));
  return;
}



/* Entry: 102014a30; end: 102014a4f;  */

void FUN_102014a30(void)

{
  func_0x000107c61168(&PTR_PTR_112817480);
  return;
}



/* Entry: 102014a50; end: 102014abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102014a50(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102014e44();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e501b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102014abc; end: 102014b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102014abc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e501b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102014b28; end: 102014b87; -[_TtC48StoriesRepostMentionScopedFactoryServiceProvider36SCStoriesRepostMentionScopedServices init] */

void FUN_102014b28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesRepostMentionScopedFactoryServiceProvider.SCStoriesRepostMentionScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102014b54);
  (*pcVar1)();
}



/* Entry: 102014b88; end: 102014b97; -[_TtC48StoriesRepostMentionScopedFactoryServiceProvider36SCStoriesRepostMentionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102014b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e501b0));
  return;
}



/* Entry: 102014b98; end: 102014c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102014b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bccd8;
  func_0x000107c613fc(&UNK_1104bccd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102014edc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102014c04; end: 102014c9f;  */

void FUN_102014c04(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bcbe8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bcbe8;
  return;
}



/* Entry: 102014ca0; end: 102014cd7;  */

void FUN_102014ca0(long *param_1)

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



/* Entry: 102014cd8; end: 102014cdf;  */

undefined8 FUN_102014cd8(void)

{
  return 0x1b;
}



/* Entry: 102014ce0; end: 102014e13;  */

void FUN_102014ce0(undefined8 *param_1)

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
  puVar1 = &UNK_1104bcd00;
  func_0x000107c613fc(&UNK_1104bcd00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102014eb4;
  func_0x00010058fa64(FUN_102014eb4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102014e14; end: 102014e43;  */

undefined ** FUN_102014e14(void)

{
  return &PTR_DAT_113076c50;
}



/* Entry: 102014e44; end: 102014e63;  */

void FUN_102014e44(void)

{
  func_0x000107c61168(&PTR_PTR_112817540);
  return;
}



/* Entry: 102014e64; end: 102014eb3;  */

undefined1  [16] FUN_102014e64(void)

{
  return ZEXT816(0x1104bcc38);
}



/* Entry: 102014eb4; end: 102014edb;  */

void FUN_102014eb4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102014edc; end: 102014edf;  */

void FUN_102014edc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102014ee0; end: 102014f4b;  */

void FUN_102014ee0(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e50220,&UNK_10da4e248);
  func_0x000107c613fc();
  pcVar1 = FUN_102014f5c;
  func_0x0001000841fc(FUN_102014f5c,0);
  func_0x000100084214(&UNK_10da4e210,0x32,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102014f4c; end: 102014f5b;  */

undefined1  [16] FUN_102014f4c(void)

{
  return ZEXT816(0x1104bcd40);
}



/* Entry: 102014f5c; end: 1020151d3;  */

void FUN_102014f5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112e50228,&UNK_10da4e250);
  puVar1 = &uStack_68;
  uStack_68 = uVar7;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_102014ca0;
  func_0x0001000823a8(FUN_102014ca0,0);
  pcVar3 = "SCStoriesRepostMentionScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCStoriesRepostMentionScopedServicesCleanupRelayServiceProvider",0x3f,2);
  FUN_1020159a0();
  func_0x000100082720("StoriesRepostMentionScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e50230,&UNK_10da4e260);
  puVar4 = &UNK_1104bcd60;
  func_0x000107c613fc(&UNK_1104bcd60,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(code **)(puVar4 + 0x18) = pcVar2;
  *(char **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_1020151d4;
  func_0x0001000823a8(FUN_1020151d4,puVar4);
  func_0x000100082720("SCStoriesRepostMentionScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e501b8,&UNK_10da4dfb0);
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x1020151e0;
  func_0x0001000823a8(0x1020151e0,pcVar5);
  func_0x000100082720("SCStoriesRepostMentionScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e501a8,&UNK_10da4dfa0);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x1020151e8;
  func_0x0001000823a8(0x1020151e8,uVar7);
  func_0x000100082720("SCStoriesRepostMentionScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1104bcd88;
  func_0x000107c613fc(&UNK_1104bcd88,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar6 = 0x1020151f0;
  func_0x0001000823a8(0x1020151f0,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCStoriesRepostMentionScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 1020151d4; end: 1020151f7;  */

void FUN_1020151d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102015234(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCStoriesRepostMentionScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020151f8; end: 102015233;  */

void FUN_1020151f8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102015234();
  func_0x0001000a7f38("SCStoriesRepostMentionScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 102015234; end: 102015473;  */

void FUN_102015234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110767c40;
  ppuVar4 = &PTR_DAT_113076c50;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104bcdb0;
  func_0x000107c613fc(&UNK_1104bcdb0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e50238;
  func_0x0001000285a8(0x112e50238,&UNK_10da4e268);
  func_0x0001000a6ee8(&UNK_1104bcc78,
                      "SCStoriesRepostMentionScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_102015474,puVar2,uVar3,&UNK_1104bcc78,&PTR_DAT_112e501c0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104bcdd8;
  func_0x000107c613fc(&UNK_1104bcdd8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bcf90,
                      "StoriesRepostMentionScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_10201547c,puVar2,uVar3,&UNK_1104bcf90,&PTR_DAT_112e502c8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e50240;
  func_0x0001000285a8(0x112e50240,&UNK_10da4e270);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102015474; end: 10201547b;  */

void FUN_102015474(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bce00;
  func_0x000107c613fc(&UNK_1104bce00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1020154e8;
  func_0x0001000823a8(FUN_1020154e8,puVar3);
  func_0x000100082720("SCStoriesRepostMentionScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 10201547c; end: 1020154bb;  */

void FUN_10201547c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102015a84(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StoriesRepostMentionScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1020154bc; end: 1020154e7;  */

void FUN_1020154bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020154e8; end: 1020154ef;  */

void FUN_1020154e8(undefined8 *param_1)

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
  puVar1 = &UNK_1104bcd00;
  func_0x000107c613fc(&UNK_1104bcd00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102014eb4;
  func_0x00010058fa64(FUN_102014eb4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1020154f0; end: 102015577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020154f0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1020158b0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e50248) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e50250) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102015578);
  (*pcVar1)();
}



/* Entry: 102015578; end: 1020155d7; -[_TtC36StoriesRepostMentionScopeGraphBridge51StoriesRepostMentionScopeGraphBridgeSaberEntryPoint init] */

void FUN_102015578(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesRepostMentionScopeGraphBridge.StoriesRepostMentionScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020155a4);
  (*pcVar1)();
}



/* Entry: 1020155d8; end: 10201560f; -[_TtC36StoriesRepostMentionScopeGraphBridge51StoriesRepostMentionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020155f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020155f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020155d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50248));
  return;
}



/* Entry: 102015610; end: 102015637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102015610(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e50250),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e50248));
  return;
}



/* Entry: 102015638; end: 102015657;  */

void FUN_102015638(void)

{
  func_0x000107c61168(&PTR_PTR_112817600);
  return;
}



/* Entry: 102015658; end: 1020156df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102015658(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50280) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e50288);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020156e0);
  (*pcVar2)();
}



/* Entry: 1020156e0; end: 1020157c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020156e0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50280);
  *(undefined **)(unaff_x20 + _DAT_112e50280) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50288);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e50288))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bcef0;
  func_0x000107c613fc(&UNK_1104bcef0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1020157cc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1020157c8; end: 1020157d3;  */

void FUN_1020157c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1020157d4; end: 102015833; -[_TtC36StoriesRepostMentionScopeGraphBridge51SCStoriesRepostMentionScopedServicesSaberEntryPoint init] */

void FUN_1020157d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesRepostMentionScopeGraphBridge.SCStoriesRepostMentionScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102015800);
  (*pcVar1)();
}



/* Entry: 102015834; end: 10201586b; -[_TtC36StoriesRepostMentionScopeGraphBridge51SCStoriesRepostMentionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102015834(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e50288));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50280));
  return;
}



/* Entry: 10201586c; end: 10201586f;  */

void FUN_10201586c(void)

{
  return;
}



/* Entry: 102015870; end: 10201588f;  */

void FUN_102015870(void)

{
  FUN_1020156e0();
  return;
}



/* Entry: 102015890; end: 1020158af;  */

void FUN_102015890(void)

{
  func_0x000107c61168(&PTR_PTR_1128176c8);
  return;
}



/* Entry: 1020158b0; end: 10201597f;  */

undefined8 FUN_1020158b0(void)

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
  
  func_0x000107c61428(0x112e502b8,&uStack_40,0x20,0);
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
    FUN_102015980();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102015980; end: 10201599f;  */

void FUN_102015980(void)

{
  func_0x000107c61168(&PTR_PTR_112817790);
  return;
}



/* Entry: 1020159a0; end: 102015a0b;  */

void FUN_1020159a0(void)

{
  func_0x0001000285a8(0x112e502c0,&UNK_10da4e348);
  func_0x0001000823a8(0x1020159e0,0);
  return;
}



/* Entry: 102015a0c; end: 102015a47; -[_TtC36StoriesRepostMentionScopeGraphBridge44StoriesRepostMentionScopeGraphBridgeServices init] */

void FUN_102015a0c(undefined8 param_1)

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


