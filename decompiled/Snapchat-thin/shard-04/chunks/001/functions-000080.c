/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030dd0f8; end: 1030dd197;  */

void FUN_1030dd0f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030dd198; end: 1030dd1b7;  */

void FUN_1030dd198(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1030dd1b8; end: 1030dd21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030dd1b8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f3bb70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1030dd21c; end: 1030dd223;  */

void FUN_1030dd21c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1030dd224; end: 1030dd2c3;  */

void FUN_1030dd224(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030dd2c4; end: 1030dd2e3;  */

void FUN_1030dd2c4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1030dd2e4; end: 1030dd36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030dd2e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3bad8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f3bae0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030dd36c);
  (*pcVar2)();
}



/* Entry: 1030dd36c; end: 1030dd453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030dd36c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3bad8);
  *(undefined **)(unaff_x20 + _DAT_112f3bad8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3bae0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f3bae0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11060be30;
  func_0x000107c613fc(&UNK_11060be30,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1030dd458,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1030dd454; end: 1030dd45f;  */

void FUN_1030dd454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030dd460; end: 1030dd4bf; -[_TtC22CallUIScopeGraphBridge35CallUIScopedServicesSaberEntryPoint init] */

void FUN_1030dd460(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUIScopeGraphBridge.CallUIScopedServicesSaberEntryPoint",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030dd48c);
  (*pcVar1)();
}



/* Entry: 1030dd4c0; end: 1030dd4f7; -[_TtC22CallUIScopeGraphBridge35CallUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dd4c0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3bae0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3bad8));
  return;
}



/* Entry: 1030dd4f8; end: 1030dd4fb;  */

void FUN_1030dd4f8(void)

{
  return;
}



/* Entry: 1030dd4fc; end: 1030dd51b;  */

void FUN_1030dd4fc(void)

{
  FUN_1030dd36c();
  return;
}



/* Entry: 1030dd51c; end: 1030dd53b;  */

void FUN_1030dd51c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6740);
  return;
}



/* Entry: 1030dd53c; end: 1030dd60b;  */

undefined8 FUN_1030dd53c(void)

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
  
  func_0x000107c61428(0x112f3bb10,&uStack_40,0x20,0);
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
    FUN_1030dd60c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030dd60c; end: 1030dd62b;  */

void FUN_1030dd60c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6808);
  return;
}



/* Entry: 1030dd62c; end: 1030dd8cf;  */

void FUN_1030dd62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f3bb18,&UNK_10db88648);
  puVar1 = &UNK_11060be78;
  func_0x000107c613fc(&UNK_11060be78,0x68,7);
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
  func_0x0001000823a8(FUN_1030dd8d0,puVar1);
  return;
}



/* Entry: 1030dd8d0; end: 1030dd90b;  */

void FUN_1030dd8d0(void)

{
  long unaff_x20;
  
  func_0x0001030dd754(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1030dd90c; end: 1030dda1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dd90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb30) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb38) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb40) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb48) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb50) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb58) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb60) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb68) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bb70) = param_11;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030dda1c; end: 1030dda7b; -[_TtC22CallUIScopeGraphBridge30CallUIScopeGraphBridgeServices init] */

void FUN_1030dda1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUIScopeGraphBridge.CallUIScopeGraphBridgeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030dda48);
  (*pcVar1)();
}



/* Entry: 1030dda7c; end: 1030ddb83; -[_TtC22CallUIScopeGraphBridge30CallUIScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030dda98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ddab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ddad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ddaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ddb18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ddafc) */
/* WARNING: Removing unreachable block (ram,0x0001030ddadc) */
/* WARNING: Removing unreachable block (ram,0x0001030ddabc) */
/* WARNING: Removing unreachable block (ram,0x0001030dda9c) */
/* WARNING: Removing unreachable block (ram,0x0001030ddb1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dda7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3bb28));
  return;
}



/* Entry: 1030ddb84; end: 1030ddb8f;  */

void FUN_1030ddb84(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030de074,param_1);
  return;
}



/* Entry: 1030ddb90; end: 1030ddbcf;  */

