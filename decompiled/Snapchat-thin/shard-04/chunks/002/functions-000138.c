/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031ce5f0; end: 1031ce707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1031ce5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031cebf8();
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
    *(long *)(unaff_x20 + _DAT_112f4a5c0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f4a5c8) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031ce708);
  (*pcVar2)();
}



/* Entry: 1031ce708; end: 1031ce767; -[_TtC38ContentProductPlaybackScopeGraphBridge53ContentProductPlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031ce708(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackScopeGraphBridge.ContentProductPlaybackScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ce734);
  (*pcVar1)();
}



/* Entry: 1031ce768; end: 1031ce79f; -[_TtC38ContentProductPlaybackScopeGraphBridge53ContentProductPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031ce784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ce788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ce768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a5c0));
  return;
}



/* Entry: 1031ce7a0; end: 1031ce7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ce7a0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f4a5c8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f4a5c0));
  return;
}



/* Entry: 1031ce7c8; end: 1031ce7e7;  */

void FUN_1031ce7c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1040);
  return;
}



/* Entry: 1031ce7e8; end: 1031ce883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031ce7e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f4a678);
  *(undefined8 *)(unaff_x20 + _DAT_112f4a5f8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a600) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1031ce884; end: 1031ce8e3; -[_TtC38ContentProductPlaybackScopeGraphBridge51SCContentProductPlaybackDataServicesSaberEntryPoint init] */

void FUN_1031ce884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackScopeGraphBridge.SCContentProductPlaybackDataServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ce8b0);
  (*pcVar1)();
}



/* Entry: 1031ce8e4; end: 1031ce977; -[_TtC38ContentProductPlaybackScopeGraphBridge51SCContentProductPlaybackDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ce8e4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f4a5f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a600));
  return;
}



/* Entry: 1031ce978; end: 1031ce97f;  */

undefined8 FUN_1031ce978(void)

{
  return 0;
}



/* Entry: 1031ce980; end: 1031ce99f;  */

void FUN_1031ce980(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1108);
  return;
}



/* Entry: 1031ce9a0; end: 1031cea27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031ce9a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a630) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f4a638);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031cea28);
  (*pcVar2)();
}



/* Entry: 1031cea28; end: 1031ceb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031cea28(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4a630);
  *(undefined **)(unaff_x20 + _DAT_112f4a630) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4a638);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f4a638))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11061f068;
  func_0x000107c613fc(&UNK_11061f068,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031ceb14,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031ceb10; end: 1031ceb1b;  */

void FUN_1031ceb10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031ceb1c; end: 1031ceb7b; -[_TtC38ContentProductPlaybackScopeGraphBridge53SCContentProductPlaybackScopedServicesSaberEntryPoint init] */

void FUN_1031ceb1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackScopeGraphBridge.SCContentProductPlaybackScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ceb48);
  (*pcVar1)();
}



/* Entry: 1031ceb7c; end: 1031cebb3; -[_TtC38ContentProductPlaybackScopeGraphBridge53SCContentProductPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ceb7c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4a638));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a630));
  return;
}



/* Entry: 1031cebb4; end: 1031cebb7;  */

void FUN_1031cebb4(void)

{
  return;
}



/* Entry: 1031cebb8; end: 1031cebd7;  */

void FUN_1031cebb8(void)

{
  FUN_1031cea28();
  return;
}



/* Entry: 1031cebd8; end: 1031cebf7;  */

void FUN_1031cebd8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c11d0);
  return;
}



/* Entry: 1031cebf8; end: 1031cecc7;  */

undefined8 FUN_1031cebf8(void)

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
  
  func_0x000107c61428(0x112f4a668,&uStack_40,0x20,0);
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
    FUN_1031cecc8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1031cecc8; end: 1031cece7;  */

void FUN_1031cecc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1298);
  return;
}



/* Entry: 1031cece8; end: 1031cee23;  */

void FUN_1031cece8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4a670,&UNK_10db99048);
  puVar1 = &UNK_11061f0b0;
  func_0x000107c613fc(&UNK_11061f0b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1031cee24,puVar1);
  return;
}



/* Entry: 1031cee24; end: 1031cee2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cee24(undefined8 *param_1)

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
  FUN_1031cecc8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f4a678) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f4a680) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f4a688) = uVar7;
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



/* Entry: 1031cee30; end: 1031ceea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cee30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a678) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a680) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a688) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031ceea4; end: 1031cef03; -[_TtC38ContentProductPlaybackScopeGraphBridge46ContentProductPlaybackScopeGraphBridgeServices init] */

void FUN_1031ceea4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackScopeGraphBridge.ContentProductPlaybackScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ceed0);
  (*pcVar1)();
}