void FUN_1030ddb90(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1030de088,0);
  return;
}



/* Entry: 1030ddbd0; end: 1030ddbdb;  */

void FUN_1030ddbd0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030de078,param_1);
  return;
}



/* Entry: 1030ddbdc; end: 1030ddc1b;  */

void FUN_1030ddbdc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1030de08c,0);
  return;
}



/* Entry: 1030ddc1c; end: 1030ddc27;  */

void FUN_1030ddc1c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030de07c,param_1);
  return;
}



/* Entry: 1030ddc28; end: 1030ddc67;  */

void FUN_1030ddc28(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1030de090,0);
  return;
}



/* Entry: 1030ddc68; end: 1030ddc73;  */

void FUN_1030ddc68(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1030ddc74,param_1);
  return;
}



/* Entry: 1030ddc74; end: 1030ddd33;  */

void FUN_1030ddc74(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1030ddd34; end: 1030ddd3f;  */

void FUN_1030ddd34(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030de080,param_1);
  return;
}



/* Entry: 1030ddd40; end: 1030ddd97;  */

void FUN_1030ddd40(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1030ddd98; end: 1030ddd9f;  */

undefined8 FUN_1030ddd98(void)

{
  return 0x1b;
}



/* Entry: 1030ddda0; end: 1030ddf17;  */

void FUN_1030ddda0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060bea0;
  func_0x000107c613fc(&UNK_11060bea0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030ddf18,puVar1);
  return;
}



/* Entry: 1030ddf18; end: 1030ddf1f;  */

void FUN_1030ddf18(undefined8 *param_1)

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
  func_0x000107c61428(0x112f3bb10,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f3bb10,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11060c078;
  func_0x000107c613fc(&UNK_11060c078,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030de06c;
  func_0x00010058fa64(0x1030de06c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030ddf20; end: 1030ddf7b;  */

void FUN_1030ddf20(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f3bb10,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f3bb10,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1030ddf7c; end: 1030de097;  */

undefined ** FUN_1030ddf7c(void)

{
  return &PTR_DAT_113066550;
}



/* Entry: 1030de098; end: 1030de0df; -[SCCallUIScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de098(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bbc8;
  func_0x000107c61428(param_1 + _DAT_112f3bbc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030de0e0; end: 1030de137; -[SCCallUIScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bbc8;
  func_0x000107c61428(param_1 + _DAT_112f3bbc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030de138; end: 1030de17f; -[SCCallUIScopeGraphBridgeSaberEntryPoint callUICameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bbd0;
  func_0x000107c61428(param_1 + _DAT_112f3bbd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030de180; end: 1030de18b; -[SCCallUIScopeGraphBridgeSaberEntryPoint setCallUICameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bbd0;
  func_0x000107c61428(param_1 + _DAT_112f3bbd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030de18c; end: 1030de1d3; -[SCCallUIScopeGraphBridgeSaberEntryPoint inAppPipCallScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de18c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bbd8;
  func_0x000107c61428(param_1 + _DAT_112f3bbd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030de1d4; end: 1030de1df; -[SCCallUIScopeGraphBridgeSaberEntryPoint setInAppPipCallScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bbd8;
  func_0x000107c61428(param_1 + _DAT_112f3bbd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030de1e0; end: 1030de227; -[SCCallUIScopeGraphBridgeSaberEntryPoint modularCallScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de1e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bbe0;
  func_0x000107c61428(param_1 + _DAT_112f3bbe0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030de228; end: 1030de233; -[SCCallUIScopeGraphBridgeSaberEntryPoint setModularCallScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bbe0;
  func_0x000107c61428(param_1 + _DAT_112f3bbe0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030de234; end: 1030de27b; -[SCCallUIScopeGraphBridgeSaberEntryPoint outOfAppPipCallScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bbe8;
  func_0x000107c61428(param_1 + _DAT_112f3bbe8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030de27c; end: 1030de287; -[SCCallUIScopeGraphBridgeSaberEntryPoint setOutOfAppPipCallScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bbe8;
  func_0x000107c61428(param_1 + _DAT_112f3bbe8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030de288; end: 1030de2cf; -[SCCallUIScopeGraphBridgeSaberEntryPoint sCLensTalkVideoHandlingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de288(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bbf0;
  func_0x000107c61428(param_1 + _DAT_112f3bbf0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030de2d0; end: 1030de2db; -[SCCallUIScopeGraphBridgeSaberEntryPoint setSCLensTalkVideoHandlingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bbf0;
  func_0x000107c61428(param_1 + _DAT_112f3bbf0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030de2dc; end: 1030de323; -[SCCallUIScopeGraphBridgeSaberEntryPoint callUIScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de2dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bbf8;
  func_0x000107c61428(param_1 + _DAT_112f3bbf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030de324; end: 1030de32f; -[SCCallUIScopeGraphBridgeSaberEntryPoint setCallUIScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bbf8;
  func_0x000107c61428(param_1 + _DAT_112f3bbf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030de330; end: 1030de38f;  */

void FUN_1030de330(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1030de390; end: 1030de77f;  */

/* WARNING: Possible PIC construction at 0x0001030de608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030de6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030de6d8) */
/* WARNING: Removing unreachable block (ram,0x0001030de6f8) */
/* WARNING: Removing unreachable block (ram,0x0001030de728) */
/* WARNING: Removing unreachable block (ram,0x0001030de718) */
/* WARNING: Removing unreachable block (ram,0x0001030de758) */
/* WARNING: Removing unreachable block (ram,0x0001030de748) */
/* WARNING: Removing unreachable block (ram,0x0001030de738) */
/* WARNING: Removing unreachable block (ram,0x0001030de684) */
/* WARNING: Removing unreachable block (ram,0x0001030de674) */
/* WARNING: Removing unreachable block (ram,0x0001030de664) */
/* WARNING: Removing unreachable block (ram,0x0001030de654) */
/* WARNING: Removing unreachable block (ram,0x0001030de62c) */
/* WARNING: Removing unreachable block (ram,0x0001030de61c) */
/* WARNING: Removing unreachable block (ram,0x0001030de60c) */
/* WARNING: Removing unreachable block (ram,0x0001030de6c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030de390(void)

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
  func_0x000107c3efc8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c45260();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c4d0d0();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c4e104();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c50f5c();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            func_0x000107c3efe8();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_1030dcb30();
              lVar4 = lVar6;
              func_0x000107c610f8();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              lVar5 = lVar3;
              FUN_1030dd53c();
              if (lVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1030de780);
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
              func_0x000100087c34(auStack_70);
              func_0x000107c61574(uStack_68);
              *(long *)(lVar4 + _DAT_112f3b658) = lVar5;
              *(long *)(lVar4 + _DAT_112f3b660) = unaff_x20;
              lStack_80 = lVar4;
              lStack_78 = lVar6;
              func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
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



/* Entry: 1030de780; end: 1030de7a7; -[SCCallUIScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1030de780(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030de390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030de7a8; end: 1030de7eb; -[SCCallUIScopeGraphBridgeSaberEntryPoint end] */

void FUN_1030de7a8(undefined8 param_1)

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



/* Entry: 1030de7ec; end: 1030deb9f;  */

void FUN_1030de7ec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0edec90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010f121370,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0edec70)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000018,0x800000010f121390,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000017;
            if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef0edec50)) ||
               (func_0x000107c605b8(0xd000000000000017,0x800000010f1213b0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c567a8();
            }
            else {
              uVar2 = 0xd00000000000001b;
              if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0edec30)) ||
                 (func_0x000107c605b8(0xd00000000000001b,0x800000010f1213d0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57104();
              }
              else {
                uVar2 = 0xd000000000000023;
                if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef0edec10)) ||
                   (func_0x000107c605b8(0xd000000000000023,0x800000010f1213f0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c58504();
                }
                else {
                  uVar2 = 0xd000000000000025;
                  if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0edebe0)) &&
                     (func_0x000107c605b8(0xd000000000000025,0x800000010f121420,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "CallUIScopeGraphBridge/SCCallUIScopeGraphBridgeSaberEntryPoint.swift"
                                        ,0x44,2,0x4d,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030deba0);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52f68();
                }
              }
            }
            goto LAB_1030de878;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55320();
        goto LAB_1030de878;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f48();
  }