/* Entry: 1031cef04; end: 1031cef8b; -[_TtC38ContentProductPlaybackScopeGraphBridge46ContentProductPlaybackScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031cef20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cef24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cef04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4a678));
  return;
}



/* Entry: 1031cef8c; end: 1031cef97;  */

void FUN_1031cef8c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1031cf338,param_1);
  return;
}



/* Entry: 1031cef98; end: 1031cf023;  */

void FUN_1031cef98(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1031cf340,0);
  return;
}



/* Entry: 1031cf024; end: 1031cf02f;  */

void FUN_1031cf024(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1031cf088,param_1);
  return;
}



/* Entry: 1031cf030; end: 1031cf087;  */

void FUN_1031cf030(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1031cf088; end: 1031cf0bb;  */

void FUN_1031cf088(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1031cf0bc; end: 1031cf0c3;  */

undefined8 FUN_1031cf0bc(void)

{
  return 0x1b;
}



/* Entry: 1031cf0c4; end: 1031cf23b;  */

void FUN_1031cf0c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061f0d8;
  func_0x000107c613fc(&UNK_11061f0d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031cf23c,puVar1);
  return;
}



/* Entry: 1031cf23c; end: 1031cf243;  */

void FUN_1031cf23c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f4a668,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f4a668,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061f1f0;
  func_0x000107c613fc(&UNK_11061f1f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031cf330;
  func_0x00010058fa64(0x1031cf330,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031cf244; end: 1031cf29f;  */

void FUN_1031cf244(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f4a668,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f4a668,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1031cf2a0; end: 1031cf343;  */

undefined ** FUN_1031cf2a0(void)

{
  return &PTR_DAT_113066940;
}



/* Entry: 1031cf344; end: 1031cf38b; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf344(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a6e0;
  func_0x000107c61428(param_1 + _DAT_112f4a6e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031cf38c; end: 1031cf3e3; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a6e0;
  func_0x000107c61428(param_1 + _DAT_112f4a6e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031cf3e4; end: 1031cf42b; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint sCDiscoverFeedUpNextV2PlaybackSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf3e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a6e8;
  func_0x000107c61428(param_1 + _DAT_112f4a6e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031cf42c; end: 1031cf437; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint setSCDiscoverFeedUpNextV2PlaybackSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a6e8;
  func_0x000107c61428(param_1 + _DAT_112f4a6e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031cf438; end: 1031cf47f; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint sCOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a6f0;
  func_0x000107c61428(param_1 + _DAT_112f4a6f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031cf480; end: 1031cf48b; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint setSCOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a6f0;
  func_0x000107c61428(param_1 + _DAT_112f4a6f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031cf48c; end: 1031cf4d3; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint contentProductPlaybackScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf48c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a6f8;
  func_0x000107c61428(param_1 + _DAT_112f4a6f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031cf4d4; end: 1031cf4df; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint setContentProductPlaybackScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a6f8;
  func_0x000107c61428(param_1 + _DAT_112f4a6f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031cf4e0; end: 1031cf53f;  */

void FUN_1031cf4e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1031cf540; end: 1031cf777;  */

/* WARNING: Possible PIC construction at 0x0001031cf6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cf6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cf6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cf6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cf704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cf74c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cf6ec) */
/* WARNING: Removing unreachable block (ram,0x0001031cf6dc) */
/* WARNING: Removing unreachable block (ram,0x0001031cf6c0) */
/* WARNING: Removing unreachable block (ram,0x0001031cf6b0) */
/* WARNING: Removing unreachable block (ram,0x0001031cf750) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cf540(void)

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
  func_0x000107c50d4c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c5113c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c404b8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1031ce7c8();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_1031cebf8();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031cf778);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112f4a5c0) = lVar5;
        *(long *)(lVar4 + _DAT_112f4a5c8) = unaff_x20;
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



/* Entry: 1031cf778; end: 1031cf79f; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1031cf778(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031cf540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031cf7a0; end: 1031cf7e3; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint end] */

void FUN_1031cf7a0(undefined8 param_1)

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



/* Entry: 1031cf7e4; end: 1031cfa53;  */

void FUN_1031cf7e4(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000031;
    if (((param_2 == -0x2fffffffffffffcf) && (param_3 == -0x7ffffffef0fae4f0)) ||
       (func_0x000107c605b8(0xd000000000000031,0x800000010f051b10,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c582f4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fae4b0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001a,0x800000010f051b50,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000035;
          if (((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0ed13e0)) &&
             (func_0x000107c605b8(0xd000000000000035,0x800000010f12ec20,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ContentProductPlaybackScopeGraphBridge/SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint.swift"
                                ,100,2,0x3a,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1031cfa54);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5385c();
          goto LAB_1031cf870;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c586e4();
    }
  }
LAB_1031cf870:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031cfa54; end: 1031cfaff; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031cfa54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031cf7e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031cfb00; end: 1031cfb83; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfb00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4a6e0,0);
  *(undefined8 *)(param_1 + _DAT_112f4a6e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4a6f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4a6f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4a700) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031cfb84; end: 1031cfbb7;  */

void FUN_1031cfb84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031cfbb8; end: 1031cfc1f; -[SCContentProductPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031cfbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cfc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cfbe8) */
/* WARNING: Removing unreachable block (ram,0x0001031cfc08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfbb8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4a6e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a6e8));
  return;
}



/* Entry: 1031cfc20; end: 1031cfc3f;  */

void FUN_1031cfc20(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1368);
  return;
}



/* Entry: 1031cfc40; end: 1031cfc4b; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfc40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a730;
  func_0x000107c61428(param_1 + _DAT_112f4a730,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031cfc4c; end: 1031cfc57; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfc4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a730;
  func_0x000107c61428(param_1 + _DAT_112f4a730,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031cfc58; end: 1031cfc63; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint contentProductPlaybackScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfc58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a738;
  func_0x000107c61428(param_1 + _DAT_112f4a738,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031cfc64; end: 1031cfca7;  */

void FUN_1031cfc64(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1031cfca8; end: 1031cfcb3; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint setContentProductPlaybackScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a738;
  func_0x000107c61428(param_1 + _DAT_112f4a738,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031cfcb4; end: 1031cfd07;  */

void FUN_1031cfcb4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031cfd08; end: 1031cfd4f; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint sCContentProductPlaybackDataServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfd08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a740;
  func_0x000107c61428(param_1 + _DAT_112f4a740,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031cfd50; end: 1031cfdb3; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint setSCContentProductPlaybackDataServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a740;
  func_0x000107c61428(param_1 + _DAT_112f4a740,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031cfdb4; end: 1031cff37;  */

/* WARNING: Possible PIC construction at 0x0001031cfeb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cfec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cfee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cfeb8) */
/* WARNING: Removing unreachable block (ram,0x0001031cfec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cfdb4(void)

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
    func_0x000107c404b4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50c54();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1031ce980();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f4a678);
        *(undefined8 *)(lVar2 + _DAT_112f4a5f8) = uVar6;
        *(long *)(lVar2 + _DAT_112f4a600) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f4a600);
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



/* Entry: 1031cff38; end: 1031cff5f; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint begin] */

void FUN_1031cff38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031cfdb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031cff60; end: 1031cffa3; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint end] */

void FUN_1031cff60(undefined8 param_1)

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



/* Entry: 1031cffa4; end: 1031d01a7;  */

void FUN_1031cffa4(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef0ed1330)) ||
       (func_0x000107c605b8(0xd00000000000002e,0x800000010f12ecd0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53858();
    }
    else {
      if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0ed1300)) {
        uVar2 = 0xd00000000000002b;
        func_0x000107c605b8(0xd00000000000002b,0x800000010f12ed00,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ContentProductPlaybackScopeGraphBridge/SCSCContentProductPlaybackDataServicesSaberEntryPoint.swift"
                              ,0x62,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d01a8);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c581fc();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031d01a8; end: 1031d0253; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031d01a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031cffa4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031d0254; end: 1031d02d3; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d0254(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4a730,0);
  func_0x000107c61614(param_1 + _DAT_112f4a738,0);
  *(undefined8 *)(param_1 + _DAT_112f4a740) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4a748) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d02d4; end: 1031d0307;  */

void FUN_1031d02d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031d0308; end: 1031d035f; -[SCSCContentProductPlaybackDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031d0344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d0348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d0308(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4a730);
  func_0x000107c61610(param_1 + _DAT_112f4a738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a740));
  return;
}



/* Entry: 1031d0360; end: 1031d037f;  */

void FUN_1031d0360(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1440);
  return;
}



/* Entry: 1031d0380; end: 1031d03c7; -[SCSCContentProductPlaybackScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d0380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a778;
  func_0x000107c61428(param_1 + _DAT_112f4a778,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031d03c8; end: 1031d041f; -[SCSCContentProductPlaybackScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d03c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a778;
  func_0x000107c61428(param_1 + _DAT_112f4a778,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031d0420; end: 1031d04f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d0420(undefined8 param_1,long param_2)

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
    FUN_1031cebd8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f4a630) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d04f8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f4a638);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4a780);
    *(long **)(unaff_x20 + _DAT_112f4a780) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1031d04f8; end: 1031d051f; -[SCSCContentProductPlaybackScopedServicesSaberEntryPoint begin] */

void FUN_1031d04f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031d0420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031d0520; end: 1031d0697;  */

/* WARNING: Possible PIC construction at 0x0001031d0588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d0620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d058c) */
/* WARNING: Removing unreachable block (ram,0x0001031d0624) */
/* WARNING: Removing unreachable block (ram,0x0001031d063c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d0520(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4a780);
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



/* Entry: 1031d0698; end: 1031d069f;  */

void FUN_1031d0698(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031d06a0; end: 1031d06d3; -[SCSCContentProductPlaybackScopedServicesSaberEntryPoint end] */

void FUN_1031d06a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031d0520();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031d06d4; end: 1031d07f3;  */

void FUN_1031d06d4(long param_1,long param_2,long param_3)

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
                        "ContentProductPlaybackScopeGraphBridge/SCSCContentProductPlaybackScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d07f4);
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



/* Entry: 1031d07f4; end: 1031d089f; -[SCSCContentProductPlaybackScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031d07f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031d06d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031d08a0; end: 1031d08ff; -[SCSCContentProductPlaybackScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d08a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4a778,0);
  *(undefined8 *)(param_1 + _DAT_112f4a780) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d0900; end: 1031d0933;  */

void FUN_1031d0900(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031d0934; end: 1031d096b; -[SCSCContentProductPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d0934(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4a778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a780));
  return;
}



/* Entry: 1031d096c; end: 1031d098b;  */

void FUN_1031d096c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1510);
  return;
}



/* Entry: 1031d098c; end: 1031d099b; -[_TtC29SCContentProductPlaybackSwift36SCContentProductPlaybackDataServices playbackDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d098c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f4a7b0));
  return;
}



/* Entry: 1031d099c; end: 1031d09e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d099c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a7b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d09e8; end: 1031d0a3f; -[_TtC29SCContentProductPlaybackSwift36SCContentProductPlaybackDataServices initWithPlaybackDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d09e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f4a7b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1031d0a40; end: 1031d0a9f; -[_TtC29SCContentProductPlaybackSwift36SCContentProductPlaybackDataServices init] */

void FUN_1031d0a40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentProductPlaybackSwift.SCContentProductPlaybackDataServices",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d0a6c);
  (*pcVar1)();
}



/* Entry: 1031d0aa0; end: 1031d0aaf; -[_TtC29SCContentProductPlaybackSwift36SCContentProductPlaybackDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d0aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a7b0));
  return;
}



/* Entry: 1031d0ab0; end: 1031d0acf;  */

void FUN_1031d0ab0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c15d0);
  return;
}



/* Entry: 1031d0ad0; end: 1031d0edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1031d0ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c610f8();
  lVar10 = _DAT_112f4a7e0;
  func_0x000107c61614(unaff_x20 + _DAT_112f4a7e0,0);
  *(long *)(unaff_x20 + _DAT_112f4a7e8) = param_1;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_11061f2f8;
  func_0x000107c613fc(&UNK_11061f2f8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  pcStack_80 = FUN_1031d0f2c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1031d0f34;
  puStack_88 = &UNK_11061f310;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  lVar7 = _DAT_112f4a7f0;
  *(undefined **)(unaff_x20 + _DAT_112f4a7f0) = puVar2;
  func_0x000107c61604(unaff_x20 + lVar10,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112f4a7f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a800) = param_6;
  uStack_b0 = 0;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar10 = param_1;
  func_0x000107c5def4();
  func_0x000107c61180();
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    pcStack_90 = (code *)&uStack_b0;
    func_0x000104321844(FUN_1031d1870,0,0x1031d1874,0,0x1031d1878,0,0x1031d187c,0,0x1031d1880,0,
                        0x1031d1884,0,0x1031d1888,0,FUN_1031d197c,&puStack_a0,0x1031d188c,0,
                        0x1031d1890,0,0x1031d1894,0,0x1031d1898,0,0x1031d189c,0,0x1031d18a0,0);
    func_0x000107c61170(lVar10);
    uVar11 = uStack_b0;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x000107c61174();
  lVar10 = param_1;
  func_0x000107c3e690(param_1);
  func_0x000107c61180();
  func_0x0001000bb420(lVar10 + _DAT_11306e6c0,&puStack_a0);
  func_0x000107c61170(lVar10);
  puVar6 = &uStack_b0;
  func_0x000107c6147c(puVar6,&puStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uVar1 = uStack_b0;
  if ((int)puVar6 == 0) {
    uVar1 = 0;
    uStack_a8 = 0;
  }
  lVar7 = 0;
  FUN_1031d2bd4();
  lVar10 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112f4a870) = 0;
  *(undefined **)(lVar10 + _DAT_112f4a878) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar10 + _DAT_112f4a880) = 0;
  func_0x000107c61614(lVar10 + _DAT_112f4a888,0);
  *(undefined8 *)(lVar10 + _DAT_112f4a850) = uVar11;
  *(undefined8 *)(lVar10 + _DAT_112f4a858) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112f4a860) = param_4;
  puVar6 = (undefined8 *)(lVar10 + _DAT_112f4a868);
  *puVar6 = uVar1;
  puVar6[1] = uStack_a8;
  puVar3 = PTR_s_init_1125d9248;
  lStack_c0 = lVar10;
  lStack_b8 = lVar7;
  func_0x000107c615f0(param_4);
  plVar8 = &lStack_c0;
  func_0x000107c61154(plVar8,puVar3);
  *(long **)(unaff_x20 + _DAT_112f4a808) = plVar8;
  lVar10 = *(long *)((long)plVar8 + _DAT_112f4a850);
  func_0x000107c61174();
  if (lVar10 == 0) {
    func_0x0001031d26ac();
  }
  else {
    FUN_1031d1f2c();
  }
  func_0x000107c61170(plVar8);
  puVar9 = auStack_d0;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return puVar9;
}



/* Entry: 1031d0edc; end: 1031d0f2b;  */

long FUN_1031d0edc(long param_1)

{
  long lVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c40b30();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
  return lVar1;
}



/* Entry: 1031d0f2c; end: 1031d0f33;  */

long FUN_1031d0f2c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c40b30();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 1031d0f34; end: 1031d0f6b;  */

void FUN_1031d0f34(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1031d0f6c; end: 1031d0f87;  */

void FUN_1031d0f6c(long param_1,long param_2)

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



/* Entry: 1031d0f88; end: 1031d106f; -[SCRemoteStoriesConfigProvider initWithPlaybackScope:remoteStoriesDataProviderFactory:playbackDelegate:mainQueuePerformer:circumstanceEngineServices:contentOperaPluginServices:] */

undefined8
FUN_1031d0f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_8;
  func_0x000107c61174(param_8);
  uVar2 = param_3;
  FUN_1031d1980(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1031d1070; end: 1031d10a3; -[SCRemoteStoriesConfigProvider sessionContext] */

void FUN_1031d1070(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031d10a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031d10a4; end: 1031d1207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d10a4(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = *(long *)(unaff_x20 + _DAT_112f4a7e8);
  lVar1 = lVar5;
  func_0x000107c3e690();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11306e6b8);
  func_0x000107c61170();
  func_0x000108534aa8(uVar3);
  lVar1 = lVar5;
  func_0x000107c3e690();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11306e6b8);
  func_0x000107c61170();
  func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c4deb4();
  func_0x000107c61180();
  lVar1 = _DAT_11306e638;
  func_0x000107c61428(lVar5 + _DAT_11306e638,auStack_58,0,0);
  lVar1 = lVar5 + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(lVar5);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c4e2ec(lVar1);
    func_0x000107c61170(lVar1);
  }
  uVar2 = 0;
  func_0x00010442e758(0);
  func_0x000107c610f8();
  func_0x00010442e1f8(uVar2,0,uVar3,1,0xffffffffffffffff,0,uVar4,
                      auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
  return;
}



/* Entry: 1031d1208; end: 1031d1247; -[SCRemoteStoriesConfigProvider launchingCandidates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d1208(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f4a808);
  func_0x00010442bbd4(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x00010442ba58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031d1248; end: 1031d1323; -[SCRemoteStoriesConfigProvider presentingConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d1248(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = _DAT_112f4a7e8;
  lVar6 = *(long *)(param_1 + _DAT_112f4a7e8);
  lVar1 = param_1;
  func_0x000107c61174();
  func_0x000107c4deb4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(lVar6 + _DAT_11306e640);
  func_0x000107c61170();
  lVar2 = *(long *)(param_1 + lVar2);
  func_0x000107c4deb4();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(lVar2 + _DAT_11306e658);
  func_0x000107c61170();
  uVar3 = 0;
  func_0x000104432eb0(0);
  func_0x000107c610f8();
  uVar4 = 0;
  func_0x000104432720(uVar3,0,0,0,0,uVar7,0,uVar5,0,0,0,0);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1031d1324; end: 1031d1383; -[SCRemoteStoriesConfigProvider plugins] */

void FUN_1031d1324(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031d1384();
  func_0x000107c61170(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