LAB_1030de878:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030deba0; end: 1030dec4b; -[SCCallUIScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1030deba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030de7ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030dec4c; end: 1030decf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dec4c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f3bbc8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f3bbd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bbd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bbe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bbe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bbf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bbf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3bc00) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030decf4; end: 1030ded13; -[SCCallUIScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030decf4(void)

{
  FUN_1030dec4c();
  return;
}



/* Entry: 1030ded14; end: 1030ded47;  */

void FUN_1030ded14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ded48; end: 1030deddf; -[SCCallUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030ded74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ded94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030dedb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ded98) */
/* WARNING: Removing unreachable block (ram,0x0001030ded78) */
/* WARNING: Removing unreachable block (ram,0x0001030dedb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ded48(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3bbc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3bbd0));
  return;
}



/* Entry: 1030dede0; end: 1030dedff;  */

void FUN_1030dede0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6918);
  return;
}



/* Entry: 1030dee00; end: 1030dee0b; -[SCCallUIServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dee00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bc30;
  func_0x000107c61428(param_1 + _DAT_112f3bc30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030dee0c; end: 1030dee17; -[SCCallUIServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dee0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bc30;
  func_0x000107c61428(param_1 + _DAT_112f3bc30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030dee18; end: 1030dee23; -[SCCallUIServicesSaberEntryPoint callUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dee18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bc38;
  func_0x000107c61428(param_1 + _DAT_112f3bc38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030dee24; end: 1030dee67;  */

void FUN_1030dee24(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1030dee68; end: 1030dee73; -[SCCallUIServicesSaberEntryPoint setCallUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dee68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bc38;
  func_0x000107c61428(param_1 + _DAT_112f3bc38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030dee74; end: 1030deec7;  */

void FUN_1030dee74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030deec8; end: 1030def0f; -[SCCallUIServicesSaberEntryPoint callUIServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030deec8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bc40;
  func_0x000107c61428(param_1 + _DAT_112f3bc40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030def10; end: 1030def73; -[SCCallUIServicesSaberEntryPoint setCallUIServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030def10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bc40;
  func_0x000107c61428(param_1 + _DAT_112f3bc40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030def74; end: 1030df0f7;  */

/* WARNING: Possible PIC construction at 0x0001030df074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030df084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030df0a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030df078) */
/* WARNING: Removing unreachable block (ram,0x0001030df088) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030def74(void)

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
    func_0x000107c3efe4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3efec();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1030dcce8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f3bb28);
        *(undefined8 *)(lVar2 + _DAT_112f3b690) = uVar6;
        *(long *)(lVar2 + _DAT_112f3b698) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f3b698);
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



/* Entry: 1030df0f8; end: 1030df11f; -[SCCallUIServicesSaberEntryPoint begin] */

void FUN_1030df0f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030def74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030df120; end: 1030df163; -[SCCallUIServicesSaberEntryPoint end] */

void FUN_1030df120(undefined8 param_1)

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



/* Entry: 1030df164; end: 1030df367;  */

void FUN_1030df164(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0edeb60)) ||
       (func_0x000107c605b8(0xd00000000000001e,0x800000010f1214a0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52f64();
    }
    else {
      if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0edeb40)) {
        uVar2 = 0xd000000000000015;
        func_0x000107c605b8(0xd000000000000015,0x800000010f1214c0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CallUIScopeGraphBridge/SCCallUIServicesSaberEntryPoint.swift",0x3c,2,
                              0x3d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1030df368);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52f6c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030df368; end: 1030df413; -[SCCallUIServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030df368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030df164(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030df414; end: 1030df493; -[SCCallUIServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030df414(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3bc30,0);
  func_0x000107c61614(param_1 + _DAT_112f3bc38,0);
  *(undefined8 *)(param_1 + _DAT_112f3bc40) = 0;
  *(undefined8 *)(param_1 + _DAT_112f3bc48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030df494; end: 1030df4c7;  */

void FUN_1030df494(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030df4c8; end: 1030df51f; -[SCCallUIServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030df504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030df508) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030df4c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3bc30);
  func_0x000107c61610(param_1 + _DAT_112f3bc38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3bc40));
  return;
}



/* Entry: 1030df520; end: 1030df53f;  */

void FUN_1030df520(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6a08);
  return;
}



/* Entry: 1030df540; end: 1030df54b; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030df540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bc78;
  func_0x000107c61428(param_1 + _DAT_112f3bc78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030df54c; end: 1030df557; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030df54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bc78;
  func_0x000107c61428(param_1 + _DAT_112f3bc78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030df558; end: 1030df563; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider callUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030df558(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bc80;
  func_0x000107c61428(param_1 + _DAT_112f3bc80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030df564; end: 1030df5a7;  */

void FUN_1030df564(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1030df5a8; end: 1030df5b3; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider setCallUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030df5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bc80;
  func_0x000107c61428(param_1 + _DAT_112f3bc80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030df5b4; end: 1030df607;  */

void FUN_1030df5b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030df608; end: 1030df81b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030df608(void)

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
    func_0x000107c3efe4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001030dcd98();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f3bb48);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f3bc88);
      *(long *)(unaff_x20 + _DAT_112f3bc88) = lVar4;
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
                      "CallUIScopeGraphBridge/SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider.swift"
                      ,0x59,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030df734);
  (*pcVar1)();
}



/* Entry: 1030df81c; end: 1030df84f; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider provide] */

void FUN_1030df81c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030df608();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030df850; end: 1030df883; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider __safeProvide] */

void FUN_1030df850(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001030df734();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030df884; end: 1030df8c7; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider end] */

void FUN_1030df884(undefined8 param_1)

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



/* Entry: 1030df8c8; end: 1030dfa5f;  */

void FUN_1030df8c8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0edeb60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f1214a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CallUIScopeGraphBridge/SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider.swift"
                            ,0x59,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030dfa60);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030dfa60; end: 1030dfb0b; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1030dfa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030df8c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030dfb0c; end: 1030dfb7f; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dfb0c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3bc78,0);
  func_0x000107c61614(param_1 + _DAT_112f3bc80,0);
  *(undefined8 *)(param_1 + _DAT_112f3bc88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030dfb80; end: 1030dfbb3;  */

void FUN_1030dfb80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030dfbb4; end: 1030dfbfb; -[SCSCCameraDeviceSettingsResolverServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dfbb4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3bc78);
  func_0x000107c61610(param_1 + _DAT_112f3bc80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3bc88));
  return;
}



/* Entry: 1030dfbfc; end: 1030dfc1b;  */

void FUN_1030dfbfc(void)

{
  func_0x000107c61168(&PTR_PTR_112f3bcd0);
  return;
}



/* Entry: 1030dfc1c; end: 1030dfc27; -[SCSCConnectedLensInTalkServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dfc1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bd38;
  func_0x000107c61428(param_1 + _DAT_112f3bd38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030dfc28; end: 1030dfc33; -[SCSCConnectedLensInTalkServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dfc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bd38;
  func_0x000107c61428(param_1 + _DAT_112f3bd38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030dfc34; end: 1030dfc3f; -[SCSCConnectedLensInTalkServicesSaberServiceProvider callUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dfc34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bd40;
  func_0x000107c61428(param_1 + _DAT_112f3bd40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030dfc40; end: 1030dfc83;  */

void FUN_1030dfc40(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1030dfc84; end: 1030dfc8f; -[SCSCConnectedLensInTalkServicesSaberServiceProvider setCallUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030dfc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bd40;
  func_0x000107c61428(param_1 + _DAT_112f3bd40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030dfc90; end: 1030dfce3;  */

void FUN_1030dfc90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


